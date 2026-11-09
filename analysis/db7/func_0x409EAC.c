// func @ 0x409EAC

ushort FUN_00409eac(undefined4 param_1,undefined1 param_2)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = FUN_00406b78(0,param_1,param_2);
  if (uVar1 == 0) {
    sVar2 = FUN_0040a414(DAT_00409efc);
    if (sVar2 == 0xd) {
      FUN_0040282c(param_1,DAT_00409f00,0xd);
      uVar1 = 0xd;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}

