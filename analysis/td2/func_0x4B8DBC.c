// func @ 0x4B8DBC

int FUN_004b8dbc(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 local_78 [104];
  
  FUN_004bb52c(local_78 + 0x10);
  FUN_004bb546(local_78 + 0x10,param_1,param_2);
  FUN_004bb5fc(local_78,local_78 + 0x10);
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1) {
    FUN_004b8d6a(DAT_004b9718 + uVar1 * 2,local_78[uVar1],0);
  }
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    *(undefined1 *)(DAT_004b971c + uVar1) = *(undefined1 *)(DAT_004b9718 + uVar1);
  }
  return DAT_004b971c;
}

