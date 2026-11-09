// func @ 0x408DD0

undefined8 FUN_00408dd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uStack_20;
  undefined1 local_1e;
  undefined1 uStack_1d;
  int local_1c;
  
  uStack_20 = (undefined2)param_2;
  local_1e = (undefined1)((uint)param_2 >> 0x10);
  uStack_1d = (undefined1)((uint)param_2 >> 0x18);
  local_1c = param_3;
  FUN_0040282c(&uStack_20,DAT_00408f94,3);
  local_1c = local_1c + -1;
  iVar1 = FUN_00404bf6(param_1,&uStack_20,4,&local_1c);
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(param_2 + 4) |
            (uint)*(byte *)(param_2 + 2) << 0x10 | (uint)*(byte *)(param_2 + 1) << 0x18 |
            (uint)*(byte *)(param_2 + 3) << 8;
    iVar1 = FUN_00404bf6(param_1,&uStack_20,2,&local_1c);
    if (iVar1 != 0) {
      uVar3 = (uint)CONCAT11(*(undefined1 *)(param_2 + 5),*(undefined1 *)(param_2 + 6));
      iVar1 = FUN_00404bf6(param_1,&uStack_20,uVar3,&local_1c);
      if (iVar1 != 0) {
        if (uVar2 < *(uint *)(param_1 + 0x206a)) {
          iVar1 = FUN_0040a4da(uVar2 + *(int *)(param_1 + 0x206e),param_2 + 7,uVar3,0);
          if (iVar1 == 0) {
            *(uint *)(param_1 + 0x2094) = uVar3 + *(int *)(param_1 + 0x2094);
            local_1e = 0;
            (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
          }
          else {
            local_1e = 0xe;
            (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
          }
        }
        else {
          local_1e = 0xb;
          (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
        }
      }
    }
  }
  return CONCAT44(local_1c,CONCAT13(uStack_1d,CONCAT12(local_1e,uStack_20)));
}

