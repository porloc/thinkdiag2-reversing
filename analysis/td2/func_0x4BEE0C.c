// func @ 0x4BEE0C

undefined4 FUN_004bee0c(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = 0;
  while( true ) {
    if (3 < (uVar3 & 0xff)) {
      for (bVar2 = 0; bVar2 < 8; bVar2 = bVar2 + 1) {
        if (-1 < (int)(uVar1 << 0x1f)) {
          *(undefined1 *)((uint)bVar2 + param_1) = (&DAT_004bee84)[bVar2];
        }
        uVar1 = (uVar1 & 0xff) >> 1;
      }
      return 0;
    }
    if (7 < *param_2) break;
    *(char *)((uint)param_2[uVar3 & 0xff] + param_1) =
         (char)(param_3 >> ((3 - (uVar3 & 0xff) & 0x1f) << 3));
    uVar1 = uVar1 | 1 << (uint)param_2[uVar3 & 0xff];
    uVar3 = (uVar3 & 0xff) + 1;
  }
  return 1;
}

