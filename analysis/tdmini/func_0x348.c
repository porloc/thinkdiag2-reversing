// FUN_08000348 @ 08000348

void FUN_08000348(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    if (((uint)param_2 & 3) == 0) break;
    param_3 = param_3 - 1;
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  if (((uint)param_1 & 3) == 0) {
    while (uVar5 = param_3 - 0x10, 0xf < param_3) {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      param_2 = param_2 + 4;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      param_1 = param_1 + 4;
      param_3 = uVar5;
    }
    bVar10 = (int)(param_3 << 0x1d) < 0;
    if ((uVar5 & 8) != 0) {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      param_2 = param_2 + 2;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      param_1 = param_1 + 2;
    }
  }
  else {
    while (uVar5 = param_3 - 8, 7 < param_3) {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      param_2 = param_2 + 2;
      puVar3 = param_1 + 1;
      *param_1 = uVar6;
      param_1 = param_1 + 2;
      *puVar3 = uVar7;
      param_3 = uVar5;
    }
    bVar10 = (int)(param_3 << 0x1d) < 0;
  }
  puVar1 = param_1;
  puVar3 = param_2;
  if (bVar10) {
    puVar3 = param_2 + 1;
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  puVar2 = puVar1;
  puVar4 = puVar3;
  if ((uVar5 & 2) != 0) {
    puVar4 = (undefined4 *)((int)puVar3 + 2);
    puVar2 = (undefined4 *)((int)puVar1 + 2);
    *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
  }
  if ((int)(uVar5 << 0x1f) < 0) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
  }
  return;
}

