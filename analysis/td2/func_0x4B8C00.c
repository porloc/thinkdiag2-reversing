// func @ 0x4B8C00

uint FUN_004b8c00(int param_1,int param_2)

{
  int local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28 [2];
  
  local_30 = 0;
  local_34 = 0;
  local_28[0] = 0;
  local_2c = 0xffffffff;
  FUN_004b27ac(&local_30,param_1 + 5,4);
  if (param_2 < 0x1000) {
    FUN_004b27ac(&local_34,local_30 + param_1 + 8,4);
    if (local_34 == 0) {
      return 0;
    }
    if ((int)(uint)*(byte *)(param_1 + local_34) <= param_2 / 0x100) {
      return 0;
    }
    local_2c = FUN_004b8b40(param_1,local_34 + 1,param_2);
  }
  else if ((param_2 < 0x1000) || (0x4fff < param_2)) {
    if ((0x4fff < param_2) && (param_2 < 0x9000)) {
      FUN_004b27ac(&local_34,local_30 + param_1 + 4,4);
      FUN_004b27ac(local_28,param_1 + local_34,2);
      local_30 = FUN_004b8420(local_34 + param_1 + 2,param_2,local_28[0],6,0);
      if (-1 < local_30) {
        FUN_004b27ac(&local_2c,local_30 + local_34 + param_1 + 4,4);
      }
    }
  }
  else {
    FUN_004b27ac(&local_34,param_1 + local_30,4);
    FUN_004b27ac(local_28,param_1 + local_34,2);
    local_30 = FUN_004b8420(local_34 + param_1 + 2,param_2,local_28[0],4,0);
    if (-1 < local_30) {
      FUN_004b27ac(&local_2c,local_30 + local_34 + param_1 + 4,2);
    }
    local_2c = local_2c & 0xffff;
  }
  return local_2c;
}

