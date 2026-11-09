// func @ 0x4BEF92

uint FUN_004bef92(undefined4 param_1,char *param_2,undefined1 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  char local_57;
  char local_56;
  char local_55;
  char *local_54;
  char local_50 [36];
  undefined4 uStack_2c;
  undefined1 *local_28;
  
  local_57 = '\0';
  bVar5 = 0;
  local_55 = 0;
  local_56 = 0;
  uVar7 = 0;
  uStack_2c = param_1;
  local_28 = param_3;
  FUN_004b2824(local_50,0x20,param_3,param_4,0);
  FUN_004ac078();
  if (*param_2 == '\0') {
    *DAT_004bfbc4 = 1;
  }
  local_55 = param_2[1];
  local_56 = param_2[2];
  bVar9 = param_2[3];
  uVar8 = 4;
  if (bVar9 == 0) {
    if (*DAT_004bfbc8 == '\x01') {
      FUN_004b0822(0);
    }
    FUN_004ac21a(DAT_004bfbcc,local_28,4);
    uVar1 = 2;
  }
  else {
    *local_28 = 0;
    local_28[1] = bVar9;
    uVar1 = 2;
    do {
      uVar8 = uVar8 & 0xff;
      bVar6 = param_2[uVar8];
      if (bVar6 == 0) {
        if (*DAT_004bfbc8 == '\x01') {
          FUN_004b0822(0);
        }
        FUN_004ac21a(DAT_004bfbcc,local_28,4);
        return 2;
      }
      iVar2 = FUN_004beef4(500);
      uVar4 = (ushort)bVar6;
      if (iVar2 == 0) {
        FUN_004ac21a(DAT_004bfbcc,local_28,4);
        return 2;
      }
      while( true ) {
        if (uVar4 < 2) break;
        uVar8 = uVar8 + 1 & 0xff;
        FUN_004b36f0(param_2[uVar8]);
        FUN_004b089a(0x80);
        uVar4 = uVar4 - 1;
      }
      uVar8 = uVar8 + 1 & 0xff;
      FUN_004b36f0(param_2[uVar8]);
      uVar8 = uVar8 + 1;
      for (sVar3 = 0x14; bVar6 = (byte)uVar7, sVar3 != 0; sVar3 = sVar3 + -1) {
        uVar7 = 0;
        do {
          if (uVar7 == 0) {
            iVar2 = FUN_004b4090(&local_57,500);
            if (iVar2 == 0) {
              if (*DAT_004bfbc8 == '\x01') {
                FUN_004b0822(0);
              }
              FUN_004ac21a(DAT_004bfbcc,local_28,4);
              return 2;
            }
          }
          else {
            iVar2 = FUN_004b4090(&local_57,2);
            if (iVar2 == 0) break;
          }
          local_50[uVar7] = local_57;
          uVar7 = uVar7 + 1 & 0xff;
        } while (uVar7 < 0x20);
        bVar6 = (byte)uVar7;
        if ((local_50[0] == local_55) && (local_50[1] == local_56)) {
          local_28[uVar1 & 0xff] = bVar6;
          local_54 = local_50;
          uVar1 = (uVar1 & 0xff) + 1 & 0xff;
          FUN_004b27ac(local_28 + uVar1,local_54,uVar7);
          uVar1 = uVar7 + uVar1;
          break;
        }
      }
      uVar7 = (uint)bVar6;
      if ((1 < uVar7) && (sVar3 == 0)) {
        if (*DAT_004bfbc8 == '\x01') {
          FUN_004b0822(0);
        }
        FUN_004ac21a(DAT_004bfbcc,local_28,4);
        return 2;
      }
      FUN_004b0888(*DAT_004bfdd0);
      bVar5 = bVar5 + 1;
    } while (bVar5 < bVar9);
    if (*DAT_004bfbc8 == '\x01') {
      FUN_004b0822(0);
    }
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}

