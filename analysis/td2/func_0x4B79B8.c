// func @ 0x4B79B8

short FUN_004b79b8(undefined4 param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  short sVar2;
  byte local_50;
  undefined1 auStack_4f [35];
  undefined4 uStack_2c;
  byte *local_28;
  
  uStack_2c = param_1;
  local_28 = param_2;
  FUN_004b2824(&local_50,0x20);
  bVar1 = *local_28;
  *param_3 = 0;
  param_3[1] = bVar1;
  if (bVar1 == 1) {
    *DAT_004b82cc = 0;
    *DAT_004b82cc = *DAT_004b82cc | 1;
    *DAT_004b82cc = *DAT_004b82cc | 2;
    *DAT_004b82cc = *DAT_004b82cc | 4;
    *DAT_004b82cc = *DAT_004b82cc | 8;
    *DAT_004b82cc = *DAT_004b82cc | 0x10;
    *DAT_004b82cc = *DAT_004b82cc | 0x20;
    *DAT_004b82cc = *DAT_004b82cc | 0x40;
    *DAT_004b82cc = *DAT_004b82cc | 0x80;
    *DAT_004b82cc = *DAT_004b82cc | 0x100;
    *DAT_004b82cc = *DAT_004b82cc | 0x200;
    *DAT_004b82cc = *DAT_004b82cc | 0x400;
    *DAT_004b82cc = *DAT_004b82cc | 0x800;
    *DAT_004b82cc = *DAT_004b82cc | 0x1000;
    *DAT_004b82cc = *DAT_004b82cc & 0xffffdfff;
    *DAT_004b82cc = *DAT_004b82cc & 0xffffbfff;
    *DAT_004b82cc = *DAT_004b82cc | 0x8000;
    *DAT_004b82cc = *DAT_004b82cc | 0x10000;
    *DAT_004b82cc = *DAT_004b82cc | 0x20000;
    *DAT_004b82cc = *DAT_004b82cc | 0x40000;
    *DAT_004b82cc = *DAT_004b82cc | 0x80000;
    param_3[2] = (char)(*DAT_004b82cc >> 0x18);
    param_3[3] = (char)(*DAT_004b82cc >> 0x10);
    param_3[4] = (char)(*DAT_004b82cc >> 8);
    param_3[5] = (char)*DAT_004b82cc;
    sVar2 = 6;
  }
  else if (bVar1 == 2) {
    FUN_004bb0ea(1,&local_50,10);
    param_3[2] = 0x81;
    if ((*DAT_004b82d0 & 0x1f) == 0) {
      param_3[3] = 0;
      param_3[4] = 0;
    }
    else if ((*DAT_004b82d0 & 0x1f) == 1) {
      param_3[3] = 1;
      FUN_004b51f6();
      param_3[4] = 2;
    }
    sVar2 = 5;
  }
  else if (bVar1 == 3) {
    param_3[2] = 0x56;
    FUN_004b0b94(0,&local_50);
    FUN_004b27ac(param_3 + 3,auStack_4f,local_50 - 1);
    sVar2 = local_50 + 2;
  }
  else if (bVar1 == 4) {
    param_3[2] = (byte)((uint)*DAT_004b82d4 >> 0x1c) & 1;
    sVar2 = 3;
  }
  else if (bVar1 == 5) {
    param_3[2] = 0;
    param_3[3] = 0xff;
    sVar2 = 4;
  }
  else if (bVar1 == 6) {
    *(undefined1 *)(DAT_004b8174 + 4) = 1;
    *DAT_004b82d8 = '\0';
    FUN_004b580e(0,6,0xe);
    sVar2 = FUN_004b11b4((int)*DAT_004b82d8,DAT_004b82dc,param_3 + 2);
    FUN_004b5456();
    sVar2 = sVar2 + 2;
  }
  else if (bVar1 < 0x11) {
    *param_3 = 0xff;
    param_3[1] = 2;
    sVar2 = 2;
  }
  else {
    if (bVar1 == 0x11) {
      FUN_004b580e(1,1,1);
      sVar2 = FUN_004b2418(1,param_3 + 2);
    }
    else {
      FUN_004b580e(0,bVar1 >> 4,bVar1 & 0xf);
      sVar2 = FUN_004b2418(0,param_3 + 2);
    }
    FUN_004b5456();
    sVar2 = sVar2 + 2;
  }
  return sVar2;
}

