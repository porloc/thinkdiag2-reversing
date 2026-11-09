// func @ 0x4BA070

void FUN_004ba070(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  param_1[0x11] = param_2;
  FUN_004b9f60(param_1,param_2,param_5);
  if (param_4 == 0) {
    param_1[0x15] = param_2;
  }
  else {
    param_1[0x14] = param_2;
  }
  if (param_3 == 0) {
    param_1[0xd] = param_2;
  }
  else {
    param_1[0xc] = param_2;
  }
  param_1[4] = param_2;
  *param_1 = param_2;
  return;
}

