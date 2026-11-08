// Brute-force the Thinkcar custom DES (LSB-first bit convention) per-chunk key
// using known plaintext (decrypted app at 0x4A0000) vs ciphertext (staged chunk at 0x440000).
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

// Standard DES tables (verified identical in firmware)
static const uint8_t S[8][64] = {
 {14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8,4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0,15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13},
 {15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10,3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5,0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15,13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9},
 {10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8,13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1,13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7,1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12},
 {7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15,13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9,10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4,3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14},
 {2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9,14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6,4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14,11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3},
 {12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11,10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8,9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6,4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13},
 {4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1,13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6,1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2,6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12},
 {13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7,1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2,7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8,2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11},
};
static const uint8_t IP[64] = {58,50,42,34,26,18,10,2,60,52,44,36,28,20,12,4,62,54,46,38,30,22,14,6,64,56,48,40,32,24,16,8,57,49,41,33,25,17,9,1,59,51,43,35,27,19,11,3,61,53,45,37,29,21,13,5,63,55,47,39,31,23,15,7};
static const uint8_t FP[64] = {40,8,48,16,56,24,64,32,39,7,47,15,55,23,63,31,38,6,46,14,54,22,62,30,37,5,45,13,53,21,61,29,36,4,44,12,52,20,60,28,35,3,43,11,51,19,59,27,34,2,42,10,50,18,58,26,33,1,41,9,49,17,57,25};
static const uint8_t E[48] = {32,1,2,3,4,5,4,5,6,7,8,9,8,9,10,11,12,13,12,13,14,15,16,17,16,17,18,19,20,21,20,21,22,23,24,25,24,25,26,27,28,29,28,29,30,31,32,1};
static const uint8_t P[32] = {16,7,20,21,29,12,28,17,1,15,23,26,5,18,31,10,2,8,24,14,32,27,3,9,19,13,30,6,22,11,4,25};
static const uint8_t PC1[56] = {57,49,41,33,25,17,9,1,58,50,42,34,26,18,10,2,59,51,43,35,27,19,11,3,60,52,44,36,63,55,47,39,31,23,15,7,62,54,46,38,30,22,14,6,61,53,45,37,29,21,13,5,28,20,12,4};
static const uint8_t PC2[48] = {14,17,11,24,1,5,3,28,15,6,21,10,23,19,12,4,26,8,16,7,27,20,13,2,41,52,31,37,47,55,30,40,51,45,33,48,44,49,39,56,34,53,46,42,50,36,29,32};
static const uint8_t SH[16] = {1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1};

static inline uint64_t permute64(uint64_t v, const uint8_t *tab, int n) {
    // bits are LSB-first: bit i of v = bit i. out bit i = in bit (tab[i]-1)
    uint64_t out = 0;
    for (int i = 0; i < n; i++)
        if ((v >> (tab[i]-1)) & 1) out |= (1ULL << i);
    return out;
}
// note: n can be < 64; result fits in n bits

static uint64_t ks[16];

static void key_schedule(const uint8_t *key8) {
    uint64_t kb = 0;
    for (int i = 0; i < 8; i++) kb |= ((uint64_t)key8[i]) << (8*i); // LSB-first byte order = little endian
    // PC1 over 64 bits -> 56 bits
    uint64_t cd = permute64(kb, PC1, 56);
    uint32_t C = cd & 0xFFFFFFF, D = (cd >> 28) & 0xFFFFFFF;
    for (int i = 0; i < 16; i++) {
        int n = SH[i];
        C = ((C >> n) | (C << (28-n))) & 0xFFFFFFF;
        D = ((D >> n) | (D << (28-n))) & 0xFFFFFFF;
        uint64_t cd2 = ((uint64_t)D << 28) | C;
        ks[i] = permute64(cd2, PC2, 48);
    }
}

static uint64_t f_func(uint32_t R, uint64_t K48) {
    uint64_t e = permute64((uint64_t)R, E, 48);
    uint64_t x = e ^ K48;
    uint64_t out = 0;
    for (int i = 0; i < 8; i++) {
        uint8_t b = (x >> (i*6)) & 0x3F;
        uint8_t row = ((b & 1) << 1) | ((b >> 5) & 1);
        uint8_t col = ((b >> 1) & 1) << 3 | ((b >> 2) & 1) << 2 | ((b >> 3) & 1) << 1 | ((b >> 4) & 1);
        uint8_t val = S[i][row*16 + col];
        out |= ((uint64_t)val) << (i*4);
    }
    return permute64(out, P, 32);
}

