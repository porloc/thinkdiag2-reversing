// func @ 0x4BB4D4

undefined4 FUN_004bb4d4(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [196];
  
  FUN_004bb458(auStack_e0);
  FUN_004b2824(auStack_f8,0x18);
  for (uVar1 = 0; (uVar1 & 0xff) < 3; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_004b27ac(auStack_f8 + (uVar1 & 0xff) * 8,
                 auStack_e0 + (uint)*(byte *)(param_1 + (uVar1 & 0xff)) * 8,8);
  }
  FUN_004b27ac(param_2,auStack_f8,0x18);
  return 0x18;
}

