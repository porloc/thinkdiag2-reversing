// func @ 0x4B9C4A

void FUN_004b9c4a(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = DAT_004b9f24;
  *(uint *)(param_1 + 0xc) = (*(byte *)(param_2 + 0xf) & 0x1f) << 0x18 | DAT_004b9f28;
  if (*(char *)(param_2 + 0xe) != '\0') {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x800000;
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | (uint)*(byte *)(param_2 + 1);
  if (*(char *)(param_2 + 2) != '\0') {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x4000;
  }
  if (*(char *)(param_2 + 5) == '\0') {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40;
  }
  if (*(char *)(param_2 + 6) != '\0') {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  }
  *(uint *)(param_1 + 0x20) = (*(byte *)(param_2 + 8) & 0xf) << 0x10 | 1;
  *(uint *)(param_1 + 0x28) =
       (int)*(char *)(param_2 + 0xc) | (uint)*(ushort *)(param_2 + 10) << 0x10 |
       (uint)*(byte *)(param_2 + 0xd);
  *(uint *)(param_1 + 0x80) =
       ((int)*(char *)(param_2 + 0x10) & 3U) << 4 | ((int)*(char *)(param_2 + 0x11) & 3U) << 2;
  if (*(char *)(param_2 + 0x12) != '\0') {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 2;
  }
  if (*(char *)(param_2 + 0x13) != '\0') {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 1;
  }
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x14);
  if (*(char *)(param_2 + 0x18) != '\0') {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x80000000;
  }
  *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | (*(byte *)(param_2 + 0x19) & 0x7f) << 0x18
  ;
  if (*(char *)(param_2 + 0x1a) != '\0') {
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 0x80000000;
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | (*(byte *)(param_2 + 0x1b) & 0x7f) << 0x18
  ;
  if (*(char *)(param_2 + 0x1c) != '\0') {
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x40000000;
  }
  *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | (*(byte *)(param_2 + 0x1d) & 0x3f) << 0x18
  ;
  return;
}

