// func @ 0x4BD324

void FUN_004bd324(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(byte *)(param_1 + uVar1) =
         (byte)((int)*(char *)(param_2 + ((int)uVar1 >> 3)) >> (uVar1 & 7)) & 1;
  }
  return;
}

