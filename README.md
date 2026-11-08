# ThinkDiag 2 (Thinkcar) OTA Update Reverse Engineering

Reverse engineering of the OTA firmware update mechanism of the Thinkcar ThinkDiag 2
OBD2 diagnostic adapter (MCU: Microchip ATSAME70Q20A, ARM Cortex-M7).

**Status: staged OTA file 100% decrypted, full update protocol reversed. The
standalone DOWNLOAD.BIN (newer V12.05 format) is confirmed AES-class (16-byte
block period) — key derivation WIP.**

## Quick results

| Item | Value |
|------|-------|
| OTA payload cipher (old format) | Custom DES, ECB, LSB-first bit convention |
| Verified decryption of the staged OTA file left in flash | **100% match** with the running app at 0x4A0000 |
| Per-chunk key of the staged file | ASCII `92584457` (8 digits, from the device master key table) |
| Serial-derived DES key (per device) | `serial[4:8] + serial[2:6]` (8 ASCII digits) |
| Dumped device serial key (brute-forced, selector decrypts to `2,5,14`) | `30808430` → serial = `??843080????` |
| Master key table | 24 × 8-digit ASCII DES keys, stored in config records 10–15 (192 bytes), encrypted at rest |
| Newer firmware (V12.05 DOWNLOAD.BIN) | 16-byte block period in ciphertext padding → AES-class cipher, all firmwares contain AES S-box in the app region |

## Flash layout (TD2 dump, 1 MB)

```
0x00400000  bootloader (256 KB)   — contains the OTA handlers, custom DES, master-key reader
0x00410000  (mostly unused)
0x00440000  OTA staging area      — leftover ENCRYPTED update file from a previous OTA (0x5F498 bytes)
0x004A0000  application           — DECRYPTED image (the result of that OTA)
0x004DB000  end of app data
0x00500000  end of flash
```

The staged file + the running app form a **complete known-plaintext / ciphertext
pair** which allowed verifying every step of the crypto.

## The OTA protocol (bootloader @ 0x403740..0x4093C4)

Phone app → bootloader over BLE, commands dispatched at **0x4060D0**:

### cmd=2 — start download (handler 0x408D4C)
```
[0x02][BE16 len=12]["DOWNLOAD.BIN"][BE32 total_size]
```
- reads config 0 (device serial, tag 0x000D) — must be present
- total_size ≤ 0x5F800
- erases flash 0x440000 (0x30 units)
- sets write base = 0x440000

### cmd=3 — data chunk (handler 0x408F04)
```
[0x03][BE32 offset][BE16 len][data len bytes]
```
- writes raw data at 0x440000+offset (len rounded up to 4 for flash write)

### cmd=4 — finish/verify/decrypt (handler 0x40903E)
The phone app sends the whole re-wrapped stream:
```
[BE16 chunk_len ≤ 0x400][trailer_len][encrypted chunk data (chunk_len bytes)]  × N
[len][DES(serial-key) encrypted selector chunk][BE16 r5]["Launch_Limited_ED"]
```
Bootloader then:
1. Verifies product name `Launch_Limited_ED` at the end (memcmp, 0x11 bytes)
2. `r5 = BE16` at end-0x13, selector at `end-0x13-r5`, len byte before it
3. **Decrypts the selector chunk with DES, key = `serial[4:8] + serial[2:6]`**
4. Selector = CSV `"a,b,c"` → indices `(a-1, b-1, c-1)` into the master key table
5. Per-chunk key = `master[i0][0:2] + master[i1][0:4] + master[i2][0:2]` (8 bytes!)
6. Decrypts every chunk (DES-ECB, mode=1), strips `trailer_len` padding bytes
7. Writes plaintext to **0x4A0000** (app region), verifies, boots

### Staged file trailer (real example from the dump)
```
... 08 | D2 65 1D F4 2F D0 BF 35 | 05 | "1,2,3" | 00 | 0F | "Launch_Limited_ED" | 97 0D
      ^len    ^encrypted selector    ^len2 ^plaintext selector (app-side copy)
                                                          ^r5=15         ^CRC16?
```
- encrypted selector decrypts (serial key `30808430`) to `"2,5,14\0\0"`
- plaintext `"1,2,3"` is the app-visible copy of the indices

## The custom DES (bootloader 0x406FB8..0x407372)

Standard DES tables (verified byte-identical in flash at 0x40DC30..0x40E200),
but implemented with **LSB-first bit convention** (each bit = one byte in RAM):

