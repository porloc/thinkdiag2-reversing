#!/usr/bin/env python3
"""Fast integer-based Thinkcar TD2 DES variant (LSB-first bit convention)."""
import sys
sys.path.insert(0, "/home/z/thinkdiag/tools")
from td2des import S, IP, FP, E, P, PC1, PC2, SH

# Precompute: since bits are LSB-first, the bit i of the array = bit i of an integer
# permute: out_bit[i] = in_bit[table[i]-1]  ->  out |= ((v >> (t-1)) & 1) << i

def _perm(v, table):
    out = 0
    for i, t in enumerate(table):
        out |= ((v >> (t-1)) & 1) << i
    return out

# Precompute permutation functions as (mask, shift) pairs for speed
def _apply(v, table):
    out = 0
    for i, t in enumerate(table):
        bit = (v >> (t-1)) & 1
        if bit:
            out |= 1 << i
    return out

_IP = IP; _FP = FP; _E = E; _P = P; _PC1 = PC1; _PC2 = PC2

def _f_int(R, K):
    e = _apply(R, _E) ^ K
    out = 0
    for i in range(8):
        b = (e >> (i*6)) & 0x3F
        row = ((b >> 0) & 1) * 2 + ((b >> 5) & 1)
        col = (((b >> 1) & 1) << 3) | (((b >> 2) & 1) << 2) | (((b >> 3) & 1) << 1) | ((b >> 4) & 1)
        val = S[i][row*16 + col]
        out |= val << (i*4)
    return _apply(out, _P)

def key_schedule_int(key8):
    kb = int.from_bytes(key8, 'little')
    cd = _apply(kb, _PC1)
    C = cd & 0xFFFFFFF; D = cd >> 28
    ks = []
    for i in range(16):
        n = SH[i]
        C = ((C >> n) | (C << (28-n))) & 0xFFFFFFF
        D = ((D >> n) | (D << (28-n))) & 0xFFFFFFF
        ks.append(_apply(C | (D << 28), _PC2))
    return ks

def des_block_int(block8, ks, decrypt=False):
    v = int.from_bytes(block8, 'little')
    bits = _apply(v, _IP)
    L = bits & 0xFFFFFFFF; R = bits >> 32
    if decrypt:
        for i in range(15, -1, -1):
            tmp = L
            L = _f_int(L, ks[i]) ^ R
            R = tmp
    else:
        for i in range(16):
            tmp = R
            R = _f_int(R, ks[i]) ^ L
            L = tmp
    out = _apply(L | (R << 32), _FP)
    return out.to_bytes(8, 'little')

def des_ecb_fast(data, key, decrypt=False):
    ks = key_schedule_int(key)
    out = b""
    for i in range(0, len(data) - 7, 8):
        out += des_block_int(data[i:i+8], ks, decrypt)
    return out

if __name__ == "__main__":
    # verify against reference
    key = b"4973d914"
    data = bytes(range(16))
    enc = des_ecb_fast(data, key)
    dec = des_ecb_fast(data, key, decrypt=True)
    print("fast enc:", enc.hex())
    print("fast dec:", dec.hex())
    print("expected enc: ab06fdbe11986a4885cfc7b68b4f3c14")
    print("expected dec: 7954153678a1c3b2ea7b2bba0d462005")
    assert enc.hex() == "ab06fdbe11986a4885cfc7b68b4f3c14"
    assert dec.hex() == "7954153678a1c3b2ea7b2bba0d462005"
    print("VERIFIED OK")
