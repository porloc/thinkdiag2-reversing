// func @ 0x4B8D6A

void FUN_004b8d6a(byte *param_1,byte param_2,char param_3)

{
  byte bVar1;
  
  *param_1 = param_2 >> 4;
  param_1[1] = param_2 & 0xf;
  for (bVar1 = 0; bVar1 < 2; bVar1 = bVar1 + 1) {
    if (param_1[bVar1] < 10) {
      param_1[bVar1] = param_1[bVar1] + 0x30;
    }
    else if (param_3 == '\0') {
      param_1[bVar1] = param_1[bVar1] + 0x57;
    }
    else {
      param_1[bVar1] = param_1[bVar1] + 0x37;
    }
  }
  return;
}

