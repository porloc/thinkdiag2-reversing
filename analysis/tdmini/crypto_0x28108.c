// FUN_08028108 @ 08028108

void FUN_08028108(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  for (uVar6 = 0; uVar6 < 4; uVar6 = uVar6 + 1) {
    *(undefined1 *)(param_2 + uVar6 * 4) = *(undefined1 *)(param_1 + uVar6 * 4);
    *(undefined1 *)(param_2 + uVar6 * 4 + 1) = *(undefined1 *)(param_1 + uVar6 * 4 + 1);
    *(undefined1 *)(param_2 + uVar6 * 4 + 2) = *(undefined1 *)(param_1 + uVar6 * 4 + 2);
    *(undefined1 *)(param_2 + uVar6 * 4 + 3) = *(undefined1 *)(param_1 + uVar6 * 4 + 3);
  }
  for (uVar6 = 4; uVar6 < 0xc; uVar6 = uVar6 + 1) {
    bVar2 = *(byte *)(param_2 + uVar6 * 4 + -4);
    bVar3 = *(byte *)(param_2 + uVar6 * 4 + -3);
    bVar4 = *(byte *)(param_2 + uVar6 * 4 + -2);
    bVar1 = *(byte *)(param_2 + uVar6 * 4 + -1);
    bVar5 = bVar1;
    if ((uVar6 & 3) == 0) {
      bVar5 = *(byte *)(DAT_08028220 + (uint)bVar2);
      bVar2 = *(byte *)(DAT_08028240 + (uVar6 >> 2)) ^ *(byte *)(DAT_08028220 + (uint)bVar3);
      bVar3 = *(byte *)(DAT_08028220 + (uint)bVar4);
      bVar4 = *(byte *)(DAT_08028220 + (uint)bVar1);
    }
    *(byte *)(param_2 + uVar6 * 4) = bVar2 ^ *(byte *)(param_2 + uVar6 * 4 + -0x10);
    *(byte *)(param_2 + uVar6 * 4 + 1) = bVar3 ^ *(byte *)(param_2 + uVar6 * 4 + -0xf);
    *(byte *)(param_2 + uVar6 * 4 + 2) = bVar4 ^ *(byte *)(param_2 + uVar6 * 4 + -0xe);
    *(byte *)(param_2 + uVar6 * 4 + 3) = bVar5 ^ *(byte *)(param_2 + uVar6 * 4 + -0xd);
  }
  return;
}

