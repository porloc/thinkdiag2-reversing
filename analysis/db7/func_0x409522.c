// func @ 0x409522

undefined8 FUN_00409522(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_2 + 0xc);
  pbVar3 = *(byte **)(param_2 + 8);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    param_1[1] = 0;
    param_1[1] = (*(byte *)(param_2 + 0x10) & 0x7f) << 0x10 | (*(uint *)(param_2 + 4) & 3) << 8;
    param_1[3] = 0;
    uVar1 = FUN_00409450(param_2,*(undefined4 *)(param_2 + 4));
    param_1[3] = uVar1;
    while (iVar2 != 0) {
      if ((int)(param_1[8] << 0x17) < 0) {
        uVar1 = 5;
        goto LAB_004095ae;
      }
      if ((int)(param_1[8] << 0x1d) < 0) {
        param_1[0xd] = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        iVar2 = iVar2 + -1;
      }
    }
    do {
      if ((int)(param_1[8] << 0x17) < 0) {
        uVar1 = 5;
        goto LAB_004095ae;
      }
    } while (-1 < (int)(param_1[8] << 0x1d));
    *param_1 = 2;
    iVar2 = 0x1000000;
    do {
      if ((int)(param_1[8] << 0x1f) < 0) {
        uVar1 = 0;
        goto LAB_004095ae;
      }
      bVar4 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar4);
    uVar1 = 9;
  }
LAB_004095ae:
  return CONCAT44(param_4,uVar1);
}

