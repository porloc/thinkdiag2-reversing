// func @ 0x40A506

undefined8 FUN_0040a506(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < (uint)param_2; uVar1 = (uVar1 & 0xff) + 1) {
    unaff_r6 = FUN_0040a4b4((uVar1 & 0xff) * 0x2000 + param_1,2);
  }
  return CONCAT44(param_4,unaff_r6);
}

