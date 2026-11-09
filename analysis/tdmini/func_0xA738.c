// FUN_0800a738 @ 0800a738

undefined4 FUN_0800a738(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_0800a7c0;
  *param_3 = 0;
  iVar3 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(param_1 + 0x11fa) <= iVar3) {
      return uVar1;
    }
    if ((*(char *)(iVar3 * 0x45 + param_1 + 0x135e) != '\0') &&
       (iVar2 = FUN_0800bc64(iVar3 * 0x45 + param_1 + 0x1364,param_2,0x1f), iVar2 == 0)) break;
    iVar3 = iVar3 + 1;
  }
  *param_3 = iVar3 * 0x45 + param_1 + 0x135c;
  *(int *)(param_1 + 0x1358) = iVar3 * 0x45 + param_1 + 0x135c;
  return 0x90009000;
}

