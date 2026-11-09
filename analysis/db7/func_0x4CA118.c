// func @ 0x4CA118

undefined4 FUN_004ca118(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004ca0fe(param_1);
  *(undefined4 *)(iVar1 + 4) = param_2;
  return param_4;
}

