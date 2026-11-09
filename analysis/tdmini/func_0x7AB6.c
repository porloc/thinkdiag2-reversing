// FUN_08007ab6 @ 08007ab6

int FUN_08007ab6(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  local_30 = 0;
  iVar2 = DAT_08007c54;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != (undefined4 *)0x0)) {
    if (param_1 == 0) {
      iVar2 = DAT_08007c58;
    }
    else if (param_1 == 0) {
      iVar2 = DAT_08007c58;
    }
    else if (param_3 == 0x1000) {
      uVar1 = *DAT_08007c60 >> 0xc;
      if ((*DAT_08007c60 & 0xfff) != 0) {
        uVar1 = uVar1 + 1;
      }
      *DAT_08007c64 = *DAT_08007c64 + 1;
      if (*DAT_08007c64 < uVar1) {
        iVar2 = 0x1000;
        uVar3 = 1;
      }
      else {
        iVar2 = *DAT_08007c60 + (*DAT_08007c64 - 1) * -0x1000;
        uVar3 = 2;
        *DAT_08007c64 = 0;
      }
      local_2c = param_1;
      local_28 = param_2;
      iVar2 = FUN_08009dc6(param_1,uVar3,param_2,iVar2,param_4,&local_30);
      if (iVar2 == 0) {
        *param_5 = local_30;
        return 0;
      }
    }
  }
  *param_5 = 0;
  *DAT_08007c64 = 0;
  return iVar2;
}

