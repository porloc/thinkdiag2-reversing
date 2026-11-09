// func @ 0x4096D0

void FUN_004096d0(byte param_1)

{
  *(int *)(DAT_00409804 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}

