// func @ 0x4BD050

/* WARNING: Removing unreachable block (ram,0x004c9e3c) */
/* WARNING: Removing unreachable block (ram,0x004c9d80) */
/* WARNING: Removing unreachable block (ram,0x004c9d88) */
/* WARNING: Removing unreachable block (ram,0x004c9d8c) */
/* WARNING: Removing unreachable block (ram,0x004c9d8e) */
/* WARNING: Removing unreachable block (ram,0x004c9d9a) */
/* WARNING: Removing unreachable block (ram,0x004c9da4) */
/* WARNING: Removing unreachable block (ram,0x004c9d7a) */
/* WARNING: Removing unreachable block (ram,0x004c9d72) */
/* WARNING: Removing unreachable block (ram,0x004c9d6a) */
/* WARNING: Removing unreachable block (ram,0x004c9d24) */
/* WARNING: Removing unreachable block (ram,0x004c9d26) */
/* WARNING: Removing unreachable block (ram,0x004c9d6e) */
/* WARNING: Removing unreachable block (ram,0x004c9d76) */
/* WARNING: Removing unreachable block (ram,0x004c9d7e) */
/* WARNING: Removing unreachable block (ram,0x004c9d9e) */
/* WARNING: Removing unreachable block (ram,0x004c9e04) */
/* WARNING: Removing unreachable block (ram,0x004c9e50) */

uint FUN_004bd050(byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint local_38;
  uint local_34;
  
  for (; (uVar1 = (uint)*param_1, uVar1 - 9 < 5 || (uVar1 == 0x20)); param_1 = param_1 + 1) {
  }
  if (uVar1 == 0x2d || uVar1 == 0x2b) {
    bVar5 = *param_1;
    param_1 = param_1 + 1;
  }
  else {
    bVar5 = 0x2b;
  }
  for (pbVar6 = param_1; *pbVar6 == 0x30; pbVar6 = pbVar6 + 1) {
  }
  pbVar7 = pbVar6;
  uVar1 = 0;
  while( true ) {
    uVar3 = uVar1;
    uVar1 = (uint)*pbVar7;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    iVar2 = FUN_004cabac(s_0123456789abcdefghijklmnopqrstuv_004c9e60,uVar1,10);
    if (iVar2 == 0) break;
    local_38 = iVar2 - 0x60U & 0xff;
    pbVar7 = pbVar7 + 1;
    uVar1 = uVar3 * 10 + local_38;
    local_34 = uVar3;
  }
  if (param_1 == pbVar7) {
    uVar3 = 0;
  }
  else if (((int)(pbVar7 + (-(uint)DAT_004c9e92 - (int)pbVar6)) < 0) ||
          ((((int)(pbVar7 + (-(uint)DAT_004c9e92 - (int)pbVar6)) < 1 && (local_38 <= uVar3)) &&
           ((uVar3 - local_38) / 10 == local_34)))) {
    if (bVar5 == 0x2d) {
      uVar3 = -uVar3;
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_004cac04();
    *puVar4 = 0x22;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

