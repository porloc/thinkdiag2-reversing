# ThinkCar/Launch ThinkDiag OTA & Firmware Reverse-Engineering Report

Firmware: ThinkDiag Mini (GD32F403RK, Cortex-M4, flash @ `0x08000000`),
XDiag DBSCarIII (`new_dump.bin`), TD2 (`original TD2.bin` / `original DB7.bin`).
OTA file: `DOWNLOAD.bin` **V12.05** (serial `989149735933`).

Tools: Ghidra 12.2 headless (pyghidra), capstone, pycryptodome.

---

## 1. Firmware inventory

| Device | File | Layout | Notes |
|---|---|---|---|
| ThinkDiag Mini | `Project thinkdiagmini.bin` (0x60000) | boot `[0x08000000,0x08010000)` + app `[0x08010000,0x08060000)` (V12.00) | serial `989149606406` @ 0x0fc02, device key @ 0x0f000 = **16×0x00** |
| XDiag DBSCarIII | `new_dump.bin` (0x100000) | boot V1.23.007 `[0x0,0x11000)` | DOWNLOAD.BIN strings @ 0x2910/0x7F00 |
| TD2 | `original TD2.bin` (0x100000 @ 0x00400000) | boot "Boot_TD_2" + app | AES tables @ 0x4BDDF8, serial keyder (LAUNCHPRIVELIBJM/XOR_TABLE/magic 0xFFFF7DCE) |
| TD2 (2nd chip) | `original DB7.bin` (0x100000 @ 0x00400000) | boot V1.22.004 + app | DOWNLOAD.BIN @ 0x1b8, AES tables @ 0x4CB6BC, MD5 @ 0x40A632 |

All four firmwares share the **same custom AES-128 variant** (see §4).

---

## 2. DOWNLOAD.BIN container format (td-mini, boot `FUN_080075dc` @ 0x080075dc)

The phone app streams the file to the device in `0x1000`-byte chunks.
The **first chunk is a TLV header**:

```
record := u16le type | u32le len | data[len]

type 2  len 0      format version / flags
type 8  len 4      payload size (u32le, 16-aligned, != 0)   <- V12.05: 0x00050010
type 3  len 0x71   113-byte blob: 04 || X(56) || Y(56)  (uncompressed ECC-448 point /
                  server signature — verified through the SE, FUN_08009d22)
type 5  len 0x40   64-byte expected final MAC (SE APDU INS=99 P1=2, "SER CON" key)
type 7  len 0      reserved
```

V12.05 example (bytes `02 00 | 00 00 00 00 | 08 00 | 04 00 00 00 | 10 00 05 00 | ...`):

```
header ends at 0xd3 (rest of the 0x1000 chunk is zero padding)
payload = file[0x1000 : 0x1000+0x50010)      -> flash 0x08010000..0x08060000
```

**Payload**: encrypted with a 16-byte block cipher + PKCS#7-style padding.
`0x50010 = 0x50000 (exact app-region image) + 0x10 (one full padding block)`.
First plaintext block = Cortex-M vector table (compare current app @ 0x08010000:
SP=0x2000d080, reset=0x0803c361).

Chunk protocol (boot `FUN_0800cfe4`): `[cmd][BE32 fileOffset][u16 len][data]`,
`writeAddr = fileOffset - 0x1000 + 0x08010000` (`DAT_0800d250 = 0x08010000`),
file size bound `< 0x53001`, chunks must be exactly 0x1000 bytes (`FUN_08007ab6`).

---

## 3. On-device decryption architecture (td-mini)

The bootloader does **not** decrypt in software — it delegates to an external
**secure element** (smart-card style, ISO7816 stack in the bootloader):

```
FUN_080098d0 (SE ctx init, FUN_080096fc/FUN_08003ea8 — reads SE key table,
              entries of 0x45 bytes, names "DEV CON" @ 0x0800ec0c / "SER CON" @ 0x0800ec14)

Key selection (FUN_0800cd8c):
    k = flash[0x0800f000 : 0x0800f010]     (device key)
    if k == 16×0xFF:  k = 00 01 02 ... 0f  (default @ 0x0800EADC)

SE authentication (FUN_08003b14):
    CLA=00 INS=84 GET CHALLENGE   -> 4 random bytes
    cryptogram = 3DES-EDE(k1||k2 = device key, challenge||zeros)
    CLA=00 INS=82 EXTERNAL AUTHENTICATE (8 bytes)     [FUN_080019b4, DES S-boxes @ 0xE51C]

Chunk decryption (FUN_08009dc6 -> FUN_0800ad66 -> FUN_08003d4c):
    CLA=F0 INS=99 P1=1 P2=1  "decrypt update"  (output must be 16-aligned)
    CLA=F0 INS=99 P1=1 P2=2  "decrypt final"   (padding stripped)
    -> plaintext is flashed at 0x08010000+; the SE also accumulates a MAC

Final verification (FUN_08007bb2 -> FUN_08009ffc -> FUN_08003de8):
    CLA=F0 INS=99 P1=2 P2=0  with [u16 key-id of "SER CON"][64-byte type-5 MAC]
    -> SW=0x9000 on match
```

