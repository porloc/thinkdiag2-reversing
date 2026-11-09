// FUN_08009d22 @ 08009d22

int FUN_08009d22(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5,
                int param_6,undefined4 *param_7)

{
  ushort uVar1;
  int iVar2;
  int local_2c;
  int local_28;
  
  local_2c = 0;
  if ((((param_1 == 0) || (param_4 == 0)) || (param_5 == 0)) ||
     ((param_6 == 0 || (param_7 == (undefined4 *)0x0)))) {
    iVar2 = DAT_0800a098;
  }
  else if (*DAT_0800a09c == 0) {
    iVar2 = DAT_0800a094;
  }
  else {
    local_28 = param_1;
    uVar1 = FUN_0800ad22(*(undefined4 *)(*DAT_0800a09c + 4),param_2,param_3,param_4,param_5,param_6,
                         &local_2c);
    if ((uVar1 == 0x9000) && (local_2c == 0)) {
      *param_7 = 0;
      return 0;
    }
    iVar2 = uVar1 + 0x80000000;
  }
  *param_7 = 0;
  return iVar2;
}

