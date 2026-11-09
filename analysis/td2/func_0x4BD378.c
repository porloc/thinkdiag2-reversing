// func @ 0x4BD378

undefined8
FUN_004bd378(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,char param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) || ((param_3 + 7U & 0xfffffff8) == 0))
  {
    uVar1 = 0;
  }
  else {
    FUN_004bd080(param_4,param_5);
    iVar2 = (int)(param_3 + 7U) >> 3;
    if (*DAT_004bd450 == '\0') {
      for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
        FUN_004bd0d0(param_1,param_2,DAT_004bd444,(int)param_6);
        param_1 = param_1 + 8;
        param_2 = param_2 + 8;
      }
    }
    else {
      for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
        FUN_004bd0d0(param_1,param_2,DAT_004bd444,(int)param_6);
        if (param_6 == '\0') {
          FUN_004bd0d0(param_1,param_1,DAT_004bd44c,1);
        }
        else {
          FUN_004bd0d0(param_1,param_1,DAT_004bd44c,0);
        }
        FUN_004bd0d0(param_1,param_1,DAT_004bd444,(int)param_6);
        param_1 = param_1 + 8;
        param_2 = param_2 + 8;
      }
    }
    uVar1 = 1;
  }
  return CONCAT44(param_4,uVar1);
}

