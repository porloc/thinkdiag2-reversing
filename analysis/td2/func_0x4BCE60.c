// func @ 0x4BCE60

void FUN_004bce60(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 4) {
    *(char *)(param_1 + uVar2) = (char)*(undefined4 *)(param_2 + iVar1 * 4);
    *(char *)(param_1 + uVar2 + 1) = (char)((uint)*(undefined4 *)(param_2 + iVar1 * 4) >> 8);
    *(char *)(param_1 + uVar2 + 2) = (char)((uint)*(undefined4 *)(param_2 + iVar1 * 4) >> 0x10);
    *(char *)(param_1 + uVar2 + 3) = (char)((uint)*(undefined4 *)(param_2 + iVar1 * 4) >> 0x18);
    iVar1 = iVar1 + 1;
  }
  return;
}

