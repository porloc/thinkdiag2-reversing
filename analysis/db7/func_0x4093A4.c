// func @ 0x4093A4

undefined4 FUN_004093a4(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < DAT_004095bc) {
    if (param_2 < DAT_004095c0) {
      uVar2 = param_3 / (param_2 << 1) - 3;
      for (; (0xff < uVar2 && (uVar4 < 7)); uVar4 = uVar4 + 1) {
        uVar2 = uVar2 >> 1;
      }
      *(uint *)(param_1 + 0x10) = (uVar4 & 7) << 0x10 | (uVar2 & 0xff) << 8 | uVar2 & 0xff;
    }
    else {
      uVar2 = param_3 / DAT_004095c4 - 3;
      uVar3 = param_3 / ((DAT_004095c8 + param_2 * 2) * 2) - 3;
      for (; (0xff < uVar2 && (uVar4 < 7)); uVar4 = uVar4 + 1) {
        uVar2 = uVar2 >> 1;
      }
      for (; (0xff < uVar3 && (uVar4 < 7)); uVar4 = uVar4 + 1) {
        uVar3 = uVar3 >> 1;
      }
      *(uint *)(param_1 + 0x10) = (uVar4 & 7) << 0x10 | (uVar3 & 0xff) << 8 | uVar2 & 0xff;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

