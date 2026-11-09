// FUN_08003de8 @ 08003de8

ulonglong FUN_08003de8(int param_1,undefined4 param_2,undefined4 param_3,short param_4,
                      undefined4 param_5,undefined2 *param_6)

{
  uint uVar1;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  FUN_08002d9a(param_1);
  *(undefined1 *)(param_1 + 6) = 0xf0;
  *(undefined1 *)(param_1 + 7) = 0x99;
  *(undefined1 *)(param_1 + 8) = 2;
  *(undefined1 *)(param_1 + 9) = 0;
  local_2b = (undefined1)((uint)param_2 >> 8);
  **(undefined1 **)(param_1 + 0x16) = local_2b;
  local_2c = (undefined1)param_2;
  *(undefined1 *)(*(int *)(param_1 + 0x16) + 1) = local_2c;
  FUN_08000348(*(int *)(param_1 + 0x16) + 2,param_3,param_4);
  *(uint *)(param_1 + 0x12) = (uint)(ushort)(param_4 + 2);
  uVar1 = FUN_080032a2(param_1);
  if ((uVar1 & 0xffff) == 0x9000) {
    local_30 = *(undefined4 *)(param_1 + 0x26);
    FUN_08000348(param_5,*(undefined4 *)(param_1 + 0x1040),local_30);
    *param_6 = (short)*(undefined4 *)(param_1 + 0x26);
  }
  else {
    *param_6 = 0;
    local_30 = param_3;
  }
  return CONCAT44(local_30,uVar1) & 0xffffffff0000ffff;
}

