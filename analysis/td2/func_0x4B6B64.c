// func @ 0x4B6B64

undefined8 FUN_004b6b64(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_28;
  
  uVar5 = 0;
  if (*DAT_004b77d4 == '\x01') {
    do {
      if (DAT_004b77d8[8] == '\x05') goto LAB_004b6ba4;
      FUN_004b089a(100);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x2711);
    DAT_004b77d8[8] = 5;
LAB_004b6ba4:
    FUN_004b0834(1);
  }
  bVar1 = *param_2;
  bVar2 = param_2[3];
  local_28 = CONCAT31((int3)((uint)param_4 >> 8),bVar2);
  DAT_004b77d8[0x10] = bVar1;
  DAT_004b77d8[0x45] = 0;
  DAT_004b77d8[0x46] = 0;
  if (bVar2 == 0) {
    if (*DAT_004b77d4 == '\x01') {
      do {
        if (DAT_004b77d8[8] == '\x05') goto LAB_004b6d44;
        uVar5 = uVar5 + 1;
        FUN_004b089a(100);
      } while (uVar5 < 0x2711);
      DAT_004b77d8[8] = 5;
    }
LAB_004b6d44:
    *DAT_004b77d8 = 0;
    *DAT_004b77d4 = '\0';
    FUN_004ac21a(DAT_004b77cc,param_3,4);
  }
  else {
    FUN_004b27ac(DAT_004b77dc,param_2 + 1,bVar1);
    DAT_004b77d8[0x11] = param_2[bVar1 + 1];
    if (param_2[bVar1 + 2] == 0) {
      FUN_004ac21a(DAT_004b73d0,param_3,4);
    }
    else {
      *(uint *)(DAT_004b77d8 + 4) = (uint)param_2[bVar1 + 2] * 10;
      *DAT_004b77d8 = 1;
      if (DAT_004b77d8[0x14] == '\x01') {
        *(undefined1 *)(DAT_004b77e0 + 0xdc) = 1;
        iVar3 = FUN_004ac2c6(DAT_004b77e4,0);
        if (iVar3 == 0) {
          FUN_004ac21a(DAT_004b73d0,param_3,4);
          goto LAB_004b6d62;
        }
      }
      if (DAT_004b77d8[0x14] == '\x02') {
        *(undefined1 *)(DAT_004b77e0 + 0xdc) = 2;
        bVar1 = DAT_004b77d8[0x15];
        iVar3 = FUN_004ac2c6(DAT_004b77e4,0);
        if (iVar3 == 0) {
          FUN_004ac21a(DAT_004b73d0,param_3,4);
        }
        else {
          iVar3 = FUN_004ac2c6(DAT_004b77d8 + bVar1 + 0x17,1);
          if (iVar3 == 0) {
            FUN_004ac21a(DAT_004b73d0,param_3,4);
          }
          else {
            DAT_004b77d8[8] = 5;
            FUN_004b0770(1,10);
            uVar4 = FUN_004b08a6(1);
            *DAT_004b7990 = uVar4;
            FUN_004b08e0(1,DAT_004b7994);
            FUN_004b0822(1);
            *DAT_004b77d4 = '\x01';
            FUN_004ac21a(DAT_004b77cc,param_3,4);
          }
        }
      }
      else {
        FUN_004ac21a(DAT_004b73d0,param_3,4);
      }
    }
  }
LAB_004b6d62:
  return CONCAT44(local_28,2);
}

