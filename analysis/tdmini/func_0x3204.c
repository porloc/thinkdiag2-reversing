// FUN_08003204 @ 08003204

undefined8 FUN_08003204(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_10;
  
  local_10 = param_4 & 0xffff0000;
  if ((*(byte *)(param_1 + 0x1048) - 1 < 3) || (*(byte *)(param_1 + 0x1048) - 5 < 2)) {
    **(undefined1 **)(param_1 + 0x1a) = 0xaa;
    if (*(char *)(param_1 + 2) == '\0') {
      uVar3 = FUN_0800303e(param_1);
    }
    else {
      if (*(char *)(param_1 + 2) != '\x01') goto LAB_0800329a;
      uVar3 = FUN_0800303e(param_1);
    }
    uVar2 = FUN_08002d78(*(int *)(param_1 + 0x1a) + 1,uVar3 & 0xffff);
    uVar1 = CONCAT22((short)(param_4 >> 0x10),uVar2);
    local_10._0_1_ = (undefined1)uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x1a) + uVar3 + 2) = (undefined1)local_10;
    local_10._1_1_ = (undefined1)((ushort)uVar2 >> 8);
    *(undefined1 *)(*(int *)(param_1 + 0x1a) + uVar3 + 1) = local_10._1_1_;
    local_10 = uVar1;
    if ((*(byte *)(param_1 + 0x1048) - 1 < 3) || (*(byte *)(param_1 + 0x1048) - 5 < 2)) {
      *(undefined1 *)(*(int *)(param_1 + 0x1a) + uVar3 + 3) = 0x55;
      iVar4 = uVar3 + 4;
      goto LAB_080032a0;
    }
  }
LAB_0800329a:
  iVar4 = 0;
LAB_080032a0:
  return CONCAT44(local_10,iVar4);
}

