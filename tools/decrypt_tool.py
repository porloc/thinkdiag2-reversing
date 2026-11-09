#!/usr/bin/env python3
"""
ThinkCar/Launch ThinkDiag Mini — DOWNLOAD.BIN OTA decryption tool.

Reverse-engineered from firmware 'Project thinkdiagmini.bin' (GD32F403RK, Cortex-M4).
Custom AES-128 variant: 2 rounds, 3 round keys (standard AES-128 key expansion,
but only 12 words). ECB mode. Tables & code:

  Encrypt block   FUN_08028244 @ 0x08028244
  Decrypt block   FUN_08028308 @ 0x08028308
  Key expansion   FUN_08028108 @ 0x08028108  (standard AES-128, 3 round keys)
  AddRoundKey     FUN_080280e8 @ 0x080280e8
  SB+SR (enc)     FUN_08027a90 @ 0x08027a90  (S-box @ 0x0803B2AC)
  SB+SR+MC (enc)  FUN_08027be4 @ 0x08027be4  (2SB @ 0x0803B4AC, 3SB @ 0x0803B5AC)
  iSB+iSR (dec)   FUN_08027b3a @ 0x08027b3a  (InvS-box @ 0x0803B3AC)
  iMC+iSR+iSB(dec)FUN_08027ea2 @ 0x08027ea2  (mul14 @ 0x0803B9AC, mul11 @ 0x0803B7AC,
                                               mul13 @ 0x0803B8AC, mul9 @ 0x0803B6AC)
  ECB decrypt     FUN_080283fc @ 0x080283fc
  ECB encrypt     FUN_080283c4 @ 0x080283c4
  Serial keyder   FUN_080230ec @ 0x080230ec  (MD5 + XOR table @ 0x0803C10C +
                                               fill "LAUNCHPRIVELIBJM" @ 0x0803C298)

Default bootloader key (when no device key stored): 00 01 02 ... 0f  (const @ 0x0800EADC)
"""
import hashlib
import struct
import sys

# ----------------------------------------------------------------------------
# Tables extracted from firmware (kept as module constants for offline use)
# ----------------------------------------------------------------------------
FIRMWARE = '/home/z/thinkdiag/downloads/tdmini_extract/Project thinkdiagmini.bin'

def extract_tables(fw_path=FIRMWARE):
    with open(fw_path, 'rb') as f:
        f.seek(0x3B2AC)
        blob = f.read(8 * 256)
    return {
        'SB':   blob[0x000:0x100],   # S-box        @ 0x3B2AC
        'ISB':  blob[0x100:0x200],   # InvS-box     @ 0x3B3AC
        'T2':   blob[0x200:0x300],   # 2*SB         @ 0x3B4AC
        'T3':   blob[0x300:0x400],   # 3*SB         @ 0x3B5AC
        'M9':   blob[0x400:0x500],   # mul9         @ 0x3B6AC
        'M11':  blob[0x500:0x600],   # mul11        @ 0x3B7AC
        'M13':  blob[0x600:0x700],   # mul13        @ 0x3B8AC
        'M14':  blob[0x700:0x800],   # mul14        @ 0x3B9AC
    }

T = extract_tables()
SB, ISB = T['SB'], T['ISB']
T2, T3 = T['T2'], T['T3']
M9, M11, M13, M14 = T['M9'], T['M11'], T['M13'], T['M14']

RCON = bytes([0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36])

XOR_TABLE = bytes.fromhex('be3bbac5280bbdb2925ab42b046ab35c'
                          'a7ffd7c231cfd0b58b9ed92c1daede5b')      # @ 0x3C10C
FILL_CONST = b'LAUNCHPRIVELIBJM\x00\x00\x00\x00'                   # @ 0x3C298
IDX_MAGIC  = 0xFFFF7DCE                                            # @ 0x23700


# ----------------------------------------------------------------------------
# Key expansion — FUN_08028108 (standard AES-128, 3 round keys)
# ----------------------------------------------------------------------------
def expand_key(master):
    """master: 16 bytes -> 48 bytes (3 round keys K0,K1,K2)."""
    w = list(master)  # 16 bytes = W[0..3]
    for i in range(4, 12):
        t = w[(i - 1) * 4:(i - 1) * 4 + 4]
        if i % 4 == 0:
            # RotWord + SubWord + Rcon  (byte order per FUN_08028108)
            t = [SB[t[1]] ^ RCON[i >> 2], SB[t[2]], SB[t[3]], SB[t[0]]]
        for k in range(4):
            w.append(t[k] ^ w[(i - 4) * 4 + k])
    return bytes(w)


