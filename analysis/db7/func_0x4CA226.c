// func @ 0x4CA226

undefined8 FUN_004ca226(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_18 = param_2;
  local_14 = param_3;
  uStack_10 = param_4;
  FUN_004ca1dc(3,0);
  FUN_004ca1d0(3);
  FUN_004b48f6(3,0);
  FUN_004ca1dc(4,0);
  FUN_004ca1d0(4);
  FUN_004b48f6(4,0);
  FUN_004b4606(0x13);
  local_18 = FUN_004ca0f0();
  local_14 = DAT_004cad40;
  iVar2 = 10;
  do {
    iVar1 = FUN_004cc6fa(DAT_004cad44,&local_18);
    iVar2 = iVar2 + -1;
    if (iVar1 == 0) break;
  } while (iVar2 != 0);
  return CONCAT44(local_14,local_18);
}

