// func @ 0x409C5E

uint FUN_00409c5e(undefined4 param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_004099e0(param_1);
  uVar3 = FUN_004099e4(param_1);
  uVar3 = uVar3 & uVar2;
  uVar1 = FUN_00409a8e(param_1);
  for (uVar2 = 0; uVar2 < 0x10; uVar2 = uVar2 + 1) {
    if (uVar2 < 0xc) {
      if ((int)((uVar3 >> (uVar2 & 0xff)) << 0x1f) < 0) {
        FUN_00409c30(uVar1,uVar2);
      }
    }
    else if (uVar2 < 0xf) {
      if ((int)((uVar3 >> (uVar2 + 0xc & 0xff)) << 0x1f) < 0) {
        FUN_00409c30(uVar1,uVar2);
      }
    }
    else if ((int)((uVar3 >> (uVar2 + 0xf & 0xff)) << 0x1f) < 0) {
      FUN_00409c30(uVar1,uVar2);
    }
  }
  return uVar3;
}

