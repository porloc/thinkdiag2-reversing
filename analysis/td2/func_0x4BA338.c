// func @ 0x4BA338

bool FUN_004ba338(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x14) << 0x1e < 0;
  if (bVar1) {
    *(uint *)(param_1 + 0x1c) = param_2 & 0x1ff;
  }
  return !bVar1;
}

