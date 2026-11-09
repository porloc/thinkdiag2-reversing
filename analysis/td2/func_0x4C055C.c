// func @ 0x4C055C

undefined8 FUN_004c055c(undefined4 param_1,byte *param_2,undefined1 *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 local_30;
  int local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_1;
  FUN_004ac078();
  if (*param_2 == 0) {
    if (*DAT_004c0e60 == '\x01') {
      FUN_004b0822(0);
    }
    FUN_004ac21a(DAT_004c0e54,param_3,4);
    iVar1 = 2;
  }
  else {
    iVar4 = 1;
    for (bVar2 = *param_2; 1 < bVar2; bVar2 = bVar2 - 1) {
      FUN_004b36f0(param_2[iVar4]);
      iVar4 = iVar4 + 1;
      FUN_004b089a(*(undefined4 *)(DAT_004c0a78 + 4));
    }
    FUN_004b36f0(param_2[iVar4]);
    bVar2 = param_2[iVar4 + 1];
    *param_3 = 0;
    param_3[1] = bVar2;
    local_2c = 0;
    iVar4 = iVar4 + 2;
    iVar1 = 2;
    do {
      bVar3 = param_2[iVar4];
      iVar5 = iVar4 + 1;
      if (bVar3 == 0) {
        bVar3 = param_2[iVar5];
        local_2c = iVar1;
        if (bVar3 == 0) {
          bVar3 = param_2[iVar4 + 2];
          iVar5 = iVar4 + 3;
          iVar4 = iVar1 + 1;
          cVar6 = '\0';
          do {
            cVar7 = cVar6;
            iVar1 = iVar4;
            iVar4 = FUN_004b4090(&local_30,600);
            if (iVar4 == 0) {
              FUN_004ac21a(DAT_004c0790,param_3,4);
              iVar1 = 2;
              goto LAB_004c078a;
            }
            param_3[iVar1] = (char)local_30;
            iVar4 = iVar1 + 1;
            cVar6 = cVar7 + '\x01';
          } while ((uint)bVar3 != (local_30 & 0xff));
          iVar4 = FUN_004b4090(&local_30,600);
          if (iVar4 == 0) {
            FUN_004ac21a(DAT_004c0790,param_3,4);
            iVar1 = 2;
            goto LAB_004c078a;
          }
          param_3[iVar1 + 1] = (char)local_30;
          iVar1 = iVar1 + 2;
          param_3[local_2c] = cVar7 + '\x02';
        }
        else {
          iVar1 = iVar1 + 1;
          cVar6 = '\0';
          local_30._0_2_ = CONCAT11(param_2[iVar4 + 2],(char)local_30);
          iVar5 = iVar4 + 3;
          do {
            iVar4 = FUN_004b4090(&local_30,600);
            if (iVar4 == 0) {
              FUN_004ac21a(DAT_004c0790,param_3,4);
              iVar1 = 2;
              goto LAB_004c078a;
            }
            param_3[iVar1] = (char)local_30;
            iVar1 = iVar1 + 1;
            cVar6 = cVar6 + '\x01';
            bVar3 = bVar3 - 1;
          } while (bVar3 != 0);
          cVar7 = (char)local_30 - local_30._1_1_;
          cVar7 = cVar7 - cVar6;
          local_30 = CONCAT31(local_30._1_3_,cVar7);
          do {
            iVar4 = FUN_004b4090(&local_30,600);
            if (iVar4 == 0) {
              FUN_004ac21a(DAT_004c0790,param_3,4);
              iVar1 = 2;
              goto LAB_004c078a;
            }
            param_3[iVar1] = (char)local_30;
            iVar1 = iVar1 + 1;
            cVar6 = cVar6 + '\x01';
            cVar7 = cVar7 + -1;
          } while (cVar7 != '\0');
          param_3[local_2c] = cVar6;
        }
      }
      else {
        param_3[iVar1] = bVar3;
        iVar1 = iVar1 + 1;
        do {
          iVar4 = FUN_004b4090(&local_30,600);
          if (iVar4 == 0) {
            FUN_004ac21a(DAT_004c0790,param_3,4);
            iVar1 = 2;
            goto LAB_004c078a;
          }
          param_3[iVar1] = (char)local_30;
          iVar1 = iVar1 + 1;
          bVar3 = bVar3 - 1;
        } while (bVar3 != 0);
      }
      bVar2 = bVar2 - 1;
      iVar4 = iVar5;
    } while (bVar2 != 0);
    if (*DAT_004c0e60 == '\x01') {
      FUN_004b0822(0);
    }
  }
LAB_004c078a:
  return CONCAT44(local_30,iVar1);
}

