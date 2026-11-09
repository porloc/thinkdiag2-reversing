// func @ 0x409ACA

void FUN_00409aca(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)((int)param_2 + 0x13) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80000000;
  }
  *(uint *)(param_1 + 4) =
       uVar1 | (param_2[1] / param_2[2] - 1) * 0x100 & 0xff00 | ((byte)param_2[4] & 0xf) << 0x18 |
       (*(byte *)((int)param_2 + 0x11) & 3) << 0x1c | param_2[3] | 0x800000;
  if ((char)param_2[5] == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1000000;
  }
  if (*(char *)((int)param_2 + 0x15) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x2000000;
  }
  *(uint *)(param_1 + 8) = uVar1 | *param_2 | uVar2;
  *(uint *)(param_1 + 0x94) = (*(byte *)((int)param_2 + 0x16) & 3) << 8 | 0xc;
  return;
}

