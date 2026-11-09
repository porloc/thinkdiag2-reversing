// func @ 0x4091EA

void FUN_004091ea(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 << 0x1b < 0) {
    *(undefined4 *)(param_1 + 0xb0) = param_2;
    if (param_3 << 0x1a < 0) {
      *(undefined4 *)(param_1 + 0xd4) = param_2;
    }
    else {
      *(undefined4 *)(param_1 + 0xd0) = param_2;
    }
    if (param_3 << 0x19 < 0) {
      *(undefined4 *)(param_1 + 0xc0) = param_2;
    }
    else {
      *(undefined4 *)(param_1 + 0xc4) = param_2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb4) = param_2;
  }
  return;
}