**Consequence**: the payload key lives *inside the SE* of the target device
(and is mirrored in `flash[0x0800f000:0x0800f010]`). The dumped device
(serial 989149606406) has `00…00` there, but the V12.05 file was issued for
serial **989149735933** — a different device whose key we do not possess.

---

## 4. The "LAUNCHPRIVELIB" cipher family

All firmwares implement the same **weakened AES-128** ("2 rounds, 3 round keys"):

```
E(k, x):  ARK(K0) -> [SB+SR+MC] -> ARK(K1) -> [SB+SR] -> ARK(K2)
D(k, y):  ARK(K2) -> iSR+iSB   -> ARK(K1) -> [iMC+iSR + trailing iSB] -> ARK(K0)
K0..K2 = standard AES-128 key expansion (12 words)
```

Tables (2 KB block, all GF(2^8) products of the standard S-box):

| offset | tdmini (0x3B2AC) | TD2 (0x4BDDF8) / DB7 (0x4CB6BC) |
|---|---|---|
| +0x000 | SB (standard) | SB (standard) |
| +0x100 | ISB (standard) | ISB (standard) |
| +0x200 | 2⊗SB | 2⊗SB |
| +0x300 | 3⊗SB | 3⊗SB |
| +0x400 | 9⊗x | 9⊗x |
| +0x500 | 11⊗x | 11⊗x |
| +0x600 | **14⊗x** | 13⊗x |
| +0x700 | **13⊗x** | 14⊗x |

The tdmini's mul13/mul14 tables are swapped *relative to TD2/DB7*, but the
code slot map compensates — the **effective cipher is identical** in all
firmwares. Verified by table diff + decompilation of
`FUN_004bd898` (TD2) vs `FUN_08027ea2` (tdmini).

Reference Python implementation: `tools/decrypt_tool.py` (roundtrip-verified).

### 4.1 Serial key derivation (app region "dead code", used by phone/server side)

```
FUN_080230ec:  md5hex = md5(serial) as ASCII hex
               idx    = (0xFFFF7DCE + digits(serial[5],[4],[2],[1])) mod 8   (C semantics)
               key[j] = BE32( md5word[j] ^ XT[(idx+2j) & 7] ^ XT[(idx+2j+3) & 7] )
               key   ^= serial padded to 16 bytes with "LAUNCHPRIVELIBJM"
XT (XOR table @ 0x3C10C): be3bbac5 280bbdb2 925ab42b 046ab35c
                          a7ffd7c2 31cfd0b5 8b9ed92c 1daede5b
```

### 4.2 App↔phone secure channel (td-mini app `FUN_080232e2` / TD2 `FUN_004c9cb6` cmd 0)

`[00][len][ciphertext][crc16]` — decrypt with the channel key (RAM), verify
CRC, derive a session key, encrypt the response. Session key table slots
0xc..0xf. This is **not** the OTA path (common misconception — the 2-round
AES lives in the *app*, the OTA decryption lives in the *bootloader/SE*).

---

## 5. TD2 software OTA scheme (no SE — full software chain, `FUN_004b9172`)

```
command: [02][le16 lenA][..2B..][be16 lenB][chunk data (lenB)][field_len][field]

field  = DES-encrypt("i1,i2,i3", fixed 8-byte key 30 00 00 00 00 00 00 00 @ 0x4DA478)
         (i1,i2,i3 = 1-based indices into a 24×8-byte key table in EEPROM,
          read via FUN_004c9c98 storage API, 6×32B records, FUN_004bb458)

device:
  1. field'      = DES-decrypt(field)                       (FUN_004bd378, mode 1)
  2. idx[0..2]   = atoi(field'.split(',')) - 1              (FUN_004b907e, FUN_004bd050)
  3. 3DES key    = T[idx0] || T[idx1] || T[idx2]  (24B, first 16 used, 2-key 3DES)
  4. scratch     = 3DES-decrypt(chunk data, 3DES key)       (FUN_004bd378, keylen 0x18)
  5. image       = custom-AES-ECB-decrypt(scratch[0:0x1000], key = field[0:16])
  6. verify checksum + compare against EEPROM-stored image magic (FUN_004be5f8)
```

