// func @ 0x4BA3C8

bool FUN_004ba3c8(int param_1,byte param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x14) << 0x1e < 0;
  if (bVar1) {
    *(uint *)(param_1 + 0x1c) = (uint)param_2;
  }
  return !bVar1;
}

