// func @ 0x4BE65C

ulonglong FUN_004be65c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = 0xffff;
  puVar1 = (undefined1 *)FUN_004c9ed2(param_1,&DAT_004be714);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = FUN_004bcfd4(param_1);
  for (iVar6 = 0; iVar6 < iVar2; iVar6 = iVar6 + 1) {
    if (*(char *)(iVar6 + param_1) != ' ') {
      for (uVar3 = 0; (int)uVar3 < 8; uVar3 = uVar3 + 1) {
        uVar5 = uVar4 & 0xffff;
        uVar4 = uVar5 << 1;
        if ((uVar5 >> 8 & 0x80) != ((uint)*(byte *)(iVar6 + param_1) << (uVar3 & 0xff) & 0x80)) {
          uVar4 = uVar4 ^ 0x1021;
        }
      }
    }
  }
  return CONCAT44(param_4,uVar4) & 0xffffffff0000ffff;
}

