// func @ 0x409F74

undefined4
FUN_00409f74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_48c [516];
  undefined1 auStack_288 [516];
  undefined1 auStack_84 [92];
  undefined4 local_28;
  
  local_28 = param_1;
  FUN_0040284c(auStack_48c,DAT_0040a3d0,0x204);
  FUN_0040282c(auStack_288,auStack_48c,0x204);
  FUN_0040b220(auStack_84,local_28,param_2);
  uVar1 = FUN_00409d94(param_5);
  iVar2 = FUN_0040b2e4(auStack_84,param_5,uVar1);
  if (iVar2 == 0) {
    uVar1 = FUN_00409d94(param_6);
    iVar2 = FUN_0040b2e4(auStack_84,param_6,uVar1);
    if (iVar2 == 0) {
      uVar1 = FUN_0040b2f8(auStack_84,param_3,param_4,auStack_288);
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

