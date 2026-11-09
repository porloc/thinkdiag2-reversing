// func @ 0x4CC0C2

undefined8 FUN_004cc0c2(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 0xc);
  puVar3 = *(undefined1 **)(param_2 + 8);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    param_1[1] = 0;
    param_1[1] = (*(byte *)(param_2 + 0x10) & 0x7f) << 0x10 | (*(uint *)(param_2 + 4) & 3) << 8 |
                 0x1000;
    param_1[3] = 0;
    uVar1 = FUN_004cc09c(param_2,*(undefined4 *)(param_2 + 4));
    param_1[3] = uVar1;
    *param_1 = 1;
    iVar4 = 15000;
    while (iVar2 != 0) {
      if ((int)(param_1[8] << 0x17) < 0) {
        uVar1 = 5;
        goto LAB_004cc152;
      }
      if (iVar4 == 0) {
        uVar1 = 9;
        goto LAB_004cc152;
      }
      if (iVar2 == 1) {
        *param_1 = 2;
      }
      iVar4 = iVar4 + -1;
      if ((int)(param_1[8] << 0x1e) < 0) {
        *puVar3 = (char)param_1[0xc];
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
        iVar4 = 15000;
      }
    }
    do {
    } while (-1 < (int)(param_1[8] << 0x1f));
    uVar1 = 0;
  }
LAB_004cc152:
  return CONCAT44(param_4,uVar1);
}

