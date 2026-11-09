// FUN_080001d2 @ 080001d2

void FUN_080001d2(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (*(code *)param_1[5])(param_1[2]);
  }
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

