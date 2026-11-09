// FUN_08028434 @ 08028434

ulonglong FUN_08028434(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0xffff;
  puVar1 = (undefined1 *)FUN_080299fc(param_1,&DAT_08028528);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = FUN_08027a14(param_1);
  for (iVar6 = 0; iVar6 < iVar2; iVar6 = iVar6 + 1) {
    if (*(char *)(param_1 + iVar6) != ' ') {
      for (uVar4 = 0; (int)uVar4 < 8; uVar4 = uVar4 + 1) {
        uVar3 = uVar5 & 0xffff;
        uVar5 = uVar5 << 1;
        if ((uVar3 >> 8 & 0x80) != ((uint)*(byte *)(param_1 + iVar6) << (uVar4 & 0xff) & 0x80)) {
          uVar5 = uVar5 ^ 0x1021;
        }
      }
    }
  }
  return CONCAT44(param_4,uVar5) & 0xffffffff0000ffff;
}

