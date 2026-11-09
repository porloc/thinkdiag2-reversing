// func @ 0x4BA030

void FUN_004ba030(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  param_1[0x11] = param_2;
  FUN_004b9f60(param_1,param_2,param_3 & 1);
  if ((param_3 & 10) == 0) {
    param_1[9] = param_2;
  }
  else {
    param_1[8] = param_2;
  }
  if ((int)(param_3 << 0x1e) < 0) {
    param_1[0x20] = param_2;
  }
  else if ((int)(param_3 << 0x1c) < 0) {
    param_1[0x21] = param_2;
  }
  param_1[5] = param_2;
  *param_1 = param_2;
  return;
}