# ----------------------------------------------------------------------------
# Round primitives — exact transcription of the decompiled functions
# ----------------------------------------------------------------------------
def add_round_key(state, rk):
    for i in range(16):
        state[i] ^= rk[i]


def sub_shift_rows(state):
    """FUN_08027a90: SubBytes + ShiftRows (rows rotate left)."""
    s = state
    out = [0] * 16
    # Row0: 0,4,8,12 stay
    out[0] = SB[s[0]]; out[4] = SB[s[4]]; out[8] = SB[s[8]]; out[12] = SB[s[12]]
    # Row1: 1,5,9,13 -> 5,9,13,1
    out[1] = SB[s[5]]; out[5] = SB[s[9]]; out[9] = SB[s[13]]; out[13] = SB[s[1]]
    # Row2: 2,6,10,14 -> 10,14,2,6
    out[2] = SB[s[10]]; out[6] = SB[s[14]]; out[10] = SB[s[2]]; out[14] = SB[s[6]]
    # Row3: 3,7,11,15 -> 15,3,7,11
    out[3] = SB[s[15]]; out[7] = SB[s[3]]; out[11] = SB[s[7]]; out[15] = SB[s[11]]
    state[:] = out


def inv_sub_shift_rows(state):
    """FUN_08027b3a: InvSubBytes + InvShiftRows (rows rotate right)."""
    s = state
    out = [0] * 16
    # Row0: 0,4,8,12 stay
    out[0] = ISB[s[0]]; out[4] = ISB[s[4]]; out[8] = ISB[s[8]]; out[12] = ISB[s[12]]
    # Row1: 1,5,9,13 -> 13,1,5,9
    out[1] = ISB[s[13]]; out[5] = ISB[s[1]]; out[9] = ISB[s[5]]; out[13] = ISB[s[9]]
    # Row2: 2,6,10,14 -> 10,14,2,6
    out[2] = ISB[s[10]]; out[6] = ISB[s[14]]; out[10] = ISB[s[2]]; out[14] = ISB[s[6]]
    # Row3: 3,7,11,15 -> 7,11,15,3
    out[3] = ISB[s[7]]; out[7] = ISB[s[11]]; out[11] = ISB[s[15]]; out[15] = ISB[s[3]]
    state[:] = out


def mix_columns_ttables(state):
    """FUN_08027be4: SubBytes+ShiftRows+MixColumns combined (T-tables 2SB/3SB)."""
    i = state
    out = [0] * 16
    # out byte j = 4c + r; column c inputs from (c + r) mod 4 (ShiftRows)
    # column 0: in[0], in[5], in[10], in[15]
    out[0]  = T2[i[0]] ^ T3[i[5]] ^ SB[i[10]] ^ SB[i[15]]
    out[1]  = SB[i[0]] ^ T2[i[5]] ^ T3[i[10]] ^ SB[i[15]]
    out[2]  = SB[i[0]] ^ SB[i[5]] ^ T2[i[10]] ^ T3[i[15]]
    out[3]  = T3[i[0]] ^ SB[i[5]] ^ SB[i[10]] ^ T2[i[15]]
    # column 1: in[4], in[9], in[14], in[3]
    out[4]  = T2[i[4]] ^ T3[i[9]] ^ SB[i[14]] ^ SB[i[3]]
    out[5]  = SB[i[4]] ^ T2[i[9]] ^ T3[i[14]] ^ SB[i[3]]
    out[6]  = SB[i[4]] ^ SB[i[9]] ^ T2[i[14]] ^ T3[i[3]]
    out[7]  = T3[i[4]] ^ SB[i[9]] ^ SB[i[14]] ^ T2[i[3]]
    # column 2: in[8], in[13], in[2], in[7]
    out[8]  = T2[i[8]] ^ T3[i[13]] ^ SB[i[2]] ^ SB[i[7]]
    out[9]  = SB[i[8]] ^ T2[i[13]] ^ T3[i[2]] ^ SB[i[7]]
    out[10] = SB[i[8]] ^ SB[i[13]] ^ T2[i[2]] ^ T3[i[7]]
    out[11] = T3[i[8]] ^ SB[i[13]] ^ SB[i[2]] ^ T2[i[7]]
    # column 3: in[12], in[1], in[6], in[11]
    out[12] = T2[i[12]] ^ T3[i[1]] ^ SB[i[6]] ^ SB[i[11]]
    out[13] = SB[i[12]] ^ T2[i[1]] ^ T3[i[6]] ^ SB[i[11]]
    out[14] = SB[i[12]] ^ SB[i[1]] ^ T2[i[6]] ^ T3[i[11]]
    out[15] = T3[i[12]] ^ SB[i[1]] ^ SB[i[6]] ^ T2[i[11]]
    state[:] = out


