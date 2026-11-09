// func @ 0x4BA0DA

undefined8 FUN_004ba0da(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_18;
  
  uVar1 = FUN_004ba20e(param_1);
  uVar2 = param_2 & 0x78000000;
  if (uVar2 == 0x8000000) {
    FUN_004b9f8a(uVar1,0x8000000,1 << (param_1 & 0x1f));
    FUN_004b9f60(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x10000000) {
    FUN_004b9f8a(uVar1,0x10000000,1 << (param_1 & 0x1f));
    FUN_004b9f60(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x18000000) {
    FUN_004b9f8a(uVar1,0x18000000,1 << (param_1 & 0x1f));
    FUN_004b9f60(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x20000000) {
    FUN_004b9f8a(uVar1,0x20000000,1 << (param_1 & 0x1f));
    FUN_004b9f60(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x28000000) {
    FUN_004ba030(uVar1,1 << (param_1 & 0x1f),param_2);
  }
  else {
    if ((uVar2 != 0x30000000) && (uVar2 != 0x38000000)) {
      uVar1 = 0;
      goto LAB_004ba20c;
    }
    local_18 = param_2 & 1;
    FUN_004ba070(uVar1,1 << (param_1 & 0x1f),(param_2 & 0x38000000) == 0x38000000,(param_2 & 7) >> 2
                );
  }
  uVar1 = 1;
LAB_004ba20c:
  return CONCAT44(local_18,uVar1);
}

