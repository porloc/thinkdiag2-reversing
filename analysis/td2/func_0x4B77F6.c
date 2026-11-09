// func @ 0x4B77F6

void FUN_004b77f6(void)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  char local_2f;
  char local_2e;
  char local_2d;
  char local_2c;
  undefined1 auStack_2b [12];
  char local_1f;
  char local_1e;
  char local_1d;
  char local_1c;
  char local_1b;
  char local_1a;
  undefined1 local_19;
  undefined1 local_18;
  
  local_3c = 0;
  local_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  local_44 = 0;
  uStack_40 = 0;
  FUN_004b2824(&uStack_30,0x1c);
  FUN_004bb0ea(1,&local_48,8);
  if (local_48._2_1_ == '.') {
    local_2f = local_48._1_1_ + -0x30;
    local_2e = local_48._3_1_ * '\n' + (char)local_44 + -0x10;
  }
  else if (local_48._3_1_ == '.') {
    local_2f = local_48._1_1_ * '\n' + local_48._2_1_ + -0x10;
    local_2e = (char)local_44 * '\n' + local_44._1_1_ + -0x10;
  }
  if (*(char *)(DAT_004b82c4 + 2) == '.') {
    local_2d = *(char *)(DAT_004b82c4 + 1) + -0x30;
    local_2c = *(char *)(DAT_004b82c4 + 3) * '\n' + *(char *)(DAT_004b82c4 + 4) + -0x10;
  }
  else if (*(char *)(DAT_004b82c4 + 3) == '.') {
    local_2d = *(char *)(DAT_004b82c4 + 1) * '\n' + *(char *)(DAT_004b82c4 + 2) + -0x10;
    local_2c = *(char *)(DAT_004b82c4 + 4) * '\n' + *(char *)(DAT_004b82c4 + 5) + -0x10;
  }
  FUN_004bb0ea(0,auStack_2b,0xc);
  FUN_004bb0ea(2,&local_3c,8);
  local_1f = local_3c._2_1_ + -0x30;
  local_1e = local_3c._3_1_ + -0x30;
  local_1d = (char)local_38 + -0x30;
  local_1c = local_38._1_1_ + -0x30;
  local_1b = local_38._2_1_ + -0x30;
  local_1a = local_38._3_1_ + -0x30;
  local_19 = 0x11;
  local_18 = FUN_004b51f6();
  FUN_004ab0c4(DAT_004b82c8,&uStack_30,0x19);
  return;
}

