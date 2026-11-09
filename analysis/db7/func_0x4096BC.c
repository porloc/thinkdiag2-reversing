// func @ 0x4096BC

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004096bc(byte param_1)

{
  *(int *)(_LAB_00409800 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}

