// func @ 0x4B8852

void FUN_004b8852(int param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_74;
  int local_6c;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 local_4c [16];
  undefined1 local_3c [20];
  uint local_28;
  
  local_28 = param_2;
  iVar5 = 0;
  bVar1 = false;
  local_6c = 0;
  local_74 = 0;
  local_54 = *DAT_004b9344;
  uStack_50 = DAT_004b9344[1];
  local_5c = *DAT_004b9348;
  uStack_58 = DAT_004b9348[1];
  do {
    if (bVar1) {
      local_6c = local_6c + (uint)(byte)local_4c[iVar5 + -0x10];
      iVar5 = iVar5 + 1;
    }
    if (iVar5 == 5) {
      return;
    }
    iVar6 = 0;
    iVar7 = 0;
    bVar1 = false;
    bVar2 = false;
    iVar3 = FUN_004b8490(param_1);
    FUN_004b09c0(local_3c,0x10,0);
    FUN_004b09c0(local_4c,0x10,0);
    for (iVar8 = 0; iVar8 < iVar3; iVar8 = iVar8 + 1) {
      if (((((*(char *)(param_1 + iVar8) == 'x') || (*(char *)(param_1 + iVar8) == 'X')) ||
           (('/' < *(char *)(param_1 + iVar8) && (*(char *)(param_1 + iVar8) < ':')))) ||
          (('`' < *(char *)(param_1 + iVar8) && (*(char *)(param_1 + iVar8) < 'g')))) ||
         (('@' < *(char *)(param_1 + iVar8) && (*(char *)(param_1 + iVar8) < 'G')))) {
        if (bVar2) {
          local_4c[iVar7] = *(undefined1 *)(param_1 + iVar8);
          iVar7 = iVar7 + 1;
        }
        else {
          local_3c[iVar6] = *(undefined1 *)(param_1 + iVar8);
          iVar6 = iVar6 + 1;
        }
      }
      else {
        iVar4 = FUN_004b870e(*(undefined1 *)(param_1 + iVar8),local_4c + local_6c + -8,
                             local_4c[iVar5 + -0x10]);
        if (iVar4 < 0) {
          if (bVar2) break;
          FUN_004b09c0(local_3c,0x10,0);
          iVar6 = 0;
        }
        else {
          if (bVar2) break;
          local_74 = *(undefined1 *)(param_1 + iVar8);
          FUN_004b09c0(local_4c,0x10,0);
          bVar2 = true;
          iVar7 = 0;
        }
      }
    }
    if (bVar2) {
      FUN_004b8736(param_1,local_3c,local_4c,local_28 & 0xff,local_74);
    }
    else {
      bVar1 = true;
    }
  } while( true );
}

