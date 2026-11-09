// func @ 0x4B6D70

undefined4 FUN_004b6d70(undefined4 param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte local_38;
  
  uVar5 = 0;
  if (*DAT_004b707c == '\x01') {
    do {
      if (DAT_004b77d8[8] == '\x05') goto LAB_004b6dd0;
      FUN_004b089a(100);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x2711);
    DAT_004b77d8[8] = 5;
LAB_004b6dd0:
    FUN_004b0834(0);
  }
  local_38 = *(byte *)(param_2 + 4);
  if (3 < local_38) {
    local_38 = 3;
  }
  DAT_004b77d8[0x10] = 0;
  DAT_004b77d8[0x45] = 0;
  DAT_004b77d8[0x46] = 0;
  if (local_38 == 0) {
    *DAT_004b77d8 = 0;
    *DAT_004b707c = '\0';
    for (uVar5 = 0; (uVar5 & 0xff) < 3; uVar5 = (uVar5 & 0xff) + 1) {
      *(undefined1 *)(DAT_004b7998 + (uVar5 & 0xff) + 1) = 0;
      *(undefined2 *)(DAT_004b7998 + (uVar5 & 0xff) * 2 + 10) = 0;
      *(undefined2 *)(DAT_004b7998 + (uVar5 & 0xff) * 2 + 0x10) = 0;
    }
    FUN_004b0834(0);
    FUN_004ac21a(DAT_004b77cc,param_3,4);
  }
  else {
    uVar4 = 5;
    for (uVar5 = 0; (uVar5 & 0xff) < (uint)local_38; uVar5 = uVar5 + 1) {
      uVar1 = (ushort)*(byte *)(param_2 + (uVar4 & 0xffff));
      *(undefined1 *)(DAT_004b7998 + (uVar5 & 0xff) + 1) =
           *(undefined1 *)(param_2 + (uVar4 & 0xffff) + 1);
      *(ushort *)(DAT_004b7998 + (uVar5 & 0xff) * 2 + 10) =
           CONCAT11(*(undefined1 *)(param_2 + (uVar4 & 0xffff) + 2),
                    *(undefined1 *)(param_2 + (uVar4 & 0xffff) + 3));
      *(undefined2 *)(DAT_004b7998 + (uVar5 & 0xff) * 2 + 0x10) = 0;
      FUN_004b27ac(DAT_004b7998 + (uVar5 & 0xff) * 0xf + 0x16,param_2 + (uVar4 & 0xffff) + 4,
                   uVar1 - 3);
      uVar5 = uVar5 & 0xff;
      if ((int)((uint)*(byte *)(DAT_004b7998 + uVar5 * 0xf + 0x16) << 0x18) < 0) {
        uVar3 = FUN_004b064e((uint)*(byte *)(DAT_004b7998 + uVar5 * 0xf + 0x19) * 0x100 +
                             (uint)*(byte *)(DAT_004b7998 + uVar5 * 0xf + 0x18) * 0x10000 +
                             (uint)*(byte *)(DAT_004b7998 + uVar5 * 0xf + 0x17) * 0x1000000 +
                             (uint)*(byte *)(DAT_004b7998 + uVar5 * 0xf + 0x1a));
        *(char *)(DAT_004b7998 + uVar5 * 0xf + 0x17) = (char)((uint)uVar3 >> 0x18);
        *(char *)(DAT_004b7998 + uVar5 * 0xf + 0x18) = (char)((uint)uVar3 >> 0x10);
        *(char *)(DAT_004b7998 + uVar5 * 0xf + 0x19) = (char)((uint)uVar3 >> 8);
        *(char *)(DAT_004b7998 + uVar5 * 0xf + 0x1a) = (char)uVar3;
      }
      else {
        uVar2 = FUN_004b064e(CONCAT11(*(undefined1 *)(DAT_004b7998 + uVar5 * 0xf + 0x17),
                                      *(undefined1 *)(DAT_004b7998 + uVar5 * 0xf + 0x18)));
        *(char *)(DAT_004b7998 + uVar5 * 0xf + 0x17) = (char)((ushort)uVar2 >> 8);
        *(char *)(DAT_004b7998 + uVar5 * 0xf + 0x18) = (char)uVar2;
      }
      uVar4 = uVar1 + 1 + (uVar4 & 0xffff);
    }
    DAT_004b77d8[8] = 5;
    FUN_004b0770(0,10);
    FUN_004b08e0(0,DAT_004b7cc4);
    FUN_004b0822(0);
    *DAT_004b707c = '\x01';
    FUN_004ac21a(DAT_004b77cc,param_3,4);
  }
  return 2;
}

