// FUN_080235b4 @ 080235b4

undefined8 FUN_080235b4(undefined4 param_1,byte *param_2,undefined1 *param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 local_28;
  
  *DAT_08023718 = 0;
  bVar1 = *param_2;
  local_28._3_1_ = (undefined1)((uint)param_4 >> 0x18);
  local_28._0_3_ = CONCAT12(bVar1,(short)param_4);
  if (bVar1 == 0) {
    *DAT_0802371c = 0;
    iVar3 = FUN_080232e2(param_2,param_2[1],param_3 + 1,&local_28);
    if (iVar3 == 0) {
      *DAT_0802371c = 1;
      *param_3 = 0;
      iVar3 = (local_28 & 0xffff) + 1;
    }
    else {
      *param_3 = 0xff;
      param_3[1] = 2;
      param_3[2] = 0;
      param_3[3] = (char)iVar3;
      iVar3 = 4;
    }
  }
  else if (bVar1 == 2) {
    bVar1 = param_2[2];
    bVar2 = param_2[3];
    if (CONCAT11(bVar1,bVar2) < 0x1001) {
      FUN_0801fb74(DAT_08023720,0x1028,0);
      iVar3 = FUN_080234b0(param_2 + 4,param_3,CONCAT11(bVar1,bVar2),DAT_08023720);
      if (iVar3 == 0) {
        *param_3 = 0xff;
        param_3[1] = 0;
        iVar3 = 2;
      }
      else {
        *param_3 = 0xff;
        param_3[1] = 2;
        param_3[2] = 2;
        param_3[3] = (char)((uint)iVar3 >> 0x18);
        param_3[4] = (char)((uint)iVar3 >> 0x10);
        param_3[5] = (char)((uint)iVar3 >> 8);
        param_3[6] = (char)iVar3;
        iVar3 = 7;
      }
    }
    else {
      *param_3 = 0xff;
      param_3[1] = 2;
      param_3[2] = 2;
      param_3[3] = 0x55;
      iVar3 = 4;
    }
  }
  else if (bVar1 < 2) {
    iVar3 = FUN_0802342c(param_2,8,param_3 + 1,&local_28);
    if (iVar3 == 0) {
      *param_3 = 0;
      iVar3 = (local_28 & 0xffff) + 1;
    }
    else {
      *param_3 = 0xff;
      param_3[1] = 2;
      param_3[2] = 1;
      param_3[3] = (char)iVar3;
      iVar3 = 4;
    }
  }
  else {
    *param_3 = 0xff;
    param_3[1] = 2;
    iVar3 = 2;
  }
  return CONCAT44(local_28,iVar3);
}

