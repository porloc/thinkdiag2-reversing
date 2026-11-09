// func @ 0x4BDB72

void FUN_004bdb72(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  for (uVar3 = 0; uVar3 < 4; uVar3 = uVar3 + 1) {
    *(undefined1 *)(param_2 + uVar3 * 4) = *(undefined1 *)(param_1 + uVar3 * 4);
    *(undefined1 *)(param_2 + uVar3 * 4 + 1) = *(undefined1 *)(param_1 + uVar3 * 4 + 1);
    *(undefined1 *)(param_2 + uVar3 * 4 + 2) = *(undefined1 *)(param_1 + uVar3 * 4 + 2);
    *(undefined1 *)(param_2 + uVar3 * 4 + 3) = *(undefined1 *)(param_1 + uVar3 * 4 + 3);
  }
  for (uVar3 = 4; uVar3 < 0xc; uVar3 = uVar3 + 1) {
    bVar5 = *(byte *)(param_2 + uVar3 * 4 + -4);
    bVar6 = *(byte *)(param_2 + uVar3 * 4 + -3);
    bVar2 = *(byte *)(param_2 + uVar3 * 4 + -2);
    bVar1 = *(byte *)(param_2 + uVar3 * 4 + -1);
    bVar4 = bVar1;
    if (uVar3 % 4 == 0) {
      bVar4 = (&DAT_004bddf8)[bVar5];
      bVar5 = (&DAT_004bddf8)[bVar6] ^ *(byte *)((uVar3 >> 2) + DAT_004bdc50);
      bVar6 = (&DAT_004bddf8)[bVar2];
      bVar2 = (&DAT_004bddf8)[bVar1];
    }
    *(byte *)(param_2 + uVar3 * 4) = bVar5 ^ *(byte *)(param_2 + uVar3 * 4 + -0x10);
    *(byte *)(param_2 + uVar3 * 4 + 1) = *(byte *)(param_2 + uVar3 * 4 + -0xf) ^ bVar6;
    *(byte *)(param_2 + uVar3 * 4 + 2) = bVar2 ^ *(byte *)(param_2 + uVar3 * 4 + -0xe);
    *(byte *)(param_2 + uVar3 * 4 + 3) = *(byte *)(param_2 + uVar3 * 4 + -0xd) ^ bVar4;
  }
  return;
}

