// func @ 0x40A5D8

undefined8 FUN_0040a5d8(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uStack_20;
  
  FUN_0040adbe(&uStack_20,param_2 + 0x10,8);
  uVar1 = (*(uint *)(param_2 + 0x10) & 0x1ff) >> 3;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  FUN_0040a55e(param_2,DAT_0040aecc,iVar2);
  FUN_0040a55e(param_2,&uStack_20,8);
  FUN_0040adbe(param_1,param_2,0x10);
  FUN_0040ae52(param_2,0,0x58);
  return uStack_20;
}

