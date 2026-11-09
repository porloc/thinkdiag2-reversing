// func @ 0x4B911E

undefined8 FUN_004b911e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = FUN_004bcfd4(DAT_004b972c);
  if (bVar1 < 0x21) {
    if ((((bVar1 < 4) || (*(char *)(param_1 + (uint)bVar1 + -3) != '_')) ||
        (*(char *)(param_1 + (uint)bVar1 + -2) != 'S')) ||
       (*(char *)(param_1 + (uint)bVar1 + -1) != 'F')) {
      uVar2 = (uint)bVar1;
    }
    else {
      uVar2 = bVar1 - 3 & 0xff;
    }
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(param_4,uVar2);
}

