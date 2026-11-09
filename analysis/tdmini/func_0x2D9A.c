// FUN_08002d9a @ 08002d9a

undefined4 FUN_08002d9a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0800016c(param_1 + 0x36,0x800,0);
  FUN_0800016c(param_1,0x1e,0);
  FUN_0800016c(param_1 + 0x1e,0x18,0);
  *(undefined2 *)(param_1 + 0x1036) = 0;
  *(undefined4 *)(param_1 + 0x1038) = 0;
  *(int *)(param_1 + 0x1a) = param_1 + 0x36;
  *(int *)(param_1 + 0x32) = param_1 + 0x36;
  *(int *)(param_1 + 0x103c) = *(int *)(param_1 + 0x1a) + 7;
  *(int *)(param_1 + 0x1040) = *(int *)(param_1 + 0x32) + 7;
  *(int *)(param_1 + 0x16) = *(int *)(param_1 + 0x103c) + 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(char *)(param_1 + 4) = *DAT_08002e3c;
  *DAT_08002e3c = *DAT_08002e3c + '\x01';
  return param_4;
}

