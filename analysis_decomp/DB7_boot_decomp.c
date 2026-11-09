// Ghidra decompilation dump: bootloader.bin
// range: 00400000 .. 0040ffff

//==== FUNC FUN_00400140 @ 00400140 ====

byte FUN_00400140(void)

{
  return *DAT_0040014c ^ 1;
}



//==== FUNC FUN_00400154 @ 00400154 ====

bool FUN_00400154(void)

{
  *DAT_00400184 = 1;
  return *DAT_00400184 != 0;
}



//==== FUNC FUN_00400174 @ 00400174 ====

void FUN_00400174(void)

{
  *DAT_00400188 = 1;
  return;
}



//==== FUNC FUN_0040017c @ 0040017c ====

void FUN_0040017c(void)

{
  *DAT_0040018c = 1;
  return;
}



//==== FUNC FUN_00400190 @ 00400190 ====

undefined4 FUN_00400190(char param_1)

{
  return *(undefined4 *)(DAT_004001a4 + param_1 * 4);
}



//==== FUNC FUN_0040019a @ 0040019a ====

void FUN_0040019a(char param_1,undefined4 param_2)

{
  *(undefined4 *)(DAT_004001a4 + param_1 * 4) = param_2;
  return;
}



//==== FUNC FUN_004001ec @ 004001ec ====

void FUN_004001ec(byte param_1)

{
  *(int *)(DAT_00400ddc + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_00400202 @ 00400202 ====

void FUN_00400202(byte param_1)

{
  *(int *)(DAT_00400e30 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_00400218 @ 00400218 ====

bool FUN_00400218(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  DataMemoryBarrier(0x1f);
  *DAT_00400de0 = 0;
  return iVar2 == 0;
}



//==== FUNC FUN_00400240 @ 00400240 ====

bool FUN_00400240(int param_1)

{
  return param_1 != 0;
}



//==== FUNC FUN_0040024e @ 0040024e ====

void FUN_0040024e(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00400240(param_1);
  if (iVar1 != 0) {
    *DAT_00400de0 = 1;
    DataMemoryBarrier(0x1f);
    enableIRQinterrupts();
  }
  return;
}



//==== FUNC FUN_0040026c @ 0040026c ====

undefined4 FUN_0040026c(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_00400e34 + (uint)param_1) == -1) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = FUN_00400218();
  *(char *)(DAT_00400e34 + (uint)param_1) = *(char *)(DAT_00400e34 + (uint)param_1) + '\x01';
  FUN_0040024e(uVar1);
  return param_4;
}



//==== FUNC FUN_0040029e @ 0040029e ====

undefined4 FUN_0040029e(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_00400e34 + (uint)param_1) == '\0') {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = FUN_00400218();
  *(char *)(DAT_00400e34 + (uint)param_1) = *(char *)(DAT_00400e34 + (uint)param_1) + -1;
  FUN_0040024e(uVar1);
  return param_4;
}



//==== FUNC FUN_004002d0 @ 004002d0 ====

void FUN_004002d0(byte param_1)

{
  if ((byte)(*DAT_00400e38 ^ 1 | param_1) == 0) {
    FUN_0040029e(2);
  }
  if ((param_1 & (*DAT_00400e38 ^ 1)) != 0) {
    FUN_0040026c(2);
  }
  *DAT_00400e38 = param_1;
  return;
}



//==== FUNC FUN_0040030c @ 0040030c ====

undefined4 FUN_0040030c(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_00400140();
  if ((iVar1 == 0) && (-1 < *DAT_00400de4 << 0x1f)) {
    disableIRQinterrupts();
    DataMemoryBarrier(0x1f);
    *DAT_00400de0 = 0;
  }
  else if (*DAT_00400de4 << 0x1d < 0) {
    *DAT_00400de8 = 4;
    if ((uint)(*DAT_00400dec << 0x12) >> 0x1e == 0) {
      FUN_00401a08();
    }
  }
  else if (*DAT_00400de4 << 0x1e < 0) {
    *DAT_00400de8 = 2;
    FUN_00401a08();
  }
  else {
    iVar1 = FUN_004012ec();
    if ((iVar1 == 0) && (iVar1 = FUN_004015ec(), iVar1 == 0)) {
      if (*DAT_00400de4 << 0x1c < 0) {
        *DAT_00400de8 = 8;
        FUN_004013d8();
        FUN_004019c8();
        FUN_00400d60();
        FUN_00400df0();
      }
      else if ((*DAT_00400e3c << 0x1f < 0) && (*DAT_00400de4 << 0x1f < 0)) {
        *DAT_00400e40 = *DAT_00400e40 & 0xffffbfff;
        *DAT_00400e44 = 1;
        *DAT_00400f48 = 0x10;
        *DAT_00400e40 = *DAT_00400e40 | 0x4000;
        FUN_004002d0(0);
      }
      else if ((*DAT_00400e3c << 0x1b < 0) && (*DAT_00400de4 << 0x1b < 0)) {
        *DAT_00400e40 = *DAT_00400e40 & 0xffffbfff;
        do {
          if (*DAT_00400dec << 0x11 < 0) break;
        } while (-1 < *DAT_00400de4 << 0x1f);
        *DAT_00400e44 = 0x10;
        *DAT_00400f48 = 1;
        FUN_004002d0(1);
      }
    }
  }
  return unaff_r7;
}



//==== FUNC FUN_0040043e @ 0040043e ====

void FUN_0040043e(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00400218();
  FUN_004024c6(0x22);
  FUN_004027ba();
  FUN_00402582(0x40000);
  *DAT_00400e40 = 0x2000000;
  *DAT_00400e40 = *DAT_00400e40 | 0x8000;
  *DAT_00400f4c = *DAT_00400f4c & 0xffffefff;
  *DAT_00400f4c = *DAT_00400f4c & 0xfffff3ff;
  *DAT_00400e40 = *DAT_00400e40 & 0xffffbfff;
  do {
  } while (-1 < *DAT_00400dec << 0x11);
  FUN_00401380();
  *DAT_00400e40 = *DAT_00400e40 | 0x4000;
  if (*DAT_00400f50 == '\0') {
    *DAT_00400f50 = '\x01';
    *DAT_00401088 = 0;
    FUN_0040026c(3);
  }
  else {
    FUN_004002d0(0);
  }
  FUN_004004f4();
  FUN_0040024e(uVar1);
  return;
}



//==== FUNC FUN_004004f4 @ 004004f4 ====

void FUN_004004f4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00400218();
  FUN_004002d0(1);
  *DAT_00400e40 = *DAT_00400e40 & 0xffffbfff;
  do {
  } while (-1 < *DAT_00400dec << 0x11);
  *DAT_00400f4c = *DAT_00400f4c & 0xfffffeff;
  *DAT_00400f48 = 8;
  *DAT_00400f48 = 1;
  *DAT_00400f48 = 0x10;
  *DAT_00400f48 = 4;
  *DAT_00400f48 = 2;
  *DAT_00400de8 = 8;
  *DAT_00400de8 = 4;
  *DAT_00400de8 = 2;
  *DAT_0040108c = 1;
  *DAT_00400de8 = 0x10;
  *DAT_00400e40 = *DAT_00400e40 | 0x4000;
  FUN_0040024e(uVar1);
  return;
}



//==== FUNC FUN_00400594 @ 00400594 ====

bool FUN_00400594(void)

{
  return (uint)(*DAT_00400dec << 0x12) >> 0x1e != 0;
}



//==== FUNC FUN_004005ac @ 004005ac ====

void FUN_004005ac(byte param_1)

{
  *DAT_00400f4c = *DAT_00400f4c & 0xffffff7f;
  *DAT_00400f4c = *DAT_00400f4c & 0xffffff80 | param_1 & 0x7f;
  *DAT_00400f4c = *DAT_00400f4c | 0x80;
  return;
}



//==== FUNC FUN_004005e6 @ 004005e6 ====

uint FUN_004005e6(void)

{
  return *DAT_00400f4c & 0x7f;
}



//==== FUNC FUN_004005f2 @ 004005f2 ====

uint FUN_004005f2(void)

{
  return (uint)(*DAT_004012a4 << 0x12) >> 0x15;
}



//==== FUNC FUN_00400600 @ 00400600 ====

uint FUN_00400600(void)

{
  return *DAT_004012a4 & 0x3fff;
}



//==== FUNC FUN_0040060c @ 0040060c ====

void FUN_0040060c(undefined4 param_1,undefined2 param_2)

{
  *(undefined4 *)(DAT_004012e8 + 8) = param_1;
  *(undefined2 *)(DAT_004012e8 + 0xc) = param_2;
  return;
}



//==== FUNC FUN_0040061a @ 0040061a ====

undefined8 FUN_0040061a(byte param_1,byte param_2,ushort param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  code **ppcVar9;
  uint uVar10;
  uint uVar11;
  code *local_30;
  byte local_2c;
  
  bVar7 = param_1 & 0xf;
  if (3 < bVar7) {
    uVar2 = 0;
    goto LAB_004008f6;
  }
  if ((int)((*DAT_00401090 >> (uint)bVar7) << 0x1f) < 0) {
    uVar2 = 0;
    goto LAB_004008f6;
  }
  bVar6 = param_2 & 3;
  if (bVar6 == 1) {
    local_2c = 2;
  }
  else {
    if ((param_2 & 3) == 0) {
LAB_0040067e:
      uVar2 = 0;
      goto LAB_004008f6;
    }
    if (bVar6 == 3) {
      local_2c = 1;
    }
    else {
      if (2 < bVar6) goto LAB_0040067e;
      local_2c = 2;
    }
  }
  if (local_2c == 1) {
    bVar6 = 0;
  }
  else {
    if (local_2c == 0) {
LAB_004006a6:
      uVar2 = 0;
      goto LAB_004008f6;
    }
    if (local_2c == 3) {
      bVar6 = 2;
    }
    else {
      if (2 < local_2c) goto LAB_004006a6;
      bVar6 = 1;
    }
  }
  uVar4 = param_3;
  if (param_3 < 9) {
    uVar4 = 8;
  }
  if (uVar4 < 0x400) {
    if (param_3 < 9) {
      uVar5 = 8;
    }
    else {
      uVar5 = (uint)param_3;
    }
  }
  else {
    uVar5 = 0x400;
  }
  uVar8 = (uint)bVar7;
  *(uint *)(DAT_00401374 + uVar8 * 4) =
       *(uint *)(DAT_00401374 + (uint)bVar7 * 4) & DAT_004012a8 |
       ((uint)(param_1 >> 7) << 8 | (uint)param_2 << 0xb | (0x1c - LZCOUNT(uVar5 * 2 + -1)) * 0x10)
       & 0x197c | (uint)bVar6 << 2;
  uVar5 = 1 << uVar8;
  for (uVar10 = 3; (uint)bVar7 < (uVar10 & 0xff); uVar10 = uVar10 - 1) {
    if ((int)((*DAT_00401090 >> (uVar10 & 0xff)) << 0x1f) < 0) {
      uVar5 = 1 << (uVar10 & 0xff) | uVar5;
      *DAT_00401090 = *DAT_00401090 & ~(1 << (uVar10 & 0xff));
      uVar11 = uVar10 & 0xff;
      uVar10 = uVar10 & 0xff;
      *(uint *)(DAT_00401374 + uVar10 * 4) = *(uint *)(DAT_00401374 + uVar11 * 4) & 0xfffffffd;
    }
  }
  for (; (uVar8 & 0xff) < 4; uVar8 = (uVar8 & 0xff) + 1) {
    if ((uVar5 & 0xffff & 1 << (uVar8 & 0xff)) != 0) {
      iVar3 = DAT_00401378 + (uVar8 & 0xff) * 0x18;
      ppcVar9 = (code **)(iVar3 + -0x18);
      bVar7 = *(byte *)(iVar3 + -4);
      *(byte *)(iVar3 + -4) = *(byte *)(iVar3 + -4) & 0xfe;
      *(uint *)(DAT_00401374 + (uVar8 & 0xff) * 4) =
           *(uint *)(DAT_00401374 + (uVar8 & 0xff) * 4) | 2;
      *DAT_00401090 = *DAT_00401090 | 1 << (uVar8 & 0xff);
      uVar10 = uVar8 & 0xff;
      if (-1 < *(int *)(DAT_0040137c + uVar10 * 4) << 0xd) {
        if (*ppcVar9 == (code *)0x0) {
          uVar2 = 0;
        }
        else {
          if (*(int *)(DAT_00401374 + uVar10 * 4) << 0x17 < 0) {
            uVar10 = uVar10 | 0x80;
          }
          (**ppcVar9)(1,*(undefined4 *)(iVar3 + -0xc),uVar10);
          uVar2 = 0;
        }
        goto LAB_004008f6;
      }
      *(uint *)(DAT_00401374 + (uVar8 & 0xff) * 4) = *(uint *)(DAT_00401374 + uVar10 * 4) | 0x200;
      if ((bVar7 & 1) != 0) {
        *(int *)(iVar3 + -0xc) = *(int *)(iVar3 + -0xc) - *(int *)(iVar3 + -8);
        uVar10 = uVar8 & 0xff;
        if (*(int *)(DAT_00401374 + uVar10 * 4) << 0x17 < 0) {
          uVar10 = uVar10 | 0x80;
        }
        local_30 = *ppcVar9;
        cVar1 = FUN_00400b28(uVar10,((uint)*(byte *)(iVar3 + -4) << 0x1e) >> 0x1f,
                             *(int *)(iVar3 + -0x14) + *(int *)(iVar3 + -0xc),
                             *(int *)(iVar3 + -0x10) - *(int *)(iVar3 + -0xc));
        if (cVar1 == '\0') {
          uVar2 = 0;
          goto LAB_004008f6;
        }
      }
    }
  }
  uVar2 = 1;
LAB_004008f6:
  return CONCAT44(local_30,uVar2);
}



//==== FUNC FUN_004008fa @ 004008fa ====

undefined4 FUN_004008fa(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  bVar1 = param_1 & 0xf;
  if (bVar1 < 4) {
    *DAT_00401090 = *DAT_00401090 & ~(1 << (uint)bVar1);
    *(uint *)(DAT_00401374 + (uint)bVar1 * 4) =
         *(uint *)(DAT_00401374 + (uint)bVar1 * 4) & 0xfffffffd;
    FUN_00401402(param_1);
    *(byte *)(DAT_00401468 + (uint)bVar1 * 0x18 + -4) =
         *(byte *)(DAT_00401468 + (uint)bVar1 * 0x18 + -4) & 0xfb;
  }
  return param_4;
}



//==== FUNC FUN_00400964 @ 00400964 ====

uint FUN_00400964(byte param_1)

{
  return *(uint *)(DAT_0040146c + (uint)(param_1 & 0xf) * 4) >> 0x13 & 1;
}



//==== FUNC FUN_0040097c @ 0040097c ====

