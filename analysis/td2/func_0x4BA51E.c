// func @ 0x4BA51E

uint FUN_004ba51e(int param_1,byte param_2)

{
  uint uVar1;
  
  if (param_2 < 0x20) {
    uVar1 = *(uint *)(param_1 + 0x3c) >> (uint)param_2 & 1;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}

