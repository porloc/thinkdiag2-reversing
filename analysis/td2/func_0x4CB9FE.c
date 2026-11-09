// func @ 0x4CB9FE

undefined8 FUN_004cb9fe(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = FUN_004cb8b0(param_1);
  if (bVar1 == 0) {
    if (*param_1 == '\x04') {
      if (param_1[1] == '\x11') {
        if ((param_1[2] != '3') || (uVar2 = 0, param_1[3] != 'C')) {
          uVar2 = 0xe5;
        }
      }
      else {
        uVar2 = 0xf0;
      }
    }
    else {
      uVar2 = 0xe4;
    }
    if (uVar2 != 0) {
      FUN_004cbf52(0x46);
    }
  }
  else {
    uVar2 = (uint)bVar1;
  }
  return CONCAT44(param_4,uVar2);
}

