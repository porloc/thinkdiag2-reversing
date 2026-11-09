// func @ 0x409BD6

undefined8
FUN_00409bd6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_004099e0(param_1);
  if (iVar1 << 7 < 0) {
    uVar2 = 0x19;
  }
  else {
    *param_1 = 1;
    FUN_00409aca(param_1,param_2);
    if (param_1 == DAT_00409cf0) {
      for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
        *(undefined4 *)(DAT_00409d0c + uVar3 * 4) = 0;
      }
    }
    if (param_1 == DAT_00409cf4) {
      for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
        *(undefined4 *)(DAT_00409d0c + uVar3 * 4 + 0x40) = 0;
      }
    }
    uVar2 = 0;
  }
  return CONCAT44(param_4,uVar2);
}

