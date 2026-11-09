// func @ 0x4BF8C6

undefined8 FUN_004bf8c6(undefined4 param_1,char *param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint local_28;
  
  *param_3 = 0;
  local_28 = param_4;
  FUN_004ac078();
  cVar4 = *param_2;
  uVar3 = 1;
  if (cVar4 == '\0') {
    if (*DAT_004bffa8 == '\x01') {
      FUN_004b0822(0);
    }
    FUN_004ac21a(DAT_004c0558,param_3,4);
    uVar1 = 2;
  }
  else {
    param_3[1] = cVar4;
    uVar1 = 2;
    while( true ) {
      if (cVar4 == '\0') break;
      bVar5 = param_2[uVar3 & 0xff];
      if (bVar5 == 0) {
        if (*DAT_004bffa8 == '\x01') {
          FUN_004b0822(0);
        }
        FUN_004ac21a(DAT_004c0558,param_3,4);
        uVar1 = 2;
        goto LAB_004bfa64;
      }
      uVar3 = (uVar3 & 0xff) + 1 & 0xff;
      bVar6 = param_2[uVar3];
      if (bVar6 == 0) {
        if (*DAT_004bffa8 == '\x01') {
          FUN_004b0822(0);
        }
        FUN_004ac21a(DAT_004c0558,param_3,4);
        uVar1 = 2;
        goto LAB_004bfa64;
      }
      uVar1 = uVar1 & 0xff;
      param_3[uVar1] = bVar6 - 1;
      while( true ) {
        if (bVar5 < 2) break;
        uVar3 = uVar3 + 1 & 0xff;
        FUN_004b36f0(param_2[uVar3]);
        iVar2 = FUN_004b4090(&local_28,500);
        if (iVar2 == 0) {
          FUN_004ac21a(DAT_004bfbcc,param_3,4);
          uVar1 = 2;
          goto LAB_004bfa64;
        }
        FUN_004b089a(DAT_004bfdd0[1]);
        bVar5 = bVar5 - 1;
      }
      uVar3 = uVar3 + 1 & 0xff;
      FUN_004b36f0(param_2[uVar3]);
      uVar3 = uVar3 + 1;
      while( true ) {
        uVar1 = uVar1 + 1;
        if (bVar6 < 2) break;
        iVar2 = FUN_004b4090(&local_28,0x5dc);
        if (iVar2 == 0) {
          FUN_004ac21a(DAT_004bfbcc,param_3,4);
          uVar1 = 2;
          goto LAB_004bfa64;
        }
        FUN_004b36f0(local_28 & 0xff);
        uVar1 = uVar1 & 0xff;
        param_3[uVar1] = (undefined1)local_28;
        bVar6 = bVar6 - 1;
      }
      iVar2 = FUN_004b4090(&local_28,0x5dc);
      if (iVar2 == 0) {
        FUN_004ac21a(DAT_004bfbcc,param_3,4);
        uVar1 = 2;
        goto LAB_004bfa64;
      }
      FUN_004b0888(*DAT_004bfdd0);
      cVar4 = cVar4 + -1;
    }
    if (*DAT_004bffa8 == '\x01') {
      FUN_004b0822(0);
    }
    uVar1 = uVar1 & 0xff;
  }
LAB_004bfa64:
  return CONCAT44(local_28,uVar1);
}

