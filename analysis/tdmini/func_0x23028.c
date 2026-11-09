// FUN_08023028 @ 08023028

int FUN_08023028(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 local_78 [104];
  
  FUN_08025f6c(local_78 + 0x10);
  FUN_08025f86(local_78 + 0x10,param_1,param_2);
  FUN_0802603c(local_78,local_78 + 0x10);
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1) {
    FUN_08022fd6(DAT_080236f0 + uVar1 * 2,local_78[uVar1],0);
  }
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    *(undefined1 *)(DAT_080236f4 + uVar1) = *(undefined1 *)(DAT_080236f0 + uVar1);
  }
  return DAT_080236f4;
}

