// func @ 0x4B9F60

void FUN_004b9f60(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 100) = param_2;
  }
  return;
}

