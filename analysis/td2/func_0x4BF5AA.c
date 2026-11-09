// func @ 0x4BF5AA

int FUN_004bf5aa(undefined4 param_1,byte *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint unaff_r7;
  uint uVar4;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  
  puVar1 = DAT_004bff98;
  local_30 = 0;
  local_20 = DAT_004bff98;
  local_24 = 4;
  *DAT_004bff98 = 3;
  puVar1[1] = 0;
  puVar1[2] = 9;
  puVar1[3] = 3;
  *(undefined1 *)(DAT_004bff9c + 0xaa) = 4;
  *(undefined1 *)(DAT_004bff9c + 0xa0) = 3;
  *(undefined1 *)(DAT_004bff9c + 0xa1) = 0;
  *(undefined1 *)(DAT_004bff9c + 0xa2) = 9;
  *(undefined1 *)(DAT_004bff9c + 0xa3) = 3;
  local_28 = DAT_004bffa0;
  FUN_004b0914(0);
  *(undefined4 *)(DAT_004bff9c + 0x10) = 600;
  *(undefined1 *)(DAT_004bff9c + 0xaa) = 4;
  *(undefined1 *)(DAT_004bff9c + 0xb0) = 1;
  *(undefined1 *)(DAT_004bff9c + 0xab) = 1;
  for (uVar4 = 0; uVar4 < 4; uVar4 = uVar4 + 1) {
    FUN_004acc4c();
    FUN_004b5b18(1,1);
    if ((int)((uint)*param_2 << 0x18) < 0) {
      FUN_004ad4a0(param_2[1]);
      FUN_004ac22e(0xd,1);
      FUN_004ac22e(0xd,2);
      FUN_004b5462(DAT_004bffa4);
      uVar4 = uVar4 + 1;
    }
    else if (uVar4 < 2) {
      FUN_004b0888(500);
      FUN_004ad4a0(param_2[1]);
      FUN_004acc5c();
    }
    else {
      FUN_004ad4a0(param_2[1]);
      FUN_004ac22e(0,8);
      FUN_004ac22e(0xd,1);
      FUN_004ac22e(1,2);
      FUN_004b5462(DAT_004bffa4);
    }
    FUN_004b5b18(0,3);
    unaff_r7 = FUN_004ad59a(0x19);
    if (unaff_r7 != 0) break;
  }
  if (unaff_r7 == 0) {
    FUN_004ac21a(DAT_004bfbcc,param_3,4);
    iVar2 = 2;
  }
  else {
    *DAT_004bfbc0 = unaff_r7;
    if ((0x27d8 < *DAT_004bfbc0) && (*DAT_004bfbc0 < 0x29cd)) {
      *DAT_004bfbc0 = 0x28b0;
    }
    FUN_004b4300(0,DAT_004bfbc0);
    for (uVar4 = 0; uVar4 < 2; uVar4 = uVar4 + 1) {
      iVar2 = FUN_004b4090((int)&local_30 + uVar4,5000);
      if (iVar2 == 0) {
        FUN_004ac21a(DAT_004bfbcc,param_3,4);
        return 2;
      }
    }
    FUN_004b0888(0x20);
    FUN_004b36f0(~local_30._1_1_);
    *param_3 = 0;
    param_3[1] = 0;
    iVar2 = 2;
    if (local_30._1_1_ == -0x71) {
      FUN_004b4090((int)&local_30 + 2,1000);
    }
    else {
      FUN_004b06e4();
      *(undefined4 *)(DAT_004bff9c + 4) = 0;
      *(undefined1 *)(DAT_004bff9c + 0xae) = 0;
      *(undefined1 *)(DAT_004bff88 + 8) = 2;
      if (unaff_r7 < 5000) {
        FUN_004b0770(0,1);
        *(undefined4 *)(DAT_004bff9c + 0xc) = 6;
        *(undefined4 *)(DAT_004bff9c + 8) = 0x1e;
        *(undefined4 *)(DAT_004bff9c + 0x14) = 3;
      }
      else {
        FUN_004b0770(0,1);
        *(undefined4 *)(DAT_004bff9c + 0xc) = 2;
        *(undefined4 *)(DAT_004bff9c + 8) = 0x16;
        *(undefined4 *)(DAT_004bff9c + 0x14) = 2;
      }
      *(undefined1 *)(DAT_004bff9c + 0xab) = 1;
      *DAT_004bfbc8 = 1;
      FUN_004b08e0(0,DAT_004c054c);
      FUN_004b449a(DAT_004c0550,1);
      FUN_004b449a(DAT_004c0554,0);
      FUN_004b0822(0);
      FUN_004b3e64(1);
      iVar3 = FUN_004ad2ec(&local_2c);
      if (iVar3 == 0) {
        FUN_004ac21a(DAT_004bfbcc,param_3,4);
        iVar2 = 2;
      }
      else {
        do {
          if (((*(char *)(local_28 + 2) == '\t') || (*(char *)(local_28 + 2) == -9)) ||
             (local_2c < 3)) goto LAB_004bf8c0;
          param_3[1] = param_3[1] + '\x01';
          for (uVar4 = 0; uVar4 < local_2c; uVar4 = uVar4 + 1) {
            param_3[iVar2] = *(undefined1 *)(local_28 + uVar4);
            iVar2 = iVar2 + 1;
          }
          iVar3 = FUN_004ad256(&local_24);
          if (iVar3 == 0) {
            FUN_004ac21a(DAT_004bfbcc,param_3,4);
            return 2;
          }
          iVar3 = FUN_004ad2ec(&local_2c);
        } while (iVar3 != 0);
        FUN_004ac21a(DAT_004bfbcc,param_3,4);
        iVar2 = 2;
      }
    }
  }
LAB_004bf8c0:
  return iVar2;
}

