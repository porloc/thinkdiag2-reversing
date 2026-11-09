// func @ 0x4BFBD0

undefined8 FUN_004bfbd0(undefined4 param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_30 [2];
  undefined4 uStack_28;
  
  bVar2 = false;
  uStack_28 = param_1;
  FUN_004ac078();
  if (*param_2 == 0) {
    if (*DAT_004bffa8 == '\x01') {
      FUN_004b0822(0);
    }
    FUN_004ac21a(DAT_004c0558,param_3,4);
    iVar3 = 2;
  }
  else {
    iVar3 = 1;
    for (uVar6 = (uint)*param_2; 1 < uVar6; uVar6 = uVar6 - 1) {
      FUN_004b36f0(param_2[iVar3]);
      iVar3 = iVar3 + 1;
      FUN_004b089a(*(undefined4 *)(DAT_004bfdd0 + 4));
    }
    FUN_004b36f0(param_2[iVar3]);
    bVar1 = param_2[iVar3 + 1];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = bVar1;
    iVar5 = 3;
    for (uVar6 = (uint)bVar1; uVar6 != 0; uVar6 = uVar6 - 1) {
      iVar4 = FUN_004b4090(local_30,300);
      if (iVar4 == 0) {
        if (*DAT_004bffa8 == '\x01') {
          FUN_004b0822(0);
        }
        FUN_004ac21a(DAT_004c0790,param_3,4);
        iVar3 = 2;
        goto LAB_004bfdcc;
      }
      param_3[iVar5] = (undefined1)local_30[0];
      iVar5 = iVar5 + 1;
    }
    param_3[1] = param_3[1] + '\x01';
    iVar4 = iVar3 + 3;
    uVar6 = (uint)param_2[iVar3 + 2];
    if (param_2[iVar3 + 2] == 0) {
      if (*DAT_004bffa8 == '\x01') {
        FUN_004b0822(0);
      }
      FUN_004ac21a(DAT_004c0558,param_3,4);
      iVar3 = 2;
    }
    else {
      for (; 1 < uVar6; uVar6 = uVar6 - 1) {
        FUN_004b36f0(param_2[iVar4]);
        iVar4 = iVar4 + 1;
        FUN_004b089a(*(undefined4 *)(DAT_004bfdd0 + 4));
      }
      FUN_004b36f0(param_2[iVar4]);
      bVar1 = param_2[iVar4 + 1];
      param_3[iVar5] = bVar1;
      uVar6 = (uint)bVar1;
      while( true ) {
        iVar5 = iVar5 + 1;
        if (uVar6 == 0) break;
        iVar3 = FUN_004b4090(local_30,500);
        if (iVar3 == 0) {
          if (*DAT_004bffa8 == '\x01') {
            FUN_004b0822(0);
          }
          FUN_004ac21a(DAT_004c0790,param_3,4);
          iVar3 = 2;
          goto LAB_004bfdcc;
        }
        param_3[iVar5] = (undefined1)local_30[0];
        uVar6 = uVar6 - 1;
      }
      param_3[1] = param_3[1] + '\x01';
      do {
        param_3[1] = param_3[1] + '\x01';
        uVar6 = (uint)bVar1;
        iVar3 = iVar5;
        while( true ) {
          iVar3 = iVar3 + 1;
          if (uVar6 == 0) break;
          iVar4 = FUN_004b4090(local_30,500);
          if (iVar4 == 0) {
            bVar2 = true;
            break;
          }
          param_3[iVar3] = (undefined1)local_30[0];
          uVar6 = uVar6 - 1;
        }
        param_3[iVar5] = (bVar1 - (char)(uVar6 - 1)) + -1;
        iVar5 = iVar3;
      } while (!bVar2);
      if (*DAT_004bffa8 == '\x01') {
        FUN_004b0822(0);
      }
    }
  }
LAB_004bfdcc:
  return CONCAT44(local_30[0],iVar3);
}

