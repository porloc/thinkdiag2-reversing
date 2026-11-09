// func @ 0x40A55E

undefined4 FUN_0040a55e(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)(param_1 + 0x10) & 0x1ff) >> 3;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3 * 8;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  uVar2 = 0x40 - uVar1;
  if (param_3 < uVar2) {
    uVar2 = 0;
  }
  else {
    FUN_0040ae3c(param_1 + uVar1 + 0x18,param_2,uVar2);
    FUN_0040a632(param_1,param_1 + 0x18);
    for (; uVar2 + 0x3f < param_3; uVar2 = uVar2 + 0x40) {
      FUN_0040a632(param_1,param_2 + uVar2);
    }
    uVar1 = 0;
  }
  FUN_0040ae3c(param_1 + uVar1 + 0x18,param_2 + uVar2,param_3 - uVar2);
  return param_4;
}

