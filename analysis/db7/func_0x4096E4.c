// func @ 0x4096E4

void FUN_004096e4(char param_1,int param_2)

{
  if (param_1 < '\0') {
    *(char *)(DAT_00409808 + ((int)param_1 & 0xfU) + -4) = (char)(param_2 << 5);
  }
  else {
    *(char *)(DAT_0040980c + param_1) = (char)(param_2 << 5);
  }
  return;
}

