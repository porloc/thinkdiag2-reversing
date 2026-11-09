// func @ 0x4BD346

undefined4 FUN_004bd346(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_004c9eb0(param_1,0,param_3 >> 3);
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(byte *)(param_1 + ((int)uVar1 >> 3)) =
         *(byte *)(param_1 + ((int)uVar1 >> 3)) | *(char *)(param_2 + uVar1) << (uVar1 & 7);
  }
  return param_4;
}

