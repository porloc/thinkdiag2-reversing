// FUN_08003b14 @ 08003b14

short FUN_08003b14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [36];
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_2c = param_2;
  uStack_28 = param_4;
  FUN_08002d9a(param_1);
  FUN_0800016c(auStack_60,0x10,0);
  sVar1 = FUN_08003a82(param_1,auStack_60,4);
  if (sVar1 == -0x7000) {
    FUN_080019b4(auStack_60,param_3,auStack_50);
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0x82;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 9) = (undefined1)local_2c;
    FUN_08000348(*(undefined4 *)(param_1 + 0x16),auStack_50,8);
    *(undefined4 *)(param_1 + 0x12) = 8;
    *(undefined4 *)(param_1 + 0xe) = 0;
    FUN_080032a2(param_1);
    sVar1 = -0x7000;
  }
  return sVar1;
}

