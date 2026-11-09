// FUN_08009a1a @ 08009a1a

int FUN_08009a1a(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 != 0x10)) {
    iVar2 = DAT_08009b04;
  }
  else if (*DAT_08009af8 == 0) {
    iVar2 = DAT_08009b08;
  }
  else {
    uVar1 = FUN_0800ac7c(*(undefined4 *)(*DAT_08009af8 + 4),1,param_2,0x10);
    if (uVar1 == 0x9000) {
      return 0;
    }
    iVar2 = uVar1 + 0x80000000;
  }
  return iVar2;
}

