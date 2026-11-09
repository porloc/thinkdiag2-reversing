// FUN_080063a4 @ 080063a4

undefined4 FUN_080063a4(byte param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined4 auStack_24 [6];
  
  FUN_08000368(auStack_24,DAT_080067b4,0x18);
  iVar1 = FUN_08006fc0(0);
  *DAT_080067b8 = iVar1;
  if (*DAT_080067b8 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_080067d8(auStack_44,0x10);
    FUN_08000368(auStack_34,DAT_080067bc,0x10);
    iVar1 = FUN_0800676c(auStack_44,0x10);
    if (iVar1 == 0) {
      iVar1 = FUN_08006ffc(*DAT_080067b8,auStack_34,0x10);
      if (iVar1 != 0) {
        FUN_08006fde(*DAT_080067b8);
        return 0;
      }
    }
    else {
      iVar1 = FUN_08006ffc(*DAT_080067b8,auStack_44,0x10);
      if (iVar1 != 0) {
        FUN_08006fde(*DAT_080067b8);
        return 0;
      }
    }
    iVar1 = FUN_080070de(*DAT_080067b8,&local_48,2,auStack_24[param_1]);
    if (iVar1 == 0) {
      FUN_08006fde(*DAT_080067b8);
      *param_2 = CONCAT11(local_48,local_47);
      uVar2 = 1;
    }
    else {
      FUN_08006fde(*DAT_080067b8);
      uVar2 = 0;
    }
  }
  return uVar2;
}

