// func @ 0x4BAE04

undefined8 FUN_004bae04(int param_1,int param_2,byte param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < param_4 << 0x1e) {
    FUN_004baddc(param_1,0x640,800);
  }
  for (uVar1 = 0; (uVar1 & 0xff) < (uint)param_3; uVar1 = uVar1 + 1) {
    for (bVar2 = 0; bVar2 < 8; bVar2 = bVar2 + 1) {
      uVar1 = uVar1 & 0xff;
      if (((int)(uint)*(byte *)(param_2 + uVar1) >> (uint)(byte)(7 - bVar2)) << 0x1f < 0) {
        uVar3 = 400;
        uVar4 = 800;
      }
      else {
        uVar3 = 800;
        uVar4 = 400;
      }
      FUN_004baddc(param_1,uVar3,uVar4);
    }
  }
  if (-1 < param_4 << 0x1f) {
    FUN_004baddc(param_1,800,0x640);
  }
  return CONCAT44(param_4,1);
}