undefined8 FUN_0040097c(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  bVar3 = param_1 & 0xf;
  iVar1 = DAT_00401378 + (uint)bVar3 * 0x18;
  if (bVar3 < 4) {
    if ((*(int *)(DAT_0040146c + (uint)bVar3 * 4) << 0xc < 0) ||
       ((int)((uint)*(byte *)(iVar1 + -4) << 0x1d) < 0)) {
      uVar2 = 1;
    }
    else if ((*(byte *)(iVar1 + -4) & 1) == 0) {
      uVar2 = FUN_00400218();
      if (((int)((uint)param_1 << 0x18) < 0) &&
         ((uint)(*(int *)(DAT_0040137c + (uint)bVar3 * 4) << 0x12) >> 0x1e != 0)) {
        *(byte *)(iVar1 + -4) = *(byte *)(iVar1 + -4) | 4;
        *(undefined4 *)(DAT_004015e0 + (uint)bVar3 * 4) = 0x1000;
        *DAT_00400f48 = 0x1000 << (uint)bVar3;
        FUN_0040024e(uVar2);
        uVar2 = 1;
      }
      else {
        *(uint *)(DAT_00401374 + (uint)bVar3 * 4) =
             *(uint *)(DAT_00401374 + (uint)bVar3 * 4) & 0xfffffdff;
        *(undefined4 *)(DAT_00401470 + (uint)bVar3 * 4) = 0x40;
        *(undefined4 *)(DAT_004015e0 + (uint)bVar3 * 4) = 0x80000;
        FUN_0040024e(uVar2);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(param_4,uVar2);
}



//==== FUNC FUN_00400a50 @ 00400a50 ====

undefined8 FUN_00400a50(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  param_1 = param_1 & 0xf;
  iVar1 = DAT_00401378 + (uint)param_1 * 0x18;
  if (param_1 < 4) {
    bVar3 = (int)((uint)*(byte *)(iVar1 + -4) << 0x1d) < 0;
    if (bVar3) {
      *(byte *)(iVar1 + -4) = *(byte *)(iVar1 + -4) & 0xfb;
      *(undefined4 *)(DAT_004015e4 + (uint)param_1 * 4) = 0x1000;
      *DAT_00400e44 = 0x1000 << (uint)param_1;
    }
    if (*(int *)(DAT_0040146c + (uint)param_1 * 4) << 0xc < 0) {
      if (*(int *)(DAT_0040137c + (uint)param_1 * 4) << 0x19 < 0) {
        *(undefined4 *)(DAT_00401470 + (uint)param_1 * 4) = 0x40;
        *(undefined4 *)(DAT_004015e0 + (uint)param_1 * 4) = 0x40000;
      }
      *(undefined4 *)(DAT_004015e4 + (uint)param_1 * 4) = 0x80000;
      *(uint *)(DAT_00401474 + (uint)param_1 * 4) =
           *(uint *)(DAT_00401474 + (uint)param_1 * 4) | 0x200;
      bVar3 = true;
    }
    if ((bVar3) && ((*(byte *)(iVar1 + -4) & 1) != 0)) {
      *(byte *)(iVar1 + -4) = *(byte *)(iVar1 + -4) & 0xfe;
      (**(code **)(iVar1 + -0x18))();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(param_4,uVar2);
}



//==== FUNC FUN_00400b28 @ 00400b28 ====

undefined4 FUN_00400b28(byte param_1,char param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  param_1 = param_1 & 0xf;
  if (param_1 < 4) {
    iVar2 = DAT_00401378 + (uint)param_1 * 0x18;
    if ((((int)((*DAT_00401090 >> (uint)param_1) << 0x1f) < 0) &&
        (-1 < *(int *)(DAT_004017cc + (uint)param_1 * 4) << 0xc)) &&
       (-1 < (int)((uint)*(byte *)(iVar2 + -4) << 0x1d))) {
      uVar1 = FUN_00400218();
      if ((*(byte *)(iVar2 + -4) & 1) == 0) {
        *(byte *)(iVar2 + -4) = *(byte *)(iVar2 + -4) | 1;
        FUN_0040024e(uVar1);
        *(undefined4 *)(iVar2 + -0x14) = param_3;
        *(int *)(iVar2 + -0x10) = param_4;
        *(undefined4 *)(iVar2 + -0xc) = 0;
        *(undefined4 *)(iVar2 + -8) = 0;
        *(undefined4 *)(iVar2 + -0x18) = param_5;
        if ((param_2 == '\0') && (param_4 != 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
        *(byte *)(iVar2 + -4) = *(byte *)(iVar2 + -4) & 0xfd | (byte)(iVar3 << 1);
        FUN_00401478(param_1);
        uVar1 = 1;
      }
      else {
        FUN_0040024e(uVar1);
        uVar1 = 0;
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



//==== FUNC FUN_00400bfc @ 00400bfc ====

undefined4 FUN_00400bfc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xf;
  *DAT_00400e44 = 0x2000000 << (uVar1 - 1 & 0xff);
  *(undefined4 *)(DAT_004015e8 + uVar1 * 0x10 + -8) = 0;
  *DAT_00400e44 = 0x1000 << uVar1;
  if ((int)(param_1 << 0x18) < 0) {
    while ((uint)(*(int *)(DAT_0040137c + uVar1 * 4) << 0x12) >> 0x1e != 0) {
      *(undefined4 *)(DAT_004015e0 + uVar1 * 4) = 0x2000;
      do {
      } while (*(int *)(DAT_004017cc + uVar1 * 4) << 0x12 < 0);
    }
  }
  FUN_00401402(param_1 & 0xff);
  return param_4;
}



//==== FUNC FUN_00400cb6 @ 00400cb6 ====

void FUN_00400cb6(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined local_48 [56];
  
  puVar3 = local_48;
  FUN_0040284c(local_48,DAT_004017d0,0x38);
  *DAT_00401090 = *DAT_00401090 & 0xfffffffe;
  *DAT_00401374 = *DAT_00401374 & DAT_004012a8 | 0x1130;
  *DAT_00401374 = *DAT_00401374 | 2;
  *DAT_00401090 = *DAT_00401090 | 1;
  *DAT_00400f4c = *DAT_00400f4c & 0xfffff3ff | 0x800;
  *DAT_00400f4c = *DAT_00400f4c | 0x8000;
  puVar2 = DAT_004017d4;
  for (bVar1 = 0; bVar1 < 0x35; bVar1 = bVar1 + 1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  *DAT_004017d8 = 0x4000;
  return;
}



//==== FUNC FUN_00400d60 @ 00400d60 ====

void FUN_00400d60(void)

{
  undefined4 uVar1;
  
  *DAT_00400f4c = *DAT_00400f4c & 0xffffff80;
  *DAT_00400f4c = *DAT_00400f4c | 0x80;
  *DAT_00401374 = *DAT_00401374 & DAT_004012a8 | 0x30;
  *DAT_00401374 = *DAT_00401374 | 2;
  *DAT_00401090 = *DAT_00401090 | 1;
  uVar1 = FUN_00400218();
  *DAT_004015e0 = 4;
  *DAT_004015e0 = 2;
  *DAT_00400f48 = 0x1000;
  FUN_0040024e(uVar1);
  return;
}



//==== FUNC FUN_00400df0 @ 00400df0 ====

void FUN_00400df0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00400218();
  *DAT_004015e4 = 1;
  FUN_0040024e(uVar1);
  *DAT_00401470 = 2;
  *(undefined4 *)(DAT_004012e8 + 0x10) = 0;
  *(undefined4 *)(DAT_004012e8 + 0x14) = 0;
  *(undefined2 *)(DAT_004012e8 + 0xc) = 0;
  *DAT_004017dc = 0;
  return;
}



//==== FUNC FUN_00400e48 @ 00400e48 ====

void FUN_00400e48(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (*DAT_004017dc != '\0') {
    FUN_004012d0();
    FUN_00400df0();
  }
  if ((uint)(*DAT_0040137c << 1) >> 0x15 == 8) {
    pbVar4 = DAT_004017d4;
    for (uVar3 = 0; (uVar3 & 0xff) < 8; uVar3 = (uVar3 & 0xff) + 1) {
      DAT_004017e4[uVar3 & 0xff] = *pbVar4;
      pbVar4 = pbVar4 + 1;
    }
    *(undefined2 *)(DAT_004017e4 + 2) = *(undefined2 *)(DAT_004017e4 + 2);
    *(undefined2 *)(DAT_004017e4 + 4) = *(undefined2 *)(DAT_004017e4 + 4);
    *(undefined2 *)(DAT_004017e4 + 6) = *(undefined2 *)(DAT_004017e4 + 6);
    iVar1 = FUN_004021c2();
    if (iVar1 == 0) {
      FUN_0040125e();
      *DAT_004017e0 = 4;
    }
    else {
      *DAT_004017e0 = 4;
      if ((int)((uint)*DAT_004017e4 << 0x18) < 0) {
        *DAT_004017e8 = 0;
        *DAT_004017ec = 0;
        *DAT_004017dc = '\x02';
        FUN_00400f54();
      }
      else if (*(short *)(DAT_004017e4 + 6) == 0) {
        FUN_00401272();
      }
      else {
        *DAT_004017e8 = 0;
        *DAT_004017ec = 0;
        *DAT_004017dc = '\x01';
        *DAT_004017e0 = 0x10;
        uVar2 = FUN_00400218();
        *DAT_004015e0 = 0x10;
        FUN_0040024e(uVar2);
      }
    }
  }
  else {
    FUN_0040125e();
    *DAT_004017e0 = 4;
  }
  return;
}



//==== FUNC FUN_00400f54 @ 00400f54 ====

void FUN_00400f54(void)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  byte bVar5;
  undefined *puVar6;
  
  uVar2 = FUN_00400218();
  *DAT_004015e4 = 1;
  FUN_0040024e(uVar2);
  if (*DAT_004017dc == '\x03') {
    FUN_004012d0();
    FUN_00400df0();
  }
  else {
    uVar1 = *(short *)(DAT_004017e4 + 0xc) - *DAT_004017ec;
    if (uVar1 == 0) {
      *DAT_004017e8 = *DAT_004017ec + *DAT_004017e8;
      if ((*(short *)(DAT_004017e4 + 6) == *DAT_004017e8) || (*DAT_004017f0 != '\0')) {
        FUN_004012ac();
        return;
      }
      if ((*(int *)(DAT_004017e4 + 0x14) != 0) &&
         (iVar3 = (**(code **)(DAT_004017e4 + 0x14))(), iVar3 != 0)) {
        *DAT_004017ec = 0;
        uVar1 = *(ushort *)(DAT_004017e4 + 0xc);
      }
    }
    if (uVar1 < 0x40) {
      *DAT_004017f0 = '\x01';
    }
    else {
      uVar1 = 0x40;
      *DAT_004017f0 = '\0';
    }
    puVar6 = DAT_004017d4;
    puVar4 = (undefined *)(*(int *)(DAT_004017e4 + 8) + (uint)*DAT_004017ec);
    uVar2 = FUN_00400218();
    if (*DAT_0040137c << 0x1e < 0) {
      FUN_0040024e(uVar2);
      *DAT_004017dc = '\x04';
    }
    else {
      for (bVar5 = 0; bVar5 < uVar1; bVar5 = bVar5 + 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      *DAT_004017ec = uVar1 + *DAT_004017ec;
      *DAT_00401470 = 1;
      *DAT_004015e0 = 1;
      FUN_0040024e(uVar2);
    }
  }
  return;
}



//==== FUNC FUN_00401094 @ 00401094 ====

void FUN_00401094(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  if (*DAT_004017dc == '\x01') {
    uVar1 = *DAT_0040137c >> 0x14 & 0x7ff;
    if ((uint)*(ushort *)(DAT_004017e4 + 0xc) < uVar1 + *DAT_004017ec) {
      uVar1 = (uint)*(ushort *)(DAT_004017e4 + 0xc) - (uint)*DAT_004017ec;
    }
    puVar6 = (undefined *)(*(int *)(DAT_004017e4 + 8) + (uint)*DAT_004017ec);
    puVar5 = DAT_004017d4;
    for (bVar4 = 0; (uint)bVar4 < (uVar1 & 0xffff); bVar4 = bVar4 + 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *DAT_004017ec = (short)uVar1 + *DAT_004017ec;
    if (((uVar1 & 0xffff) == 0x40) &&
       ((uint)*DAT_004017ec + (uint)*DAT_004017e8 < (uint)*(ushort *)(DAT_004017e4 + 6))) {
      if (*(ushort *)(DAT_004017e4 + 0xc) == *DAT_004017ec) {
        if (*(int *)(DAT_004017e4 + 0x14) == 0) {
          FUN_0040125e();
          *DAT_00401470 = 2;
          return;
        }
        iVar2 = (**(code **)(DAT_004017e4 + 0x14))();
        if (iVar2 == 0) {
          FUN_0040125e();
          *DAT_00401470 = 2;
          return;
        }
        *DAT_004017e8 = *DAT_004017ec + *DAT_004017e8;
        *DAT_004017ec = 0;
      }
      *DAT_00401470 = 2;
      *DAT_00401470 = 0x10;
      uVar3 = FUN_00400218();
      *DAT_004015e0 = 0x10;
      FUN_0040024e(uVar3);
    }
    else {
      *(ushort *)(DAT_004017e4 + 0xc) = *DAT_004017ec;
      if ((*(int *)(DAT_004017e4 + 0x14) == 0) ||
         (iVar2 = (**(code **)(DAT_004017e4 + 0x14))(), iVar2 != 0)) {
        *DAT_00401470 = 2;
        FUN_00401272();
      }
      else {
        FUN_0040125e();
        *DAT_00401470 = 2;
      }
    }
  }
  else {
    if ((*DAT_004017dc == '\x02') || (*DAT_004017dc == '\x04')) {
      FUN_004012d0();
    }
    else {
      FUN_0040125e();
    }
    FUN_00400df0();
  }
  return;
}



//==== FUNC FUN_00401210 @ 00401210 ====

undefined4 FUN_00401210(void)

{
  undefined4 unaff_r7;
  
  if (-1 < *DAT_0040137c << 0x1e) {
    if (*DAT_004017dc == '\x01') {
      FUN_00401272();
    }
    else if (*DAT_004017dc == '\x04') {
      *DAT_004015e0 = 0x80000;
    }
  }
  return unaff_r7;
}



//==== FUNC FUN_00401240 @ 00401240 ====

void FUN_00401240(void)

{
  if ((-1 < *DAT_0040137c << 0x1f) && (*DAT_004017dc == '\x03')) {
    *DAT_004015e0 = 0x80000;
  }
  return;
}



//==== FUNC FUN_0040125e @ 0040125e ====

void FUN_0040125e(void)

{
  *DAT_004017dc = 5;
  *DAT_004015e0 = 0x80000;
  return;
}



//==== FUNC FUN_00401272 @ 00401272 ====

void FUN_00401272(void)

{
  undefined4 uVar1;
  
  *DAT_004017dc = 3;
  uVar1 = FUN_00400218();
  *DAT_00401470 = 1;
  *DAT_004015e0 = 1;
  *DAT_00401470 = 8;
  *DAT_004015e0 = 8;
  FUN_0040024e(uVar1);
  return;
}



//==== FUNC FUN_004012ac @ 004012ac ====

void FUN_004012ac(void)

{
  undefined4 uVar1;
  
  *DAT_004017dc = 4;
  uVar1 = FUN_00400218();
  *DAT_00401470 = 0x10;
  *DAT_004015e0 = 0x10;
  FUN_0040024e(uVar1);
  return;
}



//==== FUNC FUN_004012d0 @ 004012d0 ====

undefined4 FUN_004012d0(void)

{
  undefined4 unaff_r7;
  
  if (*(int *)(DAT_004017e4 + 0x10) != 0) {
    (**(code **)(DAT_004017e4 + 0x10))();
  }
  return unaff_r7;
}



//==== FUNC FUN_004012ec @ 004012ec ====

undefined8 FUN_004012ec(void)

{
  undefined4 uVar1;
  undefined4 unaff_r7;
  
  if (*DAT_004017f4 << 0x13 < 0) {
    *DAT_004015e4 = 0x10;
    *DAT_004015e4 = 8;
    if (*DAT_0040137c << 0x1d < 0) {
      FUN_00400e48();
      uVar1 = 1;
    }
    else if ((*DAT_0040137c << 0x1f < 0) && (*DAT_0040146c << 0x1f < 0)) {
      FUN_00400f54();
      uVar1 = 1;
    }
    else if (*DAT_0040137c << 0x1e < 0) {
      FUN_00401094();
      uVar1 = 1;
    }
    else if (*DAT_0040137c << 0x1c < 0) {
      *DAT_004017e0 = 8;
      FUN_00401240();
      uVar1 = 1;
    }
    else if (*DAT_0040137c << 0x1b < 0) {
      *DAT_004017e0 = 0x10;
      FUN_00401210();
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(unaff_r7,uVar1);
}



//==== FUNC FUN_00401380 @ 00401380 ====

void FUN_00401380(void)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < 3; uVar1 = (uVar1 & 0xff) + 1) {
    *(byte *)(DAT_004017f8 + (uVar1 & 0xff) * 0x18 + 0x14) =
         *(byte *)(DAT_004017f8 + (uVar1 & 0xff) * 0x18 + 0x14) & 0xfe;
    *(byte *)(DAT_004017f8 + (uVar1 & 0xff) * 0x18 + 0x14) =
         *(byte *)(DAT_004017f8 + (uVar1 & 0xff) * 0x18 + 0x14) & 0xfb;
  }
  return;
}



//==== FUNC FUN_004013d8 @ 004013d8 ====

void FUN_004013d8(void)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < 3; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_00401426(DAT_004017f8 + (uVar1 & 0xff) * 0x18,1,(uVar1 & 0xff) + 1 & 0xff);
  }
  return;
}



//==== FUNC FUN_00401402 @ 00401402 ====

void FUN_00401402(byte param_1)

{
  FUN_00401426(DAT_004017f8 + (uint)(param_1 & 0xf) * 0x18 + -0x18,1,param_1 & 0xf);
  return;
}



//==== FUNC FUN_00401426 @ 00401426 ====

void FUN_00401426(code **param_1,undefined param_2,byte param_3)

{
  uint uVar1;
  
  if (((*(byte *)(param_1 + 5) & 1) != 0) &&
     (*(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe, *param_1 != (code *)0x0)) {
    uVar1 = (uint)param_3;
    if (*(int *)(DAT_004017fc + uVar1 * 4) << 0x17 < 0) {
      uVar1 = uVar1 | 0x80;
    }
    (**param_1)(param_2,param_1[2],uVar1);
  }
  return;
}



//==== FUNC FUN_00401478 @ 00401478 ====

void FUN_00401478(byte param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = DAT_004017f8 + (uint)param_1 * 0x18;
  if ((*(byte *)(iVar1 + -4) & 1) != 0) {
    if (*(int *)(iVar1 + -0xc) != *(int *)(iVar1 + -0x10)) {
      uVar2 = *(int *)(iVar1 + -0x10) - *(int *)(iVar1 + -0xc);
      if (uVar2 < 0x10001) {
        uVar5 = uVar2 * 0x10000;
      }
      else {
        uVar2 = 0x10000;
        uVar5 = 0;
      }
      uVar4 = (uint)param_1;
      if (*(int *)(DAT_004017fc + uVar4 * 4) << 0x17 < 0) {
        uVar4 = 8 << ((uint)(*(int *)(DAT_004017fc + uVar4 * 4) << 0x19) >> 0x1d);
        if (uVar2 != uVar4 * (uVar2 / uVar4)) {
          uVar5 = uVar5 | 8;
          *(byte *)(iVar1 + -4) = *(byte *)(iVar1 + -4) & 0xfd;
        }
      }
      else if (((uint)(*(int *)(DAT_004017fc + uVar4 * 4) << 0x13) >> 0x1e != 1) ||
              (uVar2 <= (uint)(8 << ((uint)(*(int *)(DAT_004017fc + (uint)param_1 * 4) << 0x19) >>
                                    0x1d)))) {
        uVar5 = uVar5 | 0x14;
      }
      uVar4 = (uint)param_1;
      *(int *)(DAT_004015e8 + uVar4 * 0x10 + -0xc) =
           *(int *)(iVar1 + -0x14) + *(int *)(iVar1 + -0xc);
      uVar3 = FUN_00400218();
      if (-1 < *(int *)(DAT_004015e8 + uVar4 * 0x10 + -4) << 0x1b) {
        *(uint *)(DAT_004015e8 + uVar4 * 0x10 + -8) = uVar5 | 0x21;
        *(uint *)(iVar1 + -0xc) = uVar2 + *(int *)(iVar1 + -0xc);
        *(uint *)(iVar1 + -8) = uVar2;
        *DAT_00401800 = 0x2000000 << (uVar4 - 1 & 0xff);
        FUN_0040024e(uVar3);
        return;
      }
      FUN_0040024e(uVar3);
      *(undefined4 *)(iVar1 + -0x10) = *(undefined4 *)(iVar1 + -0xc);
    }
    if ((*(int *)(DAT_004017fc + (uint)param_1 * 4) << 0x17 < 0) &&
       ((int)((uint)*(byte *)(iVar1 + -4) << 0x1e) < 0)) {
      *(undefined4 *)(DAT_004017e0 + (uint)param_1 * 4) = 1;
      if (*(int *)(DAT_00401804 + (uint)param_1 * 4) << 0xf < 0) {
        *(undefined4 *)(DAT_00401808 + (uint)param_1 * 4) = 1;
      }
      *(undefined4 *)(DAT_004015e0 + (uint)param_1 * 4) = 1;
      *DAT_00401800 = 0x1000 << (uint)param_1;
    }
    else {
      FUN_00401426(iVar1 + -0x18,0,param_1);
    }
  }
  return;
}



//==== FUNC FUN_004015ec @ 004015ec ====

undefined4 FUN_004015ec(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = 1;
  do {
    if (3 < bVar2) {
      return 0;
    }
    uVar3 = (uint)bVar2;
    iVar1 = DAT_004017f8 + uVar3 * 0x18;
    if (((*DAT_0040180c & 0x2000000 << (uVar3 - 1 & 0xff)) != 0) &&
       ((*DAT_004017f4 & 0x2000000 << (uVar3 - 1 & 0xff)) != 0)) {
      if (*(int *)(DAT_00401810 + uVar3 * 0x10 + -4) << 0x1f < 0) {
        return 1;
      }
      *DAT_00401814 = 0x2000000 << (uVar3 - 1 & 0xff);
      uVar3 = *(uint *)(DAT_00401810 + (uint)bVar2 * 0x10 + -4) >> 0x10;
      if (uVar3 != 0) {
        *(uint *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) - uVar3;
        *(undefined4 *)(iVar1 + -0x10) = *(undefined4 *)(iVar1 + -0xc);
      }
      FUN_00401478(bVar2);
      return 1;
    }
    if ((*DAT_0040180c & 0x1000 << uVar3) != 0) {
      if ((*(int *)(DAT_004017cc + uVar3 * 4) << 0x1f < 0) &&
         (*(int *)(DAT_00401804 + (uint)bVar2 * 4) << 0x1f < 0)) {
        *(undefined4 *)(DAT_004017d8 + (uint)bVar2 * 4) = 1;
        *(undefined4 *)(DAT_004017e0 + (uint)bVar2 * 4) = 1;
        *(undefined4 *)(DAT_004017d8 + (uint)bVar2 * 4) = 0x4000;
        FUN_00401426(iVar1 + -0x18,0,bVar2);
        return 1;
      }
      uVar3 = (uint)bVar2;
      if ((*(int *)(DAT_004017cc + uVar3 * 4) << 0x13 < 0) &&
         ((uint)(*(int *)(DAT_00401804 + uVar3 * 4) << 0x12) >> 0x1e == 0)) {
        *(undefined4 *)(DAT_004017d8 + uVar3 * 4) = 0x1000;
        *DAT_00401814 = 0x1000 << uVar3;
        *(byte *)(iVar1 + -4) = *(byte *)(iVar1 + -4) & 0xfb;
        *(uint *)(DAT_004017fc + uVar3 * 4) = *(uint *)(DAT_004017fc + uVar3 * 4) & 0xfffffdff;
        *(undefined4 *)(DAT_00401818 + uVar3 * 4) = 0x80000;
        *(undefined4 *)(DAT_00401818 + uVar3 * 4) = 0x40000;
        return 1;
      }
    }
    bVar2 = bVar2 + 1;
  } while( true );
}



//==== FUNC FUN_0040173c @ 0040173c ====

void FUN_0040173c(char param_1)

{
  if (param_1 == '\0') {
    FUN_00400202(0x22);
  }
  else {
    FUN_004001ec(0x22);
  }
  return;
}



//==== FUNC FUN_00401756 @ 00401756 ====

void FUN_00401756(void)

{
  *DAT_0040181c = *DAT_0040181c & 0xffff7fff;
  return;
}



//==== FUNC FUN_00401764 @ 00401764 ====

undefined4 FUN_00401764(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  while ((uVar3 < param_2 && (*DAT_00401820 == 1))) {
    uVar1 = FUN_00400218();
    if (*DAT_00401824 == 0) {
      FUN_0040024e(uVar1);
    }
    else {
      *DAT_00401824 = 0;
      FUN_0040024e(uVar1);
      uVar2 = FUN_00403138();
      if (param_2 - uVar3 < uVar2) {
        uVar2 = param_2 - uVar3;
      }
      FUN_00403284(param_1 + uVar3,uVar2);
      uVar3 = uVar2 + uVar3;
    }
  }
  return param_4;
}



//==== FUNC FUN_00401828 @ 00401828 ====

int FUN_00401828(void)

{
  return **DAT_00402238 + (uint)*(ushort *)(**DAT_00402238 + 2);
}



//==== FUNC FUN_0040183e @ 0040183e ====

byte * FUN_0040183e(byte *param_1,byte param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_00401828();
  for (param_1 = param_1 + *param_1; (param_1 < pbVar1 && (param_1[1] != 4));
      param_1 = param_1 + *param_1) {
    if (param_2 == param_1[1]) {
      return param_1;
    }
  }
  return (byte *)0x0;
}



//==== FUNC FUN_00401870 @ 00401870 ====

undefined4 FUN_00401870(byte param_1,byte param_2)

{
  byte *pbVar1;
  
  if ((*DAT_0040223c != '\0') && (param_1 < *(byte *)(**DAT_00402238 + 4))) {
    *DAT_00402234 = (byte *)**DAT_00402238;
    pbVar1 = (byte *)FUN_00401828();
    while (*DAT_00402234 < pbVar1) {
      if ((((*DAT_00402234)[1] == 4) && (param_1 == (*DAT_00402234)[2])) &&
         (param_2 == (*DAT_00402234)[3])) {
        return 1;
      }
      *DAT_00402234 = *DAT_00402234 + **DAT_00402234;
    }
  }
  return 0;
}



//==== FUNC FUN_00401904 @ 00401904 ====

undefined4 FUN_00401904(byte param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_00401870(param_1,0);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*DAT_00402238 + 4) + (uint)param_1 * 4);
    uVar1 = (**(code **)(iVar2 + 0xc))();
    iVar4 = FUN_00401870(param_1,uVar1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      iVar4 = *DAT_00402234;
      while (iVar4 = FUN_0040183e(iVar4,5), iVar4 != 0) {
        FUN_004008fa(*(undefined *)(iVar4 + 2));
      }
      (**(code **)(iVar2 + 4))();
      uVar3 = 1;
    }
  }
  return uVar3;
}



//==== FUNC FUN_0040196a @ 0040196a ====

undefined4 FUN_0040196a(byte param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00401870(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = *DAT_00402234;
    do {
      iVar1 = FUN_0040183e(iVar1,5);
      if (iVar1 == 0) {
        uVar2 = (***(code ***)(*(int *)(*DAT_00402238 + 4) + (uint)param_1 * 4))();
        return uVar2;
      }
      iVar3 = FUN_0040061a(*(undefined *)(iVar1 + 2),*(undefined *)(iVar1 + 3),
                           *(undefined2 *)(iVar1 + 4));
    } while (iVar3 != 0);
  }
  return 0;
}



//==== FUNC FUN_004019c0 @ 004019c0 ====

undefined4 FUN_004019c0(void)

{
  undefined4 unaff_r7;
  
  FUN_0040043e();
  return unaff_r7;
}



//==== FUNC FUN_004019c8 @ 004019c8 ====

void FUN_004019c8(void)

{
  byte bVar1;
  
  if (*DAT_0040223c != '\0') {
    for (bVar1 = 0; bVar1 < *(byte *)(**DAT_00402238 + 4); bVar1 = bVar1 + 1) {
      FUN_00401904(bVar1);
    }
  }
  *DAT_0040223c = '\0';
  *DAT_00402240 = 1;
  return;
}



//==== FUNC FUN_00401a08 @ 00401a08 ====

void FUN_00401a08(void)

{
  byte bVar1;
  
  if (*DAT_0040223c != '\0') {
    for (bVar1 = 0; bVar1 < *(byte *)(**DAT_00402238 + 4); bVar1 = bVar1 + 1) {
      if (*(int *)(*(int *)((*DAT_00402238)[1] + (uint)bVar1 * 4) + 0x10) != 0) {
        (**(code **)(*(int *)((*DAT_00402238)[1] + (uint)bVar1 * 4) + 0x10))();
      }
    }
  }
  return;
}



//==== FUNC FUN_00401a56 @ 00401a56 ====

undefined8 FUN_00401a56(void)

{
  undefined4 unaff_r7;
  bool bVar1;
  
  bVar1 = *(short *)(DAT_00402244 + 6) == 2;
  if (bVar1) {
    FUN_0040060c(DAT_00402240,2);
  }
  return CONCAT44(unaff_r7,(uint)bVar1);
}



//==== FUNC FUN_00401a74 @ 00401a74 ====

undefined8 FUN_00401a74(void)

{
  undefined2 uVar1;
  undefined4 unaff_r7;
  bool bVar2;
  
  bVar2 = *(short *)(DAT_00402244 + 6) == 2;
  if (bVar2) {
    uVar1 = FUN_00400964((char)*(undefined2 *)(DAT_00402244 + 4));
    *DAT_00402248 = uVar1;
    FUN_0040060c(DAT_00402248,2);
  }
  return CONCAT44(unaff_r7,(uint)bVar2);
}



//==== FUNC FUN_00401aa4 @ 00401aa4 ====

undefined4 FUN_00401aa4(void)

{
  undefined4 uVar1;
  
  if (*(short *)(DAT_00402244 + 6) == 0) {
    if (*(short *)(DAT_00402244 + 2) == 1) {
      *DAT_00402240 = *DAT_00402240 & 0xfffd;
      uVar1 = 1;
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



//==== FUNC FUN_00401ad6 @ 00401ad6 ====

undefined4 FUN_00401ad6(void)

{
  undefined4 uVar1;
  
  if (*(short *)(DAT_00402244 + 6) == 0) {
    if (*(short *)(DAT_00402244 + 2) == 0) {
      uVar1 = FUN_00400a50((char)*(undefined2 *)(DAT_00402244 + 4));
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



//==== FUNC FUN_00401b02 @ 00401b02 ====

undefined8 FUN_00401b02(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r7;
  
  if (*(short *)(DAT_00402244 + 6) == 0) {
    if (*(short *)(DAT_00402244 + 2) == 1) {
      uVar2 = 0;
    }
    else {
      if (((*(short *)(DAT_00402244 + 2) == 2) && (iVar3 = FUN_00400594(), iVar3 != 0)) &&
         (*(char *)(DAT_00402244 + 4) == '\0')) {
        FUN_004019c8();
        bVar1 = (byte)((ushort)*(undefined2 *)(DAT_00402244 + 4) >> 8);
        if (bVar1 == 1) {
          *(undefined4 *)(DAT_00402244 + 0x10) = DAT_0040224c;
          uVar2 = 1;
          goto LAB_00401b96;
        }
        if (bVar1 != 0) {
          if (bVar1 == 3) {
            *(undefined4 *)(DAT_00402244 + 0x10) = DAT_00402254;
            uVar2 = 1;
            goto LAB_00401b96;
          }
          if (bVar1 < 3) {
            *(undefined4 *)(DAT_00402244 + 0x10) = DAT_00402250;
            uVar2 = 1;
            goto LAB_00401b96;
          }
          if (bVar1 == 4) {
            *(undefined4 *)(DAT_00402244 + 0x10) = DAT_00402258;
            uVar2 = 1;
            goto LAB_00401b96;
          }
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
LAB_00401b96:
  return CONCAT44(unaff_r7,uVar2);
}



//==== FUNC FUN_00401b98 @ 00401b98 ====

undefined4 FUN_00401b98(void)

{
  undefined4 uVar1;
  
  if (*(short *)(DAT_00402244 + 6) == 0) {
    if (*(short *)(DAT_00402244 + 2) == 0) {
      FUN_00400bfc((char)*(undefined2 *)(DAT_00402244 + 4));
      uVar1 = FUN_0040097c((char)*(undefined2 *)(DAT_00402244 + 4));
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



//==== FUNC FUN_00401bd0 @ 00401bd0 ====

undefined4 FUN_00401bd0(void)

{
  undefined4 unaff_r7;
  
  FUN_004005ac(*(byte *)(DAT_00402244 + 2) & 0x7f);
  return unaff_r7;
}



//==== FUNC FUN_00401be2 @ 00401be2 ====

bool FUN_00401be2(void)

{
  bool bVar1;
  
  bVar1 = *(short *)(DAT_00402244 + 6) == 0;
  if (bVar1) {
    *(undefined4 *)(DAT_00402244 + 0x10) = DAT_0040225c;
  }
  return bVar1;
}



//==== FUNC FUN_00401bfe @ 00401bfe ====

undefined4 FUN_00401bfe(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r5;
  byte bVar3;
  
  bVar3 = 0;
  bVar1 = *(byte *)(DAT_00402244 + 2);
  if (bVar1 == 0) {
    FUN_0040060c(DAT_00402260,4);
  }
  else if (bVar1 == 2) {
    bVar3 = 0xb;
    unaff_r5 = DAT_00402268;
  }
  else {
    if (1 < bVar1) {
      return 0;
    }
    bVar3 = 9;
    unaff_r5 = DAT_00402264;
  }
  if (bVar3 != 0) {
    for (uVar2 = 0; (uVar2 & 0xff) < (uint)bVar3; uVar2 = (uVar2 & 0xff) + 1) {
      *(ushort *)(DAT_0040226c + (uVar2 & 0xff) * 2 + 2) =
           (ushort)*(byte *)(unaff_r5 + (uVar2 & 0xff));
    }
    *DAT_0040226c = bVar3 * '\x02' + '\x02';
    FUN_0040060c(DAT_0040226c,*DAT_0040226c);
  }
  return 1;
}



//==== FUNC FUN_00401c8c @ 00401c8c ====

undefined4 FUN_00401c8c(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  cVar1 = (char)((ushort)*(undefined2 *)(DAT_00402244 + 2) >> 8);
  if (cVar1 == '\x01') {
    iVar3 = FUN_00400594();
    if (iVar3 == 0) {
      FUN_0040060c(DAT_00402270[2],*(undefined *)DAT_00402270[2]);
    }
    else {
      FUN_0040060c(*DAT_00402270,*(undefined *)*DAT_00402270);
    }
  }
  else {
    bVar2 = (byte)*(undefined2 *)(DAT_00402244 + 2);
    if (cVar1 == '\x02') {
      iVar3 = FUN_00400594();
      if (iVar3 == 0) {
        if (*(byte *)(*DAT_00402270 + 0x11) <= bVar2) {
          return 0;
        }
        FUN_0040060c(*(undefined4 *)(DAT_00402270[1] + (uint)bVar2 * 8),
                     *(undefined2 *)(*(int *)(DAT_00402270[1] + (uint)bVar2 * 8) + 2));
      }
      else {
        if (*(byte *)(DAT_00402270[2] + 0x11) <= bVar2) {
          return 0;
        }
        FUN_0040060c(*(undefined4 *)(DAT_00402270[4] + (uint)bVar2 * 8),
                     *(undefined2 *)(*(int *)(DAT_00402270[4] + (uint)bVar2 * 8) + 2));
      }
      *(undefined *)(*(int *)(DAT_00402244 + 8) + 1) = 2;
    }
    else if (cVar1 == '\x03') {
      iVar3 = FUN_00401bfe();
      if (iVar3 == 0) {
        return 0;
      }
    }
    else if (cVar1 == '\x06') {
      FUN_0040060c(DAT_00402270[3],*(undefined *)DAT_00402270[3]);
    }
    else if (cVar1 == '\a') {
      iVar3 = FUN_00400594();
      if (iVar3 == 0) {
        if (*(byte *)(DAT_00402270[2] + 0x11) <= bVar2) {
          return 0;
        }
        FUN_0040060c(*(undefined4 *)(DAT_00402270[4] + (uint)bVar2 * 8),
                     *(undefined2 *)(*(int *)(DAT_00402270[4] + (uint)bVar2 * 8) + 2));
      }
      else {
        if (*(byte *)(*DAT_00402270 + 0x11) <= bVar2) {
          return 0;
        }
        FUN_0040060c(*(undefined4 *)(DAT_00402270[1] + (uint)bVar2 * 8),
                     *(undefined2 *)(*(int *)(DAT_00402270[1] + (uint)bVar2 * 8) + 2));
      }
      *(undefined *)(*(int *)(DAT_00402244 + 8) + 1) = 7;
    }
    else {
      if (cVar1 != '\x0f') {
        return 0;
      }
      if (DAT_00402270[5] == 0) {
        return 0;
      }
      FUN_0040060c(DAT_00402270[5],*(undefined2 *)(DAT_00402270[5] + 2));
    }
  }
  if (*(ushort *)(DAT_00402244 + 6) < *(ushort *)(DAT_00402244 + 0xc)) {
    *(undefined2 *)(DAT_00402244 + 0xc) = *(undefined2 *)(DAT_00402244 + 6);
  }
  return 1;
}



//==== FUNC FUN_00401e52 @ 00401e52 ====

undefined8 FUN_00401e52(void)

{
  undefined4 unaff_r7;
  bool bVar1;
  
  bVar1 = *(short *)(DAT_00402244 + 6) == 1;
  if (bVar1) {
    FUN_0040060c(DAT_0040223c,1);
  }
  return CONCAT44(unaff_r7,(uint)bVar1);
}



//==== FUNC FUN_00401e70 @ 00401e70 ====

undefined4 FUN_00401e70(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  
  if (*(short *)(DAT_00402244 + 6) == 0) {
    iVar2 = FUN_004005e6();
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_00400594();
      if (iVar2 == 0) {
        if (*(byte *)(*DAT_00402270 + 0x11) < *(byte *)(DAT_00402244 + 2)) {
          return 0;
        }
      }
      else if (*(byte *)(DAT_00402270[2] + 0x11) < *(byte *)(DAT_00402244 + 2)) {
        return 0;
      }
      FUN_004019c8();
      *DAT_0040223c = (byte)*(undefined2 *)(DAT_00402244 + 2);
      if (*DAT_0040223c == 0) {
        uVar1 = 1;
      }
      else {
        iVar2 = FUN_00400594();
        if (iVar2 == 0) {
          *DAT_00402238 = (int *)(DAT_00402270[1] + (uint)*DAT_0040223c * 8 + -8);
        }
        else {
          *DAT_00402238 = (int *)(DAT_00402270[4] + (uint)*DAT_0040223c * 8 + -8);
        }
        for (bVar3 = 0; bVar3 < *(byte *)(**DAT_00402238 + 4); bVar3 = bVar3 + 1) {
          iVar2 = FUN_0040196a(bVar3,0);
          if (iVar2 == 0) {
            return 0;
          }
        }
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_00401f50 @ 00401f50 ====

undefined8 FUN_00401f50(void)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_r3;
  
  if (*(short *)(DAT_00402244 + 6) == 1) {
    if (*DAT_0040223c == '\0') {
      uVar3 = 0;
    }
    else {
      bVar1 = (byte)*(undefined2 *)(DAT_00402244 + 4);
      if (bVar1 < *(byte *)(**DAT_00402238 + 4)) {
        iVar4 = FUN_00401870(bVar1,0);
        if (iVar4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar2 = (**(code **)(*(int *)((*DAT_00402238)[1] + (uint)bVar1 * 4) + 0xc))();
          *DAT_00402274 = uVar2;
          FUN_0040060c(DAT_00402274,1);
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(in_r3,uVar3);
}



//==== FUNC FUN_00401fba @ 00401fba ====

undefined4 FUN_00401fba(void)

{
  undefined2 uVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(short *)(DAT_00402244 + 6) == 0) {
    if (*DAT_0040223c == '\0') {
      uVar3 = 0;
    }
    else {
      uVar1 = *(undefined2 *)(DAT_00402244 + 2);
      uVar2 = (undefined)*(undefined2 *)(DAT_00402244 + 4);
      iVar4 = FUN_00401904(uVar2);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0040196a(uVar2,(char)uVar1);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



//==== FUNC FUN_00401ffe @ 00401ffe ====

undefined4 FUN_00401ffe(void)

{
  byte bVar1;
  undefined4 uVar2;
  
  if ((int)((uint)*DAT_00402244 << 0x18) < 0) {
    if (*(short *)(DAT_00402244 + 6) == 0) {
      return 0;
    }
    if ((*DAT_00402244 & 0x1f) == 0) {
      bVar1 = DAT_00402244[1];
      if (bVar1 == 0) {
        uVar2 = FUN_00401a56();
        return uVar2;
      }
      if (bVar1 == 6) {
        uVar2 = FUN_00401c8c();
        return uVar2;
      }
      if (bVar1 == 8) {
        uVar2 = FUN_00401e52();
        return uVar2;
      }
    }
    if (((*DAT_00402244 & 0x1f) == 1) && (DAT_00402244[1] == 10)) {
      uVar2 = FUN_00401f50();
      return uVar2;
    }
    if (((*DAT_00402244 & 0x1f) == 2) && (DAT_00402244[1] == 0)) {
      uVar2 = FUN_00401a74();
      return uVar2;
    }
  }
  else {
    if ((*DAT_00402244 & 0x1f) == 0) {
      bVar1 = DAT_00402244[1];
      if (bVar1 == 1) {
        uVar2 = FUN_00401aa4();
        return uVar2;
      }
      if (bVar1 == 3) {
        uVar2 = FUN_00401b02();
        return uVar2;
      }
      if (bVar1 == 5) {
        uVar2 = FUN_00401be2();
        return uVar2;
      }
      if ((bVar1 != 7) && (bVar1 == 9)) {
        uVar2 = FUN_00401e70();
        return uVar2;
      }
    }
    if (((*DAT_00402244 & 0x1f) == 1) && (DAT_00402244[1] == 0xb)) {
      uVar2 = FUN_00401fba();
      return uVar2;
    }
    if ((*DAT_00402244 & 0x1f) == 2) {
      if (DAT_00402244[1] == 1) {
        uVar2 = FUN_00401ad6();
        return uVar2;
      }
      if (DAT_00402244[1] == 3) {
        uVar2 = FUN_00401b98();
        return uVar2;
      }
    }
  }
  return 0;
}



//==== FUNC FUN_004020fa @ 004020fa ====

undefined4 FUN_004020fa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*DAT_0040223c == '\0') {
    uVar3 = 0;
  }
  else {
    bVar1 = (byte)*(undefined2 *)(DAT_00402244 + 4);
    if (bVar1 < *(byte *)(**DAT_00402238 + 4)) {
      iVar4 = FUN_00401870(bVar1,0,param_3,param_4,param_4);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        iVar4 = *(int *)((*DAT_00402238)[1] + (uint)bVar1 * 4);
        uVar2 = (**(code **)(iVar4 + 0xc))();
        iVar5 = FUN_00401870(bVar1,uVar2);
        if (iVar5 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(iVar4 + 8))();
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



//==== FUNC FUN_00402160 @ 00402160 ====

undefined8 FUN_00402160(void)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_r3;
  uint uVar5;
  
  if (*DAT_0040223c == '\0') {
    uVar2 = 0;
  }
  else {
    for (uVar5 = 0; (uVar5 & 0xff) < (uint)*(byte *)(**DAT_00402238 + 4); uVar5 = (uVar5 & 0xff) + 1
        ) {
      iVar3 = *(int *)((*DAT_00402238)[1] + (uVar5 & 0xff) * 4);
      uVar1 = (**(code **)(iVar3 + 0xc))();
      iVar4 = FUN_00401870(uVar5 & 0xff,uVar1);
      if (iVar4 == 0) {
        uVar2 = 0;
        goto LAB_004021c0;
      }
      iVar3 = (**(code **)(iVar3 + 8))();
      if (iVar3 != 0) {
        uVar2 = 1;
        goto LAB_004021c0;
      }
    }
    uVar2 = 0;
  }
LAB_004021c0:
  return CONCAT44(in_r3,uVar2);
}



//==== FUNC FUN_004021c2 @ 004021c2 ====

undefined8 FUN_004021c2(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r7;
  
  *(undefined2 *)(DAT_00402244 + 0xc) = 0;
  *(undefined4 *)(DAT_00402244 + 0x10) = 0;
  *(undefined4 *)(DAT_00402244 + 0x14) = 0;
  if (((int)((uint)*DAT_00402244 << 0x18) < 0) && (*(short *)(DAT_00402244 + 6) == 0)) {
    uVar1 = 0;
  }
  else if (((*DAT_00402244 & 0x60) == 0) && (iVar2 = FUN_00401ffe(), iVar2 != 0)) {
    uVar1 = 1;
  }
  else if (((*DAT_00402244 & 0x1f) == 1) && (iVar2 = FUN_004020fa(), iVar2 != 0)) {
    uVar1 = 1;
  }
  else if (((*DAT_00402244 & 0x1f) == 2) && (iVar2 = FUN_00402160(), iVar2 != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(unaff_r7,uVar1);
}



//==== FUNC FUN_00402278 @ 00402278 ====

void FUN_00402278(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = 0;
    goto LAB_004022ac;
  }
  if (param_1 != 0) {
    if (param_1 == 3) {
      uVar1 = 0x300;
      goto LAB_004022ac;
    }
    if (param_1 < 3) {
      uVar1 = 0x100;
      goto LAB_004022ac;
    }
    if (param_1 == 4) {
      uVar1 = 0x200;
      goto LAB_004022ac;
    }
  }
  uVar1 = 0;
LAB_004022ac:
  *DAT_00402594 = *DAT_00402594 & 0xfffffcff | uVar1;
  do {
  } while (-1 < *DAT_00402598 << 0x1c);
  return;
}



//==== FUNC FUN_004022ca @ 004022ca ====

undefined4 FUN_004022ca(uint param_1)

{
  int iVar1;
  
  *DAT_00402594 = *DAT_00402594 & 0xfffffffc | 1;
  iVar1 = 0x1000;
  while (-1 < *DAT_00402598 << 0x1c) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = iVar1 + -1;
  }
  *DAT_00402594 = *DAT_00402594 & 0xffffff8f | param_1;
  iVar1 = 0x1000;
  while( true ) {
    if (*DAT_00402598 << 0x1c < 0) {
      return 0;
    }
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
  }
  return 1;
}



//==== FUNC FUN_0040232e @ 0040232e ====

undefined4 FUN_0040232e(uint param_1)

{
  int iVar1;
  
  *DAT_00402594 = *DAT_00402594 & 0xffffff8f | param_1;
  iVar1 = 0x1000;
  while (-1 < *DAT_00402598 << 0x1c) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = iVar1 + -1;
  }
  *DAT_00402594 = *DAT_00402594 & 0xfffffffc | 2;
  iVar1 = 0x1000;
  while( true ) {
    if (*DAT_00402598 << 0x1c < 0) {
      return 0;
    }
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
  }
  return 1;
}



//==== FUNC FUN_00402392 @ 00402392 ====

void FUN_00402392(int param_1)

{
  if (param_1 == 1) {
    *DAT_0040259c = *DAT_0040259c | DAT_004025a0;
  }
  *DAT_004025a8 = DAT_004025a4;
  return;
}



//==== FUNC FUN_004023b4 @ 004023b4 ====

undefined FUN_004023b4(void)

{
  undefined uVar1;
  
  if (*DAT_004025ac << 0x18 < 0) {
    uVar1 = (undefined)((*DAT_00402598 & 0x80) >> 7);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_004023d2 @ 004023d2 ====

void FUN_004023d2(uint param_1)

{
  *DAT_004025b0 = *DAT_004025b0 | 0x370008;
  do {
  } while (-1 < *DAT_00402598 << 0xe);
  *DAT_004025b0 = *DAT_004025b0 & 0xffffff8f | param_1 | 0x370000;
  do {
  } while (-1 < *DAT_00402598 << 0xe);
  *DAT_004025b0 = *DAT_004025b0 & 0xfeffffff | 0x370000;
  return;
}



//==== FUNC FUN_00402426 @ 00402426 ====

void FUN_00402426(int param_1,uint param_2)

{
  if (param_1 == 0) {
    *DAT_004025b0 = *DAT_004025b0 & 0xfffffffd | (param_2 & 0xff) << 8 | 0x370001;
    do {
    } while (-1 < *DAT_00402598 << 0x1f);
    *DAT_004025b0 = *DAT_004025b0 | DAT_004025b8;
  }
  else {
    *DAT_004025b0 = *DAT_004025b0 & 0xfffffffe | DAT_004025b4;
  }
  return;
}



//==== FUNC FUN_00402480 @ 00402480 ====

uint FUN_00402480(void)

{
  return *DAT_00402598 & 0x10000;
}



//==== FUNC FUN_0040248c @ 0040248c ====

void FUN_0040248c(void)

{
  *DAT_004025bc = 0x20000000;
  return;
}



//==== FUNC FUN_00402498 @ 00402498 ====

uint FUN_00402498(void)

{
  return *DAT_00402598 & 2;
}



//==== FUNC FUN_004024a4 @ 004024a4 ====

void FUN_004024a4(void)

{
  *DAT_004025c0 = 0x310000;
  do {
  } while (-1 < *DAT_00402598 << 0x19);
  return;
}



//==== FUNC FUN_004024ba @ 004024ba ====

uint FUN_004024ba(void)

{
  return *DAT_00402598 & 0x40;
}



//==== FUNC FUN_004024c6 @ 004024c6 ====

undefined4 FUN_004024c6(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x40) {
    if (param_1 < 0x20) {
      if ((*DAT_004025c4 & 1 << (param_1 & 0xff)) != 1 << (param_1 & 0xff)) {
        *DAT_004025c8 = 1 << (param_1 & 0xff);
      }
    }
    else {
      param_1 = param_1 - 0x20;
      if ((*DAT_004025cc & 1 << (param_1 & 0xff)) != 1 << (param_1 & 0xff)) {
        *DAT_004025d0 = 1 << (param_1 & 0xff);
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_00402518 @ 00402518 ====

undefined4 FUN_00402518(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x40) {
    if (param_1 < 0x20) {
      if ((*DAT_004025c4 & 1 << (param_1 & 0xff)) == 1 << (param_1 & 0xff)) {
        *DAT_004025d4 = 1 << (param_1 & 0xff);
      }
    }
    else {
      param_1 = param_1 - 0x20;
      if ((*DAT_004025cc & 1 << (param_1 & 0xff)) == 1 << (param_1 & 0xff)) {
        *DAT_004025d8 = 1 << (param_1 & 0xff);
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_0040256a @ 0040256a ====

void FUN_0040256a(uint param_1)

{
  *DAT_004025e0 = (param_1 & 0xf) << 8 | 1;
  return;
}



//==== FUNC FUN_0040257a @ 0040257a ====

void FUN_0040257a(void)

{
  *DAT_004025dc = 0x20;
  return;
}



//==== FUNC FUN_00402582 @ 00402582 ====

void FUN_00402582(uint param_1)

{
  *DAT_004025e4 = *DAT_004025e4 | param_1 & 0x7ffff;
  return;
}



//==== FUNC FUN_004025e8 @ 004025e8 ====

void FUN_004025e8(uint param_1)

{
  if (param_1 != 0) {
    if (param_1 == 2) {
      FUN_00402392(1);
    }
    else if (param_1 < 2) {
      FUN_00402392(0);
    }
    else if (param_1 == 4) {
      FUN_004023d2(0x10);
    }
    else if (param_1 < 4) {
      FUN_004023d2(0);
    }
    else if (param_1 == 6) {
      FUN_00402426(0,0x3e);
    }
    else if (param_1 < 6) {
      FUN_004023d2(0x20);
    }
    else if (param_1 == 7) {
      FUN_00402426(1,0x3e);
    }
  }
  return;
}



//==== FUNC FUN_00402646 @ 00402646 ====

bool FUN_00402646(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = true;
  }
  else if (param_1 - 1U < 2) {
    iVar1 = FUN_004023b4();
    bVar2 = iVar1 != 0;
  }
  else if (param_1 - 3U < 5) {
    iVar1 = FUN_00402480();
    bVar2 = iVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



//==== FUNC FUN_0040268a @ 0040268a ====

undefined4 FUN_0040268a(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 32000;
  }
  else if (param_1 == 2) {
    uVar1 = 0x8000;
  }
  else if (param_1 < 2) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = DAT_00402814;
    if ((((param_1 != 4) && (uVar1 = DAT_00402810, 3 < param_1)) &&
        (uVar1 = DAT_00402818, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_004026d2 @ 004026d2 ====

void FUN_004026d2(undefined param_1)

{
  int iVar1;
  
  do {
    iVar1 = FUN_00402646(param_1);
  } while (iVar1 == 0);
  return;
}



//==== FUNC FUN_004026e4 @ 004026e4 ====

void FUN_004026e4(uint *param_1,undefined param_2,uint param_3,uint param_4)

{
  if ((param_4 | param_3) == 0) {
    *param_1 = 0xf00000;
  }
  else {
    FUN_0040268a(param_2);
    *param_1 = DAT_0040281c & (param_4 - 1) * 0x10000 | param_3 & 0xff | 0x3f00;
  }
  return;
}



//==== FUNC FUN_0040272a @ 0040272a ====

undefined4 FUN_0040272a(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    FUN_0040248c();
    *DAT_00402820 = *param_1 | 0x20000000;
  }
  else {
    *DAT_00402824 = *param_1 | 0x10000;
  }
  return param_4;
}



//==== FUNC FUN_00402750 @ 00402750 ====

void FUN_00402750(int param_1)

{
  if (param_1 == 0) {
    FUN_00402498();
  }
  else {
    FUN_004024ba();
  }
  return;
}



//==== FUNC FUN_00402764 @ 00402764 ====

void FUN_00402764(byte param_1)

{
  if (param_1 - 3 < 5) {
    FUN_004025e8(param_1);
    FUN_004026d2(param_1);
  }
  return;
}



//==== FUNC FUN_00402786 @ 00402786 ====

undefined4 FUN_00402786(undefined4 param_1)

{
  int iVar1;
  
  do {
    iVar1 = FUN_00402750(param_1);
  } while (iVar1 == 0);
  return 0;
}



//==== FUNC FUN_00402798 @ 00402798 ====

undefined8 FUN_00402798(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0040268a(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_004027ac @ 004027ac ====

undefined8 FUN_004027ac(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_00402798();
  return CONCAT44(unaff_r7,uVar1 / 1);
}



//==== FUNC FUN_004027ba @ 004027ba ====

undefined4 FUN_004027ba(void)

{
  undefined4 unaff_r7;
  
  FUN_004024a4();
  FUN_0040256a(0);
  FUN_0040257a();
  return unaff_r7;
}



//==== FUNC FUN_004027cc @ 004027cc ====

undefined4 FUN_004027cc(void)

{
  undefined4 unaff_r7;
  
  FUN_004033c0(DAT_00402828);
  FUN_00402764(6);
  FUN_004026e4(&stack0xfffffff8,6,1,0x19);
  FUN_0040272a(&stack0xfffffff8,0);
  FUN_00402786(0);
  FUN_00402278(2);
  FUN_0040232e(0);
  FUN_00403298();
  FUN_004027ac();
  FUN_004033c0();
  return unaff_r7;
}



//==== FUNC FUN_0040282c @ 0040282c ====

void FUN_0040282c(undefined4 *param_1,undefined4 *param_2,uint param_3)

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



//==== FUNC FUN_0040284c @ 0040284c ====

void FUN_0040284c(undefined4 *param_1,undefined4 *param_2,uint param_3)

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



//==== FUNC FUN_004028a4 @ 004028a4 ====

bool FUN_004028a4(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  DataMemoryBarrier(0x1f);
  *DAT_0040315c = 0;
  return iVar2 == 0;
}



//==== FUNC FUN_004028cc @ 004028cc ====

bool FUN_004028cc(int param_1)

{
  return param_1 != 0;
}



//==== FUNC FUN_004028da @ 004028da ====

void FUN_004028da(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004028cc(param_1);
  if (iVar1 != 0) {
    *DAT_0040315c = 1;
    DataMemoryBarrier(0x1f);
    enableIRQinterrupts();
  }
  return;
}



//==== FUNC FUN_004028f8 @ 004028f8 ====

/* WARNING: Removing unreachable block (ram,0x00402952) */

undefined8 FUN_004028f8(void)

{
  int iVar1;
  undefined4 in_r3;
  
  *DAT_00403160 = '\0';
  *DAT_00403130 = 0;
  *DAT_00403134 = 0xa1;
  DAT_00403134[1] = 0x20;
  *(undefined2 *)(DAT_00403134 + 2) = 0;
  *(undefined2 *)(DAT_00403134 + 4) = 0;
  *(undefined2 *)(DAT_00403134 + 6) = 2;
  *(undefined2 *)(DAT_00403134 + 8) = 0;
  *DAT_00403164 = 0x1c200;
  *(undefined *)(DAT_00403164 + 1) = 0;
  *(undefined *)((int)DAT_00403164 + 5) = 0;
  *(undefined *)((int)DAT_00403164 + 6) = 8;
  iVar1 = FUN_00400154(0);
  if (iVar1 != 0) {
    *DAT_00403160 = *DAT_00403160 + '\x01';
  }
  return CONCAT44(in_r3,(uint)(iVar1 != 0));
}



//==== FUNC FUN_004029f6 @ 004029f6 ====

undefined4 FUN_004029f6(void)

{
  int iVar1;
  undefined4 uVar2;
  
  *DAT_00403168 = '\0';
  *DAT_0040316c = 0;
  *DAT_00403170 = 0;
  *DAT_00403174 = 0;
  *DAT_00403178 = 0;
  DAT_00403178[1] = 0;
  *DAT_00403244 = 0;
  FUN_00402dd0(0);
  *DAT_00403248 = 0;
  *DAT_0040324c = 0;
  *DAT_00403250 = 0;
  DAT_00403250[1] = 0;
  *DAT_00403254 = 0;
  iVar1 = FUN_00402bf0(0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    *DAT_00403168 = *DAT_00403168 + '\x01';
    if (*DAT_00403168 == '\x01') {
      *DAT_00403258 = 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}



//==== FUNC FUN_00402bf0 @ 00402bf0 ====

/* WARNING: Removing unreachable block (ram,0x00402c8e) */

undefined4 FUN_00402bf0(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_004028a4();
  bVar1 = *DAT_0040324c;
  if ((*DAT_00403248 == '\0') && (*(ushort *)(DAT_00403250 + (uint)bVar1 * 2) <= *DAT_00403254)) {
    *DAT_00403254 = 0;
    *DAT_0040324c = bVar1 == 0;
    *DAT_00403248 = '\x01';
    FUN_004028da(uVar2);
    iVar3 = FUN_00402fb0(0);
    if (iVar3 != 0) {
      FUN_00400174(0);
    }
    uVar2 = FUN_00400b28(2,1,DAT_00403264 + (uint)bVar1 * 0x200,0x200,0x402cc9);
  }
  else {
    FUN_004028da(uVar2);
    uVar2 = 0;
  }
  return uVar2;
}



//==== FUNC FUN_00402cc8 @ 00402cc8 ====

undefined8 FUN_00402cc8(char param_1,int param_2,undefined param_3)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (param_1 == '\0') {
    if (param_2 == 0) {
      local_20 = DAT_00403268;
      FUN_00400b28(param_3,1,DAT_00403264 + (uint)(*DAT_0040324c == '\0') * 0x200,0x200);
    }
    else {
      *(short *)(DAT_00403250 + (uint)(*DAT_0040324c == '\0') * 2) = (short)param_2;
      *DAT_00403248 = 0;
      FUN_00402bf0(0);
    }
  }
  return CONCAT44(uStack_1c,local_20);
}



//==== FUNC FUN_00402d66 @ 00402d66 ====

undefined4 FUN_00402d66(char param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == '\0') {
    *(undefined2 *)(DAT_00403178 + (uint)(*DAT_00403174 == '\0') * 2) = 0;
    *DAT_00403170 = 0;
    *DAT_0040316c = 0;
    if (param_2 != 0) {
      FUN_0040017c(0);
    }
    FUN_00402dd0(0);
  }
  return param_4;
}



//==== FUNC FUN_00402dd0 @ 00402dd0 ====

/* WARNING: Removing unreachable block (ram,0x00402f26) */

undefined8 FUN_00402dd0(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*DAT_0040316c == '\0') {
    iVar2 = FUN_00400594();
    if (iVar2 == 0) {
      sVar1 = FUN_004005f2();
      if (*DAT_00403244 == sVar1) goto LAB_00402f6a;
    }
    else {
      sVar1 = FUN_00400600();
      if (*DAT_00403244 == sVar1) goto LAB_00402f6a;
    }
    uVar3 = FUN_004028a4();
    bVar4 = *DAT_00403174;
    uVar5 = (uint)bVar4;
    if (*(short *)(DAT_00403178 + uVar5 * 2) == 0) {
      *DAT_0040326c = *DAT_0040326c + 1;
      iVar2 = FUN_00400594();
      if (((iVar2 == 0) && (*DAT_0040326c < 100)) ||
         ((iVar2 = FUN_00400594(), iVar2 != 0 && (*DAT_0040326c < 800)))) {
        FUN_004028da(uVar3);
        goto LAB_00402f6a;
      }
    }
    *DAT_0040326c = 0;
    if (*DAT_00403170 == '\0') {
      *DAT_00403174 = uVar5 == 0;
    }
    else if (uVar5 == 0) {
      bVar4 = 1;
    }
    else {
      bVar4 = 0;
    }
    *DAT_0040316c = '\x01';
    FUN_004028da(uVar3);
    bVar6 = *(short *)(DAT_00403178 + (uint)bVar4 * 2) != 0x200;
    if (bVar6) {
      iVar2 = FUN_00400594();
      if (iVar2 == 0) {
        sVar1 = FUN_004005f2();
        *DAT_00403244 = sVar1;
      }
      else {
        sVar1 = FUN_00400600();
        *DAT_00403244 = sVar1;
      }
    }
    else {
      *DAT_00403244 = 0;
    }
    local_20 = DAT_00403270;
    FUN_00400b28(0x81,bVar6,DAT_00403274 + (uint)bVar4 * 0x200,
                 *(undefined2 *)(DAT_00403178 + (uint)bVar4 * 2));
  }
LAB_00402f6a:
  return CONCAT44(uStack_1c,local_20);
}



//==== FUNC FUN_00402f6e @ 00402f6e ====

undefined8 FUN_00402f6e(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  
  uVar3 = FUN_004028a4();
  uVar1 = *DAT_00403254;
  uVar2 = *(ushort *)(DAT_00403250 + (uint)*DAT_0040324c * 2);
  FUN_004028da(uVar3);
  return CONCAT44(in_r3,(uint)uVar2 - (uint)uVar1);
}



//==== FUNC FUN_00402fb0 @ 00402fb0 ====

bool FUN_00402fb0(undefined param_1)

{
  int iVar1;
  
  iVar1 = FUN_00402f6e(param_1);
  return iVar1 != 0;
}



//==== FUNC FUN_00402fca @ 00402fca ====

void FUN_00402fca(void)

{
  FUN_00402fb0(0);
  return;
}



//==== FUNC FUN_00402fd4 @ 00402fd4 ====

uint FUN_00402fd4(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 0;
  if (*(char *)(DAT_00403164 + 6) == '\t') {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  while( true ) {
    while( true ) {
      uVar4 = FUN_004028a4();
      uVar2 = *DAT_00403254;
      bVar1 = *DAT_0040324c;
      uVar3 = *(ushort *)(DAT_00403250 + (uint)bVar1 * 2);
      FUN_004028da(uVar4);
      if (uVar2 < uVar3) break;
      if (*DAT_00403258 == '\0') {
        return 0;
      }
    }
    uVar5 = uVar5 | *(byte *)(DAT_00403264 + (uint)bVar1 * 0x200 + (uint)uVar2);
    *DAT_00403254 = uVar2 + 1;
    FUN_00402bf0(0);
    if (!bVar6) break;
    bVar6 = false;
    uVar5 = uVar5 << 8;
  }
  return uVar5;
}



//==== FUNC FUN_004030ac @ 004030ac ====

void FUN_004030ac(void)

{
  FUN_00402fd4(0);
  return;
}



//==== FUNC FUN_004030b6 @ 004030b6 ====

int FUN_004030b6(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = FUN_004028a4();
  bVar1 = *DAT_00403278;
  uVar3 = (uint)*(ushort *)(DAT_00403178 + (uint)bVar1 * 2);
  if (((uVar3 == 0x200) && (*DAT_0040316c == '\0')) && (*DAT_00403170 == '\0')) {
    *DAT_00403170 = '\x01';
    *DAT_00403278 = bVar1 == 0;
    uVar3 = 0;
  }
  FUN_004028da(uVar2);
  return 0x200 - uVar3;
}



//==== FUNC FUN_00403138 @ 00403138 ====

void FUN_00403138(void)

{
  FUN_004030b6(0);
  return;
}



//==== FUNC FUN_00403142 @ 00403142 ====

bool FUN_00403142(undefined param_1)

{
  int iVar1;
  
  iVar1 = FUN_004030b6(param_1);
  return iVar1 != 0;
}



//==== FUNC FUN_0040317c @ 0040317c ====

undefined8 FUN_0040317c(undefined4 param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30;
  
  if (*(char *)(DAT_0040327c + 6) == '\t') {
    param_3 = param_3 << 1;
  }
  do {
    while (iVar3 = FUN_00403142(0), iVar3 == 0) {
      if (*DAT_00403258 == '\0') {
LAB_0040323e:
        return CONCAT44(local_30,param_3);
      }
    }
    local_30 = FUN_004028a4();
    bVar1 = *DAT_00403278;
    uVar2 = *(ushort *)(DAT_00403280 + (uint)bVar1 * 2);
    uVar4 = 0x200 - uVar2;
    if (param_3 < 0x200 - uVar2) {
      uVar4 = param_3;
    }
    FUN_0040282c(DAT_00403274 + (uint)bVar1 * 0x200 + (uint)uVar2,param_2,uVar4);
    *(ushort *)(DAT_00403280 + (uint)bVar1 * 2) = (short)uVar4 + uVar2;
    FUN_004028da(local_30);
    param_2 = param_2 + uVar4;
    param_3 = param_3 - uVar4;
  } while (param_3 != 0);
  param_3 = 0;
  goto LAB_0040323e;
}



//==== FUNC FUN_00403284 @ 00403284 ====

void FUN_00403284(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040317c(0,param_1,param_2,param_4,param_4);
  return;
}



//==== FUNC FUN_00403298 @ 00403298 ====

void FUN_00403298(void)

{
  uint uVar1;
  
  uVar1 = *DAT_0040342c & 3;
  if (uVar1 == 0) {
    if (*DAT_00403438 << 0x18 < 0) {
      *DAT_00403434 = 0x8000;
    }
    else {
      *DAT_00403434 = 32000;
    }
  }
  else if (uVar1 == 2) {
    if ((int)(*DAT_00403428 << 7) < 0) {
      *DAT_00403434 = DAT_0040343c;
    }
    else {
      *DAT_00403434 = DAT_00403440;
      uVar1 = *DAT_00403428 & 0x70;
      if (uVar1 != 0) {
        if (uVar1 == 0x10) {
          *DAT_00403434 = *DAT_00403434 << 1;
        }
        else if (uVar1 == 0x20) {
          *DAT_00403434 = *DAT_00403434 * 3;
        }
      }
    }
    if ((*DAT_0040342c & 3) == 2) {
      *DAT_00403434 = (((*DAT_00403430 << 5) >> 0x15) + 1) * *DAT_00403434;
      *DAT_00403434 = *DAT_00403434 / (*DAT_00403430 & 0xff);
    }
  }
  else if (uVar1 < 2) {
    if ((int)(*DAT_00403428 << 7) < 0) {
      *DAT_00403434 = DAT_0040343c;
    }
    else {
      *DAT_00403434 = DAT_00403440;
      uVar1 = *DAT_00403428 & 0x70;
      if (uVar1 != 0) {
        if (uVar1 == 0x10) {
          *DAT_00403434 = *DAT_00403434 << 1;
        }
        else if (uVar1 == 0x20) {
          *DAT_00403434 = *DAT_00403434 * 3;
        }
      }
    }
  }
  if ((*DAT_0040342c & 0x70) == 0x70) {
    *DAT_00403434 = *DAT_00403434 / 3;
  }
  else {
    *DAT_00403434 = *DAT_00403434 >> ((*DAT_0040342c << 0x19) >> 0x1d);
  }
  return;
}



//==== FUNC FUN_004033c0 @ 004033c0 ====

void FUN_004033c0(uint param_1)

{
  if (param_1 < DAT_00403444) {
    *DAT_00403424 = 0x4000000;
  }
  else if (param_1 < DAT_00403448) {
    *DAT_00403424 = DAT_0040344c;
  }
  else if (param_1 < DAT_00403450) {
    *DAT_00403424 = DAT_00403454;
  }
  else if (param_1 < DAT_00403458) {
    *DAT_00403424 = DAT_0040345c;
  }
  else if (param_1 < DAT_00403460) {
    *DAT_00403424 = 0x4000400;
  }
  else if (param_1 < DAT_00403464) {
    *DAT_00403424 = DAT_00403468;
  }
  else {
    *DAT_00403424 = DAT_0040346c;
  }
  return;
}



//==== FUNC FUN_00404a50 @ 00404a50 ====

void FUN_00404a50(undefined4 param_1)

{
  FUN_004024c6(param_1);
  return;
}



//==== FUNC FUN_00404a5c @ 00404a5c ====

undefined4 FUN_00404a5c(void)

{
  undefined4 unaff_r7;
  
  FUN_00404a50(10);
  FUN_00404a50(0xb);
  FUN_00404a50(0xc);
  FUN_00404a50(0x10);
  FUN_00404a50(0x11);
  return unaff_r7;
}



//==== FUNC FUN_00404a7e @ 00404a7e ====

undefined4 FUN_00404a7e(void)

{
  undefined4 unaff_r7;
  
  FUN_00404a5c();
  return unaff_r7;
}



//==== FUNC FUN_00404a86 @ 00404a86 ====

undefined8 FUN_00404a86(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  FUN_0040601a(0x42,0,0);
  FUN_0040601a(0x43,0,0);
  iVar1 = FUN_0040603e(0x42);
  if ((iVar1 == 0) && (iVar1 = FUN_0040603e(0x43), iVar1 != 0)) {
    uVar2 = 2;
  }
  else {
    iVar1 = FUN_0040603e(0x42);
    if ((iVar1 == 0) || (iVar1 = FUN_0040603e(0x43), iVar1 == 0)) {
      uVar2 = 3;
    }
    else {
      uVar2 = 1;
    }
  }
  return CONCAT44(unaff_r7,uVar2);
}



//==== FUNC FUN_00404ad0 @ 00404ad0 ====

void FUN_00404ad0(void)

{
  char cVar1;
  
  FUN_0040601a(0x1f,1,0);
  FUN_0040601a(0x40,1,0);
  FUN_0040601a(0x41,1,0);
  cVar1 = FUN_00404a86();
  if (cVar1 == '\x02') {
    FUN_0040601a(0x50,1,1);
    FUN_0040601a(0x51,1,1);
  }
  else if (cVar1 == '\x03') {
    FUN_0040601a(0x50,1,1);
    FUN_0040601a(0x51,1,1);
    FUN_0040601a(0x40,1,1);
  }
  else {
    FUN_0040601a(0x50,1,0);
    FUN_0040601a(0x51,1,0);
  }
  FUN_0040601a(0x52,1,0);
  FUN_0040601a(0x53,1,0);
  FUN_0040601a(0x54,1,0);
  FUN_0040601a(0x77,1,0);
  FUN_0040601a(0x78,1,0);
  FUN_0040601a(0x79,1,0);
  FUN_0040601a(0x7a,1,0);
  return;
}



//==== FUNC FUN_00404b96 @ 00404b96 ====

undefined8 FUN_00404b96(void)

{
  char cVar1;
  undefined4 unaff_r7;
  
  cVar1 = FUN_00400190(2);
  return CONCAT44(unaff_r7,(int)cVar1);
}



//==== FUNC FUN_00404ba2 @ 00404ba2 ====

undefined8 FUN_00404ba2(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0040019a(2,(int)param_1);
  iVar1 = FUN_00404b96();
  return CONCAT44(param_4,(uint)(param_1 == iVar1));
}



//==== FUNC FUN_00404bc6 @ 00404bc6 ====

undefined8 FUN_00404bc6(void)

{
  char cVar1;
  undefined4 unaff_r7;
  
  cVar1 = FUN_00400190(1);
  return CONCAT44(unaff_r7,(int)cVar1);
}



//==== FUNC FUN_00404bd2 @ 00404bd2 ====

undefined8 FUN_00404bd2(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0040019a(1,(int)param_1);
  iVar1 = FUN_00404bc6();
  return CONCAT44(param_4,(uint)(param_1 == iVar1));
}



//==== FUNC FUN_00404bf6 @ 00404bf6 ====

undefined8 FUN_00404bf6(int param_1,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = *param_4;
  if (param_3 <= uVar1) {
    *param_4 = *param_4 - param_3;
  }
  else {
    *(undefined *)(param_2 + 2) = 8;
    (**(code **)(param_1 + 0x20b4))(param_1,param_2,3);
  }
  return CONCAT44(param_4,(uint)(param_3 <= uVar1));
}



//==== FUNC FUN_00404c26 @ 00404c26 ====

void FUN_00404c26(undefined *param_1,int param_2,int param_3,byte param_4)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < (uint)param_4; uVar1 = (uVar1 & 0xff) + 1) {
    *param_1 = (char)((ushort)*(undefined2 *)(param_3 + (uVar1 & 0xff) * 2) >> 8);
    param_1[1] = (char)*(undefined2 *)(param_3 + (uVar1 & 0xff) * 2);
    FUN_0040282c(param_1 + 2,*(undefined4 *)(param_2 + (uVar1 & 0xff) * 4),
                 *(undefined2 *)(param_3 + (uVar1 & 0xff) * 2));
    param_1 = param_1 + 2 + *(ushort *)(param_3 + (uVar1 & 0xff) * 2);
  }
  return;
}



//==== FUNC FUN_00404c8c @ 00404c8c ====

undefined8 FUN_00404c8c(int param_1)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(char *)(param_1 + 0x1c) == '\0') {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (((*(char *)(param_1 + 0xe) == '\0') ||
          (*(char *)(param_1 + 0xf) != *(char *)(param_1 + 0x28))) ||
         (*(char *)(param_1 + 0xf) != *(char *)(param_1 + 0x103e))) {
        if (*(ushort *)(param_1 + 0x1e) < 3) {
          (**(code **)(param_1 + 0x20b4))(param_1,&local_18,3);
          *(undefined *)(param_1 + 0x10) = 0;
          uVar3 = 0;
        }
        else {
          sVar1 = *(short *)(param_1 + 0x1e);
          uVar5 = sVar1 - 2;
          *(undefined *)(param_1 + 0xe) = *(undefined *)(param_1 + 0x25);
          *(undefined *)(param_1 + 0xf) = *(undefined *)(param_1 + 0x28);
          cVar2 = *(char *)(param_1 + 0x29);
          if (cVar2 == '!') {
            iVar4 = (**(code **)(param_1 + 0x20c8))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '\"') {
            iVar4 = (**(code **)(param_1 + 0x20cc))(param_1,param_1 + 0x29,uVar5 + 1);
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
          else if (cVar2 == '&') {
            iVar4 = (**(code **)(param_1 + 0x20dc))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '\'') {
            uVar3 = FUN_00405a80(param_1,param_1 + 0x2a,sVar1 + -2);
          }
          else if (cVar2 == '(') {
            iVar4 = (**(code **)(param_1 + 0x20e0))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == ')') {
            uVar3 = FUN_00405a9a(param_1,param_1 + 0x2a,sVar1 + -2);
          }
          else if (cVar2 == '*') {
            uVar3 = FUN_00405ab4(param_1,param_1 + 0x29,uVar5 + 1);
          }
          else if (cVar2 == '/') {
            uVar3 = FUN_00405ace(param_1,param_1 + 0x29,uVar5 + 1);
          }
          else if (cVar2 == -1) {
            (**(code **)(param_1 + 0x20b4))(param_1,param_1 + 0x29,uVar5 + 1);
          }
          else {
            (**(code **)(param_1 + 0x20b4))(param_1,&LAB_00405144,2);
          }
          *(undefined *)(param_1 + 0x10) = 0;
          uVar3 = uVar3 & 0xff;
        }
      }
      else {
        if (*(uint *)(param_1 + 0x1034) < 0x1011) {
          (**(code **)(param_1 + 0x20b0))
                    (param_1,param_1 + 0x1038,*(undefined4 *)(param_1 + 0x1034));
        }
        else {
          (**(code **)(param_1 + 0x20b0))(param_1,param_1 + 0x1038,4);
        }
        (**(code **)(param_1 + 0x20c0))(param_1,1);
        *(undefined *)(param_1 + 0x10) = 0;
        uVar3 = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0xe) != '\0') {
        (**(code **)(param_1 + 0x20b4))(param_1,&DAT_00404f90,2);
      }
      *(undefined *)(param_1 + 0x10) = 0;
      uVar3 = 0;
    }
  }
  return CONCAT44(local_18,uVar3);
}



//==== FUNC FUN_00404eee @ 00404eee ====

undefined4 FUN_00404eee(void)

{
  undefined4 unaff_r7;
  
  *DAT_00405bc4 = 0x4000;
  *DAT_00405bc8 = 0x1d2;
  *DAT_00405bcc = 0x4000;
  do {
  } while (-1 < *DAT_00405bd0 << 0x11);
  FUN_004024c6(0x34);
  FUN_0040605c(DAT_00405bd4,2,0xc000);
  FUN_00406092(DAT_00405bd4,2,10);
  return unaff_r7;
}



//==== FUNC FUN_00404f3a @ 00404f3a ====

void FUN_00404f3a(int param_1)

{
  int iVar1;
  
  param_1 = param_1 * 1000;
  FUN_0040607a(DAT_00405bd4,2);
  while (param_1 != 0) {
    iVar1 = FUN_004060c2(DAT_00405bd4,2);
    if (iVar1 << 0x1b < 0) {
      param_1 = param_1 + -1;
    }
    if (-1 < iVar1 << 0xf) {
      FUN_0040607a(DAT_00405bd4,2);
    }
  }
  FUN_00406086(DAT_00405bd4,2);
  return;
}



//==== FUNC FUN_00404f94 @ 00404f94 ====

void FUN_00404f94(int param_1)

{
  int iVar1;
  
  FUN_0040607a(DAT_00405bd4,2);
  while (param_1 != 0) {
    iVar1 = FUN_004060c2(DAT_00405bd4,2);
    if (iVar1 << 0x1b < 0) {
      param_1 = param_1 + -1;
    }
    if (-1 < iVar1 << 0xf) {
      FUN_0040607a(DAT_00405bd4,2);
    }
  }
  FUN_00406086(DAT_00405bd4,2);
  return;
}



//==== FUNC FUN_00404fe2 @ 00404fe2 ====

undefined8 FUN_00404fe2(undefined4 param_1,char param_2)

{
  int iVar1;
  uint local_18;
  undefined4 uStack_14;
  
  FUN_004022ca(0);
  FUN_004027cc();
  FUN_004060fe();
  FUN_00404a7e();
  FUN_0040601a(0x44,1,0);
  FUN_00404ad0();
  FUN_00404eee();
  FUN_004062e6();
  FUN_004062ac();
  FUN_00406ddc();
  FUN_00406e64();
  if (param_2 != '\0') {
    FUN_00406e46();
    for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
      for (iVar1 = 0; iVar1 < 400; iVar1 = iVar1 + 1) {
        FUN_00406e54(1);
        FUN_00404f94(0x6e);
        FUN_00406e54(0);
        FUN_00404f94(0x6e);
      }
      FUN_00404f3a(0x32);
    }
  }
  FUN_00407054();
  FUN_00407282(0x1c200);
  FUN_00407460(1);
  FUN_004073f6();
  FUN_004019c0();
  FUN_004077cc(0x18);
  FUN_00407854(1);
  return CONCAT44(uStack_14,local_18);
}



//==== FUNC FUN_004056c8 @ 004056c8 ====

undefined8 FUN_004056c8(int param_1,int param_2,int param_3,uint param_4)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar2 = 0;
  for (uVar4 = 0; uVar4 < param_4; uVar4 = uVar4 + 1) {
    uVar2 = *(int *)(param_3 + uVar4 * 4) + uVar2;
  }
  if ((uVar2 != 0) && (uVar2 < 0x1009)) {
    *(undefined *)(param_1 + 0x1038) = 0x55;
    *(undefined *)(param_1 + 0x1039) = 0xaa;
    *(undefined *)(param_1 + 0x103a) = *(undefined *)(param_1 + 0xe);
    *(undefined *)(param_1 + 0x103b) = *(undefined *)(param_1 + 0xd);
    *(char *)(param_1 + 0x103c) = (char)(uVar2 + 1 >> 8);
    *(char *)(param_1 + 0x103d) = (char)uVar2 + '\x01';
    *(undefined *)(param_1 + 0x103e) = *(undefined *)(param_1 + 0xf);
    iVar3 = param_1 + 0x103f;
    for (uVar4 = 0; uVar4 < param_4; uVar4 = uVar4 + 1) {
      local_2c = *(undefined4 *)(param_3 + uVar4 * 4);
      FUN_0040282c(iVar3,*(undefined4 *)(param_2 + uVar4 * 4),local_2c);
      iVar3 = iVar3 + *(int *)(param_3 + uVar4 * 4);
    }
    uVar1 = (**(code **)(param_1 + 0x20b0))(param_1,param_1 + 0x1038,uVar2 + 7);
    local_30 = CONCAT31(local_30._1_3_,uVar1);
    (**(code **)(param_1 + 0x20b0))(param_1,&local_30,1);
    *(undefined *)(param_1 + uVar2 + 0x103f) = (undefined)local_30;
    *(uint *)(param_1 + 0x1034) = uVar2 + 8;
  }
  (**(code **)(param_1 + 0x20c0))(param_1,1);
  return CONCAT44(local_2c,local_30);
}



//==== FUNC FUN_004057bc @ 004057bc ====

undefined8 FUN_004057bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  (**(code **)(param_1 + 0x20b8))(param_1,&uStack_14,&uStack_10,1);
  return CONCAT44(uStack_14,param_1);
}



//==== FUNC FUN_00405a80 @ 00405a80 ====

undefined4 FUN_00405a80(int param_1)

{
  (**(code **)(param_1 + 0x20b4))(param_1,&DAT_00405be0,2);
  return 1;
}



//==== FUNC FUN_00405a9a @ 00405a9a ====

undefined4 FUN_00405a9a(int param_1)

{
  (**(code **)(param_1 + 0x20b4))(param_1,&DAT_00405be4,2);
  return 1;
}



//==== FUNC FUN_00405ab4 @ 00405ab4 ====

undefined4 FUN_00405ab4(int param_1)

{
  (**(code **)(param_1 + 0x20b4))(param_1,&DAT_00405be8,2);
  return 1;
}



//==== FUNC FUN_00405ace @ 00405ace ====

undefined4 FUN_00405ace(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00404bc6();
  if ((iVar1 != 7) && (iVar1 = FUN_00404bd2(7), iVar1 != 0)) {
    (**(code **)(param_1 + 0x20a0))(param_1);
  }
  (**(code **)(param_1 + 0x20b4))(param_1,&LAB_00405bec,2);
  return 1;
}



//==== FUNC FUN_00405b04 @ 00405b04 ====

void FUN_00405b04(void)

{
  FUN_00408f9c(*DAT_00405ed0);
  FUN_00408fbc();
  return;
}



//==== FUNC FUN_00405f04 @ 00405f04 ====

uint FUN_00405f04(uint param_1)

{
  return param_1 >> 5;
}



//==== FUNC FUN_00405f08 @ 00405f08 ====

int FUN_00405f08(int param_1)

{
  return param_1 * 0x200 + DAT_00405f14;
}



//==== FUNC FUN_00405f18 @ 00405f18 ====

void FUN_00405f18(undefined4 param_1)

{
  FUN_00405f04(param_1);
  FUN_00405f08();
  return;
}



//==== FUNC FUN_00405f28 @ 00405f28 ====

int FUN_00405f28(uint param_1)

{
  return 1 << (param_1 & 0x1f);
}



//==== FUNC FUN_00405f34 @ 00405f34 ====

undefined4 FUN_00405f34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00405f08(param_1);
  *puVar1 = param_2;
  return param_4;
}



//==== FUNC FUN_00405f44 @ 00405f44 ====

undefined4 FUN_00405f44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00405f28(param_1);
  uVar2 = FUN_00405f04(param_1);
  FUN_00405f34(uVar2,uVar1);
  return param_4;
}



//==== FUNC FUN_00405f5e @ 00405f5e ====

void FUN_00405f5e(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00405f18(param_1);
  if (param_2 == '\x01') {
    uVar2 = FUN_00405f28(param_1);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
  }
  else if (param_2 == '\0') {
    uVar2 = FUN_00405f28(param_1);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
  }
  uVar2 = FUN_00405f28(param_1);
  *(undefined4 *)(iVar1 + 0xa0) = uVar2;
  return;
}



//==== FUNC FUN_00405f96 @ 00405f96 ====

void FUN_00405f96(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00405f18(param_1);
  if (param_2 == '\0') {
    uVar2 = FUN_00405f28(param_1);
    *(undefined4 *)(iVar1 + 0x34) = uVar2;
  }
  else {
    uVar2 = FUN_00405f28(param_1);
    *(undefined4 *)(iVar1 + 0x30) = uVar2;
  }
  return;
}



//==== FUNC FUN_00405fbe @ 00405fbe ====

undefined8 FUN_00405fbe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_00405f18(param_1);
  uVar3 = *(uint *)(iVar1 + 0x3c);
  uVar2 = FUN_00405f28(param_1);
  return CONCAT44(param_4,(uint)((uVar3 & uVar2) != 0));
}



//==== FUNC FUN_00405fde @ 00405fde ====

void FUN_00405fde(undefined4 param_1)

{
  FUN_00405f44(param_1);
  return;
}



//==== FUNC FUN_00405fea @ 00405fea ====

undefined4 FUN_00405fea(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00405f5e(param_1,(int)param_2);
  return param_4;
}



//==== FUNC FUN_00405ffc @ 00405ffc ====

undefined4 FUN_00405ffc(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00405f96(param_1,param_2);
  return param_4;
}



//==== FUNC FUN_0040600e @ 0040600e ====

void FUN_0040600e(undefined4 param_1)

{
  FUN_00405fbe(param_1);
  return;
}



//==== FUNC FUN_0040601a @ 0040601a ====

void FUN_0040601a(undefined4 param_1,char param_2,undefined param_3)

{
  FUN_00405fde(param_1);
  FUN_00405fea(param_1,(int)param_2);
  FUN_00405ffc(param_1,param_3);
  return;
}



//==== FUNC FUN_0040603e @ 0040603e ====

void FUN_0040603e(undefined4 param_1)

{
  FUN_0040600e(param_1);
  return;
}



//==== FUNC FUN_0040604a @ 0040604a ====

undefined4 FUN_0040604a(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00405ffc(param_1,param_2);
  return param_4;
}



//==== FUNC FUN_0040605c @ 0040605c ====

void FUN_0040605c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x40 + param_1);
  *puVar1 = 2;
  puVar1[10] = 0xffffffff;
  puVar1[1] = param_3;
  return;
}



//==== FUNC FUN_0040607a @ 0040607a ====

void FUN_0040607a(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + param_2 * 0x40) = 5;
  return;
}



//==== FUNC FUN_00406086 @ 00406086 ====

void FUN_00406086(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + param_2 * 0x40) = 2;
  return;
}



//==== FUNC FUN_00406092 @ 00406092 ====

void FUN_00406092(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 0x40 + param_1 + 0x1c) = param_3;
  return;
}



//==== FUNC FUN_0040609e @ 0040609e ====

void FUN_0040609e(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 0x40 + param_1 + 0x24) = param_3;
  return;
}



//==== FUNC FUN_004060b0 @ 004060b0 ====

void FUN_004060b0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 0x40 + param_1 + 0x28) = param_3;
  return;
}



//==== FUNC FUN_004060c2 @ 004060c2 ====

undefined4 FUN_004060c2(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x40 + param_1 + 0x20);
}



//==== FUNC FUN_004060d4 @ 004060d4 ====

void FUN_004060d4(void)

{
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  *DAT_0040611c = *DAT_0040611c & 0xfffffffe;
  *DAT_00406120 = *DAT_00406120 & 0xfffffffe;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return;
}



//==== FUNC FUN_004060fe @ 004060fe ====

undefined4 FUN_004060fe(void)

{
  undefined4 unaff_r7;
  
  *DAT_00406124 = 0x8000;
  *DAT_0040612c = DAT_00406128;
  *DAT_0040612c = DAT_00406130;
  FUN_004060d4();
  return unaff_r7;
}



//==== FUNC thunk_EXT_FUN_20402278 @ 00406134 ====

void thunk_EXT_FUN_20402278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00406138)();
  return;
}



//==== FUNC FUN_0040613c @ 0040613c ====

undefined4 FUN_0040613c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 32000;
  }
  else if (param_1 == 2) {
    uVar1 = 0x8000;
  }
  else if (param_1 < 2) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = DAT_00406db4;
    if ((((param_1 != 4) && (uVar1 = DAT_00406db0, 3 < param_1)) &&
        (uVar1 = DAT_00406db8, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_0040618e @ 0040618e ====

undefined8 FUN_0040618e(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0040613c(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_004061a2 @ 004061a2 ====

undefined8 FUN_004061a2(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_0040618e();
  return CONCAT44(unaff_r7,uVar1 / 1);
}



//==== FUNC FUN_004061b0 @ 004061b0 ====

undefined8 FUN_004061b0(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_0040618e();
  return CONCAT44(unaff_r7,uVar1 >> 1);
}



//==== FUNC FUN_004061ba @ 004061ba ====

uint FUN_004061ba(uint param_1)

{
  return param_1 >> 5;
}



//==== FUNC FUN_004061be @ 004061be ====

int FUN_004061be(int param_1)

{
  return param_1 * 0x200 + DAT_00406dbc;
}



//==== FUNC FUN_004061cc @ 004061cc ====

int FUN_004061cc(uint param_1)

{
  return 1 << (param_1 & 0x1f);
}



//==== FUNC FUN_004061d8 @ 004061d8 ====

undefined4 FUN_004061d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004061be(param_1);
  *(undefined4 *)(iVar1 + 4) = param_2;
  return param_4;
}



//==== FUNC FUN_004061e8 @ 004061e8 ====

undefined4 FUN_004061e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004061cc(param_1);
  uVar2 = FUN_004061ba(param_1);
  FUN_004061d8(uVar2,uVar1);
  return param_4;
}



//==== FUNC FUN_00406202 @ 00406202 ====

void FUN_00406202(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_004061be(param_1);
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



//==== FUNC FUN_00406272 @ 00406272 ====

void FUN_00406272(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004061cc(param_1);
  uVar2 = FUN_004061ba(param_1);
  FUN_00406202(uVar2,uVar1,param_2);
  return;
}



//==== FUNC FUN_00406290 @ 00406290 ====

void FUN_00406290(undefined4 param_1)

{
  FUN_004061e8(param_1);
  return;
}



//==== FUNC FUN_0040629c @ 0040629c ====

undefined4 FUN_0040629c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00406272(param_1,param_2);
  return param_4;
}



//==== FUNC FUN_004062ac @ 004062ac ====

undefined4 FUN_004062ac(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    iVar1 = FUN_00406856(1);
    if (iVar1 == 0) {
      return in_r3;
    }
    if (((iVar1 == 1) && (iVar1 = FUN_004063f4(), iVar1 != 0)) &&
       (iVar1 = FUN_004067d0(1), iVar1 != 0)) break;
  }
  if (iVar2 != 3) {
    return in_r3;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC FUN_004062e6 @ 004062e6 ====

undefined8 FUN_004062e6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_18 = param_2;
  local_14 = param_3;
  uStack_10 = param_4;
  FUN_0040629c(3,0);
  FUN_00406290(3);
  FUN_00409216(3,0);
  FUN_0040629c(4,0);
  FUN_00406290(4);
  FUN_00409216(4,0);
  FUN_004024c6(0x13);
  local_18 = FUN_004061b0();
  local_14 = DAT_00406dc0;
  iVar2 = 10;
  do {
    iVar1 = FUN_00409372(DAT_00406dc4,&local_18);
    iVar2 = iVar2 + -1;
    if (iVar1 == 0) break;
  } while (iVar2 != 0);
  return CONCAT44(local_14,local_18);
}



//==== FUNC FUN_00406346 @ 00406346 ====

undefined8 FUN_00406346(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_10;
  
  local_10 = 0;
  FUN_004063d0();
  FUN_004062e6();
  bVar2 = FUN_00406510(DAT_00406dc4,4,&local_10);
  if (bVar2 != 0) {
    uVar3 = (uint)bVar2;
    goto LAB_004063ce;
  }
  if ((char)local_10 == '\x04') {
    if (local_10._1_1_ == '\x11') {
      if (local_10._2_1_ == '3') {
        uVar3 = 0;
        if (local_10._3_1_ == 'C') goto LAB_004063a2;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
LAB_004063a2:
  if (uVar3 != 0) {
    uVar4 = FUN_004061a2();
    lVar1 = (ulonglong)uVar4 * 100 + 0x172b;
    FUN_004095cc((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0x172c,0);
    thunk_EXT_FUN_20402278();
  }
LAB_004063ce:
  return CONCAT44(local_10,uVar3);
}



//==== FUNC FUN_004063d0 @ 004063d0 ====

undefined4 FUN_004063d0(void)

{
  undefined4 unaff_r7;
  
  FUN_0040601a(3,1,0);
  FUN_00404f94(200);
  FUN_0040601a(3,1,1);
  FUN_00404f3a(10);
  return unaff_r7;
}



//==== FUNC FUN_004063f4 @ 004063f4 ====

undefined4 FUN_004063f4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  uVar2 = 0;
  while( true ) {
    if (7 < (uVar2 & 0xff)) {
      return 1;
    }
    iVar1 = FUN_0040655c(0x12,0,(uVar2 & 0xff) + 5,4,local_14,0,0,0,0,0x27,DAT_00406dcc,0x23,
                         DAT_00406dc8);
    if (iVar1 != 0) break;
    if ((*DAT_00406dc8 != '\x04') || (DAT_00406dc8[1] != '\0')) {
      return 0;
    }
    uVar2 = (uVar2 & 0xff) + 1;
  }
  return 0;
}



//==== FUNC FUN_0040646c @ 0040646c ====

void FUN_0040646c(byte param_1,int param_2,undefined *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  for (uVar2 = 0; (uVar2 & 0xff) < (uint)param_1; uVar2 = uVar2 + 1) {
    for (uVar4 = 1; uVar4 = uVar4 & 0xff, uVar4 != 0; uVar4 = uVar4 << 1) {
      uVar2 = uVar2 & 0xff;
      uVar1 = uVar3 & 0xffff;
      uVar3 = uVar3 << 1;
      if (uVar1 >> 0xf != (uint)((*(byte *)(param_2 + uVar2) & uVar4) != 0)) {
        uVar3 = uVar3 ^ 0x8005;
      }
    }
  }
  *param_3 = (char)uVar3;
  param_3[1] = (char)(uVar3 >> 8);
  return;
}



//==== FUNC FUN_004064d6 @ 004064d6 ====

undefined8 FUN_004064d6(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  undefined4 local_10;
  
  bVar1 = *param_1 - 2;
  local_10 = param_4;
  FUN_0040646c(*param_1 + -2,param_1,&local_10);
  if (((local_10 & 0xff) == (uint)(byte)param_1[bVar1]) && (local_10._1_1_ == param_1[bVar1 + 1])) {
    bVar1 = 0;
  }
  else {
    bVar1 = 0xe5;
  }
  return CONCAT44(local_10,(uint)bVar1);
}



//==== FUNC FUN_00406510 @ 00406510 ====

bool FUN_00406510(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined local_28;
  undefined local_27;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  undefined local_18;
  
  for (iVar1 = 0; iVar1 < (int)(param_2 & 0xff); iVar1 = iVar1 + 1) {
    *(undefined *)(param_3 + iVar1) = 0;
    param_2 = param_2 & 0xff;
  }
  local_18 = 0xe4;
  local_28 = 0;
  local_27 = 0;
  local_24 = 0;
  local_1c = param_2 & 0xff;
  local_20 = param_3;
  iVar1 = FUN_00409476(param_1,&local_28);
  return iVar1 != 0;
}



//==== FUNC FUN_0040655c @ 0040655c ====

ulonglong FUN_0040655c(char param_1,byte param_2,undefined2 param_3,byte param_4,undefined4 param_5,
                      byte param_6,undefined4 param_7,byte param_8,undefined4 param_9,
                      undefined4 param_10,undefined *param_11,undefined param_12,undefined4 param_13
                      )

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined local_2c;
  undefined local_2b;
  
  if (param_1 == '\x02') {
    local_2b = 10;
    local_2c = 3;
    if ((int)((uint)param_2 << 0x18) < 0) {
      param_12 = 0x23;
    }
    else {
      param_12 = 7;
    }
  }
  else if (param_1 == '\x12') {
    local_2b = 0x32;
    local_2c = 0x26;
    param_12 = 4;
  }
  else if (param_1 == '\x17') {
    local_2b = 0x32;
    local_2c = 0x13;
    param_12 = 4;
  }
  else {
    local_2b = 0;
    local_2c = 0x46;
  }
  cVar1 = param_8 + param_6 + param_4;
  *param_11 = 3;
  param_11[1] = cVar1 + '\a';
  param_11[2] = param_1;
  param_11[3] = param_2;
  param_11[4] = (char)param_3;
  param_11[5] = (char)((ushort)param_3 >> 8);
  puVar3 = param_11 + 6;
  if (param_4 != 0) {
    FUN_0040282c(puVar3,param_5,param_4);
    puVar3 = puVar3 + param_4;
  }
  if (param_6 != 0) {
    FUN_0040282c(puVar3,param_7,param_6);
    puVar3 = puVar3 + param_6;
  }
  if (param_8 != 0) {
    FUN_0040282c(puVar3,param_9,param_8);
    puVar3 = puVar3 + param_8;
  }
  FUN_0040646c(cVar1 + '\x05',param_11 + 1,puVar3);
  bVar2 = FUN_004066a4(param_11,param_12,param_13,local_2b);
  return (ulonglong)CONCAT14(local_2c,(uint)bVar2);
}



//==== FUNC FUN_004066a4 @ 004066a4 ====

char FUN_004066a4(int param_1,byte param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  char local_47;
  ushort local_46;
  undefined local_44;
  undefined local_43;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  undefined local_34;
  int local_2c;
  uint local_28;
  
  cVar2 = -0x20;
  local_34 = 0xe4;
  local_44 = 0;
  local_43 = 0;
  local_40 = 0;
  local_38 = (uint)(byte)(*(char *)(param_1 + 1) + 1);
  local_3c = param_1;
  local_2c = param_1;
  local_28 = param_4;
  cVar3 = '\x06';
  do {
    while( true ) {
      cVar4 = cVar3 + -1;
      if ((cVar3 == '\0') || (cVar2 == '\0')) {
        return cVar2;
      }
      cVar2 = FUN_00409522(DAT_00406dc4,&local_44);
      cVar3 = cVar4;
      if (cVar2 == '\0') break;
      FUN_00406346();
    }
    FUN_00404f3a(local_28 & 0xff);
    cVar4 = '\x01';
    do {
      cVar5 = cVar4 + -1;
      if (cVar4 == '\0') break;
      for (uVar6 = 0; (uVar6 & 0xff) < (uint)param_2; uVar6 = (uVar6 & 0xff) + 1) {
        param_3[uVar6 & 0xff] = 0;
      }
      local_46 = 6;
      do {
        cVar2 = FUN_00406510(DAT_00406dc4,param_2,param_3);
        local_46 = local_46 - 0x25;
        if (local_46 < 0x26) break;
      } while (cVar2 != '\0');
      cVar2 = FUN_004064d6(param_3);
      if (cVar2 == '\0') {
        if (4 < *param_3) {
          return '\0';
        }
        bVar1 = param_3[1];
        if (bVar1 == 3) {
          return -0x2e;
        }
        if (bVar1 == 0xf) {
          return -0x2d;
        }
        if (bVar1 != 0xff) {
          return '\0';
        }
        cVar2 = -0x2c;
        break;
      }
      cVar4 = cVar5;
    } while ((local_47 == '\0') || (local_47 != -0x18));
  } while( true );
}



//==== FUNC FUN_004067d0 @ 004067d0 ====

undefined4 FUN_004067d0(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined uVar3;
  
  uVar3 = 0;
  if (param_1 == '\x01') {
    uVar3 = 0x80;
  }
  else if (param_1 == '\x02') {
    uVar3 = 0x81;
  }
  iVar1 = FUN_0040655c(0x17,uVar3,0,0,0,0,0,0,0,0x27,DAT_00406dcc,0x23,DAT_00406dc8);
  if (iVar1 == 0) {
    if (*(char *)(DAT_00406dc8 + 1) == '\0') {
      iVar1 = FUN_00406856(param_1);
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



//==== FUNC FUN_00406856 @ 00406856 ====

undefined4 FUN_00406856(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0040655c(2,0,0x15,0,0,0,0,0,0,0x27,DAT_00406dcc,0x23,DAT_00406dc8);
  if (iVar1 == 0) {
    if (*DAT_00406dc8 == '\a') {
      if ((param_1 == '\x01') && (DAT_00406dc8[4] == '\0')) {
        uVar2 = 0;
      }
      else if ((param_1 == '\x01') && (DAT_00406dc8[4] == 'U')) {
        uVar2 = 1;
      }
      else if ((param_1 == '\x02') && (DAT_00406dc8[3] == '\0')) {
        uVar2 = 0;
      }
      else if ((param_1 == '\x02') && (DAT_00406dc8[4] == 'U')) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



//==== FUNC FUN_004068fe @ 004068fe ====

undefined4 FUN_004068fe(uint param_1,undefined *param_2,ushort param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  
  if ((param_3 < 0x201) && (param_3 != 0)) {
    if ((param_1 & 0xffff) + (uint)param_3 < 0x201) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      iVar5 = FUN_0040655c(0x12,0x82,0,0x20,param_2,0,0,0,0,0x27,DAT_00406dcc,0x23,DAT_00406dc8);
      if (iVar5 == 0) {
        puVar7 = param_2 + CONCAT11(uVar1,uVar2) + 2;
        uVar3 = *puVar7;
        uVar1 = param_2[CONCAT11(uVar1,uVar2) + 3];
        iVar5 = FUN_0040655c(0x12,0x82,8,0x20,puVar7,0,0,0,0,0x27,DAT_00406dcc,0x23,DAT_00406dc8);
        if (iVar5 == 0) {
          puVar8 = puVar7 + CONCAT11(uVar3,uVar1) + 2;
          uVar2 = *puVar8;
          uVar1 = puVar7[CONCAT11(uVar3,uVar1) + 3];
          iVar5 = FUN_0040655c(0x12,0x82,0x10,0x20,puVar8,0,0,0,0,0x27,DAT_00406dcc,0x23,
                               DAT_00406dc8);
          if (iVar5 == 0) {
            puVar7 = puVar8 + CONCAT11(uVar2,uVar1) + 2;
            uVar6 = CONCAT11(*puVar7,puVar8[CONCAT11(uVar2,uVar1) + 3]) / 0x20;
            if ((uint)CONCAT11(*puVar7,puVar8[CONCAT11(uVar2,uVar1) + 3]) % 0x20 != 0) {
              uVar6 = uVar6 + 1;
            }
            for (uVar9 = 0; (uVar9 & 0xff) < (uVar6 & 0xff); uVar9 = (uVar9 & 0xff) + 1) {
              iVar5 = FUN_0040655c(0x12,0x82,((uVar9 & 0xff) + 3) * 8,0x20,puVar7,0,0,0,0,0x27,
                                   DAT_00406dcc,0x23,DAT_00406dc8);
              if (iVar5 != 0) {
                return 0;
              }
              puVar7 = puVar7 + 0x20;
            }
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



//==== FUNC FUN_00406aac @ 00406aac ====

undefined4 FUN_00406aac(undefined4 param_1,ushort param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 < 0x201) && (param_2 != 0)) {
    iVar2 = FUN_0040655c(0x12,0x82,0x50,0x20,param_1,0,0,0,0,0x27,DAT_00406dcc,0x23,DAT_00406dc8);
    if (iVar2 == 0) {
      iVar2 = FUN_004067d0(2);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
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



//==== FUNC FUN_00406b14 @ 00406b14 ====

undefined4 FUN_00406b14(char param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < '\x05') {
    iVar2 = FUN_0040655c(2,2,((int)param_1 & 0x1fffU) << 3,0,0,0,0,0,0,0x27,DAT_00406dcc,0x23,
                         DAT_00406dc8);
    if (iVar2 == 0) {
      *param_2 = CONCAT11(*(undefined *)(DAT_00406dc8 + 1),*(undefined *)(DAT_00406dc8 + 2));
      uVar1 = 1;
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



//==== FUNC FUN_00406b78 @ 00406b78 ====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ushort FUN_00406b78(char param_1,int param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_30 = *DAT_00406dd0;
  uStack_2c = DAT_00406dd0[1];
  if (param_1 < '\x05') {
    if (param_1 < '\x03') {
      iVar1 = FUN_0040655c(2,0x82,((int)param_1 & 0x1fffU) << 3,0,0,0,0,0,0,0x27,DAT_00406dcc,0x23,
                           DAT_00406dc8);
      if (iVar1 == 0) {
        uVar3 = CONCAT11(*(undefined *)(DAT_00406dc8 + 1),*(undefined *)(DAT_00406dc8 + 2));
        if (uVar3 == *(byte *)((int)&local_30 + (int)param_1)) {
          if (param_3 < uVar3) {
            uVar3 = param_3;
          }
          FUN_0040282c(param_2,DAT_00406dd4,uVar3);
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else if (param_1 == '\x04') {
      iVar1 = FUN_0040655c(2,0x82,0x50,0,0,0,0,0,0,0x27,DAT_00406dcc,0x23,DAT_00406dc8);
      if (iVar1 == 0) {
        uVar3 = CONCAT11(*(undefined *)(DAT_00406dc8 + 1),*(undefined *)(DAT_00406dc8 + 2));
        if (uVar3 == (byte)uStack_2c) {
          if (param_3 < uVar3) {
            uVar3 = param_3;
          }
          FUN_0040282c(param_2,DAT_00406dd4,uVar3);
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else if (param_1 == '\x03') {
      iVar1 = FUN_0040655c(2,0x82,0x18,0,0,0,0,0,0,0x27,DAT_00406dcc,0x23,DAT_00406dc8);
      if (iVar1 == 0) {
        uVar3 = CONCAT11(*(undefined *)(DAT_00406dc8 + 1),*(undefined *)(DAT_00406dc8 + 2));
        if (uVar3 == local_30._3_1_) {
          if (param_3 < uVar3) {
            uVar3 = param_3;
          }
          FUN_0040282c(param_2,DAT_00406dd4,0x1e);
          for (iVar1 = 1; iVar1 < 7; iVar1 = iVar1 + 1) {
            iVar2 = FUN_0040655c(2,0x82,(iVar1 + 3) * 8 & 0xffff,0,0,0,0,0,0,0x27,DAT_00406dcc,0x23,
                                 DAT_00406dc8);
            if (iVar2 != 0) {
              return 0;
            }
            FUN_0040282c(iVar1 * 0x20 + param_2 + -2,DAT_00406dd8,0x20);
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



//==== FUNC FUN_00406ddc @ 00406ddc ====

undefined4 FUN_00406ddc(void)

{
  undefined4 unaff_r7;
  
  FUN_0040601a(0x1c,1,1);
  FUN_0040601a(0x48,1,1);
  FUN_0040601a(0x49,1,0);
  FUN_0040601a(0x4a,1,1);
  return unaff_r7;
}



//==== FUNC FUN_00406e1c @ 00406e1c ====

void FUN_00406e1c(byte param_1)

{
  *(int *)(DAT_00406eb8 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_00406e30 @ 00406e30 ====

undefined4 FUN_00406e30(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 == 0x10) && (param_2 == 0x10000000)) {
    FUN_0040975c();
  }
  return param_4;
}



//==== FUNC FUN_00406e46 @ 00406e46 ====

undefined4 FUN_00406e46(void)

{
  undefined4 unaff_r7;
  
  FUN_0040601a(0x6c,1,0);
  return unaff_r7;
}



//==== FUNC FUN_00406e54 @ 00406e54 ====

void FUN_00406e54(undefined param_1)

{
  FUN_0040604a(0x6c,param_1);
  return;
}



//==== FUNC FUN_00406e64 @ 00406e64 ====

undefined4 FUN_00406e64(void)

{
  undefined4 uVar1;
  
  FUN_0040601a(0x7c,0,0);
  FUN_004024c6(0x10);
  FUN_004090a8(DAT_00406ebc,0x10000000,10);
  uVar1 = DAT_00406ec0;
  FUN_00409890(DAT_00406ebc,0x10,0x10000000,0x49);
  FUN_00406e1c(0x10);
  *(undefined4 *)(DAT_00406ebc + 0x40) = 0x10000000;
  return uVar1;
}



//==== FUNC FUN_00406ea6 @ 00406ea6 ====

undefined8 FUN_00406ea6(void)

{
  byte bVar1;
  undefined4 unaff_r7;
  
  bVar1 = FUN_0040603e(0x7c);
  *DAT_00406ec4 = bVar1;
  return CONCAT44(unaff_r7,(uint)*DAT_00406ec4);
}



//==== FUNC FUN_00406ec8 @ 00406ec8 ====

void FUN_00406ec8(void)

{
  return;
}



//==== FUNC FUN_00406ed4 @ 00406ed4 ====

void FUN_00406ed4(int param_1,byte param_2)

{
  uint uVar1;
  
  if (param_2 == 0xff) {
    uVar1 = *(uint *)(param_1 + 4) | 0x80;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4) & 0xffffff70 | (uint)param_2;
  }
  *(uint *)(param_1 + 4) = uVar1;
  return;
}



//==== FUNC FUN_00406ef0 @ 00406ef0 ====

void FUN_00406ef0(undefined4 *param_1)

{
  *param_1 = 2;
  return;
}



//==== FUNC FUN_00406ef6 @ 00406ef6 ====

undefined4 FUN_00406ef6(int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 != 0xfff) {
    FUN_00406ec8(param_1,(int)param_2);
  }
  if ((int)param_2 == 0xfff) {
    iVar1 = 0xfff;
  }
  else {
    iVar1 = 1 << ((int)param_2 & 0xffU);
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return param_4;
}



//==== FUNC FUN_00406f28 @ 00406f28 ====

undefined8 FUN_00406f28(int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00406ec8(param_1,(int)param_2);
  *(int *)(param_1 + 100) = (int)param_2;
  return CONCAT44(param_4,*(undefined4 *)(param_1 + 0x68));
}



//==== FUNC FUN_00406f40 @ 00406f40 ====

void FUN_00406f40(int param_1,short param_2,uint param_3)

{
  FUN_00406ec8(param_1,(int)param_2);
  *(int *)(param_1 + 100) = (int)param_2;
  *(uint *)(param_1 + 0x6c) = param_3 & 0xfff;
  return;
}



//==== FUNC FUN_00406f60 @ 00406f60 ====

uint FUN_00406f60(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 3) {
    uVar1 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar1 = uVar2;
    uVar4 = uVar2;
    for (uVar3 = 1; uVar3 < param_2; uVar3 = uVar3 + 1) {
      uVar4 = param_1[uVar3] + uVar4;
      if (param_1[uVar3] < uVar2) {
        uVar2 = param_1[uVar3];
      }
      if (uVar1 < param_1[uVar3]) {
        uVar1 = param_1[uVar3];
      }
    }
    uVar1 = ((uVar4 - uVar2) - uVar1) / (param_2 - 2);
  }
  return uVar1;
}



//==== FUNC FUN_00406fb0 @ 00406fb0 ====

int FUN_00406fb0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_28 [5];
  
  FUN_00409974(local_28,0x14);
  FUN_00406ef0(DAT_004070a8);
  FUN_00404f3a(1);
  for (uVar3 = 0; (uVar3 & 0xff) < 5; uVar3 = (uVar3 & 0xff) + 1) {
    uVar1 = FUN_00406f28(DAT_004070a8,0xb);
    local_28[uVar3 & 0xff] = uVar1;
  }
  iVar2 = FUN_00406f60(local_28,5);
  uVar3 = ((uint)(iVar2 * 0xca8) >> 0xc) * 5;
  if (uVar3 < 0x2135) {
    uVar3 = uVar3 - 1000;
  }
  else if (uVar3 < 0x27d9) {
    uVar3 = uVar3 - 800;
  }
  else if (uVar3 < 0x2c89) {
    uVar3 = uVar3 - 500;
  }
  else if (uVar3 < 0x319d) {
    uVar3 = uVar3 - 300;
  }
  else if (14000 < uVar3) {
    uVar3 = uVar3 + 200;
  }
  return iVar2 + uVar3 * 0x10000;
}



//==== FUNC FUN_00407054 @ 00407054 ====

void FUN_00407054(void)

{
  undefined uStack_20;
  undefined local_1f;
  undefined auStack_1c [28];
  
  FUN_00409d10(DAT_004070a8);
  FUN_00409b96(auStack_1c);
  FUN_00409bcc(&uStack_20);
  FUN_00409bd6(DAT_004070a8,auStack_1c);
  FUN_00406f40(DAT_004070a8,0xb,0x200);
  local_1f = 0;
  FUN_00409b44(DAT_004070a8,0xb,&uStack_20);
  FUN_00406ed4(DAT_004070a8,0);
  FUN_00406ef6(DAT_004070a8,0xb);
  return;
}



//==== FUNC FUN_004070ac @ 004070ac ====

void FUN_004070ac(byte param_1)

{
  *(int *)(DAT_0040742c + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_004070c2 @ 004070c2 ====

void FUN_004070c2(byte param_1)

{
  *(int *)(DAT_00407430 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_004070d8 @ 004070d8 ====

void FUN_004070d8(char param_1,int param_2)

{
  if (param_1 < '\0') {
    *(char *)(DAT_00407434 + ((int)param_1 & 0xfU) + -4) = (char)(param_2 << 5);
  }
  else {
    *(char *)(DAT_00407438 + param_1) = (char)(param_2 << 5);
  }
  return;
}



//==== FUNC FUN_00407100 @ 00407100 ====

undefined4 FUN_00407100(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 32000;
  }
  else if (param_1 == 2) {
    uVar1 = 0x8000;
  }
  else if (param_1 < 2) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = DAT_00407440;
    if ((((param_1 != 4) && (uVar1 = DAT_0040743c, 3 < param_1)) &&
        (uVar1 = DAT_00407444, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_00407148 @ 00407148 ====

undefined8 FUN_00407148(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_00407100(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_0040715c @ 0040715c ====

undefined8 FUN_0040715c(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_00407148();
  return CONCAT44(unaff_r7,uVar1 >> 1);
}



//==== FUNC FUN_00407166 @ 00407166 ====

void FUN_00407166(undefined4 param_1)

{
  FUN_004024c6(param_1);
  return;
}



//==== FUNC FUN_00407172 @ 00407172 ====

uint FUN_00407172(uint param_1)

{
  return param_1 >> 5;
}



//==== FUNC FUN_00407176 @ 00407176 ====

int FUN_00407176(int param_1)

{
  return param_1 * 0x200 + DAT_00407448;
}



//==== FUNC FUN_00407182 @ 00407182 ====

int FUN_00407182(uint param_1)

{
  return 1 << (param_1 & 0x1f);
}



//==== FUNC FUN_0040718e @ 0040718e ====

undefined4 FUN_0040718e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00407176(param_1);
  *(undefined4 *)(iVar1 + 4) = param_2;
  return param_4;
}



//==== FUNC FUN_0040719e @ 0040719e ====

undefined4 FUN_0040719e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00407182(param_1);
  uVar2 = FUN_00407172(param_1);
  FUN_0040718e(uVar2,uVar1);
  return param_4;
}



//==== FUNC FUN_004071b8 @ 004071b8 ====

void FUN_004071b8(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_00407176(param_1);
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



//==== FUNC FUN_00407228 @ 00407228 ====

void FUN_00407228(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00407182(param_1);
  uVar2 = FUN_00407172(param_1);
  FUN_004071b8(uVar2,uVar1,param_2);
  return;
}



//==== FUNC FUN_00407246 @ 00407246 ====

void FUN_00407246(undefined4 param_1)

{
  FUN_0040719e(param_1);
  return;
}



//==== FUNC FUN_00407252 @ 00407252 ====

undefined4 FUN_00407252(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00407228(param_1,param_2);
  return param_4;
}



//==== FUNC FUN_00407262 @ 00407262 ====

undefined4 FUN_00407262(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0040744c;
  if ((param_1 != 0xd) &&
     ((param_1 < 0xd ||
      ((uVar1 = DAT_00407454, param_1 != 0xf && (uVar1 = DAT_00407450, 0xe < param_1)))))) {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_00407282 @ 00407282 ====

undefined4 FUN_00407282(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_00407252(0x15,0);
  FUN_00407246(0x15);
  FUN_00409216(0x15,0);
  *DAT_00407458 = *DAT_00407458 | 0x10;
  FUN_00407252(0x24,3);
  FUN_00407246(0x24);
  FUN_00409216(0x24,3);
  piVar1 = (int *)FUN_00407262(0xe);
  FUN_00409d2c(piVar1,0x203c,0);
  piVar1[7] = 0xe;
  piVar1[9] = 0;
  piVar1[1] = param_1;
  piVar1[2] = 0xc0;
  piVar1[3] = 0x800;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  *piVar1 = DAT_0040745c;
  *(undefined *)(piVar1 + 8) = 0xe;
  FUN_00407166(piVar1[7]);
  uVar2 = FUN_0040715c();
  FUN_00408a98(*piVar1,piVar1 + 1,uVar2);
  *(undefined4 *)(*piVar1 + 0xc) = 0xffffffff;
  *(undefined4 *)*piVar1 = 0x40;
  *(undefined4 *)*piVar1 = 0x10;
  FUN_004070c2((int)*(char *)(piVar1 + 8));
  FUN_004070d8((int)*(char *)(piVar1 + 8),piVar1[9]);
  FUN_004070ac((int)*(char *)(piVar1 + 8));
  *(undefined4 *)(*piVar1 + 8) = 1;
  FUN_0040601a(0xb,1,0);
  return param_4;
}



//==== FUNC FUN_00407358 @ 00407358 ====

undefined4 FUN_00407358(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00407262(0xe);
  iVar2 = FUN_00408b0c(*puVar1);
  if (iVar2 != 0) {
    FUN_00408b20(*puVar1,param_1);
    do {
      iVar2 = FUN_00408b16(*puVar1);
    } while (iVar2 == 0);
  }
  return param_4;
}



//==== FUNC FUN_00407382 @ 00407382 ====

void FUN_00407382(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    FUN_0040739a(*(undefined *)(param_1 + uVar1));
  }
  return;
}



//==== FUNC FUN_0040739a @ 0040739a ====

void FUN_0040739a(undefined param_1)

{
  FUN_00407358(param_1);
  return;
}



//==== FUNC FUN_004073a8 @ 004073a8 ====

undefined8 FUN_004073a8(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_20;
  
  local_20 = param_4;
  piVar1 = (int *)FUN_00407262(0xe);
  uVar2 = 0;
  do {
    do {
      iVar3 = param_3 + -1;
      if (param_3 == 0) goto LAB_004073f0;
      param_3 = iVar3;
    } while ((-1 < *(int *)(*piVar1 + 0x14) << 0x1f) ||
            (iVar3 = FUN_00408b36(*piVar1,&local_20), iVar3 != 0));
    *(char *)(param_1 + uVar2) = (char)local_20;
    uVar2 = uVar2 + 1;
  } while (uVar2 < param_2);
LAB_004073f0:
  return CONCAT44(local_20,uVar2);
}



//==== FUNC FUN_004073f6 @ 004073f6 ====

undefined4 FUN_004073f6(void)

{
  undefined4 unaff_r7;
  
  FUN_0040604a(0xb,1);
  return unaff_r7;
}



//==== FUNC FUN_00407402 @ 00407402 ====

uint FUN_00407402(void)

{
  uint uVar1;
  
  FUN_0040604a(0xb,0);
  for (uVar1 = 0; uVar1 < DAT_00407444; uVar1 = uVar1 + 1) {
  }
  FUN_0040604a(0xb,1);
  return uVar1;
}



//==== FUNC FUN_00407460 @ 00407460 ====

undefined4 FUN_00407460(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00407262(0xe);
  if (param_1 == '\0') {
    *(undefined4 *)(*piVar1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(*piVar1 + 8) = 1;
  }
  return param_4;
}



//==== FUNC FUN_00407486 @ 00407486 ====

undefined8 FUN_00407486(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 local_18;
  
  bVar4 = 0;
  local_18 = param_4;
  piVar1 = (int *)FUN_00407262(0xe);
  uVar2 = *(uint *)(*piVar1 + 0x14);
  if ((uVar2 & 0xe0) != 0) {
    FUN_00408afc(*piVar1);
  }
  if (((int)(uVar2 << 0x1f) < 0) && (iVar3 = FUN_00408b36(*piVar1,&local_18), iVar3 == 0)) {
    *param_1 = (char)local_18;
    bVar4 = 1;
  }
  return CONCAT44(local_18,(uint)bVar4);
}



//==== FUNC FUN_004074c6 @ 004074c6 ====

void FUN_004074c6(char param_1,int param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  byte local_80 [100];
  
  FUN_00409974(local_80,100);
  sVar1 = 0;
  uVar3 = 0;
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
  FUN_0040739a(0xaa);
  for (uVar2 = 1; (uVar2 & 0xffff) < 4; uVar2 = (uVar2 & 0xffff) + 1) {
    FUN_0040739a(local_80[uVar2 & 0xffff]);
    uVar3 = local_80[uVar2 & 0xffff] + uVar3;
  }
  if ((param_1 == '\b') || (param_1 == '\x11')) {
    FUN_0040739a(1);
    uVar3 = uVar3 + 1;
  }
  if (param_1 == '\x11') {
    FUN_0040739a(2);
    FUN_0040739a(1);
    FUN_0040739a(1);
    FUN_0040739a(param_3 + 1 & 0xff);
    FUN_0040739a(9);
    uVar3 = param_3 + 0xe + uVar3;
  }
  for (uVar2 = 0; (uVar2 & 0xffff) < (param_3 & 0xff); uVar2 = (uVar2 & 0xffff) + 1) {
    FUN_0040739a(*(undefined *)(param_2 + (uVar2 & 0xffff)));
    uVar3 = *(byte *)(param_2 + (uVar2 & 0xffff)) + uVar3;
  }
  FUN_0040739a(~(uVar3 & 0xff) + 1 & 0xff);
  return;
}



//==== FUNC FUN_004075c8 @ 004075c8 ====

void FUN_004075c8(byte param_1)

{
  *(int *)(DAT_00407890 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_004075dc @ 004075dc ====

void FUN_004075dc(byte param_1)

{
  *(int *)(DAT_00407894 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_004075f0 @ 004075f0 ====

void FUN_004075f0(byte param_1)

{
  *(int *)(DAT_00407898 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_00407604 @ 00407604 ====

void FUN_00407604(char param_1,int param_2)

{
  if (param_1 < '\0') {
    *(char *)(DAT_0040789c + ((int)param_1 & 0xfU) + -4) = (char)(param_2 << 5);
  }
  else {
    *(char *)(DAT_004078a0 + param_1) = (char)(param_2 << 5);
  }
  return;
}



//==== FUNC FUN_0040762a @ 0040762a ====

undefined4 FUN_0040762a(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_004078a4;
  if (((((param_1 != 0x17) && (uVar1 = DAT_004078a8, param_1 != 0x18)) &&
       (uVar1 = DAT_004078ac, param_1 != 0x19)) &&
      ((((uVar1 = DAT_004078b0, param_1 != 0x1a && (uVar1 = DAT_004078b4, param_1 != 0x1b)) &&
        ((uVar1 = DAT_004078b8, param_1 != 0x1c &&
         ((uVar1 = DAT_004078bc, param_1 != 0x2f && (uVar1 = DAT_004078c0, param_1 != 0x30)))))) &&
       (uVar1 = DAT_004078c4, param_1 != 0x31)))) &&
     (((uVar1 = DAT_004078c8, param_1 != 0x32 && (uVar1 = DAT_004078cc, param_1 != 0x33)) &&
      (uVar1 = DAT_004078d0, param_1 != 0x34)))) {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_00407694 @ 00407694 ====

undefined8 FUN_00407694(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0040762a(param_1);
  FUN_00409d2c(puVar1,0x24,0);
  puVar1[1] = param_1;
  puVar1[5] = 0xc;
  puVar1[6] = 0;
  puVar1[7] = 0xa2c3;
  puVar1[8] = 0x50;
  puVar1[4] = 1;
  if (param_1 == 0x17) {
    *puVar1 = DAT_004078d4;
    puVar1[2] = 0;
    *(undefined *)(puVar1 + 3) = 0x17;
  }
  else if (param_1 == 0x18) {
    *puVar1 = DAT_004078d4;
    puVar1[2] = 1;
    *(undefined *)(puVar1 + 3) = 0x18;
  }
  else if (param_1 == 0x19) {
    *puVar1 = DAT_004078d4;
    puVar1[2] = 2;
    *(undefined *)(puVar1 + 3) = 0x19;
  }
  else if (param_1 == 0x1a) {
    *puVar1 = DAT_004078d8;
    puVar1[2] = 0;
    *(undefined *)(puVar1 + 3) = 0x1a;
  }
  else if (param_1 == 0x1b) {
    *puVar1 = DAT_004078d8;
    puVar1[2] = 1;
    *(undefined *)(puVar1 + 3) = 0x1b;
  }
  else if (param_1 == 0x1c) {
    *puVar1 = DAT_004078d8;
    puVar1[2] = 2;
    *(undefined *)(puVar1 + 3) = 0x1c;
  }
  else if (param_1 == 0x2f) {
    *puVar1 = DAT_004078dc;
    puVar1[2] = 0;
    *(undefined *)(puVar1 + 3) = 0x2f;
  }
  else if (param_1 == 0x30) {
    *puVar1 = DAT_004078dc;
    puVar1[2] = 1;
    *(undefined *)(puVar1 + 3) = 0x30;
  }
  else if (param_1 == 0x31) {
    *puVar1 = DAT_004078dc;
    puVar1[2] = 2;
    *(undefined *)(puVar1 + 3) = 0x31;
  }
  else if (param_1 == 0x32) {
    *puVar1 = DAT_004078e0;
    puVar1[2] = 0;
    *(undefined *)(puVar1 + 3) = 0x32;
  }
  else if (param_1 == 0x33) {
    *puVar1 = DAT_004078e0;
    puVar1[2] = 1;
    *(undefined *)(puVar1 + 3) = 0x33;
  }
  else if (param_1 == 0x34) {
    *puVar1 = DAT_004078e0;
    puVar1[2] = 2;
    *(undefined *)(puVar1 + 3) = 0x34;
  }
  return CONCAT44(param_4,puVar1);
}



//==== FUNC FUN_004077a4 @ 004077a4 ====

void FUN_004077a4(undefined4 param_1,char param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0040762a(param_1);
  if (param_2 == '\0') {
    FUN_00406086(*puVar1,puVar1[2]);
  }
  else {
    FUN_0040607a(*puVar1,puVar1[2]);
  }
  return;
}



//==== FUNC FUN_004077cc @ 004077cc ====

undefined4 FUN_004077cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00407694(param_1);
  FUN_004024c6(puVar1[1]);
  puVar1[6] = 2;
  FUN_0040605c(*puVar1,puVar1[2],puVar1[6] | 0x4000);
  FUN_00406092(*puVar1,puVar1[2],0xb71b);
  FUN_004075dc((int)*(char *)(puVar1 + 3));
  FUN_004075f0((int)*(char *)(puVar1 + 3));
  FUN_00407604((int)*(char *)(puVar1 + 3),puVar1[4]);
  FUN_004075c8((int)*(char *)(puVar1 + 3));
  FUN_004060b0(*puVar1,puVar1[2],0xffffffff);
  FUN_0040609e(*puVar1,puVar1[2],0x10);
  FUN_004077a4(puVar1[1],1);
  return param_4;
}



//==== FUNC FUN_0040783e @ 0040783e ====

undefined8 FUN_0040783e(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_004060c2(DAT_004078d4,1);
  return CONCAT44(unaff_r7,(uint)(iVar1 << 0x1b < 0));
}



//==== FUNC FUN_00407854 @ 00407854 ====

void FUN_00407854(char param_1)

{
  if (param_1 == '\0') {
    FUN_004077a4(0x18,0);
    FUN_004060b0(DAT_004078d4,1,0x10);
  }
  else {
    FUN_004060c2(DAT_004078d4,1);
    FUN_004077a4(0x18,1);
    FUN_0040609e(DAT_004078d4,1,0x10);
  }
  return;
}



//==== FUNC FUN_004078e4 @ 004078e4 ====

undefined4 FUN_004078e4(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 32000;
  }
  else if (param_1 == 2) {
    uVar1 = 0x8000;
  }
  else if (param_1 < 2) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = DAT_00408640;
    if ((((param_1 != 4) && (uVar1 = DAT_0040863c, 3 < param_1)) &&
        (uVar1 = DAT_0040869c, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_00407936 @ 00407936 ====

undefined8 FUN_00407936(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_004078e4(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_0040794a @ 0040794a ====

undefined8 FUN_0040794a(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_00407936();
  return CONCAT44(unaff_r7,uVar1 / 1);
}



//==== FUNC FUN_00407958 @ 00407958 ====

undefined4 FUN_00407958(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char local_30 [4];
  undefined4 local_2c;
  undefined auStack_28 [16];
  undefined4 local_18 [3];
  
  uVar2 = DAT_004086a4;
  local_18[0] = *DAT_004086a0;
  local_18[1] = DAT_004086a0[1];
  local_18[2] = DAT_004086a0[2];
  local_2c = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  iVar3 = FUN_00406b78(0,auStack_28,0xd);
  if (iVar3 != 0) {
    for (uVar5 = 0; (uVar5 & 0xff) < 3; uVar5 = (uVar5 & 0xff) + 1) {
      uVar4 = FUN_00409d94(local_18[uVar5 & 0xff]);
      iVar3 = FUN_00409dcc(auStack_28,local_18[uVar5 & 0xff],uVar4);
      if (iVar3 == 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          enableIRQinterrupts(0);
        }
        return 1;
      }
    }
    iVar3 = FUN_00406b78(4,local_30,3);
    if (iVar3 != 0) {
      if (local_30[0] == '1') {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          enableIRQinterrupts(0);
        }
        return 1;
      }
      uVar4 = FUN_00409d94(uVar2);
      iVar3 = FUN_00409dcc(auStack_28,uVar2,uVar4);
      if ((iVar3 == 0) && (iVar3 = FUN_00409dcc(local_30,&local_2c,3), iVar3 == 0)) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          enableIRQinterrupts(0);
        }
        return 2;
      }
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  return 0;
}



//==== FUNC FUN_00407a18 @ 00407a18 ====

bool FUN_00407a18(uint *param_1)

{
  return (undefined *)(*param_1 & 0x20c00000) == &DAT_20400000;
}



//==== FUNC FUN_00407a2e @ 00407a2e ====

void FUN_00407a2e(undefined4 *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(*param_1);
  }
  (*(code *)param_1[1])(*param_1);
  return;
}



//==== FUNC FUN_00407a4a @ 00407a4a ====

undefined4 FUN_00407a4a(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*DAT_004086a8 != '\0') {
    cVar1 = FUN_00407958();
    *DAT_00408830 = cVar1;
    if (*DAT_00408830 == '\x02') {
      return 1;
    }
    *DAT_004086a8 = '\0';
  }
  if (*(char *)(param_1 + 10) == '\0') {
    uVar2 = 0;
  }
  else if ((*DAT_00408830 == '\0') && (iVar3 = FUN_00404bc6(), iVar3 != 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



//==== FUNC FUN_00407a9c @ 00407a9c ====

undefined4 FUN_00407a9c(void)

{
  bool bVar1;
  int iVar2;
  undefined auStack_110 [16];
  undefined auStack_100 [28];
  undefined uStack_e4;
  undefined auStack_e3 [227];
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  iVar2 = FUN_00406b78(3,&uStack_e4,0xde);
  if (iVar2 != 0) {
    FUN_00409974(auStack_100,0x1c);
    FUN_00409e40(auStack_100);
    FUN_00409f6c(auStack_110,0xd);
    iVar2 = FUN_00409eac(auStack_110,0xd);
    if (iVar2 == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        enableIRQinterrupts(0);
      }
      return 0;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts(0);
    }
    iVar2 = FUN_0040a016(auStack_e3,0xdc,auStack_110,auStack_100);
    if (iVar2 != 0) {
      return 0;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  return 1;
}



//==== FUNC FUN_00407b08 @ 00407b08 ====

undefined8 FUN_00407b08(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0040a0b0(0x4a0000);
  return CONCAT44(unaff_r7,(uint)(iVar1 == 0));
}



//==== FUNC FUN_00407b1e @ 00407b1e ====

undefined8 FUN_00407b1e(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0040a1b2(0x410000);
  return CONCAT44(unaff_r7,(uint)(iVar1 == 0));
}



//==== FUNC FUN_00407b34 @ 00407b34 ====

undefined8 FUN_00407b34(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0040a2b4(0x400000);
  return CONCAT44(unaff_r7,(uint)(iVar1 == 0));
}



//==== FUNC FUN_00407b4a @ 00407b4a ====

undefined8 FUN_00407b4a(int param_1)

{
  undefined8 uStack_18;
  
  FUN_0040282c(&uStack_18,DAT_00408928,3);
  (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
  return uStack_18;
}



//==== FUNC FUN_00407cda @ 00407cda ====

/* WARNING: Removing unreachable block (ram,0x00407d68) */

void FUN_00407cda(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined auStack_b8 [2];
  undefined local_b6;
  undefined *local_b0 [5];
  short local_9c [6];
  undefined auStack_90 [2];
  undefined auStack_8e [98];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = param_2;
  uStack_28 = param_3;
  FUN_0040284c(local_b0,DAT_00408984,0x14);
  iVar2 = FUN_00404b96();
  if (iVar2 != 0) {
    local_b0[1] = &LAB_00407eac;
    local_b0[2] = &LAB_00407eac;
  }
  uVar3 = 2;
  for (uVar4 = 0; (uVar4 & 0xffff) < 5; uVar4 = (uVar4 & 0xffff) + 1) {
    iVar2 = FUN_00409f04(local_b0[uVar4 & 0xffff],0x20);
    if (iVar2 == 0) {
      local_b0[uVar4 & 0xffff] = &LAB_00407eac;
    }
    sVar1 = FUN_00409e30(local_b0[uVar4 & 0xffff]);
    local_9c[uVar4 & 0xffff] = sVar1;
    uVar3 = local_9c[uVar4 & 0xffff] + 2 + uVar3;
  }
  if (uVar3 < 0x65) {
    FUN_0040282c(auStack_90,&LAB_004080c0,2);
    FUN_00404c26(auStack_8e,local_b0,local_9c,5);
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_90,uVar3);
  }
  else {
    FUN_0040282c(auStack_b8,DAT_0040898c,3);
    local_b6 = 0xc;
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_b8,3);
  }
  return;
}



//==== FUNC FUN_00407dee @ 00407dee ====

void FUN_00407dee(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  undefined auStack_a0 [2];
  undefined local_9e;
  short local_9c [2];
  undefined4 local_98 [2];
  undefined auStack_90 [2];
  undefined auStack_8e [98];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_3;
  uStack_2c = param_2;
  local_98[0] = *DAT_00408990;
  local_98[1] = DAT_00408990[1];
  uVar2 = 2;
  for (uVar3 = 0; (uVar3 & 0xffff) < 2; uVar3 = (uVar3 & 0xffff) + 1) {
    sVar1 = FUN_00409e30(local_98[uVar3 & 0xffff]);
    local_9c[uVar3 & 0xffff] = sVar1;
    uVar2 = local_9c[uVar3 & 0xffff] + 2 + uVar2;
  }
  if (uVar2 < 0x65) {
    FUN_0040282c(auStack_90,&LAB_004081b8,2);
    FUN_00404c26(auStack_8e,local_98,local_9c,2);
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_90,uVar2);
  }
  else {
    FUN_0040282c(auStack_a0,DAT_00408994,3);
    local_9e = 0xc;
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_a0,3);
  }
  return;
}



//==== FUNC FUN_004084a8 @ 004084a8 ====

undefined8 FUN_004084a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_18;
  undefined uStack_16;
  undefined uStack_15;
  undefined4 uStack_14;
  
  uVar2 = *DAT_004089c8;
  local_18 = (undefined2)uVar2;
  uStack_16 = (undefined)((uint)uVar2 >> 0x10);
  uStack_15 = (undefined)((uint)uVar2 >> 0x18);
  if (*(char *)(param_2 + 1) == '\0') {
    uStack_16 = FUN_00404bc6();
    uStack_15 = 0;
    (**(code **)(param_1 + 0x20b4))(param_1,&local_18,4);
  }
  else {
    uStack_16 = *(undefined *)(param_2 + 1);
    iVar1 = FUN_00404bd2((int)*(char *)(param_2 + 1));
    if (iVar1 == 0) {
      uStack_15 = 0x11;
      (**(code **)(param_1 + 0x20b4))(param_1,&local_18,4);
    }
    uStack_15 = 0;
    (**(code **)(param_1 + 0x20b4))(param_1,&local_18,4);
    (**(code **)(param_1 + 0x20a0))(param_1);
  }
  return CONCAT44(uStack_14,CONCAT13(uStack_15,CONCAT12(uStack_16,local_18)));
}



//==== FUNC FUN_004086ac @ 004086ac ====

void FUN_004086ac(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined auStack_50 [2];
  undefined local_4e;
  undefined local_4c;
  byte local_4b;
  undefined auStack_4a [34];
  int local_28;
  
  local_28 = param_3;
  FUN_0040282c(auStack_50,DAT_004089e0,3);
  local_28 = local_28 + -1;
  iVar3 = FUN_00404bf6(param_1,auStack_50,2,&local_28);
  if (iVar3 != 0) {
    uVar2 = CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2));
    iVar3 = FUN_00404bf6(param_1,auStack_50,uVar2,&local_28);
    if (iVar3 != 0) {
      local_4b = FUN_00409e30(DAT_004089e4);
      if (local_4b + 2 < 0x1f) {
        local_4c = 0;
        FUN_0040282c(auStack_4a,DAT_004089e4,local_4b);
        iVar3 = FUN_00409f48(&local_4c,param_2 + 1,uVar2 + 2);
        if (iVar3 == 0) {
          *DAT_004089e8 = *DAT_004089e8 + 1;
          if (*DAT_004089e8 < 3) {
            local_4e = 0x12;
            (**(code **)(param_1 + 0x20b4))(param_1,auStack_50,3);
          }
          else {
            local_4e = 0x14;
            (**(code **)(param_1 + 0x20b4))(param_1,auStack_50,3);
            uVar4 = FUN_0040794a();
            lVar1 = (ulonglong)DAT_004089ec * (ulonglong)uVar4 + (ulonglong)DAT_004089f0;
            FUN_004095cc((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),DAT_004089f4,0);
            thunk_EXT_FUN_20402278();
            (**(code **)(param_1 + 0x20a0))(param_1);
          }
        }
        else {
          *DAT_004089e8 = 0;
          *(undefined *)(param_1 + 9) = 1;
          local_4e = 0;
          (**(code **)(param_1 + 0x20b4))(param_1,auStack_50,3);
        }
      }
      else {
        local_4e = 0xc;
        (**(code **)(param_1 + 0x20b4))(param_1,auStack_50,3);
      }
    }
  }
  return;
}



//==== FUNC FUN_004087de @ 004087de ====

undefined8 FUN_004087de(int param_1)

{
  undefined8 uStack_18;
  
  FUN_0040282c(&uStack_18,DAT_004089f8,3);
  (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
  return uStack_18;
}



//==== FUNC FUN_00408802 @ 00408802 ====

undefined8 FUN_00408802(int param_1)

{
  undefined2 uStack_18;
  undefined local_16;
  undefined5 uStack_15;
  
  FUN_0040282c(&uStack_18,DAT_004089fc,3);
  *(undefined *)(param_1 + 2) = 1;
  local_16 = 0;
  (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
  return CONCAT53(uStack_15,CONCAT12(local_16,uStack_18));
}



//==== FUNC FUN_00408834 @ 00408834 ====

undefined8 FUN_00408834(int param_1)

{
  int iVar1;
  undefined2 uStack_18;
  undefined local_16;
  undefined5 uStack_15;
  
  FUN_0040282c(&uStack_18,DAT_00408a00,3);
  iVar1 = FUN_00407b1e();
  if (iVar1 == 0) {
    local_16 = 0x17;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
  }
  else {
    *(undefined *)(param_1 + 1) = 1;
    local_16 = 0;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
    FUN_00404f94(1000);
  }
  return CONCAT53(uStack_15,CONCAT12(local_16,uStack_18));
}



//==== FUNC FUN_00408888 @ 00408888 ====

undefined8 FUN_00408888(undefined *param_1)

{
  int iVar1;
  undefined2 uStack_18;
  undefined local_16;
  undefined5 uStack_15;
  
  FUN_0040282c(&uStack_18,DAT_00408a04,3);
  iVar1 = FUN_00407b1e();
  if (iVar1 == 0) {
    local_16 = 0x17;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
  }
  else {
    *param_1 = 1;
    local_16 = 0;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
    FUN_00404f94(1000);
  }
  return CONCAT53(uStack_15,CONCAT12(local_16,uStack_18));
}



//==== FUNC FUN_00408a10 @ 00408a10 ====

undefined4 FUN_00408a10(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_3 < (uint)(param_2 << 4)) {
    iVar4 = 8;
  }
  else {
    iVar4 = 0x10;
  }
  uVar1 = (((uint)(param_2 * iVar4) >> 1) + param_3 * 8) / (uint)(param_2 * iVar4);
  uVar2 = uVar1 >> 3;
  if ((uVar2 == 0) || (0xffff < uVar2)) {
    uVar3 = 1;
  }
  else {
    if (iVar4 == 8) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000;
    }
    *(uint *)(param_1 + 0x20) = uVar2 | (uVar1 & 7) << 0x10;
    uVar3 = 0;
  }
  return uVar3;
}



//==== FUNC FUN_00408a68 @ 00408a68 ====

void FUN_00408a68(undefined4 *param_1)

{
  FUN_00408b4e(param_1);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = 0x88;
  *param_1 = 0x24;
  FUN_00408afc(param_1);
  FUN_00408b04(param_1);
  return;
}



//==== FUNC FUN_00408a98 @ 00408a98 ====

undefined4 FUN_00408a98(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00408a68(param_1);
  *DAT_00408b58 = 0;
  if ((param_2 == (undefined4 *)0x0) || (iVar1 = FUN_00408a10(param_1,*param_2,param_3), iVar1 != 0)
     ) {
    uVar2 = 1;
  }
  else {
    *DAT_00408b58 = *DAT_00408b58 | param_2[1] | param_2[2] | param_2[4] | param_2[3];
    *DAT_00408b58 = *DAT_00408b58;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | *DAT_00408b58;
    uVar2 = 0;
  }
  return uVar2;
}



//==== FUNC FUN_00408afc @ 00408afc ====

void FUN_00408afc(undefined4 *param_1)

{
  *param_1 = 0x100;
  return;
}



//==== FUNC FUN_00408b04 @ 00408b04 ====

void FUN_00408b04(undefined4 *param_1)

{
  *param_1 = 0x80000;
  return;
}



//==== FUNC FUN_00408b0c @ 00408b0c ====

uint FUN_00408b0c(int param_1)

{
  return *(uint *)(param_1 + 0x14) >> 1 & 1;
}



//==== FUNC FUN_00408b16 @ 00408b16 ====

uint FUN_00408b16(int param_1)

{
  return *(uint *)(param_1 + 0x14) >> 9 & 1;
}



//==== FUNC FUN_00408b20 @ 00408b20 ====

bool FUN_00408b20(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x14) << 0x1e < 0;
  if (bVar1) {
    *(uint *)(param_1 + 0x1c) = param_2 & 0x1ff;
  }
  return !bVar1;
}



//==== FUNC FUN_00408b36 @ 00408b36 ====

bool FUN_00408b36(int param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x14) << 0x1f < 0;
  if (bVar1) {
    *param_2 = *(uint *)(param_1 + 0x18) & 0x1ff;
  }
  return !bVar1;
}



//==== FUNC FUN_00408b4e @ 00408b4e ====

void FUN_00408b4e(int param_1)

{
  *(undefined4 *)(param_1 + 0xe4) = DAT_00408b5c;
  return;
}



//==== FUNC FUN_00408b60 @ 00408b60 ====

undefined8 FUN_00408b60(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 uStack_28;
  undefined local_26;
  undefined uStack_25;
  short local_24;
  undefined2 uStack_22;
  int local_20;
  
  local_24 = (short)param_2;
  uStack_22 = (undefined2)((uint)param_2 >> 0x10);
  uStack_28 = (undefined2)param_1;
  local_26 = (undefined)((uint)param_1 >> 0x10);
  uStack_25 = (undefined)((uint)param_1 >> 0x18);
  local_20 = param_3;
  FUN_0040282c(&uStack_28,DAT_00408f88,3);
  iVar2 = FUN_00406b14(0,&local_24);
  if (iVar2 == 0) {
    local_26 = 0x15;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
  }
  else if (local_24 == 0xd) {
    local_20 = local_20 + -1;
    iVar2 = FUN_00404bf6(param_1,&uStack_28,2,&local_20);
    if (iVar2 != 0) {
      uVar1 = CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2));
      iVar2 = FUN_00404bf6(param_1,&uStack_28,uVar1,&local_20);
      if (iVar2 != 0) {
        if (uVar1 < 0x21) {
          param_2 = param_2 + 3;
          uVar3 = FUN_00409e30(DAT_00408f8c);
          if (((uVar1 == uVar3) && (iVar2 = FUN_00409f48(param_2,DAT_00408f8c,uVar1), iVar2 != 0))
             || ((uVar3 = FUN_00409e30(DAT_00408f90), uVar1 == uVar3 &&
                 (iVar2 = FUN_00409f48(param_2,DAT_00408f90,uVar1), iVar2 != 0)))) {
            iVar2 = FUN_00404bf6(param_1,&uStack_28,4,&local_20);
            if (iVar2 != 0) {
              *(ushort *)(param_1 + 0x2048) = uVar1;
              FUN_0040282c(param_1 + 0x204a,param_2,uVar1);
              *(undefined *)(param_1 + (uint)uVar1 + 0x204a) = 0;
              pbVar4 = (byte *)(param_2 + (uint)uVar1);
              *(uint *)(param_1 + 0x206a) =
                   (uint)pbVar4[1] << 0x10 | (uint)*pbVar4 << 0x18 | (uint)pbVar4[2] << 8 |
                   (uint)pbVar4[3];
              if ((*(char *)(param_1 + 0x204a) == 'D') && (0x60000 < *(uint *)(param_1 + 0x206a))) {
                local_26 = 4;
                (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
              }
              else if ((*(char *)(param_1 + 0x204a) == 'J') &&
                      (0x70000 < *(uint *)(param_1 + 0x206a))) {
                local_26 = 4;
                (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
              }
              else {
                FUN_00404ba2(2);
                FUN_0040a490(0,6);
                FUN_0040a490(0,6);
                if (*(char *)(param_1 + 0x204a) == 'D') {
                  iVar2 = FUN_0040a506(0x4a0000,0x30);
                  if (iVar2 != 0) {
                    local_26 = 0xd;
                    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
                    goto LAB_00408dcc;
                  }
                  *(undefined4 *)(param_1 + 0x206e) = 0x4a0000;
                }
                else {
                  if (*(char *)(param_1 + 0x204a) != 'J') {
                    local_26 = 0x16;
                    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
                    goto LAB_00408dcc;
                  }
                  iVar2 = FUN_0040a506(0x410000,0x38);
                  if (iVar2 != 0) {
                    local_26 = 0xd;
                    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
                    goto LAB_00408dcc;
                  }
                  *(undefined4 *)(param_1 + 0x206e) = 0x410000;
                }
                *(undefined4 *)(param_1 + 0x2094) = 0;
                local_26 = 0;
                (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
              }
            }
          }
          else {
            local_26 = 0x16;
            (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
          }
        }
        else {
          local_26 = 8;
          (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
        }
      }
    }
  }
  else {
    local_26 = 0x18;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
  }
LAB_00408dcc:
  return CONCAT26(uStack_22,CONCAT24(local_24,CONCAT13(uStack_25,CONCAT12(local_26,uStack_28))));
}



//==== FUNC FUN_00408dd0 @ 00408dd0 ====

undefined8 FUN_00408dd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uStack_20;
  undefined local_1e;
  undefined uStack_1d;
  int local_1c;
  
  uStack_20 = (undefined2)param_2;
  local_1e = (undefined)((uint)param_2 >> 0x10);
  uStack_1d = (undefined)((uint)param_2 >> 0x18);
  local_1c = param_3;
  FUN_0040282c(&uStack_20,DAT_00408f94,3);
  local_1c = local_1c + -1;
  iVar1 = FUN_00404bf6(param_1,&uStack_20,4,&local_1c);
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(param_2 + 4) |
            (uint)*(byte *)(param_2 + 2) << 0x10 | (uint)*(byte *)(param_2 + 1) << 0x18 |
            (uint)*(byte *)(param_2 + 3) << 8;
    iVar1 = FUN_00404bf6(param_1,&uStack_20,2,&local_1c);
    if (iVar1 != 0) {
      uVar3 = (uint)CONCAT11(*(undefined *)(param_2 + 5),*(undefined *)(param_2 + 6));
      iVar1 = FUN_00404bf6(param_1,&uStack_20,uVar3,&local_1c);
      if (iVar1 != 0) {
        if (uVar2 < *(uint *)(param_1 + 0x206a)) {
          iVar1 = FUN_0040a4da(uVar2 + *(int *)(param_1 + 0x206e),param_2 + 7,uVar3,0);
          if (iVar1 == 0) {
            *(uint *)(param_1 + 0x2094) = uVar3 + *(int *)(param_1 + 0x2094);
            local_1e = 0;
            (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
          }
          else {
            local_1e = 0xe;
            (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
          }
        }
        else {
          local_1e = 0xb;
          (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
        }
      }
    }
  }
  return CONCAT44(local_1c,CONCAT13(uStack_1d,CONCAT12(local_1e,uStack_20)));
}



//==== FUNC FUN_00408eb0 @ 00408eb0 ====

undefined8 FUN_00408eb0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uStack_20;
  undefined local_1e;
  undefined5 uStack_1d;
  undefined4 uStack_18;
  
  uStack_18 = param_3;
  FUN_0040282c(&uStack_20,DAT_00408f98,3);
  iVar1 = FUN_00404bf6(param_1,&uStack_20,0x21,&uStack_18);
  if (iVar1 != 0) {
    uVar2 = FUN_0040ae66(*(undefined4 *)(param_1 + 0x206e),*(undefined4 *)(param_1 + 0x206a));
    iVar1 = FUN_00409f48(uVar2,param_2 + 1,0x20);
    if (iVar1 == 0) {
      local_1e = 9;
      (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
      FUN_00404ba2(3);
    }
    else {
      if (*(char *)(param_1 + 0x204a) == 'D') {
        iVar1 = FUN_00407b08();
        if (iVar1 == 0) {
          local_1e = 0x17;
          (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
          FUN_00404ba2(5);
          goto LAB_00408f86;
        }
      }
      else if ((*(char *)(param_1 + 0x204a) == 'J') && (iVar1 = FUN_00407b1e(), iVar1 == 0)) {
        local_1e = 0x17;
        (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
        FUN_00404ba2(5);
        goto LAB_00408f86;
      }
      local_1e = 0;
      (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
      FUN_00404ba2(0);
    }
  }
LAB_00408f86:
  return CONCAT53(uStack_1d,CONCAT12(local_1e,uStack_20));
}



//==== FUNC FUN_00408f9c @ 00408f9c ====

void FUN_00408f9c(undefined4 param_1)

{
  *DAT_00408fb4 = 0;
  *DAT_00408fb8 = param_1;
  return;
}



//==== FUNC FUN_00408fbc @ 00408fbc ====

ulonglong FUN_00408fbc(void)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 in_r3;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  
  iVar4 = DAT_00409098;
  iVar3 = DAT_00409094;
  pcVar2 = DAT_00409090;
  piVar5 = (int *)(DAT_00409090 + 4);
  piVar6 = (int *)(DAT_00409090 + 8);
  piVar7 = (int *)(DAT_00409090 + 0xc);
  if (*DAT_00409090 == '\0') {
    iVar8 = DAT_00409098 * *piVar5 + DAT_00409094;
    *piVar5 = iVar8;
    iVar11 = 8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    *piVar5 = iVar4 * iVar8 + iVar3;
    piVar9 = piVar7;
    do {
      iVar8 = iVar4 * *piVar5 + iVar3;
      *piVar5 = iVar8;
      *piVar9 = iVar8;
      iVar11 = iVar11 + -1;
      iVar8 = iVar4 * *piVar5 + iVar3;
      *piVar5 = iVar8;
      piVar9[1] = iVar8;
      iVar8 = iVar4 * *piVar5 + iVar3;
      *piVar5 = iVar8;
      piVar10 = piVar9 + 3;
      piVar9[2] = iVar8;
      iVar8 = iVar4 * *piVar5 + iVar3;
      *piVar5 = iVar8;
      piVar9 = piVar9 + 4;
      *piVar10 = iVar8;
    } while (iVar11 != 0);
    *piVar6 = *(int *)(pcVar2 + 0x88);
    *pcVar2 = '\x01';
  }
  *piVar5 = iVar4 * *piVar5 + iVar3;
  bVar1 = *(byte *)piVar6;
  *piVar6 = piVar7[bVar1 & 0x1f];
  piVar7[bVar1 & 0x1f] = *piVar5;
  return CONCAT44(in_r3,*piVar6) & 0xffffffff3fffffff;
}



//==== FUNC FUN_0040909c @ 0040909c ====

void FUN_0040909c(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 100) = param_2;
  }
  return;
}



//==== FUNC FUN_004090a8 @ 004090a8 ====

void FUN_004090a8(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x84) = param_2;
  *(uint *)(param_1 + 0x8c) = 0x8000U / (uint)(param_3 << 1) - 1 & 0x3fff;
  return;
}



//==== FUNC FUN_004090c6 @ 004090c6 ====

void FUN_004090c6(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_1 + 0x44) = param_3;
  if (param_2 != 0) {
    if (param_2 == 0x8000000) {
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & *(uint *)(param_1 + 0x70) & ~param_3;
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & *(uint *)(param_1 + 0x74) & ~param_3;
    }
    else if (param_2 == 0x10000000) {
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | param_3;
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & *(uint *)(param_1 + 0x74) & ~param_3;
    }
    else if (param_2 == 0x18000000) {
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & *(uint *)(param_1 + 0x70) & ~param_3;
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | param_3;
    }
    else if (param_2 == 0x20000000) {
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | param_3;
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | param_3;
    }
    else {
      if (param_2 == 0x28000000) {
        return;
      }
      if (param_2 == 0x30000000) {
        return;
      }
      if (param_2 == 0x38000000) {
        return;
      }
    }
    *(uint *)(param_1 + 4) = param_3;
  }
  return;
}



//==== FUNC FUN_0040916c @ 0040916c ====

void FUN_0040916c(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  param_1[0x11] = param_2;
  FUN_0040909c(param_1,param_2,param_3 & 1);
  if ((param_3 & 10) == 0) {
    param_1[9] = param_2;
  }
  else {
    param_1[8] = param_2;
  }
  if ((int)(param_3 << 0x1e) < 0) {
    param_1[0x20] = param_2;
  }
  else if ((int)(param_3 << 0x1c) < 0) {
    param_1[0x21] = param_2;
  }
  param_1[5] = param_2;
  *param_1 = param_2;
  return;
}



//==== FUNC FUN_004091ac @ 004091ac ====

void FUN_004091ac(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  param_1[0x11] = param_2;
  FUN_0040909c(param_1,param_2,param_5);
  if (param_4 == 0) {
    param_1[0x15] = param_2;
  }
  else {
    param_1[0x14] = param_2;
  }
  if (param_3 == 0) {
    param_1[0xd] = param_2;
  }
  else {
    param_1[0xc] = param_2;
  }
  param_1[4] = param_2;
  *param_1 = param_2;
  return;
}



//==== FUNC FUN_004091ea @ 004091ea ====

void FUN_004091ea(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 << 0x1b < 0) {
    *(undefined4 *)(param_1 + 0xb0) = param_2;
    if (param_3 << 0x1a < 0) {
      *(undefined4 *)(param_1 + 0xd4) = param_2;
    }
    else {
      *(undefined4 *)(param_1 + 0xd0) = param_2;
    }
    if (param_3 << 0x19 < 0) {
      *(undefined4 *)(param_1 + 0xc0) = param_2;
    }
    else {
      *(undefined4 *)(param_1 + 0xc4) = param_2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb4) = param_2;
  }
  return;
}



//==== FUNC FUN_00409216 @ 00409216 ====

undefined8 FUN_00409216(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_18;
  
  uVar1 = FUN_0040934a(param_1);
  uVar2 = param_2 & 0x78000000;
  if (uVar2 == 0x8000000) {
    FUN_004090c6(uVar1,0x8000000,1 << (param_1 & 0x1f));
    FUN_0040909c(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x10000000) {
    FUN_004090c6(uVar1,0x10000000,1 << (param_1 & 0x1f));
    FUN_0040909c(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x18000000) {
    FUN_004090c6(uVar1,0x18000000,1 << (param_1 & 0x1f));
    FUN_0040909c(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x20000000) {
    FUN_004090c6(uVar1,0x20000000,1 << (param_1 & 0x1f));
    FUN_0040909c(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x28000000) {
    FUN_0040916c(uVar1,1 << (param_1 & 0x1f),param_2);
  }
  else {
    if ((uVar2 != 0x30000000) && (uVar2 != 0x38000000)) {
      uVar1 = 0;
      goto LAB_00409348;
    }
    local_18 = param_2 & 1;
    FUN_004091ac(uVar1,1 << (param_1 & 0x1f),(param_2 & 0x38000000) == 0x38000000,
                 (param_2 << 0x1d) >> 0x1f);
  }
  uVar1 = 1;
LAB_00409348:
  return CONCAT44(local_18,uVar1);
}



//==== FUNC FUN_0040934a @ 0040934a ====

int FUN_0040934a(uint param_1)

{
  return (param_1 >> 5) * 0x200 + DAT_00409360;
}



//==== FUNC FUN_00409364 @ 00409364 ====

void FUN_00409364(undefined4 *param_1)

{
  *param_1 = 8;
  *param_1 = 0x20;
  *param_1 = 4;
  return;
}



//==== FUNC FUN_00409372 @ 00409372 ====

bool FUN_00409372(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  FUN_004095b2(param_1);
  FUN_00409364(param_1);
  iVar1 = FUN_004093a4(param_1,param_2[1],*param_2);
  return iVar1 == 1;
}



//==== FUNC FUN_004093a4 @ 004093a4 ====

undefined4 FUN_004093a4(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < DAT_004095bc) {
    if (param_2 < DAT_004095c0) {
      uVar2 = param_3 / (param_2 << 1) - 3;
      for (; (0xff < uVar2 && (uVar4 < 7)); uVar4 = uVar4 + 1) {
        uVar2 = uVar2 >> 1;
      }
      *(uint *)(param_1 + 0x10) = (uVar4 & 7) << 0x10 | (uVar2 & 0xff) << 8 | uVar2 & 0xff;
    }
    else {
      uVar2 = param_3 / DAT_004095c4 - 3;
      uVar3 = param_3 / ((DAT_004095c8 + param_2 * 2) * 2) - 3;
      for (; (0xff < uVar2 && (uVar4 < 7)); uVar4 = uVar4 + 1) {
        uVar2 = uVar2 >> 1;
      }
      for (; (0xff < uVar3 && (uVar4 < 7)); uVar4 = uVar4 + 1) {
        uVar3 = uVar3 >> 1;
      }
      *(uint *)(param_1 + 0x10) = (uVar4 & 7) << 0x10 | (uVar3 & 0xff) << 8 | uVar2 & 0xff;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_00409450 @ 00409450 ====

uint FUN_00409450(byte *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*param_1;
    if (1 < param_2) {
      uVar1 = (uint)CONCAT11(*param_1,param_1[1]);
    }
    if (2 < param_2) {
      uVar1 = uVar1 << 8 | (uint)param_1[2];
    }
  }
  return uVar1;
}



//==== FUNC FUN_00409476 @ 00409476 ====

undefined8 FUN_00409476(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_2 + 0xc);
  puVar3 = *(undefined **)(param_2 + 8);
  if (iVar4 == 0) {
    uVar1 = 1;
  }
  else {
    param_1[1] = 0;
    param_1[1] = (*(byte *)(param_2 + 0x10) & 0x7f) << 0x10 | (*(uint *)(param_2 + 4) & 3) << 8 |
                 0x1000;
    param_1[3] = 0;
    uVar1 = FUN_00409450(param_2,*(undefined4 *)(param_2 + 4));
    param_1[3] = uVar1;
    *param_1 = 1;
    iVar2 = 15000;
    while (iVar4 != 0) {
      if ((int)(param_1[8] << 0x17) < 0) {
        uVar1 = 5;
        goto LAB_0040951e;
      }
      if (iVar2 == 0) {
        uVar1 = 9;
        goto LAB_0040951e;
      }
      if (iVar4 == 1) {
        *param_1 = 2;
      }
      iVar2 = iVar2 + -1;
      if ((int)(param_1[8] << 0x1e) < 0) {
        *puVar3 = (char)param_1[0xc];
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
        iVar2 = 15000;
      }
    }
    iVar4 = 0x1000000;
    do {
      if ((int)(param_1[8] << 0x1f) < 0) {
        uVar1 = 0;
        goto LAB_0040951e;
      }
      bVar5 = iVar4 != 0;
      iVar4 = iVar4 + -1;
    } while (bVar5);
    uVar1 = 9;
  }
LAB_0040951e:
  return CONCAT44(param_4,uVar1);
}



//==== FUNC FUN_00409522 @ 00409522 ====

undefined8 FUN_00409522(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_2 + 0xc);
  pbVar3 = *(byte **)(param_2 + 8);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    param_1[1] = 0;
    param_1[1] = (*(byte *)(param_2 + 0x10) & 0x7f) << 0x10 | (*(uint *)(param_2 + 4) & 3) << 8;
    param_1[3] = 0;
    uVar1 = FUN_00409450(param_2,*(undefined4 *)(param_2 + 4));
    param_1[3] = uVar1;
    while (iVar2 != 0) {
      if ((int)(param_1[8] << 0x17) < 0) {
        uVar1 = 5;
        goto LAB_004095ae;
      }
      if ((int)(param_1[8] << 0x1d) < 0) {
        param_1[0xd] = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        iVar2 = iVar2 + -1;
      }
    }
    do {
      if ((int)(param_1[8] << 0x17) < 0) {
        uVar1 = 5;
        goto LAB_004095ae;
      }
    } while (-1 < (int)(param_1[8] << 0x1d));
    *param_1 = 2;
    iVar2 = 0x1000000;
    do {
      if ((int)(param_1[8] << 0x1f) < 0) {
        uVar1 = 0;
        goto LAB_004095ae;
      }
      bVar4 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar4);
    uVar1 = 9;
  }
LAB_004095ae:
  return CONCAT44(param_4,uVar1);
}



//==== FUNC FUN_004095b2 @ 004095b2 ====

void FUN_004095b2(undefined4 *param_1)

{
  *param_1 = 0x80;
  return;
}



//==== FUNC FUN_004095cc @ 004095cc ====

ulonglong FUN_004095cc(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_0040960e:
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
      goto LAB_0040960e;
    }
    if (param_3 != 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  return CONCAT44(param_2,param_1);
}



//==== FUNC FUN_004096bc @ 004096bc ====

void FUN_004096bc(byte param_1)

{
  *(int *)(DAT_00409800 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_004096d0 @ 004096d0 ====

void FUN_004096d0(byte param_1)

{
  *(int *)(DAT_00409804 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_004096e4 @ 004096e4 ====

void FUN_004096e4(char param_1,int param_2)

{
  if (param_1 < '\0') {
    *(char *)(DAT_00409808 + ((int)param_1 & 0xfU) + -4) = (char)(param_2 << 5);
  }
  else {
    *(char *)(DAT_0040980c + param_1) = (char)(param_2 << 5);
  }
  return;
}



//==== FUNC FUN_0040970a @ 0040970a ====

void FUN_0040970a(void)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = FUN_00402fca();
  if (iVar2 != 0) {
    uVar1 = FUN_004030ac();
    (**DAT_00409814)(DAT_00409810,uVar1,1);
  }
  return;
}



//==== FUNC FUN_0040972c @ 0040972c ====

uint FUN_0040972c(void)

{
  int iVar1;
  uint unaff_r7;
  
  iVar1 = FUN_00407486(&stack0xfffffff8);
  if (iVar1 != 0) {
    (**DAT_00409814)(DAT_00409810,unaff_r7 & 0xff,2);
  }
  return unaff_r7;
}



//==== FUNC FUN_0040975c @ 0040975c ====

undefined4 FUN_0040975c(void)

{
  undefined4 unaff_r7;
  
  (**DAT_0040981c)(DAT_00409810);
  return unaff_r7;
}



//==== FUNC FUN_00409768 @ 00409768 ====

undefined4 FUN_00409768(void)

{
  bool bVar1;
  undefined4 unaff_r7;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  FUN_004096d0(0x1a);
  FUN_004096e4(0x1a,2);
  FUN_004096bc(0x1a);
  FUN_004096d0(0xe);
  FUN_004096e4(0xe,1);
  FUN_004096bc(0xe);
  FUN_004096d0(0x22);
  FUN_004096e4(0x22,0);
  FUN_004096bc(0x22);
  FUN_004096d0(0x18);
  FUN_004096e4(0x18,5);
  FUN_004096bc(0x18);
  FUN_004096d0(0x10);
  FUN_004096e4(0x10,1);
  FUN_004096bc(0x10);
  (**DAT_00409820)(DAT_00409810,0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  (**DAT_00409824)(DAT_00409810);
  return unaff_r7;
}



//==== FUNC FUN_004097ee @ 004097ee ====

void FUN_004097ee(void)

{
  do {
    FUN_0040970a();
    (**DAT_00409828)(DAT_00409810);
  } while( true );
}



//==== FUNC FUN_0040982c @ 0040982c ====

undefined4 FUN_0040982c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x48) & *(uint *)(param_1 + 0x4c);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (uVar1 == 0) {
        return param_4;
      }
      if ((*(int *)(DAT_00409958 + uVar2 * 0x10) == param_2) &&
         ((uVar1 & *(uint *)(DAT_00409958 + uVar2 * 0x10 + 4)) != 0)) {
        (**(code **)(DAT_00409958 + uVar2 * 0x10 + 0xc))
                  (*(undefined4 *)(DAT_00409958 + uVar2 * 0x10),
                   *(undefined4 *)(DAT_00409958 + uVar2 * 0x10 + 4));
        uVar1 = uVar1 & ~*(uint *)(DAT_00409958 + uVar2 * 0x10 + 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 7);
  }
  return param_4;
}



//==== FUNC FUN_00409890 @ 00409890 ====

undefined4 FUN_00409890(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_r10;
  
  if (*DAT_0040995c < 7) {
    for (uVar2 = 0; (uVar2 & 0xff) <= *DAT_0040995c; uVar2 = (uVar2 & 0xff) + 1) {
      unaff_r10 = (int *)(DAT_00409958 + (uVar2 & 0xff) * 0x10);
      if ((*unaff_r10 == param_2) && (unaff_r10[1] == param_3)) break;
    }
    *unaff_r10 = param_2;
    unaff_r10[1] = param_3;
    unaff_r10[2] = param_4;
    unaff_r10[3] = param_5;
    if ((uVar2 & 0xff) == *DAT_0040995c + 1) {
      *DAT_0040995c = *DAT_0040995c + 1;
    }
    FUN_004091ea(param_1,param_3,param_4);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_00409918 @ 00409918 ====

undefined4 FUN_00409918(void)

{
  undefined4 unaff_r7;
  
  FUN_0040982c(DAT_00409960,10);
  return unaff_r7;
}



//==== FUNC FUN_00409974 @ 00409974 ====

undefined4 * FUN_00409974(undefined4 *param_1,uint param_2)

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



//==== FUNC FUN_0040997c @ 0040997c ====

bool FUN_0040997c(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  DataMemoryBarrier(0x1f);
  *DAT_00409cec = 0;
  return iVar2 == 0;
}



//==== FUNC FUN_004099a4 @ 004099a4 ====

bool FUN_004099a4(int param_1)

{
  return param_1 != 0;
}



//==== FUNC FUN_004099b2 @ 004099b2 ====

void FUN_004099b2(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004099a4(param_1);
  if (iVar1 != 0) {
    *DAT_00409cec = 1;
    DataMemoryBarrier(0x1f);
    enableIRQinterrupts();
  }
  return;
}



//==== FUNC FUN_004099d0 @ 004099d0 ====

void FUN_004099d0(void)

{
  return;
}



//==== FUNC FUN_004099e0 @ 004099e0 ====

undefined4 FUN_004099e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



//==== FUNC FUN_004099e4 @ 004099e4 ====

undefined4 FUN_004099e4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



//==== FUNC FUN_004099e8 @ 004099e8 ====

undefined4 FUN_004099e8(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_00409cf8 + param_1) == -1) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = FUN_0040997c();
  *(char *)(DAT_00409cf8 + param_1) = *(char *)(DAT_00409cf8 + param_1) + '\x01';
  FUN_004099b2(uVar1);
  return param_4;
}



//==== FUNC FUN_00409a1a @ 00409a1a ====

undefined4 FUN_00409a1a(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 32000;
  }
  else if (param_1 == 2) {
    uVar1 = 0x8000;
  }
  else if (param_1 < 2) {
    uVar1 = 0x8000;
  }
  else {
    uVar1 = DAT_00409d00;
    if ((((param_1 != 4) && (uVar1 = DAT_00409cfc, 3 < param_1)) &&
        (uVar1 = DAT_00409d04, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_00409a6c @ 00409a6c ====

undefined8 FUN_00409a6c(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_00409a1a(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_00409a80 @ 00409a80 ====

undefined8 FUN_00409a80(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_00409a6c();
  return CONCAT44(unaff_r7,uVar1 / 1);
}



//==== FUNC FUN_00409a8e @ 00409a8e ====

undefined4 FUN_00409a8e(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == DAT_00409cf4) {
    uVar1 = 1;
  }
  else if (param_1 == DAT_00409cf0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_00409aac @ 00409aac ====

undefined4 FUN_00409aac(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == DAT_00409cf4) {
    uVar1 = 0x28;
  }
  else if (param_1 == DAT_00409cf0) {
    uVar1 = 0x1d;
  }
  else {
    uVar1 = 0x1d;
  }
  return uVar1;
}



//==== FUNC FUN_00409aca @ 00409aca ====

void FUN_00409aca(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)((int)param_2 + 0x13) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80000000;
  }
  *(uint *)(param_1 + 4) =
       uVar1 | (param_2[1] / param_2[2] - 1) * 0x100 & 0xff00 |
       (*(byte *)(param_2 + 4) & 0xf) << 0x18 | (*(byte *)((int)param_2 + 0x11) & 3) << 0x1c |
       param_2[3] | 0x800000;
  if (*(char *)(param_2 + 5) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1000000;
  }
  if (*(char *)((int)param_2 + 0x15) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x2000000;
  }
  *(uint *)(param_1 + 8) = uVar1 | *param_2 | uVar2;
  *(uint *)(param_1 + 0x94) = (*(byte *)((int)param_2 + 0x16) & 3) << 8 | 0xc;
  return;
}



//==== FUNC FUN_00409b44 @ 00409b44 ====

void FUN_00409b44(int param_1,uint param_2,char *param_3)

{
  uint uVar1;
  
  FUN_004099d0(param_1,(int)(short)param_2);
  if (*param_3 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 1 << (param_2 & 0xff);
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & ~(1 << (param_2 & 0xff)) | uVar1;
  *(uint *)(param_1 + 0x54) =
       *(uint *)(param_1 + 0x54) & ~(3 << ((param_2 & 0x7f) << 1)) |
       (int)param_3[1] << ((param_2 & 0x7f) << 1);
  return;
}



//==== FUNC FUN_00409b96 @ 00409b96 ====

void FUN_00409b96(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00409a80();
  param_1[1] = uVar1;
  param_1[2] = DAT_00409d08;
  param_1[3] = 0x40000;
  *(undefined *)(param_1 + 4) = 2;
  *(undefined *)((int)param_1 + 0x11) = 1;
  *(undefined *)((int)param_1 + 0x12) = 1;
  *(undefined *)((int)param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 5) = 1;
  *(undefined *)((int)param_1 + 0x15) = 1;
  *(undefined *)((int)param_1 + 0x16) = 1;
  return;
}



//==== FUNC FUN_00409bcc @ 00409bcc ====

void FUN_00409bcc(undefined *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  return;
}



//==== FUNC FUN_00409bd6 @ 00409bd6 ====

undefined8
FUN_00409bd6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_004099e0(param_1);
  if (iVar1 << 7 < 0) {
    uVar2 = 0x19;
  }
  else {
    *param_1 = 1;
    FUN_00409aca(param_1,param_2);
    if (param_1 == DAT_00409cf0) {
      for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
        *(undefined4 *)(DAT_00409d0c + uVar3 * 4) = 0;
      }
    }
    if (param_1 == DAT_00409cf4) {
      for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
        *(undefined4 *)(DAT_00409d0c + uVar3 * 4 + 0x40) = 0;
      }
    }
    uVar2 = 0;
  }
  return CONCAT44(param_4,uVar2);
}



//==== FUNC FUN_00409c30 @ 00409c30 ====

undefined4 FUN_00409c30(byte param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(DAT_00409d0c + (uint)param_1 * 0x40 + param_2 * 4) != 0) {
    (**(code **)(DAT_00409d0c + (uint)param_1 * 0x40 + param_2 * 4))();
  }
  return param_4;
}



//==== FUNC FUN_00409c5e @ 00409c5e ====

uint FUN_00409c5e(undefined4 param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_004099e0(param_1);
  uVar3 = FUN_004099e4(param_1);
  uVar3 = uVar3 & uVar2;
  uVar1 = FUN_00409a8e(param_1);
  for (uVar2 = 0; uVar2 < 0x10; uVar2 = uVar2 + 1) {
    if (uVar2 < 0xc) {
      if ((int)((uVar3 >> (uVar2 & 0xff)) << 0x1f) < 0) {
        FUN_00409c30(uVar1,uVar2);
      }
    }
    else if (uVar2 < 0xf) {
      if ((int)((uVar3 >> (uVar2 + 0xc & 0xff)) << 0x1f) < 0) {
        FUN_00409c30(uVar1,uVar2);
      }
    }
    else if ((int)((uVar3 >> (uVar2 + 0xf & 0xff)) << 0x1f) < 0) {
      FUN_00409c30(uVar1,uVar2);
    }
  }
  return uVar3;
}



//==== FUNC FUN_00409cd4 @ 00409cd4 ====

undefined4 FUN_00409cd4(void)

{
  undefined4 unaff_r7;
  
  FUN_00409c5e(DAT_00409cf0);
  return unaff_r7;
}



//==== FUNC FUN_00409cde @ 00409cde ====

undefined4 FUN_00409cde(void)

{
  undefined4 unaff_r7;
  
  FUN_00409c5e(DAT_00409cf4);
  return unaff_r7;
}



//==== FUNC FUN_00409d10 @ 00409d10 ====

undefined4 FUN_00409d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00409aac(param_1);
  FUN_004024c6(uVar1);
  FUN_004099e8(2);
  return param_4;
}



//==== FUNC FUN_00409d2c @ 00409d2c ====

uint * FUN_00409d2c(int param_1,uint param_2,uint param_3)

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



//==== FUNC FUN_00409d94 @ 00409d94 ====

int FUN_00409d94(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    puVar2 = (uint *)((int)puVar3 + 1);
    if (*(char *)puVar3 == '\0') goto LAB_00409dc6;
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
LAB_00409dc6:
  return (int)puVar2 - (int)((int)param_1 + 1);
}



//==== FUNC FUN_00409dcc @ 00409dcc ====

uint FUN_00409dcc(uint *param_1,uint *param_2,uint param_3)

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



//==== FUNC FUN_00409e30 @ 00409e30 ====

short FUN_00409e30(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = FUN_00409d94(param_1);
  return sVar1 + 1;
}



//==== FUNC FUN_00409e40 @ 00409e40 ====

void FUN_00409e40(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_30 [8];
  
  FUN_00409974(local_30 + 3,0x10);
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  FUN_0040b1d4(local_30 + 3,0x80);
  uVar2 = 1;
  for (uVar1 = 0; (uVar1 & 0xff) < 4; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_0040a42c(local_30 + (uVar1 & 0xff),local_30[(uVar2 & 0xff) + 3]);
    uVar2 = (uVar2 & 0xff) + 1;
  }
  for (uVar1 = 0; (uVar1 & 0xff) < 0xc; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_0040a43c(param_1 + (uVar1 & 0xff) * 2,*(undefined *)((int)local_30 + (uVar1 & 0xff)),0);
  }
  return;
}



//==== FUNC FUN_00409eac @ 00409eac ====

ushort FUN_00409eac(undefined4 param_1,undefined param_2)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = FUN_00406b78(0,param_1,param_2);
  if (uVar1 == 0) {
    sVar2 = FUN_0040a414(DAT_00409efc);
    if (sVar2 == 0xd) {
      FUN_0040282c(param_1,DAT_00409f00,0xd);
      uVar1 = 0xd;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}



//==== FUNC FUN_00409f04 @ 00409f04 ====

undefined FUN_00409f04(int param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if ((uint)param_2 <= (uVar1 & 0xff)) {
      return 0;
    }
    if (*(char *)(param_1 + (uVar1 & 0xff)) == '\0') break;
    if ((*(char *)(param_1 + (uVar1 & 0xff)) < ' ') ||
       (*(char *)(param_1 + (uVar1 & 0xff)) == '\x7f')) {
      return 0;
    }
    uVar1 = (uVar1 & 0xff) + 1;
  }
  return 1;
}



//==== FUNC FUN_00409f48 @ 00409f48 ====

undefined4 FUN_00409f48(int param_1,int param_2,uint param_3)

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



//==== FUNC FUN_00409f6c @ 00409f6c ====

undefined4 * FUN_00409f6c(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)(param_1 + param_2);
  uVar4 = (uint)puVar2 & 3;
  if (uVar4 != 0) {
    uVar3 = param_2 - uVar4;
    if (param_2 < uVar4) {
      if (uVar3 + uVar4 != 0) {
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        *(undefined *)puVar2 = 0;
      }
      if ((uVar3 + uVar4 & 2) != 0) {
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        *(undefined *)puVar2 = 0;
      }
      return puVar2;
    }
    uVar1 = (uint)puVar2 & 2;
    if ((int)(uVar4 << 0x1f) < 0) {
      puVar2 = (undefined4 *)((int)puVar2 + -1);
      *(undefined *)puVar2 = 0;
    }
    param_2 = uVar3;
    if (uVar1 != 0) {
      puVar2 = (undefined4 *)((int)puVar2 + -2);
      *(undefined2 *)puVar2 = 0;
    }
  }
  do {
    uVar4 = param_2;
    param_2 = uVar4 - 0x10;
    if (0xf < uVar4) {
      puVar2[-1] = 0;
      puVar2[-2] = 0;
      puVar2[-3] = 0;
      puVar2 = puVar2 + -4;
      *puVar2 = 0;
    }
  } while (0xf < uVar4 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    puVar2[-1] = 0;
    puVar2 = puVar2 + -2;
    *puVar2 = 0;
  }
  if ((int)(uVar4 * 0x20000000) < 0) {
    puVar2 = puVar2 + -1;
    *puVar2 = 0;
  }
  if ((uVar4 * 0x20000000 & 0x40000000) != 0) {
    puVar2 = (undefined4 *)((int)puVar2 + -2);
    *(undefined2 *)puVar2 = 0;
  }
  if ((int)(uVar4 * -0x80000000) < 0) {
    puVar2 = (undefined4 *)((int)puVar2 + -1);
    *(undefined *)puVar2 = 0;
  }
  return puVar2;
}



//==== FUNC FUN_00409f74 @ 00409f74 ====

undefined4
FUN_00409f74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_48c [516];
  undefined auStack_288 [516];
  undefined auStack_84 [92];
  undefined4 local_28;
  
  local_28 = param_1;
  FUN_0040284c(auStack_48c,DAT_0040a3d0,0x204);
  FUN_0040282c(auStack_288,auStack_48c,0x204);
  FUN_0040b220(auStack_84,local_28,param_2);
  uVar1 = FUN_00409d94(param_5);
  iVar2 = FUN_0040b2e4(auStack_84,param_5,uVar1);
  if (iVar2 == 0) {
    uVar1 = FUN_00409d94(param_6);
    iVar2 = FUN_0040b2e4(auStack_84,param_6,uVar1);
    if (iVar2 == 0) {
      uVar1 = FUN_0040b2f8(auStack_84,param_3,param_4,auStack_288);
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}



//==== FUNC FUN_0040a016 @ 0040a016 ====

undefined4 FUN_0040a016(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_488 [516];
  undefined auStack_284 [516];
  undefined auStack_80 [92];
  
  FUN_0040284c(auStack_488,DAT_0040a3d4,0x204);
  FUN_0040282c(auStack_284,auStack_488,0x204);
  iVar1 = FUN_0040b2d8(auStack_80);
  if (iVar1 == 0) {
    uVar2 = FUN_00409d94(param_3);
    iVar1 = FUN_0040b2e4(auStack_80,param_3,uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_00409d94(param_4);
      iVar1 = FUN_0040b2e4(auStack_80,param_4,uVar2);
      if (iVar1 == 0) {
        uVar2 = FUN_0040b2f8(auStack_80,param_1,param_2,auStack_284);
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



//==== FUNC FUN_0040a0b0 @ 0040a0b0 ====

undefined4 FUN_0040a0b0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined auStack_588 [516];
  undefined auStack_384 [256];
  undefined auStack_284 [516];
  undefined auStack_80 [92];
  
  FUN_0040284c(auStack_588,DAT_0040a3d8,0x204);
  FUN_0040282c(auStack_284,auStack_588,0x204);
  uVar5 = (uint)*(byte *)(param_1 + DAT_0040a3dc) * 0x1000000 +
          (uint)*(byte *)(param_1 + DAT_0040a3e0) * 0x10000 +
          (uint)*(byte *)(param_1 + DAT_0040a3e4) * 0x100 + (uint)*(byte *)(param_1 + DAT_0040a3e8);
  if (DAT_0040a3ec < uVar5) {
    uVar1 = 0xfffffffd;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + DAT_0040a3f0);
    FUN_0040282c(auStack_384,(param_1 - uVar2) + DAT_0040a3f0,uVar2);
    iVar3 = FUN_0040b2d8(auStack_80);
    if (iVar3 == 0) {
      for (iVar3 = 0; iVar3 < (int)(uVar5 / 0x10); iVar3 = iVar3 + 1) {
        iVar4 = FUN_0040b2e4(auStack_80,param_1 + iVar3 * 0x10,0x10);
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
      }
      if ((uVar5 % 0x10 == 0) ||
         (iVar3 = FUN_0040b2e4(auStack_80,param_1 + iVar3 * 0x10,uVar5 % 0x10), iVar3 == 0)) {
        uVar1 = FUN_0040b2f8(auStack_80,auStack_384,uVar2,auStack_284);
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



//==== FUNC FUN_0040a1b2 @ 0040a1b2 ====

undefined4 FUN_0040a1b2(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined auStack_588 [516];
  undefined auStack_384 [256];
  undefined auStack_284 [516];
  undefined auStack_80 [92];
  
  FUN_0040284c(auStack_588,DAT_0040a3f4,0x204);
  FUN_0040282c(auStack_284,auStack_588,0x204);
  uVar5 = (uint)*(byte *)(param_1 + DAT_0040a3f8) * 0x1000000 +
          (uint)*(byte *)(param_1 + DAT_0040a3fc) * 0x10000 +
          (uint)*(byte *)(param_1 + DAT_0040a400) * 0x100 + (uint)*(byte *)(param_1 + DAT_0040a404);
  if (DAT_0040a408 < uVar5) {
    uVar1 = 0xfffffffd;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + DAT_0040a40c);
    FUN_0040282c(auStack_384,(param_1 - uVar2) + DAT_0040a40c,uVar2);
    iVar3 = FUN_0040b2d8(auStack_80);
    if (iVar3 == 0) {
      for (iVar3 = 0; iVar3 < (int)(uVar5 / 0x10); iVar3 = iVar3 + 1) {
        iVar4 = FUN_0040b2e4(auStack_80,param_1 + iVar3 * 0x10,0x10);
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
      }
      if ((uVar5 % 0x10 == 0) ||
         (iVar3 = FUN_0040b2e4(auStack_80,param_1 + iVar3 * 0x10,uVar5 % 0x10), iVar3 == 0)) {
        uVar1 = FUN_0040b2f8(auStack_80,auStack_384,uVar2,auStack_284);
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



//==== FUNC FUN_0040a2b4 @ 0040a2b4 ====

undefined4 FUN_0040a2b4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined auStack_588 [516];
  undefined auStack_384 [516];
  undefined auStack_180 [92];
  undefined auStack_124 [256];
  
  FUN_0040284c(auStack_588,DAT_0040a410,0x204);
  FUN_0040282c(auStack_384,auStack_588,0x204);
  uVar5 = (uint)*(byte *)(param_1 + 0xfffc) * 0x1000000 +
          (uint)*(byte *)(param_1 + 0xfffd) * 0x10000 + (uint)*(byte *)(param_1 + 0xfffe) * 0x100 +
          (uint)*(byte *)(param_1 + 0xffff);
  if (uVar5 < 0xff21) {
    uVar2 = (uint)*(byte *)(param_1 + 0xfffb);
    FUN_0040282c(auStack_124,(param_1 - uVar2) + 0xfffb,uVar2);
    iVar3 = FUN_0040b2d8(auStack_180);
    if (iVar3 == 0) {
      for (iVar3 = 0; iVar3 < (int)(uVar5 / 0x10); iVar3 = iVar3 + 1) {
        iVar4 = FUN_0040b2e4(auStack_180,param_1 + iVar3 * 0x10,0x10);
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
      }
      if ((uVar5 % 0x10 == 0) ||
         (iVar3 = FUN_0040b2e4(auStack_180,param_1 + iVar3 * 0x10,uVar5 % 0x10), iVar3 == 0)) {
        uVar1 = FUN_0040b2f8(auStack_180,auStack_124,uVar2,auStack_384);
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



//==== FUNC FUN_0040a414 @ 0040a414 ====

undefined2 FUN_0040a414(undefined *param_1)

{
  return CONCAT11(*param_1,param_1[1]);
}



//==== FUNC FUN_0040a420 @ 0040a420 ====

void FUN_0040a420(undefined *param_1,undefined2 param_2)

{
  *param_1 = (char)((ushort)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}



//==== FUNC FUN_0040a42c @ 0040a42c ====

void FUN_0040a42c(undefined *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}



//==== FUNC FUN_0040a43c @ 0040a43c ====

void FUN_0040a43c(byte *param_1,byte param_2,char param_3)

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



//==== FUNC FUN_0040a490 @ 0040a490 ====

undefined8 FUN_0040a490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040b060(param_1,param_2);
  *DAT_0040a538 = iVar1;
  if (*DAT_0040a538 == 0) {
    iVar1 = *DAT_0040a538;
  }
  else {
    iVar1 = 1;
  }
  return CONCAT44(param_4,iVar1);
}



//==== FUNC FUN_0040a4b4 @ 0040a4b4 ====

undefined8 FUN_0040a4b4(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040b076(param_1,param_2);
  *DAT_0040a538 = iVar1;
  if (*DAT_0040a538 == 0) {
    iVar1 = *DAT_0040a538;
  }
  else {
    iVar1 = 1;
  }
  return CONCAT44(param_4,iVar1);
}



//==== FUNC FUN_0040a4da @ 0040a4da ====

undefined8 FUN_0040a4da(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040b0ba(param_1,param_2,param_3,param_4);
  *DAT_0040a538 = iVar1;
  if (*DAT_0040a538 == 0) {
    iVar1 = *DAT_0040a538;
  }
  else {
    iVar1 = 0;
  }
  return CONCAT44(param_4,iVar1);
}



//==== FUNC FUN_0040a506 @ 0040a506 ====

undefined8 FUN_0040a506(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < (uint)param_2; uVar1 = (uVar1 & 0xff) + 1) {
    unaff_r6 = FUN_0040a4b4((uVar1 & 0xff) * 0x2000 + param_1,2);
  }
  return CONCAT44(param_4,unaff_r6);
}



//==== FUNC FUN_0040a53c @ 0040a53c ====

void FUN_0040a53c(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[4] = param_1[5];
  *param_1 = DAT_0040aebc;
  param_1[1] = DAT_0040aec0;
  param_1[2] = DAT_0040aec4;
  param_1[3] = DAT_0040aec8;
  return;
}



//==== FUNC FUN_0040a55e @ 0040a55e ====

undefined4 FUN_0040a55e(int param_1,int param_2,uint param_3,undefined4 param_4)

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
    FUN_0040ae3c(param_1 + uVar1 + 0x18,param_2,uVar2);
    FUN_0040a632(param_1,param_1 + 0x18);
    for (; uVar2 + 0x3f < param_3; uVar2 = uVar2 + 0x40) {
      FUN_0040a632(param_1,param_2 + uVar2);
    }
    uVar1 = 0;
  }
  FUN_0040ae3c(param_1 + uVar1 + 0x18,param_2 + uVar2,param_3 - uVar2);
  return param_4;
}



//==== FUNC FUN_0040a5d8 @ 0040a5d8 ====

undefined8 FUN_0040a5d8(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uStack_20;
  
  FUN_0040adbe(&uStack_20,param_2 + 0x10,8);
  uVar1 = (uint)(*(int *)(param_2 + 0x10) << 0x17) >> 0x1a;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  FUN_0040a55e(param_2,DAT_0040aecc,iVar2);
  FUN_0040a55e(param_2,&uStack_20,8);
  FUN_0040adbe(param_1,param_2,0x10);
  FUN_0040ae52(param_2,0,0x58);
  return uStack_20;
}



//==== FUNC FUN_0040a632 @ 0040a632 ====

void FUN_0040a632(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_60;
  int local_5c;
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
  
  iVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  FUN_0040ae00(&local_60,param_2,0x40);
  uVar5 = DAT_0040aed0 + local_60 + (uVar2 & uVar1 | uVar3 & ~uVar1) + iVar4;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_0040aed4 + local_5c + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_0040aed8 + local_58 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_0040aedc + local_54 + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_0040aee0 + local_50 + (uVar2 & uVar1 | uVar3 & ~uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_0040aee4 + local_4c + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_0040aee8 + local_48 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_0040aeec + local_44 + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_0040aef0 + local_40 + (uVar2 & uVar1 | uVar3 & ~uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_0040aef4 + local_3c + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_0040aef8 + local_38 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_0040aefc + local_34 + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_0040af00 + local_30 + (uVar2 & uVar1 | uVar3 & ~uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_0040af04 + local_2c + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_0040af08 + local_28 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_0040af0c + local_24 + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_0040af10 + local_5c + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_0040af14 + local_48 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_0040af18 + local_34 + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_0040af1c + local_60 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_0040af20 + local_4c + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_0040af24 + local_38 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_0040af28 + local_24 + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_0040af2c + local_50 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_0040af30 + local_3c + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_0040af34 + local_28 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_0040af38 + local_54 + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_0040af3c + local_40 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_0040af40 + local_2c + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_0040af44 + local_58 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_0040af48 + local_44 + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_0040af4c + local_30 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_0040af50 + local_4c + (uVar3 ^ uVar2 ^ uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_0040af54 + local_40 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_0040af58 + local_34 + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_0040af5c + local_28 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_0040af60 + local_5c + (uVar3 ^ uVar2 ^ uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_0040af64 + local_50 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_0040af68 + local_44 + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_0040af6c + local_38 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_0040af70 + local_2c + (uVar3 ^ uVar2 ^ uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_0040af74 + local_60 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_0040af78 + local_54 + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_0040af7c + local_48 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_0040af80 + local_3c + (uVar3 ^ uVar2 ^ uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_0040af84 + local_30 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_0040af88 + local_24 + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_0040af8c + local_58 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_0040af90 + local_60 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_0040af94 + local_44 + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_0040af98 + local_28 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_0040af9c + local_4c + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000);
  uVar5 = DAT_0040afa0 + local_30 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_0040afa4 + local_54 + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_0040afa8 + local_38 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_0040afac + local_5c + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000);
  uVar5 = DAT_0040afb0 + local_40 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_0040afb4 + local_24 + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_0040afb8 + local_48 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_0040afbc + local_2c + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000);
  uVar5 = DAT_0040afc0 + local_50 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_0040afc4 + local_34 + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_0040afc8 + local_58 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_0040afcc + local_3c + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  *param_1 = uVar5 + *param_1;
  param_1[1] = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000) + param_1[1];
  param_1[2] = uVar2 + param_1[2];
  param_1[3] = uVar3 + param_1[3];
  FUN_0040ae52(&local_60,0,0x40);
  return;
}



//==== FUNC FUN_0040adbe @ 0040adbe ====

void FUN_0040adbe(int param_1,int param_2,uint param_3)

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



//==== FUNC FUN_0040ae00 @ 0040ae00 ====

void FUN_0040ae00(int param_1,int param_2,uint param_3)

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



//==== FUNC FUN_0040ae3c @ 0040ae3c ====

void FUN_0040ae3c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined *)(param_1 + uVar1) = *(undefined *)(param_2 + uVar1);
  }
  return;
}



//==== FUNC FUN_0040ae52 @ 0040ae52 ====

void FUN_0040ae52(int param_1,undefined param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined *)(param_1 + uVar1) = param_2;
  }
  return;
}



//==== FUNC FUN_0040ae66 @ 0040ae66 ====

int FUN_0040ae66(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined local_78 [104];
  
  FUN_0040a53c(local_78 + 0x10);
  FUN_0040a55e(local_78 + 0x10,param_1,param_2);
  FUN_0040a5d8(local_78,local_78 + 0x10);
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    FUN_0040a43c(DAT_0040afd0 + iVar1 * 2,local_78[iVar1],0);
  }
  for (iVar1 = 0; iVar1 < 0x20; iVar1 = iVar1 + 1) {
    *(undefined *)(DAT_0040afd4 + iVar1) = *(undefined *)(DAT_0040afd0 + iVar1);
  }
  return DAT_0040afd4;
}



//==== FUNC thunk_EXT_FUN_20402284 @ 0040b00c ====

void thunk_EXT_FUN_20402284(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040b00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0040b010)();
  return;
}



//==== FUNC FUN_0040b014 @ 0040b014 ====

void FUN_0040b014(undefined4 *param_1,int param_2,undefined2 *param_3,ushort *param_4)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_0040b218;
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = (short)(param_2 - 0x400000U >> 9);
  }
  if (param_4 != (ushort *)0x0) {
    *param_4 = (ushort)param_2 & 0x1ff;
  }
  return;
}



//==== FUNC FUN_0040b042 @ 0040b042 ====

void FUN_0040b042(undefined4 param_1,ushort param_2,ushort param_3,int *param_4)

{
  if (param_4 != (int *)0x0) {
    *param_4 = (uint)param_2 * 0x200 + (uint)param_3 + 0x400000;
  }
  return;
}



//==== FUNC FUN_0040b060 @ 0040b060 ====

longlong FUN_0040b060(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  FUN_0040b424(DAT_0040b218,param_1,param_2);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_0040b076 @ 0040b076 ====

undefined8 FUN_0040b076(uint param_1,ushort param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  if (param_2 < 4) {
    if ((param_1 & 0x1ff) == 0) {
      FUN_0040b014(local_14,param_1,&local_18,0);
      iVar2 = FUN_0040b442(local_14[0],7,param_2 | (ushort)local_18);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x10;
      }
    }
    else {
      uVar1 = 0x11;
    }
  }
  else {
    uVar1 = 0x11;
  }
  return CONCAT44(local_18,uVar1);
}



//==== FUNC FUN_0040b0ba @ 0040b0ba ====

int FUN_0040b0ba(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort local_50;
  short local_4e;
  int local_4c;
  int local_48;
  undefined4 *local_44;
  undefined4 local_40;
  ushort local_3c;
  int local_38;
  uint local_34;
  undefined4 local_2c;
  int local_28;
  
  local_4c = DAT_0040b21c;
  local_2c = param_1;
  local_28 = param_4;
  FUN_0040b014(&local_40,param_1,&local_4e,&local_50);
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar3 = param_3;
    if (0x200 - local_50 < param_3) {
      uVar3 = 0x200 - local_50;
    }
    FUN_0040b042(local_40,local_4e,0,&local_44);
    local_3c = (0x200 - local_50) - (short)uVar3;
    FUN_0040282c(local_4c,local_44,local_50);
    FUN_0040282c(local_4c + (uint)local_50,param_2,uVar3);
    local_34 = (uint)local_3c;
    local_38 = (int)local_44 + uVar3 + local_50;
    FUN_0040282c(local_4c + (uint)local_50 + uVar3,local_38,local_34);
    puVar2 = local_44;
    for (uVar1 = 0; uVar1 < 0x80; uVar1 = uVar1 + 1) {
      *puVar2 = *(undefined4 *)(DAT_0040b21c + uVar1 * 4);
      puVar2 = puVar2 + 1;
    }
    if (local_28 == 0) {
      local_48 = FUN_0040b442(local_40,1,local_4e);
    }
    else {
      local_48 = FUN_0040b442(local_40,3,local_4e);
    }
    if (local_48 != 0) break;
    param_2 = uVar3 + param_2;
    param_3 = param_3 - uVar3;
    local_4e = local_4e + 1;
    local_50 = 0;
  }
  return local_48;
}



//==== FUNC FUN_0040b1d4 @ 0040b1d4 ====

undefined4 FUN_0040b1d4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_24 [5];
  
  iVar1 = thunk_EXT_FUN_20402284(DAT_0040b218,0xe,0xf,local_24,4);
  if (iVar1 == 0) {
    if (4 < param_2) {
      param_2 = 4;
    }
    for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar3 + 1) {
      *(undefined4 *)(param_1 + uVar3 * 4) = local_24[uVar3];
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
  }
  return uVar2;
}



//==== FUNC FUN_0040b220 @ 0040b220 ====

void FUN_0040b220(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

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
  
  if (param_2 < param_1) {
    param_4 = (undefined4 *)(param_3 + (int)param_2);
  }
  if (param_2 >= param_1 || param_4 <= param_1) {
    if (param_3 != 0) {
      uVar5 = (uint)param_2 & 3;
      while (uVar5 != 0) {
        param_3 = param_3 - 1;
        *(undefined *)param_1 = *(undefined *)param_2;
        if (param_3 == 0) {
          return;
        }
        uVar5 = (uint)(undefined4 *)((int)param_2 + 1) & 3;
        param_1 = (undefined4 *)((int)param_1 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
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
  param_1 = (undefined4 *)((int)param_1 + param_3);
  do {
    if (((uint)param_4 & 3) == 0) {
      if (((uint)param_1 & 3) == 0) {
        while (0xf < param_3) {
          puVar3 = param_4 + -1;
          uVar8 = param_4[-2];
          uVar7 = param_4[-3];
          param_4 = param_4 + -4;
          uVar6 = *param_4;
          param_1[-1] = *puVar3;
          param_1[-2] = uVar8;
          param_1[-3] = uVar7;
          param_1 = param_1 + -4;
          *param_1 = uVar6;
          param_3 = param_3 - 0x10;
        }
        do {
          uVar5 = param_3;
          bVar10 = 3 < uVar5;
          param_3 = uVar5 - 4;
          if (bVar10) {
            param_4 = param_4 + -1;
            param_1 = param_1 + -1;
            *param_1 = *param_4;
          }
        } while (bVar10 && param_3 != 0);
        if (!bVar10) {
          param_3 = uVar5;
        }
      }
      else {
        while (7 < param_3) {
          puVar3 = param_4 + -1;
          param_4 = param_4 + -2;
          uVar6 = *param_4;
          param_1[-1] = *puVar3;
          param_1 = param_1 + -2;
          *param_1 = uVar6;
          param_3 = param_3 - 8;
        }
      }
      do {
        bVar10 = param_3 != 0;
        param_3 = param_3 - 1;
        if (bVar10) {
          param_4 = (undefined4 *)((int)param_4 + -1);
          param_1 = (undefined4 *)((int)param_1 + -1);
          *(undefined *)param_1 = *(undefined *)param_4;
        }
      } while (bVar10 && param_3 != 0);
      return;
    }
    bVar10 = param_3 != 0;
    param_3 = param_3 - 1;
    if (bVar10) {
      param_4 = (undefined4 *)((int)param_4 + -1);
      param_1 = (undefined4 *)((int)param_1 + -1);
      *(undefined *)param_1 = *(undefined *)param_4;
    }
  } while (bVar10 && param_3 != 0);
  return;
}



//==== FUNC FUN_0040b298 @ 0040b298 ====

undefined4 FUN_0040b298(undefined4 *param_1)

{
  *param_1 = 5;
  FUN_0040a53c(param_1 + 1);
  return 0;
}



//==== FUNC FUN_0040b2aa @ 0040b2aa ====

undefined4 FUN_0040b2aa(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0040a55e(param_1 + 4,param_2,param_3);
  return 0;
}



//==== FUNC FUN_0040b2c0 @ 0040b2c0 ====

undefined4 FUN_0040b2c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0x10;
  FUN_0040a5d8(param_2,param_1 + 4);
  return 0;
}



//==== FUNC FUN_0040b2d8 @ 0040b2d8 ====

void FUN_0040b2d8(undefined4 param_1)

{
  FUN_0040b298(param_1);
  return;
}



//==== FUNC FUN_0040b2e4 @ 0040b2e4 ====

void FUN_0040b2e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0040b2aa(param_1,param_2,param_3);
  return;
}



//==== FUNC FUN_0040b2f8 @ 0040b2f8 ====

int FUN_0040b2f8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_154;
  undefined auStack_150 [4];
  undefined auStack_14c [16];
  undefined auStack_13c [256];
  undefined auStack_3c [36];
  
  if (param_3 < 0x101) {
    iVar1 = FUN_0040b2c0(param_1,auStack_14c,auStack_150);
    if (iVar1 == 0) {
      FUN_0040b392(auStack_3c,auStack_14c);
      iVar2 = FUN_0040b490(auStack_13c,&local_154,param_2,param_3,param_4);
      if (iVar2 == 0) {
        if ((local_154 == 0x22) && (iVar2 = FUN_0040b640(auStack_13c,auStack_3c,0x22), iVar2 == 0))
        {
          FUN_0040b298(param_1);
        }
        else {
          iVar1 = 0x40b;
        }
      }
      else {
        iVar1 = 0x40a;
      }
    }
    FUN_0040b610(auStack_14c,0,0x10);
    FUN_0040b610(auStack_3c,0,0x22);
    FUN_0040b610(auStack_13c,0,0x100);
  }
  else {
    iVar1 = 0x406;
  }
  return iVar1;
}



//==== FUNC FUN_0040b392 @ 0040b392 ====

undefined4 FUN_0040b392(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040b628(param_1,DAT_0040b3c4,0xd);
  *(undefined *)(param_1 + 0xd) = 5;
  FUN_0040b628(param_1 + 0xe,DAT_0040b3c8,4);
  FUN_0040b628(param_1 + 0x12,param_2,0x10);
  return param_4;
}



//==== FUNC thunk_EXT_FUN_204022e8 @ 0040b3cc ====

void thunk_EXT_FUN_204022e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040b3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0040b3d0)();
  return;
}



//==== FUNC FUN_0040b3d4 @ 0040b3d4 ====

bool FUN_0040b3d4(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  DataMemoryBarrier(0x1f);
  *DAT_0040b488 = 0;
  return iVar2 == 0;
}



//==== FUNC FUN_0040b3fa @ 0040b3fa ====

bool FUN_0040b3fa(int param_1)

{
  return param_1 != 0;
}



//==== FUNC FUN_0040b408 @ 0040b408 ====

void FUN_0040b408(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040b3fa(param_1);
  if (iVar1 != 0) {
    *DAT_0040b488 = 1;
    DataMemoryBarrier(0x1f);
    enableIRQinterrupts();
  }
  return;
}



//==== FUNC FUN_0040b424 @ 0040b424 ====

undefined4 FUN_0040b424(uint *param_1,uint param_2,uint param_3)

{
  *param_1 = (param_3 & 0xf) << 8 | param_2 | 0x4000000;
  return 0;
}



//==== FUNC FUN_0040b442 @ 0040b442 ====

undefined4 FUN_0040b442(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0xe) || (param_2 == 0xf)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_0040b3d4();
    uVar1 = thunk_EXT_FUN_204022e8
                      (param_1,DAT_0040b48c & param_3 << 8 | param_2 & 0xff | 0x5a000000);
    FUN_0040b408(uVar2);
  }
  return uVar1;
}



//==== FUNC FUN_0040b490 @ 0040b490 ====

int FUN_0040b490(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_12c;
  char local_128 [260];
  
  uVar1 = *param_5 + 7U >> 3;
  if (uVar1 < param_4) {
    iVar2 = 0x406;
  }
  else {
    iVar2 = FUN_0040b558(local_128,&local_12c,param_3,param_4,param_5);
    if (iVar2 == 0) {
      if (local_12c == uVar1) {
        if ((local_128[0] == '\0') && (local_128[1] == '\x01')) {
          for (uVar3 = 2; (uVar3 < uVar1 - 1 && (local_128[uVar3] == -1)); uVar3 = uVar3 + 1) {
          }
          if (local_128[uVar3] == '\0') {
            *param_2 = uVar1 - (uVar3 + 1);
            if (uVar1 < *param_2 + 0xbU) {
              iVar2 = 0x401;
            }
            else {
              FUN_0040b628(param_1,local_128 + uVar3 + 1,*param_2);
              FUN_0040b610(local_128,0,0x100);
              iVar2 = 0;
            }
          }
          else {
            iVar2 = 0x401;
          }
        }
        else {
          iVar2 = 0x401;
        }
      }
      else {
        iVar2 = 0x406;
      }
    }
  }
  return iVar2;
}



//==== FUNC FUN_0040b558 @ 0040b558 ====

undefined4
FUN_0040b558(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_430 [260];
  undefined auStack_32c [260];
  undefined auStack_228 [260];
  undefined auStack_124 [260];
  
  FUN_0040b65c(auStack_32c,0x41,param_3,param_4);
  FUN_0040b65c(auStack_430,0x41,param_5 + 1,0x100);
  FUN_0040b65c(auStack_228,0x41,param_5 + 0x41,0x100);
  uVar1 = FUN_0040bbd2(auStack_430,0x41);
  uVar2 = FUN_0040bbd2(auStack_228,0x41);
  iVar3 = FUN_0040bb9a(auStack_32c,auStack_430,uVar1);
  if (iVar3 < 0) {
    FUN_0040ba92(auStack_124,auStack_32c,auStack_228,uVar2,auStack_430,uVar1);
    *param_2 = *param_5 + 7U >> 3;
    FUN_0040b6b4(param_1,*param_2,auStack_124,uVar1);
    FUN_0040b610(auStack_124,0,0x104);
    FUN_0040b610(auStack_32c,0,0x104);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x401;
  }
  return uVar1;
}



//==== FUNC FUN_0040b610 @ 0040b610 ====

void FUN_0040b610(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00409d2c(param_1,param_3,param_2);
  }
  return;
}



//==== FUNC FUN_0040b628 @ 0040b628 ====

void FUN_0040b628(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_0040282c(param_1,param_2,param_3);
  }
  return;
}



//==== FUNC FUN_0040b640 @ 0040b640 ====

undefined4 FUN_0040b640(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00409dcc(param_1,param_2,param_3);
  }
  return uVar1;
}



//==== FUNC FUN_0040b65c @ 0040b65c ====

void FUN_0040b65c(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  param_4 = param_4 + -1;
  while ((uVar3 < param_2 && (-1 < param_4))) {
    uVar1 = 0;
    for (uVar2 = 0; (-1 < param_4 && (uVar2 < 0x20)); uVar2 = uVar2 + 8) {
      uVar1 = (uint)*(byte *)(param_3 + param_4) << (uVar2 & 0xff) | uVar1;
      param_4 = param_4 + -1;
    }
    *(uint *)(param_1 + uVar3 * 4) = uVar1;
    uVar3 = uVar3 + 1;
  }
  for (; uVar3 < param_2; uVar3 = uVar3 + 1) {
    *(undefined4 *)(param_1 + uVar3 * 4) = 0;
  }
  return;
}



//==== FUNC FUN_0040b6b4 @ 0040b6b4 ====

void FUN_0040b6b4(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  param_2 = param_2 + -1;
  while ((uVar1 < param_4 && (-1 < param_2))) {
    uVar3 = *(uint *)(param_3 + uVar1 * 4);
    for (uVar2 = 0; (-1 < param_2 && (uVar2 < 0x20)); uVar2 = uVar2 + 8) {
      *(char *)(param_1 + param_2) = (char)(uVar3 >> (uVar2 & 0xff));
      param_2 = param_2 + -1;
    }
    uVar1 = uVar1 + 1;
  }
  for (; -1 < param_2; param_2 = param_2 + -1) {
    *(undefined *)(param_1 + param_2) = 0;
  }
  return;
}



//==== FUNC FUN_0040b706 @ 0040b706 ====

void FUN_0040b706(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined4 *)(param_1 + uVar1 * 4) = *(undefined4 *)(param_2 + uVar1 * 4);
  }
  return;
}



//==== FUNC FUN_0040b720 @ 0040b720 ====

void FUN_0040b720(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    *(undefined4 *)(param_1 + uVar1 * 4) = 0;
  }
  return;
}



//==== FUNC FUN_0040b734 @ 0040b734 ====

void FUN_0040b734(int param_1,int param_2,int param_3,uint param_4)

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
  return;
}



//==== FUNC FUN_0040b792 @ 0040b792 ====

void FUN_0040b792(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int aiStack_22c [131];
  
  FUN_0040b720(aiStack_22c,param_4 << 1);
  uVar1 = FUN_0040bbd2(param_2,param_4);
  iVar2 = FUN_0040bbd2(param_3,param_4);
  for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
    iVar3 = FUN_0040bbec(aiStack_22c + uVar4,aiStack_22c + uVar4,
                         *(undefined4 *)(param_2 + uVar4 * 4),param_3,iVar2);
    aiStack_22c[iVar2 + uVar4] = iVar3 + aiStack_22c[iVar2 + uVar4];
  }
  FUN_0040b706(param_1,aiStack_22c,param_4 << 1);
  FUN_0040b610(aiStack_22c,0,0x208);
  return;
}



//==== FUNC FUN_0040b81a @ 0040b81a ====

uint FUN_0040b81a(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 < 0x20) {
    uVar1 = 0;
    for (uVar3 = 0; uVar3 < param_4; uVar3 = uVar3 + 1) {
      uVar2 = *(uint *)(param_2 + uVar3 * 4);
      *(uint *)(param_1 + uVar3 * 4) = uVar2 << (param_3 & 0xff) | uVar1;
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



//==== FUNC FUN_0040b860 @ 0040b860 ====

uint FUN_0040b860(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 < 0x20) {
    uVar1 = 0;
    for (param_4 = param_4 + -1; -1 < param_4; param_4 = param_4 + -1) {
      uVar2 = *(uint *)(param_2 + param_4 * 4);
      *(uint *)(param_1 + param_4 * 4) = uVar2 >> (param_3 & 0xff) | uVar1;
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



//==== FUNC FUN_0040b8a4 @ 0040b8a4 ====

void FUN_0040b8a4(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int local_344;
  int local_340;
  int local_33c;
  undefined auStack_338 [256];
  undefined auStack_238 [4];
  int aiStack_234 [132];
  
  iVar1 = FUN_0040bbd2(param_5,param_6);
  if (iVar1 != 0) {
    local_340 = FUN_0040bcee(*(undefined4 *)(param_5 + iVar1 * 4 + -4));
    local_340 = 0x20 - local_340;
    FUN_0040b720(aiStack_234,iVar1);
    iVar2 = FUN_0040b81a(aiStack_234,param_3,local_340,param_4);
    aiStack_234[param_4] = iVar2;
    FUN_0040b81a(auStack_338,param_5,local_340,iVar1);
    local_33c = *(int *)(auStack_338 + iVar1 * 4 + -4);
    FUN_0040b720(param_1,param_4);
    for (param_4 = param_4 - iVar1; -1 < param_4; param_4 = param_4 + -1) {
      if (local_33c == -1) {
        local_344 = aiStack_234[iVar1 + param_4];
      }
      else {
        FUN_0040bd90(&local_344,auStack_238 + (iVar1 + param_4) * 4,local_33c + 1);
      }
      iVar2 = FUN_0040bc66(aiStack_234 + param_4,aiStack_234 + param_4,local_344,auStack_338,iVar1);
      aiStack_234[iVar1 + param_4] = aiStack_234[iVar1 + param_4] - iVar2;
      while ((aiStack_234[iVar1 + param_4] != 0 ||
             (iVar2 = FUN_0040bb9a(aiStack_234 + param_4,auStack_338,iVar1), -1 < iVar2))) {
        local_344 = local_344 + 1;
        iVar2 = FUN_0040b734(aiStack_234 + param_4,aiStack_234 + param_4,auStack_338,iVar1);
        aiStack_234[iVar1 + param_4] = aiStack_234[iVar1 + param_4] - iVar2;
      }
      *(int *)(param_1 + param_4 * 4) = local_344;
    }
    FUN_0040b720(param_2,param_6);
    FUN_0040b860(param_2,aiStack_234,local_340,iVar1);
    FUN_0040b610(aiStack_234,0,0x20c);
    FUN_0040b610(auStack_338,0,0x104);
  }
  return;
}



//==== FUNC FUN_0040ba12 @ 0040ba12 ====

void FUN_0040ba12(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined auStack_220 [520];
  
  FUN_0040b8a4(auStack_220,param_1,param_2,param_3,param_4,param_5);
  FUN_0040b610(auStack_220,0,0x208);
  return;
}



//==== FUNC FUN_0040ba4c @ 0040ba4c ====

void FUN_0040ba4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined auStack_224 [524];
  
  FUN_0040b792(auStack_224,param_2,param_3,param_5);
  FUN_0040ba12(param_1,auStack_224,param_5 << 1,param_4,param_5);
  FUN_0040b610(auStack_224,0,0x208);
  return;
}



//==== FUNC FUN_0040ba92 @ 0040ba92 ====

void FUN_0040ba92(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_438 [65];
  undefined auStack_334 [260];
  undefined auStack_230 [260];
  undefined auStack_12c [264];
  
  FUN_0040b706(auStack_334,param_2,param_6);
  FUN_0040ba4c(auStack_230,auStack_334,param_2,param_5,param_6);
  FUN_0040ba4c(auStack_12c,auStack_230,param_2,param_5,param_6);
  FUN_0040b720(local_438,param_6);
  local_438[0] = 1;
  iVar1 = FUN_0040bbd2(param_3,param_4);
  iVar3 = iVar1;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    uVar2 = *(uint *)(param_3 + iVar3 * 4);
    uVar5 = 0x20;
    if (iVar3 == iVar1 + -1) {
      for (; uVar2 >> 0x1e == 0; uVar2 = uVar2 << 2) {
        uVar5 = uVar5 - 2;
      }
    }
    for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 2) {
      FUN_0040ba4c(local_438,local_438,local_438,param_5,param_6);
      FUN_0040ba4c(local_438,local_438,local_438,param_5,param_6);
      if (uVar2 >> 0x1e != 0) {
        FUN_0040ba4c(local_438,local_438,local_438 + (uVar2 >> 0x1e) * 0x41,param_5,param_6);
      }
      uVar2 = uVar2 << 2;
    }
  }
  FUN_0040b706(param_1,local_438,param_6);
  FUN_0040b610(auStack_334,0,0x30c);
  FUN_0040b610(local_438,0,0x104);
  return;
}



//==== FUNC FUN_0040bb9a @ 0040bb9a ====

undefined4 FUN_0040bb9a(int param_1,int param_2,int param_3)

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



//==== FUNC FUN_0040bbd2 @ 0040bbd2 ====

int FUN_0040bbd2(int param_1,int param_2)

{
  for (param_2 = param_2 + -1; (-1 < param_2 && (*(int *)(param_1 + param_2 * 4) == 0));
      param_2 = param_2 + -1) {
  }
  return param_2 + 1;
}



//==== FUNC FUN_0040bbec @ 0040bbec ====

undefined8 FUN_0040bbec(int param_1,int param_2,uint param_3,int param_4,uint param_5)

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
      FUN_0040bd04(&local_28,param_3,*(undefined4 *)(param_4 + uVar2 * 4));
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



//==== FUNC FUN_0040bc66 @ 0040bc66 ====

undefined8 FUN_0040bc66(int param_1,int param_2,int param_3,int param_4,uint param_5)

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
    for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
      FUN_0040bd04(&local_28,param_3,*(undefined4 *)(param_4 + uVar3 * 4));
      *(int *)(param_1 + uVar3 * 4) = *(int *)(param_2 + uVar3 * 4) - iVar1;
      uVar2 = (uint)(-iVar1 - 1U < *(uint *)(param_1 + uVar3 * 4));
      *(int *)(param_1 + uVar3 * 4) = *(int *)(param_1 + uVar3 * 4) - local_28;
      if (-local_28 - 1U < *(uint *)(param_1 + uVar3 * 4)) {
        uVar2 = uVar2 + 1;
      }
      iVar1 = local_24 + uVar2;
    }
  }
  return CONCAT44(local_28,iVar1);
}



//==== FUNC FUN_0040bcee @ 0040bcee ====

void FUN_0040bcee(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; (uVar1 < 0x20 && (param_1 != 0)); param_1 = param_1 >> 1) {
    uVar1 = uVar1 + 1;
  }
  return;
}



//==== FUNC FUN_0040bd04 @ 0040bd04 ====

void FUN_0040bd04(uint *param_1,uint param_2,uint param_3)

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



//==== FUNC FUN_0040bd90 @ 0040bd90 ====

uint FUN_0040bd90(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint local_20;
  uint local_1c;
  
  local_1c = param_2[1];
  if (param_3 >> 0x10 == 0xffff) {
    uVar4 = (ushort)(local_1c >> 0x10);
  }
  else {
    uVar4 = (ushort)(local_1c / ((param_3 >> 0x10) + 1));
  }
  uVar3 = param_3 >> 0x10;
  uVar1 = param_3 & 0xffff;
  uVar2 = uVar1 * uVar4;
  uVar5 = (uint)uVar4;
  local_20 = *param_2 + uVar2 * -0x10000;
  if (uVar2 * -0x10000 - 1 < local_20) {
    local_1c = local_1c - 1;
  }
  local_1c = (local_1c - (uVar2 >> 0x10)) - uVar3 * uVar5;
  while ((uVar3 < local_1c || ((local_1c == uVar3 && (uVar1 << 0x10 <= local_20))))) {
    local_20 = local_20 + uVar1 * -0x10000;
    if (uVar1 * -0x10000 - 1 < local_20) {
      local_1c = local_1c - 1;
    }
    local_1c = local_1c - uVar3;
    uVar5 = uVar5 + 1;
  }
  if (uVar3 == 0xffff) {
    uVar4 = (ushort)local_1c;
  }
  else {
    uVar4 = (ushort)(((local_20 >> 0x10) + local_1c * 0x10000) / (uVar3 + 1));
  }
  uVar2 = (uint)uVar4;
  uVar3 = uVar3 * uVar2;
  local_20 = local_20 - uVar1 * uVar4;
  if (-(uVar1 * uVar4) - 1 < local_20) {
    local_1c = local_1c - 1;
  }
  local_20 = local_20 + uVar3 * -0x10000;
  if (uVar3 * -0x10000 - 1 < local_20) {
    local_1c = local_1c - 1;
  }
  local_1c = local_1c - (uVar3 >> 0x10);
  while ((local_1c != 0 || (param_3 <= local_20))) {
    local_20 = local_20 - param_3;
    if (-param_3 - 1 < local_20) {
      local_1c = local_1c + -1;
    }
    uVar2 = uVar2 + 1;
  }
  *param_1 = uVar5 * 0x10000 + (uVar2 & 0xffff);
  return local_20;
}



//==== FUNC FUN_0040ca14 @ 0040ca14 ====

undefined4 FUN_0040ca14(void)

{
  *DAT_0040ca58 = DAT_0040ca54 & 0xffffff80;
  return 1;
}



//==== FUNC FUN_0040ca2a @ 0040ca2a ====

undefined4 FUN_0040ca2a(void)

{
  undefined4 unaff_r7;
  
  *DAT_0040ca58 = DAT_0040ca5c;
  FUN_0040ca14();
  FUN_0040ca64();
  FUN_00409768();
  FUN_004097ee();
  return unaff_r7;
}



//==== FUNC FUN_0040ca64 @ 0040ca64 ====

void FUN_0040ca64(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_0040ca88 + DAT_0040ca88);
  for (piVar1 = (int *)((int)&DAT_0040ca84 + DAT_0040ca84); piVar1 != piVar2;
      piVar1 = (int *)(*(code *)((int)piVar1 + *piVar1))(piVar1 + 1)) {
  }
  return;
}



//==== FUNC thunk_FUN_0040cac2 @ 0040ca8c ====

void thunk_FUN_0040cac2(uint *param_1)

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



//==== FUNC FUN_0040cac2 @ 0040cac2 ====

void FUN_0040cac2(uint *param_1)

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



//==== FUNC FUN_0040ecd0 @ 0040ecd0 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0040ecd0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



