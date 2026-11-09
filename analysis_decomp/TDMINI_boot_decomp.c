// Ghidra decompilation dump: bootloader.bin
// range: 08000000 .. 0800ffff

//==== FUNC FUN_0800016c @ 0800016c ====

uint * FUN_0800016c(int param_1,uint param_2,uint param_3)

{
  undefined uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (param_3 & 0xff) << 8;
  uVar5 = param_3 & 0xff | uVar6;
  uVar6 = uVar5 | (param_3 & 0xffff00ff | uVar6) << 0x10;
  puVar4 = (uint *)(param_1 + param_2);
  uVar7 = (uint)puVar4 & 3;
  uVar1 = (undefined)param_3;
  uVar2 = (undefined2)uVar5;
  if (uVar7 != 0) {
    uVar5 = param_2 - uVar7;
    if (param_2 < uVar7) {
      if (uVar5 + uVar7 != 0) {
        puVar4 = (uint *)((int)puVar4 + -1);
        *(undefined *)puVar4 = uVar1;
      }
      if ((uVar5 + uVar7 & 2) != 0) {
        puVar4 = (uint *)((int)puVar4 + -1);
        *(undefined *)puVar4 = uVar1;
      }
      return puVar4;
    }
    uVar3 = (uint)puVar4 & 2;
    if ((int)(uVar7 << 0x1f) < 0) {
      puVar4 = (uint *)((int)puVar4 + -1);
      *(undefined *)puVar4 = uVar1;
    }
    param_2 = uVar5;
    if (uVar3 != 0) {
      puVar4 = (uint *)((int)puVar4 + -2);
      *(undefined2 *)puVar4 = uVar2;
    }
  }
  do {
    uVar5 = param_2;
    param_2 = uVar5 - 0x10;
    if (0xf < uVar5) {
      puVar4[-1] = uVar6;
      puVar4[-2] = uVar6;
      puVar4[-3] = uVar6;
      puVar4 = puVar4 + -4;
      *puVar4 = uVar6;
    }
  } while (0xf < uVar5 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    puVar4[-1] = uVar6;
    puVar4 = puVar4 + -2;
    *puVar4 = uVar6;
  }
  if ((int)(uVar5 * 0x20000000) < 0) {
    puVar4 = puVar4 + -1;
    *puVar4 = uVar6;
  }
  if ((uVar5 * 0x20000000 & 0x40000000) != 0) {
    puVar4 = (uint *)((int)puVar4 + -2);
    *(undefined2 *)puVar4 = uVar2;
  }
  if ((int)(uVar5 * -0x80000000) < 0) {
    puVar4 = (uint *)((int)puVar4 + -1);
    *(undefined *)puVar4 = uVar1;
  }
  return puVar4;
}



//==== FUNC FUN_08000174 @ 08000174 ====

undefined4 * FUN_08000174(int param_1,uint param_2,undefined4 param_3)

{
  undefined uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = (undefined4 *)(param_1 + param_2);
  uVar5 = (uint)puVar3 & 3;
  uVar1 = (undefined)param_3;
  if (uVar5 != 0) {
    uVar4 = param_2 - uVar5;
    if (param_2 < uVar5) {
      if (uVar4 + uVar5 != 0) {
        puVar3 = (undefined4 *)((int)puVar3 + -1);
        *(undefined *)puVar3 = uVar1;
      }
      if ((uVar4 + uVar5 & 2) != 0) {
        puVar3 = (undefined4 *)((int)puVar3 + -1);
        *(undefined *)puVar3 = uVar1;
      }
      return puVar3;
    }
    uVar2 = (uint)puVar3 & 2;
    if ((int)(uVar5 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)puVar3 + -1);
      *(undefined *)puVar3 = uVar1;
    }
    param_2 = uVar4;
    if (uVar2 != 0) {
      puVar3 = (undefined4 *)((int)puVar3 + -2);
      *(short *)puVar3 = (short)param_3;
    }
  }
  do {
    uVar5 = param_2;
    param_2 = uVar5 - 0x10;
    if (0xf < uVar5) {
      puVar3[-1] = param_3;
      puVar3[-2] = param_3;
      puVar3[-3] = param_3;
      puVar3 = puVar3 + -4;
      *puVar3 = param_3;
    }
  } while (0xf < uVar5 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    puVar3[-1] = param_3;
    puVar3 = puVar3 + -2;
    *puVar3 = param_3;
  }
  if ((int)(uVar5 * 0x20000000) < 0) {
    puVar3 = puVar3 + -1;
    *puVar3 = param_3;
  }
  if ((uVar5 * 0x20000000 & 0x40000000) != 0) {
    puVar3 = (undefined4 *)((int)puVar3 + -2);
    *(short *)puVar3 = (short)param_3;
  }
  if ((int)(uVar5 * -0x80000000) < 0) {
    puVar3 = (undefined4 *)((int)puVar3 + -1);
    *(undefined *)puVar3 = uVar1;
  }
  return puVar3;
}



//==== FUNC FUN_080001d2 @ 080001d2 ====

void FUN_080001d2(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (*(code *)param_1[5])(param_1[2]);
  }
  *param_1 = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



//==== FUNC FUN_080001ee @ 080001ee ====

bool FUN_080001ee(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  FUN_08000368(param_1 + 0x32,param_1 + 0xc,0x98);
  *param_1 = 1;
  bVar1 = *(byte *)((int)param_1 + 0xc9);
  if (bVar1 == 1) {
    *(undefined *)(param_1 + 1) = 1;
    goto LAB_08000256;
  }
  if (bVar1 != 0) {
    if (bVar1 == 3) {
      *(undefined *)(param_1 + 1) = 3;
      goto LAB_08000256;
    }
    if (bVar1 < 3) {
      *(undefined *)(param_1 + 1) = 2;
      goto LAB_08000256;
    }
    if (bVar1 == 5) {
      *(undefined *)(param_1 + 1) = 5;
      goto LAB_08000256;
    }
    if (bVar1 < 5) {
      *(undefined *)(param_1 + 1) = 4;
      goto LAB_08000256;
    }
    if (bVar1 == 6) {
      *(undefined *)(param_1 + 1) = 6;
      goto LAB_08000256;
    }
  }
  *(undefined *)(param_1 + 1) = 1;
LAB_08000256:
  *(undefined *)((int)param_1 + 5) = 1;
  *(undefined *)((int)param_1 + 6) = 0;
  *(undefined *)((int)param_1 + 7) = 8;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  iVar2 = (*(code *)param_1[4])(param_1[2]);
  if (iVar2 != 0) {
    *(undefined *)((int)param_1 + 5) = 0;
  }
  else {
    *(undefined *)((int)param_1 + 5) = 1;
  }
  return iVar2 == 0;
}



//==== FUNC FUN_08000294 @ 08000294 ====

undefined8 FUN_08000294(int param_1,char param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_3 == 0) || (param_4 < 1)) || (*(char *)(param_1 + 5) == '\0')) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == '\0') {
    *(int *)(param_1 + 0x164) = param_4;
    *(int *)(param_1 + 0x160) = param_3;
    iVar2 = (**(code **)(param_1 + 0x18))
                      (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x160),
                       *(undefined4 *)(param_1 + 0x164));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x164);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(param_4,uVar1);
}



//==== FUNC FUN_080002e8 @ 080002e8 ====

undefined8 FUN_080002e8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18 = 0;
  if (((param_3 == 0) || (param_4 < 1)) || (*(char *)(param_1 + 5) == '\0')) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x168) = param_3;
    local_18 = 0x800;
    iVar2 = (**(code **)(param_1 + 0x1c))
                      (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x168),&local_18);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0xca) == '\x02') {
        uVar1 = 0xffffffff;
      }
      else {
        *(undefined4 *)(param_1 + 0x16c) = local_18;
        uVar1 = *(undefined4 *)(param_1 + 0x16c);
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return CONCAT44(local_18,uVar1);
}



//==== FUNC FUN_08000348 @ 08000348 ====

void FUN_08000348(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  
  if (param_3 != 0) {
    uVar5 = (uint)param_2 & 3;
    while (uVar5 != 0) {
      param_3 = param_3 - 1;
      *(undefined *)param_1 = *(undefined *)param_2;
      if (param_3 == 0) {
        return;
      }
      uVar5 = (uint)(undefined4 *)((int)param_2 + 1) & 3;
      param_2 = (undefined4 *)((int)param_2 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    if (((uint)param_1 & 3) == 0) {
      while (uVar5 = param_3 - 0x10, 0xf < param_3) {
        uVar6 = *param_2;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        param_2 = param_2 + 4;
        *param_1 = uVar6;
        param_1[1] = uVar7;
        param_1[2] = uVar8;
        param_1[3] = uVar9;
        param_1 = param_1 + 4;
        param_3 = uVar5;
      }
      bVar10 = (int)(param_3 << 0x1d) < 0;
      if ((uVar5 & 8) != 0) {
        uVar6 = *param_2;
        uVar7 = param_2[1];
        param_2 = param_2 + 2;
        *param_1 = uVar6;
        param_1[1] = uVar7;
        param_1 = param_1 + 2;
      }
    }
    else {
      while (uVar5 = param_3 - 8, 7 < param_3) {
        uVar6 = *param_2;
        uVar7 = param_2[1];
        param_2 = param_2 + 2;
        puVar3 = param_1 + 1;
        *param_1 = uVar6;
        param_1 = param_1 + 2;
        *puVar3 = uVar7;
        param_3 = uVar5;
      }
      bVar10 = (int)(param_3 << 0x1d) < 0;
    }
    puVar1 = param_1;
    puVar3 = param_2;
    if (bVar10) {
      puVar3 = param_2 + 1;
      puVar1 = param_1 + 1;
      *param_1 = *param_2;
    }
    puVar2 = puVar1;
    puVar4 = puVar3;
    if ((uVar5 & 2) != 0) {
      puVar4 = (undefined4 *)((int)puVar3 + 2);
      puVar2 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
    }
    if ((int)(uVar5 << 0x1f) < 0) {
      *(undefined *)puVar2 = *(undefined *)puVar4;
    }
  }
  return;
}



//==== FUNC FUN_08000368 @ 08000368 ====

void FUN_08000368(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  
  uVar5 = param_3 - 0x10;
  if (0xf < param_3) {
    do {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      param_2 = param_2 + 4;
      bVar10 = 0xf < uVar5;
      uVar5 = uVar5 - 0x10;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      param_1 = param_1 + 4;
    } while (bVar10);
  }
  if ((uVar5 & 8) != 0) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar6;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  puVar1 = param_1;
  puVar3 = param_2;
  if ((int)(uVar5 << 0x1d) < 0) {
    puVar3 = param_2 + 1;
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  puVar2 = puVar1;
  puVar4 = puVar3;
  if ((uVar5 & 2) != 0) {
    puVar4 = (undefined4 *)((int)puVar3 + 2);
    puVar2 = (undefined4 *)((int)puVar1 + 2);
    *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
  }
  if ((int)(uVar5 << 0x1f) < 0) {
    *(undefined *)puVar2 = *(undefined *)puVar4;
  }
  return;
}



//==== FUNC FUN_080003c0 @ 080003c0 ====

char * FUN_080003c0(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != param_2))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}



//==== FUNC FUN_080003d8 @ 080003d8 ====

int FUN_080003d8(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    puVar2 = (uint *)((int)puVar3 + 1);
    if (*(char *)puVar3 == '\0') goto LAB_0800040a;
    puVar3 = puVar2;
    uVar4 = (uint)puVar2 & 3;
  }
  uVar4 = *puVar3;
  while ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) == 0) {
    puVar3 = puVar3 + 1;
    uVar4 = *puVar3;
  }
  cVar1 = *(char *)puVar3;
  puVar2 = puVar3;
  while (puVar2 = (uint *)((int)puVar2 + 1), cVar1 != '\0') {
    cVar1 = *(char *)puVar2;
  }
LAB_0800040a:
  return (int)puVar2 - (int)((int)param_1 + 1);
}



//==== FUNC FUN_08000410 @ 08000410 ====

void FUN_08000410(uint param_1,char param_2,byte param_3)

{
  *DAT_080004e4 = *DAT_080004e4 & ~param_1;
  *DAT_080004e8 = *DAT_080004e8 & ~param_1;
  *DAT_080004ec = *DAT_080004ec & ~param_1;
  *DAT_080004f0 = *DAT_080004f0 & ~param_1;
  if (param_2 == '\0') {
    *DAT_080004e4 = *DAT_080004e4 | param_1;
  }
  else if (param_2 == '\x01') {
    *DAT_080004e8 = *DAT_080004e8 | param_1;
  }
  if (param_3 == 0) {
    *DAT_080004ec = *DAT_080004ec | param_1;
    *DAT_080004f0 = *DAT_080004f0 & ~param_1;
  }
  else if (param_3 == 2) {
    *DAT_080004ec = *DAT_080004ec | param_1;
    *DAT_080004f0 = param_1 | *DAT_080004f0;
  }
  else if (param_3 < 2) {
    *DAT_080004ec = *DAT_080004ec & ~param_1;
    *DAT_080004f0 = param_1 | *DAT_080004f0;
  }
  return;
}



//==== FUNC FUN_080004b4 @ 080004b4 ====

void FUN_080004b4(uint param_1)

{
  *DAT_080004e4 = param_1 | *DAT_080004e4;
  return;
}



//==== FUNC FUN_080004c0 @ 080004c0 ====

undefined4 FUN_080004c0(uint param_1)

{
  undefined4 uVar1;
  
  if (((*DAT_080004f4 & param_1) == 0) || ((param_1 & *DAT_080004e4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_080004dc @ 080004dc ====

void FUN_080004dc(undefined4 param_1)

{
  *DAT_080004f4 = param_1;
  return;
}



//==== FUNC FUN_080004f8 @ 080004f8 ====

undefined4 FUN_080004f8(void)

{
  return 1;
}



//==== FUNC FUN_0800050c @ 0800050c ====

undefined8 FUN_0800050c(int param_1,int param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  byte *local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  local_18 = param_3;
  for (iVar1 = 0; iVar1 < (int)(uint)(param_3[1] >> 3); iVar1 = iVar1 + 1) {
    *(undefined *)((int)&local_18 + iVar1) = 0;
  }
  for (uVar2 = 0; (int)uVar2 < (int)(uint)param_3[1]; uVar2 = uVar2 + 1) {
    *(byte *)((int)&local_18 + ((int)uVar2 >> 3)) =
         *(byte *)((int)&local_18 + ((int)uVar2 >> 3)) |
         (byte)((int)(((uint)*(byte *)(param_1 +
                                      ((int)(*(byte *)(*(int *)(DAT_08001034 + (uint)*param_3 * 4) +
                                                      uVar2) - 1) >> 3)) &
                      0x80 >> (*(char *)(*(int *)(DAT_08001034 + (uint)*param_3 * 4) + uVar2) - 1U &
                              7)) <<
                     (*(char *)(*(int *)(DAT_08001034 + (uint)*param_3 * 4) + uVar2) - 1U & 7)) >>
               (uVar2 & 7));
  }
  for (iVar1 = 0; iVar1 < (int)(uint)(param_3[1] >> 3); iVar1 = iVar1 + 1) {
    *(undefined *)(param_2 + iVar1) = *(undefined *)((int)&local_18 + iVar1);
  }
  return CONCAT44(uStack_14,local_18);
}



//==== FUNC FUN_080005a8 @ 080005a8 ====

void FUN_080005a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
    *(undefined *)(param_2 + iVar3) = 0;
  }
  iVar6 = 0;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    iVar5 = 0;
    iVar2 = 0;
    for (uVar4 = 5; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
      if (((uint)*(byte *)(param_1 +
                          ((int)(iVar5 + (uint)*(byte *)(DAT_08001038 + iVar6) + -1) >> 3)) &
          0x80 >> ((iVar5 + (uint)*(byte *)(DAT_08001038 + iVar6)) - 1 & 7)) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 1 << (uVar4 & 0xff);
      }
      iVar2 = iVar1 + iVar2;
      if ((int)uVar4 < 4) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar6 = iVar6 + 1;
      }
    }
    iVar5 = iVar6 + 1;
    for (uVar4 = 0; (int)uVar4 < 4; uVar4 = uVar4 + 1) {
      *(byte *)(param_2 + ((int)(uVar4 + *(byte *)(DAT_08001038 + iVar5) + -1) >> 3)) =
           (byte)((int)((8 >> (uVar4 & 0xff) &
                        (uint)*(byte *)(*(int *)(DAT_0800103c + iVar3 * 4) + iVar2)) <<
                       (uVar4 + 4 & 0xff)) >> ((uVar4 + *(byte *)(DAT_08001038 + iVar5)) - 1 & 7)) |
           *(byte *)(param_2 + ((int)(uVar4 + *(byte *)(DAT_08001038 + iVar5) + -1) >> 3));
    }
    iVar6 = iVar6 + 2;
  }
  return;
}



//==== FUNC FUN_0800069c @ 0800069c ====

void FUN_0800069c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined auStack_28 [4];
  byte local_24 [8];
  byte local_1c [12];
  
  FUN_0800050c(param_2,local_1c,DAT_08001040);
  FUN_0800050c(param_1,local_24,DAT_08001044);
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    local_24[iVar1] = local_24[iVar1] ^ local_1c[iVar1];
  }
  FUN_080005a8(local_24,auStack_28);
  FUN_0800050c(auStack_28,param_1,DAT_08001048);
  return;
}



//==== FUNC FUN_080006ee @ 080006ee ====

void FUN_080006ee(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  undefined auStack_1c [12];
  
  FUN_0800050c(param_1,&local_28,DAT_0800104c);
  FUN_0800050c(param_2,auStack_1c,DAT_08001050);
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001054);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001054);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001054);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001058);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_24 = local_24 ^ local_28;
  local_23 = local_23 ^ local_27;
  local_22 = local_22 ^ local_26;
  local_21 = local_21 ^ local_25;
  local_28 = local_20;
  local_27 = local_1f;
  local_26 = local_1e;
  local_25 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_08001054);
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  FUN_0800069c(&local_24,auStack_1c);
  local_28 = local_24 ^ local_28;
  local_27 = local_23 ^ local_27;
  local_26 = local_22 ^ local_26;
  local_25 = local_21 ^ local_25;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800050c(&local_28,param_3,DAT_080019ac);
  return;
}



//==== FUNC FUN_0800105c @ 0800105c ====

void FUN_0800105c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  undefined auStack_1c [12];
  
  FUN_0800050c(param_1,&local_28,DAT_080019b0);
  bVar4 = local_21;
  bVar3 = local_22;
  bVar2 = local_23;
  bVar1 = local_24;
  local_20 = local_24;
  local_1f = local_23;
  local_1e = local_22;
  local_1d = local_21;
  local_24 = local_28;
  local_23 = local_27;
  local_22 = local_26;
  local_21 = local_25;
  local_28 = bVar1;
  local_27 = bVar2;
  local_26 = bVar3;
  local_25 = bVar4;
  FUN_0800050c(param_2,auStack_1c,DAT_080019e4);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019e8);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019e8);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019ec);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019e8);
  local_20 = local_28;
  local_1f = local_27;
  local_1e = local_26;
  local_1d = local_25;
  FUN_0800069c(&local_28,auStack_1c);
  local_28 = local_28 ^ local_24;
  local_27 = local_27 ^ local_23;
  local_26 = local_26 ^ local_22;
  local_25 = local_25 ^ local_21;
  local_24 = local_20;
  local_23 = local_1f;
  local_22 = local_1e;
  local_21 = local_1d;
  FUN_0800050c(auStack_1c,auStack_1c,DAT_080019e8);
  FUN_0800050c(&local_28,param_3,DAT_080019ac);
  return;
}



//==== FUNC FUN_080019b4 @ 080019b4 ====

void FUN_080019b4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined auStack_30 [16];
  undefined auStack_20 [16];
  
  FUN_080006ee(param_1,param_2,auStack_20);
  FUN_0800105c(auStack_20,param_2 + 8,auStack_30);
  FUN_080006ee(auStack_30,param_2,param_3);
  return;
}



//==== FUNC FUN_08002d78 @ 08002d78 ====

short FUN_08002d78(byte *param_1,short param_2)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  sVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    sVar2 = sVar2 + (ushort)*param_1;
    sVar1 = sVar2 + sVar1;
    param_1 = param_1 + 1;
  }
  return sVar1;
}



//==== FUNC FUN_08002d9a @ 08002d9a ====

undefined4 FUN_08002d9a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0800016c(param_1 + 0x36,0x800,0);
  FUN_0800016c(param_1,0x1e,0);
  FUN_0800016c(param_1 + 0x1e,0x18,0);
  *(undefined2 *)(param_1 + 0x1036) = 0;
  *(undefined4 *)(param_1 + 0x1038) = 0;
  *(int *)(param_1 + 0x1a) = param_1 + 0x36;
  *(int *)(param_1 + 0x32) = param_1 + 0x36;
  *(int *)(param_1 + 0x103c) = *(int *)(param_1 + 0x1a) + 7;
  *(int *)(param_1 + 0x1040) = *(int *)(param_1 + 0x32) + 7;
  *(int *)(param_1 + 0x16) = *(int *)(param_1 + 0x103c) + 0x10;
  *(undefined *)(param_1 + 2) = 0;
  *(undefined *)(param_1 + 3) = 0;
  *(char *)(param_1 + 4) = *DAT_08002e3c;
  *DAT_08002e3c = *DAT_08002e3c + '\x01';
  return param_4;
}



//==== FUNC FUN_08002e40 @ 08002e40 ====

undefined8 FUN_08002e40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(byte *)(param_1 + 0x110d) - 1;
  if ((uVar1 < 3) || (*(byte *)(param_1 + 0x110d) == 5)) {
    uVar2 = FUN_08000294(param_1 + 0x1044,0,param_2,param_3);
  }
  else if (uVar1 == 5) {
    uVar2 = FUN_08000294(param_1 + 0x1044,2,param_2,param_3);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(param_4,uVar2);
}



//==== FUNC FUN_08002e92 @ 08002e92 ====

undefined4 FUN_08002e92(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == -0x1044) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(byte *)(param_1 + 0x110d) - 1;
    if ((uVar2 < 3) || (*(byte *)(param_1 + 0x110d) == 5)) {
      uVar1 = FUN_080002e8(param_1 + 0x1044,0,param_2,0x800);
    }
    else if (uVar2 == 5) {
      uVar1 = FUN_080002e8(param_1 + 0x1044,2,param_2,0x800);
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



//==== FUNC FUN_08002ef4 @ 08002ef4 ====

undefined8 FUN_08002ef4(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_20;
  
  local_20 = 0;
  if (**(char **)(param_1 + 0x32) == -0x56) {
    FUN_08000348(param_1 + 0x1e,*(int *)(param_1 + 0x32) + 1,6);
    uVar7 = (uint)*(ushort *)(param_1 + 0x1e) << 8;
    uVar8 = (uint)(*(ushort *)(param_1 + 0x1e) >> 8);
    if (*(char *)(*(int *)(param_1 + 0x32) + 3) == *(char *)(*(int *)(param_1 + 0x1a) + 3)) {
      if (*(char *)(*(int *)(param_1 + 0x32) + 4) == *(char *)(*(int *)(param_1 + 0x1a) + 4)) {
        if (*(char *)(*(int *)(param_1 + 0x32) + 6) == *(char *)(*(int *)(param_1 + 0x1a) + 6)) {
          if (*(char *)(*(int *)(param_1 + 0x32) + 5) == *(char *)(*(int *)(param_1 + 0x1a) + 5)) {
            iVar4 = *(int *)(param_1 + 0x32);
            iVar5 = iVar4 + 1;
            uVar6 = (uVar7 | uVar8) + 6;
            uVar1 = CONCAT11(*(undefined *)(iVar5 + (uVar6 & 0xffff)),
                             *(undefined *)(iVar5 + (uVar6 & 0xffff) + 1));
            local_20 = (uint)uVar1 << 0x10;
            uVar2 = FUN_08002d78(iVar5,uVar6 & 0xffff);
            if (uVar1 == uVar2) {
              if (*(char *)(iVar5 + ((uVar6 & 0xffff) + 2 & 0xffff)) == 'U') {
                iVar4 = iVar4 + 7;
                uVar8 = uVar7 & 0xffff | uVar8;
                local_20 = CONCAT31(CONCAT21(uVar1,*(undefined *)(iVar4 + uVar8 + -2)),
                                    *(undefined *)(iVar4 + uVar8 + -1));
                *(undefined2 *)(param_1 + 0x24) = (undefined2)local_20;
                *(uint *)(param_1 + 0x26) = uVar8 - 2;
                *(int *)(param_1 + 0x1040) = iVar4;
                *(uint *)(param_1 + 0x1038) = uVar8 - 2;
                uVar3 = 0;
              }
              else {
                uVar3 = 0xfffc;
              }
            }
            else {
              uVar3 = 0xfffc;
            }
          }
          else {
            uVar3 = 0xfffc;
          }
        }
        else {
          uVar3 = 0xfffc;
        }
      }
      else {
        uVar3 = 0xfffc;
      }
    }
    else {
      uVar3 = 0xfffc;
    }
  }
  else {
    uVar3 = 0xfffc;
  }
  return CONCAT44(local_20,uVar3);
}



//==== FUNC FUN_0800303e @ 0800303e ====

ulonglong FUN_0800303e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = 0;
  FUN_08000348(*(int *)(param_1 + 0x1a) + 1,param_1,6);
  iVar1 = *(int *)(param_1 + 0x1a);
  puVar2 = (undefined *)(iVar1 + 0xb);
  if (*(int *)(param_1 + 0x12) != 0) {
    if (*(uint *)(param_1 + 0x12) < 0x100) {
      *puVar2 = (char)*(undefined4 *)(param_1 + 0x12);
      uVar3 = 1;
    }
    else {
      *puVar2 = 0;
      *(undefined *)(iVar1 + 0xc) = *(undefined *)(param_1 + 0x13);
      *(undefined *)(iVar1 + 0xd) = *(undefined *)(param_1 + 0x12);
      uVar3 = 3;
    }
    if (puVar2 + uVar3 != *(undefined **)(param_1 + 0x16)) {
      FUN_08000348(puVar2 + uVar3,*(undefined4 *)(param_1 + 0x16),*(undefined4 *)(param_1 + 0x12));
    }
    uVar4 = *(int *)(param_1 + 0x12) + (uint)uVar3;
  }
  if (*(int *)(param_1 + 0xe) != 0) {
    if (*(uint *)(param_1 + 0xe) < 0x100) {
      puVar2[uVar4 & 0xffff] = (char)*(undefined4 *)(param_1 + 0xe);
      uVar4 = (uVar4 & 0xffff) + 1;
    }
    else {
      puVar2[uVar4 & 0xffff] = 0;
      uVar4 = (uVar4 & 0xffff) + 1 & 0xffff;
      puVar2[uVar4] = *(undefined *)(param_1 + 0xf);
      uVar4 = uVar4 + 1 & 0xffff;
      puVar2[uVar4] = *(undefined *)(param_1 + 0xe);
      uVar4 = uVar4 + 1;
    }
  }
  if ((((*(int *)(param_1 + 0x12) == 0) && (*(int *)(param_1 + 0xe) == 0)) &&
      (*(int *)(param_1 + 10) == 0)) && (*(short *)(param_1 + 0x1036) != 0)) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x1036);
  }
  else if (((*(int *)(param_1 + 0x12) == 0) && (*(int *)(param_1 + 0xe) == 0)) &&
          ((*(int *)(param_1 + 10) == 0 && (*(short *)(param_1 + 0x1036) == 0)))) {
    puVar2[uVar4 & 0xffff] = 0;
    *(undefined *)(*(int *)(param_1 + 0x1a) + 7) = *(undefined *)(param_1 + 6);
    *(undefined *)(*(int *)(param_1 + 0x1a) + 8) = *(undefined *)(param_1 + 7);
    *(undefined *)(*(int *)(param_1 + 0x1a) + 9) = *(undefined *)(param_1 + 8);
    *(undefined *)(*(int *)(param_1 + 0x1a) + 10) = *(undefined *)(param_1 + 9);
    uVar4 = (uVar4 & 0xffff) + 5;
  }
  else {
    *(undefined *)(*(int *)(param_1 + 0x1a) + 7) = *(undefined *)(param_1 + 6);
    *(undefined *)(*(int *)(param_1 + 0x1a) + 8) = *(undefined *)(param_1 + 7);
    *(undefined *)(*(int *)(param_1 + 0x1a) + 9) = *(undefined *)(param_1 + 8);
    *(undefined *)(*(int *)(param_1 + 0x1a) + 10) = *(undefined *)(param_1 + 9);
    uVar4 = uVar4 + 4;
  }
  if ((*(int *)(param_1 + 0x12) == 0) && (*(int *)(param_1 + 10) != 0)) {
    uVar4 = *(int *)(param_1 + 10) + uVar4;
  }
  *(ushort *)(*(int *)(param_1 + 0x1a) + 1) = (ushort)(uVar4 << 8) | (ushort)(uVar4 >> 8) & 0xff;
  return CONCAT44(param_4,uVar4 + 6) & 0xffffffff0000ffff;
}



//==== FUNC FUN_080031d0 @ 080031d0 ====

ulonglong FUN_080031d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 2) == '\0') {
    uVar1 = FUN_08002ef4(param_1);
  }
  else if (*(char *)(param_1 + 2) == '\x01') {
    uVar1 = FUN_08002ef4(param_1);
  }
  else {
    uVar1 = 0xfffc;
  }
  return CONCAT44(param_4,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_08003204 @ 08003204 ====

undefined8 FUN_08003204(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_10;
  
  local_10 = param_4 & 0xffff0000;
  if ((*(byte *)(param_1 + 0x1048) - 1 < 3) || (*(byte *)(param_1 + 0x1048) - 5 < 2)) {
    **(undefined **)(param_1 + 0x1a) = 0xaa;
    if (*(char *)(param_1 + 2) == '\0') {
      uVar3 = FUN_0800303e(param_1);
    }
    else {
      if (*(char *)(param_1 + 2) != '\x01') goto LAB_0800329a;
      uVar3 = FUN_0800303e(param_1);
    }
    uVar2 = FUN_08002d78(*(int *)(param_1 + 0x1a) + 1,uVar3 & 0xffff);
    local_10 = CONCAT22((short)(param_4 >> 0x10),uVar2);
    uVar1 = local_10;
    local_10._0_1_ = (undefined)uVar2;
    *(undefined *)(*(int *)(param_1 + 0x1a) + uVar3 + 2) = (undefined)local_10;
    local_10._1_1_ = (undefined)((ushort)uVar2 >> 8);
    *(undefined *)(*(int *)(param_1 + 0x1a) + uVar3 + 1) = local_10._1_1_;
    local_10 = uVar1;
    if ((*(byte *)(param_1 + 0x1048) - 1 < 3) || (*(byte *)(param_1 + 0x1048) - 5 < 2)) {
      *(undefined *)(*(int *)(param_1 + 0x1a) + uVar3 + 3) = 0x55;
      iVar4 = uVar3 + 4;
      goto LAB_080032a0;
    }
  }
LAB_0800329a:
  iVar4 = 0;
LAB_080032a0:
  return CONCAT44(local_10,iVar4);
}



//==== FUNC FUN_080032a2 @ 080032a2 ====

short FUN_080032a2(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = 0;
  iVar2 = FUN_08003204(param_1);
  if (iVar2 == 0) {
    sVar1 = -4;
  }
  else {
    iVar4 = 3;
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      if ((2 < *(byte *)(param_1 + 0x1048) - 1) && (1 < *(byte *)(param_1 + 0x1048) - 5)) {
        return -2;
      }
      iVar3 = FUN_08002e40(param_1,*(undefined4 *)(param_1 + 0x1a),iVar2);
      if (iVar3 < 1) {
        sVar1 = -5;
      }
      else {
        iVar3 = FUN_08002e92(param_1,*(undefined4 *)(param_1 + 0x32));
        if (2 < iVar3) {
          sVar1 = FUN_080031d0(param_1);
          if (sVar1 != 0) {
            return sVar1;
          }
          return *(short *)(param_1 + 0x24);
        }
        sVar1 = -6;
      }
    }
  }
  return sVar1;
}



//==== FUNC FUN_08003342 @ 08003342 ====

ulonglong FUN_08003342(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_08002d9a(param_1);
  **(undefined **)(param_1 + 0x103c) = 0xf0;
  *(undefined *)(*(int *)(param_1 + 0x103c) + 1) = 0xff;
  *(undefined *)(*(int *)(param_1 + 0x103c) + 2) = 0;
  *(undefined *)(*(int *)(param_1 + 0x103c) + 3) = 0;
  *(undefined *)(*(int *)(param_1 + 0x103c) + 4) = 0x20;
  *(undefined2 *)(param_1 + 0x1036) = 5;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  uVar1 = FUN_080032a2(param_1);
  if ((uVar1 & 0xffff) == 0x9000) {
    FUN_0800016c(param_2,0x14,0);
    FUN_08000348(param_2,*(undefined4 *)(param_1 + 0x1040),0x14);
  }
  return CONCAT44(param_4,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_080033fa @ 080033fa ====

undefined2
FUN_080033fa(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined param_5,
            undefined4 param_6,undefined param_7,undefined param_8,undefined param_9,
            undefined4 param_10,byte param_11)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = 0xffff;
  local_2c = param_3;
  local_28 = param_4;
  FUN_08002d9a(param_1);
  *(undefined *)(param_1 + 6) = 0xf0;
  *(undefined *)(param_1 + 7) = 0xf0;
  *(char *)(param_1 + 8) = param_2;
  *(undefined *)(param_1 + 9) = 0;
  if ((((param_2 == '\x03') || (param_2 == '\x05')) || (param_2 == '\x06')) || (param_2 == '\x04'))
  {
    **(undefined **)(param_1 + 0x16) = 0x3f;
    *(undefined *)(*(int *)(param_1 + 0x16) + 1) = 0;
    *(undefined4 *)(param_1 + 0x12) = 2;
    uVar1 = FUN_080032a2(param_1);
  }
  else if (param_2 == '\0') {
    **(undefined **)(param_1 + 0x16) = 0x3f;
    *(undefined *)(*(int *)(param_1 + 0x16) + 1) = 0;
    local_28 = CONCAT22(local_28._2_2_,(ushort)local_28 << 8 | (ushort)local_28 >> 8);
    FUN_08000348(*(int *)(param_1 + 0x16) + 2,&local_28,2);
    *(undefined *)(*(int *)(param_1 + 0x16) + 4) = param_5;
    FUN_08000348(*(int *)(param_1 + 0x16) + 5,param_6,3);
    *(undefined *)(*(int *)(param_1 + 0x16) + 8) = param_7;
    *(undefined *)(*(int *)(param_1 + 0x16) + 9) = param_8;
    *(undefined *)(*(int *)(param_1 + 0x16) + 10) = param_9;
    FUN_08000348(*(int *)(param_1 + 0x16) + 0xb,param_10,param_11);
    *(uint *)(param_1 + 0x12) = param_11 + 0xb & 0xff;
    uVar1 = FUN_080032a2(param_1);
  }
  else if (param_2 == '\x01') {
    local_2c = CONCAT22(local_2c._2_2_,(ushort)local_2c << 8 | (ushort)local_2c >> 8);
    FUN_08000348(*(undefined4 *)(param_1 + 0x16),&local_2c,2);
    local_28 = CONCAT22(local_28._2_2_,(ushort)local_28 << 8 | (ushort)local_28 >> 8);
    FUN_08000348(*(int *)(param_1 + 0x16) + 2,&local_28,2);
    *(undefined *)(*(int *)(param_1 + 0x16) + 4) = param_5;
    FUN_08000348(*(int *)(param_1 + 0x16) + 5,param_6,3);
    *(undefined *)(*(int *)(param_1 + 0x16) + 8) = param_7;
    *(undefined *)(*(int *)(param_1 + 0x16) + 9) = param_8;
    *(undefined *)(*(int *)(param_1 + 0x16) + 10) = param_9;
    FUN_08000348(*(int *)(param_1 + 0x16) + 0xb,param_10,param_11);
    for (iVar2 = 0xb; iVar2 < (int)(param_11 + 0xb); iVar2 = iVar2 + 1) {
      if (*(char *)(*(int *)(param_1 + 0x16) + iVar2) == -1) {
        return 0;
      }
    }
    *(uint *)(param_1 + 0x12) = param_11 + 0xb & 0xff;
    uVar1 = FUN_080032a2(param_1);
  }
  else if (param_2 == '\x02') {
    local_2c = CONCAT22(local_2c._2_2_,(ushort)local_2c << 8 | (ushort)local_2c >> 8);
    FUN_08000348(*(undefined4 *)(param_1 + 0x16),&local_2c,2);
    local_28 = CONCAT22(local_28._2_2_,(ushort)local_28 << 8 | (ushort)local_28 >> 8);
    FUN_08000348(*(int *)(param_1 + 0x16) + 2,&local_28,2);
    *(undefined *)(*(int *)(param_1 + 0x16) + 4) = param_5;
    FUN_08000348(*(int *)(param_1 + 0x16) + 5,param_6,3);
    *(undefined *)(*(int *)(param_1 + 0x16) + 8) = param_7;
    *(undefined4 *)(param_1 + 0x12) = 9;
    uVar1 = FUN_080032a2(param_1);
  }
  else if (param_2 == '\a') {
    local_2c = CONCAT22(local_2c._2_2_,(ushort)local_2c << 8 | (ushort)local_2c >> 8);
    FUN_08000348(*(undefined4 *)(param_1 + 0x16),&local_2c,2);
    *(undefined4 *)(param_1 + 0x12) = 2;
    uVar1 = FUN_080032a2(param_1);
  }
  return uVar1;
}



//==== FUNC FUN_080037b4 @ 080037b4 ====

void FUN_080037b4(int param_1,char param_2,undefined4 param_3,int param_4,byte param_5)

{
  undefined4 local_28;
  
  local_28 = param_3;
  FUN_08002d9a(param_1);
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)(param_1 + 7) = 0xa4;
  *(char *)(param_1 + 8) = param_2;
  *(undefined *)(param_1 + 9) = 0;
  if ((param_4 == 0) && (param_2 != '\x04')) {
    local_28 = CONCAT22(local_28._2_2_,(ushort)local_28 << 8 | (ushort)local_28 >> 8);
    FUN_08000348(*(undefined4 *)(param_1 + 0x16),&local_28,2);
    param_5 = 2;
  }
  else {
    FUN_08000348(*(undefined4 *)(param_1 + 0x16),param_4,param_5);
  }
  *(uint *)(param_1 + 0x12) = (uint)param_5;
  FUN_080032a2(param_1);
  return;
}



//==== FUNC FUN_0800384a @ 0800384a ====

undefined4 FUN_0800384a(undefined4 param_1,undefined2 param_2,char param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == '\0') || (param_3 == '\x02')) {
    uVar1 = FUN_080037b4(param_1,param_3,param_2,0,0);
  }
  else {
    uVar1 = 0xfffe;
  }
  return uVar1;
}



//==== FUNC FUN_0800387c @ 0800387c ====

undefined4 FUN_0800387c(int param_1,short param_2,uint param_3,int param_4,ushort param_5)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
    uVar1 = 0xfffe;
  }
  else {
    FUN_08002d9a(param_1);
    *(undefined *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 7) = 0xd6;
    if (param_2 == -1) {
      if (0x7ffe < (param_3 & 0xffff)) {
        return 0xfffe;
      }
      *(char *)(param_1 + 8) = (char)(param_3 >> 8);
      *(char *)(param_1 + 9) = (char)(param_3 & 0xffff);
    }
    else {
      *(byte *)(param_1 + 8) = (byte)param_2 & 0x1f | 0x80;
      *(undefined *)(param_1 + 9) = 0;
    }
    *(uint *)(param_1 + 0x12) = (uint)param_5;
    FUN_08000348(*(undefined4 *)(param_1 + 0x16),param_4,param_5);
    uVar1 = FUN_080032a2(param_1);
  }
  return uVar1;
}



//==== FUNC FUN_0800390e @ 0800390e ====

undefined8
FUN_0800390e(int param_1,uint param_2,undefined4 param_3,ushort param_4,int param_5,
            undefined2 *param_6)

{
  ushort uVar1;
  uint uVar2;
  uint local_30;
  
  local_30 = param_2;
  if ((param_5 == 0) || (param_4 == 0)) {
    uVar2 = 0xfffe;
  }
  else {
    FUN_08002d9a(param_1);
    *(undefined *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 7) = 0xb0;
    if (((param_2 & 0xff) << 8 | (param_2 & 0xffff) >> 8) == 0xffff) {
      *(char *)(param_1 + 8) = (char)((uint)param_3 >> 8);
      *(char *)(param_1 + 9) = (char)param_3;
    }
    else {
      *(char *)(param_1 + 8) = (char)((param_2 & 0xffff) >> 8);
      *(char *)(param_1 + 9) = (char)param_3;
    }
    *(uint *)(param_1 + 0xe) = (uint)param_4;
    uVar1 = FUN_080032a2(param_1);
    if (uVar1 == 0x9000) {
      if ((int)(uint)param_4 < *(int *)(param_1 + 0x1038)) {
        *param_6 = 0;
        uVar2 = 0xfffe;
      }
      else {
        local_30 = *(uint *)(param_1 + 0x1040);
        FUN_08000348(param_5,local_30,*(undefined4 *)(param_1 + 0x26));
        *param_6 = (short)*(undefined4 *)(param_1 + 0x26);
        uVar2 = 0x9000;
      }
    }
    else {
      *param_6 = 0;
      uVar2 = (uint)uVar1;
    }
  }
  return CONCAT44(local_30,uVar2);
}



//==== FUNC FUN_080039de @ 080039de ====

undefined8 FUN_080039de(int param_1,uint param_2,undefined param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 local_30;
  
  cVar1 = (char)((param_2 & 0xffff) >> 8);
  local_30 = CONCAT31(local_30._1_3_,cVar1);
  FUN_08002d9a(param_1);
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)(param_1 + 7) = 0xb2;
  *(undefined *)(param_1 + 8) = param_3;
  if (((param_2 & 0xff) << 8 | (param_2 & 0xffff) >> 8) == 0xffff) {
    *(undefined *)(param_1 + 9) = 4;
  }
  else {
    *(byte *)(param_1 + 9) = cVar1 << 3 | 4;
  }
  *(uint *)(param_1 + 0xe) = param_5 & 0xff;
  uVar2 = FUN_080032a2(param_1);
  if ((int)(param_5 & 0xff) < *(int *)(param_1 + 0x1038)) {
    uVar2 = 0xfffe;
  }
  else {
    FUN_08000348(param_4,*(undefined4 *)(param_1 + 0x1040),*(undefined4 *)(param_1 + 0x1038));
    uVar2 = uVar2 & 0xffff;
  }
  return CONCAT44(local_30,uVar2);
}



//==== FUNC FUN_08003a82 @ 08003a82 ====

undefined2 FUN_08003a82(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xfffe;
  }
  else {
    FUN_08002d9a(param_1);
    *(undefined *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 7) = 0x84;
    *(undefined *)(param_1 + 8) = 0;
    *(undefined *)(param_1 + 9) = 0;
    *(undefined4 *)(param_1 + 0xe) = param_3;
    uVar1 = FUN_080032a2(param_1);
    FUN_08000348(param_2,*(undefined4 *)(param_1 + 0x1040),*(undefined4 *)(param_1 + 0x1038));
  }
  return uVar1;
}



//==== FUNC FUN_08003ade @ 08003ade ====

void FUN_08003ade(undefined4 param_1,undefined2 param_2)

{
  FUN_080033fa(param_1,7,param_2,0,0,0,0,0,0,0,0);
  return;
}



//==== FUNC FUN_08003b14 @ 08003b14 ====

short FUN_08003b14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined auStack_60 [16];
  undefined auStack_50 [36];
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_2c = param_2;
  uStack_28 = param_4;
  FUN_08002d9a(param_1);
  FUN_0800016c(auStack_60,0x10,0);
  sVar1 = FUN_08003a82(param_1,auStack_60,4);
  if (sVar1 == -0x7000) {
    FUN_080019b4(auStack_60,param_3,auStack_50);
    *(undefined *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 7) = 0x82;
    *(undefined *)(param_1 + 8) = 0;
    *(undefined *)(param_1 + 9) = (undefined)local_2c;
    FUN_08000348(*(undefined4 *)(param_1 + 0x16),auStack_50,8);
    *(undefined4 *)(param_1 + 0x12) = 8;
    *(undefined4 *)(param_1 + 0xe) = 0;
    FUN_080032a2(param_1);
    sVar1 = -0x7000;
  }
  return sVar1;
}



//==== FUNC FUN_08003bac @ 08003bac ====

short FUN_08003bac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  short param_5,undefined4 param_6,undefined2 *param_7)

{
  short sVar1;
  undefined local_30;
  undefined local_2f;
  undefined local_2c;
  undefined local_2b;
  
  FUN_08002d9a(param_1);
  *(undefined *)(param_1 + 6) = 0xf0;
  *(undefined *)(param_1 + 7) = 0x98;
  *(undefined *)(param_1 + 8) = 0;
  *(undefined *)(param_1 + 9) = 0;
  local_2f = (undefined)((uint)param_2 >> 8);
  **(undefined **)(param_1 + 0x16) = local_2f;
  local_30 = (undefined)param_2;
  *(undefined *)(*(int *)(param_1 + 0x16) + 1) = local_30;
  local_2b = (undefined)((uint)param_3 >> 8);
  *(undefined *)(*(int *)(param_1 + 0x16) + 2) = local_2b;
  local_2c = (undefined)param_3;
  *(undefined *)(*(int *)(param_1 + 0x16) + 3) = local_2c;
  FUN_08000348(*(int *)(param_1 + 0x16) + 4,param_4,param_5);
  *(uint *)(param_1 + 0x12) = (uint)(ushort)(param_5 + 4);
  sVar1 = FUN_080032a2(param_1);
  if (sVar1 == -0x7000) {
    FUN_08000348(param_6,*(undefined4 *)(param_1 + 0x1040),*(undefined4 *)(param_1 + 0x26));
    *param_7 = (short)*(undefined4 *)(param_1 + 0x26);
  }
  else {
    *param_7 = 0;
  }
  return sVar1;
}



//==== FUNC FUN_08003ca4 @ 08003ca4 ====

ulonglong FUN_08003ca4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      short param_5)

{
  undefined4 uVar1;
  undefined local_28;
  undefined local_27;
  undefined local_24;
  undefined local_23;
  
  FUN_08002d9a(param_1);
  *(undefined *)(param_1 + 6) = 0xf0;
  *(undefined *)(param_1 + 7) = 0x99;
  *(undefined *)(param_1 + 8) = 0;
  *(undefined *)(param_1 + 9) = 0;
  local_27 = (undefined)((uint)param_2 >> 8);
  **(undefined **)(param_1 + 0x16) = local_27;
  local_28 = (undefined)param_2;
  *(undefined *)(*(int *)(param_1 + 0x16) + 1) = local_28;
  local_23 = (undefined)((uint)param_3 >> 8);
  *(undefined *)(*(int *)(param_1 + 0x16) + 2) = local_23;
  local_24 = (undefined)param_3;
  *(undefined *)(*(int *)(param_1 + 0x16) + 3) = local_24;
  FUN_08000348(*(int *)(param_1 + 0x16) + 4,param_4,param_5);
  *(uint *)(param_1 + 0x12) = (uint)(ushort)(param_5 + 4);
  uVar1 = FUN_080032a2(param_1);
  return CONCAT44(param_2,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_08003d4c @ 08003d4c ====

ulonglong FUN_08003d4c(int param_1,undefined param_2,undefined4 param_3,uint param_4,
                      undefined4 param_5,undefined2 *param_6)

{
  uint uVar1;
  undefined4 local_30;
  
  FUN_08002d9a(param_1);
  *(undefined *)(param_1 + 6) = 0xf0;
  *(undefined *)(param_1 + 7) = 0x99;
  *(undefined *)(param_1 + 8) = 1;
  *(undefined *)(param_1 + 9) = param_2;
  FUN_08000348(*(undefined4 *)(param_1 + 0x16),param_3,param_4 & 0xffff);
  *(uint *)(param_1 + 0x12) = param_4 & 0xffff;
  uVar1 = FUN_080032a2(param_1);
  if ((uVar1 & 0xffff) == 0x9000) {
    local_30 = *(undefined4 *)(param_1 + 0x26);
    FUN_08000348(param_5,*(undefined4 *)(param_1 + 0x1040),local_30);
    *param_6 = (short)*(undefined4 *)(param_1 + 0x26);
  }
  else {
    *param_6 = 0;
    local_30 = param_3;
  }
  return CONCAT44(local_30,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_08003de8 @ 08003de8 ====

ulonglong FUN_08003de8(int param_1,undefined4 param_2,undefined4 param_3,short param_4,
                      undefined4 param_5,undefined2 *param_6)

{
  uint uVar1;
  undefined4 local_30;
  undefined local_2c;
  undefined local_2b;
  
  FUN_08002d9a(param_1);
  *(undefined *)(param_1 + 6) = 0xf0;
  *(undefined *)(param_1 + 7) = 0x99;
  *(undefined *)(param_1 + 8) = 2;
  *(undefined *)(param_1 + 9) = 0;
  local_2b = (undefined)((uint)param_2 >> 8);
  **(undefined **)(param_1 + 0x16) = local_2b;
  local_2c = (undefined)param_2;
  *(undefined *)(*(int *)(param_1 + 0x16) + 1) = local_2c;
  FUN_08000348(*(int *)(param_1 + 0x16) + 2,param_3,param_4);
  *(uint *)(param_1 + 0x12) = (uint)(ushort)(param_4 + 2);
  uVar1 = FUN_080032a2(param_1);
  if ((uVar1 & 0xffff) == 0x9000) {
    local_30 = *(undefined4 *)(param_1 + 0x26);
    FUN_08000348(param_5,*(undefined4 *)(param_1 + 0x1040),local_30);
    *param_6 = (short)*(undefined4 *)(param_1 + 0x26);
  }
  else {
    *param_6 = 0;
    local_30 = param_3;
  }
  return CONCAT44(local_30,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_08003ea8 @ 08003ea8 ====

/* WARNING: Type propagation algorithm not settling */

int FUN_08003ea8(code *param_1,int param_2,byte *param_3,uint **param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  char **ppcVar7;
  int **ppiVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined *puVar13;
  int *piVar14;
  char cVar15;
  char *pcVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  int iVar20;
  bool bVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 local_a8;
  int local_a0;
  char *local_9c;
  char *local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  ushort local_70;
  char local_6e;
  undefined local_68 [3];
  char acStack_65 [65];
  
  local_7c = 0;
  local_a0 = param_2;
  do {
    while( true ) {
      if (*param_3 == 0) {
        return local_7c;
      }
      if (*param_3 == 0x25) break;
      local_a0 = (*param_1)(local_a0,*param_3);
      if (local_a0 == 0) {
        return -1;
      }
      local_7c = local_7c + 1;
      param_3 = param_3 + 1;
    }
    local_70 = 0;
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pbVar18 = param_3 + 1;
              bVar1 = *pbVar18;
              if (bVar1 != 0x20) break;
              local_70 = local_70 | 1;
              param_3 = pbVar18;
            }
            if (bVar1 != 0x23) break;
            local_70 = local_70 | 8;
            param_3 = pbVar18;
          }
          if (bVar1 != 0x2b) break;
          local_70 = local_70 | 2;
          param_3 = pbVar18;
        }
        if (bVar1 != 0x2d) break;
        local_70 = local_70 | 4;
        param_3 = pbVar18;
      }
      if (bVar1 != 0x30) break;
      local_70 = local_70 | 0x10;
      param_3 = pbVar18;
    }
    if (bVar1 == 0x2a) {
      puVar10 = *param_4;
      *param_4 = puVar10;
      local_74 = *puVar10;
      *param_4 = puVar10 + 1;
      if ((int)local_74 < 0) {
        local_74 = -local_74;
        local_70 = local_70 | 4;
      }
      pbVar18 = param_3 + 2;
    }
    else {
      local_74 = 0;
      for (; *pbVar18 - 0x30 < 10; pbVar18 = pbVar18 + 1) {
        if (local_74 != 0x7fffffff) {
          local_74 = ((uint)*pbVar18 + local_74 * 10) - 0x30;
        }
      }
    }
    if (*pbVar18 == 0x2e) {
      pbVar19 = pbVar18 + 1;
      if (*pbVar19 == 0x2a) {
        puVar10 = *param_4;
        *param_4 = puVar10;
        pbVar19 = pbVar18 + 2;
        local_78 = *puVar10;
        *param_4 = puVar10 + 1;
      }
      else {
        local_78 = 0;
        for (; *pbVar19 - 0x30 < 10; pbVar19 = pbVar19 + 1) {
          if (local_78 != 0x7fffffff) {
            local_78 = ((uint)*pbVar19 + local_78 * 10) - 0x30;
          }
        }
      }
    }
    else {
      local_78 = 0xffffffff;
      pbVar19 = pbVar18;
    }
    uVar22 = FUN_080003c0(s_hjltzL_08004c44,*pbVar19);
    uVar5 = local_78;
    uVar11 = (uint)((ulonglong)uVar22 >> 0x20);
    uVar6 = (uint)uVar22;
    pbVar18 = pbVar19;
    if (uVar6 != 0) {
      pbVar18 = pbVar19 + 1;
      uVar6 = (uint)*pbVar19;
    }
    local_6e = (char)uVar6;
    uVar6 = uVar6 & 0xff;
    if (uVar6 == 0x68) {
      uVar11 = (uint)*pbVar18;
    }
    if (uVar6 == 0x68 && uVar11 == 0x68) {
      local_6e = 'b';
LAB_08003ff4:
      pbVar18 = pbVar18 + 1;
    }
    else {
      bVar21 = uVar6 == 0x6c;
      if (bVar21) {
        uVar6 = (uint)*pbVar18;
      }
      if (bVar21 && uVar6 == 0x6c) {
        local_6e = 'q';
        goto LAB_08003ff4;
      }
    }
    local_98 = acStack_65 + 1;
    param_3 = pbVar18 + 1;
    bVar1 = *pbVar18;
    uVar11 = (uint)bVar1;
    if (uVar11 == 0x25) {
      acStack_65[1] = 0x25;
      local_94 = 1;
LAB_080042fc:
      acStack_65[1] = 0x25;
      goto LAB_080042fe;
    }
    if ((uVar11 == 0x41) || (uVar11 - 0x45 < 3)) {
LAB_080041a2:
      puVar10 = (uint *)((int)*param_4 + 7U & 0xfffffff8);
      *param_4 = puVar10;
      local_a8._0_4_ = *puVar10;
      local_a8._4_4_ = puVar10[1];
      *param_4 = puVar10 + 2;
      if ((int)local_a8._4_4_ < 0) {
        cVar15 = '-';
LAB_080041d8:
        acStack_65[local_94 + 1] = cVar15;
        local_94 = local_94 + 1;
      }
      else {
        if ((int)((uint)local_70 << 0x1e) < 0) {
          cVar15 = '+';
          goto LAB_080041d8;
        }
        if ((int)((uint)local_70 << 0x1f) < 0) {
          cVar15 = ' ';
          goto LAB_080041d8;
        }
      }
      local_9c = acStack_65 + local_94 + 1;
      FUN_080045c0(&local_a8,uVar11);
    }
    else {
      if (uVar11 == 0x58) goto LAB_080041f2;
      if (uVar11 == 0x61) goto LAB_080041a2;
      if (uVar11 == 99) {
        local_94 = 1;
        puVar10 = *param_4;
        *param_4 = puVar10;
        uVar11 = *puVar10;
        *param_4 = puVar10 + 1;
        acStack_65[1] = (char)uVar11;
        goto LAB_080042fe;
      }
      if (uVar11 == 100) {
LAB_08004286:
        uVar23 = FUN_08004448(local_6e,param_4);
        if ((longlong)uVar23 < 0) {
          cVar15 = '-';
LAB_080042ba:
          acStack_65[local_94 + 1] = cVar15;
          local_94 = local_94 + 1;
        }
        else {
          if ((int)((uint)local_70 << 0x1e) < 0) {
            cVar15 = '+';
            goto LAB_080042ba;
          }
          if ((int)((uint)local_70 << 0x1f) < 0) {
            cVar15 = ' ';
            goto LAB_080042ba;
          }
        }
LAB_080042c2:
        local_9c = acStack_65 + local_94 + 1;
        local_a8 = uVar23;
        FUN_080044b6(&local_a8,uVar11);
      }
      else {
        if (uVar11 - 0x65 < 3) goto LAB_080041a2;
        if (uVar11 == 0x69) goto LAB_08004286;
        if (uVar11 == 0x6e) {
          if (local_6e == 'b') {
            puVar10 = *param_4;
            *param_4 = puVar10;
            puVar13 = (undefined *)*puVar10;
            *param_4 = puVar10 + 1;
            *puVar13 = (char)local_7c;
          }
          else if (local_6e == 'h') {
            puVar10 = *param_4;
            *param_4 = puVar10;
            puVar12 = (undefined2 *)*puVar10;
            *param_4 = puVar10 + 1;
            *puVar12 = (short)local_7c;
          }
          else if ((local_6e == 'j') || ((local_6e != 'l' && (local_6e == 'q')))) {
            ppiVar8 = (int **)*param_4;
            *param_4 = (uint *)ppiVar8;
            piVar14 = *ppiVar8;
            *param_4 = (uint *)(ppiVar8 + 1);
            *piVar14 = local_7c;
            piVar14[1] = local_7c >> 0x1f;
          }
          else {
            ppiVar8 = (int **)*param_4;
            *param_4 = (uint *)ppiVar8;
            piVar14 = *ppiVar8;
            *param_4 = (uint *)(ppiVar8 + 1);
            *piVar14 = local_7c;
          }
        }
        else {
          if (uVar11 == 0x6f) {
LAB_080041f2:
            if ((local_6e == 'l') || (local_6e != 'q' && local_6e != 'j')) {
              puVar10 = *param_4;
              *param_4 = puVar10;
              local_a8._0_4_ = *puVar10;
              *param_4 = puVar10 + 1;
              local_a8._4_4_ = 0;
            }
            else {
              puVar10 = (uint *)((int)*param_4 + 7U & 0xfffffff8);
              *param_4 = puVar10;
              local_a8._0_4_ = *puVar10;
              local_a8._4_4_ = puVar10[1];
              *param_4 = puVar10 + 2;
            }
            if (local_6e == 'h') {
              local_a8._0_4_ = (uint)local_a8 & 0xffff;
LAB_0800424e:
              local_a8._4_4_ = 0;
            }
            else {
              if (local_6e == 'b') {
                local_a8._0_4_ = (uint)local_a8 & 0xff;
                goto LAB_0800424e;
              }
              if (local_6e == 't' || local_6e == 'z') goto LAB_0800424e;
            }
            uVar23 = CONCAT44(local_a8._4_4_,(uint)local_a8);
            if ((((int)((uint)(byte)local_70 << 0x1c) < 0) &&
                (uVar23 = CONCAT44(local_a8._4_4_,(uint)local_a8),
                local_a8._4_4_ != 0 || (uint)local_a8 != 0)) &&
               (uVar23 = CONCAT44(local_a8._4_4_,(uint)local_a8), (uVar11 | 0x20) == 0x78)) {
              acStack_65[local_94 + 1] = '0';
              acStack_65[local_94 + 2] = bVar1;
              local_94 = local_94 + 2;
              uVar23 = CONCAT44(local_a8._4_4_,(uint)local_a8);
            }
            goto LAB_080042c2;
          }
          if (uVar11 == 0x70) {
            puVar10 = *param_4;
            *param_4 = puVar10;
            uVar11 = *puVar10;
            *param_4 = puVar10 + 1;
            uVar4 = (ulonglong)uVar11;
            uVar3 = (ulonglong)uVar11;
            uVar2 = (ulonglong)uVar11;
            local_a8 = (ulonglong)uVar11;
            uVar23 = (ulonglong)uVar11;
            iVar20 = 0x3c;
            if ((uVar11 != 0) || (local_78 != 0)) {
              do {
                uVar6 = (uVar11 & 0xf) + 0x30;
                cVar15 = (char)uVar6;
                if (0x39 < uVar6) {
                  cVar15 = (char)(uVar11 & 0xf) + 'W';
                }
                iVar20 = iVar20 + -1;
                uVar11 = uVar11 >> 4;
                local_98[iVar20] = cVar15;
              } while ((uVar11 != 0) && (acStack_65 + 1 < local_98 + iVar20));
            }
            local_9c = local_98 + iVar20;
            local_90 = 0x3c - iVar20;
            if ((int)local_90 < (int)local_78) {
              local_70 = local_70 & 0xffef;
              local_88 = local_78 - local_90;
              local_a8 = uVar23;
            }
            else if ((((int)local_78 < 0) && (local_a8 = uVar2, ((byte)local_70 & 0x14) == 0x10)) &&
                    (iVar20 = ((local_74 - local_94) - local_88) - local_90, local_a8 = uVar3,
                    0 < iVar20)) {
              local_88 = iVar20;
              local_a8 = uVar4;
            }
          }
          else if (uVar11 == 0x73) {
            ppcVar7 = (char **)*param_4;
            *param_4 = (uint *)ppcVar7;
            pcVar16 = *ppcVar7;
            *param_4 = (uint *)(ppcVar7 + 1);
            local_9c = pcVar16;
            if ((int)local_78 < 0) {
              local_90 = FUN_080003d8(pcVar16);
            }
            else {
              iVar20 = FUN_08004c60(pcVar16,0,local_78);
              local_90 = uVar5;
              if (iVar20 != 0) {
                local_90 = iVar20 - (int)pcVar16;
              }
            }
          }
          else {
            if ((uVar11 == 0x75) || (uVar11 == 0x78)) goto LAB_080041f2;
            acStack_65[1] = 0x25;
            local_94 = 1;
            if (uVar11 != 0) {
              acStack_65[2] = bVar1;
              local_94 = 2;
              goto LAB_080042fc;
            }
          }
        }
      }
    }
LAB_080042fe:
    iVar20 = (((((local_74 - local_94) - local_88) - local_90) - local_84) - local_8c) - local_80;
    if ((-1 < (int)((uint)(byte)local_70 << 0x1d)) &&
       (local_68[0] = 0x20, iVar17 = iVar20, 0 < iVar20)) {
      do {
        iVar9 = FUN_08004c14(param_1,&local_a8,local_68,1);
        if (iVar9 != 0) {
          return -1;
        }
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    pcVar16 = acStack_65;
    iVar9 = local_88;
    for (iVar17 = local_94; pcVar16 = pcVar16 + 1, local_88 = iVar9, iVar17 != 0;
        iVar17 = iVar17 + -1) {
      local_a0 = (*param_1)(local_a0,*pcVar16);
      if (local_a0 == 0) {
        return -1;
      }
      local_7c = local_7c + 1;
      iVar9 = local_88;
    }
    local_68[0] = 0x30;
    pcVar16 = local_9c;
    uVar11 = local_90;
    iVar17 = local_84;
    if (0 < iVar9) {
      do {
        iVar17 = FUN_08004c14(param_1,&local_a8,local_68,1);
        if (iVar17 != 0) {
          return -1;
        }
        iVar9 = iVar9 + -1;
        pcVar16 = local_9c;
        uVar11 = local_90;
        iVar17 = local_84;
      } while (iVar9 != 0);
    }
    for (; local_84 = iVar17, uVar11 != 0; uVar11 = uVar11 - 1) {
      local_a0 = (*param_1)(local_a0,*pcVar16);
      if (local_a0 == 0) {
        return -1;
      }
      local_7c = local_7c + 1;
      pcVar16 = pcVar16 + 1;
      iVar17 = local_84;
    }
    local_68[0] = 0x30;
    if (0 < iVar17) {
      do {
        iVar9 = FUN_08004c14(param_1,&local_a8,local_68,1);
        if (iVar9 != 0) {
          return -1;
        }
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    pcVar16 = local_9c + local_90;
    iVar9 = local_80;
    for (iVar17 = local_8c; local_80 = iVar9, iVar17 != 0; iVar17 = iVar17 + -1) {
      local_a0 = (*param_1)(local_a0,*pcVar16);
      if (local_a0 == 0) {
        return -1;
      }
      local_7c = local_7c + 1;
      pcVar16 = pcVar16 + 1;
      iVar9 = local_80;
    }
    local_68[0] = 0x30;
    if (0 < iVar9) {
      do {
        iVar17 = FUN_08004c14(param_1,&local_a8,local_68,1);
        if (iVar17 != 0) {
          return -1;
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (((int)((uint)(byte)local_70 << 0x1d) < 0) && (local_68[0] = 0x20, 0 < iVar20)) {
      do {
        iVar17 = FUN_08004c14(param_1,&local_a8,local_68,1);
        if (iVar17 != 0) {
          return -1;
        }
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
  } while( true );
}



//==== FUNC FUN_08004448 @ 08004448 ====

ulonglong FUN_08004448(int param_1,ulonglong **param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong *puVar3;
  
  if (param_1 == 0x62) {
    puVar3 = *param_2;
    *param_2 = puVar3;
    uVar2 = *(uint *)puVar3;
    *param_2 = (ulonglong *)((int)puVar3 + 4);
    uVar2 = (uint)(char)uVar2;
  }
  else if (param_1 == 0x68) {
    puVar3 = *param_2;
    *param_2 = puVar3;
    uVar2 = *(uint *)puVar3;
    *param_2 = (ulonglong *)((int)puVar3 + 4);
    uVar2 = (uint)(short)uVar2;
  }
  else {
    if (param_1 == 0x6a) {
LAB_08004466:
      puVar3 = (ulonglong *)((int)*param_2 + 7U & 0xfffffff8);
      *param_2 = puVar3;
      uVar1 = *puVar3;
      *param_2 = puVar3 + 1;
      return uVar1;
    }
    if (param_1 != 0x6c) {
      if (param_1 == 0x71) goto LAB_08004466;
      if ((param_1 != 0x74) && (param_1 == 0x7a)) {
        puVar3 = *param_2;
        *param_2 = puVar3;
        uVar2 = *(uint *)puVar3;
        *param_2 = (ulonglong *)((int)puVar3 + 4);
        return (ulonglong)uVar2;
      }
    }
    puVar3 = *param_2;
    *param_2 = puVar3;
    uVar2 = *(uint *)puVar3;
    *param_2 = (ulonglong *)((int)puVar3 + 4);
  }
  return (longlong)(int)uVar2;
}



//==== FUNC FUN_080044b6 @ 080044b6 ====

undefined8 FUN_080044b6(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 uVar10;
  int *local_24;
  
  iVar7 = param_1[4];
  if (param_2 == 0x6f) {
    iVar4 = 8;
  }
  else if ((param_2 | 0x20) == 0x78) {
    iVar4 = 0x10;
  }
  else {
    iVar4 = 10;
  }
  iVar2 = *param_1;
  iVar3 = param_1[1];
  if ((param_2 == 100 || param_2 == 0x69) && (iVar3 < 0)) {
    bVar9 = iVar2 != 0;
    iVar2 = -iVar2;
    iVar3 = -iVar3 - (uint)bVar9;
  }
  local_24 = (int *)&SysTick;
  uVar10 = CONCAT44(iVar3,iVar2);
  if ((iVar3 == 0 && iVar2 == 0) && (uVar10 = CONCAT44(iVar3,iVar2), param_1[0xc] == 0)) {
    piVar6 = (int *)&SysTick;
    local_24 = param_1;
    if ((iVar4 == 8) && ((int)((uint)*(byte *)(param_1 + 0xe) << 0x1c) < 0)) {
      *(undefined *)(iVar7 + 0x3b) = 0x30;
      piVar6 = (int *)0x3b;
    }
  }
  else {
    do {
      piVar5 = local_24;
      uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
      local_24 = (int *)((int)piVar5 + -1);
      iVar2 = iVar4;
      FUN_08004cb8((int)uVar10,uVar8,iVar4,0);
      cVar1 = (char)(iVar2 + 0x30U);
      if (0x39 < (iVar2 + 0x30U & 0xff)) {
        cVar1 = (char)param_2 + -0x51 + cVar1;
      }
      *(char *)(iVar7 + (int)local_24) = cVar1;
      uVar10 = FUN_08004cb8((int)uVar10,uVar8,iVar4,0);
    } while (((int)((ulonglong)uVar10 >> 0x20) != 0 || (int)uVar10 != 0) &&
            ((undefined *)param_1[3] < (undefined *)(iVar7 + (int)local_24)));
    piVar6 = local_24;
    if ((iVar4 == 8) &&
       (((int)((uint)*(byte *)(param_1 + 0xe) << 0x1c) < 0 &&
        (*(char *)(iVar7 + (int)local_24) != '0')))) {
      piVar6 = (int *)((int)piVar5 + -2);
      *(undefined *)(iVar7 + (int)piVar6) = 0x30;
    }
  }
  param_1[3] = (int)(iVar7 + (int)piVar6);
  iVar7 = 0x3c - (int)piVar6;
  iVar4 = param_1[0xc];
  param_1[6] = iVar7;
  if (iVar4 <= iVar7) {
    if ((iVar4 < 0) && ((*(byte *)(param_1 + 0xe) & 0x14) == 0x10)) {
      iVar7 = ((param_1[0xd] - param_1[5]) - param_1[8]) - iVar7;
      if (0 < iVar7) {
        param_1[8] = iVar7;
      }
    }
    return CONCAT44(param_2,local_24);
  }
  param_1[8] = iVar4 - iVar7;
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xffef;
  return CONCAT44(param_2,local_24);
}



//==== FUNC FUN_080045c0 @ 080045c0 ====

void FUN_080045c0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  short sVar5;
  undefined *puVar6;
  int iVar7;
  undefined uVar8;
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  bool bVar20;
  char cVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined8 local_58;
  char local_50 [7];
  byte local_49 [33];
  uint local_28;
  
  local_58._0_4_ = *param_1;
  local_58._4_4_ = param_1[1];
  pcVar16 = local_50;
  uVar19 = param_2 & 0xff | 0x20;
  if (uVar19 != 0x61) {
    if (param_1[0xc] < 0) {
      iVar1 = 6;
    }
    else {
      if (param_1[0xc] != 0 || uVar19 != 0x67) goto LAB_080045f6;
      iVar1 = 1;
    }
    param_1[0xc] = iVar1;
  }
LAB_080045f6:
  uVar2 = (uint)(param_1[1] << 1) >> 0x15;
  local_28 = param_2;
  if (uVar2 == 0x7ff) {
    iVar1 = param_1[1] << 0xc;
    bVar20 = iVar1 != 0;
    if (!bVar20) {
      iVar1 = *param_1;
    }
    if (bVar20 || iVar1 != 0) {
      param_1[6] = 3;
      if ((param_2 & 0xff) - 0x61 < 0x1a) {
        puVar6 = &DAT_08004c4c;
      }
      else {
        puVar6 = &DAT_08004c50;
      }
    }
    else {
      param_1[6] = 3;
      if ((param_2 & 0xff) - 0x61 < 0x1a) {
        puVar6 = &DAT_08004c54;
      }
      else {
        puVar6 = &DAT_08004c58;
      }
    }
    FUN_08000348(param_1[3],puVar6,3);
  }
  else {
    if ((uVar2 == 0) && (uVar2 = FUN_08004da6(param_1), 0 < (int)uVar2)) {
      sVar5 = 0;
      iVar1 = 0;
    }
    else {
      sVar5 = (short)uVar2 + -0x3fe;
      param_1[1] = param_1[1] & 0x800fffffU | 0x3fe00000;
      iVar1 = -1;
    }
    if (uVar19 == 0x61) {
      puVar6 = (undefined *)param_1[3];
      *puVar6 = 0x30;
      param_1[3] = (int)(puVar6 + 2);
      if ((char)local_28 == 'a') {
        uVar8 = 0x78;
      }
      else {
        uVar8 = 0x58;
      }
      puVar6[1] = uVar8;
      param_1[5] = param_1[5] + 2;
    }
    if (iVar1 == 0) {
      sVar14 = 0;
      iVar3 = 0;
    }
    else {
      cVar21 = 0x60 < uVar19;
      if (uVar19 == 0x61) {
        iVar1 = *param_1;
        uVar19 = param_1[1];
        cVar21 = '\x01';
        if (param_1[0xc] < 0) {
          sVar15 = 0x21;
        }
        else {
          sVar15 = (short)param_1[0xc] + 1;
        }
        cVar9 = '\0';
        FUN_08004dec((int)local_58,local_58._4_4_,0,0);
        if (cVar21 == '\0') {
          local_58._0_4_ = iVar1;
          local_58._4_4_ = uVar19 ^ 0x80000000;
        }
        else {
          local_58._0_4_ = iVar1;
          local_58._4_4_ = uVar19;
        }
        uVar22 = CONCAT44(local_58._4_4_,iVar1);
        iVar1 = sVar15 + 1;
        sVar14 = sVar5 + -4;
        local_50[0] = cVar9;
        pbVar4 = (byte *)(local_50 + 1);
        while( true ) {
          local_58 = uVar22;
          if (iVar1 < 1) break;
          cVar21 = iVar1 != 0;
          FUN_08004e1c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0,0);
          if (cVar21 != '\0') break;
          FUN_08004e4c(&local_58,0x1c);
          iVar3 = FUN_08004f60((int)local_58,local_58._4_4_);
          iVar1 = iVar1 + -7;
          uVar22 = local_58;
          if (0 < iVar1) {
            uVar22 = FUN_08004fb8();
            uVar22 = FUN_08004fe8((int)local_58,local_58._4_4_,(int)uVar22,
                                  (int)((ulonglong)uVar22 >> 0x20));
            local_58._0_4_ = (int)uVar22;
            local_58._4_4_ = (int)((ulonglong)uVar22 >> 0x20);
          }
          pbVar4 = pbVar4 + 7;
          iVar7 = 7;
          while ((0 < iVar3 && (iVar7 = iVar7 + -1, -1 < iVar7))) {
            pbVar4 = pbVar4 + -1;
            *pbVar4 = (byte)iVar3 & 0xf;
            iVar3 = iVar3 >> 4;
          }
          while (iVar7 = iVar7 + -1, -1 < iVar7) {
            pbVar4 = pbVar4 + -1;
            *pbVar4 = 0;
          }
          pbVar4 = pbVar4 + 7;
        }
        iVar1 = (int)pbVar4 - (int)(local_50 + 1);
        if (iVar1 < sVar15) {
          sVar15 = (short)iVar1;
        }
        iVar3 = (int)sVar15;
        pcVar16 = local_50 + 1;
        if (-1 < iVar3) {
          if ((iVar3 < iVar1) && (7 < (byte)local_50[iVar3 + 1])) {
            cVar21 = '\x0f';
          }
          else {
            cVar21 = '\0';
          }
          iVar1 = iVar3;
          pcVar12 = local_50 + iVar3;
          while( true ) {
            sVar15 = (short)iVar3;
            if (*pcVar12 != cVar21) break;
            iVar3 = iVar3 + -1;
            iVar1 = iVar1 + -1;
            pcVar12 = pcVar12 + -1;
          }
          if (cVar21 == '\x0f') {
            local_50[iVar1] = local_50[iVar1] + '\x01';
          }
          if (iVar1 + -1 < 0) {
            pcVar16 = local_50;
            sVar15 = sVar15 + 1;
            sVar14 = sVar5;
          }
          iVar3 = (int)sVar15;
          iVar1 = iVar3 + -1;
          if (-1 < iVar1) {
            pbVar4 = (byte *)(pcVar16 + iVar1);
            do {
              bVar10 = *pbVar4 + 0x30;
              if (0x39 < bVar10) {
                bVar10 = (char)local_28 + -0x3a + bVar10;
              }
              iVar1 = iVar1 + -1;
              *pbVar4 = bVar10;
              pbVar4 = pbVar4 + -1;
            } while (-1 < iVar1);
          }
        }
        if (param_1[0xc] < 0) {
          param_1[0xc] = iVar3 + -1;
        }
      }
      else {
        uVar11 = 0;
        uVar23 = FUN_08004dec((int)local_58,local_58._4_4_,0,0);
        uVar22 = CONCAT44(DAT_08004928,uVar11);
        if (cVar21 == '\0') {
          local_58._4_4_ = (uint)((ulonglong)uVar23 >> 0x20) ^ 0x80000000;
          local_58._0_4_ = (int)uVar23;
        }
        uVar23 = CONCAT44(local_58._4_4_,(int)local_58);
        iVar3 = (int)(short)((sVar5 * 0x7597) / DAT_08004924);
        iVar1 = 7 - iVar3;
        if (iVar1 < 1) {
          iVar1 = -iVar1;
          lVar24 = (ulonglong)DAT_0800492c << 0x20;
          while( true ) {
            uVar18 = (undefined4)((ulonglong)uVar22 >> 0x20);
            uVar17 = (undefined4)uVar22;
            uVar11 = (undefined4)((ulonglong)lVar24 >> 0x20);
            if (iVar1 == 0) break;
            if (iVar1 << 0x1f < 0) {
              lVar24 = FUN_08005168((int)lVar24,uVar11,uVar17,uVar18);
            }
            uVar22 = FUN_08005168(uVar17,uVar18,uVar17,uVar18);
            iVar1 = iVar1 >> 1;
          }
          uVar23 = FUN_0800530c((int)local_58,local_58._4_4_,(int)lVar24,uVar11);
          local_58._0_4_ = (int)uVar23;
          local_58._4_4_ = (int)((ulonglong)uVar23 >> 0x20);
        }
        else {
          do {
            uVar17 = (undefined4)((ulonglong)uVar22 >> 0x20);
            uVar11 = (undefined4)uVar22;
            if (iVar1 << 0x1f < 0) {
              uVar23 = FUN_08005168((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar11,uVar17);
            }
            iVar1 = iVar1 >> 1;
            uVar22 = FUN_08005168(uVar11,uVar17,uVar11,uVar17);
          } while (iVar1 != 0);
          local_58._0_4_ = (int)uVar23;
          local_58._4_4_ = (int)((ulonglong)uVar23 >> 0x20);
        }
        uVar11 = DAT_08004930;
        if (uVar19 == 0x66) {
          iVar1 = iVar3 + 10;
        }
        else {
          iVar1 = 6;
        }
        iVar1 = iVar1 + param_1[0xc];
        if (0x13 < iVar1) {
          iVar1 = 0x13;
        }
        local_50[0] = '0';
        pcVar16 = local_50 + 1;
        local_58 = uVar23;
        while (uVar22 = local_58, 0 < iVar1) {
          while( true ) {
            local_58._4_4_ = (uint)((ulonglong)uVar22 >> 0x20);
            local_58._0_4_ = (int)uVar22;
            uVar2 = FUN_08004f8c((int)local_58,local_58._4_4_);
            local_58 = uVar22;
            iVar7 = 4;
            pcVar12 = pcVar16 + 8;
            do {
              pcVar16 = pcVar12;
              uVar13 = uVar2 / 10;
              pcVar16[-1] = (char)uVar2 + (char)uVar13 * -10 + '0';
              uVar2 = uVar13 / 10;
              iVar7 = iVar7 + -1;
              pcVar16[-2] = (char)(uVar13 % 10) + '0';
              pcVar12 = pcVar16 + -2;
            } while (iVar7 != 0);
            iVar1 = iVar1 + -8;
            pcVar16 = pcVar16 + 6;
            if (iVar1 < 1) break;
            FUN_08004f8c((int)local_58,local_58._4_4_);
            uVar22 = FUN_08004fcc();
            uVar22 = FUN_08004fe8((int)local_58,local_58._4_4_,(int)uVar22,
                                  (int)((ulonglong)uVar22 >> 0x20));
            uVar22 = FUN_08005168((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0,uVar11);
          }
        }
        iVar1 = (int)pcVar16 - (int)(local_50 + 1);
        pcVar16 = local_50;
        while (pcVar16 = pcVar16 + 1, sVar14 = (short)iVar3, *pcVar16 == '0') {
          iVar1 = iVar1 + -1;
          iVar3 = iVar3 + -1;
        }
        if (uVar19 == 0x66) {
          sVar5 = sVar14 + 1;
        }
        else if (uVar19 == 0x65) {
          sVar5 = 1;
        }
        else {
          sVar5 = 0;
        }
        sVar5 = sVar5 + (short)param_1[0xc];
        if (iVar1 < sVar5) {
          sVar5 = (short)iVar1;
        }
        iVar7 = (int)sVar5;
        iVar3 = iVar7;
        if (-1 < iVar7) {
          if ((iVar7 < iVar1) && (0x34 < (byte)pcVar16[iVar7])) {
            cVar21 = '9';
          }
          else {
            cVar21 = '0';
          }
          pcVar12 = pcVar16 + iVar7;
          while( true ) {
            pcVar12 = pcVar12 + -1;
            iVar7 = iVar7 + -1;
            if (*pcVar12 != cVar21) break;
            iVar3 = iVar3 + -1;
          }
          if (cVar21 == '9') {
            pcVar16[iVar7] = pcVar16[iVar7] + '\x01';
          }
          if (iVar7 < 0) {
            pcVar16 = pcVar16 + -1;
            iVar3 = iVar3 + 1;
            sVar14 = sVar14 + 1;
          }
        }
      }
    }
    FUN_080049c0(param_1,local_28 & 0xff,pcVar16,(int)(short)iVar3,(int)sVar14);
  }
  return;
}



//==== FUNC FUN_080049c0 @ 080049c0 ====

void FUN_080049c0(int param_1,uint param_2,undefined1 *param_3,int param_4,short param_5)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  int local_38;
  undefined4 local_34;
  undefined auStack_30 [16];
  
  iVar2 = FUN_0800559e();
  iVar6 = *(int *)(param_1 + 0x30);
  uVar1 = **(undefined **)(iVar2 + 0x24);
  if (param_4 < 1) {
    param_4 = 1;
    param_3 = &DAT_08004c5c;
  }
  iVar2 = (int)param_5;
  if ((param_2 | 0x20) == 0x66) {
LAB_08004a1a:
    param_5 = param_5 + 1;
    iVar5 = (int)param_5;
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar5 < 1) {
      iVar4 = iVar2 + 1;
      *(undefined *)(*(int *)(param_1 + 0xc) + iVar2) = 0x30;
      if ((0 < iVar6) || ((int)((uint)*(byte *)(param_1 + 0x38) << 0x1c) < 0)) {
        *(undefined *)(*(int *)(param_1 + 0xc) + iVar4) = uVar1;
        iVar4 = iVar2 + 2;
      }
      if (iVar6 + iVar5 < 0 != SCARRY4(iVar6,iVar5)) {
        param_5 = -(short)iVar6;
      }
      *(int *)(param_1 + 0x24) = -(int)param_5;
      iVar6 = param_5 + iVar6;
      *(int *)(param_1 + 0x18) = iVar4;
      if (iVar6 < param_4) {
        param_4 = iVar6;
      }
      iVar2 = (int)(short)param_4;
      *(int *)(param_1 + 0x1c) = iVar2;
      FUN_08000348(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18),param_3,iVar2);
      *(int *)(param_1 + 0x28) = iVar6 - iVar2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc) + iVar2;
      if (param_4 < iVar5) {
        FUN_08000348(iVar2,param_3,param_4);
        iVar2 = param_4 + *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar2;
        *(int *)(param_1 + 0x24) = iVar5 - param_4;
        if ((0 < iVar6) || ((int)((uint)*(byte *)(param_1 + 0x38) << 0x1c) < 0)) {
          *(undefined *)(*(int *)(param_1 + 0xc) + iVar2) = uVar1;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
        *(int *)(param_1 + 0x28) = iVar6;
      }
      else {
        FUN_08000348(iVar2,param_3);
        iVar2 = iVar5 + *(int *)(param_1 + 0x18);
        if ((0 < iVar6) || ((int)((uint)*(byte *)(param_1 + 0x38) << 0x1c) < 0)) {
          *(undefined *)(*(int *)(param_1 + 0xc) + iVar2) = uVar1;
          iVar2 = iVar2 + 1;
        }
        *(int *)(param_1 + 0x18) = iVar2;
        iVar2 = (int)(short)((short)param_4 - param_5);
        if (iVar6 < iVar2) {
          iVar2 = iVar6;
        }
        iVar2 = (int)(short)iVar2;
        FUN_08000348(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18),param_3 + iVar5,iVar2);
        *(int *)(param_1 + 0x18) = iVar2 + *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x24) = iVar6 - iVar2;
      }
    }
  }
  else {
    if ((param_2 | 0x20) == 0x67) {
      if ((iVar2 + 4 < 0 == SCARRY4(iVar2,4)) && (iVar2 < iVar6)) {
        if ((-1 < (int)((uint)*(byte *)(param_1 + 0x38) << 0x1c)) && (param_4 < iVar6)) {
          iVar6 = param_4;
        }
        iVar6 = iVar6 - (short)(param_5 + 1);
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        goto LAB_08004a1a;
      }
      if ((param_4 < iVar6) && (-1 < (int)((uint)*(byte *)(param_1 + 0x38) << 0x1c))) {
        iVar6 = param_4;
      }
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      if (param_2 == 0x67) {
        param_2 = 0x65;
      }
      else {
        param_2 = 0x45;
      }
    }
    else if (param_2 == 0x61) {
      param_2 = 0x70;
    }
    else if (param_2 == 0x41) {
      param_2 = 0x50;
    }
    iVar5 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar5 + 1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar5) = *param_3;
    if ((0 < iVar6) || ((int)((uint)*(byte *)(param_1 + 0x38) << 0x1c) < 0)) {
      *(int *)(param_1 + 0x18) = iVar5 + 2;
      *(undefined *)(*(int *)(param_1 + 0xc) + iVar5 + 1) = uVar1;
      if (0 < iVar6) {
        iVar4 = (int)(short)((short)param_4 + -1);
        if (iVar6 < iVar4) {
          iVar4 = iVar6;
        }
        iVar4 = (int)(short)iVar4;
        FUN_08000348(*(int *)(param_1 + 0xc) + iVar5 + 2,param_3 + 1,iVar4);
        *(int *)(param_1 + 0x18) = iVar4 + *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x24) = iVar6 - iVar4;
      }
    }
    puVar3 = (undefined *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0xc));
    *puVar3 = (char)param_2;
    if (iVar2 < 0) {
      puVar3[1] = 0x2d;
      iVar2 = -iVar2;
    }
    else {
      puVar3[1] = 0x2b;
    }
    pcVar8 = puVar3 + 2;
    iVar6 = 0;
    puVar7 = auStack_30;
    while (0 < (short)iVar2) {
      FUN_080055d0(&local_38,(int)(short)iVar2,10);
      *puVar7 = (char)local_34;
      iVar6 = iVar6 + 1;
      iVar2 = local_38;
      puVar7 = puVar7 + 1;
    }
    pcVar9 = pcVar8;
    if ((iVar6 < 2) && ((param_2 | 0x20) == 0x65)) {
      pcVar9 = puVar3 + 3;
      *pcVar8 = '0';
    }
    pcVar8 = pcVar9;
    if (iVar6 == 0) {
      pcVar8 = pcVar9 + 1;
      *pcVar9 = '0';
    }
    else {
      for (; 0 < iVar6; iVar6 = iVar6 + -1) {
        *pcVar8 = auStack_30[iVar6 + -1] + '0';
        pcVar8 = pcVar8 + 1;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)pcVar8 - (*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 0x38) & 0x14) == 0x10) {
    iVar2 = *(int *)(param_1 + 0x28) +
            *(int *)(param_1 + 0x1c) +
            *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14);
    iVar5 = *(int *)(param_1 + 0x34);
    iVar6 = iVar2;
    if (iVar2 < iVar5) {
      iVar6 = iVar5 - iVar2;
    }
    if (iVar2 < iVar5) {
      *(int *)(param_1 + 0x20) = iVar6;
    }
  }
  return;
}



//==== FUNC FUN_08004c14 @ 08004c14 ====

longlong FUN_08004c14(code *param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = param_4;
  if (param_4 != 0) {
    while( true ) {
      iVar2 = (*param_1)(*(undefined4 *)(param_2 + 8),*param_3);
      *(int *)(param_2 + 8) = iVar2;
      if (iVar2 == 0) break;
      *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
      if (uVar3 == 0) {
        return (ulonglong)param_4 << 0x20;
      }
    }
    uVar1 = 0xffffffff;
  }
  return CONCAT44(param_4,uVar1);
}



//==== FUNC FUN_08004c60 @ 08004c60 ====

char * FUN_08004c60(uint *param_1,char param_2,uint param_3)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  while (((uint)param_1 & 3) != 0) {
    bVar7 = param_3 == 0;
    param_3 = param_3 - 1;
    bVar6 = param_3 == 0;
    if (bVar7) goto LAB_08004cb0;
    puVar2 = (uint *)((int)param_1 + 1);
    cVar1 = *(char *)param_1;
    param_1 = puVar2;
    if (param_2 == cVar1) goto LAB_08004cb4;
  }
  uVar3 = param_3 - 8;
  if (7 < param_3) {
    uVar3 = param_3 - 4;
    puVar2 = param_1;
    do {
      param_1 = puVar2;
      bVar6 = 3 < uVar3;
      uVar3 = uVar3 - 4;
      uVar5 = uVar3;
      if (bVar6) {
        uVar5 = *param_1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
        uVar5 = uVar5 + 0xfefefeff & ~uVar5 & 0x80808080;
      }
      puVar2 = param_1 + 1;
    } while (uVar5 == 0);
  }
  iVar4 = uVar3 + 8;
  puVar2 = param_1;
  do {
    param_1 = (uint *)((int)puVar2 + 1);
    bVar7 = iVar4 != 0;
    iVar4 = iVar4 + -1;
    bVar6 = iVar4 == 0;
    if (bVar7) {
      bVar6 = param_2 == *(char *)puVar2;
    }
    puVar2 = param_1;
  } while (bVar7 && !bVar6);
LAB_08004cb0:
  puVar2 = param_1;
  if (!bVar6) {
    puVar2 = (uint *)0x1;
  }
LAB_08004cb4:
  return (char *)((int)puVar2 + -1);
}



//==== FUNC FUN_08004cb8 @ 08004cb8 ====

ulonglong FUN_08004cb8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_4 != 0) {
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      return 0;
    }
    uVar3 = LZCOUNT(param_4) - LZCOUNT(param_2);
    param_4 = param_4 << (uVar3 & 0xff);
LAB_08004cfa:
    param_4 = param_4 | param_3 >> (0x20 - uVar3 & 0xff);
    param_3 = param_3 << (uVar3 & 0xff);
    uVar3 = 0x80000000 >> (uVar3 & 0xff);
    while( true ) {
      bVar1 = param_2 - param_4 < (uint)(param_3 <= param_1);
      bVar6 = param_4 < param_2 || bVar1;
      if (param_4 < param_2 || bVar1) {
        param_2 = (param_2 - param_4) - (uint)(param_3 > param_1);
        param_1 = param_1 - param_3;
      }
      uVar4 = uVar3 * 2;
      bVar1 = CARRY4(uVar3,uVar3);
      uVar3 = uVar3 * 2 + (uint)bVar6;
      if (bVar1 || CARRY4(uVar4,(uint)bVar6)) break;
      uVar4 = param_4 & 1;
      param_4 = param_4 >> 1;
      param_3 = (uint)(uVar4 != 0) << 0x1f | param_3 >> 1;
    }
    return (ulonglong)uVar3;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      return (ulonglong)(param_1 / param_3);
    }
  }
  else {
    if (1 < param_3) {
      if (param_3 >> 0x10 == 0) {
        uVar4 = (param_2 - param_3 * (param_2 / param_3)) * 0x10000 | param_1 >> 0x10;
        uVar3 = uVar4 / param_3;
        return CONCAT44(param_2 / param_3,
                        (param_1 & 0xffff | (uVar4 - param_3 * uVar3) * 0x10000) / param_3 |
                        uVar3 << 0x10);
      }
      uVar3 = (0x20 - LZCOUNT(param_2)) + LZCOUNT(param_3);
      param_4 = 0;
      if (0x1f < uVar3) {
        param_3 = param_3 << (uVar3 - 0x20 & 0xff);
        uVar4 = 0x80000000 >> (uVar3 - 0x20 & 0xff);
        uVar5 = 0;
        uVar3 = 0;
        while( true ) {
          bVar1 = param_2 - param_3 < (uint)(uVar3 <= param_1);
          bVar6 = param_3 < param_2 || bVar1;
          if (param_3 < param_2 || bVar1) {
            param_2 = (param_2 - param_3) - (uint)(uVar3 > param_1);
            param_1 = param_1 - uVar3;
          }
          bVar7 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6);
          uVar4 = uVar4 * 2 + (uint)bVar6;
          uVar2 = uVar5 * 2;
          bVar1 = CARRY4(uVar5,uVar5);
          uVar5 = uVar5 * 2 + (uint)bVar7;
          if (bVar1 || CARRY4(uVar2,(uint)bVar7)) break;
          uVar2 = param_3 & 1;
          param_3 = param_3 >> 1;
          uVar3 = (uint)(uVar2 != 0) << 0x1f | uVar3 >> 1;
        }
        return CONCAT44(uVar5,uVar4);
      }
      goto LAB_08004cfa;
    }
    if (param_3 != 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  return CONCAT44(param_2,param_1);
}



//==== FUNC FUN_08004da6 @ 08004da6 ====

int FUN_08004da6(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = param_1[1];
  iVar1 = 1;
  uVar3 = uVar2 & 0xfffff;
  param_1[1] = uVar3;
  bVar4 = uVar3 != 0;
  if (!bVar4) {
    uVar3 = *param_1;
  }
  if (bVar4 || uVar3 != 0) {
    while (uVar3 = param_1[1], -1 < (int)(uVar3 << 0xb)) {
      param_1[1] = *param_1 >> 0x1f | uVar3 << 1;
      *param_1 = *param_1 << 1;
      iVar1 = iVar1 + -1;
    }
    param_1[1] = uVar3 & 0xfffff;
  }
  param_1[1] = uVar2 & 0x80000000 | param_1[1];
  return iVar1;
}



//==== FUNC FUN_08004dec @ 08004dec ====

void FUN_08004dec(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_2 * 2;
  if (uVar1 < 0xffe00001) {
    uVar1 = param_4 * 2;
  }
  if ((uVar1 < 0xffe00001) && ((int)(param_2 | param_4) < 0)) {
    return;
  }
  return;
}



//==== FUNC FUN_08004e1c @ 08004e1c ====

void FUN_08004e1c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_2 * 2;
  if (uVar1 < 0xffe00001) {
    uVar1 = param_4 * 2;
  }
  if ((uVar1 < 0xffe00001) && ((int)(param_2 | param_4) < 0)) {
    return;
  }
  return;
}



//==== FUNC FUN_08004e4c @ 08004e4c ====

undefined4 FUN_08004e4c(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar1 = (*(uint *)((int)param_1 + 4) << 1) >> 0x15;
  if (uVar1 == 0x7ff) {
    uVar1 = *(uint *)((int)param_1 + 4) << 0xc;
    bVar5 = uVar1 == 0;
    if (bVar5) {
      uVar1 = *(uint *)param_1;
    }
    if (!bVar5 || uVar1 != 0) {
      return 2;
    }
  }
  else {
    if ((uVar1 == 0) && (uVar1 = FUN_08004da6(param_1), 0 < (int)uVar1)) {
      return 0;
    }
    if (((int)param_2 < 1) || (param_2 < 0x7ff - uVar1)) {
      if ((int)-uVar1 < (int)param_2) {
        *(uint *)((int)param_1 + 4) =
             *(uint *)((int)param_1 + 4) & 0x800fffff | (uVar1 + param_2) * 0x100000;
      }
      else {
        iVar4 = (uVar1 - 1) + param_2;
        uVar3 = *(uint *)((int)param_1 + 4) & 0xfffff | 0x100000;
        uVar1 = *(uint *)((int)param_1 + 4) & 0x80000000;
        *(uint *)((int)param_1 + 4) = uVar3;
        if (0x34 < iVar4 + 0x35U) {
          *(uint *)((int)param_1 + 4) = uVar1;
          *(uint *)param_1 = 0;
          return 0;
        }
        uVar2 = 0;
        if (iVar4 + 0x1f < 0 != SCARRY4(iVar4,0x1f)) {
          uVar2 = *(uint *)param_1;
          *(uint *)param_1 = uVar3;
          iVar4 = iVar4 + 0x20;
          *(uint *)((int)param_1 + 4) = 0;
        }
        uVar3 = -iVar4;
        if (uVar3 != 0) {
          uVar2 = *(uint *)param_1 << (iVar4 + 0x20U & 0xff) | ~-(uint)(uVar2 == 0) >> 0x1f;
          *(uint *)param_1 =
               *(uint *)((int)param_1 + 4) << (iVar4 + 0x20U & 0xff) |
               *(uint *)param_1 >> (uVar3 & 0xff);
          *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) >> (uVar3 & 0xff);
        }
        *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) | uVar1;
        if (((uVar2 < 0x80000001) &&
            ((uVar2 != 0x80000000 || (-1 < (int)((uint)*(byte *)param_1 << 0x1f))))) ||
           (*(uint *)param_1 = *(uint *)param_1 + 1, *(uint *)param_1 != 0)) {
          uVar3 = *(uint *)((int)param_1 + 4);
          bVar5 = uVar3 == uVar1;
          if (bVar5) {
            uVar3 = *(uint *)param_1;
          }
          if (bVar5 && uVar3 == 0) {
            return 0;
          }
        }
        else {
          *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) + 1;
        }
      }
      return 0xffffffff;
    }
    uVar6 = DAT_08004f50;
    if (-1 < (int)*(uint *)((int)param_1 + 4)) {
      uVar6 = DAT_08004f58;
    }
    *param_1 = uVar6;
  }
  return 1;
}



//==== FUNC FUN_08004f60 @ 08004f60 ====

int FUN_08004f60(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 >> 0x15 | param_2 << 0xb;
  if ((param_2 & 0x80000000) != 0) {
    uVar1 = FUN_08004f98(uVar1,param_2 << 1);
    if (uVar1 < 0x80000001) {
      iVar2 = -uVar1;
    }
    else {
      iVar2 = -0x80000000;
    }
    return iVar2;
  }
  iVar2 = FUN_08004f98(uVar1,param_2 << 1);
  if (iVar2 < 0) {
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}



//==== FUNC FUN_08004f8c @ 08004f8c ====

uint FUN_08004f8c(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 & 0x80000000) == 0) {
    uVar1 = param_1 >> 0x15 | param_2 << 0xb | 0x80000000;
    iVar2 = ((param_2 << 1) >> 0x15) - 0x3ff;
    if (-1 < iVar2) {
      uVar3 = 0x1f - iVar2;
      if ((int)uVar3 < 0) {
        uVar1 = (int)uVar1 >> 0x1f;
      }
      else {
        uVar1 = uVar1 >> (uVar3 & 0xff);
      }
      return uVar1;
    }
  }
  return 0;
}



//==== FUNC FUN_08004f98 @ 08004f98 ====

uint FUN_08004f98(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 >> 0x15) - 0x3ff;
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = 0x1f - iVar1;
  if ((int)uVar2 < 0) {
    uVar2 = (int)(param_1 | 0x80000000) >> 0x1f;
  }
  else {
    uVar2 = (param_1 | 0x80000000) >> (uVar2 & 0xff);
  }
  return uVar2;
}



//==== FUNC FUN_08004fb8 @ 08004fb8 ====

int FUN_08004fb8(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    iVar1 = FUN_08004fd0(-param_1);
    return iVar1;
  }
  if (param_1 != 0) {
    param_1 = (param_1 << LZCOUNT(param_1)) << 0x15;
  }
  return param_1;
}



//==== FUNC FUN_08004fcc @ 08004fcc ====

undefined8 FUN_08004fcc(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    uVar1 = param_1 << LZCOUNT(param_1);
    iVar2 = (0x420 - (LZCOUNT(param_1) + 3)) * 0x100000 + (uVar1 >> 0xb);
    param_1 = uVar1 << 0x15;
  }
  return CONCAT44(iVar2,param_1);
}



//==== FUNC FUN_08004fd0 @ 08004fd0 ====

undefined8 FUN_08004fd0(int param_1,int param_2)

{
  uint uVar1;
  char in_ZR;
  
  if (in_ZR == '\0') {
    uVar1 = param_1 << LZCOUNT(param_1);
    param_2 = (0x420 - (LZCOUNT(param_1) + 3)) * 0x100000 + (uVar1 >> 0xb);
    param_1 = uVar1 << 0x15;
  }
  return CONCAT44(param_2,param_1);
}



//==== FUNC FUN_08004fe8 @ 08004fe8 ====

longlong FUN_08004fe8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if ((int)(param_2 ^ param_4) < 0) {
    param_4 = param_4 ^ 0x80000000;
    uVar6 = param_1 - param_3;
    iVar9 = (param_2 - param_4) - (uint)(param_3 > param_1);
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      bVar10 = param_1 < uVar6;
      param_1 = param_1 - uVar6;
      param_2 = (param_2 - iVar9) - (uint)bVar10;
      bVar10 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      param_4 = param_4 + iVar9 + (uint)bVar10;
    }
    bVar10 = 0xffdfffff < param_2 << 1;
    if (!bVar10) {
      bVar10 = param_4 * 2 < 0x200000 || param_4 * -2 + 0x200000 < (uint)bVar10;
    }
    if (bVar10) {
      if (0xffdfffff < param_2 << 1) {
        return CONCAT44(param_2,param_1);
      }
      if ((param_3 | param_4 << 1) == 0) {
LAB_080056b0:
        return CONCAT44(param_2,param_1);
      }
      if (param_2 * 2 < 0x200000) {
        bVar10 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + (param_4 & 0x7fffffff) + (uint)bVar10;
        goto LAB_080056b0;
      }
      param_4 = param_4 & 0x7fffffff;
      uVar6 = (param_2 >> 0x14) - 1;
      if (0x34 < (int)uVar6) goto LAB_080056b0;
    }
    else {
      uVar6 = (param_2 >> 0x14) - (param_4 >> 0x14);
      if (0x35 < (int)uVar6) goto LAB_080056b0;
      param_4 = (param_4 << 0xb | 0x80000000) >> 0xb;
    }
    uVar3 = (int)(param_2 << 0xb | 0x80000000) >> 0xb;
    uVar7 = uVar6 - 0x20;
    if (uVar7 == 0 || (int)uVar6 < 0x20) {
      uVar4 = param_3 >> (uVar6 & 0xff);
      uVar8 = (param_3 >> (uVar6 & 0x1f) | param_3 << 0x20 - (uVar6 & 0x1f)) ^ uVar4;
      uVar7 = param_4 >> (uVar6 & 0x1f) | param_4 << 0x20 - (uVar6 & 0x1f);
      uVar5 = (uVar7 << (uVar6 & 0xff)) >> (uVar6 & 0xff);
      uVar6 = uVar4 ^ uVar7 ^ uVar5;
      bVar10 = CARRY4(param_1,uVar6);
      uVar6 = param_1 + uVar6;
      uVar7 = uVar3 + uVar5 + (uint)bVar10;
      if (!CARRY4(uVar3,uVar5) && !CARRY4(uVar3 + uVar5,(uint)bVar10)) goto LAB_08005664;
    }
    else {
      uVar4 = param_4 >> (uVar7 & 0xff);
      uVar8 = (param_4 >> (uVar7 & 0x1f) | param_4 << 0x20 - (uVar7 & 0x1f)) ^ uVar4;
      if (param_3 != 0) {
        uVar8 = uVar8 | 1;
      }
      uVar6 = param_1 + uVar4;
      uVar7 = uVar3 + CARRY4(param_1,uVar4);
      if (!CARRY4(uVar3,(uint)CARRY4(param_1,uVar4))) goto LAB_08005664;
    }
    uVar3 = uVar7 & 1;
    uVar7 = uVar7 >> 1;
    bVar2 = (byte)uVar6;
    uVar6 = (uint)(uVar3 != 0) << 0x1f | uVar6 >> 1;
    uVar3 = uVar8 & 1;
    uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
    if (uVar3 != 0) {
      uVar8 = uVar8 | 1;
    }
LAB_08005664:
    bVar10 = 0x80000000 < uVar8 || uVar8 + 0x80000000 < (uint)((uVar6 & 1) != 0);
    uVar3 = uVar7 + 0x100000 + (param_2 & 0xfff00000) + (uint)CARRY4(uVar6,(uint)bVar10);
    if (uVar3 * 2 < 0xffe00000) {
      return CONCAT44(uVar3,uVar6 + bVar10);
    }
    return (ulonglong)(uVar3 & 0xfff00000) << 0x20;
  }
  uVar6 = param_1 - param_3;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    uVar3 = (param_2 - param_4) - (uint)(param_3 > param_1) ^ 0x80000000;
    bVar10 = param_1 < uVar6;
    param_1 = param_1 - uVar6;
    param_2 = (param_2 - uVar3) - (uint)bVar10;
    bVar10 = CARRY4(param_3,uVar6);
    param_3 = param_3 + uVar6;
    param_4 = param_4 + uVar3 + (uint)bVar10;
  }
  bVar10 = 0xffdfffff < param_2 << 1;
  if (!bVar10) {
    bVar10 = param_4 * 2 < 0x200000 || param_4 * -2 + 0x200000 < (uint)bVar10;
  }
  uVar6 = param_2;
  if (bVar10) {
    bVar10 = 0xffdfffff < param_2 * 2;
    if (bVar10) {
      if (param_2 * 2 == 0xffe00000) {
        bVar10 = 0xffdfffff < param_4 << 1;
      }
      if (bVar10) {
        uVar6 = 0xffffffff;
      }
      goto LAB_08005124;
    }
    param_4 = param_4 & 0x7fffffff;
    if ((param_3 | param_4 << 1) != 0) {
      if (0x3fffff < param_2 * 2) {
        uVar3 = (param_2 >> 0x14) - 1;
        if (0x34 < (int)uVar3) goto LAB_08005124;
        goto LAB_080050ba;
      }
      bVar10 = param_1 < param_3;
      param_1 = param_1 - param_3;
      uVar6 = (param_2 - param_4) - (uint)bVar10;
    }
    if ((param_1 | uVar6 << 1) == 0) {
      uVar6 = 0;
    }
  }
  else {
    uVar3 = (param_2 >> 0x14) - (param_4 >> 0x14);
    if (0x36 < (int)uVar3) goto LAB_08005124;
    if ((int)uVar3 < 2) {
      uVar6 = param_4 << 0xb | 0x80000000 | param_3 >> 0x15;
      if (uVar3 == 1) {
        param_3 = param_3 << 10;
        uVar6 = uVar6 >> 1;
      }
      else {
        param_3 = param_3 << 0xb;
      }
      uVar7 = param_1 >> 0x15;
      uVar3 = param_1 * 0x800;
      param_1 = uVar3 - param_3;
      uVar6 = ((param_2 << 0xb | 0x80000000 | uVar7) - uVar6) - (uint)(uVar3 < param_3);
      uVar3 = param_2 & 0xfff00000;
      if (-1 < (int)uVar6) {
        if (uVar6 == 0) {
          iVar9 = LZCOUNT(param_1);
          uVar6 = param_1 << iVar9;
          if (uVar6 == 0) goto LAB_08005124;
          param_1 = 0;
          iVar9 = iVar9 + 0x20;
        }
        else {
          iVar9 = LZCOUNT(uVar6);
          uVar6 = uVar6 << iVar9 | param_1 >> (0x20U - iVar9 & 0xff);
          param_1 = param_1 << iVar9;
        }
        uVar7 = param_2 >> 0x1f | (param_2 & 0xfff00000) << 1;
        uVar3 = uVar7 + iVar9 * -0x200000;
        uVar4 = uVar3 & 0xfffffffe;
        uVar3 = uVar3 >> 1 | param_2 & 0x80000000;
        if (uVar7 < (uint)(iVar9 * 0x200000) || uVar4 == 0) {
          uVar4 = 0x200000 - uVar4 >> 0x15;
          uVar3 = uVar6 >> (uVar4 & 0x1f);
          uVar7 = uVar6 << 0x20 - (uVar4 & 0x1f);
          uVar6 = uVar6 >> (uVar4 & 0xff);
          param_1 = param_1 >> (uVar4 & 0xff) ^ (uVar3 | uVar7) ^ uVar6;
          uVar3 = param_2 & 0x80000000;
        }
      }
      bVar10 = (param_1 >> 10 & 1) != 0;
      uVar7 = param_1 >> 0xb | uVar6 << 0x15;
      if (bVar10) {
        bVar10 = (param_1 >> 0xb & 1) != 0;
      }
      param_1 = uVar7 + bVar10;
      uVar6 = uVar3 + ((uVar6 & 0x7fffffff) >> 0xb) + (uint)CARRY4(uVar7,(uint)bVar10);
      goto LAB_08005124;
    }
    param_4 = (param_4 << 0xb | 0x80000000) >> 0xb;
LAB_080050ba:
    uVar7 = param_2 >> 0x14;
    uVar6 = (param_2 << 0xb | 0x80000000) >> 0xb;
    uVar4 = uVar3 - 0x20;
    if (uVar4 == 0 || (int)uVar3 < 0x20) {
      uVar4 = param_3 >> (uVar3 & 0xff);
      uVar8 = (param_3 >> (uVar3 & 0x1f) | param_3 << 0x20 - (uVar3 & 0x1f)) ^ uVar4;
      uVar5 = param_4 >> (uVar3 & 0xff);
      uVar4 = uVar4 ^ (param_4 >> (uVar3 & 0x1f) | param_4 << 0x20 - (uVar3 & 0x1f)) ^ uVar5;
      uVar3 = (param_1 - uVar4) - (uint)(uVar8 != 0);
      uVar6 = (uVar6 - uVar5) - (uint)(param_1 <= uVar4 && (uint)(uVar8 == 0) <= param_1 - uVar4);
    }
    else {
      uVar5 = param_4 >> (uVar4 & 0xff);
      uVar8 = (param_3 | param_3 << 0x10) >> 0x10 | param_4 << (0x20 - uVar4 & 0xff);
      uVar3 = (param_1 - uVar5) - (uint)(uVar8 != 0);
      uVar6 = uVar6 - (param_1 <= uVar5 && (uint)(uVar8 == 0) <= param_1 - uVar5);
    }
    uVar4 = -uVar8;
    if (((uVar6 & 0x100000) == 0) && (uVar7 = uVar7 - 1, (uVar7 & 0x7ff) != 0)) {
      bVar1 = (uVar4 & 0x80000000) != 0;
      uVar4 = uVar8 * -2;
      uVar5 = uVar3 * 2;
      bVar10 = CARRY4(uVar3,uVar3);
      uVar3 = uVar3 * 2 + (uint)bVar1;
      uVar6 = uVar6 * 2 + (uint)(bVar10 || CARRY4(uVar5,(uint)bVar1));
    }
    bVar10 = 0x80000000 < uVar4 || uVar4 + 0x80000000 < (uint)((uVar3 & 1) != 0);
    param_1 = uVar3 + bVar10;
    uVar6 = (uVar6 & 0xffefffff) + uVar7 * 0x100000 + (uint)CARRY4(uVar3,(uint)bVar10);
  }
LAB_08005124:
  return CONCAT44(uVar6,param_1);
}



//==== FUNC FUN_08005168 @ 08005168 ====

longlong FUN_08005168(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_r7;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  uVar11 = (param_2 ^ param_4) & 0x80000000;
  uVar7 = param_2 >> 0x14 & 0x7ff;
  bVar12 = uVar7 == 0;
  if (!bVar12) {
    unaff_r7 = param_4 >> 0x14 & 0x7ff;
    bVar12 = unaff_r7 == 0;
  }
  if (!bVar12) {
    bVar12 = uVar7 == 0x7ff;
  }
  if (!bVar12) {
    bVar12 = unaff_r7 == 0x7ff;
  }
  if (bVar12) {
    uVar9 = param_4 >> 0x14 & 0x7ff;
    if (uVar7 == 0x7ff || uVar9 == 0x7ff) {
      bVar12 = (param_1 | param_2 << 1) == 0;
      if (!bVar12) {
        bVar12 = (param_3 | param_4 << 1) == 0;
      }
      if (bVar12) {
        param_2 = 0xffffffff;
      }
      uVar7 = param_4 * 2;
      if (uVar7 < 0xffe00001) {
        uVar7 = param_2 * 2;
        param_4 = param_2;
      }
      if (uVar7 < 0xffe00001) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
      goto LAB_08005216;
    }
    bVar12 = (param_1 | param_2 << 1) == 0;
    if (!bVar12) {
      bVar12 = (param_3 | param_4 << 1) == 0;
    }
    if (!bVar12) {
      if (uVar7 != 0) {
        param_4 = param_4 & 0x7fffffff;
        iVar8 = LZCOUNT(param_4);
        if (param_4 == 0) {
          iVar8 = iVar8 + LZCOUNT(param_3);
        }
        uVar5 = iVar8 - 0xb;
        if (uVar5 < 0x20) {
          uVar4 = param_4 << (uVar5 & 0xff) | param_3 >> (0x20 - uVar5 & 0xff);
        }
        else {
          uVar4 = param_3 << (iVar8 - 0x2bU & 0xff);
        }
        param_3 = param_3 << (uVar5 & 0xff);
        iVar8 = ((uVar7 + uVar9) - uVar5) + 1;
        goto LAB_08005190;
      }
      if (uVar9 != 0) {
        uVar7 = param_2 << 0xc;
        uVar4 = param_1;
        if (param_2 << 0xc == 0) {
          uVar4 = 0;
          uVar9 = uVar9 - 0x14;
          uVar7 = param_1;
        }
        iVar10 = LZCOUNT(uVar7);
        iVar8 = uVar9 - iVar10;
        param_1 = uVar4 << iVar10 + 0xc;
        uVar7 = uVar7 << iVar10 | uVar4 >> (0x20U - (iVar10 + 0xc) & 0xff);
        uVar4 = param_4 & 0x1fffff | 0x100000;
        goto LAB_0800519c;
      }
    }
  }
  else {
    iVar8 = uVar7 + unaff_r7;
    uVar4 = param_4 & 0x1fffff | 0x100000;
LAB_08005190:
    uVar7 = param_2 << 0xb | 0x80000000 | param_1 >> 0x15;
    param_1 = param_1 << 0xb;
LAB_0800519c:
    uVar2 = (ulonglong)uVar7 * (ulonglong)param_3 +
            ((ulonglong)param_1 * (ulonglong)param_3 >> 0x20);
    uVar9 = (uint)(uVar2 >> 0x20);
    lVar3 = (ulonglong)uVar4 * (ulonglong)param_1 + (uVar2 & 0xffffffff);
    uVar6 = (uint)lVar3;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x20);
    if ((int)((ulonglong)param_1 * (ulonglong)param_3) != 0) {
      uVar6 = uVar6 | 1;
    }
    uVar2 = (ulonglong)uVar4 * (ulonglong)uVar7 +
            (ulonglong)CONCAT14(CARRY4(uVar9,uVar5),uVar9 + uVar5);
    uVar7 = (uint)uVar2;
    uVar4 = (uint)(uVar2 >> 0x20);
    bVar12 = (uVar2 & 0x10000000000000) != 0;
    if (!bVar12) {
      bVar1 = (uVar6 & 0x80000000) != 0;
      uVar6 = uVar6 << 1;
      bVar13 = CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar1);
      bVar12 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar13);
      uVar2 = CONCAT44(uVar4 * 2 + (uint)bVar13,uVar7 * 2 + (uint)bVar1);
    }
    uVar4 = (uint)(uVar2 >> 0x20);
    uVar7 = (uint)uVar2;
    iVar10 = iVar8 + -0x3ff + (uint)bVar12;
    if (iVar10 != 0 &&
        iVar10 < 0 == (SCARRY4(iVar8 + -0x400,1) != SCARRY4(iVar8 + -0x3ff,(uint)bVar12))) {
      bVar12 = 0x80000000 < uVar6 || uVar6 + 0x80000000 < (uint)((uVar2 & 1) != 0);
      iVar8 = uVar4 + iVar10 * 0x100000 + (uint)CARRY4(uVar7,(uint)bVar12);
      if (iVar8 < 0) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
      return CONCAT44(iVar8 - 0x100000U | uVar11,uVar7 + bVar12);
    }
    uVar9 = -iVar10 + 1;
    uVar5 = -iVar10 - 0x1f;
    if ((int)uVar9 < 0x20) {
      bVar12 = (uVar6 & 1) != 0;
      uVar6 = uVar6 >> 1;
      if (bVar12) {
        uVar6 = uVar6 | 1;
      }
      uVar5 = 0x20 - uVar9 & 0xff;
      bVar12 = uVar5 == 0 && bVar12 || uVar5 != 0 && (uVar7 << uVar5 - 1 & 0x80000000) != 0;
      uVar6 = uVar6 | uVar7 << uVar5;
      uVar7 = uVar7 >> (uVar9 & 0xff) | uVar4 << (0x20 - uVar9 & 0xff);
      uVar4 = uVar4 >> (uVar9 & 0xff);
LAB_080052fc:
      bVar12 = 0x80000000 < uVar6 || uVar6 + 0x80000000 < (uint)bVar12;
      return CONCAT44(uVar4 + uVar11 + CARRY4(uVar7,(uint)bVar12),uVar7 + bVar12);
    }
    if ((int)uVar9 < 0x36) {
      uVar9 = uVar7 >> (uVar5 & 0xff);
      if ((uVar6 | uVar7 << 1) != 0) {
        uVar9 = uVar9 | 1;
      }
      uVar6 = uVar5 & 0xff;
      uVar7 = uVar4 >> uVar6;
      uVar5 = 0x20 - uVar5 & 0xff;
      bVar12 = uVar5 == 0 &&
               (uVar6 == 0 && (bool)((byte)(uVar2 >> 0x18) >> 7) ||
               uVar6 != 0 && (uVar4 >> uVar6 - 1 & 1) != 0) ||
               uVar5 != 0 && (uVar4 << uVar5 - 1 & 0x80000000) != 0;
      uVar6 = uVar9 | uVar4 << uVar5;
      uVar4 = 0;
      goto LAB_080052fc;
    }
  }
  param_1 = 0;
  param_4 = uVar11;
LAB_08005216:
  return CONCAT44(param_4,param_1);
}



//==== FUNC FUN_0800530c @ 0800530c ====

ulonglong FUN_0800530c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined in_CY;
  bool bVar14;
  
  uVar11 = param_2 ^ param_4;
  uVar12 = uVar11 & 0x80000000;
  uVar4 = param_2 >> 0x14 & 0x7ff;
  bVar14 = uVar4 == 0;
  if (!bVar14) {
    unaff_r7 = param_4 >> 0x14 & 0x7ff;
    bVar14 = unaff_r7 == 0;
  }
  if (!bVar14) {
    in_CY = 0x7fe < uVar4;
    bVar14 = uVar4 == 0x7ff;
  }
  if (!bVar14) {
    in_CY = 0x7fe < unaff_r7;
    bVar14 = unaff_r7 == 0x7ff;
  }
  if (bVar14) {
    if (uVar4 != 0x7ff) {
      unaff_r7 = param_4 >> 0x14 & 0x7ff;
    }
    if (uVar4 == 0x7ff || unaff_r7 == 0x7ff) {
      uVar4 = param_2 * 2;
      if (uVar4 < 0xffe00001) {
        uVar4 = param_4 * 2;
      }
      if (uVar4 == 0xffe00000) {
        uVar4 = param_2 << 1;
      }
      if (uVar4 < 0xffe00000) {
        if ((param_4 & 0x7fffffff) != 0x7ff00000) {
          uVar12 = uVar12 | 0x7ff00000;
        }
      }
      else {
        uVar12 = 0xffffffff;
      }
      return (ulonglong)uVar12 << 0x20;
    }
    uVar7 = param_1 | param_2 << 1;
    bVar14 = uVar7 == 0;
    if (!bVar14) {
      uVar7 = param_3 | param_4 << 1;
      bVar14 = uVar7 == 0;
    }
    if (bVar14) {
      if ((param_1 | param_2 << 1) == 0) {
        if ((param_3 | param_4 << 1) == 0) {
          uVar12 = ~uVar7;
        }
        return CONCAT44(uVar12,uVar7);
      }
      return CONCAT44(uVar11,uVar7) & 0x80000000ffffffff | 0x7ff0000000000000;
    }
    if (unaff_r7 == 0) {
      uVar2 = param_3 * 2;
      iVar3 = param_4 * 2 + (uint)CARRY4(param_3,param_3);
      iVar10 = LZCOUNT(iVar3);
      if (iVar3 == 0) {
        iVar10 = iVar10 + LZCOUNT(uVar2);
      }
      uVar7 = iVar10 - 0xb;
      if (uVar7 < 0x20) {
        param_4 = iVar3 << (uVar7 & 0xff) | uVar2 >> (0x20 - uVar7 & 0xff);
      }
      else {
        param_4 = uVar2 << (iVar10 - 0x2bU & 0xff);
      }
      param_3 = uVar2 << (uVar7 & 0xff);
      if (uVar4 != 0) {
        iVar3 = uVar4 + uVar7 + -1;
        goto LAB_0800532e;
      }
    }
    else {
      uVar7 = -unaff_r7;
    }
    param_2 = param_2 & 0x7fffffff;
    iVar3 = LZCOUNT(param_2);
    if (param_2 == 0) {
      iVar3 = iVar3 + LZCOUNT(param_1);
    }
    uVar4 = iVar3 - 0xb;
    if (uVar4 < 0x20) {
      param_2 = param_2 << (uVar4 & 0xff) | param_1 >> (0x20 - uVar4 & 0xff);
    }
    else {
      param_2 = param_1 << (iVar3 - 0x2bU & 0xff);
    }
    param_1 = param_1 << (uVar4 & 0xff);
    iVar3 = uVar7 - uVar4;
  }
  else {
    iVar3 = (uVar4 - unaff_r7) - (uint)!(bool)in_CY;
  }
LAB_0800532e:
  param_2 = param_2 & 0xfffff;
  param_4 = param_4 & 0xfffff;
  uVar4 = param_1 - param_3;
  iVar10 = (param_2 - param_4) - (uint)(param_3 > param_1);
  uVar7 = param_4 | 0x100000;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    iVar3 = iVar3 + -1;
    uVar2 = uVar4 & 0x80000000;
    uVar1 = uVar4 * 2;
    uVar4 = uVar1 + param_3;
    iVar10 = iVar10 * 2 + (uint)(uVar2 != 0) + uVar7 + (uint)CARRY4(uVar1,param_3);
  }
  uVar1 = iVar10 << 0xb | uVar4 >> 0x15;
  uVar6 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar6;
  uVar8 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
  uVar4 = uVar4 * 0x800;
  uVar2 = uVar4 - uVar8;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar8 > uVar4);
  if (uVar1 <= uVar5 && (uint)(uVar8 <= uVar4) <= uVar1 - uVar5) {
    uVar6 = uVar6 - 1;
    bVar14 = CARRY4(uVar2,param_3);
    uVar2 = uVar2 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 0xb | uVar2 >> 0x15;
  uVar13 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar13;
  uVar8 = (uint)((ulonglong)param_3 * (ulonglong)uVar13);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar13 >> 0x20);
  uVar2 = uVar2 * 0x800;
  uVar4 = uVar2 - uVar8;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar8 > uVar2);
  if (uVar1 <= uVar5 && (uint)(uVar8 <= uVar2) <= uVar1 - uVar5) {
    uVar13 = uVar13 - 1;
    bVar14 = CARRY4(uVar4,param_3);
    uVar4 = uVar4 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 10 | uVar4 >> 0x16;
  uVar8 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar8;
  uVar9 = (uint)((ulonglong)param_3 * (ulonglong)uVar8);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar8 >> 0x20);
  uVar4 = uVar4 * 0x400;
  uVar2 = uVar4 - uVar9;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar9 > uVar4);
  if (uVar1 <= uVar5 && (uint)(uVar9 <= uVar4) <= uVar1 - uVar5) {
    uVar8 = uVar8 - 1;
    bVar14 = CARRY4(uVar2,param_3);
    uVar2 = uVar2 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 0xb | uVar2 >> 0x15;
  uVar8 = uVar6 << 0x15 | uVar13 << 10 | uVar8;
  uVar6 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar6;
  uVar13 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
  uVar2 = uVar2 * 0x800;
  uVar4 = uVar2 - uVar13;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar13 > uVar2);
  if (uVar1 <= uVar5 && (uint)(uVar13 <= uVar2) <= uVar1 - uVar5) {
    uVar6 = uVar6 - 1;
    bVar14 = CARRY4(uVar4,param_3);
    uVar4 = uVar4 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar2 = iVar10 << 0xb | uVar4 >> 0x15;
  uVar5 = uVar2 / uVar7;
  uVar2 = uVar2 - uVar7 * uVar5;
  uVar7 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
  uVar1 = (uint)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20);
  uVar4 = uVar4 * 0x800;
  uVar5 = uVar5 - (uVar2 <= uVar1 && (uint)(uVar7 <= uVar4) <= uVar2 - uVar1);
  if (uVar2 - uVar1 != (uint)(uVar7 > uVar4) || uVar4 - uVar7 != 0) {
    uVar5 = uVar5 | 1;
  }
  uVar4 = uVar5 & 0xffc007ff;
  uVar7 = (uVar4 | (uVar6 & 0x7ff) << 0xb) >> 2;
  iVar10 = iVar3 + 0x400;
  if (iVar10 == 0 || iVar10 < 0 != SCARRY4(iVar3,0x400)) {
    uVar1 = (uVar4 << 0x1e) >> 1;
    uVar7 = uVar7 | uVar8 << 0x14;
    uVar4 = uVar8 >> 0xc | 0x100000;
    uVar2 = -iVar10 + 1;
    uVar5 = -iVar10 - 0x1f;
    if ((int)uVar2 < 0x20) {
      uVar8 = uVar2 & 0xff;
      uVar13 = uVar2 & 0xff;
      uVar11 = uVar4 >> (uVar2 & 0xff);
      uVar6 = uVar7 >> (uVar2 & 0xff) | uVar4 << (0x20 - uVar2 & 0xff);
      uVar5 = 0x20 - uVar2 & 0xff;
      bVar14 = uVar5 == 0 &&
               (uVar13 == 0 &&
                (uVar8 == 0 && 0x1f < uVar2 || uVar8 != 0 && (uVar7 >> uVar8 - 1 & 1) != 0) ||
               uVar13 != 0 && (uVar4 >> uVar13 - 1 & 1) != 0) ||
               uVar5 != 0 && (uVar7 << uVar5 - 1 & 0x80000000) != 0;
      uVar1 = uVar1 | uVar7 << uVar5;
    }
    else {
      if (0x34 < (int)uVar2) {
        return ((ulonglong)uVar11 & 0x80000000) << 0x20;
      }
      uVar6 = uVar4 >> (uVar5 & 0xff);
      uVar11 = 0x20 - uVar5 & 0xff;
      bVar14 = uVar11 != 0 && (uVar4 << uVar11 - 1 & 0x80000000) != 0;
      uVar1 = (uVar1 | uVar7 << 1) >> 1 | uVar7 >> (uVar5 & 0xff) | uVar4 << uVar11;
      uVar11 = 0;
    }
    bVar14 = 0x80000000 < uVar1 || uVar1 + 0x80000000 < (uint)bVar14;
    return CONCAT44(uVar11 + uVar12 + CARRY4(uVar6,(uint)bVar14),uVar6 + bVar14);
  }
  bVar14 = 0x80000000 < uVar4 * 0x40000000 ||
           uVar4 * 0x40000000 + 0x80000000 < (uint)((uVar5 & 4) != 0);
  uVar4 = uVar8 * 0x100000;
  uVar11 = (uVar8 >> 0xc) +
           iVar10 * 0x100000 + (uint)(CARRY4(uVar7,uVar4) || CARRY4(uVar7 + uVar4,(uint)bVar14));
  if ((int)(uVar11 + 0x100000) < 0) {
    return (ulonglong)(uVar12 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar11 | uVar12,uVar7 + uVar4 + bVar14);
}



//==== FUNC FUN_08005564 @ 08005564 ====

undefined4 FUN_08005564(void)

{
  undefined4 *puVar1;
  undefined4 unaff_r7;
  
  puVar1 = (undefined4 *)FUN_080056b8(DAT_080055b4);
  *puVar1 = &DAT_080055b8;
  puVar1[9] = &DAT_080055bc;
  puVar1[1] = &DAT_080055b8;
  puVar1[0xe] = s_false_080055c0;
  puVar1[2] = &DAT_080055b8;
  puVar1[3] = &DAT_080055b8;
  puVar1[4] = &DAT_080055b8;
  puVar1[5] = &DAT_080055b8;
  puVar1[6] = &DAT_080055b8;
  puVar1[10] = &DAT_080055b8;
  puVar1[0xb] = &DAT_080055b8;
  puVar1[0xc] = &DAT_080055b8;
  puVar1[0xd] = &DAT_080055b8;
  puVar1[0xf] = &DAT_080055c8;
  puVar1[0x10] = &DAT_080055b8;
  puVar1[0x11] = &DAT_080055b8;
  return unaff_r7;
}



//==== FUNC FUN_0800559e @ 0800559e ====

int * FUN_0800559e(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_080056b8(DAT_080055b4);
  if (*piVar1 == 0) {
    FUN_08005564();
  }
  return piVar1;
}



//==== FUNC FUN_080055d0 @ 080055d0 ====

void FUN_080055d0(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2 / param_3;
  param_1[1] = param_2 - (param_2 / param_3) * param_3;
  return;
}



//==== FUNC FUN_080056b8 @ 080056b8 ====

void FUN_080056b8(void)

{
  return;
}



//==== FUNC FUN_080056bc @ 080056bc ====

bool FUN_080056bc(uint *param_1)

{
  return (*param_1 & DAT_0800634c) == 0x20000000;
}



//==== FUNC FUN_080056d4 @ 080056d4 ====

undefined4 FUN_080056d4(undefined4 *param_1)

{
  bool bVar1;
  undefined4 unaff_r7;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(*param_1);
  }
  (*(code *)param_1[1])(*param_1);
  return unaff_r7;
}



//==== FUNC FUN_080056ea @ 080056ea ====

undefined4 FUN_080056ea(void)

{
  int iVar1;
  undefined auStack_110 [16];
  undefined auStack_100 [28];
  undefined uStack_e4;
  undefined auStack_e3 [227];
  
  iVar1 = FUN_08006478(3,&uStack_e4,0xde);
  if (iVar1 != 0) {
    FUN_080067d8(auStack_100,0x1c);
    FUN_08006686(auStack_100);
    FUN_080067e0(auStack_110,0xd);
    iVar1 = FUN_080066ae(auStack_110,0xd);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_080067e8(auStack_e3,0xdc,auStack_110,auStack_100);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



//==== FUNC FUN_0800573e @ 0800573e ====

void FUN_0800573e(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined auStack_118 [2];
  undefined local_116;
  undefined auStack_114 [4];
  short local_110 [4];
  undefined2 local_108;
  undefined *local_104;
  undefined *local_100;
  undefined *local_fc;
  undefined *local_f8;
  undefined *local_f4;
  undefined auStack_f0 [16];
  undefined auStack_e0 [12];
  undefined auStack_d4 [12];
  undefined auStack_c8 [28];
  undefined auStack_ac [2];
  undefined auStack_aa [150];
  
  FUN_080067d8(auStack_c8,0x1c);
  FUN_08006686(auStack_c8);
  FUN_08000368(&local_104,DAT_08006350,0x14);
  local_104 = auStack_c8;
  iVar1 = FUN_08006478(1,auStack_d4,10);
  if (iVar1 != 0) {
    local_fc = auStack_d4;
  }
  iVar1 = FUN_08006478(2,auStack_e0,10);
  if (iVar1 != 0) {
    local_f8 = auStack_e0;
  }
  iVar1 = FUN_08006478(4,auStack_114,4);
  if (iVar1 != 0) {
    local_f4 = auStack_114;
  }
  FUN_080067e0(auStack_f0,0xe);
  iVar1 = FUN_080066ae(auStack_f0,0xe);
  if (iVar1 != 0) {
    local_100 = auStack_f0;
  }
  local_110[0] = FUN_08006ac6(local_104);
  local_110[1] = FUN_08006ac6(local_100);
  local_110[2] = FUN_08006ac6(local_fc);
  local_110[3] = FUN_08006ac6(local_f8);
  local_108 = FUN_08006ac6(local_f4);
  uVar3 = 2;
  for (uVar2 = 0; (uVar2 & 0xff) < 5; uVar2 = (uVar2 & 0xff) + 1) {
    uVar3 = local_110[uVar2 & 0xff] + 2 + uVar3;
  }
  if (uVar3 < 0x97) {
    FUN_08000348(auStack_ac,&DAT_08005968,2);
    FUN_08006b08(auStack_aa,&local_104,local_110,5);
    (**(code **)(param_1 + 0x20b8))(param_1,auStack_ac,uVar3);
  }
  else {
    FUN_08000348(auStack_118,DAT_08006354,3);
    local_116 = 0xc;
    (**(code **)(param_1 + 0x20b8))(param_1,auStack_118,3);
  }
  return;
}



//==== FUNC FUN_0800585c @ 0800585c ====

/* WARNING: Removing unreachable block (ram,0x080058ea) */

void FUN_0800585c(int param_1)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined auStack_a0 [2];
  undefined local_9e;
  short local_98 [4];
  undefined *local_90 [4];
  undefined auStack_80 [2];
  undefined auStack_7e [102];
  
  FUN_08000368(local_90,DAT_08006358,0x10);
  iVar2 = FUN_08006b88();
  if (iVar2 != 0) {
    local_90[1] = &DAT_0800596c;
    local_90[2] = &DAT_0800596c;
  }
  uVar3 = 2;
  for (uVar4 = 0; (uVar4 & 0xffff) < 4; uVar4 = (uVar4 & 0xffff) + 1) {
    iVar2 = FUN_08006ad2(local_90[uVar4 & 0xffff],0x20);
    if (iVar2 == 0) {
      local_90[uVar4 & 0xffff] = &DAT_0800596c;
    }
    sVar1 = FUN_08006ac6(local_90[uVar4 & 0xffff]);
    local_98[uVar4 & 0xffff] = sVar1;
    uVar3 = local_98[uVar4 & 0xffff] + 2 + uVar3;
  }
  if (uVar3 < 0x65) {
    FUN_08000348(auStack_80,&DAT_08005c44,2);
    FUN_08006b08(auStack_7e,local_90,local_98,4);
    (**(code **)(param_1 + 0x20b8))(param_1,auStack_80,uVar3);
  }
  else {
    FUN_08000348(auStack_a0,DAT_08006360,3);
    local_9e = 0xc;
    (**(code **)(param_1 + 0x20b8))(param_1,auStack_a0,3);
  }
  return;
}



//==== FUNC FUN_08005970 @ 08005970 ====

void FUN_08005970(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_228;
  short local_224;
  short local_222;
  undefined auStack_220 [2];
  undefined auStack_21e [12];
  undefined local_212;
  undefined auStack_211 [2];
  undefined auStack_20f [9];
  undefined local_206;
  undefined auStack_205 [2];
  undefined auStack_203 [8];
  undefined local_1fb;
  undefined auStack_1fa [2];
  undefined auStack_1f8 [221];
  undefined local_11b;
  
  uVar3 = *DAT_08006364;
  sVar1 = CONCAT11(*(undefined *)(param_2 + 2),*(undefined *)(param_2 + 3));
  local_228._3_1_ = (undefined)((uint)uVar3 >> 0x18);
  local_228._0_2_ = (ushort)uVar3;
  local_228 = uVar3;
  if (*(char *)(param_2 + 1) == '\x05') {
    if (sVar1 == 0xfb) {
      iVar2 = FUN_080063a4(0,&local_224);
      if (iVar2 == 0) {
        local_228._0_3_ = CONCAT12(0x15,(ushort)local_228);
        (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
      }
      else if (local_224 == -1) {
        iVar2 = FUN_080063a4(1,&local_224);
        if (iVar2 == 0) {
          local_228._0_3_ = CONCAT12(0x15,(ushort)local_228);
          (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
        }
        else if (local_224 == -1) {
          iVar2 = FUN_080063a4(2,&local_224);
          if (iVar2 == 0) {
            local_228._0_3_ = CONCAT12(0x15,(ushort)local_228);
            (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
          }
          else if (local_224 == -1) {
            iVar2 = FUN_080063a4(3,&local_224);
            if (iVar2 == 0) {
              local_228._0_3_ = CONCAT12(0x15,(ushort)local_228);
              (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
            }
            else if (local_224 == -1) {
              FUN_08006b64(auStack_220,0xd);
              FUN_08000348(auStack_21e,param_2 + 4,0xc);
              local_212 = 0;
              FUN_08006b64(auStack_211,10);
              FUN_08000348(auStack_20f,param_2 + 0x10,9);
              local_206 = 0;
              FUN_08006b64(auStack_205,9);
              FUN_08000348(auStack_203,param_2 + 0x19,8);
              local_1fb = 0;
              FUN_08006b64(auStack_1fa,0xde);
              FUN_08000348(auStack_1f8,param_2 + 0x21,0xdd);
              local_11b = 0;
              iVar2 = FUN_080065a4(0,auStack_220,0x106,0);
              if (iVar2 == 0) {
                local_228._0_3_ = CONCAT12(0xe,(ushort)local_228);
                (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
              }
              else {
                local_228._0_3_ = (uint3)(ushort)local_228;
                (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
              }
            }
            else {
              local_228._0_3_ = CONCAT12(5,(ushort)local_228);
              (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
            }
          }
          else {
            local_228._0_3_ = CONCAT12(5,(ushort)local_228);
            (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
          }
        }
        else {
          local_228._0_3_ = CONCAT12(5,(ushort)local_228);
          (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
        }
      }
      else {
        local_228._0_3_ = CONCAT12(5,(ushort)local_228);
        (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
      }
    }
    else {
      local_228._0_3_ = CONCAT12(8,(ushort)local_228);
      (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
    }
  }
  else if (*(char *)(param_2 + 1) == '\x06') {
    if (sVar1 == 3) {
      iVar2 = FUN_080063a4(4,&local_222);
      if (iVar2 == 0) {
        local_228._0_3_ = CONCAT12(0x15,(ushort)local_228);
        (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
      }
      else if (local_222 == -1) {
        iVar2 = FUN_080065a4(0x106,(undefined *)(param_2 + 2),5,0);
        if (iVar2 == 0) {
          local_228._0_3_ = CONCAT12(0xe,(ushort)local_228);
          (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
        }
        else {
          local_228._0_3_ = (uint3)(ushort)local_228;
          (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
        }
      }
      else {
        local_228._0_3_ = CONCAT12(5,(ushort)local_228);
        (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
      }
    }
    else {
      local_228._0_3_ = CONCAT12(8,(ushort)local_228);
      (**(code **)(param_1 + 0x20b8))(param_1,&local_228,3);
    }
  }
  else {
    (**(code **)(param_1 + 0x20b8))(param_1,&DAT_08005f94,3);
  }
  return;
}



//==== FUNC FUN_08005c48 @ 08005c48 ====

void FUN_08005c48(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  uint local_80;
  undefined auStack_7c [2];
  undefined local_7a;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined auStack_48 [20];
  undefined auStack_34 [6];
  undefined auStack_2e [30];
  
  local_50 = *DAT_08006368;
  uStack_4c = DAT_08006368[1];
  local_58 = *DAT_0800636c;
  uStack_54 = DAT_0800636c[1];
  local_60 = *DAT_08006370;
  uStack_5c = DAT_08006370[1];
  local_68 = *DAT_08006374;
  uStack_64 = DAT_08006374[1];
  local_70 = *DAT_08006378;
  uStack_6c = DAT_08006378[1];
  local_78 = *DAT_0800637c;
  uStack_74 = DAT_0800637c[1];
  FUN_08000348(auStack_7c,DAT_08006380,3);
  uVar3 = (uint)CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2));
  FUN_08000348(auStack_48,param_2 + 3,uVar3);
  (**(code **)(param_1 + 0x20c4))(param_1,0);
  for (local_80 = 0; local_80 < 5; local_80 = local_80 + 1) {
    FUN_08006e92();
    iVar2 = FUN_08006e54(auStack_34,6,DAT_08006384);
    if ((iVar2 != 0) && (iVar2 = FUN_08006f5c(auStack_34,&local_50,6), iVar2 == 0)) break;
  }
  if (local_80 == 5) {
    local_7a = 1;
    (**(code **)(param_1 + 0x20b8))(param_1,auStack_7c,3);
    (**(code **)(param_1 + 0x20c4))(param_1,1);
  }
  else {
    for (local_80 = 0; local_80 < 10; local_80 = local_80 + 1) {
      uVar1 = FUN_080003d8(auStack_48);
      FUN_08006c4c(8,auStack_48,uVar1);
      iVar2 = FUN_08006e54(auStack_34,7,DAT_08006388);
      if ((iVar2 != 0) && (iVar2 = FUN_08006f5c(auStack_34,&local_58,7), iVar2 == 0)) {
        FUN_08006d50(&local_78,5);
        iVar2 = FUN_08006e54(auStack_34,0x1e,DAT_0800638c);
        if ((iVar2 != 0) && (iVar2 = FUN_08006f5c(auStack_2e,auStack_48,uVar3 - 1), iVar2 == 0))
        break;
      }
    }
    if (local_80 == 10) {
      local_7a = 1;
      (**(code **)(param_1 + 0x20b8))(param_1,auStack_7c,3);
      (**(code **)(param_1 + 0x20c4))(param_1,1);
    }
    else {
      for (local_80 = 0; local_80 < 10; local_80 = local_80 + 1) {
        uVar1 = FUN_080003d8(auStack_48);
        FUN_08006c4c(0x11,auStack_48,uVar1);
        iVar2 = FUN_08006e54(auStack_34,7,DAT_08006388);
        if ((iVar2 != 0) && (iVar2 = FUN_08006f5c(auStack_34,&local_60,7), iVar2 == 0)) break;
      }
      if (local_80 == 10) {
        local_7a = 1;
        (**(code **)(param_1 + 0x20b8))(param_1,auStack_7c,3);
        (**(code **)(param_1 + 0x20c4))(param_1,1);
      }
      else {
        for (local_80 = 0; local_80 < 10; local_80 = local_80 + 1) {
          FUN_08006d50(&local_68,6);
          iVar2 = FUN_08006e54(auStack_34,6,DAT_08006388);
          if ((iVar2 != 0) && (iVar2 = FUN_08006f5c(auStack_34,&local_70,6), iVar2 == 0)) break;
        }
        if (local_80 == 10) {
          local_7a = 1;
          (**(code **)(param_1 + 0x20b8))(param_1,auStack_7c,3);
          (**(code **)(param_1 + 0x20c4))(param_1,1);
        }
        else {
          (**(code **)(param_1 + 0x20b8))(param_1,auStack_7c,3);
          (**(code **)(param_1 + 0x20c4))(param_1,1);
        }
      }
    }
  }
  return;
}



//==== FUNC FUN_08005eb2 @ 08005eb2 ====

undefined8 FUN_08005eb2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uStack_18;
  undefined local_16;
  undefined uStack_15;
  short local_14;
  undefined2 uStack_12;
  undefined4 local_10;
  
  local_14 = (short)param_3;
  uStack_12 = (undefined2)((uint)param_3 >> 0x10);
  uStack_18 = (undefined2)param_2;
  local_16 = (undefined)((uint)param_2 >> 0x10);
  uStack_15 = (undefined)((uint)param_2 >> 0x18);
  local_10 = param_4;
  FUN_08000348(&uStack_18,DAT_08006390,3);
  local_10 = *DAT_08006394;
  local_14 = 0;
  iVar1 = FUN_080063a4(5,&local_14);
  if (iVar1 == 0) {
    local_16 = 0x15;
    (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,3);
  }
  else if (local_14 == 1) {
    local_16 = 0;
    (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,3);
  }
  else {
    iVar1 = FUN_080065a4(0x10b,&local_10,3,1);
    if (iVar1 == 0) {
      local_16 = 0xe;
      (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,3);
    }
    else {
      FUN_080066f6(0xffffffff);
      local_16 = 0;
      (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,3);
    }
  }
  return CONCAT26(uStack_12,CONCAT24(local_14,CONCAT13(uStack_15,CONCAT12(local_16,uStack_18))));
}



//==== FUNC FUN_08005f5e @ 08005f5e ====

undefined8 FUN_08005f5e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  undefined2 uStack_10;
  undefined local_e;
  undefined local_d;
  undefined4 local_c;
  
  uStack_10 = (undefined2)param_3;
  local_e = (undefined)((uint)param_3 >> 0x10);
  local_d = (undefined)((uint)param_3 >> 0x18);
  local_c = param_4;
  FUN_08000348(&uStack_10,DAT_08006398,5);
  local_e = 0;
  local_d = *(undefined *)(param_1 + 3);
  uVar1 = FUN_08006b88();
  local_c = CONCAT31(local_c._1_3_,uVar1);
  (**(code **)(param_1 + 0x20b8))(param_1,&uStack_10,5);
  return CONCAT44(local_c,CONCAT13(local_d,CONCAT12(local_e,uStack_10)));
}



//==== FUNC FUN_08005f98 @ 08005f98 ====

/* WARNING: Removing unreachable block (ram,0x08005ff6) */

void FUN_08005f98(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *local_b00;
  undefined *local_afc;
  int *local_af8;
  int local_af4;
  undefined4 local_af0;
  undefined auStack_aec [16];
  undefined auStack_adc [32];
  undefined auStack_abc [4];
  undefined auStack_ab8 [40];
  undefined auStack_a90 [40];
  byte local_a68;
  byte local_a67;
  byte local_a66;
  byte local_a65;
  byte local_a64;
  byte local_a63;
  byte local_a62;
  byte local_a61;
  byte local_a60;
  byte local_a5f;
  byte local_a5e;
  byte local_a5d;
  byte local_a5c;
  byte local_a5b;
  byte local_a5a;
  byte local_a59;
  undefined auStack_858 [2];
  char local_856;
  undefined local_855;
  undefined local_854;
  undefined local_853;
  undefined local_852;
  undefined local_851;
  undefined auStack_84c [2088];
  
  FUN_08000368(auStack_858,DAT_0800639c,0x834);
  local_856 = *(char *)(param_2 + 1);
  FUN_080067d8(auStack_adc,0x20);
  FUN_080067d8(auStack_abc,0x264);
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == '\x02') {
    FUN_0800016c(auStack_adc,0x20,0);
    iVar2 = FUN_08006fc0(0);
    if (iVar2 == 0) {
      local_855 = 6;
      (**(code **)(param_1 + 0x20b8))(param_1,auStack_858,4);
    }
    else {
      local_af4 = 0x834;
      local_af0 = 0x264;
      local_af8 = &local_af4;
      local_afc = &local_852;
      local_b00 = &local_af0;
      iVar2 = FUN_0800713e(iVar2,param_2 + 6,
                           (uint)*(byte *)(param_2 + 4) * 0x100 + (uint)*(byte *)(param_2 + 5),
                           auStack_abc);
      if (iVar2 == 0) {
        FUN_08006478(0,auStack_aec,0xc);
        iVar2 = FUN_08006f5c(auStack_a90,auStack_aec,0xc);
        if (iVar2 == 0) {
          uVar3 = (uint)local_a64 * 0x1000000;
          uVar4 = uVar3 + (uint)local_a63 * 0x10000;
          uVar5 = uVar4 + (uint)local_a62 * 0x100;
          iVar2 = (uint)local_a68 * 0x1000000 + (uint)local_a67 * 0x10000 + (uint)local_a66 * 0x100
                  + (uint)local_a65 + ((int)uVar3 >> 0x1f) +
                  (uint)CARRY4(uVar3,(uint)local_a63 * 0x10000) +
                  (uint)CARRY4(uVar4,(uint)local_a62 * 0x100) + (uint)CARRY4(uVar5,(uint)local_a61);
          uVar3 = (uint)local_a5c * 0x1000000;
          uVar4 = uVar3 + (uint)local_a5b * 0x10000;
          uVar6 = uVar4 + (uint)local_a5a * 0x100;
          iVar7 = (uint)local_a60 * 0x1000000 + (uint)local_a5f * 0x10000 + (uint)local_a5e * 0x100
                  + (uint)local_a5d + ((int)uVar3 >> 0x1f) +
                  (uint)CARRY4(uVar3,(uint)local_a5b * 0x10000) +
                  (uint)CARRY4(uVar4,(uint)local_a5a * 0x100) + (uint)CARRY4(uVar6,(uint)local_a59);
          if ((iVar2 < iVar7) || ((iVar2 <= iVar7 && (uVar5 + local_a61 <= uVar6 + local_a59)))) {
            FUN_08000348(auStack_adc,auStack_ab8,0x20);
            iVar2 = FUN_08006bb8(auStack_adc);
            if (iVar2 == 0) {
              local_855 = 0x25;
              (**(code **)(param_1 + 0x20b8))(param_1,auStack_858,4);
            }
            else {
              local_856 = 2;
              local_854 = (undefined)(local_af4 / 0x100);
              local_853 = (undefined)local_af4;
              *(undefined *)(param_1 + 8) = 1;
              (**(code **)(param_1 + 0x20b8))(param_1,auStack_858,local_af4 + 6);
            }
          }
          else {
            local_855 = 0x24;
            FUN_08000348(&local_854,&local_a68,8);
            FUN_08000348(auStack_84c,&local_a60,8);
            (**(code **)(param_1 + 0x20b8))(param_1,auStack_858,0x14);
          }
        }
        else {
          FUN_0800016c(auStack_adc,0x20,0);
          local_855 = 0x22;
          (**(code **)(param_1 + 0x20b8))(param_1,auStack_858,4);
        }
      }
      else {
        local_855 = 0x21;
        local_854 = (undefined)((uint)iVar2 >> 0x18);
        local_853 = (undefined)((uint)iVar2 >> 0x10);
        local_852 = (undefined)((uint)iVar2 >> 8);
        local_851 = (undefined)iVar2;
        (**(code **)(param_1 + 0x20b8))(param_1,auStack_858,8);
      }
    }
  }
  else if (cVar1 == '\x03') {
    FUN_08007d10();
    FUN_08007c9e();
    local_b00 = (undefined4 *)0x0;
    FUN_08007d8c(param_2 + 2,param_3 + -1,&local_855,&local_b00);
    (**(code **)(param_1 + 0x20b8))(param_1,auStack_858,(int)local_b00 + 3);
  }
  else {
    local_855 = 2;
    (**(code **)(param_1 + 0x20b8))(param_1,auStack_858,4);
  }
  return;
}



//==== FUNC FUN_0800630c @ 0800630c ====

void FUN_0800630c(int param_1,undefined4 param_2,int param_3)

{
  undefined uStack_13a0;
  undefined auStack_139f [5003];
  
  FUN_08000368(&uStack_13a0,DAT_080063a0,5000);
  FUN_08000348(auStack_139f,param_2,param_3);
  (**(code **)(param_1 + 0x20b8))(param_1,&uStack_13a0,param_3 + 1);
  return;
}



//==== FUNC FUN_080063a4 @ 080063a4 ====

undefined4 FUN_080063a4(byte param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined local_48;
  undefined local_47;
  undefined auStack_44 [16];
  undefined auStack_34 [16];
  undefined4 auStack_24 [6];
  
  FUN_08000368(auStack_24,DAT_080067b4,0x18);
  iVar1 = FUN_08006fc0(0);
  *DAT_080067b8 = iVar1;
  if (*DAT_080067b8 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_080067d8(auStack_44,0x10);
    FUN_08000368(auStack_34,DAT_080067bc,0x10);
    iVar1 = FUN_0800676c(auStack_44,0x10);
    if (iVar1 == 0) {
      iVar1 = FUN_08006ffc(*DAT_080067b8,auStack_34,0x10);
      if (iVar1 != 0) {
        FUN_08006fde(*DAT_080067b8);
        return 0;
      }
    }
    else {
      iVar1 = FUN_08006ffc(*DAT_080067b8,auStack_44,0x10);
      if (iVar1 != 0) {
        FUN_08006fde(*DAT_080067b8);
        return 0;
      }
    }
    iVar1 = FUN_080070de(*DAT_080067b8,&local_48,2,auStack_24[param_1]);
    if (iVar1 == 0) {
      FUN_08006fde(*DAT_080067b8);
      *param_2 = CONCAT11(local_48,local_47);
      uVar2 = 1;
    }
    else {
      FUN_08006fde(*DAT_080067b8);
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== FUNC FUN_08006478 @ 08006478 ====

ushort FUN_08006478(byte param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  ushort uVar2;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined auStack_140 [16];
  undefined auStack_130 [16];
  int aiStack_120 [6];
  undefined local_108;
  undefined local_107;
  
  FUN_08000368(aiStack_120,DAT_080067c0,0x18);
  local_148 = *DAT_080067c4;
  uStack_144 = DAT_080067c4[1];
  iVar1 = FUN_08006fc0(0);
  *DAT_080067b8 = iVar1;
  if (*DAT_080067b8 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_080067d8(auStack_140,0x10);
    FUN_08000368(auStack_130,DAT_080067c8,0x10);
    iVar1 = FUN_0800676c(auStack_140,0x10);
    if (iVar1 == 0) {
      iVar1 = FUN_08006ffc(*DAT_080067b8,auStack_130,0x10);
      if (iVar1 != 0) {
        FUN_08006fde(*DAT_080067b8);
        return 0;
      }
    }
    else {
      iVar1 = FUN_08006ffc(*DAT_080067b8,auStack_140,0x10);
      if (iVar1 != 0) {
        FUN_08006fde(*DAT_080067b8);
        return 0;
      }
    }
    iVar1 = FUN_080070de(*DAT_080067b8,&local_108,2,aiStack_120[param_1]);
    if (iVar1 == 0) {
      uVar2 = CONCAT11(local_108,local_107);
      if (uVar2 == *(byte *)((int)&local_148 + (uint)param_1)) {
        if (param_3 < uVar2) {
          uVar2 = param_3;
        }
        iVar1 = FUN_080070de(*DAT_080067b8,&local_108,uVar2,aiStack_120[param_1] + 2);
        if (iVar1 == 0) {
          FUN_08006fde(*DAT_080067b8);
          FUN_08000348(param_2,&local_108,uVar2);
        }
        else {
          FUN_08006fde(*DAT_080067b8);
          uVar2 = 0;
        }
      }
      else {
        FUN_08006fde(*DAT_080067b8);
        uVar2 = 0;
      }
    }
    else {
      FUN_08006fde(*DAT_080067b8);
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== FUNC FUN_080065a4 @ 080065a4 ====

undefined8 FUN_080065a4(undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined param_4)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080065bc(param_1,param_2,param_3,param_4);
  return CONCAT44(unaff_r7,(uint)(iVar1 != 0));
}



//==== FUNC FUN_080065bc @ 080065bc ====

undefined4 FUN_080065bc(int param_1,undefined4 param_2,ushort param_3,undefined param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_34 [16];
  undefined auStack_24 [16];
  
  if ((param_3 < 0x211) && (param_3 != 0)) {
    if (param_1 + (uint)param_3 < 0x211) {
      iVar2 = FUN_08006fc0(0);
      *DAT_080067b8 = iVar2;
      if (*DAT_080067b8 == 0) {
        uVar1 = 0;
      }
      else {
        FUN_080067d8(auStack_34,0x10);
        FUN_08000368(auStack_24,DAT_080067cc,0x10);
        iVar2 = FUN_0800676c(auStack_34,0x10);
        if (iVar2 == 0) {
          iVar2 = FUN_08006ffc(*DAT_080067b8,auStack_24,0x10);
          if (iVar2 != 0) {
            FUN_08006fde(*DAT_080067b8);
            return 0;
          }
        }
        else {
          iVar2 = FUN_08006ffc(*DAT_080067b8,auStack_34,0x10);
          if (iVar2 != 0) {
            FUN_08006fde(*DAT_080067b8);
            return 0;
          }
        }
        iVar2 = FUN_0800705e(*DAT_080067b8,param_2,param_3,param_1,param_4);
        if (iVar2 == 0) {
          FUN_08006fde(*DAT_080067b8);
          uVar1 = 1;
        }
        else {
          FUN_08006fde(*DAT_080067b8);
          uVar1 = 0;
        }
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_08006686 @ 08006686 ====

undefined4 FUN_08006686(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < 0xc; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_08007e70(param_1 + (uVar1 & 0xff) * 2,*(undefined *)(DAT_080067d0 + (uVar1 & 0xff)),0);
  }
  return param_4;
}



//==== FUNC FUN_080066ae @ 080066ae ====

undefined8 FUN_080066ae(undefined4 param_1,undefined param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 unaff_r7;
  
  sVar1 = FUN_08006478(0,param_1,param_2);
  if (sVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(byte)sVar1;
  }
  return CONCAT44(unaff_r7,uVar2);
}



//==== FUNC FUN_080066cc @ 080066cc ====

void FUN_080066cc(void)

{
  FUN_08008878();
  FUN_08008ad8();
  FUN_08008d00(0x307);
  FUN_08008cec();
  FUN_08008ca4();
  FUN_080088c4();
  FUN_08008af8();
  return;
}



//==== FUNC FUN_080066f6 @ 080066f6 ====

undefined8 FUN_080066f6(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_10;
  
  local_10 = param_4 & 0xffffff00;
  FUN_08008878();
  FUN_08008ad8();
  FUN_08008d00(0x307);
  uVar2 = FUN_08008ce6(0xffffffff);
  if ((param_1 & ~uVar2) != param_1) {
    cVar1 = FUN_08008b0a();
    local_10._1_3_ = (undefined3)(param_4 >> 8);
    local_10 = CONCAT31(local_10._1_3_,cVar1);
    if (cVar1 != '\0') {
      FUN_080088c4();
      FUN_08008af8();
      uVar3 = 0;
      goto LAB_0800676a;
    }
    cVar1 = FUN_08008bbc(param_1 | ~uVar2);
    local_10 = CONCAT31(local_10._1_3_,cVar1);
    if (cVar1 != '\0') {
      FUN_080088c4();
      FUN_08008af8();
      uVar3 = 0;
      goto LAB_0800676a;
    }
  }
  FUN_080088c4();
  FUN_08008af8();
  uVar3 = 1;
LAB_0800676a:
  return CONCAT44(local_10,uVar3);
}



//==== FUNC FUN_0800676c @ 0800676c ====

undefined8 FUN_0800676c(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 == '\x10') {
    FUN_08000348(param_1,DAT_080067d4,0x10);
    for (uVar2 = 0;
        ((uVar2 & 0xff) < 0x10 && (uVar2 = uVar2 & 0xff, *(char *)(param_1 + uVar2) == -1));
        uVar2 = uVar2 + 1) {
    }
    if ((uVar2 & 0xff) == 0x10) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(param_4,uVar1);
}



//==== FUNC FUN_080067d8 @ 080067d8 ====

undefined4 * FUN_080067d8(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  do {
    uVar3 = param_2;
    param_2 = uVar3 - 0x10;
    if (0xf < uVar3) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
  } while (0xf < uVar3 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  if ((int)(uVar3 << 0x1d) < 0) {
    puVar2 = param_1 + 1;
    *param_1 = 0;
  }
  puVar1 = puVar2;
  if ((param_2 & 2) != 0) {
    puVar1 = (undefined4 *)((int)puVar2 + 2);
    *(undefined2 *)puVar2 = 0;
  }
  puVar2 = puVar1;
  if ((int)(uVar3 * -0x80000000) < 0) {
    puVar2 = (undefined4 *)((int)puVar1 + 1);
    *(undefined *)puVar1 = 0;
  }
  return puVar2;
}



//==== FUNC FUN_080067e0 @ 080067e0 ====

void FUN_080067e0(undefined4 param_1,undefined4 param_2)

{
  FUN_08000174(param_1,param_2,0);
  return;
}



//==== FUNC FUN_080067e8 @ 080067e8 ====

undefined4 FUN_080067e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_47c [516];
  undefined auStack_278 [516];
  undefined auStack_74 [96];
  
  FUN_08000368(auStack_47c,DAT_08006a80,0x204);
  FUN_08000348(auStack_278,auStack_47c,0x204);
  iVar1 = FUN_08008e70(auStack_74);
  if (iVar1 == 0) {
    uVar2 = FUN_080003d8(param_3);
    iVar1 = FUN_08008e78(auStack_74,param_3,uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_080003d8(param_4);
      iVar1 = FUN_08008e78(auStack_74,param_4,uVar2);
      if (iVar1 == 0) {
        FUN_08008e80(auStack_74,param_1,param_2,auStack_278);
        uVar2 = 0;
      }
      else {
        uVar2 = 0xfffffffe;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== FUNC FUN_08006874 @ 08006874 ====

undefined4 FUN_08006874(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined auStack_580 [516];
  undefined auStack_37c [256];
  undefined auStack_27c [516];
  undefined auStack_78 [92];
  
  FUN_08000368(auStack_580,DAT_08006a84,0x204);
  FUN_08000348(auStack_27c,auStack_580,0x204);
  uVar5 = (uint)*(byte *)(param_1 + DAT_08006a88) * 0x1000000 +
          (uint)*(byte *)(param_1 + DAT_08006a8c) * 0x10000 +
          (uint)*(byte *)(param_1 + DAT_08006a90) * 0x100 + (uint)*(byte *)(param_1 + DAT_08006a94);
  if (DAT_08006a98 < uVar5) {
    uVar1 = 0xfffffffd;
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + DAT_08006a9c);
    FUN_08000348(auStack_37c,DAT_08006a9c + (param_1 - uVar4),uVar4);
    iVar2 = FUN_08008e70(auStack_78);
    if (iVar2 == 0) {
      for (iVar2 = 0; iVar2 < (int)(uVar5 / 0x10); iVar2 = iVar2 + 1) {
        iVar3 = FUN_08008e78(auStack_78,param_1 + iVar2 * 0x10,0x10);
        if (iVar3 != 0) {
          return 0xfffffffe;
        }
      }
      if ((uVar5 % 0x10 == 0) ||
         (iVar2 = FUN_08008e78(auStack_78,param_1 + iVar2 * 0x10,uVar5 % 0x10), iVar2 == 0)) {
        uVar1 = FUN_08008e80(auStack_78,auStack_37c,uVar4,auStack_27c);
      }
      else {
        uVar1 = 0xfffffffe;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



//==== FUNC FUN_0800695a @ 0800695a ====

undefined8 FUN_0800695a(void)

{
  undefined4 unaff_r7;
  
  FUN_08006874(DAT_08006aa0);
  return CONCAT44(unaff_r7,1);
}



//==== FUNC FUN_0800696e @ 0800696e ====

undefined8 FUN_0800696e(void)

{
  undefined4 unaff_r7;
  
  FUN_08006984(0x8000000);
  return CONCAT44(unaff_r7,1);
}



//==== FUNC FUN_08006984 @ 08006984 ====

undefined4 FUN_08006984(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined auStack_580 [516];
  undefined auStack_37c [516];
  undefined auStack_178 [92];
  undefined auStack_11c [256];
  
  FUN_08000368(auStack_580,DAT_08006aa4,0x204);
  FUN_08000348(auStack_37c,auStack_580,0x204);
  uVar5 = (uint)*(byte *)(param_1 + 0xeffc) * 0x1000000 +
          (uint)*(byte *)(param_1 + 0xeffd) * 0x10000 + (uint)*(byte *)(param_1 + 0xeffe) * 0x100 +
          (uint)*(byte *)(param_1 + 0xefff);
  if (uVar5 < 0xef21) {
    uVar4 = (uint)*(byte *)(param_1 + 0xeffb);
    FUN_08000348(auStack_11c,(param_1 - uVar4) + 0xeffb,uVar4);
    iVar2 = FUN_08008e70(auStack_178);
    if (iVar2 == 0) {
      for (iVar2 = 0; iVar2 < (int)(uVar5 / 0x10); iVar2 = iVar2 + 1) {
        iVar3 = FUN_08008e78(auStack_178,param_1 + iVar2 * 0x10,0x10);
        if (iVar3 != 0) {
          return 0xfffffffe;
        }
      }
      if ((uVar5 % 0x10 == 0) ||
         (iVar2 = FUN_08008e78(auStack_178,param_1 + iVar2 * 0x10,uVar5 % 0x10), iVar2 == 0)) {
        uVar1 = FUN_08008e80(auStack_178,auStack_11c,uVar4,auStack_37c);
      }
      else {
        uVar1 = 0xfffffffe;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}



//==== FUNC FUN_08006aa8 @ 08006aa8 ====

undefined4 FUN_08006aa8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (param_3 <= uVar1) {
      return 1;
    }
    if (*(char *)(param_1 + uVar1) != *(char *)(param_2 + uVar1)) break;
    uVar1 = uVar1 + 1;
  }
  return 0;
}



//==== FUNC FUN_08006ac6 @ 08006ac6 ====

ulonglong FUN_08006ac6(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080003d8();
  return CONCAT44(unaff_r7,iVar1 + 1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_08006ad2 @ 08006ad2 ====

undefined FUN_08006ad2(int param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if ((uint)param_2 <= (uVar1 & 0xff)) {
      return 0;
    }
    if (*(char *)(param_1 + (uVar1 & 0xff)) == '\0') break;
    if (0x5e < *(byte *)(param_1 + (uVar1 & 0xff)) - 0x20) {
      return 0;
    }
    uVar1 = (uVar1 & 0xff) + 1;
  }
  return 1;
}



//==== FUNC FUN_08006b08 @ 08006b08 ====

void FUN_08006b08(undefined *param_1,int param_2,int param_3,byte param_4)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < (uint)param_4; uVar1 = (uVar1 & 0xff) + 1) {
    *param_1 = (char)((ushort)*(undefined2 *)(param_3 + (uVar1 & 0xff) * 2) >> 8);
    param_1[1] = (char)*(undefined2 *)(param_3 + (uVar1 & 0xff) * 2);
    FUN_08000348(param_1 + 2,*(undefined4 *)(param_2 + (uVar1 & 0xff) * 4),
                 *(undefined2 *)(param_3 + (uVar1 & 0xff) * 2));
    param_1 = param_1 + 2 + *(ushort *)(param_3 + (uVar1 & 0xff) * 2);
  }
  return;
}



//==== FUNC FUN_08006b64 @ 08006b64 ====

void FUN_08006b64(undefined *param_1,undefined2 param_2)

{
  *param_1 = (char)((ushort)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}



//==== FUNC FUN_08006b70 @ 08006b70 ====

undefined4 FUN_08006b70(void)

{
  undefined4 unaff_r7;
  
  FUN_08008f50(0x71b);
  FUN_08008f50(0x71c);
  FUN_0800915c();
  return unaff_r7;
}



//==== FUNC FUN_08006b88 @ 08006b88 ====

undefined8 FUN_08006b88(void)

{
  byte bVar1;
  undefined4 unaff_r7;
  
  bVar1 = FUN_080091a2(3);
  return CONCAT44(unaff_r7,(uint)bVar1);
}



//==== FUNC FUN_08006b94 @ 08006b94 ====

bool FUN_08006b94(byte param_1)

{
  uint uVar1;
  
  FUN_08009170(3,param_1);
  uVar1 = FUN_08006b88();
  return param_1 == uVar1;
}



//==== FUNC FUN_08006bb8 @ 08006bb8 ====

bool FUN_08006bb8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined auStack_30 [36];
  
  uVar2 = 0;
  while ((uVar2 & 0xff) < 0x10) {
    FUN_08009170((uVar2 & 0xff) + 5 & 0xff,0);
    uVar3 = uVar2 & 0xff;
    FUN_08009170(uVar3 + 5 & 0xff,
                 CONCAT11(*(undefined *)(param_1 + (uVar2 & 0xff) * 2),
                          *(undefined *)(param_1 + uVar3 * 2 + 1)));
    uVar2 = uVar3 + 1;
  }
  FUN_080067d8(auStack_30,0x20);
  FUN_08006c18(auStack_30);
  iVar1 = FUN_08006f5c(auStack_30,param_1,0x20);
  return iVar1 == 0;
}



//==== FUNC FUN_08006c18 @ 08006c18 ====

undefined4 FUN_08006c18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  
  for (uVar2 = 0; (uVar2 & 0xff) < 0x10; uVar2 = (uVar2 & 0xff) + 1) {
    uVar1 = FUN_080091a2((uVar2 & 0xff) + 5 & 0xff);
    *(char *)(param_1 + (uVar2 & 0xff) * 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(param_1 + (uVar2 & 0xff) * 2 + 1) = (char)uVar1;
  }
  return param_4;
}



//==== FUNC FUN_08006c4c @ 08006c4c ====

void FUN_08006c4c(char param_1,int param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  byte local_80 [104];
  
  FUN_080067d8(local_80,100);
  sVar1 = 0;
  uVar2 = 0;
  if (param_1 == '\b') {
    param_3 = param_3 & 0xff;
    sVar1 = (short)param_3 + 2;
  }
  else if (param_1 == '\x11') {
    param_3 = param_3 & 0xff;
    sVar1 = (short)param_3 + 7;
  }
  local_80[0] = 0xaa;
  local_80[1] = (byte)((ushort)sVar1 >> 8);
  local_80[2] = (byte)sVar1;
  local_80[3] = param_1;
  FUN_08006e3a(0xaa);
  for (uVar3 = 1; (uVar3 & 0xffff) < 4; uVar3 = (uVar3 & 0xffff) + 1) {
    FUN_08006e3a(local_80[uVar3 & 0xffff]);
    uVar2 = local_80[uVar3 & 0xffff] + uVar2;
  }
  if ((param_1 == '\b') || (param_1 == '\x11')) {
    FUN_08006e3a(1);
    uVar2 = uVar2 + 1;
  }
  if (param_1 == '\x11') {
    FUN_08006e3a(2);
    FUN_08006e3a(1);
    FUN_08006e3a(1);
    FUN_08006e3a(param_3 + 1 & 0xff);
    FUN_08006e3a(9);
    uVar2 = param_3 + 0xe + uVar2;
  }
  for (uVar3 = 0; (uVar3 & 0xffff) < (param_3 & 0xff); uVar3 = (uVar3 & 0xffff) + 1) {
    FUN_08006e3a(*(undefined *)(param_2 + (uVar3 & 0xffff)));
    uVar2 = *(byte *)(param_2 + (uVar3 & 0xffff)) + uVar2;
  }
  FUN_08006e3a(~(uVar2 & 0xff) + 1 & 0xff);
  return;
}



//==== FUNC FUN_08006d50 @ 08006d50 ====

void FUN_08006d50(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    FUN_08006e3a(*(undefined *)(param_1 + uVar1));
  }
  return;
}



//==== FUNC FUN_08006d68 @ 08006d68 ====

void FUN_08006d68(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080003d8(param_1);
  FUN_08006d50(param_1,uVar1);
  return;
}



//==== FUNC FUN_08006d7c @ 08006d7c ====

void FUN_08006d7c(undefined4 param_1)

{
  FUN_08008f50(0x602);
  FUN_08008f50(0x602);
  FUN_08008f50(0x711);
  FUN_080091e0(DAT_08006f40,0x18,3,4);
  FUN_080091e0(DAT_08006f40,4,3,8);
  FUN_08009418(DAT_08006f44);
  FUN_08009494(DAT_08006f44,param_1);
  FUN_0800954c(DAT_08006f44,4);
  FUN_08009538(DAT_08006f44,8);
  FUN_0800960c(DAT_08006f44,DAT_08006f48);
  FUN_08009528(DAT_08006f44);
  FUN_08008f50(0x603);
  FUN_080091e0(DAT_08006f4c,0x10,3,2);
  FUN_08006e84();
  FUN_08008f50(0x604);
  FUN_08008f50(0x600);
  FUN_080091e0(DAT_08006f50,0x48,3,0x2000);
  FUN_080092ce(2,0xd);
  FUN_08000410(0x2000,0,2);
  FUN_080004b4(0x2000);
  FUN_08009636(0x28,1,1);
  return;
}



//==== FUNC FUN_08006e3a @ 08006e3a ====

undefined4 FUN_08006e3a(undefined param_1)

{
  int iVar1;
  undefined4 unaff_r7;
  
  FUN_08009560(DAT_08006f44,param_1);
  do {
    iVar1 = FUN_08009574(DAT_08006f44,6);
  } while (iVar1 == 0);
  return unaff_r7;
}



//==== FUNC FUN_08006e54 @ 08006e54 ====

undefined8 FUN_08006e54(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    do {
      iVar3 = param_3 + -1;
      if (param_3 == 0) goto LAB_08006e80;
      iVar2 = FUN_08009574(DAT_08006f44,5);
      param_3 = iVar3;
    } while (iVar2 != 1);
    uVar1 = FUN_0800956a(DAT_08006f44);
    *(undefined *)(param_1 + uVar4) = uVar1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < param_2);
LAB_08006e80:
  return CONCAT44(param_4,uVar4);
}



//==== FUNC FUN_08006e84 @ 08006e84 ====

undefined4 FUN_08006e84(void)

{
  undefined4 unaff_r7;
  
  FUN_080092ac(DAT_08006f4c,2,1);
  return unaff_r7;
}



//==== FUNC FUN_08006e92 @ 08006e92 ====

uint FUN_08006e92(void)

{
  uint uVar1;
  
  FUN_080092ac(DAT_08006f4c,2,0);
  for (uVar1 = 0; uVar1 < DAT_08006f54; uVar1 = uVar1 + 1) {
  }
  FUN_080092ac(DAT_08006f4c,2,1);
  return uVar1;
}



//==== FUNC FUN_08006ebe @ 08006ebe ====

undefined4 FUN_08006ebe(char param_1)

{
  undefined4 unaff_r7;
  
  if (param_1 == '\0') {
    FUN_080095ae(DAT_08006f44,0x305);
  }
  else {
    FUN_08009590(DAT_08006f44,0x305);
  }
  return unaff_r7;
}



//==== FUNC FUN_08006ede @ 08006ede ====

undefined8 FUN_08006ede(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_080095cc(DAT_08006f44,DAT_08006f48);
  if (iVar2 == 1) {
    uVar1 = FUN_0800956a(DAT_08006f44);
    *param_1 = uVar1;
    FUN_0800960c(DAT_08006f44,DAT_08006f48);
  }
  iVar3 = FUN_080095cc(DAT_08006f44,DAT_08006f58);
  if (iVar3 == 1) {
    FUN_0800960c(DAT_08006f44,DAT_08006f58);
    FUN_0800956a(DAT_08006f44);
  }
  return CONCAT44(param_4,(uint)(iVar2 == 1));
}



//==== FUNC FUN_08006f22 @ 08006f22 ====

undefined8 FUN_08006f22(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080092be(DAT_08006f50,0x2000);
  return CONCAT44(unaff_r7,(uint)(iVar1 != 0));
}



//==== FUNC FUN_08006f5c @ 08006f5c ====

uint FUN_08006f5c(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  uint uVar4;
  bool bVar5;
  
  uVar1 = 0;
  while (((uint)param_1 & 3) != 0) {
    bVar5 = param_3 != 0;
    param_3 = param_3 - 1;
    uVar2 = param_3;
    if (bVar5) {
      in_r12 = (uint)*(byte *)param_2;
      uVar1 = *(byte *)param_1 - in_r12;
      uVar2 = uVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
    if (uVar2 != 0) {
      return uVar1;
    }
  }
  do {
    uVar2 = param_3;
    param_3 = uVar2 - 4;
    bVar5 = param_3 == 0;
    if (3 < uVar2) {
      uVar1 = *param_1;
      in_r12 = *param_2;
      bVar5 = uVar1 == in_r12;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  } while (bVar5);
  if (0xfffffffb < param_3) {
    do {
      uVar3 = uVar2;
      uVar4 = uVar3 - 1;
      if (uVar3 != 0) {
        uVar1 = (uint)*(byte *)param_1 - (uint)*(byte *)param_2;
        uVar4 = uVar1;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
      }
      uVar2 = uVar3 - 1;
    } while (uVar4 == 0);
    if (uVar3 == 0) {
      uVar1 = 0;
    }
    return uVar1;
  }
  uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  uVar4 = in_r12 << 0x18 | (in_r12 >> 8 & 0xff) << 0x10 | (in_r12 >> 0x10 & 0xff) << 8 |
          in_r12 >> 0x18;
  uVar2 = uVar1 - uVar4;
  bVar5 = uVar2 != 0;
  if (uVar1 < uVar4) {
    uVar2 = 0xffffffff;
  }
  if (uVar1 >= uVar4 && bVar5) {
    uVar2 = 1;
  }
  return uVar2;
}



//==== FUNC FUN_08006fc0 @ 08006fc0 ====

undefined8 FUN_08006fc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((1 < param_1) || (iVar1 = FUN_080098d0(param_1), iVar1 == 0)) {
    iVar1 = 0;
  }
  return CONCAT44(param_4,iVar1);
}



//==== FUNC FUN_08006fde @ 08006fde ====

undefined8 FUN_08006fde(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_080075cc;
  if (param_1 != 0) {
    FUN_08009934(param_1);
    uVar1 = 0;
  }
  return CONCAT44(param_4,uVar1);
}



//==== FUNC FUN_08006ffc @ 08006ffc ====

int FUN_08006ffc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_080075d0;
  if ((((param_2 != 0) && (iVar1 = DAT_080075d0, param_3 == 0x10)) &&
      (iVar1 = DAT_080075d8, param_1 != (int *)0x0)) &&
     ((param_1 != (int *)0x0 && (iVar1 = FUN_08009a1a(param_1,param_2,0x10), iVar1 == 0)))) {
    *(undefined *)(*param_1 + 0x11bb) = 1;
  }
  return iVar1;
}



//==== FUNC FUN_0800705e @ 0800705e ====

undefined8 FUN_0800705e(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int local_28;
  
  iVar1 = DAT_080075d0;
  if ((((param_2 != 0) && (param_3 != 0)) && (iVar1 = DAT_080075d8, param_1 != 0)) &&
     (((param_1 != 0 &&
       (iVar1 = FUN_08009b0c(param_1,0x5002,param_4,param_2), local_28 = param_3, iVar1 == 0)) &&
      (param_5 != 0)))) {
    iVar1 = FUN_08009c2e(param_1,0x5002);
  }
  return CONCAT44(local_28,iVar1);
}



//==== FUNC FUN_080070de @ 080070de ====

undefined8 FUN_080070de(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *local_20;
  int local_1c;
  
  uVar1 = DAT_080075d0;
  local_20 = param_2;
  if ((((param_2 != (int *)0x0) && (param_3 != 0)) && (uVar1 = DAT_080075d8, param_1 != 0)) &&
     (param_1 != 0)) {
    local_20 = &local_1c;
    local_1c = param_3;
    uVar1 = FUN_08009b94(param_1,0x5002,param_4,param_2);
  }
  return CONCAT44(local_20,uVar1);
}



//==== FUNC FUN_0800713e @ 0800713e ====

int FUN_0800713e(int *param_1,byte *param_2,int param_3,int param_4,undefined4 *param_5,int param_6,
                int *param_7)

{
  undefined2 uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short local_874;
  short local_872;
  int local_870;
  uint local_868;
  undefined *local_864;
  undefined *local_860;
  undefined4 local_85c;
  int local_856;
  byte *local_852;
  int local_84c;
  byte *local_848;
  uint local_842;
  byte *local_83e;
  int local_838;
  byte *local_834;
  undefined local_830;
  undefined local_82f;
  undefined local_82e;
  undefined local_82d;
  undefined auStack_82c [612];
  undefined auStack_5c8 [1436];
  int *local_2c;
  int local_28;
  
  local_868 = 0;
  local_860 = (undefined *)0x0;
  local_864 = (undefined *)0x0;
  local_2c = param_1;
  local_28 = param_4;
  FUN_080067d8(&local_830,0x800);
  piVar3 = local_2c;
  iVar4 = DAT_080075d0;
  if ((((param_2 != (byte *)0x0) && (param_3 != 0)) && (local_28 != 0)) &&
     (((param_5 != (undefined4 *)0x0 && (param_6 != 0)) && (param_7 != (int *)0x0)))) {
    local_872 = CONCAT11(*param_2,param_2[1]);
    uVar2 = local_872 << 8 | (ushort)*param_2;
    if (((uVar2 == 1) || (uVar2 == 2)) &&
       ((2 < param_3 && ((local_856 = *(int *)(param_2 + 2), local_856 == 0 && (6 < param_3)))))) {
      local_852 = param_2 + 6;
      local_874 = CONCAT11(param_2[6],param_2[7]);
      if (((ushort)(local_874 << 8 | (ushort)param_2[6]) == 3) &&
         (((((8 < param_3 && (local_84c = *(int *)(param_2 + 8), local_84c == 0x71)) &&
            (0xc < param_3)) &&
           ((local_848 = param_2 + 0xc, 0x7d < param_3 &&
            (local_874 = CONCAT11(param_2[0x7d],param_2[0x7e]),
            (ushort)(local_874 << 8 | (ushort)param_2[0x7d]) == 4)))) && (0x7f < param_3)))) {
        local_842 = *(uint *)(param_2 + 0x7f);
        if (((0xf < local_842) && ((param_2[0x7f] & 0xf) == 0)) && (0x83 < param_3)) {
          local_83e = param_2 + 0x83;
          iVar5 = local_842 + 0x83;
          if ((((iVar5 < param_3) && (-1 < iVar5)) &&
              (local_874 = CONCAT11(param_2[iVar5],param_2[local_842 + 0x84]),
              (ushort)(local_874 << 8 | (ushort)param_2[iVar5]) == 5)) &&
             ((iVar5 = local_842 + 0x85, iVar5 < param_3 && (-1 < iVar5)))) {
            local_870._0_2_ = CONCAT11(param_2[local_842 + 0x86],param_2[iVar5]);
            local_870._0_3_ = CONCAT12(param_2[local_842 + 0x87],(undefined2)local_870);
            local_870 = CONCAT13(param_2[local_842 + 0x88],(undefined3)local_870);
            if ((local_870 == 0x40) && ((iVar5 = local_842 + 0x89, iVar5 < param_3 && (-1 < iVar5)))
               ) {
              local_838 = local_870;
              local_834 = param_2 + iVar5;
              if (((local_842 + 0xc9 == param_3) &&
                  (((iVar4 = DAT_080075cc, local_2c != (int *)0x0 &&
                    (iVar4 = DAT_080075cc, local_2c != (int *)0x0)) &&
                   (iVar4 = FUN_08009a82(local_2c,DAT_08007c4c), iVar4 == 0)))) &&
                 (((uVar1 = *(undefined2 *)(*(int *)(*piVar3 + 0x1358) + 0x2d), uVar2 != 2 ||
                   (iVar4 = FUN_08009a82(piVar3,DAT_08007c50), iVar4 == 0)) &&
                  ((iVar4 = FUN_08009c88(piVar3,uVar1,
                                         *(undefined2 *)(*(int *)(*piVar3 + 0x1358) + 0x2b),param_2,
                                         param_3,&local_830,&local_868), iVar4 == 0 &&
                   (iVar4 = DAT_080075d4, local_868 < 0x801)))))) {
                local_870._0_2_ = CONCAT11(local_82f,local_830);
                local_870._0_3_ = CONCAT12(local_82e,(undefined2)local_870);
                local_870 = CONCAT13(local_82d,(undefined3)local_870);
                iVar4 = DAT_080075d4;
                if (local_870 == 0x264) {
                  *param_5 = 0x264;
                  local_864 = auStack_5c8;
                  *param_7 = local_868 - 0x268;
                  local_85c = *param_5;
                  local_860 = auStack_82c;
                  FUN_08000348(local_28,auStack_82c,local_85c);
                  FUN_08000348(param_6,local_864,*param_7);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  *param_5 = 0;
  *param_7 = 0;
  return iVar4;
}



//==== FUNC FUN_080075dc @ 080075dc ====

int FUN_080075dc(int *param_1,byte *param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  short local_6c;
  undefined4 local_64;
  undefined2 local_60;
  int local_5e;
  undefined2 local_5a;
  int local_58;
  uint local_54;
  undefined2 local_50;
  int local_4e;
  byte *local_4a;
  undefined2 local_46;
  int local_44;
  byte *local_40;
  undefined2 local_3c;
  int local_3a;
  byte *local_36;
  byte *local_32;
  int *local_28;
  
  local_64 = 0;
  iVar2 = DAT_08007c54;
  if (((((param_2 != (byte *)0x0) && (param_3 != 0)) &&
       (local_6c = CONCAT11(*param_2,param_2[1]), (ushort)(local_6c << 8 | (ushort)*param_2) == 2))
      && ((2 < param_3 && (local_5e = *(int *)(param_2 + 2), local_5e == 0)))) && (6 < param_3)) {
    local_60 = 2;
    local_6c = CONCAT11(param_2[6],param_2[7]);
    if ((((ushort)(local_6c << 8 | (ushort)param_2[6]) == 8) && (8 < param_3)) &&
       ((local_58 = *(int *)(param_2 + 8), local_58 == 4 && (0xc < param_3)))) {
      local_5a = 8;
      local_54 = *(uint *)(param_2 + 0xc);
      if ((((local_54 != 0) && ((local_54 & 0xf) == 0)) && (0x10 < param_3)) &&
         (((local_6c = CONCAT11(param_2[0x10],param_2[0x11]),
           (ushort)(local_6c << 8 | (ushort)param_2[0x10]) == 3 && (0x12 < param_3)) &&
          ((local_4e = *(int *)(param_2 + 0x12), local_4e == 0x71 && (0x16 < param_3)))))) {
        local_50 = 3;
        local_4a = param_2 + 0x16;
        if (((0x87 < param_3) &&
            (local_6c = CONCAT11(param_2[0x87],param_2[0x88]),
            (ushort)(local_6c << 8 | (ushort)param_2[0x87]) == 5)) &&
           ((0x89 < param_3 &&
            ((local_44 = *(int *)(param_2 + 0x89), local_44 == 0x40 && (0x8d < param_3)))))) {
          local_46 = 5;
          local_40 = param_2 + 0x8d;
          local_6c = CONCAT11(param_2[0xcd],param_2[0xce]);
          if (((ushort)(local_6c << 8 | (ushort)param_2[0xcd]) == 7) &&
             ((0xcf < param_3 && (local_3a = *(int *)(param_2 + 0xcf), 0xd3 < param_3)))) {
            local_3c = 7;
            local_36 = param_2 + 0xd3;
            iVar3 = local_3a + 0xd3;
            if (((iVar3 < param_3) &&
                (((-1 < iVar3 && (local_32 = param_2 + iVar3, param_3 == 0x1000)) &&
                 (iVar2 = DAT_08007c58, param_1 != (int *)0x0)))) &&
               (((iVar2 = DAT_08007c58, param_1 != (int *)0x0 &&
                 (iVar2 = DAT_08007c5c, *(char *)(*param_1 + 0x11bb) == '\x01')) &&
                (local_28 = param_1, iVar2 = FUN_08009a82(param_1,DAT_08007c50), iVar2 == 0)))) {
              uVar1 = *(undefined2 *)(*(int *)(*param_1 + 0x1358) + 0x2b);
              iVar2 = FUN_08009a82(param_1,DAT_08007c4c);
              if ((iVar2 == 0) &&
                 (iVar2 = FUN_08009d22(param_1,uVar1,
                                       *(undefined2 *)(*(int *)(*param_1 + 0x1358) + 0x3b),local_4a,
                                       local_4e,param_2,&local_64), iVar2 == 0)) {
                *DAT_08007c60 = local_54;
                *DAT_08007c64 = 0;
                FUN_08000348(DAT_08007c68,local_40,local_44);
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}



//==== FUNC FUN_08007ab6 @ 08007ab6 ====

int FUN_08007ab6(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined uVar3;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  local_30 = 0;
  iVar2 = DAT_08007c54;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) &&
     (((param_5 != (undefined4 *)0x0 && (iVar2 = DAT_08007c58, param_1 != 0)) &&
      ((param_1 != 0 && (iVar2 = DAT_08007c54, param_3 == 0x1000)))))) {
    uVar1 = *DAT_08007c60 >> 0xc;
    if ((*DAT_08007c60 & 0xfff) != 0) {
      uVar1 = uVar1 + 1;
    }
    *DAT_08007c64 = *DAT_08007c64 + 1;
    if (*DAT_08007c64 < uVar1) {
      iVar2 = 0x1000;
      uVar3 = 1;
    }
    else {
      iVar2 = *DAT_08007c60 + (*DAT_08007c64 - 1) * -0x1000;
      uVar3 = 2;
      *DAT_08007c64 = 0;
    }
    local_2c = param_1;
    local_28 = param_2;
    iVar2 = FUN_08009dc6(param_1,uVar3,param_2,iVar2,param_4,&local_30);
    if (iVar2 == 0) {
      *param_5 = local_30;
      return 0;
    }
  }
  *param_5 = 0;
  *DAT_08007c64 = 0;
  return iVar2;
}



//==== FUNC FUN_08007bb2 @ 08007bb2 ====

int FUN_08007bb2(int *param_1)

{
  int iVar1;
  undefined4 local_28 [2];
  
  local_28[0] = 0;
  iVar1 = DAT_08007c58;
  if ((((param_1 != (int *)0x0) && (param_1 != (int *)0x0)) &&
      (iVar1 = FUN_08009a82(param_1,DAT_08007c50), iVar1 == 0)) &&
     (iVar1 = FUN_08009ffc(param_1,*(undefined2 *)(*(int *)(*param_1 + 0x1358) + 0x2b),DAT_08007c68,
                           0x40,DAT_08007c68,local_28), iVar1 == 0)) {
    *DAT_08007c60 = 0;
    *DAT_08007c64 = 0;
    FUN_0800016c(DAT_08007c68,0x40,0);
  }
  return iVar1;
}



//==== FUNC FUN_08007c6c @ 08007c6c ====

undefined FUN_08007c6c(undefined param_1)

{
  undefined uVar1;
  int iVar2;
  
  do {
    iVar2 = FUN_0800a0fa(DAT_08007d84,2);
  } while (iVar2 == 0);
  FUN_0800a0ea(DAT_08007d84,param_1);
  do {
    iVar2 = FUN_0800a0fa(DAT_08007d84,1);
  } while (iVar2 == 0);
  uVar1 = FUN_0800a0f2(DAT_08007d84);
  return uVar1;
}



//==== FUNC FUN_08007c9e @ 08007c9e ====

void FUN_08007c9e(void)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_08008f50(0x602);
  FUN_08008f50(0x60c);
  FUN_080091e0(DAT_08007d88,0x18,3,0xa0);
  FUN_080091e0(DAT_08007d88,4,3,0x40);
  FUN_080091e0(DAT_08007d88,0x10,3,0x10);
  FUN_080092a0(DAT_08007d88,0x10);
  local_1c = 0;
  local_20 = 0x104;
  local_18 = 0;
  local_c = 1;
  local_14 = 0x200;
  local_8 = 0x20;
  local_10 = 0;
  FUN_0800a0a0(DAT_08007d84,&local_20);
  FUN_0800a0d6(DAT_08007d84);
  return;
}



//==== FUNC FUN_08007d10 @ 08007d10 ====

undefined4 FUN_08007d10(void)

{
  undefined4 unaff_r7;
  
  FUN_0800a0e0(DAT_08007d84);
  FUN_08008f78(0x60c);
  FUN_080091e0(DAT_08007d88,0,3,0xf0);
  return unaff_r7;
}



//==== FUNC FUN_08007d2e @ 08007d2e ====

undefined4 FUN_08007d2e(int param_1,uint param_2)

{
  undefined uVar1;
  uint uVar2;
  
  FUN_080092a6(DAT_08007d88,0x10);
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    uVar1 = FUN_08007c6c(0xff);
    *(undefined *)(param_1 + uVar2) = uVar1;
  }
  FUN_080092a0(DAT_08007d88,0x10);
  return 0;
}



//==== FUNC FUN_08007d5a @ 08007d5a ====

undefined4 FUN_08007d5a(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_080092a6(DAT_08007d88,0x10);
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    FUN_08007c6c(*(undefined *)(param_1 + uVar1));
  }
  FUN_080092a0(DAT_08007d88,0x10);
  return 0;
}



//==== FUNC FUN_08007d8c @ 08007d8c ====

undefined4 FUN_08007d8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08007d5a();
  FUN_08007da0(param_3,param_4);
  return param_4;
}



//==== FUNC FUN_08007da0 @ 08007da0 ====

undefined4 FUN_08007da0(char *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  bVar4 = 0;
  uVar1 = FUN_0800a15c();
  iVar3 = 0;
  uVar5 = 1;
  while( true ) {
    while( true ) {
      iVar2 = FUN_0800a16c(uVar1,3000);
      if (iVar2 != 0) {
        *param_2 = 0;
        return param_4;
      }
      FUN_08007d2e(param_1 + iVar3,uVar5);
      if (bVar4 != 0) break;
      if (*param_1 == -0x56) {
        uVar5 = 2;
        iVar3 = iVar3 + 1;
        bVar4 = 1;
      }
    }
    if (bVar4 == 2) break;
    if (bVar4 < 2) {
      if ((((((param_1[1] == -0x39) || (param_1[1] == -0x34)) || (param_1[1] == -0x2d)) ||
           ((param_1[1] == -0x29 || (param_1[1] == -0x28)))) ||
          ((param_1[1] == -0x27 || ((param_1[1] == -0x1d || (param_1[1] == -0x5f)))))) ||
         ((param_1[1] == -0x5e || ((param_1[1] == -0x50 || (param_1[1] == -0x4f)))))) {
        uVar5 = (byte)param_1[2] + 1;
      }
      else {
        uVar5 = (uint)(byte)param_1[1] * 0x100 + (uint)(byte)param_1[2] + 7;
      }
      if (0x2000 < uVar5) {
        *param_2 = 3;
        return param_4;
      }
      iVar3 = iVar3 + 2;
      bVar4 = bVar4 + 1;
    }
  }
  *param_2 = uVar5 + 3;
  return param_4;
}



//==== FUNC FUN_08007e70 @ 08007e70 ====

void FUN_08007e70(byte *param_1,byte param_2,char param_3)

{
  byte bVar1;
  
  *param_1 = param_2 >> 4;
  param_1[1] = param_2 & 0xf;
  for (bVar1 = 0; bVar1 < 2; bVar1 = bVar1 + 1) {
    if (param_1[bVar1] < 10) {
      param_1[bVar1] = param_1[bVar1] + 0x30;
    }
    else if (param_3 == '\0') {
      param_1[bVar1] = param_1[bVar1] + 0x57;
    }
    else {
      param_1[bVar1] = param_1[bVar1] + 0x37;
    }
  }
  return;
}



//==== FUNC FUN_08007ebc @ 08007ebc ====

void FUN_08007ebc(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[4] = param_1[5];
  *param_1 = DAT_08008764;
  param_1[1] = DAT_08008768;
  param_1[2] = DAT_0800876c;
  param_1[3] = DAT_08008770;
  return;
}



//==== FUNC FUN_08007ede @ 08007ede ====

undefined4 FUN_08007ede(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x10) << 0x17) >> 0x1a;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3 * 8;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  uVar2 = 0x40 - uVar1;
  if (param_3 < uVar2) {
    uVar2 = 0;
  }
  else {
    FUN_08008742(uVar1 + param_1 + 0x18,param_2,uVar2);
    FUN_08007f98(param_1,param_1 + 0x18);
    for (; uVar2 + 0x3f < param_3; uVar2 = uVar2 + 0x40) {
      FUN_08007f98(param_1,param_2 + uVar2);
    }
    uVar1 = 0;
  }
  FUN_08008742(uVar1 + param_1 + 0x18,param_2 + uVar2,param_3 - uVar2);
  return param_4;
}



//==== FUNC FUN_08007f46 @ 08007f46 ====

undefined8 FUN_08007f46(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uStack_18;
  
  FUN_080086cc(&uStack_18,param_2 + 0x10,8);
  uVar1 = (uint)(*(int *)(param_2 + 0x10) << 0x17) >> 0x1a;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  FUN_08007ede(param_2,DAT_08008774,iVar2);
  FUN_08007ede(param_2,&uStack_18,8);
  FUN_080086cc(param_1,param_2,0x10);
  FUN_08008756(param_2,0,0x58);
  return uStack_18;
}



//==== FUNC FUN_08007f98 @ 08007f98 ====

void FUN_08007f98(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  FUN_0800870a(&local_58,param_2,0x40);
  uVar5 = DAT_08008778 + local_58 + (uVar2 & uVar1 | uVar3 & ~uVar1) + iVar4;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_0800877c + local_54 + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_08008780 + local_50 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_08008784 + local_4c + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_08008788 + local_48 + (uVar2 & uVar1 | uVar3 & ~uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_0800878c + local_44 + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_08008790 + local_40 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_08008794 + local_3c + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_08008798 + local_38 + (uVar2 & uVar1 | uVar3 & ~uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_0800879c + local_34 + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_080087a0 + local_30 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_080087a4 + local_2c + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_080087a8 + local_28 + (uVar2 & uVar1 | uVar3 & ~uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_080087ac + local_24 + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_080087b0 + local_20 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_080087b4 + local_1c + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_080087b8 + local_54 + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_080087bc + local_40 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_080087c0 + local_2c + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_080087c4 + local_58 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_080087c8 + local_44 + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_080087cc + local_30 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_080087d0 + local_1c + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_080087d4 + local_48 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_080087d8 + local_34 + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_080087dc + local_20 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_080087e0 + local_4c + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_080087e4 + local_38 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_080087e8 + local_24 + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_080087ec + local_50 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_080087f0 + local_3c + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_080087f4 + local_28 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_080087f8 + local_44 + (uVar2 ^ uVar1 ^ uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_080087fc + local_38 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_08008800 + local_2c + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_08008804 + local_20 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_08008808 + local_54 + (uVar2 ^ uVar1 ^ uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_0800880c + local_48 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_08008810 + local_3c + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_08008814 + local_30 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_08008818 + local_24 + (uVar2 ^ uVar1 ^ uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_0800881c + local_58 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_08008820 + local_4c + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_08008824 + local_40 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_08008828 + local_34 + (uVar2 ^ uVar1 ^ uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_0800882c + local_28 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_08008830 + local_1c + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_08008834 + local_50 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_08008838 + local_58 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_0800883c + local_3c + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_08008840 + local_20 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_08008844 + local_44 + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000);
  uVar5 = DAT_08008848 + local_28 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_0800884c + local_4c + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_08008850 + local_30 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_08008854 + local_54 + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000);
  uVar5 = DAT_08008858 + local_38 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_0800885c + local_1c + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_08008860 + local_40 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_08008864 + local_24 + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000);
  uVar5 = DAT_08008868 + local_48 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_0800886c + local_2c + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_08008870 + local_50 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_08008874 + local_34 + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  *param_1 = uVar5 + *param_1;
  param_1[1] = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000) + param_1[1];
  param_1[2] = uVar2 + param_1[2];
  param_1[3] = uVar3 + param_1[3];
  FUN_08008756(&local_58,0,0x40);
  return;
}



//==== FUNC FUN_080086cc @ 080086cc ====

void FUN_080086cc(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 4) {
    *(char *)(param_1 + uVar2) = (char)*(undefined4 *)(param_2 + iVar1 * 4);
    *(char *)(param_1 + uVar2 + 1) = (char)((uint)*(undefined4 *)(param_2 + iVar1 * 4) >> 8);
    *(char *)(param_1 + uVar2 + 2) = (char)((uint)*(undefined4 *)(param_2 + iVar1 * 4) >> 0x10);
    *(char *)(param_1 + uVar2 + 3) = (char)((uint)*(undefined4 *)(param_2 + iVar1 * 4) >> 0x18);
    iVar1 = iVar1 + 1;
  }
  return;
}



//==== FUNC FUN_0800870a @ 0800870a ====

void FUN_0800870a(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 4) {
    *(uint *)(param_1 + iVar1 * 4) =
         CONCAT13(*(undefined *)(param_2 + uVar2 + 3),
                  CONCAT12(*(undefined *)(param_2 + uVar2 + 2),
                           CONCAT11(*(undefined *)(param_2 + uVar2 + 1),
                                    *(undefined *)(param_2 + uVar2))));
    iVar1 = iVar1 + 1;
  }
  return;
}



//==== FUNC FUN_08008742 @ 08008742 ====

void FUN_08008742(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined *)(param_1 + uVar1) = *(undefined *)(param_2 + uVar1);
  }
  return;
}



//==== FUNC FUN_08008756 @ 08008756 ====

void FUN_08008756(int param_1,undefined param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined *)(param_1 + uVar1) = param_2;
  }
  return;
}



//==== FUNC FUN_08008878 @ 08008878 ====

void FUN_08008878(void)

{
  if (*DAT_08008d78 << 0x18 < 0) {
    *DAT_08008d80 = DAT_08008d7c;
    *DAT_08008d80 = DAT_08008d84;
  }
  if ((0x200 < *DAT_08008d88) && (*DAT_08008d8c << 0x18 < 0)) {
    *DAT_08008d90 = DAT_08008d7c;
    *DAT_08008d90 = DAT_08008d84;
  }
  return;
}



//==== FUNC FUN_080088c4 @ 080088c4 ====

void FUN_080088c4(void)

{
  *DAT_08008d78 = *DAT_08008d78 | 0x80;
  if (0x200 < *DAT_08008d88) {
    *DAT_08008d8c = *DAT_08008d8c | 0x80;
  }
  return;
}



//==== FUNC FUN_080088f4 @ 080088f4 ====

char FUN_080088f4(uint param_1)

{
  char cVar1;
  
  if (*DAT_08008d88 < 0x201) {
    cVar1 = FUN_08008dc8(0xf0000);
    if (cVar1 == '\0') {
      *DAT_08008d78 = *DAT_08008d78 | 2;
      *DAT_08008d98 = param_1;
      *DAT_08008d78 = *DAT_08008d78 | 0x40;
      cVar1 = FUN_08008dc8(0xf0000);
      *DAT_08008d78 = *DAT_08008d78 & 0xfffffffd;
    }
  }
  else if (param_1 < DAT_08008d94) {
    cVar1 = FUN_08008dc8(0xf0000);
    if (cVar1 == '\0') {
      *DAT_08008d78 = *DAT_08008d78 | 2;
      *DAT_08008d98 = param_1;
      *DAT_08008d78 = *DAT_08008d78 | 0x40;
      cVar1 = FUN_08008dc8(0xf0000);
      *DAT_08008d78 = *DAT_08008d78 & 0xfffffffd;
    }
  }
  else {
    cVar1 = FUN_08008dea(0xf0000);
    if (cVar1 == '\0') {
      *DAT_08008d8c = *DAT_08008d8c | 2;
      *DAT_08008d9c = param_1;
      if (*DAT_08008da0 << 0x1e < 0) {
        *DAT_08008d98 = param_1;
      }
      *DAT_08008d8c = *DAT_08008d8c | 0x40;
      cVar1 = FUN_08008dea(0xf0000);
      *DAT_08008d8c = *DAT_08008d8c & 0xfffffffd;
    }
  }
  return cVar1;
}



//==== FUNC FUN_08008a0a @ 08008a0a ====

undefined8
FUN_08008a0a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  if (*DAT_08008d88 < 0x201) {
    bVar1 = FUN_08008dc8(0xf0000);
    if (bVar1 == 0) {
      *DAT_08008d78 = *DAT_08008d78 | 1;
      *param_1 = param_2;
      bVar1 = FUN_08008dc8(0xf0000);
      *DAT_08008d78 = *DAT_08008d78 & 0xfffffffe;
    }
  }
  else if (param_1 < DAT_08008d94) {
    bVar1 = FUN_08008dc8(0xf0000);
    if (bVar1 == 0) {
      *DAT_08008d78 = *DAT_08008d78 | 1;
      *param_1 = param_2;
      bVar1 = FUN_08008dc8(0xf0000);
      *DAT_08008d78 = *DAT_08008d78 & 0xfffffffe;
    }
  }
  else {
    bVar1 = FUN_08008dea(0xf0000);
    if (bVar1 == 0) {
      *DAT_08008d8c = *DAT_08008d8c | 1;
      *param_1 = param_2;
      bVar1 = FUN_08008dea(0xf0000);
      *DAT_08008d8c = *DAT_08008d8c & 0xfffffffe;
    }
  }
  return CONCAT44(param_4,(uint)bVar1);
}



//==== FUNC FUN_08008ad8 @ 08008ad8 ====

void FUN_08008ad8(void)

{
  if (-1 < *DAT_08008d78 << 0x16) {
    *DAT_08008da4 = DAT_08008d7c;
    *DAT_08008da4 = DAT_08008d84;
  }
  return;
}



//==== FUNC FUN_08008af8 @ 08008af8 ====

void FUN_08008af8(void)

{
  *DAT_08008d78 = *DAT_08008d78 & 0xfffffdff;
  return;
}



//==== FUNC FUN_08008b0a @ 08008b0a ====

undefined8 FUN_08008b0a(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_r3;
  undefined2 uVar4;
  
  uVar4 = 0xa5;
  uVar2 = FUN_08008dc8(0xf0000);
  iVar3 = FUN_08008cec();
  if (iVar3 != 0) {
    uVar4 = 0xbb;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 0) {
    *DAT_08008d78 = *DAT_08008d78 | 0x20;
    *DAT_08008d78 = *DAT_08008d78 | 0x40;
    bVar1 = FUN_08008dc8(0xf0000);
    if (bVar1 == 0) {
      *DAT_08008d78 = *DAT_08008d78 & 0xffffffdf;
      *DAT_08008d78 = *DAT_08008d78 | 0x10;
      *DAT_08008da8 = uVar4;
      uVar2 = FUN_08008dc8(0xf0000);
      uVar2 = uVar2 & 0xff;
      if (uVar2 != 4) {
        *DAT_08008d78 = *DAT_08008d78 & 0xffffffef;
      }
    }
    else {
      uVar2 = (uint)bVar1;
      if (uVar2 != 4) {
        *DAT_08008d78 = *DAT_08008d78 & 0xffffffef;
      }
    }
  }
  return CONCAT44(in_r3,uVar2);
}



//==== FUNC FUN_08008bbc @ 08008bbc ====

char FUN_08008bbc(uint param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = FUN_08008dc8(0xf0000);
  param_1 = ~param_1;
  uVar3 = param_1 >> 0x10 & 0xff;
  if (cVar2 == '\0') {
    *DAT_08008d78 = *DAT_08008d78 | 0x10;
    if ((param_1 & 0xff) != 0xff) {
      *DAT_08008dac = (short)(param_1 & 0xff);
      cVar2 = FUN_08008dc8(0xf0000);
    }
    if ((cVar2 == '\0') && ((param_1 << 0x10) >> 0x18 != 0xff)) {
      *DAT_08008db0 = (ushort)(byte)(param_1 >> 8);
      cVar2 = FUN_08008dc8(0xf0000);
    }
    if ((cVar2 == '\0') && (uVar3 != 0xff)) {
      *DAT_08008db4 = (short)uVar3;
      cVar2 = FUN_08008dc8(0xf0000);
    }
    if ((cVar2 == '\0') && (bVar1 = (byte)(param_1 >> 0x18), bVar1 != 0xff)) {
      *DAT_08008db8 = (ushort)bVar1;
      cVar2 = FUN_08008dc8(0xf0000);
    }
    if (cVar2 != '\x04') {
      *DAT_08008d78 = *DAT_08008d78 & 0xffffffef;
    }
  }
  return cVar2;
}



//==== FUNC FUN_08008c5e @ 08008c5e ====

void FUN_08008c5e(undefined param_1,undefined param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = DAT_08008da8;
  iVar1 = DAT_08008d74;
  uStack_1c = CONCAT22(param_3,CONCAT11(param_2,param_1));
  uStack_18 = param_4;
  iVar3 = FUN_08008dc8(0xf0000);
  if (iVar3 == 0) {
    *(undefined4 *)(iVar1 + 0x14) = 1;
    *(undefined4 *)(iVar1 + 0x18) = 1;
    iVar3 = FUN_08008dc8(0xf0000);
    uVar5 = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
      iVar3 = 7;
      do {
        *(ushort *)(iVar2 + iVar3 * 2) = (ushort)*(byte *)((int)&uStack_1c + iVar3);
        iVar4 = FUN_08008dc8(0xf0000);
        if (iVar4 != 0) break;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      *(undefined4 *)(iVar1 + 0x10) = uVar5;
    }
  }
  return;
}



//==== FUNC FUN_08008ca4 @ 08008ca4 ====

void FUN_08008ca4(int param_1)

{
  uint uVar1;
  uint unaff_r7;
  
  uVar1 = FUN_08008ce6();
  if (((((unaff_r7 & ~uVar1) != unaff_r7) || ((uint)(*DAT_08008da0 << 0x16) >> 0x18 != 0xff)) ||
      ((uint)(*DAT_08008da0 << 6) >> 0x10 != 0xffff)) || (param_1 == 0)) {
    FUN_08008c5e();
  }
  return;
}



//==== FUNC FUN_08008ce6 @ 08008ce6 ====

undefined4 FUN_08008ce6(void)

{
  return *DAT_08008dbc;
}



//==== FUNC FUN_08008cec @ 08008cec ====

bool FUN_08008cec(void)

{
  return *DAT_08008da0 << 0x1e < 0;
}



//==== FUNC FUN_08008d00 @ 08008d00 ====

void FUN_08008d00(uint param_1)

{
  *(uint *)((param_1 >> 6) + 0x40022000) =
       *(uint *)((param_1 >> 6) + 0x40022000) | 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_08008d24 @ 08008d24 ====

undefined FUN_08008d24(void)

{
  undefined uVar1;
  
  uVar1 = 0;
  if (*DAT_08008dc0 << 0x1f < 0) {
    uVar1 = 1;
  }
  else if (*DAT_08008dc0 << 0x1b < 0) {
    uVar1 = 3;
  }
  else if (*DAT_08008dc0 << 0x1d < 0) {
    uVar1 = 2;
  }
  return uVar1;
}



//==== FUNC FUN_08008d4c @ 08008d4c ====

undefined FUN_08008d4c(void)

{
  undefined uVar1;
  
  uVar1 = 0;
  if (*DAT_08008dc4 << 0x1f < 0) {
    uVar1 = 1;
  }
  else if (*DAT_08008dc4 << 0x1b < 0) {
    uVar1 = 3;
  }
  else if (*DAT_08008dc4 << 0x1d < 0) {
    uVar1 = 2;
  }
  return uVar1;
}



//==== FUNC FUN_08008dc8 @ 08008dc8 ====

char FUN_08008dc8(int param_1)

{
  char cVar1;
  
  do {
    cVar1 = FUN_08008d24(1);
    param_1 = param_1 + -1;
    if (cVar1 != '\x01') break;
  } while (param_1 != 0);
  if (cVar1 == '\x01') {
    cVar1 = '\x04';
  }
  return cVar1;
}



//==== FUNC FUN_08008dea @ 08008dea ====

char FUN_08008dea(int param_1)

{
  char cVar1;
  
  do {
    cVar1 = FUN_08008d4c(1);
    param_1 = param_1 + -1;
    if (cVar1 != '\x01') break;
  } while (param_1 != 0);
  if (cVar1 == '\x01') {
    cVar1 = '\x04';
  }
  return cVar1;
}



//==== FUNC FUN_08008e40 @ 08008e40 ====

longlong FUN_08008e40(undefined4 *param_1)

{
  uint unaff_r7;
  
  *param_1 = 5;
  FUN_08007ebc(param_1 + 1);
  return (ulonglong)unaff_r7 << 0x20;
}



//==== FUNC FUN_08008e50 @ 08008e50 ====

longlong FUN_08008e50(int param_1)

{
  uint unaff_r7;
  
  FUN_08007ede(param_1 + 4);
  return (ulonglong)unaff_r7 << 0x20;
}



//==== FUNC FUN_08008e5c @ 08008e5c ====

longlong FUN_08008e5c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint unaff_r7;
  
  *param_3 = 0x10;
  FUN_08007f46(param_2,param_1 + 4);
  return (ulonglong)unaff_r7 << 0x20;
}



//==== FUNC FUN_08008e70 @ 08008e70 ====

void FUN_08008e70(void)

{
  FUN_08008e40();
  return;
}



//==== FUNC FUN_08008e78 @ 08008e78 ====

void FUN_08008e78(void)

{
  FUN_08008e50();
  return;
}



//==== FUNC FUN_08008e80 @ 08008e80 ====

int FUN_08008e80(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_154;
  undefined auStack_150 [4];
  undefined auStack_14c [16];
  undefined auStack_13c [256];
  undefined auStack_3c [36];
  
  if (param_3 < 0x101) {
    iVar1 = FUN_08008e5c(param_1,auStack_14c,auStack_150);
    if (iVar1 == 0) {
      FUN_08008f18(auStack_3c,auStack_14c);
      iVar2 = FUN_0800a1d6(auStack_13c,&local_154,param_2,param_3,param_4);
      if (iVar2 == 0) {
        if ((local_154 == 0x22) && (iVar2 = FUN_0800a346(auStack_13c,auStack_3c,0x22), iVar2 == 0))
        {
          FUN_08008e40(param_1);
        }
        else {
          iVar1 = 0x40b;
        }
      }
      else {
        iVar1 = 0x40a;
      }
    }
    FUN_0800a320(auStack_14c,0,0x10);
    FUN_0800a320(auStack_3c,0,0x22);
    FUN_0800a320(auStack_13c,0,0x100);
  }
  else {
    iVar1 = 0x406;
  }
  return iVar1;
}



//==== FUNC FUN_08008f18 @ 08008f18 ====

undefined4 FUN_08008f18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0800a336(param_1,DAT_08008f48,0xd);
  *(undefined *)(param_1 + 0xd) = 5;
  FUN_0800a336(param_1 + 0xe,DAT_08008f4c,4);
  FUN_0800a336(param_1 + 0x12,param_2,0x10);
  return param_4;
}



//==== FUNC FUN_08008f50 @ 08008f50 ====

void FUN_08008f50(short param_1)

{
  *(uint *)(&DAT_40021000 + ((uint)(int)param_1 >> 6)) =
       *(uint *)(&DAT_40021000 + ((uint)(int)param_1 >> 6)) | 1 << ((int)param_1 & 0x1fU);
  return;
}



//==== FUNC FUN_08008f78 @ 08008f78 ====

void FUN_08008f78(short param_1)

{
  *(uint *)(&DAT_40021000 + ((uint)(int)param_1 >> 6)) =
       *(uint *)(&DAT_40021000 + ((uint)(int)param_1 >> 6)) & ~(1 << ((int)param_1 & 0x1fU));
  return;
}



//==== FUNC FUN_08008fa0 @ 08008fa0 ====

void FUN_08008fa0(short param_1)

{
  *(uint *)(&DAT_40021000 + ((uint)(int)param_1 >> 6)) =
       *(uint *)(&DAT_40021000 + ((uint)(int)param_1 >> 6)) | 1 << ((int)param_1 & 0x1fU);
  return;
}



//==== FUNC FUN_08008fc8 @ 08008fc8 ====

void FUN_08008fc8(short param_1)

{
  *(uint *)(&DAT_40021000 + ((uint)(int)param_1 >> 6)) =
       *(uint *)(&DAT_40021000 + ((uint)(int)param_1 >> 6)) & ~(1 << ((int)param_1 & 0x1fU));
  return;
}



//==== FUNC FUN_08008ff0 @ 08008ff0 ====

uint FUN_08008ff0(byte param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  sbyte asStack_20 [16];
  
  FUN_08000368(asStack_20,DAT_08009140,0x10);
  local_28 = *DAT_08009144;
  uStack_24 = DAT_08009144[1];
  local_30 = *DAT_08009148;
  uStack_2c = DAT_08009148[1];
  uVar1 = (*DAT_08009138 << 0x1c) >> 0x1e;
  uVar2 = DAT_0800914c;
  if (uVar1 != 0) {
    if (uVar1 == 2) {
      uVar1 = DAT_08009158;
      if ((*DAT_08009138 & 0x10000) == 0x10000) {
        uVar2 = DAT_08009154;
        if ((*DAT_0800913c & 0x40000000) == 0) {
          uVar2 = DAT_08009150;
        }
        if ((*DAT_0800913c & 0x10000) == 0x10000) {
          iVar3 = ((*DAT_0800913c << 0x14) >> 0x1c) + 2;
          if (iVar3 == 0x11) {
            iVar3 = 0x14;
          }
          uVar2 = iVar3 * (uVar2 / (((*DAT_0800913c << 0x18) >> 0x1c) + 1));
        }
        uVar1 = uVar2 / ((*DAT_0800913c & 0xf) + 1);
      }
      uVar2 = (*DAT_08009138 << 10) >> 0x1c;
      if ((int)(*DAT_08009138 << 2) < 0) {
        uVar2 = uVar2 | 0x10;
      }
      if ((int)(*DAT_08009138 << 1) < 0) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 < 0xf) {
        iVar3 = uVar2 + 2;
      }
      else if (uVar2 - 0xf < 0x30) {
        iVar3 = uVar2 + 1;
      }
      else {
        iVar3 = 0x3f;
      }
      uVar2 = iVar3 * uVar1;
      if (iVar3 == 0xf) {
        uVar2 = uVar1 * 6 + (uVar1 >> 1);
      }
    }
    else {
      uVar2 = DAT_08009150;
      if (1 < uVar1) {
        uVar2 = DAT_0800914c;
      }
    }
  }
  uVar1 = uVar2 >> asStack_20[(*DAT_08009138 << 0x18) >> 0x1c];
  if ((((param_1 != 0) &&
       (uVar2 = uVar1 >> *(sbyte *)((int)&local_28 + ((*DAT_08009138 << 0x15) >> 0x1d)),
       param_1 != 2)) && (uVar2 = uVar1, 1 < param_1)) &&
     (uVar2 = uVar1 >> *(sbyte *)((int)&local_30 + ((*DAT_08009138 << 0x12) >> 0x1d)), param_1 != 3)
     ) {
    uVar2 = 0;
  }
  return uVar2;
}



//==== FUNC FUN_0800915c @ 0800915c ====

void FUN_0800915c(void)

{
  *DAT_0800916c = *DAT_0800916c | 0x100;
  return;
}



//==== FUNC FUN_08009170 @ 08009170 ====

void FUN_08009170(byte param_1,undefined2 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (uVar1 - 0xb < 0x20) {
    *(undefined2 *)(DAT_080091dc + uVar1 * 4) = param_2;
  }
  else if ((uVar1 != 0) && (param_1 < 0xb)) {
    *(undefined2 *)((uint)param_1 * 4 + 0x40006c00) = param_2;
  }
  return;
}



//==== FUNC FUN_080091a2 @ 080091a2 ====

undefined2 FUN_080091a2(byte param_1)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar2 = 0;
  uVar1 = (uint)param_1;
  if (uVar1 - 0xb < 0x20) {
    uVar2 = *(undefined2 *)(DAT_080091dc + uVar1 * 4);
  }
  else if ((uVar1 != 0) && (param_1 < 0xb)) {
    uVar2 = *(undefined2 *)((uint)param_1 * 4 + 0x40006c00);
  }
  return uVar2;
}



//==== FUNC FUN_080091e0 @ 080091e0 ====

void FUN_080091e0(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0xf;
  if ((int)(param_2 << 0x1b) < 0) {
    if (param_3 == 4) {
      uVar3 = uVar3 | 3;
      param_1[0xf] = param_1[0xf] | param_4;
    }
    else {
      uVar3 = uVar3 | param_3;
    }
  }
  for (uVar1 = 0; (uVar1 & 0xffff) < 8; uVar1 = (uVar1 & 0xffff) + 1) {
    if ((int)((param_4 >> (uVar1 & 0xff)) << 0x1f) < 0) {
      if (param_2 == 0x28) {
        param_1[5] = param_4;
      }
      else if (param_2 == 0x48) {
        param_1[4] = param_4;
      }
      *param_1 = *param_1 & ~(0xf << ((uVar1 & 0x3f) << 2)) | uVar3 << ((uVar1 & 0x3f) << 2);
    }
  }
  uVar1 = 8;
  while (uVar2 = uVar1 & 0xffff, uVar2 < 0x10) {
    if ((int)((param_4 >> (uVar1 & 0xff)) << 0x1f) < 0) {
      if (param_2 == 0x28) {
        param_1[5] = param_4;
      }
      else if (param_2 == 0x48) {
        param_1[4] = param_4;
      }
      param_1[1] = param_1[1] & ~(0xf << ((uVar2 - 8 & 0x3f) << 2)) |
                   uVar3 << ((uVar2 - 8 & 0x3f) << 2);
    }
    uVar1 = uVar2 + 1;
  }
  return;
}



//==== FUNC FUN_080092a0 @ 080092a0 ====

void FUN_080092a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



//==== FUNC FUN_080092a6 @ 080092a6 ====

void FUN_080092a6(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



//==== FUNC FUN_080092ac @ 080092ac ====

void FUN_080092ac(int param_1,undefined4 param_2,char param_3)

{
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  return;
}



//==== FUNC FUN_080092be @ 080092be ====

bool FUN_080092be(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}



//==== FUNC FUN_080092ce @ 080092ce ====

void FUN_080092ce(uint param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xf << ((uint)(param_2 & 3) << 2);
  if (param_2 < 4) {
    *DAT_08009400 = *DAT_08009400 & ~uVar2;
    *DAT_08009400 = (param_1 & 0xff) << ((param_2 & 3) << 2) | *DAT_08009400;
  }
  else if (param_2 < 8) {
    *DAT_08009404 = *DAT_08009404 & ~uVar2;
    *DAT_08009404 = (param_1 & 0xff) << ((param_2 & 3) << 2) | *DAT_08009404;
  }
  else {
    uVar1 = (uint)param_2;
    if (uVar1 < 0xc) {
      *DAT_08009408 = *DAT_08009408 & ~uVar2;
      *DAT_08009408 = (param_1 & 0xff) << ((uVar1 & 3) << 2) | *DAT_08009408;
    }
    else {
      *DAT_0800940c = *DAT_0800940c & ~uVar2;
      *DAT_0800940c = (param_1 & 0xff) << ((uVar1 & 3) << 2) | *DAT_0800940c;
    }
  }
  return;
}



//==== FUNC FUN_0800937e @ 0800937e ====

void FUN_0800937e(uint param_1,char param_2)

{
  uint uVar1;
  
  if ((int)param_1 < 0) {
    uVar1 = *DAT_08009410;
  }
  else {
    uVar1 = *DAT_08009414;
  }
  if ((param_1 & 0x300000) == 0x300000) {
    uVar1 = uVar1 & 0xf0ffffff;
    *DAT_08009414 = *DAT_08009414 & 0xf0ffffff;
  }
  else if ((int)(param_1 << 0xb) < 0) {
    uVar1 = uVar1 & ~(3 << ((param_1 << 0xc) >> 0x1c)) | 0xf000000;
  }
  else {
    uVar1 = uVar1 & ~((param_1 & 0xffff) << ((param_1 >> 0x15 & 0xf) << 4)) | 0xf000000;
  }
  if (param_2 != '\0') {
    uVar1 = uVar1 | (param_1 & 0xffff) << ((param_1 >> 0x15 & 0xf) << 4);
  }
  if ((int)param_1 < 0) {
    *DAT_08009410 = uVar1;
  }
  else {
    *DAT_08009414 = uVar1;
  }
  return;
}



//==== FUNC FUN_08009418 @ 08009418 ====

undefined4 FUN_08009418(int param_1)

{
  undefined4 unaff_r7;
  
  if (param_1 == DAT_08009514) {
    FUN_08008fa0(0x411);
    FUN_08008fc8(0x411);
  }
  else if (param_1 == DAT_08009518) {
    FUN_08008fa0(0x412);
    FUN_08008fc8(0x412);
  }
  else if (param_1 == DAT_0800951c) {
    FUN_08008fa0(0x413);
    FUN_08008fc8(0x413);
  }
  else if (param_1 == DAT_08009520) {
    FUN_08008fa0(0x414);
    FUN_08008fc8(0x414);
  }
  else if (param_1 == DAT_08009524) {
    FUN_08008fa0(0x30e);
    FUN_08008fc8(0x30e);
  }
  return unaff_r7;
}



//==== FUNC FUN_08009494 @ 08009494 ====

undefined4 FUN_08009494(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == DAT_08009514) {
    iVar1 = FUN_08008ff0(2);
  }
  else if (param_1 == DAT_08009518) {
    iVar1 = FUN_08008ff0(2);
  }
  else if (param_1 == DAT_0800951c) {
    iVar1 = FUN_08008ff0(2);
  }
  else if (param_1 == DAT_08009520) {
    iVar1 = FUN_08008ff0(2);
  }
  else if (param_1 == DAT_08009524) {
    iVar1 = FUN_08008ff0(3);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | (iVar1 + (param_2 >> 1)) / param_2 & 0xffff;
  return param_4;
}



//==== FUNC FUN_08009528 @ 08009528 ====

void FUN_08009528(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x2000;
  return;
}



//==== FUNC FUN_08009538 @ 08009538 ====

void FUN_08009538(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff7 | param_2;
  return;
}



//==== FUNC FUN_0800954c @ 0800954c ====

void FUN_0800954c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb | param_2;
  return;
}



//==== FUNC FUN_08009560 @ 08009560 ====

void FUN_08009560(int param_1,uint param_2)

{
  *(uint *)(param_1 + 4) = param_2 & 0x1ff;
  return;
}



//==== FUNC FUN_0800956a @ 0800956a ====

uint FUN_0800956a(int param_1)

{
  return *(uint *)(param_1 + 4) & 0x1ff;
}



//==== FUNC FUN_08009574 @ 08009574 ====

bool FUN_08009574(int param_1,uint param_2)

{
  return (int)((*(uint *)(param_1 + ((param_2 << 0x10) >> 0x16)) >> (param_2 & 0x1f)) << 0x1f) < 0;
}



//==== FUNC FUN_08009590 @ 08009590 ====

void FUN_08009590(int param_1,uint param_2)

{
  *(uint *)(((param_2 << 0x10) >> 0x16) + param_1) =
       *(uint *)(((param_2 << 0x10) >> 0x16) + param_1) | 1 << (param_2 & 0x1f);
  return;
}



//==== FUNC FUN_080095ae @ 080095ae ====

void FUN_080095ae(int param_1,uint param_2)

{
  *(uint *)(((param_2 << 0x10) >> 0x16) + param_1) =
       *(uint *)(((param_2 << 0x10) >> 0x16) + param_1) & ~(1 << (param_2 & 0x1f));
  return;
}



//==== FUNC FUN_080095cc @ 080095cc ====

undefined4 FUN_080095cc(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((1 << (param_2 >> 0x10 & 0x1f) & *(uint *)(param_1 + (param_2 >> 0x16))) == 0) ||
     ((*(uint *)(((param_2 << 0x10) >> 0x16) + param_1) & 1 << (param_2 & 0x1f)) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_0800960c @ 0800960c ====

void FUN_0800960c(int param_1,uint param_2)

{
  *(uint *)(param_1 + (param_2 >> 0x16)) =
       *(uint *)(param_1 + (param_2 >> 0x16)) & ~(1 << (param_2 >> 0x10 & 0x1f));
  return;
}



//==== FUNC FUN_0800962c @ 0800962c ====

void FUN_0800962c(uint param_1)

{
  *DAT_080096e8 = param_1 | DAT_080096e4;
  return;
}



//==== FUNC FUN_08009636 @ 08009636 ====

void FUN_08009636(byte param_1,byte param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if ((*DAT_080096e8 & 0x700) == 0x700) {
    iVar2 = 0;
    iVar1 = 4;
  }
  else if ((*DAT_080096e8 & 0x700) == 0x600) {
    iVar2 = 1;
    iVar1 = 3;
  }
  else if ((*DAT_080096e8 & 0x700) == 0x500) {
    iVar2 = 2;
    iVar1 = 2;
  }
  else if ((*DAT_080096e8 & 0x700) == 0x400) {
    iVar2 = 3;
    iVar1 = 1;
  }
  else if ((*DAT_080096e8 & 0x700) == 0x300) {
    iVar2 = 4;
    iVar1 = 0;
  }
  *(char *)(DAT_080096ec + (uint)param_1) =
       (char)(((uint)param_2 << (4U - iVar2 & 0xff) | 0xfU >> (4U - iVar1 & 0xff) & (uint)param_3)
             << 4);
  *(int *)(DAT_080096f0 + ((int)(uint)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_080096d6 @ 080096d6 ====

void FUN_080096d6(uint param_1,uint param_2)

{
  *DAT_080096f8 = param_1 | param_2 & DAT_080096f4;
  return;
}



//==== FUNC FUN_080096fc @ 080096fc ====

int * FUN_080096fc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined local_a8;
  char local_a7;
  undefined local_a6;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_94;
  undefined auStack_90 [132];
  
  local_a8 = 1;
  local_a7 = '\x02';
  local_a4 = param_1;
  FUN_0800a358(auStack_90,0x80,DAT_08009ad4,param_1);
  local_a6 = 1;
  local_98 = 0x400;
  local_94 = 0x400;
  if ((local_a7 == '\x02') || (local_a7 == '\x01')) {
    DAT_08009adc[2] = DAT_08009ad8;
    DAT_08009adc[3] = DAT_08009ae0;
    DAT_08009adc[4] = DAT_08009ae4;
    DAT_08009adc[5] = DAT_08009ae8;
    DAT_08009adc[6] = DAT_08009aec;
    iVar1 = FUN_0800a39c(&local_a8);
    DAT_08009adc[1] = iVar1;
    FUN_08000368(DAT_08009adc + 10,&local_a8,0x98);
    *DAT_08009adc = (int)(DAT_08009adc + 10);
    FUN_08000368(DAT_08009af0 + 0x1050,DAT_08009adc,0xc0);
    FUN_08000368(DAT_08009af0 + 0x1110,&local_a8,0x98);
    *DAT_08009af4 = DAT_08009af0;
    DAT_08009af4[1] = DAT_08009af0;
    DAT_08009af4[2] = DAT_08009af0 + 4;
    DAT_08009af4[3] = DAT_08009af0 + 0x1048;
    *DAT_08009af8 = DAT_08009af4;
    *DAT_08009afc = DAT_08009af0;
    *DAT_08009b00 = DAT_08009adc;
    piVar2 = *DAT_08009af8;
  }
  else {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



//==== FUNC FUN_080098d0 @ 080098d0 ====

int FUN_080098d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_080096fc(param_1);
  if (((iVar1 != 0) && (*DAT_08009af8 != 0)) &&
     (iVar1 = FUN_0800a606(*(undefined4 *)*DAT_08009af8,0), iVar1 == -0x6fff7000)) {
    iVar1 = FUN_0800a636(*(undefined4 *)*DAT_08009af8);
    if (iVar1 == -0x6fff7000) {
      return *DAT_08009af8;
    }
    FUN_0800a6ae(*(undefined4 *)*DAT_08009af8);
  }
  return 0;
}



//==== FUNC FUN_08009934 @ 08009934 ====

int FUN_08009934(int param_1)

{
  int iVar1;
  
  if (((param_1 == 0) || (*DAT_08009af8 == 0)) ||
     (iVar1 = FUN_0800a6ae(*(undefined4 *)*DAT_08009af8), iVar1 != -0x6fff7000)) {
    *(undefined4 *)(*DAT_08009b00 + 4) = 0;
    FUN_0800016c(*DAT_08009af8,0x10,0);
    FUN_0800016c(*DAT_08009afc,0x1470,0);
    FUN_0800016c(*DAT_08009b00,0xc0,0);
    *DAT_08009af8 = 0;
  }
  else {
    *(undefined4 *)(*DAT_08009b00 + 4) = 0;
    FUN_0800016c(*DAT_08009af8,0x10,0);
    FUN_0800016c(*DAT_08009afc,0x1470,0);
    FUN_0800016c(*DAT_08009b00,0xc0,0);
    *DAT_08009af8 = 0;
  }
  return param_1;
}



//==== FUNC FUN_08009a1a @ 08009a1a ====

int FUN_08009a1a(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = DAT_08009b04;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 == 0x10)) &&
     (iVar2 = DAT_08009b08, *DAT_08009af8 != 0)) {
    uVar1 = FUN_0800ac7c(*(undefined4 *)(*DAT_08009af8 + 4),1,param_2,0x10);
    if (uVar1 == 0x9000) {
      iVar2 = 0;
    }
    else {
      iVar2 = uVar1 + 0x80000000;
    }
  }
  return iVar2;
}



//==== FUNC FUN_08009a82 @ 08009a82 ====

undefined8 FUN_08009a82(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  
  iVar1 = DAT_08009b04;
  uStack_18 = param_4;
  if ((((param_1 != 0) && (param_2 != 0)) && (iVar1 = DAT_08009b08, *DAT_08009af8 != 0)) &&
     (iVar1 = FUN_0800a738(*(undefined4 *)*DAT_08009af8,param_2,&uStack_18), iVar1 == -0x6fff7000))
  {
    iVar1 = 0;
  }
  return CONCAT44(uStack_18,iVar1);
}



//==== FUNC FUN_08009b0c @ 08009b0c ====

int FUN_08009b0c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  iVar2 = DAT_08009c80;
  if ((((param_1 != 0) && (param_4 != 0)) && (param_5 != 0)) &&
     (iVar2 = DAT_08009c7c, *DAT_08009c84 != 0)) {
    uVar1 = FUN_0800ab00(*(undefined4 *)(*DAT_08009c84 + 4),param_2,param_3,param_5,param_4,local_28
                        );
    if ((uVar1 == 0x9000) && (local_28[0] == param_5)) {
      iVar2 = 0;
    }
    else {
      iVar2 = uVar1 + 0x80000000;
    }
  }
  return iVar2;
}



//==== FUNC FUN_08009b94 @ 08009b94 ====

int FUN_08009b94(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  ushort uVar1;
  int iVar2;
  int local_28 [2];
  
  local_28[0] = 0;
  iVar2 = DAT_08009c80;
  if ((((param_1 != 0) && (param_4 != 0)) && (*param_5 != 0)) &&
     (iVar2 = DAT_08009c7c, *DAT_08009c84 != 0)) {
    uVar1 = FUN_0800aa20(*(undefined4 *)(*DAT_08009c84 + 4),param_2,param_3,*param_5,param_4,
                         local_28);
    if ((uVar1 == 0x9000) && (local_28[0] == *param_5)) {
      *param_5 = local_28[0];
      return 0;
    }
    iVar2 = uVar1 + 0x80000000;
  }
  *param_5 = 0;
  return iVar2;
}



//==== FUNC FUN_08009c2e @ 08009c2e ====

undefined8 FUN_08009c2e(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = DAT_08009c80;
  if (((param_1 != 0) && (iVar2 = DAT_08009c7c, *DAT_08009c84 != 0)) &&
     (uVar1 = FUN_0800aca6(*(undefined4 *)(*DAT_08009c84 + 4),param_2), iVar2 = 0, uVar1 != 0x9000))
  {
    iVar2 = uVar1 + 0x80000000;
  }
  return CONCAT44(param_4,iVar2);
}



//==== FUNC FUN_08009c88 @ 08009c88 ====

int FUN_08009c88(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5,
                undefined4 param_6,undefined4 *param_7)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_2c;
  int local_28;
  
  local_2c = 0;
  iVar2 = DAT_0800a098;
  if ((((param_1 != 0) && (param_4 != 0)) && (param_5 != 0)) &&
     (iVar2 = DAT_0800a094, *DAT_0800a09c != 0)) {
    local_28 = param_1;
    uVar1 = FUN_0800acde(*(undefined4 *)(*DAT_0800a09c + 4),param_2,param_3,param_4,param_5,param_6,
                         &local_2c);
    if (uVar1 == 0x9000) {
      *param_7 = local_2c;
      return 0;
    }
    iVar2 = uVar1 + 0x80000000;
  }
  *param_7 = 0;
  return iVar2;
}



//==== FUNC FUN_08009d22 @ 08009d22 ====

int FUN_08009d22(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5,
                int param_6,undefined4 *param_7)

{
  ushort uVar1;
  int iVar2;
  int local_2c;
  int local_28;
  
  local_2c = 0;
  iVar2 = DAT_0800a098;
  if (((((param_1 != 0) && (param_4 != 0)) && (param_5 != 0)) &&
      ((param_6 != 0 && (param_7 != (undefined4 *)0x0)))) &&
     (iVar2 = DAT_0800a094, *DAT_0800a09c != 0)) {
    local_28 = param_1;
    uVar1 = FUN_0800ad22(*(undefined4 *)(*DAT_0800a09c + 4),param_2,param_3,param_4,param_5,param_6,
                         &local_2c);
    if ((uVar1 == 0x9000) && (local_2c == 0)) {
      *param_7 = 0;
      return 0;
    }
    iVar2 = uVar1 + 0x80000000;
  }
  *param_7 = 0;
  return iVar2;
}



//==== FUNC FUN_08009dc6 @ 08009dc6 ====

int FUN_08009dc6(int param_1,uint param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  uint local_244;
  uint local_240;
  undefined4 local_23c;
  undefined auStack_238 [516];
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  uVar7 = 0x9000;
  local_244 = 0;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_080067d8(auStack_238,0x200);
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = 0;
  iVar6 = 0;
  iVar1 = DAT_0800a098;
  if ((((local_34 == 0) ||
       ((((char)local_30 != '\x01' && ((char)local_30 != '\x02')) || (local_2c == 0)))) ||
      (((local_28 % 0x10 != 0 || (local_28 < 0x10)) || (param_5 == 0)))) ||
     ((param_6 == (int *)0x0 || (iVar1 = DAT_0800a094, *DAT_0800a09c == 0)))) {
LAB_08009fec:
    *param_6 = 0;
  }
  else {
    local_240 = local_28 / 0x10;
    FUN_0800016c(auStack_238,0x200,0);
    for (uVar2 = 1; uVar2 <= local_240; uVar2 = uVar2 + 1) {
      FUN_08000348(auStack_238 + iVar4 * 0x10,local_2c + iVar3,0x10);
      iVar3 = iVar3 + 0x10;
      iVar4 = iVar4 + 1;
      if (uVar2 == local_240) {
        uVar7 = FUN_0800ad66(*(undefined4 *)(*DAT_0800a09c + 4),local_30 & 0xff,auStack_238,
                             iVar4 * 0x10,auStack_238,&local_244,uVar7);
        uVar2 = local_244;
        if ((char)local_30 == '\x01') {
          if (((uVar7 != 0x9000) || (local_244 < 0x10)) || ((local_244 & 0xf) != 0)) {
            iVar1 = uVar7 + 0x80000000;
            goto LAB_08009fec;
          }
          uVar2 = iVar4 * 0x10;
          FUN_08000348(param_5 + iVar5,auStack_238,iVar4 * 0x10);
        }
        else {
          if (uVar7 != 0x9000) {
            iVar1 = uVar7 + 0x80000000;
            goto LAB_08009fec;
          }
          FUN_08000348(param_5 + iVar5,auStack_238,local_244);
        }
        iVar6 = iVar6 + uVar2;
        break;
      }
      if (0x1ff < (uint)(iVar4 * 0x10)) {
        uVar7 = FUN_0800ad66(*(undefined4 *)(*DAT_0800a09c + 4),1,auStack_238,0x200,auStack_238,
                             &local_244,uVar7);
        if (((uVar7 != 0x9000) || (local_244 < 0x10)) ||
           (((local_244 & 0xf) != 0 || (local_244 != 0x200)))) {
          iVar1 = uVar7 + 0x80000000;
          goto LAB_08009fec;
        }
        iVar6 = iVar6 + 0x200;
        local_23c = 0x200;
        FUN_08000348(param_5 + iVar5,auStack_238,0x200);
        iVar5 = iVar5 + 0x200;
        FUN_0800016c(auStack_238,0x200,0);
        iVar4 = 0;
      }
    }
    *param_6 = iVar6;
    iVar1 = 0;
  }
  return iVar1;
}



//==== FUNC FUN_08009ffc @ 08009ffc ====

undefined8
FUN_08009ffc(int param_1,uint param_2,int param_3,int param_4,uint param_5,undefined4 *param_6)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 local_28;
  
  local_28 = 0;
  iVar3 = DAT_0800a098;
  uVar1 = param_2;
  if ((((param_1 != 0) && (uVar1 = param_2, param_3 != 0)) && (uVar1 = param_2, param_4 == 0x40)) &&
     (((uVar1 = param_2, param_5 != 0 && (uVar1 = param_2, param_6 != (undefined4 *)0x0)) &&
      (iVar3 = DAT_0800a094, uVar1 = param_2, *DAT_0800a09c != 0)))) {
    uVar2 = FUN_0800ada0(*(undefined4 *)(*DAT_0800a09c + 4),param_2 & 0xffff,param_3,0x40,param_5,
                         &local_28);
    if (uVar2 == 0x9000) {
      *param_6 = local_28;
      iVar3 = 0;
      goto LAB_0800a08c;
    }
    iVar3 = uVar2 + 0x80000000;
    uVar1 = param_5;
  }
  param_5 = uVar1;
  *param_6 = 0;
LAB_0800a08c:
  return CONCAT44(param_5,iVar3);
}



//==== FUNC FUN_0800a0a0 @ 0800a0a0 ====

void FUN_0800a0a0(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & 0x3040 | *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] |
             param_2[5] | param_2[6];
  param_1[7] = param_1[7] & 0xfffff7ff;
  return;
}



//==== FUNC FUN_0800a0d6 @ 0800a0d6 ====

void FUN_0800a0d6(uint *param_1)

{
  *param_1 = *param_1 | 0x40;
  return;
}



//==== FUNC FUN_0800a0e0 @ 0800a0e0 ====

void FUN_0800a0e0(uint *param_1)

{
  *param_1 = *param_1 & 0xffffffbf;
  return;
}



//==== FUNC FUN_0800a0ea @ 0800a0ea ====

void FUN_0800a0ea(int param_1,ushort param_2)

{
  *(uint *)(param_1 + 0xc) = (uint)param_2;
  return;
}



//==== FUNC FUN_0800a0f2 @ 0800a0f2 ====

uint FUN_0800a0f2(int param_1)

{
  return *(uint *)(param_1 + 0xc) & 0xffff;
}



//==== FUNC FUN_0800a0fa @ 0800a0fa ====

bool FUN_0800a0fa(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}



//==== FUNC FUN_0800a10c @ 0800a10c ====

void FUN_0800a10c(void)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined local_a;
  
  FUN_08008f50(0x708);
  FUN_0800addc(DAT_0800a168);
  local_18 = 0x20cf;
  local_16 = 0;
  local_14 = 0;
  local_10 = 0xffff;
  local_c = 0;
  local_a = 0;
  FUN_0800af1a(DAT_0800a168,&local_18);
  FUN_0800afbe(DAT_0800a168);
  FUN_0800afaa(DAT_0800a168);
  return;
}



//==== FUNC FUN_0800a15c @ 0800a15c ====

void FUN_0800a15c(void)

{
  FUN_0800afce(DAT_0800a168);
  return;
}



//==== FUNC FUN_0800a16c @ 0800a16c ====

undefined8 FUN_0800a16c(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_0800a15c();
  if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  if (uVar1 < param_1) {
    uVar1 = (uVar1 + 0xffff) - param_1;
  }
  else {
    uVar1 = uVar1 - param_1;
  }
  return CONCAT44(param_4,(uint)(param_2 * 10 < uVar1));
}



//==== FUNC FUN_0800a1b0 @ 0800a1b0 ====

undefined4 FUN_0800a1b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0800a15c();
  while (param_1 != 0) {
    iVar2 = FUN_0800a16c(uVar1,1);
    if (iVar2 != 0) {
      uVar1 = FUN_0800a15c();
      param_1 = param_1 + -1;
    }
  }
  return param_4;
}



//==== FUNC FUN_0800a1d6 @ 0800a1d6 ====

int FUN_0800a1d6(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_114;
  char local_110 [256];
  
  uVar3 = *param_5 + 7U >> 3;
  if (uVar3 < param_4) {
    iVar1 = 0x406;
  }
  else {
    iVar1 = FUN_0800a276(local_110,&local_114,param_3,param_4,param_5);
    if (iVar1 == 0) {
      if (local_114 == uVar3) {
        if ((local_110[0] == '\0') && (local_110[1] == '\x01')) {
          for (uVar2 = 2; (uVar2 < uVar3 - 1 && (local_110[uVar2] == -1)); uVar2 = uVar2 + 1) {
          }
          if (local_110[uVar2] == '\0') {
            *param_2 = uVar3 - (uVar2 + 1);
            if (uVar3 < *param_2 + 0xbU) {
              iVar1 = 0x401;
            }
            else {
              FUN_0800a336(param_1,local_110 + uVar2 + 1,*param_2);
              FUN_0800a320(local_110,0,0x100);
              iVar1 = 0;
            }
          }
          else {
            iVar1 = 0x401;
          }
        }
        else {
          iVar1 = 0x401;
        }
      }
      else {
        iVar1 = 0x406;
      }
    }
  }
  return iVar1;
}



//==== FUNC FUN_0800a276 @ 0800a276 ====

undefined4
FUN_0800a276(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_428 [260];
  undefined auStack_324 [260];
  undefined auStack_220 [260];
  undefined auStack_11c [260];
  
  FUN_0800b4f4(auStack_324,0x41);
  FUN_0800b4f4(auStack_428,0x41,param_5 + 1,0x100);
  FUN_0800b4f4(auStack_220,0x41,param_5 + 0x41,0x100);
  uVar1 = FUN_0800b9d6(auStack_428,0x41);
  uVar2 = FUN_0800b9d6(auStack_220,0x41);
  iVar3 = FUN_0800b9a2(auStack_324,auStack_428,uVar1);
  if (iVar3 < 0) {
    FUN_0800b8a0(auStack_11c,auStack_324,auStack_220,uVar2,auStack_428,uVar1);
    *param_2 = *param_5 + 7U >> 3;
    FUN_0800b532(param_1,*param_2,auStack_11c,uVar1);
    FUN_0800a320(auStack_11c,0,0x104);
    FUN_0800a320(auStack_324,0,0x104);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x401;
  }
  return uVar1;
}



//==== FUNC FUN_0800a320 @ 0800a320 ====

void FUN_0800a320(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_0800016c(param_1,param_3,param_2);
  }
  return;
}



//==== FUNC FUN_0800a336 @ 0800a336 ====

void FUN_0800a336(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_08000348(param_1);
  }
  return;
}



//==== FUNC FUN_0800a346 @ 0800a346 ====

undefined4 FUN_0800a346(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_08006f5c();
  }
  return uVar1;
}



//==== FUNC FUN_0800a358 @ 0800a358 ====

int FUN_0800a358(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *local_18;
  int local_14;
  int local_10;
  undefined4 *local_c [2];
  undefined4 uStack_4;
  
  local_c[0] = &uStack_4;
  local_10 = 0;
  if (param_2 == 0) {
    local_18 = (undefined *)0x0;
    local_14 = 0;
  }
  else {
    local_14 = param_2 + -1;
    local_18 = param_1;
  }
  uStack_4 = param_4;
  iVar1 = FUN_08003ea8((int)&DAT_0800a398 + DAT_0800a398,&local_18,param_3,local_c);
  if (local_18 != (undefined *)0x0) {
    *local_18 = 0;
  }
  if (-1 < iVar1) {
    iVar1 = local_10;
  }
  return iVar1;
}



//==== FUNC FUN_0800a39c @ 0800a39c ====

undefined4 * FUN_0800a39c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800bb38(param_1);
  *DAT_0800a414 = uVar1;
  return DAT_0800a414;
}



//==== FUNC FUN_0800a3ae @ 0800a3ae ====

void FUN_0800a3ae(undefined4 param_1)

{
  FUN_0800bb3e(param_1);
  return;
}



//==== FUNC FUN_0800a3ba @ 0800a3ba ====

void FUN_0800a3ba(undefined4 param_1)

{
  FUN_0800bb58(param_1);
  return;
}



//==== FUNC FUN_0800a3ee @ 0800a3ee ====

void FUN_0800a3ee(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0800bbb2(param_1,param_2,param_3,param_4,param_5);
  return;
}



//==== FUNC FUN_0800a418 @ 0800a418 ====

undefined FUN_0800a418(char param_1,char param_2)

{
  undefined uVar1;
  
  uVar1 = 3;
  if (param_1 == '\x01') {
    if (param_2 == '\x01') {
      uVar1 = 2;
    }
    else if (param_2 == '\0') {
      uVar1 = 3;
    }
    else if (param_2 == '\x02') {
      uVar1 = 4;
    }
    else {
      uVar1 = 5;
    }
  }
  else if ((param_1 == '\x02') || (param_1 == '\x03')) {
    if (param_2 == '\0') {
      uVar1 = 1;
    }
    else {
      uVar1 = 5;
    }
  }
  return uVar1;
}



//==== FUNC FUN_0800a46c @ 0800a46c ====

undefined8
FUN_0800a46c(int param_1,undefined4 param_2,undefined *param_3,undefined4 param_4,undefined param_5)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar2 < (int)(uint)*(byte *)(param_1 + 0x11fa) &&
         (*(char *)(iVar2 * 0x45 + param_1 + 0x135e) != '\0'))) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 < (int)(uint)*(byte *)(param_1 + 0x11fa)) {
    param_1 = iVar2 * 0x45 + param_1;
    FUN_0800016c((undefined2 *)(param_1 + 0x135c),0x45,0);
    FUN_0800bbf8(param_1 + 0x1364,param_4,0x1f);
    if (param_3 == (undefined *)0x0) {
      iVar2 = -1;
    }
    else {
      *(undefined2 *)(param_1 + 0x135c) = *(undefined2 *)(param_3 + 4);
      *(undefined *)(param_1 + 0x135e) = 1;
      *(undefined *)(param_1 + 0x135f) = param_5;
      *(undefined4 *)(param_1 + 0x1360) = param_2;
      *(undefined *)(param_1 + 0x1384) = *param_3;
      *(undefined2 *)(param_1 + 4999) = *(undefined2 *)(param_3 + 0x14);
      *(undefined2 *)(param_1 + 0x1389) = *(undefined2 *)(param_3 + 0x16);
      *(undefined2 *)(param_1 + 0x138b) = *(undefined2 *)(param_3 + 0x18);
      uVar1 = FUN_0800a418(param_5,param_3[7]);
      *(undefined2 *)(param_1 + 0x138d) = uVar1;
      *(uint *)(param_1 + 0x138f) = (uint)(byte)param_3[2];
      if ((int)((uint)*(byte *)(param_1 + 0x1384) << 0x1f) < 0) {
        *(undefined2 *)(param_1 + 0x1395) = *(undefined2 *)(param_3 + 8);
        *(undefined2 *)(param_1 + 0x1397) = *(undefined2 *)(param_3 + 10);
        *(undefined2 *)(param_1 + 0x1399) = *(undefined2 *)(param_3 + 0xc);
        uVar1 = FUN_0800a418(param_5,param_3[6]);
        *(undefined2 *)(param_1 + 0x139b) = uVar1;
        *(uint *)(param_1 + 0x139d) = (uint)(byte)param_3[2];
      }
      else {
        *(undefined2 *)(param_1 + 0x1395) = *(undefined2 *)(param_3 + 0x14);
        *(undefined2 *)(param_1 + 0x1397) = *(undefined2 *)(param_3 + 0x16);
        *(undefined2 *)(param_1 + 0x1399) = *(undefined2 *)(param_3 + 0x18);
        uVar1 = FUN_0800a418(param_5,param_3[7]);
        *(undefined2 *)(param_1 + 0x139b) = uVar1;
        *(uint *)(param_1 + 0x139d) = (uint)(byte)param_3[2];
      }
    }
  }
  else {
    iVar2 = -1;
  }
  return CONCAT44(param_2,iVar2);
}



//==== FUNC FUN_0800a58c @ 0800a58c ====

undefined8 FUN_0800a58c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_28;
  
  bVar1 = *(byte *)(param_1 + 0x11fa);
  iVar4 = 0;
  do {
    if ((int)(uint)bVar1 <= iVar4) {
      uVar3 = 0x90009000;
LAB_0800a602:
      return CONCAT44(local_28,uVar3);
    }
    if ((int)((uint)*(byte *)(iVar4 * 0x20 + param_1 + 0x124e) << 0x1c) < 0) {
      iVar2 = iVar4 * 0x20 + param_1;
      local_28 = (uint)*(byte *)(iVar2 + 0x1250);
      iVar2 = FUN_0800a46c(param_1,iVar4,iVar2 + 0x124e,iVar4 * 0x20 + param_1 + 0x12ce);
      if (iVar2 < 0) {
        uVar3 = 0x9f000000;
        goto LAB_0800a602;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



//==== FUNC FUN_0800a606 @ 0800a606 ====

undefined8 FUN_0800a606(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = FUN_0800a9a0(param_1,param_2);
  if (uVar1 == 0x9000) {
    iVar2 = -0x6fff7000;
  }
  else {
    iVar2 = uVar1 + 0xaf000000;
  }
  return CONCAT44(param_4,iVar2);
}



//==== FUNC FUN_0800a636 @ 0800a636 ====

undefined8 FUN_0800a636(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  
  FUN_0800016c(param_1 + 0x135c,0x114,0);
  *(undefined4 *)(param_1 + 0x1358) = 0;
  sVar1 = FUN_0800a7c4(param_1);
  if (sVar1 == -0x7000) {
    sVar1 = FUN_0800a88a(param_1);
    if (sVar1 == -0x7000) {
      uVar2 = FUN_0800a58c(param_1);
    }
    else {
      uVar2 = 0x9f000000;
    }
  }
  else {
    uVar2 = 0x9f000000;
  }
  return CONCAT44(param_4,uVar2);
}



//==== FUNC FUN_0800a6ae @ 0800a6ae ====

undefined8
FUN_0800a6ae(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  FUN_0800016c(param_1 + 0x46e,0x95,0,param_4,param_2);
  uVar1 = 0x101;
  FUN_0800016c((int)param_1 + 0x124d,0x101,0);
  FUN_0800a9c8(param_1);
  FUN_0800016c(param_1 + 0x4d7,0x114,0);
  FUN_0800016c(param_1 + 0x4d7,0x114,0);
  param_1[0x4d6] = 0;
  return CONCAT44(uVar1,0x90009000);
}



//==== FUNC FUN_0800a738 @ 0800a738 ====

undefined4 FUN_0800a738(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_0800a7c0;
  *param_3 = 0;
  iVar3 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(param_1 + 0x11fa) <= iVar3) {
      return uVar1;
    }
    if ((*(char *)(iVar3 * 0x45 + param_1 + 0x135e) != '\0') &&
       (iVar2 = FUN_0800bc64(iVar3 * 0x45 + param_1 + 0x1364,param_2,0x1f), iVar2 == 0)) break;
    iVar3 = iVar3 + 1;
  }
  *param_3 = iVar3 * 0x45 + param_1 + 0x135c;
  *(int *)(param_1 + 0x1358) = iVar3 * 0x45 + param_1 + 0x135c;
  return 0x90009000;
}



//==== FUNC FUN_0800a7c4 @ 0800a7c4 ====

undefined8 FUN_0800a7c4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *local_18;
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = FUN_0800ac44(param_1,param_1 + 0x11be,&local_14);
  uVar1 = uVar1 & 0xffff;
  local_18 = param_3;
  if (uVar1 == 0x9000) {
    *(undefined *)(param_1 + 0x11bd) = 1;
    if (*(byte *)(param_1 + 0x11c6) < 2) {
      *(undefined2 *)(param_1 + 0x11b8) = 0x3f00;
      *(undefined *)(param_1 + 0x11ba) = 0;
      *(undefined *)(param_1 + 0x11bb) = 0;
      *(undefined *)(param_1 + 0x11bc) = 0;
      *(undefined *)(param_1 + 0x11f7) = 0;
      *(undefined *)(param_1 + 0x1243) = 0;
      local_18 = param_3;
    }
    else {
      uVar1 = FUN_0800384a(param_1 + 4,0x3f00,0);
      uVar1 = uVar1 & 0xffff;
      local_18 = param_3;
      if (uVar1 == 0x9000) {
        uVar1 = FUN_0800384a(param_1 + 4,0x3fab,0);
        uVar1 = uVar1 & 0xffff;
        local_18 = param_3;
        if (uVar1 == 0x9000) {
          *(undefined2 *)(param_1 + 0x11b8) = 0x3fab;
          uVar1 = FUN_0800abee(param_1,0x5031);
          uVar1 = uVar1 & 0xffff;
          local_18 = param_3;
          if (uVar1 == 0x9000) {
            uVar2 = FUN_0800a9dc(param_1,0,0x3b,param_1 + 0x11f8);
            uVar1 = uVar2 & 0xffff;
            local_18 = &local_14;
            if (uVar1 == 0x9000) {
              *(undefined *)(param_1 + 0x11f7) = 1;
              uVar1 = uVar2 & 0xffff;
            }
          }
        }
      }
    }
  }
  return CONCAT44(local_18,uVar1);
}



//==== FUNC FUN_0800a88a @ 0800a88a ====

short FUN_0800a88a(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 local_6c;
  undefined auStack_68 [31];
  undefined local_49;
  
  local_6c = 0;
  FUN_080067d8(auStack_68,0x40);
  bVar1 = *(byte *)(param_1 + 0x11fa);
  sVar2 = FUN_0800abee(param_1,*(undefined2 *)(param_1 + 0x11fc));
  if (sVar2 == -0x7000) {
    for (iVar4 = 0; iVar4 < (int)(uint)bVar1; iVar4 = iVar4 + 1) {
      iVar3 = iVar4 * 0x20 + param_1 + 0x124e;
      FUN_0800016c(iVar3,0x20,0);
      sVar2 = FUN_0800ac0c(param_1,iVar4 + 1,0x20,iVar3,&local_6c);
      if (sVar2 != -0x7000) {
        return sVar2;
      }
      sVar2 = -0x7000;
    }
    for (iVar4 = 0; iVar4 < (int)(uint)bVar1; iVar4 = iVar4 + 1) {
      if ((int)((uint)*(byte *)(iVar4 * 0x20 + param_1 + 0x124e) << 0x1c) < 0) {
        sVar2 = FUN_0800abee(param_1,*(undefined2 *)(iVar4 * 0x20 + param_1 + 0x1252));
        if (sVar2 != -0x7000) {
          return sVar2;
        }
        sVar2 = FUN_0800a9dc(param_1,0,0x20,auStack_68,&local_6c);
        if (sVar2 != -0x7000) {
          return sVar2;
        }
        local_49 = 0;
        FUN_0800bc90(iVar4 * 0x20 + param_1 + 0x12ce,auStack_68);
        sVar2 = -0x7000;
      }
    }
  }
  return sVar2;
}



//==== FUNC FUN_0800a9a0 @ 0800a9a0 ====

undefined4 FUN_0800a9a0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_080001ee(param_1 + 0x1048,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = 0x9000;
  }
  return uVar2;
}



//==== FUNC FUN_0800a9c8 @ 0800a9c8 ====

undefined4 FUN_0800a9c8(int param_1)

{
  FUN_080001d2(param_1 + 0x1048);
  return 0x9000;
}



//==== FUNC FUN_0800a9dc @ 0800a9dc ====

ulonglong FUN_0800a9dc(int param_1,undefined2 param_2,undefined2 param_3,uint param_4,uint *param_5)

{
  undefined4 uVar1;
  uint local_20;
  
  local_20 = param_4 & 0xffff0000;
  uVar1 = FUN_0800390e(param_1 + 4,0xffff,param_2,param_3,param_4,&local_20);
  *param_5 = local_20 & 0xffff;
  return CONCAT44(param_4,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_0800aa20 @ 0800aa20 ====

uint FUN_0800aa20(int param_1,uint param_2,uint param_3,uint param_4,int param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  
  local_30 = local_30 & 0xffff0000;
  uVar5 = *(uint *)(param_1 + 0x1124) & 0xffff;
  local_2c = param_2;
  local_28 = param_3;
  uVar1 = FUN_0800384a(param_1 + 4,param_2 & 0xffff,2);
  uVar1 = uVar1 & 0xffff;
  if (uVar1 == 0x9000) {
    if (uVar5 < param_4) {
      uVar3 = 0;
      uVar4 = uVar5;
      uVar6 = uVar1;
      while (uVar3 < param_4) {
        uVar1 = FUN_0800390e(param_1 + 4,0xffff,uVar3 + local_28 & 0xffff,uVar4 & 0xffff,
                             param_5 + uVar3,&local_30);
        uVar1 = uVar1 & 0xffff;
        if (uVar1 != 0x9000) goto LAB_0800aac4;
        local_30 = CONCAT22(local_30._2_2_,(short)uVar3 + (short)local_30);
        uVar3 = uVar4 + uVar3;
        uVar4 = uVar5;
        uVar6 = uVar1;
        if (param_4 - uVar3 < uVar5) {
          uVar4 = param_4 - uVar3;
        }
      }
    }
    else {
      uVar1 = FUN_0800390e(param_1 + 4,0xffff,local_28 & 0xffff,param_4 & 0xffff,param_5,&local_30);
LAB_0800aac4:
      uVar6 = uVar1;
      if (uVar1 != 0x9000) {
        uVar6 = 0x9000;
        for (iVar2 = 0; iVar2 < (int)param_4; iVar2 = iVar2 + 1) {
          if (*(int *)(local_28 + DAT_0800eed8 + iVar2) != 0xff) {
            FUN_08000348(param_5);
            local_30 = param_4;
            goto LAB_0800aaf0;
          }
        }
        goto LAB_0800aa64;
      }
    }
LAB_0800aaf0:
    *param_6 = local_30 & 0xffff;
  }
  else {
LAB_0800aa64:
    *param_6 = 0;
    uVar6 = uVar1;
  }
  return uVar6 & 0xffff;
}



//==== FUNC FUN_0800ab00 @ 0800ab00 ====

undefined8
FUN_0800ab00(uint param_1,undefined2 param_2,uint param_3,uint param_4,int param_5,uint *param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_30;
  
  uVar5 = *(uint *)(param_1 + 0x1120);
  uVar1 = FUN_0800384a(param_1 + 4,param_2,2);
  local_30 = param_1;
  if (uVar1 == 0x9000) {
    uVar5 = uVar5 & 0xffff;
    if (uVar5 < param_4) {
      uVar3 = 0;
      uVar4 = uVar5;
      while (uVar2 = 0x9000, uVar3 < param_4) {
        local_30 = uVar4 & 0xffff;
        uVar1 = FUN_0800387c(param_1 + 4,0xffff,uVar3 + param_3 & 0xffff,param_5 + uVar3);
        if (uVar1 != 0x9000) {
          *param_6 = 0;
          uVar2 = (uint)uVar1;
          goto LAB_0800abea;
        }
        uVar2 = 0x9000;
        if ((uVar4 & 0xffff) < uVar5) break;
        uVar3 = uVar4 + uVar3 & 0xffff;
        uVar4 = uVar5;
        if (param_4 - uVar3 < uVar5) {
          uVar4 = param_4 - uVar3;
        }
      }
    }
    else {
      local_30 = param_4 & 0xffff;
      uVar5 = FUN_0800387c(param_1 + 4,0xffff,param_3 & 0xffff,param_5);
      uVar2 = uVar5 & 0xffff;
      if (uVar2 != 0x9000) {
        *param_6 = 0;
        uVar2 = uVar5 & 0xffff;
        goto LAB_0800abea;
      }
    }
    *param_6 = param_4;
  }
  else {
    *param_6 = 0;
    uVar2 = (uint)uVar1;
  }
LAB_0800abea:
  return CONCAT44(local_30,uVar2);
}



//==== FUNC FUN_0800abee @ 0800abee ====

undefined2 FUN_0800abee(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0800384a(param_1 + 4,param_2,2);
  return uVar1;
}



//==== FUNC FUN_0800ac0c @ 0800ac0c ====

ulonglong FUN_0800ac0c(int param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080039de(param_1 + 4,0xffff,param_2,param_4);
  *param_5 = param_3;
  return CONCAT44(param_3,uVar1) & 0xff0000ffff;
}



//==== FUNC FUN_0800ac44 @ 0800ac44 ====

ulonglong FUN_0800ac44(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08003342(param_1 + 4,param_2);
  *param_3 = 0x14;
  *(undefined *)(param_1 + 0x11ba) = 0;
  *(undefined *)(param_1 + 0x11bb) = 0;
  *(undefined *)(param_1 + 0x11bc) = 0;
  return CONCAT44(param_4,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_0800ac7c @ 0800ac7c ====

undefined2 FUN_0800ac7c(int param_1,undefined param_2,undefined4 param_3,undefined param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_08003b14(param_1 + 4,param_2,param_3,param_4);
  return uVar1;
}



//==== FUNC FUN_0800aca6 @ 0800aca6 ====

short FUN_0800aca6(int param_1,undefined2 param_2)

{
  short sVar1;
  
  sVar1 = FUN_0800384a(param_1 + 4,param_2,2);
  if (sVar1 == -0x7000) {
    sVar1 = FUN_08003ade(param_1 + 4,param_2);
  }
  return sVar1;
}



//==== FUNC FUN_0800acde @ 0800acde ====

ulonglong FUN_0800acde(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
                      uint param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  param_5 = param_5 & 0xffff;
  uVar1 = FUN_08003bac(param_1 + 4,param_2,param_3,param_4,param_5,param_6,param_7);
  return CONCAT44(param_5,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_0800ad22 @ 0800ad22 ====

ulonglong FUN_0800ad22(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
                      uint param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  param_5 = param_5 & 0xffff;
  uVar1 = FUN_08003ca4(param_1 + 4,param_2,param_3,param_4,param_5,param_6,param_7);
  return CONCAT44(param_5,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_0800ad66 @ 0800ad66 ====

ulonglong FUN_0800ad66(int param_1,undefined param_2,undefined4 param_3,undefined2 param_4,
                      undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08003d4c(param_1 + 4,param_2,param_3,param_4,param_5,param_6);
  return CONCAT44(param_5,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_0800ada0 @ 0800ada0 ====

ulonglong FUN_0800ada0(int param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
                      undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08003de8(param_1 + 4,param_2,param_3,param_4,param_5,param_6);
  return CONCAT44(param_5,uVar1) & 0xffffffff0000ffff;
}



//==== FUNC FUN_0800addc @ 0800addc ====

undefined4 FUN_0800addc(int param_1)

{
  undefined4 unaff_r7;
  
  if (param_1 == DAT_0800b368) {
    FUN_08008fa0(0x401);
    FUN_08008fc8(0x401);
  }
  else if (param_1 == DAT_0800b36c) {
    FUN_08008fa0(0x402);
    FUN_08008fc8(0x402);
  }
  else if (param_1 == DAT_0800b370) {
    FUN_08008fa0(0x404);
    FUN_08008fc8(0x404);
  }
  else if (param_1 == DAT_0800b374) {
    FUN_08008fa0(0x405);
    FUN_08008fc8(0x405);
  }
  else if (param_1 == DAT_0800b378) {
    FUN_08008fa0(0x406);
    FUN_08008fc8(0x406);
  }
  else if (param_1 == DAT_0800b37c) {
    FUN_08008fa0(0x407);
    FUN_08008fc8(0x407);
  }
  else if (param_1 == DAT_0800b380) {
    FUN_08008fa0(0x408);
    FUN_08008fc8(0x408);
  }
  else if (param_1 == DAT_0800b384) {
    FUN_08008fa0(0x30b);
    FUN_08008fc8(0x30b);
  }
  else if (param_1 == DAT_0800b388) {
    FUN_08008fa0(0x30d);
    FUN_08008fc8(0x30d);
  }
  else if (param_1 == DAT_0800b38c) {
    FUN_08008fa0(0x313);
    FUN_08008fc8(0x313);
  }
  else if (param_1 == DAT_0800b390) {
    FUN_08008fa0(0x314);
    FUN_08008fc8(0x314);
  }
  else if (param_1 == DAT_0800b394) {
    FUN_08008fa0(0x315);
    FUN_08008fc8(0x315);
  }
  return unaff_r7;
}



//==== FUNC FUN_0800af1a @ 0800af1a ====

void FUN_0800af1a(uint *param_1,ushort *param_2)

{
  param_1[10] = (uint)*param_2;
  if ((((param_1 == DAT_0800b384) || (param_1 == DAT_0800b368)) || (param_1 == DAT_0800b36c)) ||
     (param_1 == DAT_0800b388)) {
    *param_1 = *param_1 & 0xffffff8f;
    *param_1 = *param_1 | (uint)param_2[1];
    *param_1 = *param_1 | (uint)param_2[2];
  }
  param_1[0xb] = *(uint *)(param_2 + 4);
  if ((param_1 != DAT_0800b370) && (param_1 != DAT_0800b374)) {
    *param_1 = *param_1 & 0xfffffcff;
    *param_1 = *param_1 | (uint)param_2[6];
  }
  if ((param_1 == DAT_0800b384) || (param_1 == DAT_0800b388)) {
    param_1[0xc] = (uint)*(byte *)(param_2 + 7);
  }
  param_1[5] = param_1[5] | 1;
  return;
}



//==== FUNC FUN_0800afaa @ 0800afaa ====

void FUN_0800afaa(uint *param_1)

{
  *param_1 = *param_1 | 1;
  return;
}



//==== FUNC FUN_0800afb4 @ 0800afb4 ====

void FUN_0800afb4(uint *param_1)

{
  *param_1 = *param_1 & 0xfffffffe;
  return;
}



//==== FUNC FUN_0800afbe @ 0800afbe ====

void FUN_0800afbe(uint *param_1)

{
  *param_1 = *param_1 | 0x80;
  return;
}



//==== FUNC FUN_0800afc8 @ 0800afc8 ====

void FUN_0800afc8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



//==== FUNC FUN_0800afce @ 0800afce ====

undefined4 FUN_0800afce(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



//==== FUNC FUN_0800afd8 @ 0800afd8 ====

void FUN_0800afd8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = param_2 | *(uint *)(param_1 + 0xc);
  return;
}



//==== FUNC FUN_0800afe6 @ 0800afe6 ====

void FUN_0800afe6(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~param_2;
  return;
}



//==== FUNC FUN_0800aff6 @ 0800aff6 ====

undefined4 FUN_0800aff6(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((*(uint *)(param_1 + 0x10) & param_2) == 0) || ((*(uint *)(param_1 + 0xc) & param_2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_0800b012 @ 0800b012 ====

void FUN_0800b012(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2;
  return;
}



//==== FUNC FUN_0800b022 @ 0800b022 ====

void FUN_0800b022(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2;
  return;
}



//==== FUNC FUN_0800b032 @ 0800b032 ====

void FUN_0800b032(int param_1,char param_2)

{
  if (param_2 == '\x01') {
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x8000;
  }
  else {
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xffff7fff;
  }
  return;
}



//==== FUNC FUN_0800b058 @ 0800b058 ====

void FUN_0800b058(int param_1,ushort param_2,uint *param_3)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | *param_3;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffd;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*(ushort *)((int)param_3 + 6);
    if ((param_1 == DAT_0800b384) || (param_1 == DAT_0800b388)) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffb;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*(ushort *)(param_3 + 1);
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffff7;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*(ushort *)(param_3 + 2);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | (uint)*(ushort *)((int)param_3 + 10);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffdff;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | (uint)*(ushort *)(param_3 + 3);
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffc;
  }
  else if (param_2 == 2) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | *param_3 << 8;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffdff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*(ushort *)((int)param_3 + 6) << 8
    ;
    if ((param_1 == DAT_0800b384) || (param_1 == DAT_0800b388)) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffbff;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*(ushort *)(param_3 + 1) << 8;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffff7ff;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*(ushort *)(param_3 + 2) << 8;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffefff;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | (uint)*(ushort *)((int)param_3 + 10) << 4;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffdfff;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | (uint)*(ushort *)(param_3 + 3) << 4;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffc;
  }
  else if (param_2 < 2) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | *param_3 << 4;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*(ushort *)((int)param_3 + 6) << 4
    ;
    if ((param_1 == DAT_0800b384) || (param_1 == DAT_0800b388)) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffbf;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*(ushort *)(param_3 + 1) << 4;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff7f;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*(ushort *)(param_3 + 2) << 4;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffbff;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | (uint)*(ushort *)((int)param_3 + 10) << 2;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | (uint)*(ushort *)(param_3 + 3) << 2;
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffcff;
  }
  else if (param_2 == 3) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffefff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | *param_3 << 0xc;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffdfff;
    *(uint *)(param_1 + 0x20) =
         *(uint *)(param_1 + 0x20) | (uint)*(ushort *)((int)param_3 + 6) << 0xc;
    if ((param_1 == DAT_0800b384) || (param_1 == DAT_0800b388)) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffbfff;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | (uint)*(ushort *)((int)param_3 + 10) << 6;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffcff;
  }
  return;
}



//==== FUNC FUN_0800b398 @ 0800b398 ====

void FUN_0800b398(int param_1,ushort param_2,uint param_3)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff8f;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | param_3 & 0xffff;
  }
  else if (param_2 == 2) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffff8f;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | param_3 & 0xffff;
  }
  else if (param_2 < 2) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff8fff;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | (param_3 & 0xffff) << 8;
  }
  else if (param_2 == 3) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff8fff;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (param_3 & 0xffff) << 8;
  }
  return;
}



//==== FUNC FUN_0800b430 @ 0800b430 ====

void FUN_0800b430(int param_1,ushort param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x34) = param_3;
  }
  else if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x3c) = param_3;
  }
  else if (param_2 < 2) {
    *(undefined4 *)(param_1 + 0x38) = param_3;
  }
  else if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0x40) = param_3;
  }
  return;
}



//==== FUNC FUN_0800b45c @ 0800b45c ====

void FUN_0800b45c(int param_1,ushort param_2,uint param_3)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffff7;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | param_3 & 0xffff;
  }
  else if (param_2 == 2) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffff7;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | param_3 & 0xffff;
  }
  else if (param_2 < 2) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffff7ff;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | (param_3 & 0xffff) << 8;
  }
  else if (param_2 == 3) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffff7ff;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (param_3 & 0xffff) << 8;
  }
  return;
}



//==== FUNC FUN_0800b4f4 @ 0800b4f4 ====

void FUN_0800b4f4(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  param_4 = param_4 + -1;
  while ((uVar2 < param_2 && (-1 < param_4))) {
    uVar1 = 0;
    for (uVar3 = 0; (-1 < param_4 && (uVar3 < 0x20)); uVar3 = uVar3 + 8) {
      uVar1 = uVar1 | (uint)*(byte *)(param_3 + param_4) << (uVar3 & 0xff);
      param_4 = param_4 + -1;
    }
    *(uint *)(param_1 + uVar2 * 4) = uVar1;
    uVar2 = uVar2 + 1;
  }
  for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *(undefined4 *)(param_1 + uVar2 * 4) = 0;
  }
  return;
}



//==== FUNC FUN_0800b532 @ 0800b532 ====

void FUN_0800b532(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  param_2 = param_2 + -1;
  while ((uVar2 < param_4 && (-1 < param_2))) {
    uVar1 = *(uint *)(param_3 + uVar2 * 4);
    for (uVar3 = 0; (-1 < param_2 && (uVar3 < 0x20)); uVar3 = uVar3 + 8) {
      *(char *)(param_1 + param_2) = (char)(uVar1 >> (uVar3 & 0xff));
      param_2 = param_2 + -1;
    }
    uVar2 = uVar2 + 1;
  }
  for (; -1 < param_2; param_2 = param_2 + -1) {
    *(undefined *)(param_1 + param_2) = 0;
  }
  return;
}



//==== FUNC FUN_0800b56c @ 0800b56c ====

void FUN_0800b56c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined4 *)(param_1 + uVar1 * 4) = *(undefined4 *)(param_2 + uVar1 * 4);
  }
  return;
}



//==== FUNC FUN_0800b584 @ 0800b584 ====

void FUN_0800b584(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    *(undefined4 *)(param_1 + uVar1 * 4) = 0;
  }
  return;
}



//==== FUNC FUN_0800b596 @ 0800b596 ====

int FUN_0800b596(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  for (uVar2 = 0; uVar2 < param_4; uVar2 = uVar2 + 1) {
    uVar3 = *(int *)(param_2 + uVar2 * 4) - iVar1;
    if (-iVar1 - 1U < uVar3) {
      uVar3 = -*(int *)(param_3 + uVar2 * 4) - 1;
    }
    else {
      uVar3 = uVar3 - *(int *)(param_3 + uVar2 * 4);
      if (-*(int *)(param_3 + uVar2 * 4) - 1U < uVar3) {
        iVar1 = 1;
      }
      else {
        iVar1 = 0;
      }
    }
    *(uint *)(param_1 + uVar2 * 4) = uVar3;
  }
  return iVar1;
}



//==== FUNC FUN_0800b5e4 @ 0800b5e4 ====

void FUN_0800b5e4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int aiStack_22c [131];
  
  FUN_0800b584(aiStack_22c,param_4 << 1);
  uVar1 = FUN_0800b9d6(param_2,param_4);
  iVar2 = FUN_0800b9d6(param_3,param_4);
  for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
    iVar3 = FUN_0800b9ec(aiStack_22c + uVar4,aiStack_22c + uVar4,
                         *(undefined4 *)(param_2 + uVar4 * 4),param_3,iVar2);
    aiStack_22c[iVar2 + uVar4] = iVar3 + aiStack_22c[iVar2 + uVar4];
  }
  FUN_0800b56c(param_1,aiStack_22c,param_4 << 1);
  FUN_0800a320(aiStack_22c,0,0x208);
  return;
}



//==== FUNC FUN_0800b66c @ 0800b66c ====

uint FUN_0800b66c(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 < 0x20) {
    uVar1 = 0;
    for (uVar3 = 0; uVar3 < param_4; uVar3 = uVar3 + 1) {
      uVar2 = *(uint *)(param_2 + uVar3 * 4);
      *(uint *)(param_1 + uVar3 * 4) = uVar1 | uVar2 << (param_3 & 0xff);
      if (param_3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar2 >> (0x20 - param_3 & 0xff);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_0800b6a8 @ 0800b6a8 ====

uint FUN_0800b6a8(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 < 0x20) {
    uVar1 = 0;
    for (param_4 = param_4 + -1; -1 < param_4; param_4 = param_4 + -1) {
      uVar2 = *(uint *)(param_2 + param_4 * 4);
      *(uint *)(param_1 + param_4 * 4) = uVar1 | uVar2 >> (param_3 & 0xff);
      if (param_3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar2 << (0x20 - param_3 & 0xff);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_0800b6e2 @ 0800b6e2 ====

void FUN_0800b6e2(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_33c;
  undefined auStack_338 [256];
  undefined auStack_238 [4];
  int aiStack_234 [132];
  
  iVar1 = FUN_0800b9d6(param_5,param_6);
  if (iVar1 != 0) {
    iVar2 = FUN_0800baee(*(undefined4 *)(param_5 + iVar1 * 4 + -4));
    iVar2 = 0x20 - iVar2;
    FUN_0800b584(aiStack_234,iVar1);
    iVar3 = FUN_0800b66c(aiStack_234,param_3,iVar2,param_4);
    aiStack_234[param_4] = iVar3;
    FUN_0800b66c(auStack_338,param_5,iVar2,iVar1);
    iVar3 = *(int *)(auStack_338 + iVar1 * 4 + -4);
    FUN_0800b584(param_1,param_4);
    for (param_4 = param_4 - iVar1; -1 < param_4; param_4 = param_4 + -1) {
      if (iVar3 == -1) {
        local_33c = aiStack_234[iVar1 + param_4];
      }
      else {
        FUN_0800bd28(&local_33c,auStack_238 + (iVar1 + param_4) * 4,iVar3 + 1);
      }
      iVar4 = FUN_0800ba66(aiStack_234 + param_4,aiStack_234 + param_4,local_33c,auStack_338,iVar1);
      aiStack_234[iVar1 + param_4] = aiStack_234[iVar1 + param_4] - iVar4;
      while ((aiStack_234[iVar1 + param_4] != 0 ||
             (iVar4 = FUN_0800b9a2(aiStack_234 + param_4,auStack_338,iVar1), -1 < iVar4))) {
        local_33c = local_33c + 1;
        iVar4 = FUN_0800b596(aiStack_234 + param_4,aiStack_234 + param_4,auStack_338,iVar1);
        aiStack_234[iVar1 + param_4] = aiStack_234[iVar1 + param_4] - iVar4;
      }
      *(int *)(param_1 + param_4 * 4) = local_33c;
    }
    FUN_0800b584(param_2,param_6);
    FUN_0800b6a8(param_2,aiStack_234,iVar2,iVar1);
    FUN_0800a320(aiStack_234,0,0x20c);
    FUN_0800a320(auStack_338,0,0x104);
  }
  return;
}



//==== FUNC FUN_0800b842 @ 0800b842 ====

void FUN_0800b842(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined auStack_210 [520];
  
  FUN_0800b6e2(auStack_210,param_1,param_2,param_3,param_4,param_5);
  FUN_0800a320(auStack_210,0,0x208);
  return;
}



//==== FUNC FUN_0800b86c @ 0800b86c ====

void FUN_0800b86c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined auStack_21c [524];
  
  FUN_0800b5e4(auStack_21c,param_2,param_3,param_5);
  FUN_0800b842(param_1,auStack_21c,param_5 << 1,param_4,param_5);
  FUN_0800a320(auStack_21c,0,0x208);
  return;
}



//==== FUNC FUN_0800b8a0 @ 0800b8a0 ====

void FUN_0800b8a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_438 [65];
  undefined auStack_334 [260];
  undefined auStack_230 [260];
  undefined auStack_12c [264];
  
  FUN_0800b56c(auStack_334,param_2,param_6);
  FUN_0800b86c(auStack_230,auStack_334,param_2,param_5,param_6);
  FUN_0800b86c(auStack_12c,auStack_230,param_2,param_5,param_6);
  FUN_0800b584(local_438,param_6);
  local_438[0] = 1;
  iVar1 = FUN_0800b9d6(param_3,param_4);
  iVar2 = iVar1;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    uVar3 = *(uint *)(param_3 + iVar2 * 4);
    uVar4 = 0x20;
    if (iVar2 == iVar1 + -1) {
      for (; uVar3 >> 0x1e == 0; uVar3 = uVar3 << 2) {
        uVar4 = uVar4 - 2;
      }
    }
    for (uVar5 = 0; uVar5 < uVar4; uVar5 = uVar5 + 2) {
      FUN_0800b86c(local_438,local_438,local_438,param_5,param_6);
      FUN_0800b86c(local_438,local_438,local_438,param_5,param_6);
      if (uVar3 >> 0x1e != 0) {
        FUN_0800b86c(local_438,local_438,local_438 + (uVar3 >> 0x1e) * 0x41,param_5,param_6);
      }
      uVar3 = uVar3 << 2;
    }
  }
  FUN_0800b56c(param_1,local_438,param_6);
  FUN_0800a320(auStack_334,0,0x30c);
  FUN_0800a320(local_438,0,0x104);
  return;
}



//==== FUNC FUN_0800b9a2 @ 0800b9a2 ====

undefined4 FUN_0800b9a2(int param_1,int param_2,int param_3)

{
  param_3 = param_3 + -1;
  while( true ) {
    if (param_3 < 0) {
      return 0;
    }
    if (*(uint *)(param_2 + param_3 * 4) < *(uint *)(param_1 + param_3 * 4)) break;
    if (*(uint *)(param_1 + param_3 * 4) < *(uint *)(param_2 + param_3 * 4)) {
      return 0xffffffff;
    }
    param_3 = param_3 + -1;
  }
  return 1;
}



//==== FUNC FUN_0800b9d6 @ 0800b9d6 ====

int FUN_0800b9d6(int param_1,int param_2)

{
  for (param_2 = param_2 + -1; (-1 < param_2 && (*(int *)(param_1 + param_2 * 4) == 0));
      param_2 = param_2 + -1) {
  }
  return param_2 + 1;
}



//==== FUNC FUN_0800b9ec @ 0800b9ec ====

undefined8 FUN_0800b9ec(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint local_28;
  int local_24;
  
  local_28 = param_3;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    local_24 = param_4;
    for (uVar2 = 0; uVar2 < param_5; uVar2 = uVar2 + 1) {
      FUN_0800bcd4(&local_28,param_3,*(undefined4 *)(param_4 + uVar2 * 4));
      *(uint *)(param_1 + uVar2 * 4) = uVar1 + *(int *)(param_2 + uVar2 * 4);
      uVar1 = (uint)(*(uint *)(param_1 + uVar2 * 4) < uVar1);
      *(uint *)(param_1 + uVar2 * 4) = local_28 + *(int *)(param_1 + uVar2 * 4);
      if (*(uint *)(param_1 + uVar2 * 4) < local_28) {
        uVar1 = uVar1 + 1;
      }
      uVar1 = local_24 + uVar1;
    }
  }
  return CONCAT44(local_28,uVar1);
}



//==== FUNC FUN_0800ba66 @ 0800ba66 ====

undefined8 FUN_0800ba66(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_28;
  int local_24;
  
  local_28 = param_3;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    local_24 = param_4;
    for (uVar2 = 0; uVar2 < param_5; uVar2 = uVar2 + 1) {
      FUN_0800bcd4(&local_28,param_3,*(undefined4 *)(param_4 + uVar2 * 4));
      *(int *)(param_1 + uVar2 * 4) = *(int *)(param_2 + uVar2 * 4) - iVar1;
      uVar3 = (uint)(-iVar1 - 1U < *(uint *)(param_1 + uVar2 * 4));
      *(int *)(param_1 + uVar2 * 4) = *(int *)(param_1 + uVar2 * 4) - local_28;
      if (-local_28 - 1U < *(uint *)(param_1 + uVar2 * 4)) {
        uVar3 = uVar3 + 1;
      }
      iVar1 = local_24 + uVar3;
    }
  }
  return CONCAT44(local_28,iVar1);
}



//==== FUNC FUN_0800baee @ 0800baee ====

uint FUN_0800baee(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; (uVar1 < 0x20 && (param_1 != 0)); param_1 = param_1 >> 1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



//==== FUNC FUN_0800bb04 @ 0800bb04 ====

undefined4 FUN_0800bb04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0800be8c(param_2,param_3);
  return 0;
}



//==== FUNC FUN_0800bb18 @ 0800bb18 ====

bool FUN_0800bb18(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0800bed2(param_2,param_3);
  if (iVar1 != 0) {
    *param_3 = 0;
  }
  return iVar1 != 0;
}



//==== FUNC FUN_0800bb38 @ 0800bb38 ====

undefined8 FUN_0800bb38(undefined4 param_1)

{
  return CONCAT44(param_1,DAT_0800bbf4);
}



//==== FUNC FUN_0800bb3e @ 0800bb3e ====

undefined4 FUN_0800bb3e(void)

{
  if (*DAT_0800bbf4 == '\0') {
    FUN_0800be7c();
  }
  *DAT_0800bbf4 = '\x01';
  return 0;
}



//==== FUNC FUN_0800bb58 @ 0800bb58 ====

undefined4 FUN_0800bb58(void)

{
  if (*DAT_0800bbf4 != '\0') {
    FUN_0800be84();
  }
  *DAT_0800bbf4 = '\0';
  return 0;
}



//==== FUNC FUN_0800bb72 @ 0800bb72 ====

undefined8
FUN_0800bb72(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0800bb04(*param_1,param_2,param_3);
  return CONCAT44(param_4,(uint)(iVar1 != 0));
}



//==== FUNC FUN_0800bb92 @ 0800bb92 ====

undefined8
FUN_0800bb92(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0800bb18(*param_1,param_2,param_3);
  return CONCAT44(param_4,(uint)(iVar1 != 0));
}



//==== FUNC FUN_0800bbb2 @ 0800bbb2 ====

undefined8
FUN_0800bbb2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0800bb04(*param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_0800bb18(*param_1,param_4,param_5);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(param_4,uVar2);
}



//==== FUNC FUN_0800bbf8 @ 0800bbf8 ====

uint * FUN_0800bbf8(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = param_1;
  uVar4 = param_3;
  if (((uint)param_2 & 3) != 0) {
    puVar3 = param_2;
    if (param_3 < 4) goto LAB_0800bc48;
    do {
      param_2 = (uint *)((int)puVar3 + 1);
      cVar1 = *(char *)puVar3;
      param_3 = param_3 - 1;
      puVar3 = (uint *)((int)puVar2 + 1);
      *(char *)puVar2 = cVar1;
      if (cVar1 == '\0') goto LAB_0800bc58;
      puVar2 = puVar3;
      puVar3 = param_2;
      uVar4 = param_3;
    } while (((uint)param_2 & 3) != 0);
  }
  while (param_3 = uVar4 - 4, 3 < uVar4) {
    uVar4 = *param_2;
    uVar5 = uVar4 + 0xfefefeff & ~uVar4;
    uVar6 = uVar5 & 0x80808080;
    if (uVar6 != 0) {
      uVar5 = 0x18 - LZCOUNT((uVar5 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                             (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
      puVar3 = puVar2 + 1;
      *puVar2 = (uVar4 << (uVar5 & 0xff)) >> (uVar5 & 0xff);
      goto LAB_0800bc58;
    }
    *puVar2 = uVar4;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
    uVar4 = param_3;
  }
LAB_0800bc48:
  param_3 = uVar4;
  if (param_3 != 0) {
    do {
      cVar1 = *(char *)param_2;
      param_3 = param_3 - 1;
      puVar3 = (uint *)((int)puVar2 + 1);
      *(char *)puVar2 = cVar1;
      if (cVar1 == '\0') break;
      puVar2 = puVar3;
      param_2 = (uint *)((int)param_2 + 1);
    } while (param_3 != 0);
LAB_0800bc58:
    if (param_3 != 0) {
      FUN_08000174(puVar3,param_3,0);
    }
  }
  return param_1;
}



//==== FUNC FUN_0800bc64 @ 0800bc64 ====

undefined4 FUN_0800bc64(byte *param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    if (*param_1 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_0800bc90 @ 0800bc90 ====

uint * FUN_0800bc90(uint *param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1 & 3;
  puVar2 = param_1;
  while( true ) {
    if (uVar3 == 0) {
      uVar3 = *param_2;
      while ((uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0) {
        *puVar2 = uVar3;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
        uVar3 = *param_2;
      }
      cVar1 = *(char *)param_2;
      while( true ) {
        param_2 = (uint *)((int)param_2 + 1);
        *(char *)puVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = *(char *)param_2;
        puVar2 = (uint *)((int)puVar2 + 1);
      }
      return param_1;
    }
    cVar1 = *(char *)param_2;
    *(char *)puVar2 = cVar1;
    if (cVar1 == '\0') break;
    uVar3 = (uint)(uint *)((int)puVar2 + 1) & 3;
    puVar2 = (uint *)((int)puVar2 + 1);
    param_2 = (uint *)((int)param_2 + 1);
  }
  return param_1;
}



//==== FUNC FUN_0800bcd4 @ 0800bcd4 ====

void FUN_0800bcd4(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = (param_3 & 0xffff) * (param_2 & 0xffff);
  uVar2 = (param_3 & 0xffff) * (param_2 >> 0x10);
  param_1[1] = (param_3 >> 0x10) * (param_2 >> 0x10);
  uVar1 = uVar2 + (param_3 >> 0x10) * (param_2 & 0xffff);
  if (uVar1 < uVar2) {
    param_1[1] = param_1[1] + 0x10000;
  }
  *param_1 = uVar1 * 0x10000 + *param_1;
  if (*param_1 < uVar1 * 0x10000) {
    param_1[1] = param_1[1] + 1;
  }
  param_1[1] = param_1[1] + (uVar1 >> 0x10);
  return;
}



//==== FUNC FUN_0800bd28 @ 0800bd28 ====

uint FUN_0800bd28(int *param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_18;
  uint local_14;
  
  local_14 = param_2[1];
  if (param_3 >> 0x10 == 0xffff) {
    uVar1 = (ushort)(local_14 >> 0x10);
  }
  else {
    uVar1 = (ushort)(local_14 / ((param_3 >> 0x10) + 1));
  }
  uVar4 = param_3 >> 0x10;
  uVar3 = param_3 & 0xffff;
  uVar5 = uVar3 * uVar1;
  uVar2 = (uint)uVar1;
  local_18 = *param_2 + uVar5 * -0x10000;
  if (uVar5 * -0x10000 - 1 < local_18) {
    local_14 = local_14 - 1;
  }
  local_14 = (local_14 - (uVar5 >> 0x10)) - uVar4 * uVar2;
  while ((uVar4 < local_14 || ((local_14 == uVar4 && (uVar3 << 0x10 <= local_18))))) {
    local_18 = local_18 + uVar3 * -0x10000;
    if (uVar3 * -0x10000 - 1 < local_18) {
      local_14 = local_14 - 1;
    }
    local_14 = local_14 - uVar4;
    uVar2 = uVar2 + 1;
  }
  if (uVar4 == 0xffff) {
    uVar1 = (ushort)local_14;
  }
  else {
    uVar1 = (ushort)(((local_18 >> 0x10) + local_14 * 0x10000) / (uVar4 + 1));
  }
  uVar5 = (uint)uVar1;
  uVar4 = uVar4 * uVar5;
  local_18 = local_18 - uVar3 * uVar1;
  if (-(uVar3 * uVar1) - 1 < local_18) {
    local_14 = local_14 - 1;
  }
  local_18 = local_18 + uVar4 * -0x10000;
  if (uVar4 * -0x10000 - 1 < local_18) {
    local_14 = local_14 - 1;
  }
  local_14 = local_14 - (uVar4 >> 0x10);
  while ((local_14 != 0 || (param_3 <= local_18))) {
    local_18 = local_18 - param_3;
    if (-param_3 - 1 < local_18) {
      local_14 = local_14 + -1;
    }
    uVar5 = uVar5 + 1;
  }
  *param_1 = uVar2 * 0x10000 + (uVar5 & 0xffff);
  return local_18;
}



//==== FUNC FUN_0800be7c @ 0800be7c ====

undefined4 FUN_0800be7c(void)

{
  undefined4 unaff_r7;
  
  FUN_08007c9e();
  return unaff_r7;
}



//==== FUNC FUN_0800be84 @ 0800be84 ====

undefined4 FUN_0800be84(void)

{
  undefined4 unaff_r7;
  
  FUN_08007d10();
  return unaff_r7;
}



//==== FUNC FUN_0800be8c @ 0800be8c ====

undefined4 FUN_0800be8c(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_080092a6(DAT_0800bfd8,0x10);
  FUN_0800a1b0(5);
  for (uVar1 = 0; uVar1 < 5; uVar1 = uVar1 + 1) {
    FUN_08007c6c(0xff);
  }
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    FUN_08007c6c(*(undefined *)(param_1 + uVar1));
  }
  FUN_080092a0(DAT_0800bfd8,0x10);
  return 0;
}



//==== FUNC FUN_0800bed2 @ 0800bed2 ====

undefined4 FUN_0800bed2(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char local_828 [2052];
  
  FUN_080067d8(local_828,0x800);
  uVar2 = FUN_0800a15c();
  FUN_080092a6(DAT_0800bfd8,0x10);
  FUN_0800a1b0(5);
  do {
    local_828[0] = FUN_08007c6c(0xff);
    if (local_828[0] == -0x56) {
      local_828[0] = -0x56;
      for (uVar4 = 1; uVar4 < 3; uVar4 = uVar4 + 1) {
        cVar1 = FUN_08007c6c(0xff);
        local_828[uVar4] = cVar1;
      }
      uVar4 = (uint)(byte)local_828[1] * 0x100 + (uint)(byte)local_828[2];
      if ((uVar4 < 0x7f7) && (1 < uVar4)) {
        for (uVar5 = 3; uVar5 < uVar4 + 10; uVar5 = uVar5 + 1) {
          cVar1 = FUN_08007c6c(0xff);
          local_828[uVar5] = cVar1;
        }
        FUN_080092a0(DAT_0800bfd8,0x10);
        *param_2 = uVar4 + 10;
        FUN_08000348(param_1,local_828,*param_2);
        return 0;
      }
      FUN_080092a0(DAT_0800bfd8,0x10);
      uVar2 = 2;
      goto LAB_0800bfc8;
    }
    iVar3 = FUN_0800a16c(uVar2,5000);
  } while (iVar3 != 1);
  FUN_080092a0(DAT_0800bfd8,0x10);
  uVar2 = 1;
LAB_0800bfc8:
  *param_2 = 0;
  return uVar2;
}



//==== FUNC sub_0800bfdc @ 0800bfdc ====

undefined8 sub_0800bfdc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_10;
  
  local_10 = param_4;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(char *)(param_1 + 0x1c) == '\0') {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (((*(char *)(param_1 + 0xc) == '\0') ||
          (*(char *)(param_1 + 0xd) != *(char *)(param_1 + 0x28))) ||
         (*(char *)(param_1 + 0xd) != *(char *)(param_1 + 0x103e))) {
        if (*(ushort *)(param_1 + 0x1e) < 3) {
          (**(code **)(param_1 + 0x20b8))(param_1,&local_10,3);
          *(undefined *)(param_1 + 0xe) = 0;
          uVar3 = 0;
        }
        else {
          sVar1 = *(short *)(param_1 + 0x1e);
          *(undefined *)(param_1 + 0xc) = *(undefined *)(param_1 + 0x25);
          *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0x28);
          cVar2 = *(char *)(param_1 + 0x29);
          if (cVar2 == '!') {
            iVar4 = (**(code **)(param_1 + 0x20cc))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '#') {
            iVar4 = (**(code **)(param_1 + 0x20d0))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '$') {
            iVar4 = (**(code **)(param_1 + 0x20d4))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '%') {
            iVar4 = (**(code **)(param_1 + 0x20d8))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '\'') {
            uVar3 = FUN_0800c844(param_1,param_1 + 0x2a,sVar1 + -2);
          }
          else if (cVar2 == -1) {
            (**(code **)(param_1 + 0x20b8))(param_1,param_1 + 0x29,(ushort)(sVar1 - 2) + 1);
          }
          else {
            (**(code **)(param_1 + 0x20b8))(param_1,&DAT_0800c3b0,2);
          }
          *(undefined *)(param_1 + 0xe) = 0;
          uVar3 = uVar3 & 0xff;
        }
      }
      else {
        if (*(uint *)(param_1 + 0x1034) < 0x1011) {
          (**(code **)(param_1 + 0x20b4))
                    (param_1,param_1 + 0x1038,*(undefined4 *)(param_1 + 0x1034));
        }
        else {
          (**(code **)(param_1 + 0x20b4))(param_1,param_1 + 0x1038,4);
        }
        (**(code **)(param_1 + 0x20c4))(param_1,1);
        *(undefined *)(param_1 + 0xe) = 0;
        uVar3 = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0xc) != '\0') {
        (**(code **)(param_1 + 0x20b8))(param_1,&DAT_0800c330,2);
      }
      *(undefined *)(param_1 + 0xe) = 0;
      uVar3 = 0;
    }
  }
  return CONCAT44(local_10,uVar3);
}



//==== FUNC FUN_0800c184 @ 0800c184 ====

undefined8 FUN_0800c184(void)

{
  int iVar1;
  uint local_10;
  uint local_c;
  
  FUN_0800cb0c(0);
  FUN_0800cb0c(2);
  FUN_0800cb0c(1);
  FUN_0800cb48(0);
  FUN_0800cb48(2);
  FUN_0800cb2c(1);
  FUN_080091e0(DAT_0800cab8,0x10,3,0x400);
  FUN_080091e0(DAT_0800cab8,0x10,3,0x800);
  FUN_080092ac(DAT_0800cab8,0x400,1);
  FUN_080092ac(DAT_0800cab8,0x800,1);
  FUN_08006b70();
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    FUN_0800cb84();
    FUN_0800cb9e(1);
    for (local_10 = 0; local_10 < DAT_0800cabc; local_10 = local_10 + 1) {
    }
    FUN_0800cb9e(0);
    for (local_10 = 0; local_10 < DAT_0800cabc; local_10 = local_10 + 1) {
    }
  }
  FUN_08006d7c(0x1c200);
  FUN_08006ebe(1);
  FUN_08008f50(0x600);
  FUN_0800937e(DAT_0800cac0,1);
  FUN_0800cc80(10000);
  FUN_0800ccdc(1);
  FUN_0800a10c();
  iVar1 = FUN_08006f22();
  if (iVar1 == 0) {
    FUN_0800cb2c(2);
  }
  else {
    FUN_0800cb48(2);
  }
  FUN_080066cc();
  return CONCAT44(local_c,local_10);
}



//==== FUNC sub_0800c288 @ 0800c288 ====

undefined8 sub_0800c288(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_0800c184(param_1,1);
  (**(code **)(param_1 + 0x20c8))(param_1);
  iVar2 = FUN_080056ea();
  if (iVar2 == 0) {
    FUN_08006b94(6);
    FUN_0800cb2c(0);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = FUN_0800696e();
  if (iVar2 == 0) {
    FUN_08006b94(8);
    FUN_0800cb2c(0);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = FUN_0800cd40();
  if (iVar2 == 0) {
    FUN_08006b94(9);
    FUN_0800cb2c(0);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = FUN_0800cd8c();
  if (iVar2 == 0) {
    FUN_08006b94(9);
    FUN_0800cd7e();
    FUN_0800cb2c(0);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_0800cd7e();
  iVar2 = FUN_08006478(0,&iStack_18,0xd);
  if (iVar2 == 0) {
    FUN_08007d10();
    iVar2 = FUN_080056bc(DAT_0800cac4);
    if (iVar2 != 0) {
      FUN_080056d4(DAT_0800cac4);
    }
  }
  FUN_08007d10();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableFIQinterrupts(0);
  }
  return CONCAT44(uStack_14,iStack_18);
}



//==== FUNC sub_0800c334 @ 0800c334 ====

void sub_0800c334(void)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableFIQinterrupts(1);
  }
  *DAT_0800cacc = DAT_0800cac8;
  return;
}



//==== FUNC sub_0800c346 @ 0800c346 ====

uint sub_0800c346(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_08006b88();
  if (iVar2 == 0) {
    iVar2 = FUN_0800cb64(0);
    if (iVar2 == 1) {
      FUN_0800cb48(0);
    }
    uVar3 = (uint)*(byte *)(param_1 + 8);
    if (uVar3 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        enableIRQinterrupts(1);
      }
      iVar2 = FUN_0800695a(1);
      if (iVar2 == 0) {
        FUN_08006b94(5);
        uVar3 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          enableIRQinterrupts(0);
        }
      }
      else {
        iVar2 = FUN_080056bc(DAT_0800cac4);
        if (iVar2 == 0) {
          FUN_08006b94(4);
        }
        else {
          FUN_080056d4(DAT_0800cac4);
        }
        uVar3 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          enableIRQinterrupts(0);
        }
      }
    }
  }
  else {
    uVar3 = FUN_0800cb2c(0);
  }
  return uVar3;
}



//==== FUNC sub_0800c3b4 @ 0800c3b4 ====

undefined4 sub_0800c3b4(int param_1)

{
  undefined4 unaff_r7;
  
  (**(code **)(param_1 + 0x20a8))();
  return unaff_r7;
}



//==== FUNC sub_0800c3c0 @ 0800c3c0 ====

undefined4 sub_0800c3c0(int param_1,byte param_2,undefined param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x10) = 0x14;
  if (*(char *)(param_1 + 0xf) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined *)(param_1 + 0x1c) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 9) = 1;
  }
  if (*(uint *)(param_1 + 0x20) < 6) {
    if (*(uint *)(param_1 + 0x20) < 2) {
      local_20 = *DAT_0800cad0;
      uStack_1c = DAT_0800cad0[1];
      uStack_18 = DAT_0800cad0[2];
      uVar2 = 0;
      bVar1 = false;
      if (*(int *)(param_1 + 0x20) == 0) {
        for (; (uVar2 & 0xff) < 3; uVar2 = (uVar2 & 0xff) + 1) {
          if (*(byte *)((int)&local_20 + *(int *)(param_1 + 0x20) + (uVar2 & 0xff) * 3) == param_2)
          {
            *DAT_0800cad4 = (byte)uVar2;
            bVar1 = true;
            break;
          }
        }
      }
      else if (*(byte *)((int)&local_20 + (uint)*DAT_0800cad4 * 3 + 1) == param_2) {
        if (*DAT_0800cad4 == 1) {
          FUN_08006d68(DAT_0800cad8);
        }
        else if (*DAT_0800cad4 == 2) {
          *(undefined *)(param_1 + 9) = 0;
          bVar1 = true;
        }
        else {
          bVar1 = true;
        }
      }
      if (bVar1) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      else {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      return 0;
    }
    *(byte *)(*(int *)(param_1 + 0x20) + param_1 + 0x22) = param_2;
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) ^ param_2;
    if ((*(int *)(param_1 + 0x20) == 2) && (param_2 != *(byte *)(param_1 + 0xb))) {
      *(undefined *)(param_1 + 0xf) = 1;
      return 0;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    if (*(int *)(param_1 + 0x20) == 6) {
      *DAT_0800cadc = CONCAT11(*(undefined *)(param_1 + 0x26),*(undefined *)(param_1 + 0x27));
      *(ushort *)(param_1 + 0x1e) = *DAT_0800cadc;
      if (0x100c < *(ushort *)(param_1 + 0x1e)) {
        *(undefined *)(param_1 + 0xf) = 1;
        (**(code **)(param_1 + 0x20b8))(param_1,&DAT_0800c80c,2);
        return 0;
      }
      *DAT_0800cadc = *DAT_0800cadc + 1;
    }
  }
  else {
    if (0x1010 < *(int *)(param_1 + 0x20) - 2U) {
      *(undefined *)(param_1 + 0xf) = 1;
      (**(code **)(param_1 + 0x20b8))(param_1,&DAT_0800c80c,2);
      return 0;
    }
    if (*DAT_0800cadc < 2) {
      *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) ^ param_2;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined4 *)(param_1 + 0x20) = 0;
      (**(code **)(param_1 + 0x20c4))(param_1,0);
      *(undefined *)(param_1 + 3) = param_3;
      FUN_0800cb48(2);
      (**(code **)(param_1 + 0x20a8))(param_1);
      return 1;
    }
    *(byte *)(*(int *)(param_1 + 0x20) + param_1 + 0x22) = param_2;
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) ^ param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *DAT_0800cadc = *DAT_0800cadc - 1;
  }
  return 0;
}



//==== FUNC sub_0800c592 @ 0800c592 ====

undefined4 sub_0800c592(undefined4 param_1,char param_2)

{
  undefined4 unaff_r7;
  
  if (param_2 == '\0') {
    FUN_0800ccdc(0);
    FUN_08006ebe(0);
  }
  else {
    FUN_0800ccdc(1);
    FUN_08006ebe(1);
  }
  return unaff_r7;
}



//==== FUNC sub_0800c5b6 @ 0800c5b6 ====

void sub_0800c5b6(int param_1)

{
  FUN_08006ebe(1);
  *(undefined *)(param_1 + 3) = 2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



//==== FUNC sub_0800c5ca @ 0800c5ca ====

void sub_0800c5ca(int param_1)

{
  if (*(short *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined *)(param_1 + 0xf) = 1;
  }
  else {
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}



//==== FUNC sub_0800c5ee @ 0800c5ee ====

byte sub_0800c5ee(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = 0xff;
  if (*(char *)(param_1 + 3) == '\x02') {
    FUN_0800cb48(2);
    for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1) {
      FUN_08006e3a(*(undefined *)(param_2 + uVar2));
      bVar1 = bVar1 ^ *(byte *)(param_2 + uVar2);
    }
    FUN_0800cb2c(2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return bVar1;
}



//==== FUNC sub_0800c636 @ 0800c636 ====

undefined8 sub_0800c636(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined local_28;
  undefined7 uStack_27;
  
  uVar1 = 0;
  for (uVar2 = 0; uVar2 < param_4; uVar2 = uVar2 + 1) {
    uVar1 = *(int *)(param_3 + uVar2 * 4) + uVar1;
  }
  if ((uVar1 != 0) && (uVar1 < 0x1009)) {
    *(undefined *)(param_1 + 0x1038) = 0x55;
    *(undefined *)(param_1 + 0x1039) = 0xaa;
    *(undefined *)(param_1 + 0x103a) = *(undefined *)(param_1 + 0xc);
    *(undefined *)(param_1 + 0x103b) = *(undefined *)(param_1 + 0xb);
    *(char *)(param_1 + 0x103c) = (char)(uVar1 + 1 >> 8);
    *(char *)(param_1 + 0x103d) = (char)uVar1 + '\x01';
    *(undefined *)(param_1 + 0x103e) = *(undefined *)(param_1 + 0xd);
    iVar3 = param_1 + 0x103f;
    for (uVar2 = 0; uVar2 < param_4; uVar2 = uVar2 + 1) {
      FUN_08000348(iVar3,*(undefined4 *)(param_2 + uVar2 * 4),*(undefined4 *)(param_3 + uVar2 * 4));
      iVar3 = iVar3 + *(int *)(param_3 + uVar2 * 4);
    }
    local_28 = (**(code **)(param_1 + 0x20b4))(param_1,param_1 + 0x1038,uVar1 + 7);
    (**(code **)(param_1 + 0x20b4))(param_1,&local_28,1);
    *(undefined *)(param_1 + uVar1 + 0x103f) = local_28;
    *(uint *)(param_1 + 0x1034) = uVar1 + 8;
  }
  (**(code **)(param_1 + 0x20c4))(param_1,1);
  return CONCAT71(uStack_27,local_28);
}



//==== FUNC sub_0800c718 @ 0800c718 ====

undefined8 sub_0800c718(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  (**(code **)(param_1 + 0x20bc))(param_1,&uStack_10,&uStack_c,1);
  return CONCAT44(uStack_c,uStack_10);
}



//==== FUNC sub_0800c72a @ 0800c72a ====

undefined8 sub_0800c72a(int param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 unaff_r7;
  
  cVar1 = *param_2;
  if (cVar1 == '\x03') {
    FUN_0800573e();
  }
  else if (cVar1 == '\x05') {
    FUN_0800585c();
  }
  else if (cVar1 == '\a') {
    FUN_08005970();
  }
  else if (cVar1 == '\b') {
    FUN_08005c48();
  }
  else if (cVar1 == '\x0f') {
    FUN_08005eb2();
  }
  else if (cVar1 == '\x14') {
    FUN_08005f5e();
  }
  else if (cVar1 == '\x17') {
    FUN_0800f122();
  }
  else if (cVar1 == '\x18') {
    FUN_08005f98();
  }
  else if (cVar1 == '\x19') {
    FUN_0800630c();
  }
  else {
    if (cVar1 == '\x11') {
      puVar2 = &DAT_0800c858;
    }
    else {
      puVar2 = &DAT_0800c85c;
    }
    (**(code **)(param_1 + 0x20b8))(param_1,puVar2,3);
  }
  return CONCAT44(unaff_r7,1);
}



//==== FUNC sub_0800c7a2 @ 0800c7a2 ====

undefined8 sub_0800c7a2(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_3;
  local_c = param_4;
  if (*param_2 == '\x01') {
    (**(code **)(param_1 + 0x20b4))(param_1,param_1 + 0x1038,*(undefined4 *)(param_1 + 0x1034));
  }
  else if (*param_2 == '\x02') {
    local_10 = CONCAT13((char)*(undefined2 *)(param_1 + 0x1e),
                        CONCAT12((char)((ushort)*(undefined2 *)(param_1 + 0x1e) >> 8),
                                 (short)*DAT_0800cae0));
    local_c = CONCAT22((short)((uint)DAT_0800cae0[1] >> 0x10),0xc10);
    (**(code **)(param_1 + 0x20b8))(param_1,&local_10,6);
  }
  else {
    (**(code **)(param_1 + 0x20b8))(param_1,&DAT_0800ca90,3);
  }
  return CONCAT44(local_10,1);
}



//==== FUNC sub_0800c810 @ 0800c810 ====

undefined8 sub_0800c810(int param_1,byte *param_2)

{
  byte bVar1;
  undefined4 unaff_r7;
  
  bVar1 = *param_2;
  if (bVar1 == 2) {
    FUN_0800cde2();
    goto LAB_0800c840;
  }
  if (1 < bVar1) {
    if (bVar1 == 4) {
      FUN_0800d17e();
      goto LAB_0800c840;
    }
    if (bVar1 < 4) {
      FUN_0800cfe4();
      goto LAB_0800c840;
    }
  }
  (**(code **)(param_1 + 0x20b8))(param_1,&DAT_0800ca94,3);
LAB_0800c840:
  return CONCAT44(unaff_r7,1);
}



//==== FUNC FUN_0800c844 @ 0800c844 ====

undefined8 FUN_0800c844(int param_1)

{
  undefined4 unaff_r7;
  
  (**(code **)(param_1 + 0x20b8))(param_1,&DAT_0800ca98,2);
  return CONCAT44(unaff_r7,1);
}



//==== FUNC FUN_0800c860 @ 0800c860 ====

void FUN_0800c860(void)

{
  FUN_0800d260();
  return;
}



//==== FUNC FUN_0800c868 @ 0800c868 ====

void FUN_0800c868(void)

{
  return;
}



//==== FUNC sub_0800c86a @ 0800c86a ====

undefined4 sub_0800c86a(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_28 = *DAT_0800cae4;
  bVar1 = *param_2;
  if (bVar1 == 1) {
    FUN_08000348(&local_28,&DAT_0800caa4,2);
    local_28._0_3_ = CONCAT12(3,(ushort)local_28);
    (**(code **)(param_1 + 0x20b8))(param_1,&local_28,3);
  }
  else {
    if (bVar1 == 0) {
LAB_0800ca7c:
      (**(code **)(param_1 + 0x20b8))(param_1,&DAT_0800cab0,3);
      return 0;
    }
    if (bVar1 == 3) {
      FUN_08000348(&local_28,&DAT_0800caa0,2);
      if (param_2[1] == 1) {
        bVar1 = param_2[2];
        bVar2 = param_2[3];
        uVar7 = FUN_0800c868(*DAT_0800caec);
        if (CONCAT11(bVar1,bVar2) == uVar7) {
          (**(code **)(param_1 + 0x20b8))(param_1,DAT_0800cafc,4);
          *(undefined *)(param_1 + 4) = 1;
        }
        else {
          (**(code **)(param_1 + 0x20b8))(param_1,DAT_0800caf8,4);
        }
      }
      else {
        if (param_2[1] != 2) {
          (**(code **)(param_1 + 0x20b8))(param_1,DAT_0800cb08,4);
          return 0;
        }
        bVar1 = param_2[2];
        bVar2 = param_2[3];
        bVar3 = param_2[4];
        bVar4 = param_2[5];
        uVar7 = FUN_0800c868(*DAT_0800caec);
        if (((uint)bVar4 | (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar3 << 8) == uVar7) {
          (**(code **)(param_1 + 0x20b8))(param_1,DAT_0800cb04,4);
          *(undefined *)(param_1 + 4) = 1;
        }
        else {
          (**(code **)(param_1 + 0x20b8))(param_1,DAT_0800cb00,4);
        }
      }
    }
    else if (bVar1 < 3) {
      FUN_08000348(&local_28,&DAT_0800ca9c,2);
      bVar1 = param_2[1];
      if (bVar1 == 0) {
        (**(code **)(param_1 + 0x20b8))(param_1,&DAT_0800ca9c,3);
        *(undefined *)(param_1 + 4) = 1;
      }
      else if (bVar1 == 2) {
        local_24 = *DAT_0800caf0;
        local_20 = DAT_0800caf0[1];
        uVar7 = FUN_0800c860();
        uVar5 = local_20;
        *DAT_0800caec = uVar7;
        local_24 = CONCAT13((char)(*DAT_0800caec >> 0x18),(undefined3)local_24);
        (**(code **)(param_1 + 0x20b8))(param_1,&local_24,7);
      }
      else {
        if (1 < bVar1) {
          (**(code **)(param_1 + 0x20b8))(param_1,DAT_0800caf4,4);
          return 0;
        }
        local_1c = *DAT_0800cae8;
        local_18 = DAT_0800cae8[1];
        uVar6 = FUN_0800c860();
        *DAT_0800caec = (uint)uVar6;
        local_1c = CONCAT13((char)(*DAT_0800caec >> 8),(undefined3)local_1c);
        local_18 = CONCAT31(local_18._1_3_,(char)*DAT_0800caec);
        (**(code **)(param_1 + 0x20b8))(param_1,&local_1c,5);
      }
    }
    else if (bVar1 == 5) {
      FUN_08000348(&local_28,&DAT_0800caac,2);
      local_28._0_3_ = (uint3)(ushort)local_28;
      (**(code **)(param_1 + 0x20b8))(param_1,&local_28,3);
      (**(code **)(param_1 + 0x20a4))(param_1);
    }
    else {
      if (4 < bVar1) goto LAB_0800ca7c;
      FUN_08000348(&local_28,&DAT_0800caa8,2);
      local_28._0_3_ = (uint3)(ushort)local_28;
      (**(code **)(param_1 + 0x20b8))(param_1,&local_28,3);
      *(undefined *)(param_1 + 4) = 0;
    }
  }
  return 1;
}



//==== FUNC FUN_0800cb0c @ 0800cb0c ====

void FUN_0800cb0c(byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(DAT_0800cb80 + (uint)param_1 * 8);
  FUN_08008f50((int)*(short *)((int)puVar1 + 6));
  FUN_080091e0(*puVar1,0x10,3,*(undefined2 *)(puVar1 + 1));
  return;
}



//==== FUNC FUN_0800cb2c @ 0800cb2c ====

undefined4 FUN_0800cb2c(byte param_1)

{
  undefined4 unaff_r7;
  
  FUN_080092ac(*(undefined4 *)(DAT_0800cb80 + (uint)param_1 * 8),
               *(undefined2 *)(DAT_0800cb80 + (uint)param_1 * 8 + 4),1);
  return unaff_r7;
}



//==== FUNC FUN_0800cb48 @ 0800cb48 ====

undefined4 FUN_0800cb48(byte param_1)

{
  undefined4 unaff_r7;
  
  FUN_080092ac(*(undefined4 *)(DAT_0800cb80 + (uint)param_1 * 8),
               *(undefined2 *)(DAT_0800cb80 + (uint)param_1 * 8 + 4),0);
  return unaff_r7;
}



//==== FUNC FUN_0800cb64 @ 0800cb64 ====

void FUN_0800cb64(byte param_1)

{
  FUN_080092be(*(undefined4 *)(DAT_0800cb80 + (uint)param_1 * 8),
               *(undefined2 *)(DAT_0800cb80 + (uint)param_1 * 8 + 4));
  return;
}



//==== FUNC FUN_0800cb84 @ 0800cb84 ====

undefined4 FUN_0800cb84(void)

{
  undefined4 unaff_r7;
  
  FUN_08008f50(0x603);
  FUN_080091e0(DAT_0800cc70,0x18,3,0x8000);
  return unaff_r7;
}



//==== FUNC FUN_0800cb9e @ 0800cb9e ====

void FUN_0800cb9e(char param_1)

{
  short local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined local_1a;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  if (param_1 == '\0') {
    FUN_0800afb4(DAT_0800cc74);
    FUN_080091e0(DAT_0800cc70,0x10,3,0x8000);
    FUN_080092ac(DAT_0800cc70,0x8000,0);
  }
  else {
    FUN_08008f50(0x706);
    FUN_0800addc(DAT_0800cc74);
    local_28 = (short)(*DAT_0800cc78 / DAT_0800cc7c) + -1;
    local_26 = 0;
    local_24 = 0;
    local_20 = 0xfa;
    local_1c = 0;
    local_1a = 0;
    FUN_0800af1a(DAT_0800cc74,&local_28);
    local_18 = 1;
    local_14 = 0;
    local_12 = 0;
    local_10 = 0;
    local_e = 0;
    local_c = 0;
    FUN_0800b058(DAT_0800cc74,1,&local_18);
    FUN_0800b430(DAT_0800cc74,1,0x7d);
    FUN_0800b398(DAT_0800cc74,1,0x60);
    FUN_0800b45c(DAT_0800cc74,1,0);
    FUN_0800b032(DAT_0800cc74,1);
    FUN_0800afbe(DAT_0800cc74);
    FUN_0800afaa(DAT_0800cc74);
  }
  return;
}



//==== FUNC FUN_0800cc80 @ 0800cc80 ====

bool FUN_0800cc80(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (param_1 != 0) {
    local_18 = param_1;
    local_14 = param_2;
    local_10 = param_3;
    local_c = param_4;
    FUN_08008f50(0x705);
    local_18 = (uint)(ushort)((short)(*DAT_0800cd34 / DAT_0800cd38) - 1);
    local_14 = local_14 & 0xffff0000;
    local_10 = param_1 % 0xffff - 1 & 0xffff;
    local_c = local_c & 0xff000000;
    FUN_0800af1a(DAT_0800cd3c,&local_18);
  }
  return param_1 != 0;
}



//==== FUNC FUN_0800ccdc @ 0800ccdc ====

undefined4 FUN_0800ccdc(char param_1)

{
  undefined4 unaff_r7;
  
  if (param_1 == '\0') {
    FUN_0800afb4(DAT_0800cd3c);
    FUN_0800afe6(DAT_0800cd3c,1);
  }
  else {
    FUN_0800b022(DAT_0800cd3c,1);
    FUN_0800afc8(DAT_0800cd3c,0);
    FUN_0800afaa(DAT_0800cd3c);
    FUN_0800afd8(DAT_0800cd3c,1);
  }
  return unaff_r7;
}



//==== FUNC FUN_0800cd14 @ 0800cd14 ====

undefined8 FUN_0800cd14(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0800aff6(DAT_0800cd3c,1);
  if (iVar1 != 0) {
    FUN_0800b012(DAT_0800cd3c,1);
  }
  return CONCAT44(unaff_r7,(uint)(iVar1 != 0));
}



//==== FUNC FUN_0800cd40 @ 0800cd40 ====

undefined8 FUN_0800cd40(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  if (*DAT_0800d23c != 0) {
    FUN_08006fde(*DAT_0800d23c);
  }
  iVar1 = FUN_08006fc0(0);
  *DAT_0800d23c = iVar1;
  iVar1 = *DAT_0800d23c;
  if (iVar1 == 0) {
    FUN_08006fde(*DAT_0800d23c);
  }
  return CONCAT44(unaff_r7,(uint)(iVar1 != 0));
}



//==== FUNC FUN_0800cd7e @ 0800cd7e ====

undefined4 FUN_0800cd7e(void)

{
  undefined4 unaff_r7;
  
  FUN_08006fde(*DAT_0800d23c);
  return unaff_r7;
}



//==== FUNC FUN_0800cd8c @ 0800cd8c ====

undefined4 FUN_0800cd8c(void)

{
  int iVar1;
  undefined auStack_28 [16];
  undefined auStack_18 [24];
  
  FUN_080067d8(auStack_28,0x10);
  FUN_08000368(auStack_18,DAT_0800d240,0x10);
  iVar1 = FUN_0800676c(auStack_28,0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_08006ffc(*DAT_0800d23c,auStack_18,0x10);
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_08006ffc(*DAT_0800d23c,auStack_28,0x10);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



//==== FUNC FUN_0800cde2 @ 0800cde2 ====

undefined8 FUN_0800cde2(undefined *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 uStack_20;
  undefined local_1e;
  undefined uStack_1d;
  short local_1c;
  short local_1a [3];
  
  FUN_08000348(&uStack_20,DAT_0800d244,3);
  *DAT_0800d248 = 1;
  iVar2 = FUN_080063a4(0,local_1a);
  if (iVar2 == 0) {
    local_1e = 0x15;
    (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
  }
  else if (local_1a[0] == 0xd) {
    iVar2 = FUN_080063a4(5,&local_1c);
    if (iVar2 == 0) {
      local_1e = 0x15;
      (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
    }
    else if (local_1c == 1) {
      local_1e = 0;
      (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
      *param_1 = 1;
    }
    else {
      *param_1 = 0;
      uVar1 = CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2));
      if (uVar1 < 0x21) {
        param_2 = param_2 + 3;
        uVar3 = FUN_08006ac6(DAT_0800d24c);
        if ((uVar1 == uVar3) && (iVar2 = FUN_08006aa8(param_2,DAT_0800d24c,uVar1), iVar2 != 0)) {
          *(ushort *)(param_1 + 0x2048) = uVar1;
          FUN_08000348(param_1 + 0x204a,param_2,uVar1);
          param_1[uVar1 + 0x204a] = 0;
          pbVar4 = (byte *)(param_2 + (uint)uVar1);
          *(uint *)(param_1 + 0x206a) =
               (uint)pbVar4[1] << 0x10 | (uint)*pbVar4 << 0x18 | (uint)pbVar4[2] << 8 |
               (uint)pbVar4[3];
          if (*(uint *)(param_1 + 0x206a) < 0x53001) {
            FUN_08006b94(2);
            FUN_0800d340();
            iVar2 = FUN_0800d350(DAT_0800d250,*(undefined4 *)(param_1 + 0x206a));
            if (iVar2 == 0) {
              iVar2 = FUN_0800cd40();
              if (iVar2 == 0) {
                local_1e = 0x19;
                (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
              }
              else {
                iVar2 = FUN_0800cd8c();
                if (iVar2 == 0) {
                  local_1e = 0x12;
                  (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
                }
                else {
                  *(undefined4 *)(param_1 + 0x206e) = DAT_0800d250;
                  *(undefined4 *)(param_1 + 0x2098) = 0;
                  local_1e = 0;
                  (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
                }
              }
            }
            else {
              local_1e = 0xd;
              (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
            }
          }
          else {
            local_1e = 4;
            (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
          }
        }
        else {
          local_1e = 0x16;
          (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
        }
      }
      else {
        local_1e = 8;
        (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
      }
    }
  }
  else {
    local_1e = 0x18;
    (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
  }
  return CONCAT26(local_1a[0],CONCAT24(local_1c,CONCAT13(uStack_1d,CONCAT12(local_1e,uStack_20))));
}



//==== FUNC FUN_0800cfe4 @ 0800cfe4 ====

void FUN_0800cfe4(char *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined auStack_13ac [2];
  undefined local_13aa;
  undefined local_13a9;
  undefined local_13a8;
  undefined local_13a7;
  undefined local_13a6;
  int local_13a4;
  undefined auStack_13a0 [5004];
  
  FUN_080067d8(auStack_13a0,5000);
  local_13a4 = 0;
  FUN_08000348(auStack_13ac,DAT_0800d254,7);
  bVar1 = *(byte *)(param_2 + 1);
  bVar2 = *(byte *)(param_2 + 2);
  bVar3 = *(byte *)(param_2 + 3);
  bVar4 = *(byte *)(param_2 + 4);
  if (*param_1 == '\0') {
    if (*DAT_0800d248 == '\0') {
      iVar6 = FUN_08007ab6(*DAT_0800d23c,param_2 + 7,
                           CONCAT11(*(undefined *)(param_2 + 5),*(undefined *)(param_2 + 6)),
                           auStack_13a0,&local_13a4);
      if (iVar6 == 0) {
        uVar5 = ((uint)bVar4 | (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar3 << 8) -
                0x1000;
        if (uVar5 < *(uint *)(param_1 + 0x206a)) {
          iVar6 = FUN_0800d3c4(uVar5 + *(int *)(param_1 + 0x206e),auStack_13a0,local_13a4);
          if (iVar6 == 0) {
            *(int *)(param_1 + 0x2098) = local_13a4 + *(int *)(param_1 + 0x2098);
            local_13aa = 0;
            (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,3);
          }
          else {
            local_13aa = 0xe;
            (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,3);
          }
        }
        else {
          local_13aa = 0xb;
          (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,3);
        }
      }
      else {
        local_13aa = 0x13;
        local_13a9 = (undefined)((uint)iVar6 >> 0x18);
        local_13a8 = (undefined)((uint)iVar6 >> 0x10);
        local_13a7 = (undefined)((uint)iVar6 >> 8);
        local_13a6 = (undefined)iVar6;
        (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,7);
      }
    }
    else {
      iVar6 = FUN_080075dc(*DAT_0800d23c,param_2 + 7,0x1000);
      if (iVar6 == 0) {
        *DAT_0800d248 = '\0';
        local_13aa = 0;
        (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,3);
      }
      else {
        local_13aa = 0xb;
        local_13a9 = (undefined)((uint)iVar6 >> 0x18);
        local_13a8 = (undefined)((uint)iVar6 >> 0x10);
        local_13a7 = (undefined)((uint)iVar6 >> 8);
        local_13a6 = (undefined)iVar6;
        (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,7);
      }
    }
  }
  else {
    for (uVar5 = 0; uVar5 < DAT_0800d258; uVar5 = uVar5 + 1) {
    }
    local_13aa = 0;
    (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,7);
  }
  return;
}



//==== FUNC FUN_0800d17e @ 0800d17e ====

undefined8 FUN_0800d17e(char *param_1)

{
  int iVar1;
  undefined2 uStack_18;
  undefined local_16;
  undefined local_15;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined uStack_11;
  
  FUN_08000348(&uStack_18,DAT_0800d25c,7);
  if (*param_1 == '\0') {
    iVar1 = FUN_08007bb2(*DAT_0800d23c);
    if (iVar1 == 0) {
      iVar1 = FUN_0800695a();
      if (iVar1 == 0) {
        local_16 = 0x17;
        (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,3);
        FUN_08006b94(5);
      }
      else {
        FUN_08006fde(*DAT_0800d23c);
        local_16 = 0;
        (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,3);
        FUN_08006b94(0);
      }
    }
    else {
      local_16 = 0x20;
      local_15 = (undefined)((uint)iVar1 >> 0x18);
      local_14 = (undefined)((uint)iVar1 >> 0x10);
      local_13 = (undefined)((uint)iVar1 >> 8);
      local_12 = (undefined)iVar1;
      (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,7);
      FUN_08006b94(3);
    }
  }
  else {
    local_16 = 0;
    (**(code **)(param_1 + 0x20b8))(param_1,&uStack_18,7);
  }
  return CONCAT17(uStack_11,
                  CONCAT16(local_12,CONCAT15(local_13,CONCAT14(local_14,CONCAT13(local_15,CONCAT12(
                                                  local_16,uStack_18))))));
}



//==== FUNC FUN_0800d260 @ 0800d260 ====

ulonglong FUN_0800d260(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 in_r3;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  
  iVar2 = DAT_0800d334;
  pcVar4 = (char *)FUN_080056b8(DAT_0800d334);
  piVar5 = (int *)FUN_080056b8(iVar2 + 4);
  piVar6 = (int *)FUN_080056b8(iVar2 + 8);
  piVar7 = (int *)FUN_080056b8(iVar2 + 0xc);
  iVar3 = DAT_0800d33c;
  iVar2 = DAT_0800d338;
  if (*pcVar4 == '\0') {
    iVar8 = DAT_0800d33c * *piVar5 + DAT_0800d338;
    *piVar5 = iVar8;
    iVar11 = 8;
    iVar8 = iVar3 * iVar8 + iVar2;
    *piVar5 = iVar8;
    iVar8 = iVar3 * iVar8 + iVar2;
    *piVar5 = iVar8;
    iVar8 = iVar3 * iVar8 + iVar2;
    *piVar5 = iVar8;
    iVar8 = iVar3 * iVar8 + iVar2;
    *piVar5 = iVar8;
    iVar8 = iVar3 * iVar8 + iVar2;
    *piVar5 = iVar8;
    iVar8 = iVar3 * iVar8 + iVar2;
    *piVar5 = iVar8;
    *piVar5 = iVar3 * iVar8 + iVar2;
    piVar9 = piVar7;
    do {
      iVar8 = iVar3 * *piVar5 + iVar2;
      *piVar5 = iVar8;
      *piVar9 = iVar8;
      iVar11 = iVar11 + -1;
      iVar8 = iVar3 * *piVar5 + iVar2;
      *piVar5 = iVar8;
      piVar9[1] = iVar8;
      iVar8 = iVar3 * *piVar5 + iVar2;
      *piVar5 = iVar8;
      piVar10 = piVar9 + 3;
      piVar9[2] = iVar8;
      iVar8 = iVar3 * *piVar5 + iVar2;
      *piVar5 = iVar8;
      piVar9 = piVar9 + 4;
      *piVar10 = iVar8;
    } while (iVar11 != 0);
    *piVar6 = piVar7[0x1f];
    *pcVar4 = '\x01';
  }
  *piVar5 = iVar3 * *piVar5 + iVar2;
  bVar1 = *(byte *)piVar6;
  *piVar6 = piVar7[bVar1 & 0x1f];
  piVar7[bVar1 & 0x1f] = *piVar5;
  return CONCAT44(in_r3,*piVar6) & 0xffffffff3fffffff;
}



//==== FUNC FUN_0800d340 @ 0800d340 ====

undefined4 FUN_0800d340(void)

{
  undefined4 unaff_r7;
  
  FUN_08008878();
  FUN_08008d00(0x1307);
  return unaff_r7;
}



//==== FUNC FUN_0800d350 @ 0800d350 ====

undefined8 FUN_0800d350(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0x800;
  if (param_1 < DAT_0800d3c0) {
    uVar4 = param_2 >> 0xb;
    if ((param_2 & 0xfff) != 0) {
      uVar4 = uVar4 + 1;
    }
  }
  else {
    uVar4 = param_2 >> 0xc;
    if ((param_2 & 0xfff) != 0) {
      uVar4 = uVar4 + 1;
    }
    iVar5 = 0x1000;
  }
  FUN_08008878();
  FUN_08008d00(0x307);
  FUN_08008d00(0x1307);
  uVar3 = 0;
  do {
    if (uVar4 <= uVar3) {
      FUN_080088c4();
      uVar2 = 0;
LAB_0800d3be:
      return CONCAT44(param_4,uVar2);
    }
    iVar1 = FUN_080088f4(uVar3 * iVar5 + param_1);
    if (iVar1 != 0) {
      FUN_080088c4();
      uVar2 = 1;
      goto LAB_0800d3be;
    }
    FUN_08008d00(0x307);
    FUN_08008d00(0x1307);
    uVar3 = uVar3 + 1;
  } while( true );
}



//==== FUNC FUN_0800d3c4 @ 0800d3c4 ====

undefined8 FUN_0800d3c4(uint param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_3 & 3) == 0) {
    FUN_08008878();
    for (uVar3 = param_1; uVar3 < param_3 + param_1; uVar3 = uVar3 + 4) {
      iVar2 = FUN_08008a0a(uVar3,(uint)*param_2 |
                                 (uint)param_2[2] << 0x10 | (uint)param_2[3] << 0x18 |
                                 (uint)param_2[1] << 8);
      if (iVar2 != 0) {
        FUN_080088c4();
        uVar1 = 1;
        goto LAB_0800d414;
      }
      param_2 = param_2 + 4;
    }
    FUN_080088c4();
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
LAB_0800d414:
  return CONCAT44(param_4,uVar1);
}



//==== FUNC FUN_0800e258 @ 0800e258 ====

undefined4 FUN_0800e258(void)

{
  undefined4 unaff_r7;
  
  *DAT_0800e3a8 = *DAT_0800e3a8 | 1;
  *DAT_0800e3ac = 0;
  *DAT_0800e3b0 = 0;
  *DAT_0800e3a8 = *DAT_0800e3a8 & DAT_0800e3b4;
  *DAT_0800e3a8 = *DAT_0800e3a8 & 0xfffbffff;
  *DAT_0800e3b8 = 0xff0000;
  FUN_0800e298();
  return unaff_r7;
}



//==== FUNC FUN_0800e298 @ 0800e298 ====

undefined4 FUN_0800e298(void)

{
  undefined4 unaff_r7;
  
  FUN_0800e2a0();
  return unaff_r7;
}



//==== FUNC FUN_0800e2a0 @ 0800e2a0 ====

void FUN_0800e2a0(void)

{
  int iVar1;
  
  iVar1 = 0;
  *DAT_0800e3a8 = *DAT_0800e3a8 | 0x10000;
  do {
    iVar1 = iVar1 + 1;
    if ((*DAT_0800e3a8 & 0x20000) != 0) break;
  } while (iVar1 != 0x800);
  if (-1 < (int)(*DAT_0800e3a8 << 0xe)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *DAT_0800e3bc = *DAT_0800e3bc | 0x10000000;
  *DAT_0800e3c0 = *DAT_0800e3c0 | 0xc000;
  *DAT_0800e3ac = *DAT_0800e3ac;
  *DAT_0800e3ac = *DAT_0800e3ac;
  *DAT_0800e3ac = *DAT_0800e3ac | 0x400;
  *DAT_0800e3ac = *DAT_0800e3ac & DAT_0800e3c4;
  *DAT_0800e3ac = *DAT_0800e3ac | DAT_0800e3c8;
  *DAT_0800e3b0 = *DAT_0800e3b0 & DAT_0800e3cc;
  *DAT_0800e3b0 = *DAT_0800e3b0 | 0x10649;
  *DAT_0800e3a8 = *DAT_0800e3a8 | 0x4000000;
  do {
  } while (-1 < (int)(*DAT_0800e3a8 << 4));
  *DAT_0800e3a8 = *DAT_0800e3a8 | 0x1000000;
  do {
  } while (-1 < (int)(*DAT_0800e3a8 << 6));
  *DAT_0800e3c0 = *DAT_0800e3c0 | 0x10000;
  do {
  } while (-1 < *DAT_0800e3d0 << 0xf);
  *DAT_0800e3c0 = *DAT_0800e3c0 | 0x20000;
  do {
  } while (-1 < *DAT_0800e3d0 << 0xe);
  *DAT_0800e3ac = *DAT_0800e3ac & 0xfffffffc;
  *DAT_0800e3ac = *DAT_0800e3ac | 2;
  do {
  } while (-1 < (int)(*DAT_0800e3ac << 0x1c));
  return;
}



//==== FUNC sub_0800e3d4 @ 0800e3d4 ====

uint sub_0800e3d4(void)

{
  int iVar1;
  uint unaff_r7;
  
  iVar1 = FUN_08006ede(&stack0xfffffff8);
  if (iVar1 != 0) {
    (**DAT_0800e490)(DAT_0800e48c,unaff_r7 & 0xff,2);
  }
  return unaff_r7;
}



//==== FUNC sub_0800e3f0 @ 0800e3f0 ====

undefined4 sub_0800e3f0(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0800cd14();
  if (iVar1 != 0) {
    (**DAT_0800e494)(DAT_0800e48c);
  }
  return unaff_r7;
}



//==== FUNC FUN_0800e404 @ 0800e404 ====

undefined4 FUN_0800e404(void)

{
  bool bVar1;
  undefined4 unaff_r7;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  FUN_080096d6(0x8000000,0);
  FUN_0800962c(0x600);
  FUN_08009636(0x26,0,1);
  FUN_08009636(0x37,1,5);
  (**DAT_0800e498)(DAT_0800e48c,0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  (**DAT_0800e49c)(DAT_0800e48c);
  return unaff_r7;
}



//==== FUNC sub_0800e44c @ 0800e44c ====

undefined4 sub_0800e44c(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080004c0(0x2000);
  if (iVar1 != 0) {
    iVar1 = FUN_08006f22();
    if (iVar1 == 0) {
      FUN_0800cb2c(2);
    }
    else {
      FUN_0800cb48(2);
    }
    FUN_080004dc(0x2000);
  }
  return unaff_r7;
}



//==== FUNC FUN_0800e47a @ 0800e47a ====

void FUN_0800e47a(void)

{
  FUN_0800e404();
  do {
    (**DAT_0800e4a0)(DAT_0800e48c);
  } while( true );
}



//==== FUNC thunk_FUN_0800e7d2 @ 0800e79c ====

void thunk_FUN_0800e7d2(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r9;
  
  while( true ) {
    puVar1 = param_1 + 1;
    uVar5 = *param_1;
    if (uVar5 == 0) break;
    param_1 = param_1 + 2;
    puVar2 = (undefined4 *)*puVar1;
    if ((int)puVar2 << 0x1f < 0) {
      puVar2 = (undefined4 *)(unaff_r9 + -1 + (int)puVar2);
    }
    do {
      uVar4 = uVar5;
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
      *puVar3 = 0;
      uVar5 = uVar4 - 4;
    } while (3 < uVar4 - 4);
    if ((int)(uVar4 << 0x1e) < 0) {
      *(undefined2 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar3 + 6);
    }
    if ((int)(uVar4 * -0x80000000) < 0) {
      *(undefined *)puVar2 = 0;
    }
  }
  return;
}



//==== FUNC FUN_0800e7d2 @ 0800e7d2 ====

void FUN_0800e7d2(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r9;
  
  while( true ) {
    puVar1 = param_1 + 1;
    uVar5 = *param_1;
    if (uVar5 == 0) break;
    param_1 = param_1 + 2;
    puVar2 = (undefined4 *)*puVar1;
    if ((int)puVar2 << 0x1f < 0) {
      puVar2 = (undefined4 *)(unaff_r9 + -1 + (int)puVar2);
    }
    do {
      uVar4 = uVar5;
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
      *puVar3 = 0;
      uVar5 = uVar4 - 4;
    } while (3 < uVar4 - 4);
    if ((int)(uVar4 << 0x1e) < 0) {
      *(undefined2 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar3 + 6);
    }
    if ((int)(uVar4 * -0x80000000) < 0) {
      *(undefined *)puVar2 = 0;
    }
  }
  return;
}



//==== FUNC FUN_0800e954 @ 0800e954 ====

undefined4 FUN_0800e954(void)

{
  int *piVar1;
  undefined4 unaff_r7;
  
  piVar1 = (int *)FUN_0800e984();
  if (*piVar1 != -1) {
    software_bkpt(0xab);
    *piVar1 = 0;
  }
  if (piVar1[1] != -1) {
    software_bkpt(0xab);
    piVar1[1] = 0;
  }
  return unaff_r7;
}



//==== FUNC FUN_0800e984 @ 0800e984 ====

undefined4 FUN_0800e984(void)

{
  return DAT_0800e988;
}



//==== FUNC FUN_0800e98c @ 0800e98c ====

void FUN_0800e98c(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_0800e9b0 + DAT_0800e9b0);
  for (piVar1 = (int *)((int)&DAT_0800e9ac + DAT_0800e9ac); piVar1 != piVar2;
      piVar1 = (int *)(*(code *)((int)piVar1 + *piVar1))(piVar1 + 1)) {
  }
  return;
}



//==== FUNC FUN_0800e9b4 @ 0800e9b4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0800e9b4(void)

{
  _DAT_e000ed88 = _DAT_e000ed88 | 0xf00000;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return 0x2000000;
}



//==== FUNC FUN_0800ea38 @ 0800ea38 ====

void FUN_0800ea38(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_080004f8();
  if (iVar1 != 0) {
    FUN_0800e98c();
  }
  FUN_0800e47a(0);
  uVar2 = thunk_FUN_0800ea58();
  do {
    FUN_0800ea64(uVar2);
  } while( true );
}



//==== FUNC thunk_FUN_0800ea58 @ 0800ea52 ====

void thunk_FUN_0800ea58(undefined4 param_1)

{
  do {
    FUN_0800ea64(param_1);
  } while( true );
}



//==== FUNC FUN_0800ea58 @ 0800ea58 ====

void FUN_0800ea58(undefined4 param_1)

{
  do {
    FUN_0800ea64(param_1);
  } while( true );
}



//==== FUNC FUN_0800ea64 @ 0800ea64 ====

void FUN_0800ea64(void)

{
  FUN_0800e954();
  do {
    software_bkpt(0xab);
  } while( true );
}



//==== FUNC sub_0800eb3c @ 0800eb3c ====

void sub_0800eb3c(void)

{
  (*DAT_0800eb44)();
                    /* WARNING: Could not recover jumptable at 0x0800eb42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0800eb48)();
  return;
}



//==== FUNC sub_0800ec4c @ 0800ec4c ====

void sub_0800ec4c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec50 @ 0800ec50 ====

void sub_0800ec50(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec54 @ 0800ec54 ====

void sub_0800ec54(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec58 @ 0800ec58 ====

void sub_0800ec58(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec5c @ 0800ec5c ====

void sub_0800ec5c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec60 @ 0800ec60 ====

void sub_0800ec60(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec64 @ 0800ec64 ====

void sub_0800ec64(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec68 @ 0800ec68 ====

void sub_0800ec68(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec6c @ 0800ec6c ====

void sub_0800ec6c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec70 @ 0800ec70 ====

void sub_0800ec70(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec74 @ 0800ec74 ====

void sub_0800ec74(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec78 @ 0800ec78 ====

void sub_0800ec78(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec7c @ 0800ec7c ====

void sub_0800ec7c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec80 @ 0800ec80 ====

void sub_0800ec80(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec84 @ 0800ec84 ====

void sub_0800ec84(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec88 @ 0800ec88 ====

void sub_0800ec88(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec8c @ 0800ec8c ====

void sub_0800ec8c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec90 @ 0800ec90 ====

void sub_0800ec90(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec94 @ 0800ec94 ====

void sub_0800ec94(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec98 @ 0800ec98 ====

void sub_0800ec98(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ec9c @ 0800ec9c ====

void sub_0800ec9c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800eca0 @ 0800eca0 ====

void sub_0800eca0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800eca4 @ 0800eca4 ====

void sub_0800eca4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800eca8 @ 0800eca8 ====

void sub_0800eca8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecac @ 0800ecac ====

void sub_0800ecac(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecb0 @ 0800ecb0 ====

void sub_0800ecb0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecb4 @ 0800ecb4 ====

void sub_0800ecb4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecb8 @ 0800ecb8 ====

void sub_0800ecb8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecbc @ 0800ecbc ====

void sub_0800ecbc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecc0 @ 0800ecc0 ====

void sub_0800ecc0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecc4 @ 0800ecc4 ====

void sub_0800ecc4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecc8 @ 0800ecc8 ====

void sub_0800ecc8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800eccc @ 0800eccc ====

void sub_0800eccc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecd0 @ 0800ecd0 ====

void sub_0800ecd0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecd4 @ 0800ecd4 ====

void sub_0800ecd4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecd8 @ 0800ecd8 ====

void sub_0800ecd8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecdc @ 0800ecdc ====

void sub_0800ecdc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ece0 @ 0800ece0 ====

void sub_0800ece0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ece4 @ 0800ece4 ====

void sub_0800ece4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ece8 @ 0800ece8 ====

void sub_0800ece8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecec @ 0800ecec ====

void sub_0800ecec(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecf0 @ 0800ecf0 ====

void sub_0800ecf0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecf4 @ 0800ecf4 ====

void sub_0800ecf4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecf8 @ 0800ecf8 ====

void sub_0800ecf8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ecfc @ 0800ecfc ====

void sub_0800ecfc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed00 @ 0800ed00 ====

void sub_0800ed00(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed04 @ 0800ed04 ====

void sub_0800ed04(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed08 @ 0800ed08 ====

void sub_0800ed08(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed0c @ 0800ed0c ====

void sub_0800ed0c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed10 @ 0800ed10 ====

void sub_0800ed10(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed14 @ 0800ed14 ====

void sub_0800ed14(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed18 @ 0800ed18 ====

void sub_0800ed18(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed1c @ 0800ed1c ====

void sub_0800ed1c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed20 @ 0800ed20 ====

void sub_0800ed20(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed24 @ 0800ed24 ====

void sub_0800ed24(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed28 @ 0800ed28 ====

void sub_0800ed28(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed2c @ 0800ed2c ====

void sub_0800ed2c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed30 @ 0800ed30 ====

void sub_0800ed30(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed34 @ 0800ed34 ====

void sub_0800ed34(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed38 @ 0800ed38 ====

void sub_0800ed38(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed3c @ 0800ed3c ====

void sub_0800ed3c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed40 @ 0800ed40 ====

void sub_0800ed40(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed44 @ 0800ed44 ====

void sub_0800ed44(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed48 @ 0800ed48 ====

void sub_0800ed48(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed4c @ 0800ed4c ====

void sub_0800ed4c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed50 @ 0800ed50 ====

void sub_0800ed50(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed54 @ 0800ed54 ====

void sub_0800ed54(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed58 @ 0800ed58 ====

void sub_0800ed58(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed5c @ 0800ed5c ====

void sub_0800ed5c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800ed60 @ 0800ed60 ====

void sub_0800ed60(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC FUN_0800f100 @ 0800f100 ====

undefined4 FUN_0800f100(int param_1,int param_2,uint param_3,uint *param_4)

{
  if (*param_4 < param_3) {
    *(undefined *)(param_2 + 2) = 8;
    (**(code **)(param_1 + 0x20b8))(param_1,param_2,3);
    return 0;
  }
  *param_4 = *param_4 - param_3;
  return 1;
}



//==== FUNC FUN_0800f122 @ 0800f122 ====

void FUN_0800f122(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int local_4c;
  undefined4 local_48;
  undefined auStack_44 [16];
  undefined auStack_34 [28];
  uint local_18;
  
  local_48 = 0x1761;
  local_4c = param_3 + -1;
  iVar1 = FUN_0800f100(param_1,&local_48,2,&local_4c);
  if (iVar1 != 0) {
    uVar2 = (uint)(*(byte *)(param_2 + 1) | *(byte *)(param_2 + 2));
    iVar1 = FUN_0800f100(param_1,&local_48,uVar2,&local_4c);
    if ((iVar1 != 0) && (iVar1 = FUN_0800f100(param_1,&local_48,2,&local_4c), iVar1 != 0)) {
      param_2 = param_2 + 3;
      local_18 = (uint)(*(byte *)(param_2 + uVar2) | *(byte *)(param_2 + uVar2 + 1));
      iVar1 = FUN_0800f100(param_1,&local_48,local_18,&local_4c);
      if (iVar1 != 0) {
        FUN_080067e0(auStack_44,0x2c);
        FUN_08006686(auStack_34);
        iVar1 = FUN_080066ae(auStack_44,0xd);
        if ((iVar1 != 0) &&
           (iVar1 = FUN_0800f1e8(param_2,uVar2,param_2 + uVar2 + 2,local_18,auStack_44,auStack_34),
           iVar1 == 0)) {
          *(undefined *)(param_1 + 8) = 1;
          local_48._0_3_ = (uint3)(ushort)local_48;
          (**(code **)(param_1 + 0x20b8))(param_1,&local_48,3);
          return;
        }
        local_48._0_3_ = CONCAT12(0x17,(ushort)local_48);
        (**(code **)(param_1 + 0x20b8))(param_1,&local_48,3);
      }
    }
  }
  return;
}



//==== FUNC FUN_0800f1e8 @ 0800f1e8 ====

void FUN_0800f1e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int extraout_r1;
  
  iVar1 = FUN_0800f2a2();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x5d) == -0x24)) {
    param_1 = param_1 + 0x5e;
    FUN_0800f224(iVar1,DAT_0800f21c,param_1,param_4,param_5,param_6);
    if (extraout_r1 == 0) {
      FUN_08006f5c(param_1 + 4,param_5,0xc);
    }
  }
  return;
}



//==== FUNC FUN_0800f224 @ 0800f224 ====

void FUN_0800f224(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_3 ^ (uint)param_2 ^ *param_2;
  *param_3 = uVar1;
  uVar1 = (int)param_2 + uVar1;
  uVar2 = param_3[1] ^ uVar1 ^ param_2[1];
  param_3[1] = uVar2;
  uVar1 = uVar1 + uVar2;
  uVar2 = param_3[2] ^ uVar1 ^ param_2[2];
  param_3[2] = uVar2;
  param_3[3] = param_3[3] ^ uVar1 + uVar2 ^ param_2[3];
  FUN_0800f22a(param_1,param_2 + 4);
  FUN_0800f26e();
  return;
}



//==== FUNC FUN_0800f22a @ 0800f22a ====

void FUN_0800f22a(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int unaff_r5;
  uint unaff_r6;
  
  uVar1 = *param_3 ^ unaff_r6 ^ *param_2;
  *param_3 = uVar1;
  uVar1 = unaff_r6 + uVar1;
  uVar2 = param_3[1] ^ uVar1 ^ param_2[1];
  param_3[1] = uVar2;
  uVar1 = uVar1 + uVar2;
  uVar2 = param_3[2] ^ uVar1 ^ param_2[2];
  param_3[2] = uVar2;
  if (unaff_r5 != 0) {
    param_3[3] = param_3[3] ^ uVar1 + uVar2 ^ param_2[3];
    FUN_0800f22a(param_1,param_2 + 4);
  }
  FUN_0800f26e();
  return;
}



//==== FUNC FUN_0800f26e @ 0800f26e ====

void FUN_0800f26e(void)

{
  int unaff_r5;
  
  if (unaff_r5 != 0) {
    FUN_0800f26e();
  }
  return;
}



//==== FUNC FUN_0800f2a2 @ 0800f2a2 ====

int FUN_0800f2a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_270 [92];
  undefined auStack_214 [520];
  
  FUN_08000348(auStack_270,param_1,param_2);
  uVar1 = FUN_080003d8(param_5);
  iVar2 = FUN_08008e78(auStack_270,param_5,uVar1);
  if (iVar2 == 0) {
    uVar1 = FUN_080003d8(param_6);
    iVar2 = FUN_08008e78(auStack_270,param_6,uVar1);
    if (iVar2 == 0) {
      FUN_08000348(auStack_214,DAT_0800f308,0x204);
      iVar2 = FUN_08008e80(auStack_270,param_3,param_4,auStack_214);
      if (iVar2 != 0) {
        iVar2 = 1;
      }
      return -iVar2;
    }
  }
  return -2;
}



