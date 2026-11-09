# DOWNLOAD.BIN OTA — Technical Deep-Dive (Session 8)

Full English technical report of Session 8. Russian summary: ANALYSIS_REPORT.md §Session 8.

## 1. Firmware inventory

| Device | File | Layout | Notes |
|---|---|---|---|
| ThinkDiag Mini | `Project thinkdiagmini.bin` (0x60000) | boot `[0x08000000,0x08010000)` + app `[0x08010000,0x08060000)` (V12.00) | serial `989149606406` @ 0x0fc02, device key @ 0x0f000 = **16×0x00** |
| XDiag DBSCarIII | `new_dump.bin` (0x100000) | boot V1.23.007 `[0x0,0x11000)` | DOWNLOAD.BIN strings @ 0x2910/0x7F00 |
| TD2 | `original TD2.bin` (0x100000 @ 0x00400000) | boot "Boot_TD_2" + app | AES tables @ 0x4BDDF8, serial keyder (LAUNCHPRIVELIBJM/XOR_TABLE/magic 0xFFFF7DCE) |
| TD2 (2nd chip) | `original DB7.bin` (0x100000 @ 0x00400000) | boot V1.22.004 + app | DOWNLOAD.BIN @ 0x1b8, AES tables @ 0x4CB6BC, MD5 @ 0x40A632 |

All four firmwares share the **same custom AES-128 variant** (see §4).

## 2. DOWNLOAD.BIN container format (td-mini boot `FUN_080075dc`)

The phone streams the file in 0x1000-byte chunks; the first chunk is a TLV header:

```
record := u16le type | u32le len | data[len]

type 2  len 0      format version / flags
type 8  len 4      payload size (u32le, 16-aligned)   V12.05: 0x00050010
type 3  len 0x71   113B: 04 || X(56) || Y(56)  (ECC-448 point / server sig)
type 5  len 0x40   64B expected final MAC (SE INS=99 P1=2, "SER CON" key)
type 7  len 0      reserved
```

Payload = `file[0x1000 : 0x1000+size)` → flash 0x08010000 (app region).
`0x50010 = 0x50000 image + 0x10 full PKCS#7 padding block`.
First plaintext block = Cortex-M vector table (current app: SP=0x2000D080, reset=0x0803C361).

Chunk protocol (boot `FUN_0800cfe4`): `[cmd][BE32 fileOffset][u16 len][data]`,
`writeAddr = fileOffset - 0x1000 + 0x08010000`, size < 0x53001, chunks exactly 0x1000.

## 3. On-device decryption (td-mini) — secure element

```
FUN_080098d0  SE ctx init (key table, 0x45-byte entries: "DEV CON"/"SER CON")
FUN_0800cd8c  key selection:
                  k = flash[0x0800f000:0x0800f010]
                  if k == FF×16: k = 00 01 02 .. 0f   (@0x0800EADC)
FUN_08003b14  auth: INS=84 GET CHALLENGE(4B) ->
              3DES-EDE(k1||k2, chal||0) -> INS=82 EXTERNAL AUTH(8B)
              [FUN_080019b4, DES S-boxes @0xE51C]
FUN_08009dc6->0800ad66->08003d4c   CLA=F0 INS=99 P1=1 P2=1/2 decrypt update/final
FUN_08007bb2->08009ffc->08003de8   CLA=F0 INS=99 P1=2 P2=0 final MAC verify
```

The payload key lives inside the SE (mirrored at flash 0x0800f000) — per device.

## 4. The LAUNCHPRIVELIB cipher family

```
E(k,x):  ARK(K0) -> [SB+SR+MC] -> ARK(K1) -> [SB+SR] -> ARK(K2)
D(k,y):  ARK(K2) -> iSR+iSB   -> ARK(K1) -> [iMC+iSR + trailing iSB] -> ARK(K0)
K0..K2  = standard AES-128 expansion (12 words)
```

