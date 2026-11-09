// func @ 0x4CBFBE

bool FUN_004cbfbe(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  FUN_004cc1d4(param_1);
  FUN_004cbfb0(param_1);
  iVar1 = FUN_004cbff0(param_1,param_2[1],*param_2);
  return iVar1 == 1;
}