static uint64_t des_block(uint64_t block, int decrypt) {
    uint64_t bits = permute64(block, IP, 64);
    uint32_t L = bits & 0xFFFFFFFF, R = (bits >> 32) & 0xFFFFFFFF;
    if (decrypt) {
        for (int i = 15; i >= 0; i--) {
            uint32_t tmp = L;
            L = (uint32_t)f_func(L, ks[i]) ^ R;
            R = tmp;
        }
    } else {
        for (int i = 0; i < 16; i++) {
            uint32_t tmp = R;
            R = (uint32_t)f_func(R, ks[i]) ^ L;
            L = tmp;
        }
    }
    uint64_t out = ((uint64_t)R << 32) | L; // L in low, R in high (no final swap; matches fw)
    return permute64(out, FP, 64);
}

// block <-> bytes: LSB-first: byte i bit j = block bit (i*8+j)
static uint64_t bytes_to_block(const uint8_t *b) {
    uint64_t v = 0;
    for (int i = 0; i < 8; i++) v |= ((uint64_t)b[i]) << (8*i);
    return v;
}
static void block_to_bytes(uint64_t v, uint8_t *out) {
    for (int i = 0; i < 8; i++) out[i] = (v >> (8*i)) & 0xFF;
}

static uint64_t ct_block, pt_block;

static int try_key(const uint8_t *key8) {
    key_schedule(key8);
    uint64_t dec = des_block(ct_block, 1);
    return dec == pt_block;
}

int main(int argc, char **argv) {
    // args: <ct hex 16> <pt hex 16> <mode> [params]
    if (argc < 4) { fprintf(stderr, "usage: %s CT PT mode\n", argv[0]); return 1; }
    uint8_t ct[8], pt[8];
    for (int i = 0; i < 8; i++) {
        unsigned v;
        sscanf(argv[1] + 2*i, "%2x", &v); ct[i] = v;
        sscanf(argv[2] + 2*i, "%2x", &v); pt[i] = v;
    }
    ct_block = bytes_to_block(ct);
    pt_block = bytes_to_block(pt);
    const char *mode = argv[3];

    if (strcmp(mode, "hex") == 0) {
        // 8 chars from [0-9a-f]: iterate as 64-bit counter in base 16
        static const char hexc[] = "0123456789abcdef";
        // enumerate all 16^8 = 2^32 combos
        for (uint64_t n = 0; n < (1ULL<<32); n++) {
            uint8_t key[9];
            uint64_t v = n;
            for (int i = 0; i < 8; i++) { key[i] = hexc[v & 0xF]; v >>= 4; }
            key[8] = 0;
            if (try_key(key)) {
                printf("FOUND KEY: %s\n", key);
                fflush(stdout);
            }
        }
    } else if (strcmp(mode, "HEX") == 0) {
        static const char hexc[] = "0123456789ABCDEF";
        for (uint64_t n = 0; n < (1ULL<<32); n++) {
            uint8_t key[9];
            uint64_t v = n;
            for (int i = 0; i < 8; i++) { key[i] = hexc[v & 0xF]; v >>= 4; }
            key[8] = 0;
            if (try_key(key)) {
                printf("FOUND KEY: %s\n", key);
                fflush(stdout);
            }
        }
    } else if (strcmp(mode, "digits") == 0) {
        for (uint64_t n = 0; n < 100000000ULL; n++) {
            uint8_t key[9];
            uint64_t v = n;
            for (int i = 0; i < 8; i++) { key[i] = '0' + (v % 10); v /= 10; }
            key[8] = 0;
            if (try_key(key)) {
                printf("FOUND KEY: %s\n", key);
                fflush(stdout);
            }
        }
    } else if (strcmp(mode, "alnum") == 0) {
        // 8 chars from [0-9a-zA-Z]: 62^8 = 2.18e14 -- too big, only with prefix args
        fprintf(stderr, "too big\n");
        return 1;
    }
    printf("search complete\n");
    return 0;
}