The Feistel core (`FUN_004bd0d0`) is a DES-class cipher: 16 rounds,
48-bit subkeys (0x30 bytes each, `FUN_004bd1aa`), 32-bit halves,
forward/backward round order = encrypt/decrypt.

## 6. DB7 (TD2 auxiliary chip) OTA scheme — plaintext!

`FUN_00408dd0` writes chunk data **unencrypted** to flash
(`FUN_0040a4da`), two image slots: `'D'` (DOWNLOAD.BIN) → flash 0x4A0000
(≤0x60000) and `'J'` → 0x410000 (≤0x70000). Final verify = MD5 over the
flashed region (`FUN_0040ae66`, MD5 rounds in `FUN_0040a632`) compared with
a 0x20-byte value from the host.

---

## 7. V12.05 decryption attempts (all failed — key is device-bound)

Tested against `file[0x1000:0x1010]` (must decrypt to a Cortex-M vector
table) and the known-plaintext padding oracle (last block = 0x10×16):

* cipher × mode: custom 2-round AES (ECB, CBC iv∈{0, offset, first-block}),
  AES-128 (ECB/CBC/CTR/CFB/OFB + parity-cleared keys), DES and 2-key 3DES
  (ECB/CBC, both key halves), extended-round and no-rcon key schedules
* keys: default `00..0f`, `00×16`, serial-derived (`989149735933`,
  `989149606406`), MD5/SHA1/SHA256 of serials, `LAUNCHPRIVELIBJM`,
  XOR-table, type-5 record as wrapped key (custom/real AES, 3DES, DES),
  type-3/type-5-derived

**Conclusion**: decrypting this file requires serial 989149735933's device
key — dump `flash[0x0800f000:0x0800f010]` (or the SE) of that unit and pass
it to `tools/ota_unpack.py --key <hex>`.

---

## 8. Tools

| file | purpose |
|---|---|
| `tools/ota_unpack.py` | DOWNLOAD.BIN container parser + offline key attempts |
| `tools/decrypt_tool.py` | custom 2-round AES + serial keyder (roundtrip-verified) |
| `tools/decompile_boot_crypto.py` | Ghidra headless: tdmini bootloader SE crypto chain |
| `tools/import_analyze_td2.py`, `tools/td2_full.py`, `tools/td2_kdf.py`, `tools/td2_des.py` | Ghidra headless: TD2 import + crypto/KDF extraction |
| `tools/db7_full.py`, `tools/db7_chain.py`, `tools/db7_ota.py` | Ghidra headless: DB7 import + OTA/crypto chain |
| `analysis/tdmini/*.c` | decompiled functions (tdmini boot + app) |
| `analysis/td2/*.c`, `analysis/db7/*.c` | decompiled functions (TD2, DB7) |

## 9. Key addresses (tdmini dump, file offset = flash - 0x08000000)

```
0x0EAEC  "DOWNLOAD.BIN"
0x0EADC  default AES key 00 01 02 ... 0f
0xEC0C   "DEV CON"   0xEC14 "SER CON"      (SE key-table entry names)
0x0F000  device key (16 bytes, 0xFF-check; dumped device: 00×16)
0x0FC02  device serial ASCII "989149606406"
0x0D250  -> 0x08010000  app flash base (DAT_0800d250)
boot handlers: 0xCDE2 start / 0xCFE4 chunk / 0xD17E finish / 0x75DC TLV parse
SE stack: 0x96FC ctx, 0x9A1A set-key, 0x9DC6 buffer, 0xAD66/0x3D4C APDU decrypt,
          0x3A82 GET CHALLENGE, 0x3B14 EXTERNAL AUTH, 0x3DE8 APDU MAC-verify
app crypto: 0x27A90 SB+SR, 0x27B3A iSB+iSR, 0x27BE4 SB+SR+MC, 0x27EA2 iMC,
          0x280E8 ARK, 0x28108 key expansion, 0x28244/0x28308 block enc/dec,
          0x283C4/0x283FC ECB enc/dec, 0x230EC serial keyder
tables: 0x3B2AC (2 KB AES), 0x3C10C XOR table, 0x3C298 "LAUNCHPRIVELIBJM"
```
