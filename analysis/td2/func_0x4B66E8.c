// func @ 0x4B66E8

undefined8 FUN_004b66e8(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined1 *)(DAT_004b7338 + 0x104) = 0;
  if (*DAT_004b707c == '\x01') {
    do {
      if (DAT_004b7078[8] == '\x05') goto LAB_004b672e;
      uVar4 = uVar4 + 1;
      FUN_004b089a(100);
    } while (uVar4 < 0x2711);
    DAT_004b7078[8] = '\x05';
LAB_004b672e:
    FUN_004b0834(0);
  }
  else if (*DAT_004b707c == '\x03') {
    FUN_004b0834(1);
  }
  bVar1 = *param_2;
  DAT_004b7078[0x10] = bVar1;
  DAT_004b7078[0x45] = '\0';
  DAT_004b7078[0x46] = '\0';
  if (bVar1 == 0) {
    if (*DAT_004b707c == '\x01') {
      do {
        if (DAT_004b7078[8] == '\x05') goto LAB_004b69da;
        uVar4 = uVar4 + 1;
        FUN_004b089a(100);
      } while (uVar4 < 0x2711);
      DAT_004b7078[8] = '\x05';
    }
LAB_004b69da:
    *(undefined1 *)(DAT_004b6d6c + 0x44) = 0;
    *(undefined1 *)(DAT_004b75f4 + 0xab) = 0;
    *DAT_004b7078 = '\0';
    *DAT_004b707c = '\0';
    FUN_004ac21a(DAT_004b77cc,param_3,4);
  }
  else {
    FUN_004b27ac(DAT_004b73cc,param_2 + 1,bVar1);
    DAT_004b7078[0x11] = param_2[bVar1 + 1];
    if (param_2[bVar1 + 2] == 0) {
      FUN_004ac21a(DAT_004b73d0,param_3,4);
    }
    else {
      uVar4 = (uint)bVar1;
      *(uint *)(DAT_004b7078 + 4) = (uint)param_2[uVar4 + 2] * 10;
      *DAT_004b7078 = '\x04';
      if ((param_2[1] == 0x55) && (param_2[2] == 0xaa)) {
        *DAT_004b7078 = '\x01';
        if ((-1 < (int)((uint)param_2[6] << 0x18)) && (0x11 < uVar4)) {
          FUN_004ac21a(DAT_004b73d0,param_3,4);
          goto LAB_004b6b60;
        }
        if (((int)((uint)param_2[6] << 0x18) < 0) && (0x13 < bVar1)) {
          FUN_004ac21a(DAT_004b73d0,param_3,4);
          goto LAB_004b6b60;
        }
        FUN_004ac4e4();
      }
      else if ((param_2[1] == 0x55) && (param_2[2] == 0xbb)) {
        FUN_004b27ac(DAT_004b73cc,param_2 + 3,uVar4);
        *DAT_004b7078 = '\x06';
        DAT_004b7078[0x10] = DAT_004b7078[0x10] + -2;
      }
      else if ((param_2[1] == 0x55) && (param_2[2] == 0xbc)) {
        FUN_004b27ac(DAT_004b73cc,param_2 + 3,uVar4);
        *DAT_004b7078 = '\v';
        DAT_004b7078[0x10] = DAT_004b7078[0x10] + -2;
      }
      else if ((param_2[1] == 0x55) && (param_2[2] == 0xcc)) {
        FUN_004b27ac(DAT_004b73cc,param_2 + 3,uVar4);
        *DAT_004b7078 = '\a';
        DAT_004b7078[0x10] = DAT_004b7078[0x10] + -2;
      }
      else if ((param_2[1] != 0x55) || (param_2[2] != 0xee)) {
        if ((param_2[1] == 0x55) && (param_2[2] == 0xfe)) {
          *DAT_004b7078 = '\n';
          *DAT_004b73d4 = (uint)param_2[uVar4 + 2];
          if ((-1 < (int)((uint)param_2[6] << 0x18)) && (0x11 < uVar4)) {
            FUN_004ac21a(DAT_004b73d0,param_3,4);
            goto LAB_004b6b60;
          }
          if (((int)((uint)param_2[6] << 0x18) < 0) && (0x13 < uVar4)) {
            FUN_004ac21a(DAT_004b73d0,param_3,4);
            goto LAB_004b6b60;
          }
          FUN_004ac4e4();
          FUN_004b27ac(DAT_004b75e8,DAT_004b75e4,0xe0);
        }
        else if ((param_2[1] == 0x55) && (param_2[2] == 0xff)) {
          *DAT_004b7078 = '\t';
          FUN_004ac4e4();
          FUN_004b27ac(DAT_004b75f0,DAT_004b75ec,0x48);
          *(uint *)(DAT_004b75e4 + 0x50) = *(uint *)(DAT_004b75e4 + 0x50) & 0xfff0ffff | 0x10000;
        }
      }
      cVar2 = *DAT_004b7078;
      if (cVar2 == '\x01') {
        *(undefined1 *)(DAT_004b75e4 + 0xdc) = 1;
        DAT_004b7078[8] = '\x05';
        FUN_004b0770(0,10);
        FUN_004b08e0(0,DAT_004b76e8);
        FUN_004b0822(0);
        *DAT_004b707c = '\x01';
      }
      else if (cVar2 == '\x04') {
        FUN_004b0770(0,*(undefined1 *)(DAT_004b7074 + 0xc));
        DAT_004b7078[8] = '\x05';
        FUN_004b08e0(0,DAT_004b75f8);
        FUN_004b0822(0);
        *DAT_004b707c = '\x01';
      }
      else if (cVar2 == '\x06') {
        FUN_004b0770(1,*(undefined1 *)(DAT_004b7074 + 0xc));
        DAT_004b7078[8] = '\x05';
        if (*(int *)(DAT_004b7078 + 4) == 0x9ce) {
          pcVar3 = DAT_004b7078;
          pcVar3[4] = -0x60;
          pcVar3[5] = '\x0f';
          pcVar3[6] = '\0';
          pcVar3[7] = '\0';
        }
        FUN_004b08e0(1,DAT_004b76e0);
        FUN_004b0822(1);
        *DAT_004b707c = '\x03';
      }
      else if (cVar2 != '\b') {
        if (cVar2 == '\t') {
          *(undefined1 *)(DAT_004b75e4 + 0xdc) = 1;
          DAT_004b7078[8] = '\x05';
          FUN_004b0770(0,10);
          FUN_004b08e0(0,DAT_004b77d0);
          FUN_004b0822(0);
          *DAT_004b707c = '\x01';
        }
        else if (cVar2 == '\n') {
          *(undefined1 *)(DAT_004b75e8 + 0x37) = 1;
          DAT_004b7078[8] = '\x05';
          FUN_004b0770(2,10);
          FUN_004b08e0(2,DAT_004b76ec);
          FUN_004b0822(2);
          *DAT_004b75e8 = *DAT_004b73d4 - 1;
        }
        else if (cVar2 == '\v') {
          FUN_004b0770(1,*(undefined1 *)(DAT_004b7074 + 0xc));
          DAT_004b7078[8] = '\x05';
          FUN_004b08e0(1,DAT_004b76e4);
          FUN_004b0822(1);
          *DAT_004b707c = '\x03';
        }
      }
      FUN_004ac21a(DAT_004b77cc,param_3,4);
    }
  }
LAB_004b6b60:
  return CONCAT44(param_4,2);
}

