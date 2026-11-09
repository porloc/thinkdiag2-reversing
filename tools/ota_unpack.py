#!/usr/bin/env python3
"""
ThinkCar/Launch DOWNLOAD.BIN OTA unpacker.

Container format (reverse-engineered from the ThinkDiag Mini bootloader,
Ghidra analysis of FUN_080075dc @ 0x080075dc — the TLV header parser):

  The file is sent to the device in 0x1000-byte chunks over the diagnostic
  protocol.  The FIRST chunk (file offset 0..0x1000) is a TLV header:

      record := u16le type, u32le len, byte data[len]

      type 2 : empty          - format version/flags
      type 8 : len 4          - payload size (u32le) — must be 16-aligned, != 0
      type 3 : len 0x71 (113) - signature / server ECC public key (04||X||Y, ECC-448)
      type 5 : len 0x40 (64)  - expected final MAC (verified via SE APDU INS=99 P1=2)
      type 7 : len 0          - reserved/empty

  Payload: file[0x1000 : 0x1000+size) — encrypted with a 16-byte block cipher
  + PKCS#7-style padding (image sizes that are exact multiples of 16 get one
  full 0x10*16 padding block).  Written to flash at 0x08010000 (the app region
  [0x08010000, 0x08060000) on the GD32F403RK), i.e. the first plaintext block
  is the Cortex-M vector table (SP=0x2000xxxx, reset=0x08xxxxxx|1).

Decryption path on the device (bootloader @ [0x08000000, 0x08010000)):
  * protocol: [cmd][BE32 fileOffset][u16 len][data], writeAddr = offset-0x1000+0x08010000
  * chunks are decrypted by an EXTERNAL SECURE ELEMENT over an ISO7816-style
    APDU link:
        CLA=00 INS=84 (GET CHALLENGE, 4 bytes)
        CLA=00 INS=82 (EXTERNAL AUTH, 8-byte 3DES-EDE(k1||k2) cryptogram)
        CLA=F0 INS=99 P1=1 P2=1/2 (decrypt update/final, CBC-chained + MAC)
        CLA=F0 INS=99 P1=2 P2=0 (final MAC verify, 64-byte expected MAC)
  * the AES key used by the SE is selected by FUN_0800cd8c:
        flash[0x0800f000:0x0800f010] (device key) if not all-0xFF,
        else the built-in default 00 01 02 ... 0f  (@ 0x0800EADC)
  * the device key is per-device (provisioned in the SE + written to flash),
    therefore files downloaded for serial X can only be decrypted by
    device X (or with X's key material).

This tool unpacks the container and attempts decryption with every key
that can be derived offline (default key, serial-derived key, etc.).
If none works, the file needs the target device's SE key.

Usage:
  python3 ota_unpack.py DOWNLOAD.bin [--serial 989149735933] [--key HEX] [--out DIR]
"""
import argparse
import hashlib
import os
import struct
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__))))
from decrypt_tool import (expand_key, decrypt_block, encrypt_block,
                          derive_serial_key, DEFAULT_KEY, ecb_decrypt, ecb_encrypt)

APP_FLASH_BASE = 0x08010000          # DAT_0800d250
HEADER_SIZE = 0x1000                 # first chunk = TLV header
MAX_FILE_SIZE = 0x53001              # bound check in FUN_0800cde2


def parse_header(data):
    """Parse the TLV header records (FUN_080075dc)."""
    if len(data) < HEADER_SIZE:
        raise ValueError("file smaller than the 0x1000-byte header chunk")
    records = []
    off = 0
    while off + 6 <= HEADER_SIZE:
        rtype = struct.unpack_from('<H', data, off)[0]
        if rtype == 0:
            break
        rlen = struct.unpack_from('<I', data, off + 2)[0]
        if off + 6 + rlen > HEADER_SIZE:
            raise ValueError(f"record type {rtype} length {rlen:#x} overflows header")
        records.append({'type': rtype, 'len': rlen, 'off': off + 6,
                        'data': data[off + 6:off + 6 + rlen]})
        off += 6 + rlen
    return records, off


def payload_size(records):
    for r in records:
        if r['type'] == 8 and r['len'] == 4:
            return struct.unpack('<I', r['data'])[0]
    return None


def looks_like_vectors(b):
    if len(b) < 8:
        return False
    sp, reset = struct.unpack_from('<II', b, 0)
    return (0x20000000 <= sp < 0x20080000 and
            APP_FLASH_BASE <= reset < APP_FLASH_BASE + 0x100000 and
            reset & 1)