Tables: SB, ISB, 2⊗SB, 3⊗SB, 9⊗x, 11⊗x, then (tdmini: 14⊗x, 13⊗x) vs
(TD2/DB7: 13⊗x, 14⊗x) at +0x600/+0x700 — swapped placement, compensated by
code slot maps ⇒ identical effective cipher everywhere.
Reference implementation: `tools/decrypt_tool.py` (roundtrip-verified).

Serial key derivation (app "dead code", phone/server side):
```
md5hex = md5(serial) ascii-hex;  idx = (0xFFFF7DCE + digits s[5],s[4],s[2],s[1]) mod 8
key[j] = BE32(md5word[j] ^ XT[(idx+2j)&7] ^ XT[(idx+2j+3)&7]);  key ^= serial||"LAUNCHPRIVELIBJM"
XT @0x3C10C: be3bbac5 280bbdb2 925ab42b 046ab35c a7ffd7c2 31cfd0b5 8b9ed92c 1daede5b
```

App↔phone secure channel (NOT the OTA path): `FUN_080232e2` /
TD2 `FUN_004c9cb6` cmd 0: `[00][len][ct][crc16]` decrypt→CRC→session-key→encrypt.

## 5. TD2 software OTA (`FUN_004b9172`)

```
cmd: [02][le16 lenA][2B][be16 lenB][chunk][field_len][field]
field = DES("i1,i2,i3", key 3000000000000000 @0x4DA478)
device: field'=DES-dec → idx=atoi−1 → 3DES key = T[i0]||T[i1]||T[i2] (24×8B EEPROM table,
        FUN_004c9c98/FUN_004bb458)
        scratch = 3DES-dec(chunk) → image = custom-AES-ECB-dec(scratch, key=field[0:16])
```
Feistel core `FUN_004bd0d0`: 16 rounds, 48-bit subkeys (DES-class).

## 6. DB7 OTA — plaintext + MD5

`FUN_00408dd0` writes chunks unencrypted; slots 'D'→0x4A0000 (≤0x60000),
'J'→0x410000 (≤0x70000); final verify = MD5 over the flash region
(`FUN_0040ae66`) vs a 0x20-byte host value.

## 7. Offline decryption of V12.05 — exhaustively tested, impossible without the device key

cipher×mode: custom AES (ECB, CBC iv variants), AES-128 (ECB/CBC/CTR/CFB/OFB,
parity keys), DES/3DES (ECB/CBC), alternate schedules;
keys (~20): default, zeros, serial-derived (both serials), hashes, brand
strings, XOR table, type-5-wrapped;
oracle: vector-table check + known-plaintext padding block.

⇒ Get `flash[0x0800f000:0x0800f010]` of serial 989149735933's unit, then:
`python3 tools/ota_unpack.py DOWNLOAD.bin --key <hex> --dump-plaintext`

## 8. Key addresses (tdmini dump)

```
0x0EAEC  "DOWNLOAD.BIN"          0x0EADC  default key 00..0f
0xEC0C   "DEV CON"  0xEC14 "SER CON"     (SE key-table names)
0x0F000  device key (16B)         0x0FC02  serial "989149606406"
0x0D250  -> 0x08010000 app base (DAT_0800d250)
boot: 0xCDE2 start / 0xCFE4 chunk / 0xD17E finish / 0x75DC TLV parse
SE:   0x96FC ctx / 0x9A1A set-key / 0x9DC6 buf / 0xAD66+0x3D4C decrypt APDU /
      0x3A82 challenge / 0x3B14 ext-auth / 0x3DE8 MAC-verify
app:  0x27A90 SB+SR / 0x27B3A iSB+iSR / 0x27BE4 SB+SR+MC / 0x27EA2 iMC /
      0x280E8 ARK / 0x28108 expand / 0x28244+0x28308 block / 0x283C4+0x283FC ECB /
      0x230EC serial keyder
tables: 0x3B2AC (2KB AES) / 0x3C10C XOR / 0x3C298 "LAUNCHPRIVELIBJM"
```