def inv_mix_columns_ttables(state):
    """FUN_08027ea2: InvMixColumns+InvShiftRows via plain mul tables,
    then trailing InvSubBytes (per decompiled loop).

    Exact slot map from disassembly (sp slots -> final output bytes):
      sp[0]=col0 pos0, sp[1]=col3 pos1, sp[2]=col2 pos2, sp[3]=col1 pos3,
      sp[4]=col1 pos0, sp[5]=col0 pos1, sp[6]=col3 pos2, sp[7]=col2 pos3,
      sp[8]=col2 pos0, sp[9]=col1 pos1, sp[10]=col0 pos2, sp[11]=col3 pos3,
      sp[12]=col3 pos0, sp[13]=col2 pos1, sp[14]=col1 pos2, sp[15]=col0 pos3
    Position patterns: pos0=[M14,M11,M13,M9], pos1=[M9,M14,M11,M13],
                       pos2=[M13,M9,M14,M11], pos3=[M11,M13,M9,M14]
    """
    i = state
    m = [0] * 16
    m[0]  = M14[i[0]]  ^ M11[i[1]]  ^ M13[i[2]]  ^ M9[i[3]]    # col0 pos0
    m[1]  = M9[i[12]]  ^ M14[i[13]] ^ M11[i[14]] ^ M13[i[15]]   # col3 pos1
    m[2]  = M13[i[8]]  ^ M9[i[9]]   ^ M14[i[10]] ^ M11[i[11]]   # col2 pos2
    m[3]  = M11[i[4]]  ^ M13[i[5]]  ^ M9[i[6]]   ^ M14[i[7]]    # col1 pos3
    m[4]  = M14[i[4]]  ^ M11[i[5]]  ^ M13[i[6]]  ^ M9[i[7]]     # col1 pos0
    m[5]  = M9[i[0]]   ^ M14[i[1]]  ^ M11[i[2]]  ^ M13[i[3]]    # col0 pos1
    m[6]  = M13[i[12]] ^ M9[i[13]]  ^ M14[i[14]] ^ M11[i[15]]   # col3 pos2
    m[7]  = M11[i[8]]  ^ M13[i[9]]  ^ M9[i[10]]  ^ M14[i[11]]   # col2 pos3
    m[8]  = M14[i[8]]  ^ M11[i[9]]  ^ M13[i[10]] ^ M9[i[11]]    # col2 pos0
    m[9]  = M9[i[4]]   ^ M14[i[5]]  ^ M11[i[6]]  ^ M13[i[7]]    # col1 pos1
    m[10] = M13[i[0]]  ^ M9[i[1]]   ^ M14[i[2]]  ^ M11[i[3]]    # col0 pos2
    m[11] = M11[i[12]] ^ M13[i[13]] ^ M9[i[14]]  ^ M14[i[15]]   # col3 pos3
    m[12] = M14[i[12]] ^ M11[i[13]] ^ M13[i[14]] ^ M9[i[15]]    # col3 pos0
    m[13] = M9[i[8]]   ^ M14[i[9]]  ^ M11[i[10]] ^ M13[i[11]]   # col2 pos1
    m[14] = M13[i[4]]  ^ M9[i[5]]   ^ M14[i[6]]  ^ M11[i[7]]    # col1 pos2
    m[15] = M11[i[0]]  ^ M13[i[1]]  ^ M9[i[2]]   ^ M14[i[3]]    # col0 pos3
    # trailing InvSubBytes (FUN_08027ea2 final loop, table @ 0x3B3AC)
    state[:] = [ISB[x] for x in m]


