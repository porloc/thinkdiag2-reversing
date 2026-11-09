// func @ 0x4C9574

int FUN_004c9574(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  *param_3 = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_004b3e66(0,uVar1,uVar2);
  uVar3 = FUN_004b69f4(0,CONCAT11(uVar1,uVar2),param_3 + 1);
  FUN_004b3aae();
  return (uVar3 & 0xffff) + 1;
}

