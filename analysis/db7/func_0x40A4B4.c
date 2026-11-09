// func @ 0x40A4B4

undefined8 FUN_0040a4b4(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040b076(param_1,param_2);
  *DAT_0040a538 = iVar1;
  if (*DAT_0040a538 == 0) {
    iVar1 = *DAT_0040a538;
  }
  else {
    iVar1 = 1;
  }
  return CONCAT44(param_4,iVar1);
}

