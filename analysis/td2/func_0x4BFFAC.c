// func @ 0x4BFFAC

undefined8 FUN_004bffac(undefined4 param_1,char *param_2,undefined1 *param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  local_2c = 0;
  local_30 = CONCAT13((char)((uint)param_2 >> 0x18),CONCAT12(param_2[2],(short)param_2)) &
             0xffffff00;
  local_28 = param_4;
  if (*param_2 == '\x01') {
    if (param_2[3] == '\0') {
      FUN_004b0888(500);
      FUN_004b5b18(1,1);
      FUN_004ad3a8(param_2[1]);
      FUN_004acc5c();
      if ((int)((local_30 >> 0x10) << 0x18) < 0) {
        FUN_004acc4c();
      }
      FUN_004b4300(0,DAT_004c0bd8);
      iVar6 = FUN_004b4090(&local_30,0x9f6);
      if ((iVar6 == 0) || ((byte)local_30 != 'U')) {
        FUN_004b0888(4000);
        FUN_004b5b18(1,1);
        FUN_004ad3a8(param_2[1]);
        FUN_004b4300(0,DAT_004c0bd8);
        iVar6 = FUN_004b4090(&local_30,0x9f6);
        if ((iVar6 == 0) || ((byte)local_30 != 'U')) {
          FUN_004ac21a(DAT_004c0790,param_3,4);
          iVar6 = 2;
          goto LAB_004c0548;
        }
      }
    }
    else {
      if (param_2[3] != -1) {
        FUN_004ac21a(DAT_004c0e54,param_3,4);
        iVar6 = 2;
        goto LAB_004c0548;
      }
      FUN_004b0888(500);
      FUN_004b5b18(1,1);
      FUN_004ad3a8(param_2[1]);
      FUN_004acc5c();
      if ((int)((local_30 >> 0x10) << 0x18) < 0) {
        FUN_004acc4c();
      }
      *DAT_004c0bd8 = 0;
      FUN_004b5b18(0,3);
      iVar6 = FUN_004ad59a(0x28);
      *DAT_004c0bd8 = iVar6;
      if (*DAT_004c0bd8 == 0) {
        FUN_004b0888(4000);
        FUN_004b5b18(1,1);
        FUN_004b5b40(1,500);
        FUN_004ad3a8(param_2[1]);
        FUN_004acc5c();
        FUN_004b5b18(0,3);
        iVar6 = FUN_004ad59a(0x28);
        *DAT_004c0bd8 = iVar6;
        if (*DAT_004c0bd8 == 0) {
          FUN_004b4300(0,DAT_004c0bd8);
          FUN_004ac21a(DAT_004c0790,param_3,4);
          iVar6 = 2;
          goto LAB_004c0548;
        }
      }
      FUN_004b4300(0,DAT_004c0bd8);
    }
    local_30._0_2_ = (ushort)(byte)local_30;
    iVar6 = FUN_004b4090((int)&local_30 + 1,1000);
    if (iVar6 == 0) {
      FUN_004ac21a(DAT_004c0790,param_3,4);
      iVar6 = 2;
    }
    else {
      iVar6 = FUN_004b4090((int)&local_30 + 1,2000);
      if (iVar6 == 0) {
        FUN_004ac21a(DAT_004c0790,param_3,4);
        iVar6 = 2;
      }
      else {
        FUN_004b5b40(1,(uint)(byte)param_2[5] * 1000);
        if (param_2[6] == '\0') {
          if (param_2[7] == '\0') {
            FUN_004ac21a(DAT_004c0e58,param_3,4);
            FUN_004acc5c();
            iVar6 = 2;
            goto LAB_004c0548;
          }
        }
        else {
          if (param_2[6] != -1) {
            FUN_004ac21a(DAT_004c0e54,param_3,4);
            iVar6 = 2;
            goto LAB_004c0548;
          }
          cVar3 = -1 - local_30._1_1_;
          local_30._0_2_ = CONCAT11(cVar3,(byte)local_30);
          FUN_004b36f0(cVar3);
          if (param_2[7] == '\0') {
            iVar6 = FUN_004b4090((int)&local_30 + 1,300);
            if (iVar6 == 0) {
              FUN_004ac21a(DAT_004c0790,param_3,4);
              iVar6 = 2;
            }
            else {
              FUN_004ac21a(DAT_004c0e58,param_3,4);
              FUN_004acc5c();
              iVar6 = 2;
            }
            goto LAB_004c0548;
          }
        }
        bVar2 = param_2[7];
        local_28 = (uint)bVar2;
        *param_3 = 0;
        param_3[1] = bVar2;
        iVar6 = 2;
        iVar7 = 8;
        for (uVar8 = 0; uVar8 < local_28; uVar8 = uVar8 + 1) {
          pbVar1 = (byte *)(param_2 + iVar7);
          uVar4 = (uint)*pbVar1;
          iVar7 = iVar7 + 1;
          if (uVar4 == 0) {
            FUN_004ac21a(DAT_004c0e54,param_3,4);
            iVar6 = 2;
            break;
          }
          param_3[iVar6] = *pbVar1;
          iVar5 = FUN_004b4090((int)&local_30 + 1,1000);
          if (iVar5 == 0) {
            FUN_004ac21a(DAT_004c0790,param_3,4);
            iVar6 = 2;
            break;
          }
          param_3[iVar6 + 1] = local_30._1_1_;
          iVar6 = iVar6 + 2;
          while ((uVar4 = uVar4 - 1, uVar4 != 0 &&
                 (iVar5 = FUN_004b4090((int)&local_30 + 1,100), iVar5 != 0))) {
            param_3[iVar6] = local_30._1_1_;
            iVar6 = iVar6 + 1;
          }
        }
      }
    }
    goto LAB_004c0548;
  }
  if (*param_2 != '\x02') {
    FUN_004ac21a(DAT_004c0e54,param_3,4);
    iVar6 = 2;
    goto LAB_004c0548;
  }
  if ((int)((uint)(byte)param_2[3] << 0x18) < 0) {
    uVar8 = DAT_004c0e5c / (0x10000 - CONCAT11(param_2[3],param_2[4]));
    FUN_004b5b18(1,1);
    FUN_004ad674(param_2[1],uVar8);
    FUN_004b4300(0,DAT_004c0bd8);
    iVar6 = FUN_004b4090(&local_30,0x9f6);
    if ((iVar6 == 0) || ((byte)local_30 != 'U')) {
      FUN_004b0888(4000);
      FUN_004b5b18(1,1);
      FUN_004ad674(param_2[1],uVar8);
      FUN_004b4300(0,DAT_004c0bd8);
      iVar6 = FUN_004b4090(&local_30,0x9f6);
      if ((iVar6 == 0) || ((byte)local_30 != 'U')) {
        FUN_004ac21a(DAT_004c0790,param_3,4);
        iVar6 = 2;
        goto LAB_004c0548;
      }
    }
  }
  else {
    FUN_004b5b18(1,1);
    FUN_004ad674(param_2[1],200);
    FUN_004b4300(0,DAT_004c0bd8);
    iVar6 = FUN_004b4090(&local_30,0x9f6);
    if ((iVar6 == 0) || ((byte)local_30 != 'U')) {
      FUN_004b0888(4000);
      FUN_004b5b18(1,1);
      FUN_004ad674(param_2[1],200);
      FUN_004acc5c();
      if ((int)((local_30 >> 0x10) << 0x18) < 0) {
        FUN_004acc4c();
      }
      FUN_004b4300(0,DAT_004c0bd8);
      iVar6 = FUN_004b4090(&local_30,0x9f6);
      if ((iVar6 == 0) || ((byte)local_30 != 'U')) {
        FUN_004ac21a(DAT_004c0790,param_3,4);
        iVar6 = 2;
        goto LAB_004c0548;
      }
    }
  }
  for (uVar8 = 0; uVar8 < 2; uVar8 = uVar8 + 1) {
    iVar6 = FUN_004b4090((int)&local_2c + uVar8,5000);
    if (iVar6 == 0) {
      FUN_004ac21a(DAT_004c0790,param_3,4);
      iVar6 = 2;
      goto LAB_004c0548;
    }
  }
  if (param_2[7] == '\0') {
    if (param_2[8] == '\0') {
      FUN_004ac21a(DAT_004c0790,param_3,4);
      iVar6 = 2;
      goto LAB_004c0548;
    }
  }
  else {
    if (param_2[7] != -1) {
      FUN_004ac21a(DAT_004c0e54,param_3,4);
      iVar6 = 2;
      goto LAB_004c0548;
    }
    FUN_004b0888(0x22);
    FUN_004b36f0(~local_2c._1_1_);
    if (param_2[8] == '\0') {
      iVar6 = FUN_004b4090(&local_30,5000);
      if (iVar6 == 0) {
        FUN_004ac21a(DAT_004c0790,param_3,4);
        iVar6 = 2;
      }
      else {
        FUN_004ac21a(DAT_004c0e58,param_3,4);
        iVar6 = 2;
      }
      goto LAB_004c0548;
    }
  }
  *param_3 = 0;
  param_3[1] = param_2[8];
  iVar6 = 2;
  iVar7 = 9;
  for (uVar8 = 0; uVar8 < (byte)param_2[8]; uVar8 = uVar8 + 1) {
    if (param_2[iVar7] == '\0') {
      FUN_004ac21a(DAT_004c0e54,param_3,4);
      iVar6 = 2;
      break;
    }
    param_3[iVar6] = param_2[iVar7];
    local_30 = local_30 & 0xffffff00;
    while (iVar6 = iVar6 + 1, (local_30 & 0xff) < (uint)(byte)param_2[iVar7]) {
      cVar3 = FUN_004b4090(param_3 + iVar6,1000);
      if (cVar3 == '\0') {
        FUN_004ac21a(DAT_004c0790,param_3,4);
        iVar6 = 2;
        goto LAB_004c0548;
      }
      local_30 = CONCAT31(local_30._1_3_,(byte)local_30 + '\x01');
    }
    iVar7 = iVar7 + 1;
  }
LAB_004c0548:
  return CONCAT44(local_30,iVar6);
}

