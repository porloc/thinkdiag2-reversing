// func @ 0x409450

uint FUN_00409450(byte *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*param_1;
    if (1 < param_2) {
      uVar1 = (uint)CONCAT11(*param_1,param_1[1]);
    }
    if (2 < param_2) {
      uVar1 = uVar1 << 8 | (uint)param_1[2];
    }
  }
  return uVar1;
}

