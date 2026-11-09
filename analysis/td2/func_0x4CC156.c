// func @ 0x4CC156

undefined4 FUN_004cc156(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = *(int *)(param_2 + 0xc);
  pbVar3 = *(byte **)(param_2 + 8);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    param_1[1] = 0;
    param_1[1] = (*(byte *)(param_2 + 0x10) & 0x7f) << 0x10 | (*(uint *)(param_2 + 4) & 3) << 8;
    param_1[3] = 0;
    uVar1 = FUN_004cc09c(param_2,*(undefined4 *)(param_2 + 4));
    param_1[3] = uVar1;
    while (iVar2 != 0) {
      if ((int)(param_1[8] << 0x17) < 0) {
        return 5;
      }
      if ((int)(param_1[8] << 0x1d) < 0) {
        param_1[0xd] = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        iVar2 = iVar2 + -1;
      }
    }
    do {
      if ((int)(param_1[8] << 0x17) < 0) {
        return 5;
      }
    } while (-1 < (int)(param_1[8] << 0x1d));
    *param_1 = 2;
    do {
    } while (-1 < (int)(param_1[8] << 0x1f));
    uVar1 = 0;
  }
  return uVar1;
}

