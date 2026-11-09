// func @ 0x4B9E46

undefined4 FUN_004b9e46(int *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*param_1 == DAT_004b9ee0) {
    *(undefined4 *)(DAT_004b9ef8 + param_3 * 0x48) = *param_2;
    *(undefined4 *)(DAT_004b9ef8 + param_3 * 0x48 + 4) = param_2[1];
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      *(undefined1 *)(DAT_004b9ef8 + param_3 * 0x48 + uVar2 + 8) =
           *(undefined1 *)((int)param_2 + uVar2 + 8);
    }
    uVar1 = 0;
  }
  else if (*param_1 == DAT_004b9f04) {
    *(undefined4 *)(DAT_004b9f1c + param_3 * 0x48) = *param_2;
    *(undefined4 *)(DAT_004b9f1c + param_3 * 0x48 + 4) = param_2[1];
    for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
      *(undefined1 *)(DAT_004b9f1c + param_3 * 0x48 + uVar2 + 8) =
           *(undefined1 *)((int)param_2 + uVar2 + 8);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff8;
  }
  return uVar1;
}

