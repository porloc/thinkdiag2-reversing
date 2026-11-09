// func @ 0x4CB15C

void FUN_004cb15c(byte *param_1)

{
  int iVar1;
  byte local_10 [4];
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  byte local_4;
  byte local_3;
  byte local_2;
  byte local_1;
  
  local_10[0] = (&DAT_004cbcbc)[*param_1] ^ (&LAB_004cbbbc)[param_1[1]] ^
                (&DAT_004cbdbc)[param_1[2]] ^ (&LAB_004cbabc)[param_1[3]];
  local_b = (&LAB_004cbabc)[*param_1] ^ (&DAT_004cbcbc)[param_1[1]] ^ (&LAB_004cbbbc)[param_1[2]] ^
            (&DAT_004cbdbc)[param_1[3]];
  local_6 = (&DAT_004cbdbc)[*param_1] ^ (&LAB_004cbabc)[param_1[1]] ^ (&DAT_004cbcbc)[param_1[2]] ^
            (&LAB_004cbbbc)[param_1[3]];
  local_1 = (&LAB_004cbbbc)[*param_1] ^ (&DAT_004cbdbc)[param_1[1]] ^ (&LAB_004cbabc)[param_1[2]] ^
            (&DAT_004cbcbc)[param_1[3]];
  local_c = (&DAT_004cbcbc)[param_1[4]] ^ (&LAB_004cbbbc)[param_1[5]] ^ (&DAT_004cbdbc)[param_1[6]]
            ^ (&LAB_004cbabc)[param_1[7]];
  local_7 = (&LAB_004cbabc)[param_1[4]] ^ (&DAT_004cbcbc)[param_1[5]] ^ (&LAB_004cbbbc)[param_1[6]]
            ^ (&DAT_004cbdbc)[param_1[7]];
  local_2 = (&DAT_004cbdbc)[param_1[4]] ^ (&LAB_004cbabc)[param_1[5]] ^ (&DAT_004cbcbc)[param_1[6]]
            ^ (&LAB_004cbbbc)[param_1[7]];
  local_10[3] = (&LAB_004cbbbc)[param_1[4]] ^ (&DAT_004cbdbc)[param_1[5]] ^
                (&LAB_004cbabc)[param_1[6]] ^ (&DAT_004cbcbc)[param_1[7]];
  local_8 = (&DAT_004cbcbc)[param_1[8]] ^ (&LAB_004cbbbc)[param_1[9]] ^ (&DAT_004cbdbc)[param_1[10]]
            ^ (&LAB_004cbabc)[param_1[0xb]];
  local_3 = (&LAB_004cbabc)[param_1[8]] ^ (&DAT_004cbcbc)[param_1[9]] ^ (&LAB_004cbbbc)[param_1[10]]
            ^ (&DAT_004cbdbc)[param_1[0xb]];
  local_10[2] = (&DAT_004cbdbc)[param_1[8]] ^ (&LAB_004cbabc)[param_1[9]] ^
                (&DAT_004cbcbc)[param_1[10]] ^ (&LAB_004cbbbc)[param_1[0xb]];
  local_9 = (&LAB_004cbbbc)[param_1[8]] ^ (&DAT_004cbdbc)[param_1[9]] ^ (&LAB_004cbabc)[param_1[10]]
            ^ (&DAT_004cbcbc)[param_1[0xb]];
  local_4 = (&DAT_004cbcbc)[param_1[0xc]] ^ (&LAB_004cbbbc)[param_1[0xd]] ^
            (&DAT_004cbdbc)[param_1[0xe]] ^ (&LAB_004cbabc)[param_1[0xf]];
  local_10[1] = (&LAB_004cbabc)[param_1[0xc]] ^ (&DAT_004cbcbc)[param_1[0xd]] ^
                (&LAB_004cbbbc)[param_1[0xe]] ^ (&DAT_004cbdbc)[param_1[0xf]];
  local_a = (&DAT_004cbdbc)[param_1[0xc]] ^ (&LAB_004cbabc)[param_1[0xd]] ^
            (&DAT_004cbcbc)[param_1[0xe]] ^ (&LAB_004cbbbc)[param_1[0xf]];
  local_5 = (&LAB_004cbbbc)[param_1[0xc]] ^ (&DAT_004cbdbc)[param_1[0xd]] ^
            (&LAB_004cbabc)[param_1[0xe]] ^ (&DAT_004cbcbc)[param_1[0xf]];
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    param_1[iVar1] = (&DAT_004cb7bc)[local_10[iVar1]];
  }
  return;
}

