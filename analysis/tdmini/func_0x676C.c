// FUN_0800676c @ 0800676c

undefined8 FUN_0800676c(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 == '\x10') {
    FUN_08000348(param_1,DAT_080067d4,0x10);
    for (uVar2 = 0;
        ((uVar2 & 0xff) < 0x10 && (uVar2 = uVar2 & 0xff, *(char *)(param_1 + uVar2) == -1));
        uVar2 = uVar2 + 1) {
    }
    if ((uVar2 & 0xff) == 0x10) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(param_4,uVar1);
}

