// func @ 0x4BF1D8

ushort FUN_004bf1d8(int param_1,byte *param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined4 *local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte local_38 [16];
  int local_28;
  
  local_5f = 0;
  local_5a = *DAT_004bfdd4;
  local_28 = param_1;
  FUN_004b2824(local_38,0x10);
  puVar3 = DAT_004bfddc;
  cVar8 = '\x03';
  local_60 = 0;
  local_44 = *DAT_004bfdd8;
  uStack_40 = DAT_004bfdd8[1];
  uStack_3c = DAT_004bfdd8[2];
  local_50 = *DAT_004bfddc;
  uStack_4c = DAT_004bfddc[1];
  uStack_48 = DAT_004bfddc[2];
  bVar6 = 0;
  local_5d = 0;
  local_5c = 0;
  local_5f = *param_2;
  *param_3 = 0;
  param_3[1] = 0;
  uVar5 = 2;
  bVar4 = 2;
  local_5e = param_2[1];
  uVar7 = 2;
  if (local_5f < 3) {
    for (uVar9 = 0; puVar3 = (undefined4 *)(uint)local_5e, (undefined4 *)(uVar9 & 0xff) < puVar3;
        uVar9 = (uVar9 & 0xff) + 1) {
      local_38[uVar9 & 0xff] = param_2[uVar7 & 0xff];
      uVar7 = (uVar7 & 0xff) + 1;
    }
  }
  if (local_5f == 0) {
    do {
      if (cVar8 == '\0') {
        FUN_004b0770(0,5);
        *(undefined1 *)(DAT_004bff88 + 8) = 5;
        *(undefined4 *)(DAT_004bff88 + 4) = 2;
        *(undefined1 *)(DAT_004bff88 + 0x11) = 3;
        *(undefined1 *)(DAT_004bff88 + 0x10) = 9;
        *DAT_004bfbc8 = '\x01';
        local_54 = (uint)*(byte *)(DAT_004bff88 + 0x10);
        local_58 = &local_50;
        FUN_004b27ac(DAT_004bff8c,local_58,local_54);
        FUN_004b08e0(0,DAT_004bff90);
        *DAT_004bfbc8 = '\x01';
        for (uVar5 = 0; (uVar5 & 0xff) < 9; uVar5 = (uVar5 & 0xff) + 1) {
          FUN_004b36f0(local_38[(uVar5 & 0xff) - 0xc]);
        }
        *(undefined4 *)(DAT_004bff88 + 0xc) = 0;
        FUN_004b0822(0);
        FUN_004ac21a(DAT_004bff94,param_3,4);
        return 2;
      }
      cVar8 = cVar8 + -1;
      for (bVar4 = 0; bVar4 < 2; bVar4 = bVar4 + 1) {
        iVar2 = FUN_004b4090(&local_60,0x44c);
        if (iVar2 == 0) {
          FUN_004ac21a(DAT_004bfbcc,param_3,4);
          return 2;
        }
        if (local_38[bVar4 - 0x22] != local_60) {
          if (cVar8 == '\0') {
            FUN_004ac21a(DAT_004bfbcc,param_3,4);
            return 2;
          }
          break;
        }
        if (bVar4 == 1) {
          cVar8 = '\0';
          break;
        }
      }
    } while( true );
  }
  if (local_5f == 2) {
    FUN_004b0834(0,puVar3);
    *DAT_004bfbc8 = '\0';
    *(undefined1 *)(DAT_004bff88 + 0x45) = 0;
    FUN_004ac21a(DAT_004bff94,param_3,4);
    return 2;
  }
  if (local_5f < 2) {
    if (*DAT_004bfbc8 == '\x01') {
      do {
      } while (*(int *)(DAT_004bff88 + 0xc) != 1);
      FUN_004b0834(0,puVar3);
      *(undefined4 *)(DAT_004bff88 + 0xc) = 0;
    }
    for (bVar4 = 0; bVar4 < 3; bVar4 = bVar4 + 1) {
      iVar2 = FUN_004b4090(&local_60,100);
      if (iVar2 == 0) {
        FUN_004ac21a(DAT_004bfbcc,param_3,4);
        return 2;
      }
    }
    for (uVar7 = 0; (uVar7 & 0xff) < 9; uVar7 = (uVar7 & 0xff) + 1) {
      FUN_004b36f0(local_38[uVar7 & 0xff]);
    }
    while( true ) {
      bVar4 = (byte)uVar5;
      iVar2 = FUN_004b4090(&local_60,1000);
      if (iVar2 == 0) break;
      if (local_60 == 0) {
        iVar2 = FUN_004b4090(&local_60,1000);
        if (iVar2 == 0) break;
        if (local_60 == 0x55) {
          iVar2 = FUN_004b4090(&local_60,1000);
          if (iVar2 == 0) break;
          if (local_60 == 0x2e) {
            if (param_3[1] != '\0') break;
            if (2 < bVar6) {
              FUN_004ac21a(DAT_004bfbcc,param_3,4);
              return 2;
            }
            for (uVar7 = 0; (uVar7 & 0xff) < 9; uVar7 = (uVar7 & 0xff) + 1) {
              FUN_004b36f0(local_38[uVar7 & 0xff]);
            }
            bVar6 = bVar6 + 1;
          }
          else {
            if (local_60 == 0x6f) {
              param_3[1] = param_3[1] + '\x01';
              param_3[uVar5 & 0xff] = 9;
              uVar5 = (uVar5 & 0xff) + 1;
            }
            if ((local_60 == 0x25) && (2 < local_5d)) {
              FUN_004ac21a(DAT_004bfbcc,param_3,4);
              return 2;
            }
          }
        }
        else {
          param_3[uVar5 & 0xff] = 0;
          uVar5 = (uVar5 & 0xff) + 1 & 0xff;
          param_3[uVar5] = local_60;
          uVar5 = uVar5 + 1;
        }
      }
      else {
        param_3[uVar5 & 0xff] = local_60;
        uVar5 = (uVar5 & 0xff) + 1;
      }
    }
    for (uVar5 = 0; (uVar5 & 0xff) < 9; uVar5 = (uVar5 & 0xff) + 1) {
      FUN_004b36f0(local_38[(uVar5 & 0xff) - 0x18]);
    }
    *(undefined1 *)(DAT_004bff88 + 8) = 5;
    FUN_004b0822(0);
  }
  else {
    if (local_5f == 4) {
      uVar1 = FUN_004ca356(param_2 + 2,local_28 + -2,param_3);
      return uVar1;
    }
    if (local_5f < 4) {
      FUN_004ac21a(DAT_004bfbcc,param_3,4);
      return 2;
    }
  }
  return (ushort)bVar4;
}

