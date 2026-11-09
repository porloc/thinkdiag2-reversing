// func @ 0x4B8A0C

int FUN_004b8a0c(int param_1,char param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar1 = FUN_004b8490(param_1);
  iVar2 = 0;
  while ((iVar2 < iVar1 &&
         (((iVar2 < param_3 || (*(char *)(param_1 + iVar2) != param_2)) ||
          (iVar3 = iVar2, param_4 != '\x01'))))) {
    iVar2 = iVar2 + 1;
  }
  return iVar3;
}

