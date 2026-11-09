// func @ 0x4BA3DC

bool FUN_004ba3dc(int param_1,undefined1 *param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x14) << 0x1f < 0;
  if (bVar1) {
    *param_2 = (char)*(undefined4 *)(param_1 + 0x18);
  }
  return !bVar1;
}

