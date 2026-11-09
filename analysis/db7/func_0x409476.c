// func @ 0x409476

undefined8 FUN_00409476(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_2 + 0xc);
  puVar2 = *(undefined1 **)(param_2 + 8);
  if (iVar3 == 0) {
    uVar1 = 1;
  }
  else {
    param_1[1] = 0;
    param_1[1] = (*(byte *)(param_2 + 0x10) & 0x7f) << 0x10 | (*(uint *)(param_2 + 4) & 3) << 8 |
                 0x1000;
    param_1[3] = 0;
    uVar1 = FUN_00409450(param_2,*(undefined4 *)(param_2 + 4));
    param_1[3] = uVar1;
    *param_1 = 1;
    iVar4 = 15000;
    while (iVar3 != 0) {
      if ((int)(param_1[8] << 0x17) < 0) {
        uVar1 = 5;
        goto LAB_0040951e;
      }
      if (iVar4 == 0) {
        uVar1 = 9;
        goto LAB_0040951e;
      }
      if (iVar3 == 1) {
        *param_1 = 2;
      }
      iVar4 = iVar4 + -1;
      if ((int)(param_1[8] << 0x1e) < 0) {
        *puVar2 = (char)param_1[0xc];
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + -1;
        iVar4 = 15000;
      }
    }
    iVar3 = 0x1000000;
    do {
      if ((int)(param_1[8] << 0x1f) < 0) {
        uVar1 = 0;
        goto LAB_0040951e;
      }
      bVar5 = iVar3 != 0;
      iVar3 = iVar3 + -1;
    } while (bVar5);
    uVar1 = 9;
  }
LAB_0040951e:
  return CONCAT44(param_4,uVar1);
}

