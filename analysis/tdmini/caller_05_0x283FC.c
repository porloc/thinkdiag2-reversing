// FUN_080283fc @ 080283fc

void FUN_080283fc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_48 [48];
  
  FUN_08028108(param_3,auStack_48);
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 0x10) {
    FUN_08028308(param_1 + iVar1,auStack_48,param_4 + iVar1);
  }
  return;
}

