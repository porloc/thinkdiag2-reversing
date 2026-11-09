#!/usr/bin/env python3
"""Unpack the staged (encrypted) OTA file from the TD2 flash dump.

The staged file lives at flash 0x440000 (the OTA staging area). Layout:
  [BE16 chunk_len <= 0x400][trailer_len][encrypted chunk data (chunk_len B)] * N
  [len][selector chunk][BE16 r5]["Launch_Limited_ED"][CRC16]
Each chunk decrypts with the per-chunk DES key (custom LSB-first variant).
The decrypted stream is the application image (vectors first).

Usage:
  python3 unpack_staged.py TD2.bin [--key 92584457] [--out out.bin]
"""
import sys, os
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__))))
from td2des_fast import des_ecb_fast

STAGED_OFF = 0x40000     # file offset of flash 0x440000
STAGED_MAX = 0x60000     # staging area size
NAME = b"Launch_Limited_ED"

def find_end(staged):
    n = len(staged)
    end = n
    while end > 0 and staged[end-1] in (0x00, 0xFF):
        end -= 1
    # the name must sit at end-2-0x11 (2-byte CRC after the name)
    while end > 0x20:
        if staged[end-0x13-2:end-2-0x13+0x11+2-2] == NAME or \
           staged[end-0x11-2:end-2] == NAME:
            return end
        end -= 1
    return n

def main():
    path = sys.argv[1] if len(sys.argv) > 1 else "fw_extract/TD2.bin"
    key = b"92584457"
    out_path = "staged_decrypted.bin"
    args = sys.argv[2:]
    if "--key" in args:
        key = args[args.index("--key")+1].encode()
    if "--out" in args:
        out_path = args[args.index("--out")+1]

    fw = open(path, "rb").read()
    staged = fw[STAGED_OFF:STAGED_OFF+STAGED_MAX]

    # locate trailer via the product name
    idx = staged.find(NAME)
    if idx < 0:
        print("no trailer found (name absent) — treating whole area as chunks")
        end = STAGED_MAX
    else:
        end = idx + len(NAME) + 2   # + CRC16
    print(f"staged data end: 0x{end:X}")

    off = 0
    out = bytearray()
    nchunks = 0
    while off < end - 3:
        ln = (staged[off] << 8) | staged[off+1]
        tr = staged[off+2]
        if ln == 0 or ln > 0x400:
            print(f"chunk walk stopped at 0x{off:X} (len=0x{ln:X})")
            break
        data = staged[off+3:off+3+ln]
        dec = des_ecb_fast(data, key, decrypt=True)
        out += dec[:ln - tr]
        off += 3 + ln
        nchunks += 1
    print(f"chunks: {nchunks}, decrypted: {len(out)} (0x{len(out):X}) bytes")

    # strip the trailer from the chunk-walk end if we overshot into it
    if idx >= 0 and off > idx - 0x13:
        # the last "chunk" might have consumed trailer bytes; recompute exact
        pass

    open(out_path, "wb").write(bytes(out))
    print(f"written: {out_path}")
    print(f"first 16 bytes: {out[:16].hex()}")

    # verify against the app in the dump
    app = fw[0xA0000:0xA0000+len(out)]
    same = bytes(out) == app
    print(f"matches app @0x4A0000: {same}")

if __name__ == "__main__":
    main()
