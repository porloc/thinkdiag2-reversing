// func @ 0x4BB0EA

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ushort FUN_004bb0ea(byte param_1,undefined4 param_2,ushort param_3)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 auStack_17e [2];
  undefined1 auStack_17c [4];
  undefined1 uStack_178;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 auStack_175 [4];
  undefined1 local_171;
  undefined1 local_170;
  undefined1 auStack_16f [10];
  undefined1 local_165;
  undefined1 local_164;
  undefined1 auStack_163 [3];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 auStack_154 [3];
  undefined1 auStack_151 [245];
  undefined1 auStack_5c [52];
  undefined4 local_28;
  
  local_160 = *DAT_004bb454;
  uStack_15c = DAT_004bb454[1];
  uStack_158 = DAT_004bb454[2];
  local_28 = param_2;
  FUN_004b2824(&local_180,0x20);
  FUN_004b2824(auStack_154,300);
  if (param_1 == 0) {
    cVar1 = FUN_004c9c98(2,0,0,0,&local_180,0x20);
    if (cVar1 == '\0') {
      uVar3 = CONCAT11(local_180,local_17f);
      if (uVar3 == (ushort)local_160) {
        if (param_3 < uVar3) {
          uVar3 = param_3;
        }
        FUN_004b27ac(local_28,auStack_17e,uVar3);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else if (param_1 == 2) {
    cVar1 = FUN_004c9c98(2,0,0,0,&local_180,0x20);
    if (cVar1 == '\0') {
      uVar3 = CONCAT11(local_165,local_164);
      if (uVar3 == (ushort)uStack_15c) {
        if (param_3 < uVar3) {
          uVar3 = param_3;
        }
        FUN_004b27ac(auStack_154,auStack_163,3);
        cVar1 = FUN_004c9c98(2,1,0,0,&local_180,0x20);
        if (cVar1 == '\0') {
          FUN_004b27ac(auStack_151,&local_180,6);
          FUN_004b27ac(local_28,auStack_154,uVar3);
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else if (param_1 < 2) {
    cVar1 = FUN_004c9c98(2,0,0,0,&local_180,0x20);
    if (cVar1 == '\0') {
      uVar3 = CONCAT11(local_171,local_170);
      if (uVar3 == *(ushort *)(auStack_163 + (char)param_1 * 2 + 3)) {
        if (param_3 < uVar3) {
          uVar3 = param_3;
        }
        FUN_004b27ac(local_28,auStack_16f,uVar3);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else if (param_1 == 4) {
    cVar1 = FUN_004c9c98(2,9,0,0,&local_180,0x20);
    if (cVar1 == '\0') {
      uVar3 = CONCAT11(local_177,local_176);
      if (uVar3 == (ushort)uStack_158) {
        if (param_3 < uVar3) {
          uVar3 = param_3;
        }
        FUN_004b27ac(local_28,auStack_175,uVar3);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else if (param_1 < 4) {
    cVar1 = FUN_004c9c98(2,1,0,0,&local_180,0x20);
    if (cVar1 == '\0') {
      uVar3 = CONCAT11(auStack_17c[2],auStack_17c[3]);
      if (uVar3 == *(ushort *)(auStack_163 + (char)param_1 * 2 + 3)) {
        if (param_3 < uVar3) {
          uVar3 = param_3;
        }
        FUN_004b27ac(auStack_154,&uStack_178,0x18);
        for (uVar2 = 2; (uVar2 & 0xff) < 9; uVar2 = (uVar2 & 0xff) + 1) {
          cVar1 = FUN_004c9c98(2,uVar2 & 0xff,0,0,&local_180,0x20);
          if (cVar1 != '\0') {
            return 0;
          }
          FUN_004b27ac(auStack_17c + (uVar2 & 0xff) * 0x20,&local_180,0x20);
        }
        cVar1 = FUN_004c9c98(2,9,0,0,&local_180,0x20);
        if (cVar1 == '\0') {
          FUN_004b27ac(auStack_5c,&local_180,9);
          FUN_004b27ac(local_28,auStack_154,uVar3);
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

