// func @ 0x4CA142

void FUN_004ca142(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_004ca0fe(param_1);
  if ((int)(param_3 << 0x1c) < 0) {
    *(uint *)(iVar1 + 100) = param_2;
  }
  else {
    *(uint *)(iVar1 + 0x60) = param_2;
  }
  if ((int)(param_3 << 0x1b) < 0) {
    *(uint *)(iVar1 + 0x94) = param_2;
  }
  else {
    *(uint *)(iVar1 + 0x90) = param_2;
  }
  if ((int)(param_3 << 0x1a) < 0) {
    *(uint *)(iVar1 + 0x50) = param_2;
  }
  else {
    *(uint *)(iVar1 + 0x54) = param_2;
  }
  if ((param_3 & 0xc0) == 0) {
    *(uint *)(iVar1 + 0x24) = param_2;
  }
  else {
    *(uint *)(iVar1 + 0x20) = param_2;
  }
  if ((int)(param_3 << 0x18) < 0) {
    *(uint *)(iVar1 + 0x84) = param_2;
  }
  else {
    *(uint *)(iVar1 + 0x80) = param_2;
  }
  if ((int)(param_3 << 0x1f) < 0) {
    *(uint *)(iVar1 + 0x70) = *(uint *)(iVar1 + 0x70) | param_2;
  }
  else {
    *(uint *)(iVar1 + 0x70) = *(uint *)(iVar1 + 0x70) & ~param_2;
  }
  if ((int)(param_3 << 0x1e) < 0) {
    *(uint *)(iVar1 + 0x74) = *(uint *)(iVar1 + 0x74) | param_2;
  }
  else {
    *(uint *)(iVar1 + 0x74) = *(uint *)(iVar1 + 0x74) & ~param_2;
  }
  return;
}

