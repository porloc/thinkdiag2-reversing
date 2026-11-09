// FUN_080001ee @ 080001ee

bool FUN_080001ee(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  FUN_08000368(param_1 + 0x32,param_1 + 0xc,0x98);
  *param_1 = 1;
  bVar1 = *(byte *)((int)param_1 + 0xc9);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_08000256;
  }
  if (bVar1 != 0) {
    if (bVar1 == 3) {
      *(undefined1 *)(param_1 + 1) = 3;
      goto LAB_08000256;
    }
    if (bVar1 < 3) {
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_08000256;
    }
    if (bVar1 == 5) {
      *(undefined1 *)(param_1 + 1) = 5;
      goto LAB_08000256;
    }
    if (bVar1 < 5) {
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_08000256;
    }
    if (bVar1 == 6) {
      *(undefined1 *)(param_1 + 1) = 6;
      goto LAB_08000256;
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
LAB_08000256:
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 8;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  iVar2 = (*(code *)param_1[4])(param_1[2]);
  if (iVar2 != 0) {
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 5) = 1;
  }
  return iVar2 == 0;
}

