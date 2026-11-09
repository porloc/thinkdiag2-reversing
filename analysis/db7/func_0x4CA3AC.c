// func @ 0x4CA3AC

void FUN_004ca3ac(byte param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = 0;
  for (uVar2 = 0; (uVar2 & 0xff) < (uint)param_1; uVar2 = uVar2 + 1) {
    for (bVar4 = 1; bVar4 != 0; bVar4 = bVar4 << 1) {
      uVar2 = uVar2 & 0xff;
      uVar1 = uVar3 & 0xffff;
      uVar3 = uVar3 << 1;
      if (uVar1 >> 0xf != (uint)((*(byte *)(param_2 + uVar2) & bVar4) != 0)) {
        uVar3 = uVar3 ^ 0x8005;
      }
    }
  }
  *param_3 = (char)uVar3;
  param_3[1] = (char)(uVar3 >> 8);
  return;
}

