// func @ 0x4B9172

undefined4 FUN_004b9172(int param_1,undefined4 param_2,ushort param_3,int param_4)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char local_f0 [4];
  undefined4 local_ec;
  undefined1 auStack_e8 [4];
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined1 *local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined1 auStack_d0 [2];
  undefined1 auStack_ce [2];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [68];
  
  local_e4 = *DAT_004b9730;
  uStack_e0 = DAT_004b9730[1];
  FUN_004b2824(auStack_d0,0x10);
  FUN_004b2824(auStack_68,0x40);
  FUN_004b2824(auStack_a8,0x40);
  local_ec = 0x1000;
  bVar2 = *(byte *)(param_1 + (uint)param_3);
  if (bVar2 < 0x41) {
    local_d4 = param_1 + (uint)param_3 + 1;
    FUN_004b27ac(auStack_68,local_d4,bVar2);
    FUN_004bb0ea(0,auStack_d0,0xd);
    local_d8 = 4;
    local_dc = auStack_cc;
    FUN_004b27ac(&local_e4,local_dc,4);
    FUN_004b27ac(auStack_e8,auStack_ce,4);
    FUN_004bd058(&local_e4,auStack_e8,4);
    FUN_004bd378(auStack_a8,auStack_68,bVar2,&local_e4,8,1);
    local_f0[0] = '\0';
    local_f0[1] = '\0';
    local_f0[2] = '\0';
    local_f0[3] = '\0';
    uVar1 = FUN_004bcfd4(auStack_a8);
    FUN_004b907e(auStack_a8,local_f0,uVar1,0x2c);
    for (uVar4 = 0; (uVar4 & 0xff) < 3; uVar4 = (uVar4 & 0xff) + 1) {
      local_f0[uVar4 & 0xff] = local_f0[uVar4 & 0xff] + -1;
    }
    FUN_004b2824(auStack_c0,0x18);
    FUN_004bb4d4(local_f0,auStack_c0);
    FUN_004bd378(param_2,param_1,param_3,auStack_c0,0x18,1);
    FUN_004b902c(DAT_004b9734);
    FUN_004b09c0(auStack_68,0x10,0);
    iVar5 = FUN_004b8e80(DAT_004b9734,auStack_68);
    if (iVar5 == 0x10) {
      FUN_004bddcc(param_2,local_ec,auStack_68,param_4 + 0x28);
      iVar5 = FUN_004b834e(param_4 + 0x28,param_4,param_4 + 0x1e);
      if (iVar5 < 0) {
        uVar3 = 4;
      }
      else {
        FUN_004b069c(DAT_004b972c);
        bVar2 = FUN_004b911e(DAT_004b972c);
        if (((bVar2 < 0x21) && (bVar2 != 0)) &&
           (iVar5 = FUN_004be5f8(DAT_004b972c,param_4,bVar2), iVar5 == 0)) {
          uVar3 = 0;
        }
        else {
          FUN_004b09c0(param_4 + 0x28,0x400,0);
          uVar3 = 5;
        }
      }
    }
    else {
      uVar3 = 3;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

