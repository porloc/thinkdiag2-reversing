// FUN_0800d17e @ 0800d17e

undefined8 FUN_0800d17e(char *param_1)

{
  int iVar1;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_08000348(&uStack_18,uRam0800d25c,7);
  if (*param_1 == '\0') {
    iVar1 = FUN_08007bb2(*DAT_0800d23c);
    if (iVar1 == 0) {
      iVar1 = func_0x0800695a();
      if (iVar1 == 0) {
        uStack_16 = 0x17;
        (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,3);
        FUN_08006b94(5);
      }
      else {
        FUN_08006fde(*DAT_0800d23c);
        uStack_16 = 0;
        (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,3);
        FUN_08006b94(0);
      }
    }
    else {
      uStack_16 = 0x20;
      uStack_15 = (undefined1)((uint)iVar1 >> 0x18);
      uStack_14 = (undefined1)((uint)iVar1 >> 0x10);
      uStack_13 = (undefined1)((uint)iVar1 >> 8);
      uStack_12 = (undefined1)iVar1;
      (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,7);
      FUN_08006b94(3);
    }
  }
  else {
    uStack_16 = 0;
    (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,7);
  }
  return CONCAT17(uStack_11,
                  CONCAT16(uStack_12,
                           CONCAT15(uStack_13,
                                    CONCAT14(uStack_14,
                                             CONCAT13(uStack_15,CONCAT12(uStack_16,uStack_18))))));
}