- bits_of:          0x40725C — byte → 8 bit-bytes, LSB first
- permute:          0x4071DA — out[i] = in[table[i]-1]
- xor:              0x407212
- rotate C/D:       0x40722C
- f-function:       0x40713A (E table @0x40E0DC, S-boxes @0x40DC30, P @0x40E180)
- key expansion:    0x4070E2 (PC1 @0x40E0A4, PC2 @0x40E10C, SH @0x40E1F0)
- block enc/dec:    0x407008 (IP @0x40DFE4, FP @0x40E024)
- driver wrapper:   0x4072B0 — `des(dst, src, len, key, keylen, mode)`; keylen≥9 → 2-key 3DES (EDE)
- state pointers (set once at boot): 0x204020F4→L(0x20410D24), 0x204020F8→R(0x20410D44),
  0x204020FC→C(0x20410D64), 0x20402100→D(0x20410D80)

`mode=0` = encrypt, `mode≠0` = decrypt.

Verified against real code with a Unicorn emulation of the bootloader
(`tools/des_emu.py`); Python implementation (`tools/td2des.py`, `tools/td2des_fast.py`)
matches the emulated firmware byte-for-byte.

## Key derivation chains

```
serial (12 digits, config record 0, tag 0x000D)
   └── serial[4:8] + serial[2:6]                    → 8-char DES key (per-device)

master key table (config records 10..15, 6 × 32 B = 24 DES keys, 8 ASCII digits each)
   └── selector "i0,i1,i2" (per update, DES-encrypted with the serial key)
       └── master[i0-1][0:2] + master[i1-1][0:4] + master[i2-1][0:2]  → per-chunk DES key
```

## Known plaintexts (from the dump)

- Staged chunk #1 ciphertext `6ea4109a859ff2c4` ↔ plaintext `78974020979d4d00`
  (app initial SP 0x20409778 + reset vector 0x004D9D97)
- Staged FF-padding ciphertext `0d7c04970dccd1fa` ↔ plaintext `ffffffffffffffff`

## The newer DOWNLOAD.BIN (V12.05) — WIP

File layout:
```
0x000000  208-byte header (metadata + encrypted sections)
0x0000D0  zero padding
0x001000  encrypted payload (0x50010 bytes)
0x051010  zero padding to 0x52000
```

Header plaintext fields (LE32): `2, 0x00080000, 4, 0x00050010 (payload size), 0x00710003, 0xCA040000`
plus encrypted sections [0x18:0x88] (112 B = 7×16) and [0x90:0xD0] (64 B = 4×16).

Payload statistics: two 8-byte ciphertext values alternate with **exact 16-byte
period** for 8467×16 bytes (`ad5696fa7f922fc7` / `cc936f55b08a34fb`) — a 16-byte
block cipher over a constant padding → **AES-class**, not the old 8-byte DES
(verified: no 8-digit DES key maps either block to any constant fill, and no
8-digit key produces valid ARM vectors at payload start).

All firmware images (TD2, DB7, thinkdiag mini) contain an AES S-box in the
*application* region (TD2: 0x4BDDF8) — the newer update path is app-side AES.

## The thinkdiagmini dump (second device, STM32)

- bootloader 0x08000000–0x08010000, app 0x08010000+ (384 KB dump)
- **same custom DES tables** in the bootloader (0x0800E51C..0x0800E952)
- **RSA public key** in the bootloader @0x0800DC4C: N = 220 bytes (1753 bits),
  e = 65537 (`00 01 00 01` @0x0800DE4C)
- config area in flash @0x0800FC00:
  `[000D "989149606406\0"][000A "V1.00.000\0"][0009 "20211025\0"][00DE <222-byte encrypted blob>][0003 "13\0"][0001 \0]`
  the 222-byte blob = the encrypted master-key-table storage (per-device)
- update flow: `d02` = start (filename `DOWNLOAD.BIN`, BE32 size), data written
  directly to flash 0x08010000 (older path — no decryption in its bootloader)
- AES S-box in the app @0x0803B2AC (+ inverse @0x0803B3AC)

## Tools

- `tools/disasm.py` — Thumb-2 disassembler with literal-pool annotation (capstone)
- `tools/td2des.py` / `tools/td2des_fast.py` — the custom DES (verified)
- `tools/des_emu.py` — Unicorn emulation of the actual bootloader DES driver
- `tools/brute_des2.c` — optimized OpenMP brute-forcer (digits/hex/csv/vectors/pair/cbc modes)
- `tools/mot2bin.py` — Motorola S-record → bin
- `tools/unpack_staged.py` — decrypts the staged OTA file from the TD2 dump

## Usage

```bash
# decrypt the staged OTA file from the TD2 dump (key already recovered)
python3 tools/unpack_staged.py fw_extract/TD2.bin --out staged_decrypted.bin

# brute-force a per-chunk key from a known plaintext/ciphertext pair
gcc -O3 -march=native -fopenmp -o brute_des2 tools/brute_des2.c
./brute_des2 <ct-hex> <pt-hex> digits
```
