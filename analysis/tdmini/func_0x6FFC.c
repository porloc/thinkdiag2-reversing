// FUN_08006ffc @ 08006ffc

int FUN_08006ffc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == 0) || (param_3 != 0x10)) {
    iVar1 = DAT_080075d0;
  }
  else {
    iVar1 = DAT_080075d8;
    if (((param_1 != (int *)0x0) && (param_1 != (int *)0x0)) &&
       (iVar1 = FUN_08009a1a(param_1,param_2,0x10), iVar1 == 0)) {
      *(undefined1 *)(*param_1 + 0x11bb) = 1;
      return 0;
    }
  }
  return iVar1;
}

