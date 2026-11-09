// func @ 0x409F6C

undefined4 * FUN_00409f6c(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)(param_1 + param_2);
  uVar3 = (uint)puVar1 & 3;
  if (uVar3 != 0) {
    uVar2 = param_2 - uVar3;
    if (param_2 < uVar3) {
      if (uVar2 + uVar3 != 0) {
        puVar1 = (undefined4 *)((int)puVar1 + -1);
        *(undefined1 *)puVar1 = 0;
      }
      if (((uVar2 + uVar3) * 0x40000000 & 0x80000000) != 0) {
        puVar1 = (undefined4 *)((int)puVar1 + -1);
        *(undefined1 *)puVar1 = 0;
      }
      return puVar1;
    }
    uVar3 = (uint)puVar1 & 2;
    if ((int)puVar1 * -0x80000000 < 0) {
      puVar1 = (undefined4 *)((int)puVar1 + -1);
      *(undefined1 *)puVar1 = 0;
    }
    param_2 = uVar2;
    if (uVar3 != 0) {
      puVar1 = (undefined4 *)((int)puVar1 + -2);
      *(undefined2 *)puVar1 = 0;
    }
  }
  do {
    uVar3 = param_2;
    if (0xf < uVar3) {
      puVar1[-1] = 0;
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      puVar1[-4] = 0;
      puVar1 = puVar1 + -4;
    }
    param_2 = uVar3 - 0x10;
  } while (0xf < uVar3 && uVar3 - 0x10 != 0);
  if ((uVar3 & 8) != 0) {
    puVar1[-1] = 0;
    puVar1[-2] = 0;
    puVar1 = puVar1 + -2;
  }
  if ((int)(uVar3 << 0x1d) < 0) {
    puVar1 = puVar1 + -1;
    *puVar1 = 0;
  }
  if ((uVar3 & 2) != 0) {
    puVar1 = (undefined4 *)((int)puVar1 + -2);
    *(undefined2 *)puVar1 = 0;
  }
  if ((int)(uVar3 << 0x1f) < 0) {
    puVar1 = (undefined4 *)((int)puVar1 + -1);
    *(undefined1 *)puVar1 = 0;
  }
  return puVar1;
}

