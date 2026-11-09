// FUN_08009ffc @ 08009ffc

undefined8
FUN_08009ffc(int param_1,uint param_2,int param_3,int param_4,uint param_5,undefined4 *param_6)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_28;
  
  local_28 = 0;
  if ((((param_1 == 0) || (param_3 == 0)) || (param_4 != 0x40)) ||
     ((param_5 == 0 || (param_6 == (undefined4 *)0x0)))) {
    iVar2 = DAT_0800a098;
    param_5 = param_2;
  }
  else if (*DAT_0800a09c == 0) {
    iVar2 = DAT_0800a094;
    param_5 = param_2;
  }
  else {
    uVar1 = FUN_0800ada0(*(undefined4 *)(*DAT_0800a09c + 4),param_2 & 0xffff,param_3,0x40,param_5,
                         &local_28);
    if (uVar1 == 0x9000) {
      *param_6 = local_28;
      iVar2 = 0;
      goto LAB_0800a08c;
    }
    iVar2 = uVar1 + 0x80000000;
  }
  *param_6 = 0;
LAB_0800a08c:
  return CONCAT44(param_5,iVar2);
}

