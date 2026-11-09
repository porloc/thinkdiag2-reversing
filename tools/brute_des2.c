// Optimized brute-force for the Thinkcar custom DES (LSB-first bit convention).
// Uses byte-indexed precomputed permutation tables + OpenMP.
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

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

// Precomputed byte tables for permutations:
// For a permutation tab[n] over input bits (LSB-first), split input bytes:
// out = OR over bytes b: TABLE[byte_index][value]
static uint64_t ip_tab[8][256];   // 64-bit out
static uint64_t fp_tab[8][256];
static uint64_t e_tab[4][256];    // 48-bit out (uses 32-bit R)
static uint64_t p_tab[4][256];    // 32-bit out (from 32-bit S output)
static uint64_t pc2_tab[7][256];  // 48-bit out from 56-bit CD
static uint64_t pc1_tab[8][256];  // 56-bit out from 64-bit key

static void build_tab(uint64_t tab[][256], const uint8_t *perm, int n_out, int n_in_bytes) {
    for (int byte = 0; byte < n_in_bytes; byte++) {
        for (int val = 0; val < 256; val++) {
            uint64_t out = 0;
            for (int i = 0; i < n_out; i++) {
                int src_bit = perm[i] - 1; // 1-based global bit index
                if (src_bit >= byte*8 && src_bit < byte*8+8) {
                    if ((val >> (src_bit - byte*8)) & 1)
                        out |= 1ULL << i;
                }
            }
            tab[byte][val] = out;
        }
    }
}

static uint64_t ks_tab[16]; // per-thread! -- handled below

typedef struct {
    uint64_t ks[16];
} KeySched;

static inline void key_schedule(KeySched *k, uint64_t key_bits) {
    uint64_t cd = 0;
    for (int b = 0; b < 8; b++) cd |= pc1_tab[b][(key_bits >> (8*b)) & 0xFF];
    uint32_t C = cd & 0xFFFFFFF, D = (cd >> 28) & 0xFFFFFFF;
    for (int i = 0; i < 16; i++) {
        int n = SH[i];
        C = ((C >> n) | (C << (28-n))) & 0xFFFFFFF;
        D = ((D >> n) | (D << (28-n))) & 0xFFFFFFF;
        uint64_t cd2 = ((uint64_t)D << 28) | C;
        uint64_t k48 = 0;
        for (int b = 0; b < 7; b++) k48 |= pc2_tab[b][(cd2 >> (8*b)) & 0xFF];
        k->ks[i] = k48;
    }
}

// f-function with precomputed S+? -- S lookup per 6-bit group then P via table
static inline uint32_t f_func(uint32_t R, uint64_t K48) {
    uint64_t e = e_tab[0][R & 0xFF] | e_tab[1][(R >> 8) & 0xFF] | e_tab[2][(R >> 16) & 0xFF] | e_tab[3][(R >> 24) & 0xFF];
    uint64_t x = e ^ K48;
    uint32_t s_out = 0;
    for (int i = 0; i < 8; i++) {
        uint8_t b = (x >> (i*6)) & 0x3F;
        uint8_t row = ((b & 1) << 1) | ((b >> 5) & 1);
        uint8_t col = (((b >> 1) & 1) << 3) | (((b >> 2) & 1) << 2) | (((b >> 3) & 1) << 1) | ((b >> 4) & 1);
        s_out |= ((uint32_t)S[i][row*16 + col]) << (i*4);
    }
    return (uint32_t)(p_tab[0][s_out & 0xFF] | p_tab[1][(s_out >> 8) & 0xFF] | p_tab[2][(s_out >> 16) & 0xFF] | p_tab[3][(s_out >> 24) & 0xFF]);
}

static inline uint64_t des_dec_block(uint64_t block, const KeySched *k) {
    uint64_t bits = ip_tab[0][block & 0xFF] | ip_tab[1][(block >> 8) & 0xFF] | ip_tab[2][(block >> 16) & 0xFF] | ip_tab[3][(block >> 24) & 0xFF] | ip_tab[4][(block >> 32) & 0xFF] | ip_tab[5][(block >> 40) & 0xFF] | ip_tab[6][(block >> 48) & 0xFF] | ip_tab[7][(block >> 56) & 0xFF];
    uint32_t L = bits & 0xFFFFFFFF, R = (uint32_t)(bits >> 32);
    for (int i = 15; i >= 0; i--) {
        uint32_t tmp = L;
        L = f_func(L, k->ks[i]) ^ R;
        R = tmp;
    }
    uint64_t out = ((uint64_t)R << 32) | L;
    return fp_tab[0][out & 0xFF] | fp_tab[1][(out >> 8) & 0xFF] | fp_tab[2][(out >> 16) & 0xFF] | fp_tab[3][(out >> 24) & 0xFF] | fp_tab[4][(out >> 32) & 0xFF] | fp_tab[5][(out >> 40) & 0xFF] | fp_tab[6][(out >> 48) & 0xFF] | fp_tab[7][(out >> 56) & 0xFF];
}

static uint64_t ct_block, pt_block, ct_block2;

