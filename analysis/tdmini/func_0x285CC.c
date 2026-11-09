// FUN_080285cc @ 080285cc

void FUN_080285cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  undefined1 local_c0;
  byte bStack_bf;
  undefined2 uStack_be;
  undefined1 local_bc;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  undefined4 local_28;
  
  uVar8 = *DAT_08028ca4;
  uVar9 = DAT_08028ca4[1];
  local_28 = param_2;
  iVar6 = FUN_080299fc(param_1,&DAT_080286e0);
  if (iVar6 != 0) {
    cVar1 = *(char *)(iVar6 + 1);
    cVar5 = cVar1 + -0x30;
    FUN_0801fb74(auStack_68,0x40,0);
    FUN_0801fb74(auStack_a8,0x40,0);
    FUN_0802852c(param_1,auStack_68,auStack_a8);
    uVar7 = FUN_08028434(auStack_68);
    uVar2 = (ushort)((uVar7 & 0xffff) << (uint)(byte)(0xd - cVar5)) |
            (ushort)((int)(uVar7 & 0xffff) >> (uint)(byte)(cVar1 - 0x2d));
    uVar7 = FUN_08028434(auStack_a8);
    uVar11 = (uVar7 & 0xffff) << (uint)(byte)(0xf - cVar5) |
             (int)(uVar7 & 0xffff) >> (uint)(byte)(cVar1 - 0x2f);
    uVar7 = FUN_080284ec(param_1,local_28);
    uVar7 = uVar7 << (uint)(byte)(0x16 - cVar5) | uVar7 >> (uint)(byte)(cVar1 - 0x26);
    bVar12 = cVar1 - 0x30;
    local_c0 = (undefined1)uVar8;
    bStack_bf = (byte)(uVar8 >> 8);
    uStack_be._0_1_ = (byte)(uVar8 >> 0x10);
    bVar3 = (byte)uStack_be;
    uStack_be._1_1_ = (byte)(uVar8 >> 0x18);
    bVar4 = uStack_be._1_1_;
    local_bc = (undefined1)uVar9;
    local_bb = (byte)(uVar9 >> 8);
    local_ba = (byte)(uVar9 >> 0x10);
    local_b9 = (byte)(uVar9 >> 0x18);
    if (bVar12 == 1) {
      uStack_be = (short)(uVar8 >> 0x10);
      FUN_08028580(param_3,((int)(int3)(uint3)CONCAT11(local_ba,bVar4) + uVar11 & 0xffff) *
                           ((int)(short)uVar2 * (int)uStack_be & 0xffffU),
                   (uint)bVar3 * 0x100 + uVar8 * 0x1000000 + (uint)local_b9 * 0x10000 +
                   (uint)local_bb ^ uVar7,
                   (uint)CONCAT11(local_bc,bStack_bf) *
                   ((int)(short)uVar2 * (int)uStack_be & 0xffffU));
    }
    else if (cVar1 != '0') {
      if (bVar12 == 3) {
        uVar8 = (int)(short)uVar2 * (int)CONCAT11(uStack_be._1_1_,bStack_bf);
        FUN_08028580(param_3,((int)(int3)(uint3)CONCAT11(local_bb,(byte)uStack_be) + uVar11 & 0xffff
                             ) * (uVar8 & 0xffff),
                     (uint)local_bb * 0x100 +
                     (uint)uStack_be._1_1_ * 0x1000000 + (uint)(byte)uStack_be * 0x10000 +
                     (uint)(byte)uStack_be ^ uVar7,
                     (uint)CONCAT11(local_bb,(byte)uStack_be) * (uVar8 & 0xffff));
      }
      else if (bVar12 < 3) {
        uVar8 = (int)(short)uVar2 * (int)CONCAT11(local_ba,uStack_be._1_1_);
        FUN_08028580(param_3,((int)(int3)(uint3)CONCAT11(local_bb,(byte)uStack_be) + uVar11 & 0xffff
                             ) * (uVar8 & 0xffff),
                     (uint)local_b9 * 0x100 +
                     (uint)local_ba * 0x1000000 + (uint)uStack_be._1_1_ * 0x10000 + (uint)local_bb ^
                     uVar7,(uint)CONCAT11(uStack_be._1_1_,bStack_bf) * (uVar8 & 0xffff));
      }
      else if (bVar12 == 5) {
        uVar8 = (int)(short)uVar2 * (int)CONCAT11(local_bb,local_c0);
        FUN_08028580(param_3,((int)(int3)(uint3)CONCAT11((byte)uStack_be,uStack_be._1_1_) + uVar11 &
                             0xffff) * (uVar8 & 0xffff),
                     (uint)bStack_bf * 0x100 +
                     (uint)local_ba * 0x1000000 + (uint)uStack_be._1_1_ * 0x10000 +
                     (uint)uStack_be._1_1_ ^ uVar7,
                     (uint)CONCAT11(local_c0,local_bb) * (uVar8 & 0xffff));
      }
      else if (bVar12 < 5) {
        uVar8 = (int)(short)uVar2 * (int)CONCAT11(local_bc,(byte)uStack_be);
        FUN_08028580(param_3,((int)(int3)(uint3)CONCAT11(uStack_be._1_1_,local_b9) + uVar11 & 0xffff
                             ) * (uVar8 & 0xffff),
                     (uint)(byte)uStack_be * 0x100 +
                     (uint)local_ba * 0x1000000 + (uVar9 & 0xff) * 0x10000 + (uint)uStack_be._1_1_ ^
                     uVar7,(uVar9 >> 8 & 0xffff) * (uVar8 & 0xffff));
      }
      else if (bVar12 == 7) {
        uVar9 = (int)(short)uVar2 * (int)CONCAT11(local_bc,bStack_bf);
        FUN_08028580(param_3,((int)(int3)(uint3)CONCAT11(local_bb,uStack_be._1_1_) + uVar11 & 0xffff
                             ) * (uVar9 & 0xffff),
                     (uint)local_ba * 0x100 + uVar8 * 0x1000000 + (uint)uStack_be._1_1_ * 0x10000 +
                     (uint)(byte)uStack_be ^ uVar7,
                     (uint)CONCAT11(local_b9,uStack_be._1_1_) * (uVar9 & 0xffff));
      }
      else if (bVar12 < 7) {
        uVar8 = (int)(short)uVar2 * (int)CONCAT11(local_b9,(byte)uStack_be);
        FUN_08028580(param_3,((int)(int3)(uint3)CONCAT11(uStack_be._1_1_,local_bc) + uVar11 & 0xffff
                             ) * (uVar8 & 0xffff),
                     (uint)local_bb * 0x100 +
                     (uint)(byte)uStack_be * 0x1000000 + (uVar9 & 0xff) * 0x10000 +
                     (uint)uStack_be._1_1_ ^ uVar7,
                     (uint)CONCAT11(uStack_be._1_1_,local_ba) * (uVar8 & 0xffff));
      }
      else if (bVar12 == 9) {
        uVar8 = (int)(short)uVar2 * (int)CONCAT11(local_b9,bStack_bf);
        FUN_08028580(param_3,((int)(int3)(uint3)CONCAT11(local_c0,uStack_be._1_1_) + uVar11 & 0xffff
                             ) * (uVar8 & 0xffff),
                     (uint)uStack_be._1_1_ * 0x100 +
                     (uint)local_b9 * 0x1000000 + (uVar9 & 0xff) * 0x10000 + (uint)local_bb ^ uVar7,
                     (uint)CONCAT11(uStack_be._1_1_,local_c0) * (uVar8 & 0xffff));
      }
      else if (bVar12 < 9) {
        uVar10 = (int)(short)uVar2 * (int)CONCAT11(local_ba,local_bc);
        FUN_08028580(param_3,((int)(int3)(uint3)CONCAT11(uStack_be._1_1_,local_bc) + uVar11 & 0xffff
                             ) * (uVar10 & 0xffff),
                     (uVar9 & 0xff) * 0x100 + (uint)local_bb * 0x1000000 + (uint)bStack_bf * 0x10000
                     + (uint)(byte)uStack_be ^ uVar7,(uVar8 & 0xffff) * (uVar10 & 0xffff));
      }
    }
  }
  return;
}

