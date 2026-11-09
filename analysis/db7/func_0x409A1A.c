// func @ 0x409A1A

undefined4 FUN_00409a1a(uint param_1)

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
    uVar1 = DAT_00409d00;
  }
  else if (param_1 < 4) {
    uVar1 = DAT_00409cfc;
  }
  else {
    uVar1 = DAT_00409d04;
    if (((param_1 != 6) && (5 < param_1)) && (param_1 != 7)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

