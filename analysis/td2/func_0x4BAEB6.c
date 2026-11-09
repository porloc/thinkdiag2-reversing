// func @ 0x4BAEB6

undefined8 FUN_004baeb6(int param_1,int param_2,byte param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  bVar1 = true;
  uVar4 = 10000;
  *(undefined4 *)(param_1 + 8) = 0;
  for (uVar2 = 0; (uVar2 & 0xff) < (uint)param_3; uVar2 = uVar2 + 1) {
    for (bVar3 = 0; bVar3 < 8; bVar3 = bVar3 + 1) {
      uVar2 = uVar2 & 0xff;
      if (((int)(uint)*(byte *)(param_2 + uVar2) >> (uint)(byte)(7 - bVar3)) << 0x1f < 0) {
        if (bVar1) {
          uVar5 = 0x1900;
        }
        else {
          uVar5 = 0xc80;
        }
      }
      else if (bVar1) {
        uVar5 = 0xc80;
      }
      else {
        uVar5 = 0x1900;
      }
      bVar1 = !bVar1;
      if (!bVar1) {
        FUN_004baddc(param_1,uVar4,uVar5);
      }
      uVar4 = uVar5;
    }
  }
  if (bVar1) {
    FUN_004baddc(param_1,uVar4,8000);
  }
  return CONCAT44(param_4,(uint)bVar1);
}

