// func @ 0x40A016

undefined4 FUN_0040a016(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_488 [516];
  undefined1 auStack_284 [516];
  undefined1 auStack_80 [92];
  
  FUN_0040284c(auStack_488,DAT_0040a3d4,0x204);
  FUN_0040282c(auStack_284,auStack_488,0x204);
  iVar1 = FUN_0040b2d8(auStack_80);
  if (iVar1 == 0) {
    uVar2 = FUN_00409d94(param_3);
    iVar1 = FUN_0040b2e4(auStack_80,param_3,uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_00409d94(param_4);
      iVar1 = FUN_0040b2e4(auStack_80,param_4,uVar2);
      if (iVar1 == 0) {
        uVar2 = FUN_0040b2f8(auStack_80,param_1,param_2,auStack_284);
      }
      else {
        uVar2 = 0xfffffffe;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

