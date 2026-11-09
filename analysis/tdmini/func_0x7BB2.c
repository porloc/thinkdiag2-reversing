// FUN_08007bb2 @ 08007bb2

int FUN_08007bb2(int *param_1)

{
  int iVar1;
  undefined4 local_28 [2];
  
  local_28[0] = 0;
  iVar1 = DAT_08007c58;
  if ((((param_1 == (int *)0x0) || (param_1 == (int *)0x0)) ||
      (iVar1 = FUN_08009a82(param_1,DAT_08007c50), iVar1 != 0)) ||
     (iVar1 = FUN_08009ffc(param_1,*(undefined2 *)(*(int *)(*param_1 + 0x1358) + 0x2b),DAT_08007c68,
                           0x40,DAT_08007c68,local_28), iVar1 != 0)) {
    return iVar1;
  }
  *DAT_08007c60 = 0;
  *DAT_08007c64 = 0;
  FUN_0800016c(DAT_08007c68,0x40,0);
  return 0;
}

