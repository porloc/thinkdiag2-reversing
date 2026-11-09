// func @ 0x408B36

bool FUN_00408b36(int param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x14) << 0x1f < 0;
  if (bVar1) {
    *param_2 = *(uint *)(param_1 + 0x18) & 0x1ff;
  }
  return !bVar1;
}

