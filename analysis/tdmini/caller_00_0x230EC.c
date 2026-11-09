// FUN_080230ec @ 080230ec

uint FUN_080230ec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_a0 [4];
  byte local_90 [16];
  uint auStack_80 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [12];
  undefined1 local_3c [24];
  
  FUN_0801f3a8(local_3c,DAT_080236f8,0x14);
  uVar5 = 0;
  FUN_0801f3a8(auStack_80,DAT_080236fc,0x20);
  FUN_0801fb74(auStack_60,0x21,0);
  uVar1 = FUN_08027a14(param_1);
  uVar1 = FUN_08023028(param_1,uVar1);
  uVar1 = FUN_08027a4c(auStack_60,uVar1);
  local_a0[0] = FUN_0802308c(uVar1,8);
  local_a0[1] = FUN_0802308c(auStack_58,8);
  local_a0[2] = FUN_0802308c(auStack_50,8);
  local_a0[3] = FUN_0802308c(auStack_48,8);
  iVar2 = (int)(DAT_08023700 +
               (uint)*(byte *)(param_1 + 5) * 1000 +
               (uint)*(byte *)(param_1 + 4) * 100 +
               (uint)*(byte *)(param_1 + 2) * 10 + (uint)*(byte *)(param_1 + 1)) % 8;
  for (uVar4 = 0; uVar4 < 4; uVar4 = uVar4 + 1) {
    local_a0[uVar4] =
         local_a0[uVar4] ^ auStack_80[iVar2 + uVar4 * 2 & 7] ^ auStack_80[iVar2 + uVar4 * 2 + 3 & 7]
    ;
    *(char *)(param_2 + uVar5) = (char)(local_a0[uVar4] >> 0x18);
    *(char *)(param_2 + uVar5 + 1) = (char)(local_a0[uVar4] >> 0x10);
    *(char *)(param_2 + uVar5 + 2) = (char)(local_a0[uVar4] >> 8);
    *(char *)(param_2 + uVar5 + 3) = (char)local_a0[uVar4];
    uVar5 = uVar5 + 4;
  }
  uVar4 = FUN_08027a14(param_1);
  if (uVar4 < 0x10) {
    iVar2 = FUN_08027a14(param_1);
    for (uVar4 = 0; uVar3 = FUN_08027a14(param_1), uVar4 < uVar3; uVar4 = uVar4 + 1) {
      local_90[uVar4] = *(byte *)(param_1 + uVar4);
    }
    for (uVar4 = 0; uVar4 < 0x10U - iVar2; uVar4 = uVar4 + 1) {
      *(undefined1 *)((int)auStack_80 + (uVar4 - (0x10U - iVar2))) = local_3c[uVar4];
    }
    for (uVar4 = 0; uVar4 < 0x10; uVar4 = uVar4 + 1) {
      *(byte *)(param_2 + uVar4) = *(byte *)(param_2 + uVar4) ^ local_90[uVar4];
    }
  }
  else {
    for (uVar4 = 0; uVar4 < 0x10; uVar4 = uVar4 + 1) {
      *(byte *)(param_2 + uVar4) = *(byte *)(param_2 + uVar4) ^ *(byte *)(param_1 + uVar4);
    }
  }
  return uVar5 & 0xffff;
}

