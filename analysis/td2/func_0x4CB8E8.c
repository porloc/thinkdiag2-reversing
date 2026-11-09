// func @ 0x4CB8E8

undefined1 FUN_004cb8e8(char param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 local_118;
  undefined1 auStack_117 [255];
  
  if (param_1 == '\0') {
    uVar1 = FUN_004cbeb6(0,0,param_2);
  }
  else {
    local_118 = 3;
    FUN_004b27ac(auStack_117,param_2,param_1);
    uVar1 = FUN_004cbeb6(0,param_1 + '\x01',&local_118);
  }
  return uVar1;
}

