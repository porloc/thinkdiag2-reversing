// func @ 0x4CB518

undefined8 FUN_004cb518(undefined1 *param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_20;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  local_20 = param_1;
  iStack_1c = param_2;
  puStack_18 = param_3;
  uStack_14 = param_4;
  for (uVar1 = 0; uVar1 < 4; uVar1 = uVar1 + 1) {
    *(undefined1 *)(&local_20 + uVar1) = *param_1;
    *(undefined1 *)((int)&local_20 + uVar1 * 4 + 1) = param_1[1];
    *(undefined1 *)((int)&local_20 + uVar1 * 4 + 2) = param_1[2];
    *(undefined1 *)((int)&local_20 + uVar1 * 4 + 3) = param_1[3];
    param_1 = param_1 + 4;
  }
  FUN_004cb418(&local_20,param_2);
  for (uVar1 = 1; uVar1 < 3; uVar1 = uVar1 + 1) {
    if (uVar1 < 2) {
      FUN_004caea0(&local_20);
    }
    else {
      FUN_004cad5c(&local_20);
    }
    FUN_004cb418(&local_20,param_2 + uVar1 * 0x10);
  }
  for (uVar1 = 0; uVar1 < 4; uVar1 = uVar1 + 1) {
    *param_3 = *(undefined1 *)(&local_20 + uVar1);
    param_3[1] = *(undefined1 *)((int)&local_20 + uVar1 * 4 + 1);
    param_3[2] = *(undefined1 *)((int)&local_20 + uVar1 * 4 + 2);
    param_3[3] = *(undefined1 *)((int)&local_20 + uVar1 * 4 + 3);
    param_3 = param_3 + 4;
  }
  return CONCAT44(iStack_1c,local_20);
}

