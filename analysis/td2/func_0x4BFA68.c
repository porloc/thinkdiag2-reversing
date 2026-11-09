// func @ 0x4BFA68

undefined8 FUN_004bfa68(undefined4 param_1,byte *param_2,undefined1 *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint local_28;
  
  cVar4 = '\0';
  local_28 = param_4;
  FUN_004ac078();
  if (*param_2 == 0) {
    if (*DAT_004bffa8 == '\x01') {
      FUN_004b0822(0);
    }
    FUN_004ac21a(DAT_004c0558,param_3,4);
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
    bVar5 = *param_2;
    while (1 < bVar5) {
      FUN_004b36f0(param_2[uVar2 & 0xff]);
      uVar2 = (uVar2 & 0xff) + 1;
      iVar3 = FUN_004b4090(&local_28,1000);
      if (iVar3 == 0) {
        if (*DAT_004bffa8 == '\x01') {
          FUN_004b0822(0);
        }
        FUN_004ac21a(DAT_004bfbcc,param_3,4);
        uVar2 = 2;
        goto LAB_004bfbb2;
      }
      FUN_004b089a(*(undefined4 *)(DAT_004bfdd0 + 4));
      bVar5 = bVar5 - 1;
    }
    FUN_004b36f0(param_2[uVar2 & 0xff]);
    *param_3 = 0;
    param_3[1] = 1;
    uVar2 = 3;
    do {
      iVar3 = FUN_004b4090(&local_28,0x9c4);
      if (iVar3 == 0) {
        if (*DAT_004bffa8 == '\x01') {
          FUN_004b0822(0);
        }
        FUN_004ac21a(DAT_004bfbcc,param_3,4);
        uVar2 = 2;
        goto LAB_004bfbb2;
      }
      FUN_004b36f0(local_28 & 0xff);
      cVar1 = (char)local_28;
      param_3[uVar2 & 0xff] = (char)local_28;
      uVar2 = (uVar2 & 0xff) + 1;
      cVar4 = cVar4 + '\x01';
      iVar3 = FUN_004b4090(&local_28,1000);
      if (iVar3 == 0) {
        if (*DAT_004bffa8 == '\x01') {
          FUN_004b0822(0);
        }
        FUN_004ac21a(DAT_004bfbcc,param_3,4);
        uVar2 = 2;
        goto LAB_004bfbb2;
      }
    } while (cVar1 != '\x04');
    param_3[2] = cVar4;
    if (*DAT_004bffa8 == '\x01') {
      FUN_004b0822(0);
    }
    uVar2 = uVar2 & 0xff;
  }
LAB_004bfbb2:
  return CONCAT44(local_28,uVar2);
}

