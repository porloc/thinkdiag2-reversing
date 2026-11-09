// func @ 0x4BA68A

undefined4 FUN_004ba68a(ushort param_1,ushort param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x6a5) || (0x12f1 < param_1)) {
    if ((param_1 < 0x12c1) || (0x2007 < param_1)) {
      if ((param_1 < 12000) && (0x1fd6 < param_1)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else if ((param_2 < 0x2008) && (0x12c0 < param_2)) {
      uVar1 = 0x40;
    }
    else if ((param_2 < 0x6a5) || (0x12f1 < param_2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x10;
    }
  }
  else if ((param_2 < 0x2008) && (0x12c0 < param_2)) {
    uVar1 = 0x80;
  }
  else if ((param_2 < 0x6a5) || (0x12f1 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x20;
  }
  return uVar1;
}

