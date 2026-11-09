// func @ 0x4B8420

undefined8 FUN_004b8420(int param_1,int param_2,int param_3,byte param_4,int param_5)

{
  int iVar1;
  int local_30;
  int local_2c [2];
  
  local_2c[0] = 0;
  if (param_5 < param_3) {
    iVar1 = (uint)param_4 * ((param_5 + param_2) - param_3 * ((param_5 + param_2) / param_3));
    local_30 = param_1 + iVar1;
    FUN_004b27ac(local_2c,local_30,2);
    if (local_2c[0] != param_2) {
      local_30 = param_5 + 1;
      iVar1 = FUN_004b8420(param_1,param_2,param_3,param_4);
    }
  }
  else {
    iVar1 = -1;
  }
  return CONCAT44(local_30,iVar1);
}

