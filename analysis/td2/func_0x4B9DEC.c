// func @ 0x4B9DEC

undefined4 FUN_004b9dec(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == DAT_004b9ee0) {
    FUN_004b27ac(param_2,DAT_004b9eec + param_3 * 0x48,0x48);
    uVar1 = 0;
  }
  else if (*param_1 == DAT_004b9f04) {
    FUN_004b27ac(param_2,DAT_004b9f10 + param_3 * 0x48,0x48);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff8;
  }
  return uVar1;
}

