// func @ 0x408EB0

undefined8 FUN_00408eb0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uStack_20;
  undefined1 local_1e;
  undefined5 uStack_1d;
  undefined4 uStack_18;
  
  uStack_18 = param_3;
  FUN_0040282c(&uStack_20,DAT_00408f98,3);
  iVar1 = FUN_00404bf6(param_1,&uStack_20,0x21,&uStack_18);
  if (iVar1 != 0) {
    uVar2 = FUN_0040ae66(*(undefined4 *)(param_1 + 0x206e),*(undefined4 *)(param_1 + 0x206a));
    iVar1 = FUN_00409f48(uVar2,param_2 + 1,0x20);
    if (iVar1 == 0) {
      local_1e = 9;
      (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
      FUN_00404ba2(3);
    }
    else {
      if (*(char *)(param_1 + 0x204a) == 'D') {
        iVar1 = FUN_00407b08();
        if (iVar1 == 0) {
          local_1e = 0x17;
          (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
          FUN_00404ba2(5);
          goto LAB_00408f86;
        }
      }
      else if ((*(char *)(param_1 + 0x204a) == 'J') && (iVar1 = FUN_00407b1e(), iVar1 == 0)) {
        local_1e = 0x17;
        (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
        FUN_00404ba2(5);
        goto LAB_00408f86;
      }
      local_1e = 0;
      (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
      FUN_00404ba2(0);
    }
  }
LAB_00408f86:
  return CONCAT53(uStack_1d,CONCAT12(local_1e,uStack_20));
}

