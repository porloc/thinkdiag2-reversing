// FUN_080032a2 @ 080032a2

short FUN_080032a2(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = 0;
  iVar2 = FUN_08003204(param_1);
  if (iVar2 == 0) {
    sVar1 = -4;
  }
  else {
    iVar4 = 3;
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      if ((2 < *(byte *)(param_1 + 0x1048) - 1) && (1 < *(byte *)(param_1 + 0x1048) - 5)) {
        return -2;
      }
      iVar3 = FUN_08002e40(param_1,*(undefined4 *)(param_1 + 0x1a),iVar2);
      if (iVar3 < 1) {
        sVar1 = -5;
      }
      else {
        iVar3 = FUN_08002e92(param_1,*(undefined4 *)(param_1 + 0x32));
        if (2 < iVar3) {
          sVar1 = FUN_080031d0(param_1);
          if (sVar1 == 0) {
            return *(short *)(param_1 + 0x24);
          }
          return sVar1;
        }
        sVar1 = -6;
      }
    }
  }
  return sVar1;
}

