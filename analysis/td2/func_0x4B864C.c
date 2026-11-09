// func @ 0x4B864C

undefined8 FUN_004b864c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_004b8490(param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else if (iVar1 == 1) {
    uVar3 = (int)*param_1 - 0x30;
  }
  else if ((param_1[1] == 'X') || (param_1[1] == 'x')) {
    for (iVar2 = 0; iVar2 < iVar1 + -2; iVar2 = iVar2 + 1) {
      if ((param_1[iVar2 + 2] < '0') || ('9' < param_1[iVar2 + 2])) {
        if ((param_1[iVar2 + 2] < 'A') || ('F' < param_1[iVar2 + 2])) {
          uVar3 = 0;
          break;
        }
        uVar3 = (int)param_1[iVar2 + 2] - 0x37U | uVar3 << 4;
      }
      else {
        uVar3 = (int)param_1[iVar2 + 2] - 0x30U | uVar3 << 4;
      }
    }
  }
  else {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      if ((param_1[iVar2] < '0') || ('9' < param_1[iVar2])) {
        uVar3 = 0;
        break;
      }
      uVar3 = uVar3 * 10 + param_1[iVar2] + -0x30;
    }
  }
  return CONCAT44(param_4,uVar3);
}

