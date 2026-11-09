// func @ 0x4B9D70

undefined4 FUN_004b9d70(int *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == DAT_004b9ee0) {
    *(undefined4 *)(DAT_004b9ee4 + param_3 * 4) = *param_2;
    uVar1 = 0;
  }
  else if (*param_1 == DAT_004b9f04) {
    *(undefined4 *)(DAT_004b9f08 + param_3 * 4) = *param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff8;
  }
  return uVar1;
}

