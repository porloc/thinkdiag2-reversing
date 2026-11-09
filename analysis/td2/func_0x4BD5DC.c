// func @ 0x4BD5DC

void FUN_004bd5dc(byte *param_1)

{
  uint uVar1;
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
  
  local_10[0] = (&DAT_004bdff8)[*param_1] ^ (&LAB_004be0f8)[param_1[5]] ^
                (&DAT_004bddf8)[param_1[10]] ^ (&DAT_004bddf8)[param_1[0xf]];
  local_10[1] = (&DAT_004bddf8)[*param_1] ^ (&DAT_004bdff8)[param_1[5]] ^
                (&LAB_004be0f8)[param_1[10]] ^ (&DAT_004bddf8)[param_1[0xf]];
  local_10[2] = (&DAT_004bddf8)[*param_1] ^ (&DAT_004bddf8)[param_1[5]] ^
                (&DAT_004bdff8)[param_1[10]] ^ (&LAB_004be0f8)[param_1[0xf]];
  local_10[3] = (&LAB_004be0f8)[*param_1] ^ (&DAT_004bddf8)[param_1[5]] ^
                (&DAT_004bddf8)[param_1[10]] ^ (&DAT_004bdff8)[param_1[0xf]];
  local_c = (&DAT_004bdff8)[param_1[4]] ^ (&LAB_004be0f8)[param_1[9]] ^
            (&DAT_004bddf8)[param_1[0xe]] ^ (&DAT_004bddf8)[param_1[3]];
  local_b = (&DAT_004bddf8)[param_1[4]] ^ (&DAT_004bdff8)[param_1[9]] ^
            (&LAB_004be0f8)[param_1[0xe]] ^ (&DAT_004bddf8)[param_1[3]];
  local_a = (&DAT_004bddf8)[param_1[4]] ^ (&DAT_004bddf8)[param_1[9]] ^
            (&DAT_004bdff8)[param_1[0xe]] ^ (&LAB_004be0f8)[param_1[3]];
  local_9 = (&LAB_004be0f8)[param_1[4]] ^ (&DAT_004bddf8)[param_1[9]] ^
            (&DAT_004bddf8)[param_1[0xe]] ^ (&DAT_004bdff8)[param_1[3]];
  local_8 = (&DAT_004bdff8)[param_1[8]] ^ (&LAB_004be0f8)[param_1[0xd]] ^
            (&DAT_004bddf8)[param_1[2]] ^ (&DAT_004bddf8)[param_1[7]];
  local_7 = (&DAT_004bddf8)[param_1[8]] ^ (&DAT_004bdff8)[param_1[0xd]] ^
            (&LAB_004be0f8)[param_1[2]] ^ (&DAT_004bddf8)[param_1[7]];
  local_6 = (&DAT_004bddf8)[param_1[8]] ^ (&DAT_004bddf8)[param_1[0xd]] ^
            (&DAT_004bdff8)[param_1[2]] ^ (&LAB_004be0f8)[param_1[7]];
  local_5 = (&LAB_004be0f8)[param_1[8]] ^ (&DAT_004bddf8)[param_1[0xd]] ^
            (&DAT_004bddf8)[param_1[2]] ^ (&DAT_004bdff8)[param_1[7]];
  local_4 = (&DAT_004bdff8)[param_1[0xc]] ^ (&LAB_004be0f8)[param_1[1]] ^
            (&DAT_004bddf8)[param_1[6]] ^ (&DAT_004bddf8)[param_1[0xb]];
  local_3 = (&DAT_004bddf8)[param_1[0xc]] ^ (&DAT_004bdff8)[param_1[1]] ^
            (&LAB_004be0f8)[param_1[6]] ^ (&DAT_004bddf8)[param_1[0xb]];
  local_2 = (&DAT_004bddf8)[param_1[0xc]] ^ (&DAT_004bddf8)[param_1[1]] ^
            (&DAT_004bdff8)[param_1[6]] ^ (&LAB_004be0f8)[param_1[0xb]];
  local_1 = (&LAB_004be0f8)[param_1[0xc]] ^ (&DAT_004bddf8)[param_1[1]] ^
            (&DAT_004bddf8)[param_1[6]] ^ (&DAT_004bdff8)[param_1[0xb]];
  for (uVar1 = 0; (uVar1 & 0xff) < 0x10; uVar1 = uVar1 + 1) {
    uVar1 = uVar1 & 0xff;
    param_1[uVar1] = local_10[uVar1];
  }
  return;
}