# ----------------------------------------------------------------------------
# Block encrypt / decrypt — FUN_08028244 / FUN_08028308
# ----------------------------------------------------------------------------
def encrypt_block(block, round_keys):
    state = list(block)
    add_round_key(state, round_keys[0:16])       # ARK(K0)
    mix_columns_ttables(state)                    # round 1: SB+SR+MC
    add_round_key(state, round_keys[16:32])      # ARK(K1)
    sub_shift_rows(state)                         # round 2: SB+SR
    add_round_key(state, round_keys[32:48])      # ARK(K2)
    return bytes(state)


def decrypt_block(block, round_keys):
    state = list(block)
    add_round_key(state, round_keys[32:48])      # ARK(K2)
    inv_sub_shift_rows(state)                     # iSR+iSB
    add_round_key(state, round_keys[16:32])      # ARK(K1)
    inv_mix_columns_ttables(state)                # iMC+iSR + trailing iSB
    add_round_key(state, round_keys[0:16])       # ARK(K0)
    return bytes(state)


def ecb_decrypt(data, master_key):
    rk = expand_key(master_key)
    out = bytearray()
    for off in range(0, len(data) - len(data) % 16, 16):
        out += decrypt_block(data[off:off + 16], rk)
    return bytes(out)


def ecb_encrypt(data, master_key):
    rk = expand_key(master_key)
    out = bytearray()
    for off in range(0, len(data) - len(data) % 16, 16):
        out += encrypt_block(data[off:off + 16], rk)
    return bytes(out)


# ----------------------------------------------------------------------------
# Serial-based key derivation — FUN_080230ec
# ----------------------------------------------------------------------------
def derive_serial_key(serial: bytes):
    """Key = BE32(MD5hex words ^ XORtable words) padded-serial-XOR."""
    md5hex = hashlib.md5(serial).hexdigest().encode()   # FUN_08023028: 32-char hex
    words = [
        int(md5hex[0:8], 16),    # FUN_0802308c hex2u32
        int(md5hex[8:16], 16),
        int(md5hex[16:24], 16),
        int(md5hex[24:32], 16),
    ]
    # index from serial digits + magic const (signed arithmetic, C semantics)
    def c_mod(a, b):
        r = abs(a) % b
        return -r if a < 0 else r
    digits = (IDX_MAGIC
              + (serial[5] - 0x30) * 1000
              + (serial[4] - 0x30) * 100
              + (serial[2] - 0x30) * 10
              + (serial[1] - 0x30))
    idx = c_mod(digits, 8)
    xt = struct.unpack('<8I', XOR_TABLE)
    key = bytearray(16)
    for j in range(4):
        w = words[j] ^ xt[(idx + 2 * j) & 7] ^ xt[(idx + 2 * j + 3) & 7]
        key[j*4 + 0] = (w >> 24) & 0xFF
        key[j*4 + 1] = (w >> 16) & 0xFF
        key[j*4 + 2] = (w >> 8) & 0xFF
        key[j*4 + 3] = w & 0xFF
    # XOR with serial padded to 16 bytes using FILL_CONST
    if len(serial) < 16:
        padded = bytes(serial) + FILL_CONST[:16 - len(serial)]
    else:
        padded = bytes(serial[:16])
    for i in range(16):
        key[i] ^= padded[i]
    return bytes(key)


DEFAULT_KEY = bytes(range(16))     # const @ 0x0800EADC: 00 01 02 ... 0f


# ----------------------------------------------------------------------------
# Self-test
# ----------------------------------------------------------------------------
def self_test():
    print('=== self test ===')
    # 1. roundtrip
    rk = expand_key(DEFAULT_KEY)
    pt = bytes(range(16))
    ct = encrypt_block(pt, rk)
    back = decrypt_block(ct, rk)
    print(f'roundtrip: {"OK" if back == pt else "FAIL"} (ct={ct.hex()})')
    # 2. zero block
    e0 = encrypt_block(b'\x00'*16, rk)
    d0 = decrypt_block(b'\x00'*16, rk)
    print(f'E(0) = {e0.hex()}')
    print(f'D(0) = {d0.hex()}')
    # 3. serial keys
    for serial in [b'989149735933', b'123456789012', b'ABCDEFGHIJKL']:
        k = derive_serial_key(serial)
        rk2 = expand_key(k)
        e0s = encrypt_block(b'\x00'*16, rk2)
        d0s = decrypt_block(b'\x00'*16, rk2)
        print(f'serial={serial.decode():14s} key={k.hex()} E(0)={e0s.hex()} D(0)={d0s.hex()}')
    return e0


if __name__ == '__main__':
    self_test()
