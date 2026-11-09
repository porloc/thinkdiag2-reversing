// func @ 0x4B9A0C

undefined4 FUN_004b9a0c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x40) {
    if (param_1 < 0x20) {
      if ((*DAT_004b9b04 & 1 << (param_1 & 0xff)) == 1 << (param_1 & 0xff)) {
        *DAT_004b9b14 = 1 << (param_1 & 0xff);
      }
    }
    else {
      param_1 = param_1 - 0x20;
      if ((*DAT_004b9b0c & 1 << (param_1 & 0xff)) == 1 << (param_1 & 0xff)) {
        *DAT_004b9b18 = 1 << (param_1 & 0xff);
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

