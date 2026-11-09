// func @ 0x4CBBF4

undefined4 FUN_004cbbf4(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 32000;
  }
  else if (param_1 == 2) {
    uVar1 = 0x8000;
  }
  else if (param_1 < 2) {
    uVar1 = 0x8000;
  }
  else if (param_1 == 4) {
    uVar1 = DAT_004cbe8c;
  }
  else if (param_1 < 4) {
    uVar1 = DAT_004cbe88;
  }
  else {
    uVar1 = DAT_004cbe90;
    if (((param_1 != 6) && (5 < param_1)) && (param_1 != 7)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

