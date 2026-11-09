// func @ 0x409372

bool FUN_00409372(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  FUN_004095b2(param_1);
  FUN_00409364(param_1);
  iVar1 = FUN_004093a4(param_1,param_2[1],*param_2);
  return iVar1 == 1;
}

