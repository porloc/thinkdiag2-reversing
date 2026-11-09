// func @ 0x4CB690

void FUN_004cb690(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_48 [52];
  
  FUN_004cb436(param_3,auStack_48);
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 0x10) {
    FUN_004cb5be(iVar1 + param_1,auStack_48,iVar1 + param_4);
  }
  return;
}

