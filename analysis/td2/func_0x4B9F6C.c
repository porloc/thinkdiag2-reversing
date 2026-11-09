// func @ 0x4B9F6C

void FUN_004b9f6c(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x84) = param_2;
  *(uint *)(param_1 + 0x8c) = (int)(0x8000 / (ulonglong)(uint)(param_3 << 1)) - 1U & 0x3fff;
  return;
}

