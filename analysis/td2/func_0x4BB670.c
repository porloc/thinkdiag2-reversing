// func @ 0x4BB670

undefined4 FUN_004bb670(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *DAT_004bc4f0 = *param_1;
  *DAT_004bc4f4 = param_1[1];
  *DAT_004bc4f8 = param_1[2];
  *DAT_004bc4fc = param_1[3];
  FUN_004bcea2(DAT_004bc500,param_2,0x40);
  *DAT_004bc4f0 =
       DAT_004bc504 +
       *DAT_004bc500 + (*DAT_004bc4f4 & *DAT_004bc4f8 | *DAT_004bc4fc & ~*DAT_004bc4f4) +
       *DAT_004bc4f0;
  *DAT_004bc4f0 = *DAT_004bc4f0 >> 0x19 | *DAT_004bc4f0 << 7;
  *DAT_004bc4f0 = *DAT_004bc4f4 + *DAT_004bc4f0;
  *DAT_004bc4fc =
       DAT_004bc568 +
       DAT_004bc500[1] + (*DAT_004bc4f0 & *DAT_004bc4f4 | *DAT_004bc4f8 & ~*DAT_004bc4f0) +
       *DAT_004bc4fc;
  *DAT_004bc4fc = *DAT_004bc4fc >> 0x14 | *DAT_004bc4fc << 0xc;
  *DAT_004bc4fc = *DAT_004bc4f0 + *DAT_004bc4fc;
  *DAT_004bc4f8 =
       DAT_004bc5cc +
       DAT_004bc500[2] + (*DAT_004bc4fc & *DAT_004bc4f0 | *DAT_004bc4f4 & ~*DAT_004bc4fc) +
       *DAT_004bc4f8;
  *DAT_004bc4f8 = *DAT_004bc4f8 >> 0xf | *DAT_004bc4f8 << 0x11;
  *DAT_004bc4f8 = *DAT_004bc4fc + *DAT_004bc4f8;
  *DAT_004bc4f4 =
       DAT_004bc630 +
       DAT_004bc500[3] + (*DAT_004bc4f8 & *DAT_004bc4fc | *DAT_004bc4f0 & ~*DAT_004bc4f8) +
       *DAT_004bc4f4;
  *DAT_004bc4f4 = *DAT_004bc4f4 >> 10 | *DAT_004bc4f4 << 0x16;
  *DAT_004bc4f4 = *DAT_004bc4f8 + *DAT_004bc4f4;
  *DAT_004bc4f0 =
       DAT_004bc694 +
       DAT_004bc500[4] + (*DAT_004bc4f4 & *DAT_004bc4f8 | *DAT_004bc4fc & ~*DAT_004bc4f4) +
       *DAT_004bc4f0;
  *DAT_004bc4f0 = *DAT_004bc4f0 >> 0x19 | *DAT_004bc4f0 << 7;
  *DAT_004bc4f0 = *DAT_004bc4f4 + *DAT_004bc4f0;
  *DAT_004bc4fc =
       DAT_004bc6f8 +
       DAT_004bc500[5] + (*DAT_004bc4f0 & *DAT_004bc4f4 | *DAT_004bc4f8 & ~*DAT_004bc4f0) +
       *DAT_004bc4fc;
  *DAT_004bc4fc = *DAT_004bc4fc >> 0x14 | *DAT_004bc4fc << 0xc;
  *DAT_004bc4fc = *DAT_004bc4f0 + *DAT_004bc4fc;
  *DAT_004bc4f8 =
       DAT_004bc75c +
       DAT_004bc500[6] + (*DAT_004bc4fc & *DAT_004bc4f0 | *DAT_004bc4f4 & ~*DAT_004bc4fc) +
       *DAT_004bc4f8;
  *DAT_004bc4f8 = *DAT_004bc4f8 >> 0xf | *DAT_004bc4f8 << 0x11;
  *DAT_004bc4f8 = *DAT_004bc4fc + *DAT_004bc4f8;
  *DAT_004bc4f4 =
       DAT_004bc7c0 +
       DAT_004bc500[7] + (*DAT_004bc4f8 & *DAT_004bc4fc | *DAT_004bc4f0 & ~*DAT_004bc4f8) +
       *DAT_004bc4f4;
  *DAT_004bc4f4 = *DAT_004bc4f4 >> 10 | *DAT_004bc4f4 << 0x16;
  *DAT_004bc4f4 = *DAT_004bc4f8 + *DAT_004bc4f4;
  *DAT_004bc4f0 =
       DAT_004bc824 +
       DAT_004bc500[8] + (*DAT_004bc4f4 & *DAT_004bc4f8 | *DAT_004bc4fc & ~*DAT_004bc4f4) +
       *DAT_004bc4f0;
  *DAT_004bc4f0 = *DAT_004bc4f0 >> 0x19 | *DAT_004bc4f0 << 7;
  *DAT_004bc4f0 = *DAT_004bc4f4 + *DAT_004bc4f0;
  *DAT_004bc4fc =
       DAT_004bc888 +
       DAT_004bc500[9] + (*DAT_004bc4f0 & *DAT_004bc4f4 | *DAT_004bc4f8 & ~*DAT_004bc4f0) +
       *DAT_004bc4fc;
  *DAT_004bc4fc = *DAT_004bc4fc >> 0x14 | *DAT_004bc4fc << 0xc;
  *DAT_004bc4fc = *DAT_004bc4f0 + *DAT_004bc4fc;
  *DAT_004bc4f8 =
       DAT_004bc8ec +
       DAT_004bc500[10] + (*DAT_004bc4fc & *DAT_004bc4f0 | *DAT_004bc4f4 & ~*DAT_004bc4fc) +
       *DAT_004bc4f8;
  *DAT_004bc4f8 = *DAT_004bc4f8 >> 0xf | *DAT_004bc4f8 << 0x11;
  *DAT_004bc4f8 = *DAT_004bc4fc + *DAT_004bc4f8;
  *DAT_004bc4f4 =
       DAT_004bc990 +
       DAT_004bc500[0xb] + (*DAT_004bc4f8 & *DAT_004bc4fc | *DAT_004bc4f0 & ~*DAT_004bc4f8) +
       *DAT_004bc4f4;
  *DAT_004bc4f4 = *DAT_004bc4f4 >> 10 | *DAT_004bc4f4 << 0x16;
  *DAT_004bc4f4 = *DAT_004bc4f8 + *DAT_004bc4f4;
  *DAT_004bc4f0 =
       DAT_004bc9e0 +
       DAT_004bc500[0xc] + (*DAT_004bc4f4 & *DAT_004bc4f8 | *DAT_004bc4fc & ~*DAT_004bc4f4) +
       *DAT_004bc4f0;
  *DAT_004bc4f0 = *DAT_004bc4f0 >> 0x19 | *DAT_004bc4f0 << 7;
  *DAT_004bc4f0 = *DAT_004bc4f4 + *DAT_004bc4f0;
  *DAT_004bc4fc =
       DAT_004bca1c +
       DAT_004bc500[0xd] + (*DAT_004bc4f0 & *DAT_004bc4f4 | *DAT_004bc4f8 & ~*DAT_004bc4f0) +
       *DAT_004bc4fc;
  *DAT_004bc4fc = *DAT_004bc4fc >> 0x14 | *DAT_004bc4fc << 0xc;
  *DAT_004bc4fc = *DAT_004bc4f0 + *DAT_004bc4fc;
  *DAT_004bc4f8 =
       DAT_004bca80 +
       DAT_004bc500[0xe] + (*DAT_004bc4fc & *DAT_004bc4f0 | *DAT_004bc4f4 & ~*DAT_004bc4fc) +
       *DAT_004bc4f8;
  *DAT_004bc4f8 = *DAT_004bc4f8 >> 0xf | *DAT_004bc4f8 << 0x11;
  *DAT_004bc4f8 = *DAT_004bc4fc + *DAT_004bc4f8;
  *DAT_004bc4f4 =
       DAT_004bcae4 +
       DAT_004bc500[0xf] + (*DAT_004bc4f8 & *DAT_004bc4fc | *DAT_004bc4f0 & ~*DAT_004bc4f8) +
       *DAT_004bc4f4;
  *DAT_004bc4f4 = *DAT_004bc4f4 >> 10 | *DAT_004bc4f4 << 0x16;
  *DAT_004bc4f4 = *DAT_004bc4f8 + *DAT_004bc4f4;
  *DAT_004bc4f0 =
       DAT_004bcb48 +
       DAT_004bc500[1] + (*DAT_004bc4f4 & *DAT_004bc4fc | *DAT_004bc4f8 & ~*DAT_004bc4fc) +
       *DAT_004bc4f0;
  *DAT_004bc4f0 = *DAT_004bc4f0 >> 0x1b | *DAT_004bc4f0 << 5;
  *DAT_004bc4f0 = *DAT_004bc4f4 + *DAT_004bc4f0;
  *DAT_004bc4fc =
       DAT_004bcbac +
       DAT_004bc500[6] + (*DAT_004bc4f0 & *DAT_004bc4f8 | *DAT_004bc4f4 & ~*DAT_004bc4f8) +
       *DAT_004bc4fc;
  *DAT_004bc4fc = *DAT_004bc4fc >> 0x17 | *DAT_004bc4fc << 9;
  *DAT_004bc4fc = *DAT_004bc4f0 + *DAT_004bc4fc;
  *DAT_004bc4f8 =
       DAT_004bcc10 +
       DAT_004bc500[0xb] + (*DAT_004bc4fc & *DAT_004bc4f4 | *DAT_004bc4f0 & ~*DAT_004bc4f4) +
       *DAT_004bc4f8;
  *DAT_004bc4f8 = *DAT_004bc4f8 >> 0x12 | *DAT_004bc4f8 << 0xe;
  *DAT_004bc4f8 = *DAT_004bc4fc + *DAT_004bc4f8;
  *DAT_004bc4f4 =
       DAT_004bcc70 +
       *DAT_004bc500 + (*DAT_004bc4f8 & *DAT_004bc4f0 | *DAT_004bc4fc & ~*DAT_004bc4f0) +
       *DAT_004bc4f4;
  *DAT_004bc4f4 = *DAT_004bc4f4 >> 0xc | *DAT_004bc4f4 << 0x14;
  *DAT_004bc4f4 = *DAT_004bc4f8 + *DAT_004bc4f4;
  *DAT_004bc4f0 =
       DAT_004bccbc +
       DAT_004bc500[5] + (*DAT_004bc4f4 & *DAT_004bc4fc | *DAT_004bc4f8 & ~*DAT_004bc4fc) +
       *DAT_004bc4f0;
  *DAT_004bc4f0 = *DAT_004bc4f0 >> 0x1b | *DAT_004bc4f0 << 5;
  *DAT_004bc4f0 = *DAT_004bc4f4 + *DAT_004bc4f0;
  *DAT_004bc4fc =
       DAT_004bcd08 +
       DAT_004bc500[10] + (*DAT_004bc4f0 & *DAT_004bc4f8 | *DAT_004bc4f4 & ~*DAT_004bc4f8) +
       *DAT_004bc4fc;
  *DAT_004bc4fc = *DAT_004bc4fc >> 0x17 | *DAT_004bc4fc << 9;
  *DAT_004bc4fc = *DAT_004bc4f0 + *DAT_004bc4fc;
  *DAT_004bc4f8 =
       DAT_004bcd54 +
       DAT_004bc500[0xf] + (*DAT_004bc4fc & *DAT_004bc4f4 | *DAT_004bc4f0 & ~*DAT_004bc4f4) +
       *DAT_004bc4f8;
  *DAT_004bc4f8 = *DAT_004bc4f8 >> 0x12 | *DAT_004bc4f8 << 0xe;
  *DAT_004bc4f8 = *DAT_004bc4fc + *DAT_004bc4f8;
  *DAT_004bc4f4 =
       DAT_004bcda0 +
       DAT_004bc500[4] + (*DAT_004bc4f8 & *DAT_004bc4f0 | *DAT_004bc4fc & ~*DAT_004bc4f0) +
       *DAT_004bc4f4;
  *DAT_004bc4f4 = *DAT_004bc4f4 >> 0xc | *DAT_004bc4f4 << 0x14;
  *DAT_004bc4f4 = *DAT_004bc4f8 + *DAT_004bc4f4;
  *DAT_004bc4f0 =
       DAT_004bcdec +
       DAT_004bc500[9] + (*DAT_004bc4f4 & *DAT_004bc4fc | *DAT_004bc4f8 & ~*DAT_004bc4fc) +
       *DAT_004bc4f0;
  *DAT_004bc4f0 = *DAT_004bc4f0 >> 0x1b | *DAT_004bc4f0 << 5;
  *DAT_004bc4f0 = *DAT_004bc4f4 + *DAT_004bc4f0;
  *DAT_004bc4fc =
       DAT_004bce4c +
       DAT_004bc500[0xe] + (*DAT_004bc4f0 & *DAT_004bc4f8 | *DAT_004bc4f4 & ~*DAT_004bc4f8) +
       *DAT_004bc4fc;
  *DAT_004bc4fc = *DAT_004bc4fc >> 0x17 | *DAT_004bc4fc << 9;
  *DAT_004bc4fc = *DAT_004bc4f0 + *DAT_004bc4fc;
  *DAT_004bc4f8 =
       DAT_004bce50 +
       DAT_004bc500[3] + (*DAT_004bc4fc & *DAT_004bc4f4 | *DAT_004bc4f0 & ~*DAT_004bc4f4) +
       *DAT_004bc4f8;
  *DAT_004bc4f8 = *DAT_004bc4f8 >> 0x12 | *DAT_004bc4f8 << 0xe;
  *DAT_004bc4f8 = *DAT_004bc4fc + *DAT_004bc4f8;
  *DAT_004bc4f4 =
       DAT_004bce54 +
       DAT_004bc500[8] + (*DAT_004bc4f8 & *DAT_004bc4f0 | *DAT_004bc4fc & ~*DAT_004bc4f0) +
       *DAT_004bc4f4;
  *DAT_004bc4f4 = *DAT_004bc4f4 >> 0xc | *DAT_004bc4f4 << 0x14;
  *DAT_004bc4f4 = *DAT_004bc4f8 + *DAT_004bc4f4;
  *DAT_004bc4f0 =
       DAT_004bcf0c +
       DAT_004bc500[0xd] + (*DAT_004bc4f4 & *DAT_004bc4fc | *DAT_004bc4f8 & ~*DAT_004bc4fc) +
       *DAT_004bc4f0;
  *DAT_004bc4f0 = *DAT_004bc4f0 >> 0x1b | *DAT_004bc4f0 << 5;
  *DAT_004bc4f0 = *DAT_004bc4f4 + *DAT_004bc4f0;
  *DAT_004bc4fc =
       DAT_004bce58 +
       DAT_004bc500[2] + (*DAT_004bc4f0 & *DAT_004bc4f8 | *DAT_004bc4f4 & ~*DAT_004bc4f8) +
       *DAT_004bc4fc;
  *DAT_004bc4fc = *DAT_004bc4fc >> 0x17 | *DAT_004bc4fc << 9;
  *DAT_004bc4fc = *DAT_004bc4f0 + *DAT_004bc4fc;
  *DAT_004bc4f8 =
       DAT_004bce5c +
       DAT_004bc500[7] + (*DAT_004bc4fc & *DAT_004bc4f4 | *DAT_004bc4f0 & ~*DAT_004bc4f4) +
       *DAT_004bc4f8;
  *DAT_004bc4f8 = *DAT_004bc4f8 >> 0x12 | *DAT_004bc4f8 << 0xe;
  *DAT_004bc4f8 = *DAT_004bc4fc + *DAT_004bc4f8;
  *DAT_004bc4f4 =
       DAT_004bcf38 +
       DAT_004bc500[0xc] + (*DAT_004bc4f8 & *DAT_004bc4f0 | *DAT_004bc4fc & ~*DAT_004bc4f0) +
       *DAT_004bc4f4;
  *DAT_004bc4f4 = *DAT_004bc4f4 >> 0xc | *DAT_004bc4f4 << 0x14;
  *DAT_004bc4f4 = *DAT_004bc4f8 + *DAT_004bc4f4;
  *DAT_004bc4f0 =
       DAT_004bcf3c + DAT_004bc500[5] + (*DAT_004bc4f4 ^ *DAT_004bc4f8 ^ *DAT_004bc4fc) +
       *DAT_004bc4f0;
  *DAT_004bc4f0 = *DAT_004bc4f0 >> 0x1c | *DAT_004bc4f0 << 4;
  *DAT_004bc4f0 = *DAT_004bc4f4 + *DAT_004bc4f0;
  *DAT_004bc4fc =
       DAT_004bcf40 + DAT_004bc500[8] + (*DAT_004bc4f0 ^ *DAT_004bc4f4 ^ *DAT_004bc4f8) +
       *DAT_004bc4fc;
  *DAT_004bc4fc = *DAT_004bc4fc >> 0x15 | *DAT_004bc4fc << 0xb;
  *DAT_004bc4fc = *DAT_004bc4f0 + *DAT_004bc4fc;
  *DAT_004bc4f8 =
       DAT_004bcf44 + DAT_004bc500[0xb] + (*DAT_004bc4fc ^ *DAT_004bc4f0 ^ *DAT_004bc4f4) +
       *DAT_004bc4f8;
  *DAT_004bc4f8 = *DAT_004bc4f8 >> 0x10 | *DAT_004bc4f8 << 0x10;
  *DAT_004bc4f8 = *DAT_004bc4fc + *DAT_004bc4f8;
  *DAT_004bc4f4 =
       DAT_004bcf48 + DAT_004bc500[0xe] + (*DAT_004bc4f8 ^ *DAT_004bc4fc ^ *DAT_004bc4f0) +
       *DAT_004bc4f4;
  *DAT_004bc4f4 = *DAT_004bc4f4 >> 9 | *DAT_004bc4f4 << 0x17;
  *DAT_004bc4f4 = *DAT_004bc4f8 + *DAT_004bc4f4;
  *DAT_004bc4f0 =
       DAT_004bcf4c + DAT_004bc500[1] + (*DAT_004bc4f4 ^ *DAT_004bc4f8 ^ *DAT_004bc4fc) +
       *DAT_004bc4f0;
  *DAT_004bc4f0 = *DAT_004bc4f0 >> 0x1c | *DAT_004bc4f0 << 4;
  *DAT_004bc4f0 = *DAT_004bc4f4 + *DAT_004bc4f0;
  *DAT_004bc4fc =
       DAT_004bcf50 + DAT_004bc500[4] + (*DAT_004bc4f0 ^ *DAT_004bc4f4 ^ *DAT_004bc4f8) +
       *DAT_004bc4fc;
  *DAT_004bc4fc = *DAT_004bc4fc >> 0x15 | *DAT_004bc4fc << 0xb;
  *DAT_004bc4fc = *DAT_004bc4f0 + *DAT_004bc4fc;
  *DAT_004bc4f8 =
       DAT_004bcf54 + DAT_004bc500[7] + (*DAT_004bc4fc ^ *DAT_004bc4f0 ^ *DAT_004bc4f4) +
       *DAT_004bc4f8;
  *DAT_004bc4f8 = *DAT_004bc4f8 >> 0x10 | *DAT_004bc4f8 << 0x10;
  *DAT_004bc4f8 = *DAT_004bc4fc + *DAT_004bc4f8;
  *DAT_004bcf5c =
       DAT_004bcf58 + DAT_004bc500[10] + (*DAT_004bc4f8 ^ *DAT_004bc4fc ^ *DAT_004bc4f0) +
       *DAT_004bc4f4;
  *DAT_004bcf5c = *DAT_004bcf5c >> 9 | *DAT_004bcf5c << 0x17;
  *DAT_004bcf5c = *DAT_004bcf60 + *DAT_004bcf5c;
  *DAT_004bcf64 =
       DAT_004bcf70 + DAT_004bcf6c[0xd] + (*DAT_004bcf5c ^ *DAT_004bcf60 ^ *DAT_004bcf68) +
       *DAT_004bcf64;
  *DAT_004bcf64 = *DAT_004bcf64 >> 0x1c | *DAT_004bcf64 << 4;
  *DAT_004bcf64 = *DAT_004bcf5c + *DAT_004bcf64;
  *DAT_004bcf68 =
       DAT_004bcf74 + *DAT_004bcf6c + (*DAT_004bcf64 ^ *DAT_004bcf5c ^ *DAT_004bcf60) +
       *DAT_004bcf68;
  *DAT_004bcf68 = *DAT_004bcf68 >> 0x15 | *DAT_004bcf68 << 0xb;
  *DAT_004bcf68 = *DAT_004bcf64 + *DAT_004bcf68;
  *DAT_004bcf60 =
       DAT_004bcf78 + DAT_004bcf6c[3] + (*DAT_004bcf68 ^ *DAT_004bcf64 ^ *DAT_004bcf5c) +
       *DAT_004bcf60;
  *DAT_004bcf60 = *DAT_004bcf60 >> 0x10 | *DAT_004bcf60 << 0x10;
  *DAT_004bcf60 = *DAT_004bcf68 + *DAT_004bcf60;
  *DAT_004bcf5c =
       DAT_004bcf7c + DAT_004bcf6c[6] + (*DAT_004bcf60 ^ *DAT_004bcf68 ^ *DAT_004bcf64) +
       *DAT_004bcf5c;
  *DAT_004bcf5c = *DAT_004bcf5c >> 9 | *DAT_004bcf5c << 0x17;
  *DAT_004bcf5c = *DAT_004bcf60 + *DAT_004bcf5c;
  *DAT_004bcf64 =
       DAT_004bcf80 + DAT_004bcf6c[9] + (*DAT_004bcf5c ^ *DAT_004bcf60 ^ *DAT_004bcf68) +
       *DAT_004bcf64;
  *DAT_004bcf64 = *DAT_004bcf64 >> 0x1c | *DAT_004bcf64 << 4;
  *DAT_004bcf64 = *DAT_004bcf5c + *DAT_004bcf64;
  *DAT_004bcf68 =
       DAT_004bcf84 + DAT_004bcf6c[0xc] + (*DAT_004bcf64 ^ *DAT_004bcf5c ^ *DAT_004bcf60) +
       *DAT_004bcf68;
  *DAT_004bcf68 = *DAT_004bcf68 >> 0x15 | *DAT_004bcf68 << 0xb;
  *DAT_004bcf68 = *DAT_004bcf64 + *DAT_004bcf68;
  *DAT_004bcf60 =
       DAT_004bcf88 + DAT_004bcf6c[0xf] + (*DAT_004bcf68 ^ *DAT_004bcf64 ^ *DAT_004bcf5c) +
       *DAT_004bcf60;
  *DAT_004bcf60 = *DAT_004bcf60 >> 0x10 | *DAT_004bcf60 << 0x10;
  *DAT_004bcf60 = *DAT_004bcf68 + *DAT_004bcf60;
  *DAT_004bcf5c =
       DAT_004bcf8c + DAT_004bcf6c[2] + (*DAT_004bcf60 ^ *DAT_004bcf68 ^ *DAT_004bcf64) +
       *DAT_004bcf5c;
  *DAT_004bcf5c = *DAT_004bcf5c >> 9 | *DAT_004bcf5c << 0x17;
  *DAT_004bcf5c = *DAT_004bcf60 + *DAT_004bcf5c;
  *DAT_004bcf64 =
       DAT_004bcf90 + *DAT_004bcf6c + (*DAT_004bcf60 ^ (*DAT_004bcf5c | ~*DAT_004bcf68)) +
       *DAT_004bcf64;
  *DAT_004bcf64 = *DAT_004bcf64 >> 0x1a | *DAT_004bcf64 << 6;
  *DAT_004bcf64 = *DAT_004bcf5c + *DAT_004bcf64;
  *DAT_004bcf68 =
       DAT_004bcf94 + DAT_004bcf6c[7] + (*DAT_004bcf5c ^ (*DAT_004bcf64 | ~*DAT_004bcf60)) +
       *DAT_004bcf68;
  *DAT_004bcf68 = *DAT_004bcf68 >> 0x16 | *DAT_004bcf68 << 10;
  *DAT_004bcf68 = *DAT_004bcf64 + *DAT_004bcf68;
  *DAT_004bcf60 =
       DAT_004bcf98 + DAT_004bcf6c[0xe] + (*DAT_004bcf64 ^ (*DAT_004bcf68 | ~*DAT_004bcf5c)) +
       *DAT_004bcf60;
  *DAT_004bcf60 = *DAT_004bcf60 >> 0x11 | *DAT_004bcf60 << 0xf;
  *DAT_004bcf60 = *DAT_004bcf68 + *DAT_004bcf60;
  *DAT_004bcf5c =
       DAT_004bcf9c + DAT_004bcf6c[5] + (*DAT_004bcf68 ^ (*DAT_004bcf60 | ~*DAT_004bcf64)) +
       *DAT_004bcf5c;
  *DAT_004bcf5c = *DAT_004bcf5c >> 0xb | *DAT_004bcf5c << 0x15;
  *DAT_004bcf5c = *DAT_004bcf60 + *DAT_004bcf5c;
  *DAT_004bcf64 =
       DAT_004bcfa0 + DAT_004bcf6c[0xc] + (*DAT_004bcf60 ^ (*DAT_004bcf5c | ~*DAT_004bcf68)) +
       *DAT_004bcf64;
  *DAT_004bcf64 = *DAT_004bcf64 >> 0x1a | *DAT_004bcf64 << 6;
  *DAT_004bcf64 = *DAT_004bcf5c + *DAT_004bcf64;
  *DAT_004bcf68 =
       DAT_004bcfa4 + DAT_004bcf6c[3] + (*DAT_004bcf5c ^ (*DAT_004bcf64 | ~*DAT_004bcf60)) +
       *DAT_004bcf68;
  *DAT_004bcf68 = *DAT_004bcf68 >> 0x16 | *DAT_004bcf68 << 10;
  *DAT_004bcf68 = *DAT_004bcf64 + *DAT_004bcf68;
  *DAT_004bcf60 =
       DAT_004bcfa8 + DAT_004bcf6c[10] + (*DAT_004bcf64 ^ (*DAT_004bcf68 | ~*DAT_004bcf5c)) +
       *DAT_004bcf60;
  *DAT_004bcf60 = *DAT_004bcf60 >> 0x11 | *DAT_004bcf60 << 0xf;
  *DAT_004bcf60 = *DAT_004bcf68 + *DAT_004bcf60;
  *DAT_004bcf5c =
       DAT_004bcfac + DAT_004bcf6c[1] + (*DAT_004bcf68 ^ (*DAT_004bcf60 | ~*DAT_004bcf64)) +
       *DAT_004bcf5c;
  *DAT_004bcf5c = *DAT_004bcf5c >> 0xb | *DAT_004bcf5c << 0x15;
  *DAT_004bcf5c = *DAT_004bcf60 + *DAT_004bcf5c;
  *DAT_004bcf64 =
       DAT_004bcfb0 + DAT_004bcf6c[8] + (*DAT_004bcf60 ^ (*DAT_004bcf5c | ~*DAT_004bcf68)) +
       *DAT_004bcf64;
  *DAT_004bcf64 = *DAT_004bcf64 >> 0x1a | *DAT_004bcf64 << 6;
  *DAT_004bcf64 = *DAT_004bcf5c + *DAT_004bcf64;
  *DAT_004bcf68 =
       DAT_004bcfb4 + DAT_004bcf6c[0xf] + (*DAT_004bcf5c ^ (*DAT_004bcf64 | ~*DAT_004bcf60)) +
       *DAT_004bcf68;
  *DAT_004bcf68 = *DAT_004bcf68 >> 0x16 | *DAT_004bcf68 << 10;
  *DAT_004bcf68 = *DAT_004bcf64 + *DAT_004bcf68;
  *DAT_004bcf60 =
       DAT_004bcfb8 + DAT_004bcf6c[6] + (*DAT_004bcf64 ^ (*DAT_004bcf68 | ~*DAT_004bcf5c)) +
       *DAT_004bcf60;
  *DAT_004bcf60 = *DAT_004bcf60 >> 0x11 | *DAT_004bcf60 << 0xf;
  *DAT_004bcf60 = *DAT_004bcf68 + *DAT_004bcf60;
  *DAT_004bcf5c =
       DAT_004bcfbc + DAT_004bcf6c[0xd] + (*DAT_004bcf68 ^ (*DAT_004bcf60 | ~*DAT_004bcf64)) +
       *DAT_004bcf5c;
  *DAT_004bcf5c = *DAT_004bcf5c >> 0xb | *DAT_004bcf5c << 0x15;
  *DAT_004bcf5c = *DAT_004bcf60 + *DAT_004bcf5c;
  *DAT_004bcf64 =
       DAT_004bcfc0 + DAT_004bcf6c[4] + (*DAT_004bcf60 ^ (*DAT_004bcf5c | ~*DAT_004bcf68)) +
       *DAT_004bcf64;
  *DAT_004bcf64 = *DAT_004bcf64 >> 0x1a | *DAT_004bcf64 << 6;
  *DAT_004bcf64 = *DAT_004bcf5c + *DAT_004bcf64;
  *DAT_004bcf68 =
       DAT_004bcfc4 + DAT_004bcf6c[0xb] + (*DAT_004bcf5c ^ (*DAT_004bcf64 | ~*DAT_004bcf60)) +
       *DAT_004bcf68;
  *DAT_004bcf68 = *DAT_004bcf68 >> 0x16 | *DAT_004bcf68 << 10;
  *DAT_004bcf68 = *DAT_004bcf64 + *DAT_004bcf68;
  *DAT_004bcf60 =
       DAT_004bcfc8 + DAT_004bcf6c[2] + (*DAT_004bcf64 ^ (*DAT_004bcf68 | ~*DAT_004bcf5c)) +
       *DAT_004bcf60;
  *DAT_004bcf60 = *DAT_004bcf60 >> 0x11 | *DAT_004bcf60 << 0xf;
  *DAT_004bcf60 = *DAT_004bcf68 + *DAT_004bcf60;
  *DAT_004bcf5c =
       DAT_004bcfcc + DAT_004bcf6c[9] + (*DAT_004bcf68 ^ (*DAT_004bcf60 | ~*DAT_004bcf64)) +
       *DAT_004bcf5c;
  *DAT_004bcf5c = *DAT_004bcf5c >> 0xb | *DAT_004bcf5c << 0x15;
  *DAT_004bcf5c = *DAT_004bcf60 + *DAT_004bcf5c;
  *param_1 = *DAT_004bcf64 + *param_1;
  param_1[1] = *DAT_004bcf5c + param_1[1];
  param_1[2] = *DAT_004bcf60 + param_1[2];
  param_1[3] = *DAT_004bcf68 + param_1[3];
  FUN_004bcf10(DAT_004bcf6c,0,0x40);
  return param_4;
}