def try_decrypt(payload, key, label):
    """Try the custom 2-round AES + standard AES in ECB/CBC(iv=0) with `key`.
    Returns list of (mode, plaintext-first-block) hits that look like a
    Cortex-M vector table."""
    hits = []
    rk = expand_key(key)
    pt = ecb_decrypt(payload[:64], key)
    if looks_like_vectors(pt):
        hits.append((f'{label} custom-AES-ECB', pt))
    pt = b''
    prev = b'\x00' * 16
    for i in range(0, 64, 16):
        blk = decrypt_block(payload[i:i + 16], rk)
        pt += bytes(a ^ b for a, b in zip(blk, prev))
        prev = payload[i:i + 16]
    if looks_like_vectors(pt):
        hits.append((f'{label} custom-AES-CBC(iv=0)', pt))
    try:
        from Crypto.Cipher import AES
        pt = AES.new(key, AES.MODE_ECB).decrypt(payload[:64])
        if looks_like_vectors(pt):
            hits.append((f'{label} AES-128-ECB', pt))
        pt = AES.new(key, AES.MODE_CBC, iv=b'\x00' * 16).decrypt(payload[:64])
        if looks_like_vectors(pt):
            hits.append((f'{label} AES-128-CBC(iv=0)', pt))
    except ImportError:
        pass
    return hits


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('file', help='DOWNLOAD.bin (decrypted container)')
    ap.add_argument('--serial', help='device serial to derive a key from')
    ap.add_argument('--key', help='extra 16-byte key (hex)')
    ap.add_argument('--out', default='unpacked', help='output directory')
    ap.add_argument('--dump-plaintext', action='store_true',
                    help='write decrypted payload when a key matches')
    args = ap.parse_args()

    data = open(args.file, 'rb').read()
    print(f"[*] {args.file}: {len(data):#x} bytes")

    records, hdr_end = parse_header(data)
    print(f"[*] header records ({hdr_end:#x} bytes used):")
    for r in records:
        preview = r['data'][:32].hex() + ('...' if r['len'] > 32 else '')
        print(f"    type={r['type']:2d} len={r['len']:#06x} @ {r['off']:#06x}: {preview}")

    psize = payload_size(records)
    if psize is None:
        print("[!] no type-8 payload-size record found")
        return 1
    pstart = HEADER_SIZE
    pend = pstart + psize
    print(f"[*] payload: [{pstart:#x}, {pend:#x}) size={psize:#x} "
          f"-> flash {APP_FLASH_BASE:#010x}..{APP_FLASH_BASE + psize:#010x}")
    if pend > len(data):
        print(f"[!] payload extends past EOF ({len(data):#x})")
        return 1

    payload = data[pstart:pend]
    pad = payload[-16:]
    if pad == b'\x10' * 16:
        print(f"[*] last block is a full PKCS#7 padding block "
              f"(image size = {psize - 16:#x}, exactly the 0x50000 app region)" if psize == 0x50010 else
              f"[*] last block is a full PKCS#7 padding block (image size = {psize - 0x10:#x})")

    print("[*] attempting offline decryption…")
    candidates = [('default 00..0f', DEFAULT_KEY), ('device zeros', b'\x00' * 16)]
    if args.serial:
        candidates.append((f'serial {args.serial}', derive_serial_key(args.serial.encode())))
    if args.key:
        candidates.append(('user key', bytes.fromhex(args.key)))

    os.makedirs(args.out, exist_ok=True)
    any_hit = False
    for label, key in candidates:
        for mode, pt in try_decrypt(payload, key, label):
            any_hit = True
            print(f"[+] HIT: {mode}: {pt[:16].hex()}")
            if args.dump_plaintext:
                # decrypt whole payload in the winning mode
                mode_name = mode.split()[-1]
                if 'custom-AES-ECB' in mode:
                    full = ecb_decrypt(payload, key)
                elif 'custom-AES-CBC' in mode:
                    rk = expand_key(key)
                    full = b''
                    prev = b'\x00' * 16
                    for i in range(0, len(payload) - 15, 16):
                        blk = decrypt_block(payload[i:i + 16], rk)
                        full += bytes(a ^ b for a, b in zip(blk, prev))
                        prev = payload[i:i + 16]
                else:
                    from Crypto.Cipher import AES
                    m = AES.MODE_ECB if 'ECB' in mode else AES.MODE_CBC
                    kw = {} if m == AES.MODE_ECB else {'iv': b'\x00' * 16}
                    full = AES.new(key, m, **kw).decrypt(payload)
                # strip PKCS#7
                n = full[-1]
                if 1 <= n <= 16 and full[-n:] == bytes([n]) * n:
                    full = full[:-n]
                out = os.path.join(args.out, 'image.bin')
                open(out, 'wb').write(full)
                print(f"[+] wrote {out} ({len(full):#x} bytes)")
    if not any_hit:
        print("[-] no offline key worked.")
        print("    The payload is encrypted with the target device's secure-element")
        print("    key (selected by FUN_0800cd8c from flash[0x0800f000] or the default).")
        print("    Provide the device key with --key, or dump flash 0x0800f000..0x0800f010")
        print("    of the device the file was generated for (serial folder name).")

    # always write the raw encrypted payload + records for further work
    open(os.path.join(args.out, 'payload.enc'), 'wb').write(payload)
    for r in records:
        if r['len']:
            open(os.path.join(args.out, f'record_t{r["type"]}.bin'), 'wb').write(r['data'])
    print(f"[*] wrote payload.enc + record files to {args.out}/")
    return 0


if __name__ == '__main__':
    sys.exit(main())