int main(int argc, char **argv) {
    if (argc < 4) { fprintf(stderr, "usage: %s CT PT mode [maxcount]\n", argv[0]); return 1; }
    uint8_t ct[8], pt[8];
    for (int i = 0; i < 8; i++) {
        unsigned v;
        sscanf(argv[1] + 2*i, "%2x", &v); ct[i] = v;
        sscanf(argv[2] + 2*i, "%2x", &v); pt[i] = v;
    }
    ct_block = 0; pt_block = 0; ct_block2 = 0;
    for (int i = 0; i < 8; i++) { ct_block |= ((uint64_t)ct[i]) << (8*i); pt_block |= ((uint64_t)pt[i]) << (8*i); }
    if (argc > 5) { // second ciphertext block hex
        uint8_t ct2[8];
        for (int i = 0; i < 8; i++) { unsigned v; sscanf(argv[5] + 2*i, "%2x", &v); ct2[i] = v; ct_block2 |= ((uint64_t)ct2[i]) << (8*i); }
    }
    const char *mode = argv[3];
    uint64_t maxn = (argc > 4) ? strtoull(argv[4], 0, 10) : 0;

    // build tables
    build_tab(ip_tab, IP, 64, 8);
    build_tab(fp_tab, FP, 64, 8);
    build_tab(e_tab, E, 48, 4);
    build_tab(p_tab, P, 32, 4);
    build_tab(pc2_tab, PC2, 48, 7);
    build_tab(pc1_tab, PC1, 56, 8);

    if (strcmp(mode, "hex") == 0 || strcmp(mode, "HEX") == 0 || strcmp(mode, "digits") == 0) {
        int nd = strcmp(mode, "digits") == 0 ? 10 : 16;
        char base = strcmp(mode, "digits") == 0 ? '0' : (mode[0] == 'h' ? 'a' : 'A');
        if (strcmp(mode, "digits") != 0) base = (mode[0]=='h') ? 'a' : 'A';
        else base = '0';
        uint64_t limit = 1; for (int i = 0; i < 8; i++) limit *= nd;
        if (maxn && maxn < limit) limit = maxn;
        volatile int found = 0;
        #pragma omp parallel
        {
            KeySched ks;
            #pragma omp for schedule(static)
            for (long long n = 0; n < (long long)limit; n++) {
                if (found) continue;
                uint8_t key[9];
                uint64_t v = n;
                for (int i = 0; i < 8; i++) { key[i] = (nd == 10) ? ('0' + v % 10) : (base + (v % 16)); v /= nd; }
                key[8] = 0;
                uint64_t kb = 0;
                for (int i = 0; i < 8; i++) kb |= ((uint64_t)key[i]) << (8*i);
                key_schedule(&ks, kb);
                uint64_t dec = des_dec_block(ct_block, &ks);
                if (dec == pt_block) {
                    printf("FOUND KEY: %s\n", key);
                    fflush(stdout);
                    found = 1;
                }
            }
        }
        printf("search complete (%s)\n", mode);
    }
    else if (strcmp(mode, "vectors") == 0) {
        // brute force 8-digit keys; check decrypted block looks like ARM vector table:
        // w0 = initial SP (0x20xxxxxx), w1 = reset vector (0x00xxxxxx, thumb bit set)
        int nd = 10;
        uint64_t limit = 100000000ULL;
        if (maxn) limit = maxn;
        volatile int found = 0;
        #pragma omp parallel
        {
            KeySched ks;
            #pragma omp for schedule(static)
            for (long long n = 0; n < (long long)limit; n++) {
                if (found) continue;
                uint8_t key[9];
                uint64_t v = n;
                for (int i = 0; i < 8; i++) { key[i] = '0' + (v % 10); v /= 10; }
                key[8] = 0;
                uint64_t kb = 0;
                for (int i = 0; i < 8; i++) kb |= ((uint64_t)key[i]) << (8*i);
                key_schedule(&ks, kb);
                uint64_t dec = des_dec_block(ct_block, &ks);
                uint64_t dec2 = des_dec_block(ct_block2, &ks);
                uint32_t w0 = (uint32_t)dec;          // SP
                uint32_t w1 = (uint32_t)(dec >> 32);  // reset
                uint32_t w2 = (uint32_t)dec2;         // NMI
                uint32_t w3 = (uint32_t)(dec2 >> 32); // HardFault
                if (w0 >= 0x20000000u && w0 < 0x20440000u &&
                    w1 >= 0x00400001u && w1 < 0x00520000u && (w1 & 1) &&
                    w2 >= 0x00400001u && w2 < 0x00520000u && (w2 & 1) &&
                    w3 >= 0x00400001u && w3 < 0x00520000u && (w3 & 1)) {
                    printf("VECTOR HIT: key=%s SP=%08x reset=%08x nmi=%08x hf=%08x\n", key, w0, w1, w2, w3);
                    fflush(stdout);
                    found = 1;
                }
            }
        }
        printf("search complete (vectors)\n");
    }
    else if (strcmp(mode, "csv") == 0) {
        // brute force 8-digit keys; check decrypted block is a CSV "a,b,c" pattern
        uint64_t limit = 100000000ULL;
        if (maxn) limit = maxn;
        volatile int found = 0;
        #pragma omp parallel
        {
            KeySched ks;
            #pragma omp for schedule(static)
            for (long long n = 0; n < (long long)limit; n++) {
                if (found) continue;
                uint8_t key[9];
                uint64_t v = n;
                for (int i = 0; i < 8; i++) { key[i] = '0' + (v % 10); v /= 10; }
                key[8] = 0;
                uint64_t kb = 0;
                for (int i = 0; i < 8; i++) kb |= ((uint64_t)key[i]) << (8*i);
                key_schedule(&ks, kb);
                uint64_t dec = des_dec_block(ct_block, &ks);
                uint8_t d[8];
                for (int i = 0; i < 8; i++) d[i] = (dec >> (8*i)) & 0xFF;
                // check: first 6 bytes are digits/commas/nulls/0x05 with at least one comma
                int ok = 1, comma = 0;
                for (int i = 0; i < 6; i++) {
                    if (d[i] == 44) comma = 1;
                    else if (!((d[i] >= '0' && d[i] <= '9') || d[i] == 0 || d[i] == 5)) { ok = 0; break; }
                }
                if (ok && comma) {
                    printf("CSV HIT: key=%s dec=%02x%02x%02x%02x%02x%02x%02x%02x\n", key,
                        d[0],d[1],d[2],d[3],d[4],d[5],d[6],d[7]);
                    fflush(stdout);
                }
            }
        }
        printf("search complete (csv)\n");
    }
    else if (strcmp(mode, "pair") == 0) {
        // brute force 8-digit keys; decrypt BOTH ct_block and ct_block2;
        // both results must be constant-byte blocks (8 identical bytes each)
        uint64_t limit = 100000000ULL;
        if (maxn) limit = maxn;
        volatile int found = 0;
        #pragma omp parallel
        {
            KeySched ks;
            #pragma omp for schedule(static)
            for (long long n = 0; n < (long long)limit; n++) {
                if (found) continue;
                uint8_t key[9];
                uint64_t v = n;
                for (int i = 0; i < 8; i++) { key[i] = '0' + (v % 10); v /= 10; }
                key[8] = 0;
                uint64_t kb = 0;
                for (int i = 0; i < 8; i++) kb |= ((uint64_t)key[i]) << (8*i);
                key_schedule(&ks, kb);
                uint64_t dec1 = des_dec_block(ct_block, &ks);
                uint64_t dec2 = des_dec_block(ct_block2, &ks);
                uint8_t d1[8], d2[8];
                for (int i = 0; i < 8; i++) { d1[i] = (dec1 >> (8*i)) & 0xFF; d2[i] = (dec2 >> (8*i)) & 0xFF; }
                int c1 = (d1[0] == d1[1] && d1[1] == d1[2] && d1[2] == d1[3] && d1[3] == d1[4] && d1[4] == d1[5] && d1[5] == d1[6] && d1[6] == d1[7]);
                int c2 = (d2[0] == d2[1] && d2[1] == d2[2] && d2[2] == d2[3] && d2[3] == d2[4] && d2[4] == d2[5] && d2[5] == d2[6] && d2[6] == d2[7]);
                if (c1 && c2) {
                    printf("PAIR HIT: key=%s P1=%02x*8 P2=%02x*8\n", key, d1[0], d2[0]);
                    fflush(stdout);
                }
            }
        }
        printf("search complete (pair)\n");
    }
    else if (strcmp(mode, "cbc") == 0) {
        // CBC hypothesis: P_A = D(A) ^ B_prev, P_B = D(B) ^ A_prev; check P_A == P_B (any constant padding)
        uint64_t limit = 100000000ULL;
        if (maxn) limit = maxn;
        volatile int found = 0;
        #pragma omp parallel
        {
            KeySched ks;
            #pragma omp for schedule(static)
            for (long long n = 0; n < (long long)limit; n++) {
                if (found) continue;
                uint8_t key[9];
                uint64_t v = n;
                for (int i = 0; i < 8; i++) { key[i] = '0' + (v % 10); v /= 10; }
                key[8] = 0;
                uint64_t kb = 0;
                for (int i = 0; i < 8; i++) kb |= ((uint64_t)key[i]) << (8*i);
                key_schedule(&ks, kb);
                uint64_t dec1 = des_dec_block(ct_block, &ks);
                uint64_t dec2 = des_dec_block(ct_block2, &ks);
                // P_A = dec1 ^ ct2 ; P_B = dec2 ^ ct1 ; equal?
                if ((dec1 ^ ct_block2) == (dec2 ^ ct_block)) {
                    uint64_t pad = dec1 ^ ct_block2;
                    printf("CBC HIT: key=%s pad=%016llx\n", key, (unsigned long long)pad);
                    fflush(stdout);
                }
            }
        }
        printf("search complete (cbc)\n");
    }
    return 0;
}
