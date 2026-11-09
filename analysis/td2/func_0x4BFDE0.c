// func @ 0x4BFDE0

undefined8 FUN_004bfde0(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_28 [2];
  
  FUN_004ac078();
  uVar1 = *param_2;
  FUN_004b36f0(*param_2);
  FUN_004b089a(*(undefined4 *)(DAT_004c0a78 + 4));
  uVar2 = param_2[1];
  FUN_004b36f0(param_2[1]);
  FUN_004b089a(*(undefined4 *)(DAT_004c0a78 + 4));
  if (CONCAT11(uVar1,uVar2) < 2) {
    if (*DAT_004bffa8 == '\x01') {
      FUN_004b0822(0);
    }
    FUN_004ac21a(DAT_004c0558,param_3,4);
    iVar3 = 2;
  }
  else {
    iVar3 = 2;
    uVar5 = CONCAT11(uVar1,uVar2) - 2;
    do {
      FUN_004b36f0(param_2[iVar3]);
      iVar3 = iVar3 + 1;
      FUN_004b089a(*(undefined4 *)(DAT_004c0a78 + 4));
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
    FUN_004b36f0(param_2[iVar3]);
    *param_3 = 0;
    param_3[1] = 1;
    iVar3 = FUN_004b4090(local_28,300);
    if (iVar3 == 0) {
      if (*DAT_004bffa8 == '\x01') {
        FUN_004b0822(0);
      }
      FUN_004ac21a(DAT_004c0790,param_3,4);
      iVar3 = 2;
    }
    else {
      uVar1 = (undefined1)local_28[0];
      param_3[2] = (undefined1)local_28[0];
      iVar3 = FUN_004b4090(local_28,300);
      if (iVar3 == 0) {
        if (*DAT_004bffa8 == '\x01') {
          FUN_004b0822(0);
        }
        FUN_004ac21a(DAT_004c0790,param_3,4);
        iVar3 = 2;
      }
      else {
        param_3[3] = (undefined1)local_28[0];
        iVar3 = 4;
        if (CONCAT11(uVar1,(undefined1)local_28[0]) < 2) {
          if (*DAT_004bffa8 == '\x01') {
            FUN_004b0822(0);
          }
          FUN_004ac21a(DAT_004c0790,param_3,4);
          iVar3 = 2;
        }
        else {
          for (iVar6 = CONCAT11(uVar1,(undefined1)local_28[0]) - 2; iVar6 != 0; iVar6 = iVar6 + -1)
          {
            iVar4 = FUN_004b4090(local_28,300);
            if (iVar4 == 0) {
              if (*DAT_004bffa8 == '\x01') {
                FUN_004b0822(0);
              }
              FUN_004ac21a(DAT_004c0790,param_3,4);
              iVar3 = 2;
              goto LAB_004bff82;
            }
            param_3[iVar3] = (undefined1)local_28[0];
            iVar3 = iVar3 + 1;
          }
          if (*DAT_004bffa8 == '\x01') {
            FUN_004b0822(0);
          }
        }
      }
    }
  }
LAB_004bff82:
  return CONCAT44(local_28[0],iVar3);
}

