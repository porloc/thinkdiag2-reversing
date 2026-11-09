// FUN_08009a82 @ 08009a82

undefined8 FUN_08009a82(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = DAT_08009b04;
  }
  else if (*DAT_08009af8 == 0) {
    iVar1 = DAT_08009b08;
  }
  else {
    iVar1 = FUN_0800a738(*(undefined4 *)*DAT_08009af8,param_2,&uStack_18);
    if (iVar1 == -0x6fff7000) {
      iVar1 = 0;
    }
  }
  return CONCAT44(uStack_18,iVar1);
}

