// func @ 0x4CC054

void FUN_004cc054(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  undefined1 local_b0;
  byte bStack_af;
  byte bStack_ae;
  byte bStack_ad;
  undefined1 local_ac;
  byte local_ab;
  byte local_aa;
  byte local_a9;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [68];
  
  uVar3 = DAT_004cc6cc;
  uVar2 = DAT_004cc6c8;
  iVar4 = FUN_004cdc64(param_1,&DAT_004cc158);
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + 1);
    cVar8 = cVar1 + -0x30;
    FUN_004cdc6c(auStack_68,0,0x40);
    FUN_004cdc6c(auStack_a8,0,0x40);
    FUN_004cbfb2(param_1,auStack_68,auStack_a8);
    uVar5 = FUN_004cbebc(auStack_68);
    uVar6 = (uVar5 & 0xffff) << (uint)(byte)(0xd - cVar8) |
            (int)(uVar5 & 0xffff) >> (uint)(byte)(cVar1 - 0x2d);
    uVar5 = FUN_004cbebc(auStack_a8);
    uVar7 = (uVar5 & 0xffff) << (uint)(byte)(0xf - cVar8) |
            (int)(uVar5 & 0xffff) >> (uint)(byte)(cVar1 - 0x2f);
    uVar5 = FUN_004cbf78(param_1,param_2);
    uVar5 = uVar5 << (uint)(byte)(0x16 - cVar8) | uVar5 >> (uint)(byte)(cVar1 - 0x26);
    bVar9 = cVar1 - 0x30;
    local_b0 = (undefined1)uVar2;
    bStack_af = (byte)(uVar2 >> 8);
    bStack_ae = (byte)(uVar2 >> 0x10);
    bStack_ad = (byte)(uVar2 >> 0x18);
    local_ac = (undefined1)uVar3;
    local_ab = (byte)(uVar3 >> 8);
    local_aa = (byte)(uVar3 >> 0x10);
    local_a9 = (byte)(uVar3 >> 0x18);
    if (bVar9 == 1) {
      uVar6 = (uVar2 >> 0x10) * uVar6;
      FUN_004cc006(param_3,(CONCAT11(local_aa,bStack_ad) + uVar7 & 0xffff) * (uVar6 & 0xffff),
                   (uint)local_ab +
                   (uint)bStack_ae * 0x100 + uVar2 * 0x1000000 + (uint)local_a9 * 0x10000 ^ uVar5,
                   (uint)CONCAT11(local_ac,bStack_af) * (uVar6 & 0xffff));
    }
    else if (cVar1 != '0') {
      if (bVar9 == 3) {
        uVar6 = CONCAT11(bStack_ad,bStack_af) * uVar6;
        FUN_004cc006(param_3,(CONCAT11(local_ab,bStack_ae) + uVar7 & 0xffff) * (uVar6 & 0xffff),
                     (uint)bStack_ae +
                     (uint)local_ab * 0x100 +
                     (uint)bStack_ad * 0x1000000 + (uint)bStack_ae * 0x10000 ^ uVar5,
                     (uint)CONCAT11(local_ab,bStack_ae) * (uVar6 & 0xffff));
      }
      else if (bVar9 < 3) {
        uVar6 = CONCAT11(local_aa,bStack_ad) * uVar6;
        FUN_004cc006(param_3,(CONCAT11(local_ab,bStack_ae) + uVar7 & 0xffff) * (uVar6 & 0xffff),
                     (uint)local_ab +
                     (uint)local_a9 * 0x100 + (uint)local_aa * 0x1000000 + (uint)bStack_ad * 0x10000
                     ^ uVar5,(uint)CONCAT11(bStack_ad,bStack_af) * (uVar6 & 0xffff));
      }
      else if (bVar9 == 5) {
        uVar6 = CONCAT11(local_ab,local_b0) * uVar6;
        FUN_004cc006(param_3,(CONCAT11(bStack_ae,bStack_ad) + uVar7 & 0xffff) * (uVar6 & 0xffff),
                     (uint)bStack_ad +
                     (uint)bStack_af * 0x100 +
                     (uint)local_aa * 0x1000000 + (uint)bStack_ad * 0x10000 ^ uVar5,
                     (uint)CONCAT11(local_b0,local_ab) * (uVar6 & 0xffff));
      }
      else if (bVar9 < 5) {
        uVar6 = CONCAT11(local_ac,bStack_ae) * uVar6;
        FUN_004cc006(param_3,(CONCAT11(bStack_ad,local_a9) + uVar7 & 0xffff) * (uVar6 & 0xffff),
                     (uint)bStack_ad +
                     (uint)bStack_ae * 0x100 + (uint)local_aa * 0x1000000 + (uVar3 & 0xff) * 0x10000
                     ^ uVar5,(uVar3 >> 8 & 0xffff) * (uVar6 & 0xffff));
      }
      else if (bVar9 == 7) {
        uVar6 = CONCAT11(local_ac,bStack_af) * uVar6;
        FUN_004cc006(param_3,(CONCAT11(local_ab,bStack_ad) + uVar7 & 0xffff) * (uVar6 & 0xffff),
                     (uint)bStack_ae +
                     (uint)local_aa * 0x100 + uVar2 * 0x1000000 + (uint)bStack_ad * 0x10000 ^ uVar5,
                     (uint)CONCAT11(local_a9,bStack_ad) * (uVar6 & 0xffff));
      }
      else if (bVar9 < 7) {
        uVar6 = CONCAT11(local_a9,bStack_ae) * uVar6;
        FUN_004cc006(param_3,(CONCAT11(bStack_ad,local_ac) + uVar7 & 0xffff) * (uVar6 & 0xffff),
                     (uint)bStack_ad +
                     (uint)local_ab * 0x100 + (uint)bStack_ae * 0x1000000 + (uVar3 & 0xff) * 0x10000
                     ^ uVar5,(uint)CONCAT11(bStack_ad,local_aa) * (uVar6 & 0xffff));
      }
      else if (bVar9 == 9) {
        uVar6 = CONCAT11(local_a9,bStack_af) * uVar6;
        FUN_004cc006(param_3,(CONCAT11(local_b0,bStack_ad) + uVar7 & 0xffff) * (uVar6 & 0xffff),
                     (uint)local_ab +
                     (uint)bStack_ad * 0x100 + (uint)local_a9 * 0x1000000 + (uVar3 & 0xff) * 0x10000
                     ^ uVar5,(uint)CONCAT11(bStack_ad,local_b0) * (uVar6 & 0xffff));
      }
      else if (bVar9 < 9) {
        uVar6 = CONCAT11(local_aa,local_ac) * uVar6;
        FUN_004cc006(param_3,(CONCAT11(bStack_ad,local_ac) + uVar7 & 0xffff) * (uVar6 & 0xffff),
                     (uint)bStack_ae +
                     (uVar3 & 0xff) * 0x100 + (uint)local_ab * 0x1000000 + (uint)bStack_af * 0x10000
                     ^ uVar5,(uVar2 & 0xffff) * (uVar6 & 0xffff));
      }
    }
  }
  return;
}

