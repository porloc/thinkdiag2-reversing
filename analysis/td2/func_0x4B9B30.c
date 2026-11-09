// func @ 0x4B9B30

void FUN_004b9b30(int param_1)

{
  if (param_1 == DAT_004b9ee0) {
    *(uint *)(param_1 + 0x84) = DAT_004b9ee4 & 0xfffc | 0x190000;
    *(uint *)(param_1 + 0x88) = DAT_004b9ee8 & 0xfffc | 0x190000;
    *(uint *)(param_1 + 0xa0) = DAT_004b9eec & 0xfffc | 0x60000;
    *(uint *)(param_1 + 0xb0) = DAT_004b9ef0 & 0xfffc | 0x60000;
    *(uint *)(param_1 + 0xac) = DAT_004b9ef4 & 0xfffc;
    *(uint *)(param_1 + 0xc0) = DAT_004b9ef8 & 0xfffc | DAT_004b9efc;
    *(uint *)(param_1 + 0xf0) = DAT_004b9f00 & 0xfffc | 0x40000;
  }
  else if (param_1 == DAT_004b9f04) {
    *(uint *)(param_1 + 0x84) = DAT_004b9f08 & 0xfffc | 0x190000;
    *(uint *)(param_1 + 0x88) = DAT_004b9f0c & 0xfffc | 0x190000;
    *(uint *)(param_1 + 0xa0) = DAT_004b9f10 & 0xfffc | 0x60000;
    *(uint *)(param_1 + 0xb0) = DAT_004b9f14 & 0xfffc | 0x60000;
    *(uint *)(param_1 + 0xac) = DAT_004b9f18 & 0xfffc;
    *(uint *)(param_1 + 0xc0) = DAT_004b9f1c & 0xfffc | DAT_004b9efc;
    *(uint *)(param_1 + 0xf0) = DAT_004b9f20 & 0xfffc | 0x40000;
  }
  *(undefined4 *)(param_1 + 0xbc) = 0x777;
  *(undefined4 *)(param_1 + 200) = 7;
  return;
}

