// FUN_08028308 @ 08028308

undefined8 FUN_08028308(undefined1 *param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  
  local_28 = param_1;
  iStack_24 = param_2;
  puStack_20 = param_3;
  uStack_1c = param_4;
  for (uVar1 = 0; uVar1 < 4; uVar1 = uVar1 + 1) {
    *(undefined1 *)(&local_28 + uVar1) = *param_1;
    *(undefined1 *)((int)&local_28 + uVar1 * 4 + 1) = param_1[1];
    *(undefined1 *)((int)&local_28 + uVar1 * 4 + 2) = param_1[2];
    *(undefined1 *)((int)&local_28 + uVar1 * 4 + 3) = param_1[3];
    param_1 = param_1 + 4;
  }
  FUN_080280e8(&local_28,param_2 + 0x20);
  FUN_08027b3a(&local_28);
  iVar2 = 2;
  while (iVar3 = iVar2 + -1, iVar2 != 0) {
    FUN_080280e8(&local_28,param_2 + iVar3 * 0x10);
    iVar2 = iVar3;
    if (iVar3 != 0) {
      FUN_08027ea2(&local_28);
    }
  }
  for (uVar1 = 0; uVar1 < 4; uVar1 = uVar1 + 1) {
    *param_3 = *(undefined1 *)(&local_28 + uVar1);
    param_3[1] = *(undefined1 *)((int)&local_28 + uVar1 * 4 + 1);
    param_3[2] = *(undefined1 *)((int)&local_28 + uVar1 * 4 + 2);
    param_3[3] = *(undefined1 *)((int)&local_28 + uVar1 * 4 + 3);
    param_3 = param_3 + 4;
  }
  return CONCAT44(iStack_24,local_28);
}

