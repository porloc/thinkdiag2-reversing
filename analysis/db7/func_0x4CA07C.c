// func @ 0x4CA07C

undefined4 FUN_004ca07c(uint param_1)

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
    uVar1 = DAT_004cad34;
  }
  else if (param_1 < 4) {
    uVar1 = DAT_004cad30;
  }
  else {
    uVar1 = DAT_004cad38;
    if (((param_1 != 6) && (5 < param_1)) && (param_1 != 7)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

