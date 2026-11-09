// func @ 0x40982C

undefined4 FUN_0040982c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x48) & *(uint *)(param_1 + 0x4c);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (uVar1 == 0) {
        return param_4;
      }
      if ((*(int *)(DAT_00409958 + uVar2 * 0x10) == param_2) &&
         ((uVar1 & *(uint *)(DAT_00409958 + uVar2 * 0x10 + 4)) != 0)) {
        (**(code **)(DAT_00409958 + uVar2 * 0x10 + 0xc))
                  (*(undefined4 *)(DAT_00409958 + uVar2 * 0x10),
                   *(undefined4 *)(DAT_00409958 + uVar2 * 0x10 + 4));
        uVar1 = uVar1 & ~*(uint *)(DAT_00409958 + uVar2 * 0x10 + 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 7);
  }
  return param_4;
}

