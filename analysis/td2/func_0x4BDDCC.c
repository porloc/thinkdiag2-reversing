// func @ 0x4BDDCC

void FUN_004bddcc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_48 [52];
  
  FUN_004bdb72(param_3,auStack_48);
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 0x10) {
    FUN_004bdcfa(iVar1 + param_1,auStack_48,iVar1 + param_4);
  }
  return;
}

