// Ghidra decompilation dump: bootloader.bin
// range: 00400000 .. 0040ffff

//==== FUNC sub_00400140 @ 00400140 ====

int sub_00400140(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    puVar2 = (uint *)((int)puVar3 + 1);
    if (*(char *)puVar3 == '\0') goto LAB_00400176;
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
LAB_00400176:
  return (int)puVar2 - (int)((int)param_1 + 1);
}



//==== FUNC FUN_00400144 @ 00400144 ====

int FUN_00400144(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    puVar2 = (uint *)((int)puVar3 + 1);
    if (*(char *)puVar3 == '\0') goto LAB_00400176;
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
LAB_00400176:
  return (int)puVar2 - (int)((int)param_1 + 1);
}



//==== FUNC FUN_0040017c @ 0040017c ====

undefined4 * FUN_0040017c(undefined4 *param_1,uint param_2)

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



//==== FUNC FUN_00400184 @ 00400184 ====

undefined4 * FUN_00400184(int param_1,uint param_2)

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



//==== FUNC FUN_0040018c @ 0040018c ====

void FUN_0040018c(undefined4 *param_1)

{
  *param_1 = DAT_00400198;
  return;
}



//==== FUNC FUN_00400192 @ 00400192 ====

void FUN_00400192(undefined4 *param_1)

{
  *param_1 = DAT_0040019c;
  return;
}



//==== FUNC FUN_004001a0 @ 004001a0 ====

undefined4 FUN_004001a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00406f28(param_1,param_3,param_2);
  return param_1;
}



//==== FUNC FUN_004001ec @ 004001ec ====

void FUN_004001ec(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[4] = param_1[5];
  *param_1 = DAT_00400310;
  param_1[1] = DAT_00400314;
  param_1[2] = DAT_00400318;
  param_1[3] = DAT_0040031c;
  return;
}



//==== FUNC FUN_00400206 @ 00400206 ====

void FUN_00400206(int param_1,int param_2,uint param_3)

{
  *DAT_00400320 = (uint)(*(int *)(param_1 + 0x10) << 0x17) >> 0x1a;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3 * 8;
  if (*(uint *)(param_1 + 0x10) < param_3 << 3) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  *DAT_00400324 = 0x40 - *DAT_00400320;
  if (param_3 < *DAT_00400324) {
    *DAT_00400328 = 0;
  }
  else {
    FUN_00401b9e(*DAT_00400320 + param_1 + 0x18,param_2,*DAT_00400324);
    FUN_00400330(param_1,param_1 + 0x18);
    *DAT_00400328 = *DAT_00400324;
    while (*DAT_00400328 + 0x3f < param_3) {
      FUN_00400330(param_1,param_2 + *DAT_00400328);
      *DAT_00400328 = *DAT_00400328 + 0x40;
    }
    *DAT_00400320 = 0;
  }
  FUN_00401b9e(*DAT_00400320 + param_1 + 0x18,param_2 + *DAT_00400328,param_3 - *DAT_00400328);
  return;
}



//==== FUNC FUN_004002bc @ 004002bc ====

undefined8 FUN_004002bc(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uStack_20;
  
  FUN_00401b20(&uStack_20,param_2 + 0x10,8);
  uVar1 = (uint)(*(int *)(param_2 + 0x10) << 0x17) >> 0x1a;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  FUN_00400206(param_2,DAT_0040032c,iVar2);
  FUN_00400206(param_2,&uStack_20,8);
  FUN_00401b20(param_1,param_2,0x10);
  FUN_00401bd0(param_2,0,0x58);
  return uStack_20;
}



//==== FUNC FUN_00400330 @ 00400330 ====

undefined4 FUN_00400330(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *DAT_004011b0 = *param_1;
  *DAT_004011b4 = param_1[1];
  *DAT_004011b8 = param_1[2];
  *DAT_004011bc = param_1[3];
  FUN_00401b62(DAT_004011c0,param_2,0x40);
  *DAT_004011b0 =
       DAT_004011c4 +
       *DAT_004011c0 + (*DAT_004011b4 & *DAT_004011b8 | *DAT_004011bc & ~*DAT_004011b4) +
       *DAT_004011b0;
  *DAT_004011b0 = *DAT_004011b0 >> 0x19 | *DAT_004011b0 << 7;
  *DAT_004011b0 = *DAT_004011b4 + *DAT_004011b0;
  *DAT_004011bc =
       DAT_00401228 +
       DAT_004011c0[1] + (*DAT_004011b0 & *DAT_004011b4 | *DAT_004011b8 & ~*DAT_004011b0) +
       *DAT_004011bc;
  *DAT_004011bc = *DAT_004011bc >> 0x14 | *DAT_004011bc << 0xc;
  *DAT_004011bc = *DAT_004011b0 + *DAT_004011bc;
  *DAT_004011b8 =
       DAT_0040128c +
       DAT_004011c0[2] + (*DAT_004011bc & *DAT_004011b0 | *DAT_004011b4 & ~*DAT_004011bc) +
       *DAT_004011b8;
  *DAT_004011b8 = *DAT_004011b8 >> 0xf | *DAT_004011b8 << 0x11;
  *DAT_004011b8 = *DAT_004011bc + *DAT_004011b8;
  *DAT_004011b4 =
       DAT_004012f0 +
       DAT_004011c0[3] + (*DAT_004011b8 & *DAT_004011bc | *DAT_004011b0 & ~*DAT_004011b8) +
       *DAT_004011b4;
  *DAT_004011b4 = *DAT_004011b4 >> 10 | *DAT_004011b4 << 0x16;
  *DAT_004011b4 = *DAT_004011b8 + *DAT_004011b4;
  *DAT_004011b0 =
       DAT_00401354 +
       DAT_004011c0[4] + (*DAT_004011b4 & *DAT_004011b8 | *DAT_004011bc & ~*DAT_004011b4) +
       *DAT_004011b0;
  *DAT_004011b0 = *DAT_004011b0 >> 0x19 | *DAT_004011b0 << 7;
  *DAT_004011b0 = *DAT_004011b4 + *DAT_004011b0;
  *DAT_004011bc =
       DAT_004013b8 +
       DAT_004011c0[5] + (*DAT_004011b0 & *DAT_004011b4 | *DAT_004011b8 & ~*DAT_004011b0) +
       *DAT_004011bc;
  *DAT_004011bc = *DAT_004011bc >> 0x14 | *DAT_004011bc << 0xc;
  *DAT_004011bc = *DAT_004011b0 + *DAT_004011bc;
  *DAT_004011b8 =
       DAT_0040141c +
       DAT_004011c0[6] + (*DAT_004011bc & *DAT_004011b0 | *DAT_004011b4 & ~*DAT_004011bc) +
       *DAT_004011b8;
  *DAT_004011b8 = *DAT_004011b8 >> 0xf | *DAT_004011b8 << 0x11;
  *DAT_004011b8 = *DAT_004011bc + *DAT_004011b8;
  *DAT_004011b4 =
       DAT_00401480 +
       DAT_004011c0[7] + (*DAT_004011b8 & *DAT_004011bc | *DAT_004011b0 & ~*DAT_004011b8) +
       *DAT_004011b4;
  *DAT_004011b4 = *DAT_004011b4 >> 10 | *DAT_004011b4 << 0x16;
  *DAT_004011b4 = *DAT_004011b8 + *DAT_004011b4;
  *DAT_004011b0 =
       DAT_004014e4 +
       DAT_004011c0[8] + (*DAT_004011b4 & *DAT_004011b8 | *DAT_004011bc & ~*DAT_004011b4) +
       *DAT_004011b0;
  *DAT_004011b0 = *DAT_004011b0 >> 0x19 | *DAT_004011b0 << 7;
  *DAT_004011b0 = *DAT_004011b4 + *DAT_004011b0;
  *DAT_004011bc =
       DAT_00401548 +
       DAT_004011c0[9] + (*DAT_004011b0 & *DAT_004011b4 | *DAT_004011b8 & ~*DAT_004011b0) +
       *DAT_004011bc;
  *DAT_004011bc = *DAT_004011bc >> 0x14 | *DAT_004011bc << 0xc;
  *DAT_004011bc = *DAT_004011b0 + *DAT_004011bc;
  *DAT_004011b8 =
       DAT_004015ac +
       DAT_004011c0[10] + (*DAT_004011bc & *DAT_004011b0 | *DAT_004011b4 & ~*DAT_004011bc) +
       *DAT_004011b8;
  *DAT_004011b8 = *DAT_004011b8 >> 0xf | *DAT_004011b8 << 0x11;
  *DAT_004011b8 = *DAT_004011bc + *DAT_004011b8;
  *DAT_004011b4 =
       DAT_00401650 +
       DAT_004011c0[0xb] + (*DAT_004011b8 & *DAT_004011bc | *DAT_004011b0 & ~*DAT_004011b8) +
       *DAT_004011b4;
  *DAT_004011b4 = *DAT_004011b4 >> 10 | *DAT_004011b4 << 0x16;
  *DAT_004011b4 = *DAT_004011b8 + *DAT_004011b4;
  *DAT_004011b0 =
       DAT_004016a0 +
       DAT_004011c0[0xc] + (*DAT_004011b4 & *DAT_004011b8 | *DAT_004011bc & ~*DAT_004011b4) +
       *DAT_004011b0;
  *DAT_004011b0 = *DAT_004011b0 >> 0x19 | *DAT_004011b0 << 7;
  *DAT_004011b0 = *DAT_004011b4 + *DAT_004011b0;
  *DAT_004011bc =
       DAT_004016dc +
       DAT_004011c0[0xd] + (*DAT_004011b0 & *DAT_004011b4 | *DAT_004011b8 & ~*DAT_004011b0) +
       *DAT_004011bc;
  *DAT_004011bc = *DAT_004011bc >> 0x14 | *DAT_004011bc << 0xc;
  *DAT_004011bc = *DAT_004011b0 + *DAT_004011bc;
  *DAT_004011b8 =
       DAT_00401740 +
       DAT_004011c0[0xe] + (*DAT_004011bc & *DAT_004011b0 | *DAT_004011b4 & ~*DAT_004011bc) +
       *DAT_004011b8;
  *DAT_004011b8 = *DAT_004011b8 >> 0xf | *DAT_004011b8 << 0x11;
  *DAT_004011b8 = *DAT_004011bc + *DAT_004011b8;
  *DAT_004011b4 =
       DAT_004017a4 +
       DAT_004011c0[0xf] + (*DAT_004011b8 & *DAT_004011bc | *DAT_004011b0 & ~*DAT_004011b8) +
       *DAT_004011b4;
  *DAT_004011b4 = *DAT_004011b4 >> 10 | *DAT_004011b4 << 0x16;
  *DAT_004011b4 = *DAT_004011b8 + *DAT_004011b4;
  *DAT_004011b0 =
       DAT_00401808 +
       DAT_004011c0[1] + (*DAT_004011b4 & *DAT_004011bc | *DAT_004011b8 & ~*DAT_004011bc) +
       *DAT_004011b0;
  *DAT_004011b0 = *DAT_004011b0 >> 0x1b | *DAT_004011b0 << 5;
  *DAT_004011b0 = *DAT_004011b4 + *DAT_004011b0;
  *DAT_004011bc =
       DAT_0040186c +
       DAT_004011c0[6] + (*DAT_004011b0 & *DAT_004011b8 | *DAT_004011b4 & ~*DAT_004011b8) +
       *DAT_004011bc;
  *DAT_004011bc = *DAT_004011bc >> 0x17 | *DAT_004011bc << 9;
  *DAT_004011bc = *DAT_004011b0 + *DAT_004011bc;
  *DAT_004011b8 =
       DAT_004018d0 +
       DAT_004011c0[0xb] + (*DAT_004011bc & *DAT_004011b4 | *DAT_004011b0 & ~*DAT_004011b4) +
       *DAT_004011b8;
  *DAT_004011b8 = *DAT_004011b8 >> 0x12 | *DAT_004011b8 << 0xe;
  *DAT_004011b8 = *DAT_004011bc + *DAT_004011b8;
  *DAT_004011b4 =
       DAT_00401930 +
       *DAT_004011c0 + (*DAT_004011b8 & *DAT_004011b0 | *DAT_004011bc & ~*DAT_004011b0) +
       *DAT_004011b4;
  *DAT_004011b4 = *DAT_004011b4 >> 0xc | *DAT_004011b4 << 0x14;
  *DAT_004011b4 = *DAT_004011b8 + *DAT_004011b4;
  *DAT_004011b0 =
       DAT_0040197c +
       DAT_004011c0[5] + (*DAT_004011b4 & *DAT_004011bc | *DAT_004011b8 & ~*DAT_004011bc) +
       *DAT_004011b0;
  *DAT_004011b0 = *DAT_004011b0 >> 0x1b | *DAT_004011b0 << 5;
  *DAT_004011b0 = *DAT_004011b4 + *DAT_004011b0;
  *DAT_004011bc =
       DAT_004019c8 +
       DAT_004011c0[10] + (*DAT_004011b0 & *DAT_004011b8 | *DAT_004011b4 & ~*DAT_004011b8) +
       *DAT_004011bc;
  *DAT_004011bc = *DAT_004011bc >> 0x17 | *DAT_004011bc << 9;
  *DAT_004011bc = *DAT_004011b0 + *DAT_004011bc;
  *DAT_004011b8 =
       DAT_00401a14 +
       DAT_004011c0[0xf] + (*DAT_004011bc & *DAT_004011b4 | *DAT_004011b0 & ~*DAT_004011b4) +
       *DAT_004011b8;
  *DAT_004011b8 = *DAT_004011b8 >> 0x12 | *DAT_004011b8 << 0xe;
  *DAT_004011b8 = *DAT_004011bc + *DAT_004011b8;
  *DAT_004011b4 =
       DAT_00401a60 +
       DAT_004011c0[4] + (*DAT_004011b8 & *DAT_004011b0 | *DAT_004011bc & ~*DAT_004011b0) +
       *DAT_004011b4;
  *DAT_004011b4 = *DAT_004011b4 >> 0xc | *DAT_004011b4 << 0x14;
  *DAT_004011b4 = *DAT_004011b8 + *DAT_004011b4;
  *DAT_004011b0 =
       DAT_00401aac +
       DAT_004011c0[9] + (*DAT_004011b4 & *DAT_004011bc | *DAT_004011b8 & ~*DAT_004011bc) +
       *DAT_004011b0;
  *DAT_004011b0 = *DAT_004011b0 >> 0x1b | *DAT_004011b0 << 5;
  *DAT_004011b0 = *DAT_004011b4 + *DAT_004011b0;
  *DAT_004011bc =
       DAT_00401b0c +
       DAT_004011c0[0xe] + (*DAT_004011b0 & *DAT_004011b8 | *DAT_004011b4 & ~*DAT_004011b8) +
       *DAT_004011bc;
  *DAT_004011bc = *DAT_004011bc >> 0x17 | *DAT_004011bc << 9;
  *DAT_004011bc = *DAT_004011b0 + *DAT_004011bc;
  *DAT_004011b8 =
       DAT_00401b10 +
       DAT_004011c0[3] + (*DAT_004011bc & *DAT_004011b4 | *DAT_004011b0 & ~*DAT_004011b4) +
       *DAT_004011b8;
  *DAT_004011b8 = *DAT_004011b8 >> 0x12 | *DAT_004011b8 << 0xe;
  *DAT_004011b8 = *DAT_004011bc + *DAT_004011b8;
  *DAT_004011b4 =
       DAT_00401b14 +
       DAT_004011c0[8] + (*DAT_004011b8 & *DAT_004011b0 | *DAT_004011bc & ~*DAT_004011b0) +
       *DAT_004011b4;
  *DAT_004011b4 = *DAT_004011b4 >> 0xc | *DAT_004011b4 << 0x14;
  *DAT_004011b4 = *DAT_004011b8 + *DAT_004011b4;
  *DAT_004011b0 =
       DAT_00401bcc +
       DAT_004011c0[0xd] + (*DAT_004011b4 & *DAT_004011bc | *DAT_004011b8 & ~*DAT_004011bc) +
       *DAT_004011b0;
  *DAT_004011b0 = *DAT_004011b0 >> 0x1b | *DAT_004011b0 << 5;
  *DAT_004011b0 = *DAT_004011b4 + *DAT_004011b0;
  *DAT_004011bc =
       DAT_00401b18 +
       DAT_004011c0[2] + (*DAT_004011b0 & *DAT_004011b8 | *DAT_004011b4 & ~*DAT_004011b8) +
       *DAT_004011bc;
  *DAT_004011bc = *DAT_004011bc >> 0x17 | *DAT_004011bc << 9;
  *DAT_004011bc = *DAT_004011b0 + *DAT_004011bc;
  *DAT_004011b8 =
       DAT_00401b1c +
       DAT_004011c0[7] + (*DAT_004011bc & *DAT_004011b4 | *DAT_004011b0 & ~*DAT_004011b4) +
       *DAT_004011b8;
  *DAT_004011b8 = *DAT_004011b8 >> 0x12 | *DAT_004011b8 << 0xe;
  *DAT_004011b8 = *DAT_004011bc + *DAT_004011b8;
  *DAT_004011b4 =
       DAT_00401bf8 +
       DAT_004011c0[0xc] + (*DAT_004011b8 & *DAT_004011b0 | *DAT_004011bc & ~*DAT_004011b0) +
       *DAT_004011b4;
  *DAT_004011b4 = *DAT_004011b4 >> 0xc | *DAT_004011b4 << 0x14;
  *DAT_004011b4 = *DAT_004011b8 + *DAT_004011b4;
  *DAT_004011b0 =
       DAT_00401bfc + DAT_004011c0[5] + (*DAT_004011b4 ^ *DAT_004011b8 ^ *DAT_004011bc) +
       *DAT_004011b0;
  *DAT_004011b0 = *DAT_004011b0 >> 0x1c | *DAT_004011b0 << 4;
  *DAT_004011b0 = *DAT_004011b4 + *DAT_004011b0;
  *DAT_004011bc =
       DAT_00401c00 + DAT_004011c0[8] + (*DAT_004011b0 ^ *DAT_004011b4 ^ *DAT_004011b8) +
       *DAT_004011bc;
  *DAT_004011bc = *DAT_004011bc >> 0x15 | *DAT_004011bc << 0xb;
  *DAT_004011bc = *DAT_004011b0 + *DAT_004011bc;
  *DAT_004011b8 =
       DAT_00401c04 + DAT_004011c0[0xb] + (*DAT_004011bc ^ *DAT_004011b0 ^ *DAT_004011b4) +
       *DAT_004011b8;
  *DAT_004011b8 = *DAT_004011b8 >> 0x10 | *DAT_004011b8 << 0x10;
  *DAT_004011b8 = *DAT_004011bc + *DAT_004011b8;
  *DAT_004011b4 =
       DAT_00401c08 + DAT_004011c0[0xe] + (*DAT_004011b8 ^ *DAT_004011bc ^ *DAT_004011b0) +
       *DAT_004011b4;
  *DAT_004011b4 = *DAT_004011b4 >> 9 | *DAT_004011b4 << 0x17;
  *DAT_004011b4 = *DAT_004011b8 + *DAT_004011b4;
  *DAT_004011b0 =
       DAT_00401c0c + DAT_004011c0[1] + (*DAT_004011b4 ^ *DAT_004011b8 ^ *DAT_004011bc) +
       *DAT_004011b0;
  *DAT_004011b0 = *DAT_004011b0 >> 0x1c | *DAT_004011b0 << 4;
  *DAT_004011b0 = *DAT_004011b4 + *DAT_004011b0;
  *DAT_004011bc =
       DAT_00401c10 + DAT_004011c0[4] + (*DAT_004011b0 ^ *DAT_004011b4 ^ *DAT_004011b8) +
       *DAT_004011bc;
  *DAT_004011bc = *DAT_004011bc >> 0x15 | *DAT_004011bc << 0xb;
  *DAT_004011bc = *DAT_004011b0 + *DAT_004011bc;
  *DAT_004011b8 =
       DAT_00401c14 + DAT_004011c0[7] + (*DAT_004011bc ^ *DAT_004011b0 ^ *DAT_004011b4) +
       *DAT_004011b8;
  *DAT_004011b8 = *DAT_004011b8 >> 0x10 | *DAT_004011b8 << 0x10;
  *DAT_004011b8 = *DAT_004011bc + *DAT_004011b8;
  *DAT_00401c1c =
       DAT_00401c18 + DAT_004011c0[10] + (*DAT_004011b8 ^ *DAT_004011bc ^ *DAT_004011b0) +
       *DAT_004011b4;
  *DAT_00401c1c = *DAT_00401c1c >> 9 | *DAT_00401c1c << 0x17;
  *DAT_00401c1c = *DAT_00401c20 + *DAT_00401c1c;
  *DAT_00401c24 =
       DAT_00401c30 + DAT_00401c2c[0xd] + (*DAT_00401c1c ^ *DAT_00401c20 ^ *DAT_00401c28) +
       *DAT_00401c24;
  *DAT_00401c24 = *DAT_00401c24 >> 0x1c | *DAT_00401c24 << 4;
  *DAT_00401c24 = *DAT_00401c1c + *DAT_00401c24;
  *DAT_00401c28 =
       DAT_00401c34 + *DAT_00401c2c + (*DAT_00401c24 ^ *DAT_00401c1c ^ *DAT_00401c20) +
       *DAT_00401c28;
  *DAT_00401c28 = *DAT_00401c28 >> 0x15 | *DAT_00401c28 << 0xb;
  *DAT_00401c28 = *DAT_00401c24 + *DAT_00401c28;
  *DAT_00401c20 =
       DAT_00401c38 + DAT_00401c2c[3] + (*DAT_00401c28 ^ *DAT_00401c24 ^ *DAT_00401c1c) +
       *DAT_00401c20;
  *DAT_00401c20 = *DAT_00401c20 >> 0x10 | *DAT_00401c20 << 0x10;
  *DAT_00401c20 = *DAT_00401c28 + *DAT_00401c20;
  *DAT_00401c1c =
       DAT_00401c3c + DAT_00401c2c[6] + (*DAT_00401c20 ^ *DAT_00401c28 ^ *DAT_00401c24) +
       *DAT_00401c1c;
  *DAT_00401c1c = *DAT_00401c1c >> 9 | *DAT_00401c1c << 0x17;
  *DAT_00401c1c = *DAT_00401c20 + *DAT_00401c1c;
  *DAT_00401c24 =
       DAT_00401c40 + DAT_00401c2c[9] + (*DAT_00401c1c ^ *DAT_00401c20 ^ *DAT_00401c28) +
       *DAT_00401c24;
  *DAT_00401c24 = *DAT_00401c24 >> 0x1c | *DAT_00401c24 << 4;
  *DAT_00401c24 = *DAT_00401c1c + *DAT_00401c24;
  *DAT_00401c28 =
       DAT_00401c44 + DAT_00401c2c[0xc] + (*DAT_00401c24 ^ *DAT_00401c1c ^ *DAT_00401c20) +
       *DAT_00401c28;
  *DAT_00401c28 = *DAT_00401c28 >> 0x15 | *DAT_00401c28 << 0xb;
  *DAT_00401c28 = *DAT_00401c24 + *DAT_00401c28;
  *DAT_00401c20 =
       DAT_00401c48 + DAT_00401c2c[0xf] + (*DAT_00401c28 ^ *DAT_00401c24 ^ *DAT_00401c1c) +
       *DAT_00401c20;
  *DAT_00401c20 = *DAT_00401c20 >> 0x10 | *DAT_00401c20 << 0x10;
  *DAT_00401c20 = *DAT_00401c28 + *DAT_00401c20;
  *DAT_00401c1c =
       DAT_00401c4c + DAT_00401c2c[2] + (*DAT_00401c20 ^ *DAT_00401c28 ^ *DAT_00401c24) +
       *DAT_00401c1c;
  *DAT_00401c1c = *DAT_00401c1c >> 9 | *DAT_00401c1c << 0x17;
  *DAT_00401c1c = *DAT_00401c20 + *DAT_00401c1c;
  *DAT_00401c24 =
       DAT_00401c50 + *DAT_00401c2c + (*DAT_00401c20 ^ (*DAT_00401c1c | ~*DAT_00401c28)) +
       *DAT_00401c24;
  *DAT_00401c24 = *DAT_00401c24 >> 0x1a | *DAT_00401c24 << 6;
  *DAT_00401c24 = *DAT_00401c1c + *DAT_00401c24;
  *DAT_00401c28 =
       DAT_00401c54 + DAT_00401c2c[7] + (*DAT_00401c1c ^ (*DAT_00401c24 | ~*DAT_00401c20)) +
       *DAT_00401c28;
  *DAT_00401c28 = *DAT_00401c28 >> 0x16 | *DAT_00401c28 << 10;
  *DAT_00401c28 = *DAT_00401c24 + *DAT_00401c28;
  *DAT_00401c20 =
       DAT_00401c58 + DAT_00401c2c[0xe] + (*DAT_00401c24 ^ (*DAT_00401c28 | ~*DAT_00401c1c)) +
       *DAT_00401c20;
  *DAT_00401c20 = *DAT_00401c20 >> 0x11 | *DAT_00401c20 << 0xf;
  *DAT_00401c20 = *DAT_00401c28 + *DAT_00401c20;
  *DAT_00401c1c =
       DAT_00401c5c + DAT_00401c2c[5] + (*DAT_00401c28 ^ (*DAT_00401c20 | ~*DAT_00401c24)) +
       *DAT_00401c1c;
  *DAT_00401c1c = *DAT_00401c1c >> 0xb | *DAT_00401c1c << 0x15;
  *DAT_00401c1c = *DAT_00401c20 + *DAT_00401c1c;
  *DAT_00401c24 =
       DAT_00401c60 + DAT_00401c2c[0xc] + (*DAT_00401c20 ^ (*DAT_00401c1c | ~*DAT_00401c28)) +
       *DAT_00401c24;
  *DAT_00401c24 = *DAT_00401c24 >> 0x1a | *DAT_00401c24 << 6;
  *DAT_00401c24 = *DAT_00401c1c + *DAT_00401c24;
  *DAT_00401c28 =
       DAT_00401c64 + DAT_00401c2c[3] + (*DAT_00401c1c ^ (*DAT_00401c24 | ~*DAT_00401c20)) +
       *DAT_00401c28;
  *DAT_00401c28 = *DAT_00401c28 >> 0x16 | *DAT_00401c28 << 10;
  *DAT_00401c28 = *DAT_00401c24 + *DAT_00401c28;
  *DAT_00401c20 =
       DAT_00401c68 + DAT_00401c2c[10] + (*DAT_00401c24 ^ (*DAT_00401c28 | ~*DAT_00401c1c)) +
       *DAT_00401c20;
  *DAT_00401c20 = *DAT_00401c20 >> 0x11 | *DAT_00401c20 << 0xf;
  *DAT_00401c20 = *DAT_00401c28 + *DAT_00401c20;
  *DAT_00401c1c =
       DAT_00401c6c + DAT_00401c2c[1] + (*DAT_00401c28 ^ (*DAT_00401c20 | ~*DAT_00401c24)) +
       *DAT_00401c1c;
  *DAT_00401c1c = *DAT_00401c1c >> 0xb | *DAT_00401c1c << 0x15;
  *DAT_00401c1c = *DAT_00401c20 + *DAT_00401c1c;
  *DAT_00401c24 =
       DAT_00401c70 + DAT_00401c2c[8] + (*DAT_00401c20 ^ (*DAT_00401c1c | ~*DAT_00401c28)) +
       *DAT_00401c24;
  *DAT_00401c24 = *DAT_00401c24 >> 0x1a | *DAT_00401c24 << 6;
  *DAT_00401c24 = *DAT_00401c1c + *DAT_00401c24;
  *DAT_00401c28 =
       DAT_00401c74 + DAT_00401c2c[0xf] + (*DAT_00401c1c ^ (*DAT_00401c24 | ~*DAT_00401c20)) +
       *DAT_00401c28;
  *DAT_00401c28 = *DAT_00401c28 >> 0x16 | *DAT_00401c28 << 10;
  *DAT_00401c28 = *DAT_00401c24 + *DAT_00401c28;
  *DAT_00401c20 =
       DAT_00401c78 + DAT_00401c2c[6] + (*DAT_00401c24 ^ (*DAT_00401c28 | ~*DAT_00401c1c)) +
       *DAT_00401c20;
  *DAT_00401c20 = *DAT_00401c20 >> 0x11 | *DAT_00401c20 << 0xf;
  *DAT_00401c20 = *DAT_00401c28 + *DAT_00401c20;
  *DAT_00401c1c =
       DAT_00401c7c + DAT_00401c2c[0xd] + (*DAT_00401c28 ^ (*DAT_00401c20 | ~*DAT_00401c24)) +
       *DAT_00401c1c;
  *DAT_00401c1c = *DAT_00401c1c >> 0xb | *DAT_00401c1c << 0x15;
  *DAT_00401c1c = *DAT_00401c20 + *DAT_00401c1c;
  *DAT_00401c24 =
       DAT_00401c80 + DAT_00401c2c[4] + (*DAT_00401c20 ^ (*DAT_00401c1c | ~*DAT_00401c28)) +
       *DAT_00401c24;
  *DAT_00401c24 = *DAT_00401c24 >> 0x1a | *DAT_00401c24 << 6;
  *DAT_00401c24 = *DAT_00401c1c + *DAT_00401c24;
  *DAT_00401c28 =
       DAT_00401c84 + DAT_00401c2c[0xb] + (*DAT_00401c1c ^ (*DAT_00401c24 | ~*DAT_00401c20)) +
       *DAT_00401c28;
  *DAT_00401c28 = *DAT_00401c28 >> 0x16 | *DAT_00401c28 << 10;
  *DAT_00401c28 = *DAT_00401c24 + *DAT_00401c28;
  *DAT_00401c20 =
       DAT_00401c88 + DAT_00401c2c[2] + (*DAT_00401c24 ^ (*DAT_00401c28 | ~*DAT_00401c1c)) +
       *DAT_00401c20;
  *DAT_00401c20 = *DAT_00401c20 >> 0x11 | *DAT_00401c20 << 0xf;
  *DAT_00401c20 = *DAT_00401c28 + *DAT_00401c20;
  *DAT_00401c1c =
       DAT_00401c8c + DAT_00401c2c[9] + (*DAT_00401c28 ^ (*DAT_00401c20 | ~*DAT_00401c24)) +
       *DAT_00401c1c;
  *DAT_00401c1c = *DAT_00401c1c >> 0xb | *DAT_00401c1c << 0x15;
  *DAT_00401c1c = *DAT_00401c20 + *DAT_00401c1c;
  *param_1 = *DAT_00401c24 + *param_1;
  param_1[1] = *DAT_00401c1c + param_1[1];
  param_1[2] = *DAT_00401c20 + param_1[2];
  param_1[3] = *DAT_00401c28 + param_1[3];
  FUN_00401bd0(DAT_00401c2c,0,0x40);
  return param_4;
}



//==== FUNC FUN_00401b20 @ 00401b20 ====

void FUN_00401b20(int param_1,int param_2,uint param_3)

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



//==== FUNC FUN_00401b62 @ 00401b62 ====

void FUN_00401b62(int param_1,int param_2,uint param_3)

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



//==== FUNC FUN_00401b9e @ 00401b9e ====

void FUN_00401b9e(int param_1,int param_2,uint param_3)

{
  *DAT_00401c90 = 0;
  while (*DAT_00401c90 < param_3) {
    *(undefined *)(param_1 + *DAT_00401c90) = *(undefined *)(param_2 + *DAT_00401c90);
    *DAT_00401c90 = *DAT_00401c90 + 1;
  }
  return;
}



//==== FUNC FUN_00401bd0 @ 00401bd0 ====

void FUN_00401bd0(int param_1,undefined param_2,uint param_3)

{
  *DAT_00401c90 = 0;
  while (*DAT_00401c90 < param_3) {
    *(undefined *)(param_1 + *DAT_00401c90) = param_2;
    *DAT_00401c90 = *DAT_00401c90 + 1;
  }
  return;
}



//==== FUNC thunk_EXT_FUN_2040215c @ 00403494 ====

void thunk_EXT_FUN_2040215c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00403494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00403498)();
  return;
}



//==== FUNC FUN_0040349c @ 0040349c ====

undefined4 FUN_0040349c(uint param_1)

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
    uVar1 = DAT_00404274;
    if ((((param_1 != 4) && (uVar1 = DAT_00404270, 3 < param_1)) &&
        (uVar1 = DAT_00404278, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_004034ee @ 004034ee ====

undefined8 FUN_004034ee(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0040349c(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_00403502 @ 00403502 ====

undefined8 FUN_00403502(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_004034ee();
  return CONCAT44(unaff_r7,uVar1 / 1);
}



//==== FUNC sub_00403510 @ 00403510 ====

undefined4 sub_00403510(void)

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
  
  uVar2 = DAT_00404280;
  local_18[0] = *DAT_0040427c;
  local_18[1] = DAT_0040427c[1];
  local_18[2] = DAT_0040427c[2];
  local_2c = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  iVar3 = sub_00404c62(0,auStack_28,0xd);
  if (iVar3 != 0) {
    for (uVar5 = 0; (uVar5 & 0xff) < 3; uVar5 = (uVar5 & 0xff) + 1) {
      uVar4 = FUN_00400144(local_18[uVar5 & 0xff]);
      iVar3 = FUN_004051e4(auStack_28,local_18[uVar5 & 0xff],uVar4);
      if (iVar3 == 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          enableIRQinterrupts(0);
        }
        return 1;
      }
    }
    iVar3 = sub_00404c62(4,local_30,3);
    if (iVar3 != 0) {
      if (local_30[0] == '1') {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          enableIRQinterrupts(0);
        }
        return 1;
      }
      uVar4 = FUN_00400144(uVar2);
      iVar3 = FUN_004051e4(auStack_28,uVar2,uVar4);
      if ((iVar3 == 0) && (iVar3 = FUN_004051e4(local_30,&local_2c,3), iVar3 == 0)) {
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



//==== FUNC sub_004035e6 @ 004035e6 ====

void sub_004035e6(undefined4 *param_1)

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



//==== FUNC sub_00403602 @ 00403602 ====

undefined4 sub_00403602(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*DAT_00404284 != '\0') {
    cVar1 = sub_00403510();
    *DAT_00404288 = cVar1;
    if (*DAT_00404288 == '\x02') {
      return 1;
    }
    *DAT_00404284 = '\0';
  }
  if (*(char *)(param_1 + 7) == '\0') {
    uVar2 = 0;
  }
  else if ((*DAT_00404288 == '\0') && (iVar3 = FUN_004053be(), iVar3 != 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



//==== FUNC sub_00403654 @ 00403654 ====

undefined4 sub_00403654(void)

{
  bool bVar1;
  int iVar2;
  undefined auStack_138 [16];
  undefined auStack_128 [28];
  undefined auStack_10c [268];
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  iVar2 = sub_00404c62(3,auStack_10c,0x101);
  if (iVar2 != 0) {
    FUN_0040017c(auStack_128,0x1c);
    FUN_004065e4(auStack_128);
    FUN_00400184(auStack_138,0xd);
    iVar2 = FUN_00406650(auStack_138,0xd);
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
    iVar2 = FUN_004067b0(auStack_10c,0x100,auStack_138,auStack_128);
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



//==== FUNC sub_00403688 @ 00403688 ====

undefined4 sub_00403688(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00406650();
  if (iVar2 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts(0);
    }
    uVar3 = 0;
  }
  else {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts(0);
    }
    iVar2 = FUN_004067b0(&stack0x0000002c,0x100);
    if (iVar2 == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        enableIRQinterrupts(0);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



//==== FUNC sub_004036c2 @ 004036c2 ====

undefined8 sub_004036c2(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_00406848(0x4a0000);
  return CONCAT44(unaff_r7,(uint)(iVar1 == 0));
}



//==== FUNC FUN_004036d8 @ 004036d8 ====

undefined8 FUN_004036d8(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0040694a(0x400000);
  return CONCAT44(unaff_r7,(uint)(iVar1 == 0));
}



//==== FUNC FUN_004036ee @ 004036ee ====

undefined8 FUN_004036ee(int param_1)

{
  undefined2 uStack_18;
  undefined local_16;
  undefined5 uStack_15;
  
  FUN_00406a90(&uStack_18,DAT_00404558,3);
  local_16 = 0;
  (**(code **)(param_1 + 0x20bc))(param_1,&uStack_18,3);
  return CONCAT53(uStack_15,CONCAT12(local_16,uStack_18));
}



//==== FUNC sub_004037e4 @ 004037e4 ====

void sub_004037e4(void)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_r4;
  uint uVar3;
  ushort uVar4;
  undefined uStack00000002;
  undefined *param_12;
  
  iVar2 = FUN_00406650();
  if (iVar2 != 0) {
    param_12 = &stack0x0000002c;
  }
  for (uVar3 = 0; (uVar3 & 0xff) < 5; uVar3 = (uVar3 & 0xff) + 1) {
    uVar1 = FUN_004065d4(*(undefined4 *)(&stack0x00000018 + (uVar3 & 0xff) * 4));
    *(undefined2 *)(&stack0x0000000c + (uVar3 & 0xff) * 2) = uVar1;
  }
  uVar4 = 2;
  for (uVar3 = 0; (uVar3 & 0xff) < 5; uVar3 = (uVar3 & 0xff) + 1) {
    uVar4 = *(short *)(&stack0x0000000c + (uVar3 & 0xff) * 2) + 2 + uVar4;
  }
  if (uVar4 < 0x97) {
    FUN_004054e2(&stack0x00000072,&stack0x00000018,&stack0x0000000c,5);
    (**(code **)(unaff_r4 + 0x20bc))();
  }
  else {
    FUN_00406a90();
    uStack00000002 = 0xc;
    (**(code **)(unaff_r4 + 0x20bc))();
  }
  return;
}



//==== FUNC sub_00403890 @ 00403890 ====

/* WARNING: Removing unreachable block (ram,0x0040391e) */

void sub_00403890(int param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_00406ab0(local_b0,DAT_0040461c,0x14);
  iVar2 = FUN_0040538e();
  if (iVar2 != 0) {
    local_b0[1] = &LAB_00403a60;
    local_b0[2] = &LAB_00403a60;
  }
  uVar3 = 2;
  for (uVar4 = 0; (uVar4 & 0xffff) < 5; uVar4 = (uVar4 & 0xffff) + 1) {
    iVar2 = FUN_004066a8(local_b0[uVar4 & 0xffff],0x20);
    if (iVar2 == 0) {
      local_b0[uVar4 & 0xffff] = &LAB_00403a60;
    }
    sVar1 = FUN_004065d4(local_b0[uVar4 & 0xffff]);
    local_9c[uVar4 & 0xffff] = sVar1;
    uVar3 = local_9c[uVar4 & 0xffff] + 2 + uVar3;
  }
  if (uVar3 < 0x65) {
    FUN_00406a90(auStack_90,&DAT_00403cbc,2);
    FUN_004054e2(auStack_8e,local_b0,local_9c,5);
    (**(code **)(param_1 + 0x20bc))(param_1,auStack_90,uVar3);
  }
  else {
    FUN_00406a90(auStack_b8,DAT_0040475c,3);
    local_b6 = 0xc;
    (**(code **)(param_1 + 0x20bc))(param_1,auStack_b8,3);
  }
  return;
}



//==== FUNC sub_004039a4 @ 004039a4 ====

void sub_004039a4(int param_1,undefined4 param_2,undefined4 param_3)

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
  local_98[0] = *DAT_00404760;
  local_98[1] = DAT_00404760[1];
  uVar2 = 2;
  for (uVar3 = 0; (uVar3 & 0xffff) < 2; uVar3 = (uVar3 & 0xffff) + 1) {
    sVar1 = FUN_004065d4(local_98[uVar3 & 0xffff]);
    local_9c[uVar3 & 0xffff] = sVar1;
    uVar2 = local_9c[uVar3 & 0xffff] + 2 + uVar2;
  }
  if (uVar2 < 0x65) {
    FUN_00406a90(auStack_90,&DAT_00403cc0,2);
    FUN_004054e2(auStack_8e,local_98,local_9c,2);
    (**(code **)(param_1 + 0x20bc))(param_1,auStack_90,uVar2);
  }
  else {
    FUN_00406a90(auStack_a0,DAT_00404764,3);
    local_9e = 0xc;
    (**(code **)(param_1 + 0x20bc))(param_1,auStack_a0,3);
  }
  return;
}



//==== FUNC FUN_00403c52 @ 00403c52 ====

undefined8 FUN_00403c52(int param_1)

{
  undefined2 uStack_18;
  undefined local_16;
  undefined5 uStack_15;
  
  FUN_00406a90(&uStack_18,DAT_004049f0,3);
  local_16 = 0;
  (**(code **)(param_1 + 0x20bc))(param_1,&uStack_18,3);
  *(undefined *)(param_1 + 7) = 1;
  return CONCAT53(uStack_15,CONCAT12(local_16,uStack_18));
}



//==== FUNC FUN_00403c82 @ 00403c82 ====

undefined4 FUN_00403c82(uint *param_1)

{
  FUN_00406e40(0x39);
  FUN_0040018c(DAT_004049f4);
  FUN_004057f6(1);
  *param_1 = *(uint *)(DAT_004049f4 + 0x50) & 0xffffff;
  FUN_00400192(DAT_004049f4);
  return 0;
}



//==== FUNC sub_00403efa @ 00403efa ====

void sub_00403efa(void)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r4;
  uint uVar6;
  uint uVar7;
  undefined param_12;
  undefined4 in_stack_0000001c;
  int param_14;
  int param_15;
  uint param_16;
  uint param_17;
  int param_18;
  byte in_stack_0000080e;
  byte in_stack_0000080f;
  byte in_stack_00000810;
  byte in_stack_00000811;
  byte in_stack_00000812;
  byte in_stack_00000813;
  byte in_stack_00000814;
  byte in_stack_00000815;
  
  iVar4 = sub_00407812();
  if (iVar4 == 0) {
    param_12 = 5;
    (**(code **)(unaff_r4 + 0x20bc))();
  }
  else {
    sub_00404c62(0,&stack0x00000060,0xd);
    iVar4 = FUN_004051e4(&stack0x00000802,&stack0x00000060,0xc);
    if (iVar4 == 0) {
      bVar1 = FUN_004073f2();
      if (bVar1 == 0) {
        FUN_00407436();
      }
      else {
        FUN_00406a90(&stack0x0000081c,(uint)bVar1 * 0x1800 + DAT_00404a04,0x1800);
      }
      uVar6 = (uint)bVar1;
      if (uVar6 == 0x15) {
        FUN_00407436();
        uVar6 = 0;
      }
      FUN_00407502(&stack0x00000044,&stack0x00000620);
      uVar5 = FUN_0040744c(&stack0x0000081c);
      uVar7 = uVar5 & 0xffff;
      if (uVar7 == 0x180) {
        param_12 = 8;
        (**(code **)(unaff_r4 + 0x20bc))();
      }
      else {
        uVar3 = FUN_0040747c(&stack0x00000620,&stack0x0000081c,uVar5 & 0xffff);
        if (uVar3 == 0xffff) {
          FUN_004075ca(1,&stack0x0000081c,&stack0x0000001c,&stack0x00000620);
          FUN_004073d0(uVar6);
        }
        else {
          cVar2 = FUN_004074da(&stack0x0000081c + (uint)uVar3 * 0x10,0xc);
          uVar7 = (uint)uVar3;
          if (cVar2 != (&stack0x00000828)[uVar7 * 0x10]) {
            FUN_00407436();
            param_12 = 7;
            (**(code **)(unaff_r4 + 0x20bc))();
            return;
          }
          FUN_0040753e(&stack0x0000081c,&stack0x0000001c,uVar3);
          if (param_18 == param_14) {
            if (in_stack_0000001c._2_2_ == 0) {
              FUN_004075ca(3,&stack0x0000081c,&stack0x0000001c,&stack0x00000620);
              FUN_004073d0(uVar6);
              FUN_004077dc(&stack0x0000000c,3,&stack0x0000081c,uVar3 & 0xff);
              (**(code **)(unaff_r4 + 0x20bc))();
              return;
            }
            FUN_004075ca(2,&stack0x0000081c,&stack0x0000001c,&stack0x00000620);
            FUN_004073d0(uVar6);
          }
          else {
            if (param_18 != param_15) {
              FUN_004075ca(5,&stack0x0000081c,&stack0x0000001c,&stack0x00000620);
              FUN_004073d0(uVar6);
              FUN_004077dc(&stack0x0000000c,4,&stack0x0000081c,uVar3 & 0xff);
              (**(code **)(unaff_r4 + 0x20bc))();
              return;
            }
            FUN_004075ca(4,&stack0x0000081c,&stack0x0000001c,&stack0x00000620);
            sub_004078ea(uVar6 * 0x1800 + 0x420000,&stack0x0000081c,0x1800,0);
            FUN_004073d0(uVar6);
          }
        }
        param_17 = (uint)in_stack_0000080f << 0x10 | (uint)in_stack_0000080e << 0x18 |
                   (uint)in_stack_00000810 << 8 | (uint)in_stack_00000811;
        param_16 = (uint)in_stack_00000813 << 0x10 | (uint)in_stack_00000812 << 0x18 |
                   (uint)in_stack_00000814 << 8 | (uint)in_stack_00000815;
        if (param_16 < param_17) {
          FUN_004077dc(&stack0x0000000c,2,&stack0x0000081c,uVar7 & 0xff);
          (**(code **)(unaff_r4 + 0x20bc))();
        }
        else {
          FUN_00406a90(&stack0x00000088,&stack0x000007da,0x20);
          iVar4 = FUN_00405434(&stack0x00000088);
          if (iVar4 == 0) {
            FUN_004077dc(&stack0x0000000c,6,&stack0x0000081c,uVar7 & 0xff);
            (**(code **)(unaff_r4 + 0x20bc))();
          }
          else {
            FUN_004077dc(&stack0x0000000c,0,&stack0x0000081c,uVar7 & 0xff);
            *(undefined *)(unaff_r4 + 7) = 1;
            (**(code **)(unaff_r4 + 0x20bc))();
          }
        }
      }
    }
    else {
      param_12 = 9;
      (**(code **)(unaff_r4 + 0x20bc))();
    }
  }
  return;
}



//==== FUNC FUN_0040428c @ 0040428c ====

void FUN_0040428c(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined uVar2;
  int iVar3;
  uint local_90;
  undefined auStack_8c [2];
  undefined local_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined auStack_58 [20];
  undefined auStack_44 [6];
  undefined auStack_3e [30];
  int local_20;
  
  local_60 = *DAT_00404a08;
  uStack_5c = DAT_00404a08[1];
  local_68 = *DAT_00404a0c;
  uStack_64 = DAT_00404a0c[1];
  local_70 = *DAT_00404a10;
  uStack_6c = DAT_00404a10[1];
  local_78 = *DAT_00404a14;
  uStack_74 = DAT_00404a14[1];
  local_80 = *DAT_00404a18;
  uStack_7c = DAT_00404a18[1];
  local_88 = *DAT_00404a1c;
  uStack_84 = DAT_00404a1c[1];
  local_20 = param_3;
  FUN_00406a90(auStack_8c,DAT_00404a20,3);
  local_20 = local_20 + -1;
  iVar3 = FUN_004054b2(param_1,auStack_8c,2,&local_20);
  if (iVar3 != 0) {
    uVar1 = CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2));
    iVar3 = FUN_004054b2(param_1,auStack_8c,uVar1,&local_20);
    if (iVar3 != 0) {
      FUN_00406a90(auStack_58,param_2 + 3,(uint)uVar1);
      (**(code **)(param_1 + 0x20c8))(param_1,0);
      iVar3 = FUN_004079d6();
      if (iVar3 == 0) {
        for (local_90 = 0; local_90 < DAT_00404a24; local_90 = local_90 + 1) {
        }
      }
      for (local_90 = 0; local_90 < 5; local_90 = local_90 + 1) {
        FUN_00407d4e();
        iVar3 = FUN_00407cf4(auStack_44,6,DAT_00404a28);
        if ((iVar3 != 0) && (iVar3 = FUN_004051e4(auStack_44,&local_60,6), iVar3 == 0)) break;
      }
      if (local_90 == 5) {
        local_8a = 1;
        (**(code **)(param_1 + 0x20bc))(param_1,auStack_8c,3);
        (**(code **)(param_1 + 0x20c8))(param_1,1);
      }
      else {
        for (local_90 = 0; local_90 < 10; local_90 = local_90 + 1) {
          uVar2 = FUN_00400144(auStack_58);
          FUN_00407e12(8,auStack_58,uVar2);
          iVar3 = FUN_00407cf4(auStack_44,7,DAT_00404a2c);
          if ((iVar3 != 0) && (iVar3 = FUN_004051e4(auStack_44,&local_68,7), iVar3 == 0)) {
            FUN_00407cce(&local_88,5);
            iVar3 = FUN_00407cf4(auStack_44,0x1e,DAT_00404a30);
            if ((iVar3 != 0) && (iVar3 = FUN_004051e4(auStack_3e,auStack_58,uVar1 - 1), iVar3 == 0))
            break;
          }
        }
        if (local_90 == 10) {
          local_8a = 2;
          (**(code **)(param_1 + 0x20bc))(param_1,auStack_8c,3);
          (**(code **)(param_1 + 0x20c8))(param_1,1);
        }
        else {
          for (local_90 = 0; local_90 < 10; local_90 = local_90 + 1) {
            uVar2 = FUN_00400144(auStack_58);
            FUN_00407e12(0x11,auStack_58,uVar2);
            iVar3 = FUN_00407cf4(auStack_44,7,DAT_00404a2c);
            if ((iVar3 != 0) && (iVar3 = FUN_004051e4(auStack_44,&local_70,7), iVar3 == 0)) break;
          }
          if (local_90 == 10) {
            local_8a = 3;
            (**(code **)(param_1 + 0x20bc))(param_1,auStack_8c,3);
            (**(code **)(param_1 + 0x20c8))(param_1,1);
          }
          else {
            for (local_90 = 0; local_90 < 10; local_90 = local_90 + 1) {
              FUN_00407cce(&local_78,6);
              iVar3 = FUN_00407cf4(auStack_44,6,DAT_00404a2c);
              if ((iVar3 != 0) && (iVar3 = FUN_004051e4(auStack_44,&local_80,6), iVar3 == 0)) break;
            }
            if (local_90 == 10) {
              local_8a = 4;
              (**(code **)(param_1 + 0x20bc))(param_1,auStack_8c,3);
              (**(code **)(param_1 + 0x20c8))(param_1,1);
            }
            else {
              (**(code **)(param_1 + 0x20bc))(param_1,auStack_8c,3);
              (**(code **)(param_1 + 0x20c8))(param_1,1);
            }
          }
        }
      }
    }
  }
  return;
}



//==== FUNC FUN_00404564 @ 00404564 ====

undefined8 FUN_00404564(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_18;
  undefined uStack_16;
  undefined uStack_15;
  undefined4 uStack_14;
  
  uVar2 = *DAT_00404a34;
  local_18 = (undefined2)uVar2;
  uStack_16 = (undefined)((uint)uVar2 >> 0x10);
  uStack_15 = (undefined)((uint)uVar2 >> 0x18);
  if (*(char *)(param_2 + 1) == '\0') {
    uStack_16 = FUN_004053be();
    uStack_15 = 0;
    (**(code **)(param_1 + 0x20bc))(param_1,&local_18,4);
  }
  else {
    uStack_16 = *(undefined *)(param_2 + 1);
    iVar1 = FUN_004053ca((int)*(char *)(param_2 + 1));
    if (iVar1 == 0) {
      uStack_15 = 0x11;
      (**(code **)(param_1 + 0x20bc))(param_1,&local_18,4);
    }
    uStack_15 = 0;
    (**(code **)(param_1 + 0x20bc))(param_1,&local_18,4);
    (**(code **)(param_1 + 0x20a8))(param_1);
  }
  return CONCAT44(uStack_14,CONCAT13(uStack_15,CONCAT12(uStack_16,local_18)));
}



//==== FUNC FUN_00404620 @ 00404620 ====

void FUN_00404620(int param_1)

{
  int iVar1;
  undefined auStack_130 [2];
  undefined local_12e;
  ushort local_12c [2];
  undefined4 local_128;
  uint local_124;
  undefined *local_120;
  undefined *local_11c;
  undefined auStack_118 [260];
  
  FUN_00406a90(auStack_130,DAT_00404a3c,3);
  iVar1 = FUN_00404b10(3,local_12c);
  if (iVar1 == 0) {
    local_12e = 0x15;
    (**(code **)(param_1 + 0x20bc))(param_1,auStack_130,3);
  }
  else if (local_12c[0] == 0xffff) {
    local_12e = 0xf;
    (**(code **)(param_1 + 0x20bc))(param_1,auStack_130,3);
  }
  else {
    iVar1 = sub_00404c62(3,auStack_118,0x101);
    if (iVar1 == 0) {
      local_12e = 0x15;
      (**(code **)(param_1 + 0x20bc))(param_1,auStack_130,3);
    }
    else {
      local_11c = auStack_118;
      local_128 = *DAT_00404a40;
      local_124 = (uint)local_12c[0];
      local_120 = auStack_130;
      (**(code **)(param_1 + 0x20c0))(param_1,&local_120,&local_128,2);
    }
  }
  return;
}



//==== FUNC FUN_004046d4 @ 004046d4 ====

undefined8 FUN_004046d4(int param_1)

{
  undefined2 uStack_18;
  undefined local_16;
  undefined5 uStack_15;
  
  FUN_00406a90(&uStack_18,DAT_00404a44,3);
  local_16 = 0;
  (**(code **)(param_1 + 0x20bc))(param_1,&uStack_18,3);
  return CONCAT53(uStack_15,CONCAT12(local_16,uStack_18));
}



//==== FUNC sub_00404710 @ 00404710 ====

undefined8 sub_00404710(void)

{
  int iVar1;
  int unaff_r4;
  undefined2 param_5;
  undefined uStack00000002;
  undefined uStack00000003;
  int param_6;
  
  FUN_00406a90();
  iVar1 = FUN_004054b2();
  if ((iVar1 != 0) && (iVar1 = FUN_004054b2(), iVar1 != 0)) {
    uStack00000002 = 0;
    (**(code **)(unaff_r4 + 0x20bc))();
  }
  return CONCAT44(param_6 + -1,CONCAT13(uStack00000003,CONCAT12(uStack00000002,param_5)));
}



//==== FUNC sub_0040476c @ 0040476c ====

void sub_0040476c(int param_1,int param_2,int param_3)

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
  FUN_00406a90(auStack_50,DAT_00404a4c,3);
  local_28 = local_28 + -1;
  iVar3 = FUN_004054b2(param_1,auStack_50,2,&local_28);
  if (iVar3 != 0) {
    uVar2 = CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2));
    iVar3 = FUN_004054b2(param_1,auStack_50,uVar2,&local_28);
    if (iVar3 != 0) {
      local_4b = FUN_004065d4(DAT_00404a50);
      if (local_4b + 2 < 0x1f) {
        local_4c = 0;
        FUN_00406a90(auStack_4a,DAT_00404a50,local_4b);
        iVar3 = FUN_004066ec(&local_4c,param_2 + 1,uVar2 + 2);
        if (iVar3 == 0) {
          *DAT_00404a54 = *DAT_00404a54 + 1;
          if (*DAT_00404a54 < 3) {
            local_4e = 0x12;
            (**(code **)(param_1 + 0x20bc))(param_1,auStack_50,3);
          }
          else {
            local_4e = 0x14;
            (**(code **)(param_1 + 0x20bc))(param_1,auStack_50,3);
            uVar4 = FUN_00403502();
            lVar1 = (ulonglong)DAT_00404a58 * (ulonglong)uVar4 + (ulonglong)DAT_00404a5c;
            FUN_00407f14((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),DAT_00404a60,0);
            thunk_EXT_FUN_2040215c();
            (**(code **)(param_1 + 0x20a8))(param_1);
          }
        }
        else {
          *DAT_00404a54 = 0;
          *(undefined *)(param_1 + 6) = 1;
          local_4e = 0;
          (**(code **)(param_1 + 0x20bc))(param_1,auStack_50,3);
        }
      }
      else {
        local_4e = 0xc;
        (**(code **)(param_1 + 0x20bc))(param_1,auStack_50,3);
      }
    }
  }
  return;
}



//==== FUNC sub_0040489e @ 0040489e ====

void sub_0040489e(int param_1,int param_2,int param_3)

{
  undefined auStack_1600 [2];
  undefined auStack_15fe [5602];
  
  FUN_00406ab0(auStack_1600,DAT_00404a64,0x15e0);
  FUN_00406a90(auStack_15fe,param_2 + 1,param_3 + -1);
  (**(code **)(param_1 + 0x20bc))(param_1,auStack_1600,param_3 + 1);
  return;
}



//==== FUNC sub_004048e6 @ 004048e6 ====

undefined8 sub_004048e6(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 local_20;
  undefined uStack_1e;
  undefined uStack_1d;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  uVar1 = *DAT_00404a68;
  uVar2 = DAT_00404a68[1];
  local_20 = (undefined2)uVar1;
  uStack_1e = (undefined)((uint)uVar1 >> 0x10);
  uStack_1d = (undefined)((uint)uVar1 >> 0x18);
  local_1c = (undefined)uVar2;
  local_1b = (undefined)((uint)uVar2 >> 8);
  local_1a = (undefined)((uint)uVar2 >> 0x10);
  local_19 = (undefined)((uint)uVar2 >> 0x18);
  uVar1 = FUN_004080ec();
  uStack_1e = (undefined)((uint)uVar1 >> 0x18);
  uStack_1d = (undefined)((uint)uVar1 >> 0x10);
  local_1c = (undefined)((uint)uVar1 >> 8);
  local_1b = (undefined)uVar1;
  local_1a = 0xc;
  local_19 = 0;
  (**(code **)(param_1 + 0x20bc))(param_1,&local_20,8);
  return CONCAT17(local_19,CONCAT16(local_1a,CONCAT15(local_1b,CONCAT14(local_1c,CONCAT13(uStack_1d,
                                                                                          CONCAT12(
                                                  uStack_1e,local_20))))));
}



//==== FUNC sub_00404936 @ 00404936 ====

void sub_00404936(int param_1,int param_2,int param_3)

{
  int iVar1;
  char local_1a8 [4];
  undefined auStack_1a4 [192];
  undefined auStack_e4 [2];
  undefined local_e2;
  undefined auStack_e1 [197];
  
  FUN_00406a90(auStack_e4,DAT_00404a6c,0xc3);
  if (param_3 == 0xc1) {
    local_1a8[0] = '\0';
    FUN_00406b1e(1,local_1a8);
    if (local_1a8[0] == '\0') {
      iVar1 = FUN_004050a8(param_2 + 1,0xc0);
      if (iVar1 == 0) {
        local_e2 = 0xe;
        (**(code **)(param_1 + 0x20bc))(param_1,auStack_e4,3);
      }
      else {
        FUN_00406b12();
        sub_0040510e(auStack_1a4);
        local_e2 = 0;
        FUN_00406a90(auStack_e1,auStack_1a4,0xc0);
        (**(code **)(param_1 + 0x20bc))(param_1,auStack_e4,0xc3);
      }
    }
    else {
      local_e2 = 5;
      (**(code **)(param_1 + 0x20bc))(param_1,auStack_e4,3);
    }
  }
  else {
    local_e2 = 8;
    (**(code **)(param_1 + 0x20bc))(param_1,auStack_e4,3);
  }
  return;
}



//==== FUNC FUN_00404a70 @ 00404a70 ====

void FUN_00404a70(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined local_40 [20];
  int local_2c;
  undefined4 local_28;
  
  uVar3 = 0;
  uVar2 = 0;
  local_2c = param_2;
  local_28 = param_4;
  FUN_0040017c(local_40,0x14);
  uVar4 = 0;
  do {
    if ((param_3 & 0xff) <= (uVar4 & 0xff)) {
      return;
    }
    local_40[uVar3 & 0xff] = *(undefined *)(param_1 + (uVar4 & 0xff));
    uVar3 = (uVar3 & 0xff) + 1;
    if ((ushort)*(byte *)(param_1 + (uVar4 & 0xff) + 1) == (short)(char)local_28) {
      uVar4 = (uVar4 & 0xff) + 1;
      uVar1 = FUN_004081e8(local_40);
      *(undefined *)(local_2c + (uVar2 & 0xff)) = uVar1;
      uVar3 = 0;
      FUN_00406f28(local_40,0x14,0);
      uVar2 = (uVar2 & 0xff) + 1;
    }
    else {
      param_3 = param_3 & 0xff;
      uVar4 = uVar4 & 0xff;
      if (param_3 == uVar4 + 1) {
        uVar1 = FUN_004081e8(local_40);
        *(undefined *)(local_2c + (uVar2 & 0xff)) = uVar1;
        return;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}



//==== FUNC FUN_00404b10 @ 00404b10 ====

undefined4 FUN_00404b10(byte param_1,short *param_2)

{
  char cVar1;
  undefined4 uVar2;
  byte local_30;
  byte local_2f;
  byte local_2a;
  byte local_29;
  byte local_27;
  byte local_26;
  byte local_21;
  byte local_20;
  byte local_15;
  byte local_14;
  
  FUN_0040017c(&local_30,0x20);
  if (param_1 == 0) {
    cVar1 = FUN_004081f0(2,0,0,0,&local_30,0x20);
    if (cVar1 == '\0') {
      *param_2 = (ushort)local_30 * 0x100 + (ushort)local_2f;
      uVar2 = 1;
    }
    else {
      *param_2 = 0;
      uVar2 = 0;
    }
  }
  else if (param_1 == 2) {
    cVar1 = FUN_004081f0(2,0,0,0,&local_30,0x20);
    if (cVar1 == '\0') {
      *param_2 = (ushort)local_15 * 0x100 + (ushort)local_14;
      uVar2 = 1;
    }
    else {
      *param_2 = 0;
      uVar2 = 0;
    }
  }
  else if (param_1 < 2) {
    cVar1 = FUN_004081f0(2,0,0,0,&local_30,0x20);
    if (cVar1 == '\0') {
      *param_2 = (ushort)local_21 * 0x100 + (ushort)local_20;
      uVar2 = 1;
    }
    else {
      *param_2 = 0;
      uVar2 = 0;
    }
  }
  else if (param_1 == 4) {
    cVar1 = FUN_004081f0(2,9,0,0,&local_30,0x20);
    if (cVar1 == '\0') {
      *param_2 = (ushort)local_27 * 0x100 + (ushort)local_26;
      uVar2 = 1;
    }
    else {
      *param_2 = 0;
      uVar2 = 0;
    }
  }
  else if (param_1 < 4) {
    cVar1 = FUN_004081f0(2,1,0,0,&local_30,0x20);
    if (cVar1 == '\0') {
      *param_2 = (ushort)local_2a * 0x100 + (ushort)local_29;
      uVar2 = 1;
    }
    else {
      *param_2 = 0;
      uVar2 = 0;
    }
  }
  else {
    *param_2 = 0;
    uVar2 = 0;
  }
  return uVar2;
}



//==== FUNC sub_00404c62 @ 00404c62 ====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ushort sub_00404c62(byte param_1,undefined4 param_2,ushort param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  byte local_180;
  byte local_17f;
  undefined auStack_17e [2];
  byte abStack_17c [4];
  undefined uStack_178;
  byte local_177;
  byte local_176;
  undefined auStack_175 [4];
  byte local_171;
  byte local_170;
  undefined auStack_16f [10];
  byte local_165;
  byte local_164;
  undefined auStack_163 [3];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined auStack_154 [3];
  undefined auStack_151 [245];
  undefined auStack_5c [52];
  undefined4 local_28;
  
  local_160 = *DAT_00404fcc;
  uStack_15c = DAT_00404fcc[1];
  uStack_158 = DAT_00404fcc[2];
  local_28 = param_2;
  FUN_0040017c(&local_180,0x20);
  FUN_0040017c(auStack_154,300);
  if (param_1 == 0) {
    cVar1 = FUN_004081f0(2,0,0,0,&local_180,0x20);
    if (cVar1 == '\0') {
      uVar2 = (ushort)local_180 * 0x100 + (ushort)local_17f;
      if (uVar2 == (ushort)local_160) {
        if (param_3 < uVar2) {
          uVar2 = param_3;
        }
        FUN_00406a90(local_28,auStack_17e,uVar2);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else if (param_1 == 2) {
    cVar1 = FUN_004081f0(2,0,0,0,&local_180,0x20);
    if (cVar1 == '\0') {
      uVar2 = (ushort)local_165 * 0x100 + (ushort)local_164;
      if (uVar2 == (ushort)uStack_15c) {
        if (param_3 < uVar2) {
          uVar2 = param_3;
        }
        FUN_00406a90(auStack_154,auStack_163,3);
        cVar1 = FUN_004081f0(2,1,0,0,&local_180,0x20);
        if (cVar1 == '\0') {
          FUN_00406a90(auStack_151,&local_180,6);
          FUN_00406a90(local_28,auStack_154,uVar2);
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
  }
  else if (param_1 < 2) {
    cVar1 = FUN_004081f0(2,0,0,0,&local_180,0x20);
    if (cVar1 == '\0') {
      uVar2 = (ushort)local_171 * 0x100 + (ushort)local_170;
      if (uVar2 == *(ushort *)((int)&local_160 + (char)param_1 * 2)) {
        if (param_3 < uVar2) {
          uVar2 = param_3;
        }
        FUN_00406a90(local_28,auStack_16f,uVar2);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else if (param_1 == 4) {
    cVar1 = FUN_004081f0(2,9,0,0,&local_180,0x20);
    if (cVar1 == '\0') {
      uVar2 = (ushort)local_177 * 0x100 + (ushort)local_176;
      if (uVar2 == (ushort)uStack_158) {
        if (param_3 < uVar2) {
          uVar2 = param_3;
        }
        FUN_00406a90(local_28,auStack_175,uVar2);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else if (param_1 < 4) {
    cVar1 = FUN_004081f0(2,1,0,0,&local_180,0x20);
    if (cVar1 == '\0') {
      uVar2 = (ushort)abStack_17c[2] * 0x100 + (ushort)abStack_17c[3];
      if (uVar2 == *(ushort *)((int)&local_160 + (char)param_1 * 2)) {
        if (param_3 < uVar2) {
          uVar2 = param_3;
        }
        FUN_00406a90(auStack_154,&uStack_178,0x18);
        for (uVar3 = 2; (uVar3 & 0xff) < 9; uVar3 = (uVar3 & 0xff) + 1) {
          cVar1 = FUN_004081f0(2,uVar3 & 0xff,0,0,&local_180,0x20);
          if (cVar1 != '\0') {
            return 0;
          }
          FUN_00406a90(abStack_17c + (uVar3 & 0xff) * 0x20,&local_180,0x20);
        }
        cVar1 = FUN_004081f0(2,9,0,0,&local_180,0x20);
        if (cVar1 == '\0') {
          FUN_00406a90(auStack_5c,&local_180,9);
          FUN_00406a90(local_28,auStack_154,uVar2);
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
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



//==== FUNC FUN_00404fd0 @ 00404fd0 ====

undefined4 FUN_00404fd0(short param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char local_28 [8];
  
  local_28[0] = '\0';
  FUN_00406b1e(1,local_28);
  if (local_28[0] != '\0') {
    return 0;
  }
  FUN_00406b1e(0,local_28);
  if (local_28[0] == '\0') {
    cVar1 = FUN_004082fc();
    if (cVar1 != '\0') {
      return 0;
    }
    cVar1 = FUN_00406b06();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  if (param_1 == 0) {
    uVar3 = (param_3 & 0xffff) / 0x20;
    if ((param_3 & 0xffff) % 0x20 != 0) {
      uVar3 = uVar3 + 1;
    }
    for (uVar4 = 0; (uVar4 & 0xff) < (uVar3 & 0xff); uVar4 = (uVar4 & 0xff) + 1) {
      cVar1 = FUN_0040826c(2,uVar4 & 0xff,0,0,param_2,0x20);
      if (cVar1 != '\0') {
        return 0;
      }
      param_2 = param_2 + 0x20;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



//==== FUNC FUN_004050a8 @ 004050a8 ====

undefined8 FUN_004050a8(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_18;
  
  local_18 = param_4 & 0xffffff00;
  uVar4 = param_2;
  FUN_00406b1e(1,&local_18);
  if ((char)local_18 == '\0') {
    if ((param_2 & 0xffff) == 0xc0) {
      for (uVar3 = 0; (uVar3 & 0xff) < 6; uVar3 = (uVar3 & 0xff) + 1) {
        uVar4 = param_1;
        cVar1 = FUN_0040826c(2,(uVar3 & 0xff) + 10,0,0,param_1,0x20);
        if (cVar1 != '\0') {
          uVar2 = 0;
          goto LAB_0040510c;
        }
        param_1 = param_1 + 0x20;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
LAB_0040510c:
  return CONCAT44(uVar4,uVar2);
}



//==== FUNC sub_0040510e @ 0040510e ====

undefined4 sub_0040510e(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined auStack_100 [32];
  undefined auStack_e0 [196];
  
  FUN_0040017c(auStack_e0,0xc0);
  FUN_0040017c(auStack_100,0x20);
  uVar2 = 0;
  while( true ) {
    if (5 < (uVar2 & 0xff)) {
      FUN_00406a90(param_1,auStack_e0,0xc0);
      return 0xc0;
    }
    cVar1 = FUN_004081f0(2,(uVar2 & 0xff) + 10,0,0,auStack_100,0x20);
    if (cVar1 != '\0') break;
    FUN_00406a90(auStack_e0 + (uVar2 & 0xff) * 0x20,auStack_100,0x20);
    uVar2 = (uVar2 & 0xff) + 1;
  }
  return 0;
}



//==== FUNC sub_0040518a @ 0040518a ====

undefined4 sub_0040518a(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined auStack_f8 [24];
  undefined auStack_e0 [196];
  
  sub_0040510e(auStack_e0);
  FUN_0040017c(auStack_f8,0x18);
  for (uVar1 = 0; (uVar1 & 0xff) < 3; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_00406a90(auStack_f8 + (uVar1 & 0xff) * 8,
                 auStack_e0 + (uint)*(byte *)(param_1 + (uVar1 & 0xff)) * 8,8);
  }
  FUN_00406a90(param_2,auStack_f8,0x18);
  return 0x18;
}



//==== FUNC FUN_004051e4 @ 004051e4 ====

uint FUN_004051e4(uint *param_1,uint *param_2,uint param_3)

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



//==== FUNC FUN_00405248 @ 00405248 ====

void FUN_00405248(undefined4 param_1)

{
  FUN_00406e40(param_1);
  return;
}



//==== FUNC FUN_00405254 @ 00405254 ====

undefined4 FUN_00405254(void)

{
  undefined4 unaff_r7;
  
  FUN_00405248(10);
  FUN_00405248(0xb);
  FUN_00405248(0xc);
  FUN_00405248(0x10);
  FUN_00405248(0x11);
  return unaff_r7;
}



//==== FUNC FUN_00405276 @ 00405276 ====

undefined4 FUN_00405276(void)

{
  undefined4 unaff_r7;
  
  FUN_00405254();
  return unaff_r7;
}



//==== FUNC FUN_0040527e @ 0040527e ====

undefined8 FUN_0040527e(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  FUN_00408476(0x42,0,0);
  FUN_00408476(0x43,0,0);
  iVar1 = FUN_0040849a(0x42);
  if ((iVar1 == 0) && (iVar1 = FUN_0040849a(0x43), iVar1 != 0)) {
    uVar2 = 2;
  }
  else {
    iVar1 = FUN_0040849a(0x42);
    if ((iVar1 == 0) || (iVar1 = FUN_0040849a(0x43), iVar1 == 0)) {
      uVar2 = 3;
    }
    else {
      uVar2 = 1;
    }
  }
  return CONCAT44(unaff_r7,uVar2);
}



//==== FUNC FUN_004052c8 @ 004052c8 ====

void FUN_004052c8(void)

{
  char cVar1;
  
  FUN_00408476(0x1f,1,0);
  FUN_00408476(0x40,1,0);
  FUN_00408476(0x41,1,0);
  cVar1 = FUN_0040527e();
  if (cVar1 == '\x02') {
    FUN_00408476(0x50,1,1);
    FUN_00408476(0x51,1,1);
  }
  else if (cVar1 == '\x03') {
    FUN_00408476(0x50,1,1);
    FUN_00408476(0x51,1,1);
    FUN_00408476(0x40,1,1);
  }
  else {
    FUN_00408476(0x50,1,0);
    FUN_00408476(0x51,1,0);
  }
  FUN_00408476(0x52,1,0);
  FUN_00408476(0x53,1,0);
  FUN_00408476(0x54,1,0);
  FUN_00408476(0x77,1,0);
  FUN_00408476(0x78,1,0);
  FUN_00408476(0x79,1,0);
  FUN_00408476(0x7a,1,0);
  return;
}



//==== FUNC FUN_0040538e @ 0040538e ====

undefined8 FUN_0040538e(void)

{
  char cVar1;
  undefined4 unaff_r7;
  
  cVar1 = FUN_004084b8(0);
  return CONCAT44(unaff_r7,(int)cVar1);
}



//==== FUNC FUN_0040539a @ 0040539a ====

undefined8 FUN_0040539a(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_004084c2(0,(int)param_1);
  iVar1 = FUN_0040538e();
  return CONCAT44(param_4,(uint)(param_1 == iVar1));
}



//==== FUNC FUN_004053be @ 004053be ====

undefined8 FUN_004053be(void)

{
  char cVar1;
  undefined4 unaff_r7;
  
  cVar1 = FUN_004084b8(1);
  return CONCAT44(unaff_r7,(int)cVar1);
}



//==== FUNC FUN_004053ca @ 004053ca ====

undefined8 FUN_004053ca(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_004084c2(1,(int)param_1);
  iVar1 = FUN_004053be();
  return CONCAT44(param_4,(uint)(param_1 == iVar1));
}



//==== FUNC FUN_004053ee @ 004053ee ====

void FUN_004053ee(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  for (uVar2 = 0; (uVar2 & 0xff) < 6; uVar2 = (uVar2 & 0xff) + 1) {
    uVar1 = FUN_004084b8((int)(char)((char)uVar2 + '\x02'));
    *(char *)(param_1 + (uVar2 & 0xff) * 4) = (char)((uint)uVar1 >> 0x18);
    *(char *)(param_1 + (uVar2 & 0xff) * 4 + 1) = (char)((uint)uVar1 >> 0x10);
    *(char *)(param_1 + (uVar2 & 0xff) * 4 + 2) = (char)((uint)uVar1 >> 8);
    *(char *)(param_1 + (uVar2 & 0xff) * 4 + 3) = (char)uVar1;
  }
  return;
}



//==== FUNC FUN_00405434 @ 00405434 ====

bool FUN_00405434(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined auStack_30 [36];
  
  for (uVar2 = 0; (uVar2 & 0xff) < 6; uVar2 = (uVar2 & 0xff) + 1) {
    FUN_004084c2((int)(char)((char)uVar2 + '\x02'),0);
    FUN_004084c2((int)(char)((char)uVar2 + '\x02'),
                 (int)*(char *)(param_1 + (uVar2 & 0xff) * 4 + 3) |
                 (int)*(char *)(param_1 + (uVar2 & 0xff) * 4 + 1) << 0x10 |
                 (int)*(char *)(param_1 + (uVar2 & 0xff) * 4) << 0x18 |
                 (int)*(char *)(param_1 + (uVar2 & 0xff) * 4 + 2) << 8);
  }
  FUN_0040017c(auStack_30,0x20);
  FUN_004053ee(auStack_30);
  iVar1 = FUN_004051e4(auStack_30,param_1,0x20);
  return iVar1 == 0;
}



//==== FUNC FUN_004054b2 @ 004054b2 ====

undefined8 FUN_004054b2(int param_1,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = *param_4;
  if (param_3 <= uVar1) {
    *param_4 = *param_4 - param_3;
  }
  else {
    *(undefined *)(param_2 + 2) = 8;
    (**(code **)(param_1 + 0x20bc))(param_1,param_2,3);
  }
  return CONCAT44(param_4,(uint)(param_3 <= uVar1));
}



//==== FUNC FUN_004054e2 @ 004054e2 ====

void FUN_004054e2(undefined *param_1,int param_2,int param_3,byte param_4)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < (uint)param_4; uVar1 = (uVar1 & 0xff) + 1) {
    *param_1 = (char)((ushort)*(undefined2 *)(param_3 + (uVar1 & 0xff) * 2) >> 8);
    param_1[1] = (char)*(undefined2 *)(param_3 + (uVar1 & 0xff) * 2);
    FUN_00406a90(param_1 + 2,*(undefined4 *)(param_2 + (uVar1 & 0xff) * 4),
                 *(undefined2 *)(param_3 + (uVar1 & 0xff) * 2));
    param_1 = param_1 + 2 + *(ushort *)(param_3 + (uVar1 & 0xff) * 2);
  }
  return;
}



//==== FUNC sub_00405548 @ 00405548 ====

undefined8 sub_00405548(int param_1)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(char *)(param_1 + 0x1c) == '\0') {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (((*(char *)(param_1 + 0xb) == '\0') ||
          (*(char *)(param_1 + 0xc) != *(char *)(param_1 + 0x28))) ||
         (*(char *)(param_1 + 0xc) != *(char *)(param_1 + 0x103e))) {
        if (*(ushort *)(param_1 + 0x1e) < 3) {
          (**(code **)(param_1 + 0x20bc))(param_1,&local_18,3);
          *(undefined *)(param_1 + 0xd) = 0;
          uVar3 = 0;
        }
        else {
          sVar1 = *(short *)(param_1 + 0x1e);
          uVar5 = sVar1 - 2;
          *(undefined *)(param_1 + 0xb) = *(undefined *)(param_1 + 0x25);
          *(undefined *)(param_1 + 0xc) = *(undefined *)(param_1 + 0x28);
          cVar2 = *(char *)(param_1 + 0x29);
          if (cVar2 == '!') {
            iVar4 = (**(code **)(param_1 + 0x20d0))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '\"') {
            iVar4 = (**(code **)(param_1 + 0x20d4))(param_1,param_1 + 0x29,uVar5 + 1);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '#') {
            iVar4 = (**(code **)(param_1 + 0x20d8))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '$') {
            iVar4 = (**(code **)(param_1 + 0x20dc))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '%') {
            iVar4 = (**(code **)(param_1 + 0x20e0))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '&') {
            iVar4 = (**(code **)(param_1 + 0x20e4))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '\'') {
            uVar3 = sub_00406150(param_1,param_1 + 0x2a,sVar1 + -2);
          }
          else if (cVar2 == '(') {
            iVar4 = (**(code **)(param_1 + 0x20e8))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == ')') {
            uVar3 = FUN_0040616a(param_1,param_1 + 0x2a,sVar1 + -2);
          }
          else if (cVar2 == '*') {
            uVar3 = FUN_00406184(param_1,param_1 + 0x29,uVar5 + 1);
          }
          else if (cVar2 == '/') {
            uVar3 = FUN_0040619e(param_1,param_1 + 0x29,uVar5 + 1);
          }
          else if (cVar2 == -1) {
            (**(code **)(param_1 + 0x20bc))(param_1,param_1 + 0x29,uVar5 + 1);
          }
          else {
            (**(code **)(param_1 + 0x20bc))(param_1,&LAB_00405a90,2);
          }
          *(undefined *)(param_1 + 0xd) = 0;
          uVar3 = uVar3 & 0xff;
        }
      }
      else {
        if (*(uint *)(param_1 + 0x1034) < 0x1011) {
          (**(code **)(param_1 + 0x20b8))
                    (param_1,param_1 + 0x1038,*(undefined4 *)(param_1 + 0x1034));
        }
        else {
          (**(code **)(param_1 + 0x20b8))(param_1,param_1 + 0x1038,4);
        }
        (**(code **)(param_1 + 0x20c8))(param_1,1);
        *(undefined *)(param_1 + 0xd) = 0;
        uVar3 = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0xb) != '\0') {
        (**(code **)(param_1 + 0x20bc))(param_1,&LAB_0040584c,2);
      }
      *(undefined *)(param_1 + 0xd) = 0;
      uVar3 = 0;
    }
  }
  return CONCAT44(local_18,uVar3);
}



//==== FUNC FUN_004057aa @ 004057aa ====

undefined4 FUN_004057aa(void)

{
  undefined4 unaff_r7;
  
  *DAT_004062b0 = 0x4000;
  *DAT_004062b4 = 0x1d2;
  *DAT_004062b8 = 0x4000;
  do {
  } while (-1 < *DAT_004062bc << 0x11);
  FUN_00406e40(0x34);
  FUN_004084d0(DAT_004062c0,2,0xc000);
  FUN_00408506(DAT_004062c0,2,10);
  return unaff_r7;
}



//==== FUNC FUN_004057f6 @ 004057f6 ====

void FUN_004057f6(int param_1)

{
  int iVar1;
  
  param_1 = param_1 * 1000;
  FUN_004084ee(DAT_004062c0,2);
  while (param_1 != 0) {
    iVar1 = FUN_00408536(DAT_004062c0,2);
    if (iVar1 << 0x1b < 0) {
      param_1 = param_1 + -1;
    }
    if (-1 < iVar1 << 0xf) {
      FUN_004084ee(DAT_004062c0,2);
    }
  }
  FUN_004084fa(DAT_004062c0,2);
  return;
}



//==== FUNC FUN_00405850 @ 00405850 ====

void FUN_00405850(int param_1)

{
  int iVar1;
  
  FUN_004084ee(DAT_004062c0,2);
  while (param_1 != 0) {
    iVar1 = FUN_00408536(DAT_004062c0,2);
    if (iVar1 << 0x1b < 0) {
      param_1 = param_1 + -1;
    }
    if (-1 < iVar1 << 0xf) {
      FUN_004084ee(DAT_004062c0,2);
    }
  }
  FUN_004084fa(DAT_004062c0,2);
  return;
}



//==== FUNC FUN_0040589e @ 0040589e ====

undefined8 FUN_0040589e(undefined4 param_1,char param_2)

{
  int iVar1;
  uint local_18;
  undefined4 uStack_14;
  
  FUN_00406c5a(0);
  FUN_0040871a();
  FUN_004087a6();
  FUN_00405276();
  FUN_00408476(0x44,1,0);
  FUN_004052c8();
  FUN_004057aa();
  FUN_004087dc();
  FUN_00408896();
  FUN_00407994();
  if (param_2 != '\0') {
    FUN_00407976();
    for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
      for (iVar1 = 0; iVar1 < 400; iVar1 = iVar1 + 1) {
        FUN_00407984(1);
        FUN_00405850(0x6e);
        FUN_00407984(0);
        FUN_00405850(0x6e);
      }
      FUN_004057f6(0x32);
    }
  }
  FUN_00408190();
  FUN_00407bce(0x1c200);
  FUN_00407dac(1);
  FUN_00407d42();
  FUN_00408ad8(0x18);
  FUN_00408b60(1);
  return CONCAT44(uStack_14,local_18);
}



//==== FUNC FUN_00405dc8 @ 00405dc8 ====

undefined8 FUN_00405dc8(int param_1,int param_2,int param_3,uint param_4)

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
    *(undefined *)(param_1 + 0x103a) = *(undefined *)(param_1 + 0xb);
    *(undefined *)(param_1 + 0x103b) = *(undefined *)(param_1 + 10);
    *(char *)(param_1 + 0x103c) = (char)(uVar2 + 1 >> 8);
    *(char *)(param_1 + 0x103d) = (char)uVar2 + '\x01';
    *(undefined *)(param_1 + 0x103e) = *(undefined *)(param_1 + 0xc);
    iVar3 = param_1 + 0x103f;
    for (uVar4 = 0; uVar4 < param_4; uVar4 = uVar4 + 1) {
      local_2c = *(undefined4 *)(param_3 + uVar4 * 4);
      FUN_00406a90(iVar3,*(undefined4 *)(param_2 + uVar4 * 4),local_2c);
      iVar3 = iVar3 + *(int *)(param_3 + uVar4 * 4);
    }
    uVar1 = (**(code **)(param_1 + 0x20b8))(param_1,param_1 + 0x1038,uVar2 + 7);
    local_30 = CONCAT31(local_30._1_3_,uVar1);
    (**(code **)(param_1 + 0x20b8))(param_1,&local_30,1);
    *(undefined *)(param_1 + uVar2 + 0x103f) = (undefined)local_30;
    *(uint *)(param_1 + 0x1034) = uVar2 + 8;
  }
  (**(code **)(param_1 + 0x20c8))(param_1,1);
  return CONCAT44(local_2c,local_30);
}



//==== FUNC FUN_00405ebc @ 00405ebc ====

undefined8 FUN_00405ebc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  (**(code **)(param_1 + 0x20c0))(param_1,&uStack_14,&uStack_10,1);
  return CONCAT44(uStack_14,param_1);
}



//==== FUNC sub_004060d0 @ 004060d0 ====

undefined8 sub_004060d0(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  uVar2 = *DAT_004065a8;
  if (*(char *)(param_1 + 3) == '\x01') {
    bVar1 = *param_2;
    local_18 = uVar2;
    if (bVar1 == 2) {
      sub_00408d4c(param_1,param_2,param_3);
    }
    else {
      if (1 < bVar1) {
        if (bVar1 == 4) {
          FUN_0040903e(param_1,param_2,param_3);
          goto LAB_0040614e;
        }
        if (bVar1 < 4) {
          sub_00408f04(param_1,param_2,param_3);
          goto LAB_0040614e;
        }
      }
      (**(code **)(param_1 + 0x20bc))(param_1,&DAT_0040629c,3);
    }
  }
  else {
    (**(code **)(param_1 + 0x20bc))(param_1,&local_18,3);
  }
LAB_0040614e:
  return CONCAT44(local_18,1);
}



//==== FUNC sub_00406150 @ 00406150 ====

undefined4 sub_00406150(int param_1)

{
  (**(code **)(param_1 + 0x20bc))(param_1,&DAT_004062a0,2);
  return 1;
}



//==== FUNC FUN_0040616a @ 0040616a ====

undefined4 FUN_0040616a(int param_1)

{
  (**(code **)(param_1 + 0x20bc))(param_1,&DAT_004062a4,2);
  return 1;
}



//==== FUNC FUN_00406184 @ 00406184 ====

undefined4 FUN_00406184(int param_1)

{
  (**(code **)(param_1 + 0x20bc))(param_1,&DAT_004062a8,2);
  return 1;
}



//==== FUNC FUN_0040619e @ 0040619e ====

undefined4 FUN_0040619e(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004053be();
  if ((iVar1 != 7) && (iVar1 = FUN_004053ca(7), iVar1 != 0)) {
    (**(code **)(param_1 + 0x20a8))(param_1);
  }
  (**(code **)(param_1 + 0x20bc))(param_1,&DAT_004062ac,2);
  return 1;
}



//==== FUNC FUN_004061d4 @ 004061d4 ====

void FUN_004061d4(void)

{
  FUN_004093e8(*DAT_004065a0);
  FUN_00409408();
  return;
}



//==== FUNC FUN_004065d4 @ 004065d4 ====

short FUN_004065d4(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = FUN_00400144(param_1);
  return sVar1 + 1;
}



//==== FUNC FUN_004065e4 @ 004065e4 ====

void FUN_004065e4(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_30 [8];
  
  FUN_0040017c(local_30 + 3,0x10);
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  FUN_004096e4(local_30 + 3,0x80);
  uVar2 = 1;
  for (uVar1 = 0; (uVar1 & 0xff) < 4; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_00406ba6(local_30 + (uVar1 & 0xff),local_30[(uVar2 & 0xff) + 3]);
    uVar2 = (uVar2 & 0xff) + 1;
  }
  for (uVar1 = 0; (uVar1 & 0xff) < 0xc; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_00406bb6(param_1 + (uVar1 & 0xff) * 2,*(undefined *)((int)local_30 + (uVar1 & 0xff)),0);
  }
  return;
}



//==== FUNC FUN_00406650 @ 00406650 ====

ushort FUN_00406650(undefined4 param_1,undefined param_2)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = sub_00404c62(0,param_1,param_2);
  if (uVar1 == 0) {
    sVar2 = FUN_00406b8e(DAT_004066a0);
    if (sVar2 == 0xd) {
      FUN_00406a90(param_1,DAT_004066a4,0xd);
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



//==== FUNC FUN_004066a8 @ 004066a8 ====

undefined FUN_004066a8(int param_1,byte param_2)

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



//==== FUNC FUN_004066ec @ 004066ec ====

undefined4 FUN_004066ec(int param_1,int param_2,uint param_3)

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



//==== FUNC FUN_00406710 @ 00406710 ====

undefined4
FUN_00406710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_48c [516];
  undefined auStack_288 [516];
  undefined auStack_84 [92];
  undefined4 local_28;
  
  local_28 = param_1;
  FUN_00406ab0(auStack_48c,DAT_00406a68,0x204);
  FUN_00406a90(auStack_288,auStack_48c,0x204);
  FUN_00409730(auStack_84,local_28,param_2);
  uVar1 = FUN_00400144(param_5);
  iVar2 = FUN_004097f4(auStack_84,param_5,uVar1);
  if (iVar2 == 0) {
    uVar1 = FUN_00400144(param_6);
    iVar2 = FUN_004097f4(auStack_84,param_6,uVar1);
    if (iVar2 == 0) {
      uVar1 = FUN_00409808(auStack_84,param_3,param_4,auStack_288);
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



//==== FUNC FUN_004067b0 @ 004067b0 ====

undefined4 FUN_004067b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_488 [516];
  undefined auStack_284 [516];
  undefined auStack_80 [92];
  
  FUN_00406ab0(auStack_488,DAT_00406a6c,0x204);
  FUN_00406a90(auStack_284,auStack_488,0x204);
  iVar1 = FUN_004097e8(auStack_80);
  if (iVar1 == 0) {
    uVar2 = FUN_00400144(param_3);
    iVar1 = FUN_004097f4(auStack_80,param_3,uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_00400144(param_4);
      iVar1 = FUN_004097f4(auStack_80,param_4,uVar2);
      if (iVar1 == 0) {
        uVar2 = FUN_00409808(auStack_80,param_1,param_2,auStack_284);
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



//==== FUNC FUN_00406848 @ 00406848 ====

undefined4 FUN_00406848(int param_1)

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
  
  FUN_00406ab0(auStack_588,DAT_00406a70,0x204);
  FUN_00406a90(auStack_284,auStack_588,0x204);
  uVar5 = (uint)*(byte *)(param_1 + DAT_00406a74) * 0x1000000 +
          (uint)*(byte *)(param_1 + DAT_00406a78) * 0x10000 +
          (uint)*(byte *)(param_1 + DAT_00406a7c) * 0x100 + (uint)*(byte *)(param_1 + DAT_00406a80);
  if (DAT_00406a84 < uVar5) {
    uVar1 = 0xfffffffd;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + DAT_00406a88);
    FUN_00406a90(auStack_384,(param_1 - uVar2) + DAT_00406a88,uVar2);
    iVar3 = FUN_004097e8(auStack_80);
    if (iVar3 == 0) {
      for (iVar3 = 0; iVar3 < (int)(uVar5 / 0x10); iVar3 = iVar3 + 1) {
        iVar4 = FUN_004097f4(auStack_80,param_1 + iVar3 * 0x10,0x10);
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
      }
      if ((uVar5 % 0x10 == 0) ||
         (iVar3 = FUN_004097f4(auStack_80,param_1 + iVar3 * 0x10,uVar5 % 0x10), iVar3 == 0)) {
        uVar1 = FUN_00409808(auStack_80,auStack_384,uVar2,auStack_284);
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



//==== FUNC FUN_0040694a @ 0040694a ====

undefined4 FUN_0040694a(int param_1)

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
  
  FUN_00406ab0(auStack_588,DAT_00406a8c,0x204);
  FUN_00406a90(auStack_384,auStack_588,0x204);
  uVar5 = (uint)*(byte *)(param_1 + 0xfffc) * 0x1000000 +
          (uint)*(byte *)(param_1 + 0xfffd) * 0x10000 + (uint)*(byte *)(param_1 + 0xfffe) * 0x100 +
          (uint)*(byte *)(param_1 + 0xffff);
  if (uVar5 < 0xff21) {
    uVar2 = (uint)*(byte *)(param_1 + 0xfffb);
    FUN_00406a90(auStack_124,(param_1 - uVar2) + 0xfffb,uVar2);
    iVar3 = FUN_004097e8(auStack_180);
    if (iVar3 == 0) {
      for (iVar3 = 0; iVar3 < (int)(uVar5 / 0x10); iVar3 = iVar3 + 1) {
        iVar4 = FUN_004097f4(auStack_180,param_1 + iVar3 * 0x10,0x10);
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
      }
      if ((uVar5 % 0x10 == 0) ||
         (iVar3 = FUN_004097f4(auStack_180,param_1 + iVar3 * 0x10,uVar5 % 0x10), iVar3 == 0)) {
        uVar1 = FUN_00409808(auStack_180,auStack_124,uVar2,auStack_384);
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



//==== FUNC FUN_00406a90 @ 00406a90 ====

void FUN_00406a90(undefined4 *param_1,undefined4 *param_2,uint param_3)

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



//==== FUNC FUN_00406ab0 @ 00406ab0 ====

void FUN_00406ab0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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



//==== FUNC FUN_00406b06 @ 00406b06 ====

void FUN_00406b06(void)

{
  FUN_004099ba(0x80,0);
  return;
}



//==== FUNC FUN_00406b12 @ 00406b12 ====

void FUN_00406b12(void)

{
  FUN_004099ba(0x81,0);
  return;
}



//==== FUNC FUN_00406b1e @ 00406b1e ====

char FUN_00406b1e(char param_1,int param_2)

{
  char cVar1;
  undefined auStack_18 [2];
  char local_16;
  char local_15;
  
  if (param_2 == 0) {
    cVar1 = -0x1e;
  }
  else {
    cVar1 = FUN_004081f0(0,0,2,5,auStack_18,4);
    if (cVar1 == '\0') {
      if (param_1 == '\0') {
        *(bool *)param_2 = local_15 != 'U';
      }
      else if (param_1 == '\x01') {
        *(bool *)param_2 = local_16 != 'U';
      }
      else {
        cVar1 = -0x1e;
      }
    }
  }
  return cVar1;
}



//==== FUNC FUN_00406b8e @ 00406b8e ====

undefined2 FUN_00406b8e(undefined *param_1)

{
  return CONCAT11(*param_1,param_1[1]);
}



//==== FUNC FUN_00406b9a @ 00406b9a ====

void FUN_00406b9a(undefined *param_1,undefined2 param_2)

{
  *param_1 = (char)((ushort)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}



//==== FUNC FUN_00406ba6 @ 00406ba6 ====

void FUN_00406ba6(undefined *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}



//==== FUNC FUN_00406bb6 @ 00406bb6 ====

void FUN_00406bb6(byte *param_1,byte param_2,char param_3)

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



//==== FUNC FUN_00406c08 @ 00406c08 ====

void FUN_00406c08(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = 0;
    goto LAB_00406c3c;
  }
  if (param_1 != 0) {
    if (param_1 == 3) {
      uVar1 = 0x300;
      goto LAB_00406c3c;
    }
    if (param_1 < 3) {
      uVar1 = 0x100;
      goto LAB_00406c3c;
    }
    if (param_1 == 4) {
      uVar1 = 0x200;
      goto LAB_00406c3c;
    }
  }
  uVar1 = 0;
LAB_00406c3c:
  *DAT_00406ee4 = *DAT_00406ee4 & 0xfffffcff | uVar1;
  do {
  } while (-1 < *DAT_00406ee8 << 0x1c);
  return;
}



//==== FUNC FUN_00406c5a @ 00406c5a ====

undefined4 FUN_00406c5a(uint param_1)

{
  int iVar1;
  
  *DAT_00406ee4 = *DAT_00406ee4 & 0xfffffffc | 1;
  iVar1 = 0x1000;
  while (-1 < *DAT_00406ee8 << 0x1c) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = iVar1 + -1;
  }
  *DAT_00406ee4 = *DAT_00406ee4 & 0xffffff8f | param_1;
  iVar1 = 0x1000;
  while( true ) {
    if (*DAT_00406ee8 << 0x1c < 0) {
      return 0;
    }
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
  }
  return 1;
}



//==== FUNC FUN_00406cbe @ 00406cbe ====

undefined4 FUN_00406cbe(uint param_1)

{
  int iVar1;
  
  *DAT_00406ee4 = *DAT_00406ee4 & 0xffffff8f | param_1;
  iVar1 = 0x1000;
  while (-1 < *DAT_00406ee8 << 0x1c) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = iVar1 + -1;
  }
  *DAT_00406ee4 = *DAT_00406ee4 & 0xfffffffc | 2;
  iVar1 = 0x1000;
  while( true ) {
    if (*DAT_00406ee8 << 0x1c < 0) {
      return 0;
    }
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
  }
  return 1;
}



//==== FUNC FUN_00406d22 @ 00406d22 ====

void FUN_00406d22(int param_1)

{
  if (param_1 == 1) {
    *DAT_00406eec = *DAT_00406eec | DAT_00406ef0;
  }
  *DAT_00406ef8 = DAT_00406ef4;
  return;
}



//==== FUNC FUN_00406d44 @ 00406d44 ====

undefined FUN_00406d44(void)

{
  undefined uVar1;
  
  if (*DAT_00406efc << 0x18 < 0) {
    uVar1 = (undefined)((*DAT_00406ee8 & 0x80) >> 7);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_00406d62 @ 00406d62 ====

void FUN_00406d62(uint param_1)

{
  *DAT_00406f00 = *DAT_00406f00 | 0x370008;
  do {
  } while (-1 < *DAT_00406ee8 << 0xe);
  *DAT_00406f00 = *DAT_00406f00 & 0xffffff8f | param_1 | 0x370000;
  do {
  } while (-1 < *DAT_00406ee8 << 0xe);
  *DAT_00406f00 = *DAT_00406f00 & 0xfeffffff | 0x370000;
  return;
}



//==== FUNC FUN_00406db6 @ 00406db6 ====

void FUN_00406db6(int param_1,uint param_2)

{
  if (param_1 == 0) {
    *DAT_00406f00 = *DAT_00406f00 & 0xfffffffd | (param_2 & 0xff) << 8 | 0x370001;
    do {
    } while (-1 < *DAT_00406ee8 << 0x1f);
    *DAT_00406f00 = *DAT_00406f00 | DAT_00406f08;
  }
  else {
    *DAT_00406f00 = *DAT_00406f00 & 0xfffffffe | DAT_00406f04;
  }
  return;
}



//==== FUNC FUN_00406e10 @ 00406e10 ====

uint FUN_00406e10(void)

{
  return *DAT_00406ee8 & 0x10000;
}



//==== FUNC FUN_00406e1c @ 00406e1c ====

void FUN_00406e1c(void)

{
  *DAT_00406f0c = 0x20000000;
  return;
}



//==== FUNC FUN_00406e28 @ 00406e28 ====

uint FUN_00406e28(void)

{
  return *DAT_00406ee8 & 2;
}



//==== FUNC FUN_00406e34 @ 00406e34 ====

uint FUN_00406e34(void)

{
  return *DAT_00406ee8 & 0x40;
}



//==== FUNC FUN_00406e40 @ 00406e40 ====

undefined4 FUN_00406e40(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x40) {
    if (param_1 < 0x20) {
      if ((*DAT_00406f10 & 1 << (param_1 & 0xff)) != 1 << (param_1 & 0xff)) {
        *DAT_00406f14 = 1 << (param_1 & 0xff);
      }
    }
    else {
      param_1 = param_1 - 0x20;
      if ((*DAT_00406f18 & 1 << (param_1 & 0xff)) != 1 << (param_1 & 0xff)) {
        *DAT_00406f1c = 1 << (param_1 & 0xff);
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_00406f28 @ 00406f28 ====

uint * FUN_00406f28(int param_1,uint param_2,uint param_3)

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



//==== FUNC FUN_00406f8e @ 00406f8e ====

void FUN_00406f8e(char *param_1,char *param_2,int param_3)

{
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  for (; (param_3 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return;
}



//==== FUNC sub_00406fb8 @ 00406fb8 ====

undefined4 sub_00406fb8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_004001a0(DAT_00407378,0,0x10);
  iVar1 = param_2;
  if (0x10 < param_2) {
    iVar1 = 0x10;
  }
  FUN_00409a00(DAT_00407378,param_1,iVar1);
  FUN_004070e2(DAT_0040737c,DAT_00407378);
  if (8 < param_2) {
    FUN_004070e2(DAT_00407384,DAT_00407380);
  }
  *(bool *)DAT_00407388 = 8 < param_2;
  return param_4;
}



//==== FUNC sub_00407008 @ 00407008 ====

void sub_00407008(undefined4 param_1,undefined4 param_2,int param_3,char param_4)

{
  int iVar1;
  
  FUN_0040725c(DAT_0040738c,param_2,0x40);
  FUN_004071da(DAT_0040738c,DAT_0040738c,DAT_00407390,0x40);
  if (param_4 == '\0') {
    for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
      FUN_00409a00(DAT_00407398,*DAT_00407394,0x20);
      FUN_0040713a(*DAT_00407394,param_3 + iVar1 * 0x30);
      FUN_00407212(*DAT_00407394,*DAT_0040739c,0x20);
      FUN_00409a00(*DAT_0040739c,DAT_00407398,0x20);
    }
  }
  else {
    for (iVar1 = 0xf; -1 < iVar1; iVar1 = iVar1 + -1) {
      FUN_00409a00(DAT_00407398,*DAT_0040739c,0x20);
      FUN_0040713a(*DAT_0040739c,param_3 + iVar1 * 0x30);
      FUN_00407212(*DAT_0040739c,*DAT_00407394,0x20);
      FUN_00409a00(*DAT_00407394,DAT_00407398,0x20);
    }
  }
  FUN_004071da(DAT_0040738c,DAT_0040738c,DAT_004073a0,0x40);
  FUN_0040727e(param_1,DAT_0040738c,0x40);
  return;
}



//==== FUNC FUN_004070e2 @ 004070e2 ====

void FUN_004070e2(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0040725c(DAT_004073a4,param_2,0x40);
  FUN_004071da(DAT_004073a4,DAT_004073a4,DAT_004073a8,0x38);
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    FUN_0040722c(*DAT_004073b0,0x1c,(int)*(char *)(DAT_004073ac + iVar1));
    FUN_0040722c(*DAT_004073b4,0x1c,(int)*(char *)(DAT_004073ac + iVar1));
    FUN_004071da(iVar1 * 0x30 + param_1,DAT_004073a4,DAT_004073b8,0x30);
  }
  return;
}



//==== FUNC FUN_0040713a @ 0040713a ====

undefined4 FUN_0040713a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004071da(DAT_004073c0,param_1,DAT_004073bc,0x30);
  FUN_00407212(DAT_004073c0,param_2,0x30);
  FUN_0040716c(param_1,DAT_004073c0);
  FUN_004071da(param_1,param_1,DAT_004073c4,0x20);
  return param_4;
}



//==== FUNC FUN_0040716c @ 0040716c ====

void FUN_0040716c(int param_1,char *param_2)

{
  char cVar1;
  
  for (cVar1 = '\0'; cVar1 < '\b'; cVar1 = cVar1 + '\x01') {
    FUN_0040725c(param_1,DAT_004073c8 + (short)cVar1 * 0x40 +
                         (char)(*param_2 * '\x02' + param_2[5]) * 0x10 +
                         (int)(char)(param_2[4] +
                                    param_2[2] * '\x04' + param_2[1] * '\b' + param_2[3] * '\x02'),4
                );
    param_2 = param_2 + 6;
    param_1 = param_1 + 4;
  }
  return;
}



//==== FUNC FUN_004071da @ 004071da ====

void FUN_004071da(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
    *(undefined *)(DAT_004073cc + iVar1) = *(undefined *)(*(char *)(param_3 + iVar1) + param_2 + -1)
    ;
  }
  FUN_00409a00(param_1,DAT_004073cc,param_4);
  return;
}



//==== FUNC FUN_00407212 @ 00407212 ====

void FUN_00407212(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    *(byte *)(param_1 + iVar1) = *(byte *)(param_1 + iVar1) ^ *(byte *)(param_2 + iVar1);
  }
  return;
}



//==== FUNC FUN_0040722c @ 0040722c ====

void FUN_0040722c(int param_1,int param_2,int param_3)

{
  FUN_00409a00(DAT_004073cc,param_1,param_3);
  FUN_00409a00(param_1,param_1 + param_3,param_2 - param_3);
  FUN_00409a00((param_1 + param_2) - param_3,DAT_004073cc,param_3);
  return;
}



//==== FUNC FUN_0040725c @ 0040725c ====

void FUN_0040725c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(byte *)(param_1 + uVar1) =
         (byte)((int)*(char *)(param_2 + ((int)uVar1 >> 3)) >> (uVar1 & 7)) & 1;
  }
  return;
}



//==== FUNC FUN_0040727e @ 0040727e ====

undefined4 FUN_0040727e(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_004001a0(param_1,0,param_3 >> 3);
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(byte *)(param_1 + ((int)uVar1 >> 3)) =
         *(byte *)(param_1 + ((int)uVar1 >> 3)) | *(char *)(param_2 + uVar1) << (uVar1 & 7);
  }
  return param_4;
}



//==== FUNC sub_004072b0 @ 004072b0 ====

undefined8
sub_004072b0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,char param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) || ((param_3 + 7U & 0xfffffff8) == 0))
  {
    uVar1 = 0;
  }
  else {
    sub_00406fb8(param_4,param_5);
    iVar2 = (int)(param_3 + 7U) >> 3;
    if (*DAT_00407388 == '\0') {
      for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
        sub_00407008(param_1,param_2,DAT_0040737c,(int)param_6);
        param_1 = param_1 + 8;
        param_2 = param_2 + 8;
      }
    }
    else {
      for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
        sub_00407008(param_1,param_2,DAT_0040737c,(int)param_6);
        if (param_6 == '\0') {
          sub_00407008(param_1,param_1,DAT_00407384,1);
        }
        else {
          sub_00407008(param_1,param_1,DAT_00407384,0);
        }
        sub_00407008(param_1,param_1,DAT_0040737c,(int)param_6);
        param_1 = param_1 + 8;
        param_2 = param_2 + 8;
      }
    }
    uVar1 = 1;
  }
  return CONCAT44(param_4,uVar1);
}



//==== FUNC FUN_004073d0 @ 004073d0 ====

undefined8 FUN_004073d0(byte param_1)

{
  undefined local_10;
  undefined7 uStack_f;
  
  local_10 = 0;
  sub_004078ea(param_1 + 0x43f800,&local_10,1,0);
  return CONCAT71(uStack_f,local_10);
}



//==== FUNC FUN_004073f2 @ 004073f2 ====

uint FUN_004073f2(void)

{
  uint uVar1;
  char local_30 [28];
  
  FUN_00406ab0(local_30,DAT_004077d0,0x18);
  FUN_00406a90(local_30,DAT_004077d4,0x15);
  for (uVar1 = 0; ((uVar1 & 0xff) < 0x15 && (local_30[uVar1 & 0xff] != -1));
      uVar1 = (uVar1 & 0xff) + 1) {
  }
  return uVar1 & 0xff;
}



//==== FUNC FUN_00407436 @ 00407436 ====

undefined4 FUN_00407436(void)

{
  undefined4 unaff_r7;
  
  FUN_004078a0(0,6);
  FUN_00407916(0x420000,0x10);
  return unaff_r7;
}



//==== FUNC FUN_0040744c @ 0040744c ====

short FUN_0040744c(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0;
  while ((uVar2 < 0x1800 &&
         ((*(char *)(param_1 + (uint)uVar2) != -1 || (*(char *)(param_1 + (uint)uVar2 + 1) != -1))))
        ) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 + 0x10;
  }
  return sVar1;
}



//==== FUNC FUN_0040747c @ 0040747c ====

ushort FUN_0040747c(int param_1,int param_2,ushort param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = 0;
  uVar1 = (uint)param_3;
  if (uVar1 == 0) {
    uVar2 = 0xffff;
  }
  else {
    uVar3 = 0;
    while (((int)((uint)uVar3 + uVar1 * -0x10) < 0 != SBORROW4((uint)uVar3,uVar1 * 0x10) &&
           ((*(char *)(param_2 + (uint)uVar3) != *(char *)(param_1 + 0x1e0) ||
            (*(char *)(param_2 + (uint)uVar3 + 1) != *(char *)(param_1 + 0x1e1)))))) {
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 0x10;
    }
    if (uVar2 == uVar1) {
      uVar2 = 0xffff;
    }
  }
  return uVar2;
}



//==== FUNC FUN_004074da @ 004074da ====

char FUN_004074da(int param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = '\0';
  for (uVar2 = 0; (uVar2 & 0xff) < (uint)param_2; uVar2 = (uVar2 & 0xff) + 1) {
    cVar1 = *(char *)(param_1 + (uVar2 & 0xff)) + cVar1;
  }
  return cVar1;
}



//==== FUNC FUN_00407502 @ 00407502 ====

void FUN_00407502(undefined2 *param_1,int param_2)

{
  *param_1 = CONCAT11(*(undefined *)(param_2 + 0x1e0),*(undefined *)(param_2 + 0x1e1));
  param_1[1] = CONCAT11(*(undefined *)(param_2 + 0x1f6),*(undefined *)(param_2 + 0x1f7));
  *(uint *)(param_1 + 2) =
       (uint)*(byte *)(param_2 + 0x1f9) << 0x10 | (uint)*(byte *)(param_2 + 0x1f8) << 0x18 |
       (uint)*(byte *)(param_2 + 0x1fa) << 8 | (uint)*(byte *)(param_2 + 0x1fb);
  return;
}



//==== FUNC FUN_0040753e @ 0040753e ====

void FUN_0040753e(int param_1,undefined2 *param_2,ushort param_3)

{
  *param_2 = CONCAT11(*(undefined *)(param_1 + (uint)param_3 * 0x10),
                      *(undefined *)((uint)param_3 * 0x10 + param_1 + 1));
  param_2[1] = CONCAT11(*(undefined *)((uint)param_3 * 0x10 + param_1 + 2),
                        *(undefined *)((uint)param_3 * 0x10 + param_1 + 3));
  *(uint *)(param_2 + 2) =
       (uint)*(byte *)((uint)param_3 * 0x10 + param_1 + 5) << 0x10 |
       (uint)*(byte *)((uint)param_3 * 0x10 + param_1 + 4) << 0x18 |
       (uint)*(byte *)((uint)param_3 * 0x10 + param_1 + 6) << 8 |
       (uint)*(byte *)((uint)param_3 * 0x10 + param_1 + 7);
  *(uint *)(param_2 + 4) =
       (uint)*(byte *)((uint)param_3 * 0x10 + param_1 + 9) << 0x10 |
       (uint)*(byte *)((uint)param_3 * 0x10 + param_1 + 8) << 0x18 |
       (uint)*(byte *)((uint)param_3 * 0x10 + param_1 + 10) << 8 |
       (uint)*(byte *)((uint)param_3 * 0x10 + param_1 + 0xb);
  return;
}



//==== FUNC FUN_004075ca @ 004075ca ====

undefined8 FUN_004075ca(byte param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  undefined uVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = DAT_004077d8;
  if (param_1 == 1) {
    *(undefined *)(param_2 + (param_5 & 0xffff) * 0x10) = *(undefined *)(param_4 + 0x1e0);
    *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 1) = *(undefined *)(param_4 + 0x1e1);
    *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 2) = *(undefined *)(param_4 + 0x1f6);
    *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 3) = *(undefined *)(param_4 + 0x1f7);
    *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 4) = *(undefined *)(param_4 + 0x1f8);
    *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 5) = *(undefined *)(param_4 + 0x1f9);
    *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 6) = *(undefined *)(param_4 + 0x1fa);
    param_5 = param_5 & 0xffff;
    *(undefined *)(param_5 * 0x10 + param_2 + 7) = *(undefined *)(param_4 + 0x1fb);
    do {
      FUN_00403c82(&local_28);
      *(char *)(param_5 * 0x10 + param_2 + 8) = (char)((uint)local_28 >> 0x18);
      *(char *)(param_5 * 0x10 + param_2 + 9) = (char)((uint)local_28 >> 0x10);
      *(char *)(param_5 * 0x10 + param_2 + 10) = (char)((uint)local_28 >> 8);
      *(char *)(param_5 * 0x10 + param_2 + 0xb) = (char)local_28;
      iVar2 = FUN_004051e4(param_5 * 0x10 + param_2 + 4,param_5 * 0x10 + param_2 + 8,4);
    } while (iVar2 == 0);
  }
  else if ((param_1 != 0) && (param_1 != 3)) {
    if (param_1 < 3) {
      *(short *)(param_3 + 2) = *(short *)(param_3 + 2) + -1;
      *(char *)((param_5 & 0xffff) * 0x10 + param_2 + 2) =
           (char)((ushort)*(undefined2 *)(param_3 + 2) >> 8);
      param_5 = param_5 & 0xffff;
      *(char *)(param_5 * 0x10 + param_2 + 3) = (char)*(undefined2 *)(param_3 + 2);
    }
    else if ((param_1 != 5) && (param_1 < 5)) {
      *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 2) = *(undefined *)(param_4 + 0x1f6);
      *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 3) = *(undefined *)(param_4 + 0x1f7);
      *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 4) = *(undefined *)(param_4 + 0x1f8);
      *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 5) = *(undefined *)(param_4 + 0x1f9);
      *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 6) = *(undefined *)(param_4 + 0x1fa);
      param_5 = param_5 & 0xffff;
      *(undefined *)(param_5 * 0x10 + param_2 + 7) = *(undefined *)(param_4 + 0x1fb);
      do {
        FUN_00403c82(&local_28);
        *(char *)(param_5 * 0x10 + param_2 + 8) = (char)((uint)local_28 >> 0x18);
        *(char *)(param_5 * 0x10 + param_2 + 9) = (char)((uint)local_28 >> 0x10);
        *(char *)(param_5 * 0x10 + param_2 + 10) = (char)((uint)local_28 >> 8);
        *(char *)(param_5 * 0x10 + param_2 + 0xb) = (char)local_28;
        iVar2 = FUN_004051e4(param_5 * 0x10 + param_2 + 4,param_5 * 0x10 + param_2 + 8,4);
      } while (iVar2 == 0);
    }
  }
  if ((((param_1 == 1) || (param_1 == 2)) || (param_1 == 3)) || ((param_1 == 4 || (param_1 == 5))))
  {
    uVar1 = FUN_004074da((param_5 & 0xffff) * 0x10 + param_2,0xc);
    *(undefined *)((param_5 & 0xffff) * 0x10 + param_2 + 0xc) = uVar1;
    sub_004078ea((param_6 & 0xff) * 0x1800 + 0x420000,param_2,0x1800,0);
  }
  return CONCAT44(uStack_24,local_28);
}



//==== FUNC FUN_004077dc @ 004077dc ====

void FUN_004077dc(int param_1,undefined param_2,int param_3,byte param_4,undefined param_5)

{
  *(undefined *)(param_1 + 3) = param_2;
  *(undefined *)(param_1 + 4) = *(undefined *)((uint)param_4 * 0x10 + param_3 + 8);
  *(undefined *)(param_1 + 5) = *(undefined *)((uint)param_4 * 0x10 + param_3 + 9);
  *(undefined *)(param_1 + 6) = *(undefined *)((uint)param_4 * 0x10 + param_3 + 10);
  *(undefined *)(param_1 + 7) = *(undefined *)((uint)param_4 * 0x10 + param_3 + 0xb);
  *(undefined *)(param_1 + 8) = param_5;
  return;
}



//==== FUNC sub_00407812 @ 00407812 ====

undefined4 sub_00407812(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  undefined auStack_48 [16];
  undefined auStack_38 [28];
  
  uVar4 = (ushort)param_1[1] | (ushort)*param_1 * 0x100;
  bVar1 = param_1[uVar4 + 2];
  bVar2 = param_1[uVar4 + 3];
  FUN_0040017c(auStack_38,0x1c);
  FUN_004065e4(auStack_38);
  FUN_00400184(auStack_48,0xe);
  iVar3 = FUN_00406650(auStack_48,0xe);
  if ((iVar3 != 0) &&
     (iVar3 = FUN_00406710(param_1 + 2,uVar4,param_1 + uVar4 + 4,
                           (ushort)bVar2 | (ushort)bVar1 * 0x100,auStack_48,auStack_38), iVar3 == 0)
     ) {
    return 1;
  }
  return 0;
}



//==== FUNC FUN_004078a0 @ 004078a0 ====

undefined8 FUN_004078a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00409570(param_1,param_2);
  *DAT_00407948 = iVar1;
  if (*DAT_00407948 == 0) {
    iVar1 = *DAT_00407948;
  }
  else {
    iVar1 = 1;
  }
  return CONCAT44(param_4,iVar1);
}



//==== FUNC FUN_004078c4 @ 004078c4 ====

undefined8 FUN_004078c4(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00409586(param_1,param_2);
  *DAT_00407948 = iVar1;
  if (*DAT_00407948 == 0) {
    iVar1 = *DAT_00407948;
  }
  else {
    iVar1 = 1;
  }
  return CONCAT44(param_4,iVar1);
}



//==== FUNC sub_004078ea @ 004078ea ====

undefined8 sub_004078ea(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004095ca(param_1,param_2,param_3,param_4);
  *DAT_00407948 = iVar1;
  if (*DAT_00407948 == 0) {
    iVar1 = *DAT_00407948;
  }
  else {
    iVar1 = 0;
  }
  return CONCAT44(param_4,iVar1);
}



//==== FUNC FUN_00407916 @ 00407916 ====

undefined8 FUN_00407916(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < (uint)param_2; uVar1 = (uVar1 & 0xff) + 1) {
    unaff_r6 = FUN_004078c4((uVar1 & 0xff) * 0x2000 + param_1,2);
  }
  return CONCAT44(param_4,unaff_r6);
}



//==== FUNC FUN_0040794c @ 0040794c ====

void FUN_0040794c(byte param_1)

{
  *(int *)(DAT_004079e8 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_00407960 @ 00407960 ====

undefined4 FUN_00407960(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 == 0x10) && (param_2 == 0x10000000)) {
    FUN_00409a8a();
  }
  return param_4;
}



//==== FUNC FUN_00407976 @ 00407976 ====

undefined4 FUN_00407976(void)

{
  undefined4 unaff_r7;
  
  FUN_00408476(0x6c,1,0);
  return unaff_r7;
}



//==== FUNC FUN_00407984 @ 00407984 ====

void FUN_00407984(undefined param_1)

{
  FUN_004084a6(0x6c,param_1);
  return;
}



//==== FUNC FUN_00407994 @ 00407994 ====

undefined4 FUN_00407994(void)

{
  undefined4 uVar1;
  
  FUN_00408476(0x7c,0,0);
  FUN_00406e40(0x10);
  FUN_00409b4c(DAT_004079ec,0x10000000,10);
  uVar1 = DAT_004079f0;
  FUN_00409e6c(DAT_004079ec,0x10,0x10000000,0x49);
  FUN_0040794c(0x10);
  *(undefined4 *)(DAT_004079ec + 0x40) = 0x10000000;
  return uVar1;
}



//==== FUNC FUN_004079d6 @ 004079d6 ====

undefined8 FUN_004079d6(void)

{
  byte bVar1;
  undefined4 unaff_r7;
  
  bVar1 = FUN_0040849a(0x7c);
  *DAT_004079f4 = bVar1;
  return CONCAT44(unaff_r7,(uint)*DAT_004079f4);
}



//==== FUNC FUN_004079f8 @ 004079f8 ====

void FUN_004079f8(byte param_1)

{
  *(int *)(DAT_00407d78 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_00407a0e @ 00407a0e ====

void FUN_00407a0e(byte param_1)

{
  *(int *)(DAT_00407d7c + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_00407a24 @ 00407a24 ====

void FUN_00407a24(char param_1,int param_2)

{
  if (param_1 < '\0') {
    *(char *)(DAT_00407d80 + ((int)param_1 & 0xfU) + -4) = (char)(param_2 << 5);
  }
  else {
    *(char *)(DAT_00407d84 + param_1) = (char)(param_2 << 5);
  }
  return;
}



//==== FUNC FUN_00407a4c @ 00407a4c ====

undefined4 FUN_00407a4c(uint param_1)

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
    uVar1 = DAT_00407d8c;
    if ((((param_1 != 4) && (uVar1 = DAT_00407d88, 3 < param_1)) &&
        (uVar1 = DAT_00407d90, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_00407a94 @ 00407a94 ====

undefined8 FUN_00407a94(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_00407a4c(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_00407aa8 @ 00407aa8 ====

undefined8 FUN_00407aa8(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_00407a94();
  return CONCAT44(unaff_r7,uVar1 >> 1);
}



//==== FUNC FUN_00407ab2 @ 00407ab2 ====

void FUN_00407ab2(undefined4 param_1)

{
  FUN_00406e40(param_1);
  return;
}



//==== FUNC FUN_00407abe @ 00407abe ====

uint FUN_00407abe(uint param_1)

{
  return param_1 >> 5;
}



//==== FUNC FUN_00407ac2 @ 00407ac2 ====

int FUN_00407ac2(int param_1)

{
  return param_1 * 0x200 + DAT_00407d94;
}



//==== FUNC FUN_00407ace @ 00407ace ====

int FUN_00407ace(uint param_1)

{
  return 1 << (param_1 & 0x1f);
}



//==== FUNC FUN_00407ada @ 00407ada ====

undefined4 FUN_00407ada(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00407ac2(param_1);
  *(undefined4 *)(iVar1 + 4) = param_2;
  return param_4;
}



//==== FUNC FUN_00407aea @ 00407aea ====

undefined4 FUN_00407aea(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00407ace(param_1);
  uVar2 = FUN_00407abe(param_1);
  FUN_00407ada(uVar2,uVar1);
  return param_4;
}



//==== FUNC FUN_00407b04 @ 00407b04 ====

void FUN_00407b04(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_00407ac2(param_1);
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



//==== FUNC FUN_00407b74 @ 00407b74 ====

void FUN_00407b74(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00407ace(param_1);
  uVar2 = FUN_00407abe(param_1);
  FUN_00407b04(uVar2,uVar1,param_2);
  return;
}



//==== FUNC FUN_00407b92 @ 00407b92 ====

void FUN_00407b92(undefined4 param_1)

{
  FUN_00407aea(param_1);
  return;
}



//==== FUNC FUN_00407b9e @ 00407b9e ====

undefined4 FUN_00407b9e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00407b74(param_1,param_2);
  return param_4;
}



//==== FUNC FUN_00407bae @ 00407bae ====

undefined4 FUN_00407bae(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00407d98;
  if ((param_1 != 0xd) &&
     ((param_1 < 0xd ||
      ((uVar1 = DAT_00407da0, param_1 != 0xf && (uVar1 = DAT_00407d9c, 0xe < param_1)))))) {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_00407bce @ 00407bce ====

undefined4 FUN_00407bce(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_00407b9e(0x15,0);
  FUN_00407b92(0x15);
  FUN_00409cba(0x15,0);
  *DAT_00407da4 = *DAT_00407da4 | 0x10;
  FUN_00407b9e(0x24,3);
  FUN_00407b92(0x24);
  FUN_00409cba(0x24,3);
  piVar1 = (int *)FUN_00407bae(0xe);
  FUN_00406f28(piVar1,0x203c,0);
  piVar1[7] = 0xe;
  piVar1[9] = 0;
  piVar1[1] = param_1;
  piVar1[2] = 0xc0;
  piVar1[3] = 0x800;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  *piVar1 = DAT_00407da8;
  *(undefined *)(piVar1 + 8) = 0xe;
  FUN_00407ab2(piVar1[7]);
  uVar2 = FUN_00407aa8();
  FUN_00408c78(*piVar1,piVar1 + 1,uVar2);
  *(undefined4 *)(*piVar1 + 0xc) = 0xffffffff;
  *(undefined4 *)*piVar1 = 0x40;
  *(undefined4 *)*piVar1 = 0x10;
  FUN_00407a0e((int)*(char *)(piVar1 + 8));
  FUN_00407a24((int)*(char *)(piVar1 + 8),piVar1[9]);
  FUN_004079f8((int)*(char *)(piVar1 + 8));
  *(undefined4 *)(*piVar1 + 8) = 1;
  FUN_00408476(0xb,1,1);
  return param_4;
}



//==== FUNC FUN_00407ca4 @ 00407ca4 ====

undefined4 FUN_00407ca4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00407bae(0xe);
  iVar2 = FUN_00408cec(*puVar1);
  if (iVar2 != 0) {
    FUN_00408d00(*puVar1,param_1);
    do {
      iVar2 = FUN_00408cf6(*puVar1);
    } while (iVar2 == 0);
  }
  return param_4;
}



//==== FUNC FUN_00407cce @ 00407cce ====

void FUN_00407cce(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    FUN_00407ce6(*(undefined *)(param_1 + uVar1));
  }
  return;
}



//==== FUNC FUN_00407ce6 @ 00407ce6 ====

void FUN_00407ce6(undefined param_1)

{
  FUN_00407ca4(param_1);
  return;
}



//==== FUNC FUN_00407cf4 @ 00407cf4 ====

undefined8 FUN_00407cf4(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_20;
  
  local_20 = param_4;
  piVar1 = (int *)FUN_00407bae(0xe);
  uVar2 = 0;
  do {
    do {
      iVar3 = param_3 + -1;
      if (param_3 == 0) goto LAB_00407d3c;
      param_3 = iVar3;
    } while ((-1 < *(int *)(*piVar1 + 0x14) << 0x1f) ||
            (iVar3 = FUN_00408d16(*piVar1,&local_20), iVar3 != 0));
    *(char *)(param_1 + uVar2) = (char)local_20;
    uVar2 = uVar2 + 1;
  } while (uVar2 < param_2);
LAB_00407d3c:
  return CONCAT44(local_20,uVar2);
}



//==== FUNC FUN_00407d42 @ 00407d42 ====

undefined4 FUN_00407d42(void)

{
  undefined4 unaff_r7;
  
  FUN_004084a6(0xb,1);
  return unaff_r7;
}



//==== FUNC FUN_00407d4e @ 00407d4e ====

uint FUN_00407d4e(void)

{
  uint uVar1;
  
  FUN_004084a6(0xb,0);
  for (uVar1 = 0; uVar1 < DAT_00407d90; uVar1 = uVar1 + 1) {
  }
  FUN_004084a6(0xb,1);
  return uVar1;
}



//==== FUNC FUN_00407dac @ 00407dac ====

undefined4 FUN_00407dac(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00407bae(0xe);
  if (param_1 == '\0') {
    *(undefined4 *)(*piVar1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(*piVar1 + 8) = 1;
  }
  return param_4;
}



//==== FUNC FUN_00407dd2 @ 00407dd2 ====

undefined8 FUN_00407dd2(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 local_18;
  
  bVar4 = 0;
  local_18 = param_4;
  piVar1 = (int *)FUN_00407bae(0xe);
  uVar2 = *(uint *)(*piVar1 + 0x14);
  if ((uVar2 & 0xe0) != 0) {
    FUN_00408cdc(*piVar1);
  }
  if (((int)(uVar2 << 0x1f) < 0) && (iVar3 = FUN_00408d16(*piVar1,&local_18), iVar3 == 0)) {
    *param_1 = (char)local_18;
    bVar4 = 1;
  }
  return CONCAT44(local_18,(uint)bVar4);
}



//==== FUNC FUN_00407e12 @ 00407e12 ====

void FUN_00407e12(char param_1,int param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  byte local_80 [100];
  
  FUN_0040017c(local_80,100);
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
  FUN_00407ce6(0xaa);
  for (uVar2 = 1; (uVar2 & 0xffff) < 4; uVar2 = (uVar2 & 0xffff) + 1) {
    FUN_00407ce6(local_80[uVar2 & 0xffff]);
    uVar3 = local_80[uVar2 & 0xffff] + uVar3;
  }
  if ((param_1 == '\b') || (param_1 == '\x11')) {
    FUN_00407ce6(1);
    uVar3 = uVar3 + 1;
  }
  if (param_1 == '\x11') {
    FUN_00407ce6(2);
    FUN_00407ce6(1);
    FUN_00407ce6(1);
    FUN_00407ce6(param_3 + 1 & 0xff);
    FUN_00407ce6(9);
    uVar3 = param_3 + 0xe + uVar3;
  }
  for (uVar2 = 0; (uVar2 & 0xffff) < (param_3 & 0xff); uVar2 = (uVar2 & 0xffff) + 1) {
    FUN_00407ce6(*(undefined *)(param_2 + (uVar2 & 0xffff)));
    uVar3 = *(byte *)(param_2 + (uVar2 & 0xffff)) + uVar3;
  }
  FUN_00407ce6(~(uVar3 & 0xff) + 1 & 0xff);
  return;
}



//==== FUNC FUN_00407f14 @ 00407f14 ====

ulonglong FUN_00407f14(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_00407f56:
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
      goto LAB_00407f56;
    }
    if (param_3 != 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  return CONCAT44(param_2,param_1);
}



//==== FUNC FUN_00408004 @ 00408004 ====

void FUN_00408004(void)

{
  return;
}



//==== FUNC FUN_00408010 @ 00408010 ====

void FUN_00408010(int param_1,byte param_2)

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



//==== FUNC FUN_0040802c @ 0040802c ====

void FUN_0040802c(undefined4 *param_1)

{
  *param_1 = 2;
  return;
}



//==== FUNC FUN_00408032 @ 00408032 ====

undefined4 FUN_00408032(int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 != 0xfff) {
    FUN_00408004(param_1,(int)param_2);
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



//==== FUNC FUN_00408064 @ 00408064 ====

undefined8 FUN_00408064(int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00408004(param_1,(int)param_2);
  *(int *)(param_1 + 100) = (int)param_2;
  return CONCAT44(param_4,*(undefined4 *)(param_1 + 0x68));
}



//==== FUNC FUN_0040807c @ 0040807c ====

void FUN_0040807c(int param_1,short param_2,uint param_3)

{
  FUN_00408004(param_1,(int)param_2);
  *(int *)(param_1 + 100) = (int)param_2;
  *(uint *)(param_1 + 0x6c) = param_3 & 0xfff;
  return;
}



//==== FUNC FUN_0040809c @ 0040809c ====

uint FUN_0040809c(uint *param_1,uint param_2)

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



//==== FUNC FUN_004080ec @ 004080ec ====

int FUN_004080ec(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_28 [5];
  
  FUN_0040017c(local_28,0x14);
  FUN_0040802c(DAT_004081e4);
  FUN_004057f6(1);
  for (uVar3 = 0; (uVar3 & 0xff) < 5; uVar3 = (uVar3 & 0xff) + 1) {
    uVar1 = FUN_00408064(DAT_004081e4,0xb);
    local_28[uVar3 & 0xff] = uVar1;
  }
  iVar2 = FUN_0040809c(local_28,5);
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



//==== FUNC FUN_00408190 @ 00408190 ====

void FUN_00408190(void)

{
  undefined uStack_20;
  undefined local_1f;
  undefined auStack_1c [28];
  
  FUN_0040a2e8(DAT_004081e4);
  FUN_0040a16e(auStack_1c);
  FUN_0040a1a4(&uStack_20);
  FUN_0040a1ae(DAT_004081e4,auStack_1c);
  FUN_0040807c(DAT_004081e4,0xb,0x200);
  local_1f = 0;
  FUN_0040a11c(DAT_004081e4,0xb,&uStack_20);
  FUN_00408010(DAT_004081e4,0);
  FUN_00408032(DAT_004081e4,0xb);
  return;
}



//==== FUNC FUN_004081e8 @ 004081e8 ====

/* WARNING: Removing unreachable block (ram,0x0040a42c) */
/* WARNING: Removing unreachable block (ram,0x0040a370) */
/* WARNING: Removing unreachable block (ram,0x0040a378) */
/* WARNING: Removing unreachable block (ram,0x0040a37c) */
/* WARNING: Removing unreachable block (ram,0x0040a37e) */
/* WARNING: Removing unreachable block (ram,0x0040a38a) */
/* WARNING: Removing unreachable block (ram,0x0040a394) */
/* WARNING: Removing unreachable block (ram,0x0040a36a) */
/* WARNING: Removing unreachable block (ram,0x0040a362) */
/* WARNING: Removing unreachable block (ram,0x0040a35a) */
/* WARNING: Removing unreachable block (ram,0x0040a314) */
/* WARNING: Removing unreachable block (ram,0x0040a316) */
/* WARNING: Removing unreachable block (ram,0x0040a35e) */
/* WARNING: Removing unreachable block (ram,0x0040a366) */
/* WARNING: Removing unreachable block (ram,0x0040a36e) */
/* WARNING: Removing unreachable block (ram,0x0040a38e) */
/* WARNING: Removing unreachable block (ram,0x0040a3f4) */
/* WARNING: Removing unreachable block (ram,0x0040a440) */

uint FUN_004081e8(byte *param_1)

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
    pbVar6 = param_1 + 1;
    bVar5 = *param_1;
    param_1 = pbVar6;
  }
  else {
    bVar5 = 0x2b;
    pbVar6 = param_1;
  }
  for (; *param_1 == 0x30; param_1 = param_1 + 1) {
  }
  pbVar7 = param_1;
  uVar1 = 0;
  while( true ) {
    uVar3 = uVar1;
    uVar1 = (uint)*pbVar7;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    iVar2 = FUN_0040aef4(s_0123456789abcdefghijklmnopqrstuv_0040a450,uVar1,10);
    if (iVar2 == 0) break;
    local_38 = iVar2 - 0x50U & 0xff;
    pbVar7 = pbVar7 + 1;
    uVar1 = uVar3 * 10 + local_38;
    local_34 = uVar3;
  }
  if (pbVar6 == pbVar7) {
    uVar3 = 0;
  }
  else if (((int)(pbVar7 + (-(uint)DAT_0040a482 - (int)param_1)) < 0) ||
          ((((int)(pbVar7 + (-(uint)DAT_0040a482 - (int)param_1)) < 1 && (local_38 <= uVar3)) &&
           ((uVar3 - local_38) / 10 == local_34)))) {
    if (bVar5 == 0x2d) {
      uVar3 = -uVar3;
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_0040af4c();
    *puVar4 = 0x22;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



//==== FUNC FUN_004081f0 @ 004081f0 ====

undefined8
FUN_004081f0(byte param_1,undefined2 param_2,uint *param_3,uint param_4,int param_5,char param_6)

{
  byte bVar1;
  uint uVar2;
  uint *local_28;
  uint local_24;
  
  local_28 = param_3;
  if (param_5 == 0) {
    uVar2 = 0xe2;
  }
  else if ((param_6 == '\x04') || (param_6 == ' ')) {
    local_28 = &local_24;
    local_24 = param_4;
    bVar1 = FUN_0040a4a0(param_1,param_2,(uint)param_3 & 0xff,param_4 & 0xff);
    if (bVar1 == 0) {
      if (param_6 == ' ') {
        param_1 = param_1 | 0x80;
      }
      FUN_004098dc(param_1,local_24 & 0xffff,param_6,param_5);
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)bVar1;
    }
  }
  else {
    uVar2 = 0xe2;
  }
  return CONCAT44(local_28,uVar2);
}



//==== FUNC FUN_0040826c @ 0040826c ====

char FUN_0040826c(byte param_1,undefined2 param_2,undefined param_3,undefined param_4,int param_5,
                 char param_6)

{
  char cVar1;
  undefined2 local_28 [4];
  
  if (param_5 == 0) {
    cVar1 = -0x1e;
  }
  else if ((param_6 == '\x04') || (param_6 == ' ')) {
    cVar1 = FUN_0040a4a0(param_1,param_2,param_3,param_4,local_28);
    if (cVar1 == '\0') {
      if (param_6 == ' ') {
        param_1 = param_1 | 0x80;
      }
      cVar1 = FUN_0040994c(param_1,local_28[0],param_6,param_5,0,0,0,0);
    }
  }
  else {
    cVar1 = -0x1e;
  }
  return cVar1;
}



//==== FUNC FUN_004082fc @ 004082fc ====

undefined8 FUN_004082fc(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 local_10;
  
  local_10 = 0;
  uVar2 = 0xe1;
  bVar3 = 5;
  do {
    if (0xc < bVar3) {
LAB_0040835e:
      return CONCAT44(param_2,uVar2);
    }
    if (bVar3 < 8) {
      param_2 = &local_10;
      bVar1 = FUN_0040826c(0,0,0,bVar3,param_2,4);
    }
    else {
      param_2 = &local_10;
      bVar1 = FUN_0040826c(0,0,1,bVar3,param_2,4);
    }
    if (bVar1 != 0) {
      uVar2 = (uint)bVar1;
      goto LAB_0040835e;
    }
    bVar3 = bVar3 + 1;
    uVar2 = 0;
  } while( true );
}



//==== FUNC FUN_00408360 @ 00408360 ====

uint FUN_00408360(uint param_1)

{
  return param_1 >> 5;
}



//==== FUNC FUN_00408364 @ 00408364 ====

int FUN_00408364(int param_1)

{
  return param_1 * 0x200 + DAT_00408370;
}



//==== FUNC FUN_00408374 @ 00408374 ====

void FUN_00408374(undefined4 param_1)

{
  FUN_00408360(param_1);
  FUN_00408364();
  return;
}



//==== FUNC FUN_00408384 @ 00408384 ====

int FUN_00408384(uint param_1)

{
  return 1 << (param_1 & 0x1f);
}



//==== FUNC FUN_00408390 @ 00408390 ====

undefined4 FUN_00408390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00408364(param_1);
  *puVar1 = param_2;
  return param_4;
}



//==== FUNC FUN_004083a0 @ 004083a0 ====

undefined4 FUN_004083a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00408384(param_1);
  uVar2 = FUN_00408360(param_1);
  FUN_00408390(uVar2,uVar1);
  return param_4;
}



//==== FUNC FUN_004083ba @ 004083ba ====

void FUN_004083ba(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00408374(param_1);
  if (param_2 == '\x01') {
    uVar2 = FUN_00408384(param_1);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
  }
  else if (param_2 == '\0') {
    uVar2 = FUN_00408384(param_1);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
  }
  uVar2 = FUN_00408384(param_1);
  *(undefined4 *)(iVar1 + 0xa0) = uVar2;
  return;
}



//==== FUNC FUN_004083f2 @ 004083f2 ====

void FUN_004083f2(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00408374(param_1);
  if (param_2 == '\0') {
    uVar2 = FUN_00408384(param_1);
    *(undefined4 *)(iVar1 + 0x34) = uVar2;
  }
  else {
    uVar2 = FUN_00408384(param_1);
    *(undefined4 *)(iVar1 + 0x30) = uVar2;
  }
  return;
}



//==== FUNC FUN_0040841a @ 0040841a ====

undefined8 FUN_0040841a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_00408374(param_1);
  uVar3 = *(uint *)(iVar1 + 0x3c);
  uVar2 = FUN_00408384(param_1);
  return CONCAT44(param_4,(uint)((uVar3 & uVar2) != 0));
}



//==== FUNC FUN_0040843a @ 0040843a ====

void FUN_0040843a(undefined4 param_1)

{
  FUN_004083a0(param_1);
  return;
}



//==== FUNC FUN_00408446 @ 00408446 ====

undefined4 FUN_00408446(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004083ba(param_1,(int)param_2);
  return param_4;
}



//==== FUNC FUN_00408458 @ 00408458 ====

undefined4 FUN_00408458(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004083f2(param_1,param_2);
  return param_4;
}



//==== FUNC FUN_0040846a @ 0040846a ====

void FUN_0040846a(undefined4 param_1)

{
  FUN_0040841a(param_1);
  return;
}



//==== FUNC FUN_00408476 @ 00408476 ====

void FUN_00408476(undefined4 param_1,char param_2,undefined param_3)

{
  FUN_0040843a(param_1);
  FUN_00408446(param_1,(int)param_2);
  FUN_00408458(param_1,param_3);
  return;
}



//==== FUNC FUN_0040849a @ 0040849a ====

void FUN_0040849a(undefined4 param_1)

{
  FUN_0040846a(param_1);
  return;
}



//==== FUNC FUN_004084a6 @ 004084a6 ====

undefined4 FUN_004084a6(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00408458(param_1,param_2);
  return param_4;
}



//==== FUNC FUN_004084b8 @ 004084b8 ====

undefined4 FUN_004084b8(char param_1)

{
  return *(undefined4 *)(DAT_004084cc + param_1 * 4);
}



//==== FUNC FUN_004084c2 @ 004084c2 ====

void FUN_004084c2(char param_1,undefined4 param_2)

{
  *(undefined4 *)(DAT_004084cc + param_1 * 4) = param_2;
  return;
}



//==== FUNC FUN_004084d0 @ 004084d0 ====

void FUN_004084d0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x40 + param_1);
  *puVar1 = 2;
  puVar1[10] = 0xffffffff;
  puVar1[1] = param_3;
  return;
}



//==== FUNC FUN_004084ee @ 004084ee ====

void FUN_004084ee(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + param_2 * 0x40) = 5;
  return;
}



//==== FUNC FUN_004084fa @ 004084fa ====

void FUN_004084fa(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + param_2 * 0x40) = 2;
  return;
}



//==== FUNC FUN_00408506 @ 00408506 ====

void FUN_00408506(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 0x40 + param_1 + 0x1c) = param_3;
  return;
}



//==== FUNC FUN_00408512 @ 00408512 ====

void FUN_00408512(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 0x40 + param_1 + 0x24) = param_3;
  return;
}



//==== FUNC FUN_00408524 @ 00408524 ====

void FUN_00408524(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 0x40 + param_1 + 0x28) = param_3;
  return;
}



//==== FUNC FUN_00408536 @ 00408536 ====

undefined4 FUN_00408536(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x40 + param_1 + 0x20);
}



//==== FUNC FUN_00408548 @ 00408548 ====

void FUN_00408548(uint param_1)

{
  if (param_1 != 0) {
    if (param_1 == 2) {
      FUN_00406d22(1);
    }
    else if (param_1 < 2) {
      FUN_00406d22(0);
    }
    else if (param_1 == 4) {
      FUN_00406d62(0x10);
    }
    else if (param_1 < 4) {
      FUN_00406d62(0);
    }
    else if (param_1 == 6) {
      FUN_00406db6(0,0x3e);
    }
    else if (param_1 < 6) {
      FUN_00406d62(0x20);
    }
    else if (param_1 == 7) {
      FUN_00406db6(1,0x3e);
    }
  }
  return;
}



//==== FUNC FUN_004085a6 @ 004085a6 ====

bool FUN_004085a6(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = true;
  }
  else if (param_1 - 1U < 2) {
    iVar1 = FUN_00406d44();
    bVar2 = iVar1 != 0;
  }
  else if (param_1 - 3U < 5) {
    iVar1 = FUN_00406e10();
    bVar2 = iVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



//==== FUNC FUN_004085ea @ 004085ea ====

undefined4 FUN_004085ea(uint param_1)

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
    uVar1 = DAT_00408764;
    if ((((param_1 != 4) && (uVar1 = DAT_00408760, 3 < param_1)) &&
        (uVar1 = DAT_00408768, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_00408632 @ 00408632 ====

void FUN_00408632(undefined param_1)

{
  int iVar1;
  
  do {
    iVar1 = FUN_004085a6(param_1);
  } while (iVar1 == 0);
  return;
}



//==== FUNC FUN_00408644 @ 00408644 ====

void FUN_00408644(uint *param_1,undefined param_2,uint param_3,uint param_4)

{
  if ((param_4 | param_3) == 0) {
    *param_1 = 0xf00000;
  }
  else {
    FUN_004085ea(param_2);
    *param_1 = DAT_0040876c & (param_4 - 1) * 0x10000 | param_3 & 0xff | 0x3f00;
  }
  return;
}



//==== FUNC FUN_0040868a @ 0040868a ====

undefined4 FUN_0040868a(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    FUN_00406e1c();
    *DAT_00408770 = *param_1 | 0x20000000;
  }
  else {
    *DAT_00408774 = *param_1 | 0x10000;
  }
  return param_4;
}



//==== FUNC FUN_004086b0 @ 004086b0 ====

void FUN_004086b0(int param_1)

{
  if (param_1 == 0) {
    FUN_00406e28();
  }
  else {
    FUN_00406e34();
  }
  return;
}



//==== FUNC FUN_004086c4 @ 004086c4 ====

void FUN_004086c4(byte param_1)

{
  if (param_1 - 3 < 5) {
    FUN_00408548(param_1);
    FUN_00408632(param_1);
  }
  return;
}



//==== FUNC FUN_004086e6 @ 004086e6 ====

undefined4 FUN_004086e6(undefined4 param_1)

{
  int iVar1;
  
  do {
    iVar1 = FUN_004086b0(param_1);
  } while (iVar1 == 0);
  return 0;
}



//==== FUNC FUN_004086f8 @ 004086f8 ====

undefined8 FUN_004086f8(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_004085ea(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_0040870c @ 0040870c ====

undefined8 FUN_0040870c(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_004086f8();
  return CONCAT44(unaff_r7,uVar1 / 1);
}



//==== FUNC FUN_0040871a @ 0040871a ====

undefined4 FUN_0040871a(void)

{
  undefined4 unaff_r7;
  
  FUN_0040a634(DAT_00408778);
  FUN_004086c4(6);
  FUN_00408644(&stack0xfffffff8,6,1,0x19);
  FUN_0040868a(&stack0xfffffff8,0);
  FUN_004086e6(0);
  FUN_00406c08(2);
  FUN_00406cbe(0);
  FUN_0040a50c();
  FUN_0040870c();
  FUN_0040a634();
  return unaff_r7;
}



//==== FUNC FUN_0040877c @ 0040877c ====

void FUN_0040877c(void)

{
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  *DAT_004087c4 = *DAT_004087c4 & 0xfffffffe;
  *DAT_004087c8 = *DAT_004087c8 & 0xfffffffe;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return;
}



//==== FUNC FUN_004087a6 @ 004087a6 ====

undefined4 FUN_004087a6(void)

{
  undefined4 unaff_r7;
  
  *DAT_004087cc = 0x8000;
  *DAT_004087d4 = DAT_004087d0;
  *DAT_004087d4 = DAT_004087d8;
  FUN_0040877c();
  return unaff_r7;
}



//==== FUNC FUN_004087dc @ 004087dc ====

undefined4 FUN_004087dc(void)

{
  undefined4 unaff_r7;
  
  FUN_0040a99c(0);
  *DAT_00408820 = 200;
  return unaff_r7;
}



//==== FUNC FUN_004087ec @ 004087ec ====

ulonglong FUN_004087ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040a9ce(0);
  FUN_0040a9ba(0,4,param_1);
  return CONCAT44(param_4,uVar1) & 0xffffffff000000ff;
}



//==== FUNC FUN_0040880a @ 0040880a ====

void FUN_0040880a(void)

{
  FUN_0040a9a6(0,1,&stack0xfffffff8);
  return;
}



//==== FUNC FUN_00408824 @ 00408824 ====

undefined FUN_00408824(char param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined local_118;
  undefined auStack_117 [255];
  
  if (param_1 == '\0') {
    uVar1 = FUN_0040a9a6(0,0,param_2);
  }
  else {
    local_118 = 3;
    FUN_00406a90(auStack_117,param_2,param_1);
    uVar1 = FUN_0040a9a6(0,param_1 + '\x01',&local_118);
  }
  return uVar1;
}



//==== FUNC FUN_00408872 @ 00408872 ====

undefined4 FUN_00408872(undefined param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0040a9ba(0,param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xf0;
  }
  return uVar2;
}



//==== FUNC FUN_00408896 @ 00408896 ====

undefined4 FUN_00408896(void)

{
  undefined4 unaff_r7;
  
  FUN_00408476(0x1c,1,1);
  FUN_00408476(0x48,1,1);
  FUN_00408476(0x49,1,0);
  FUN_00408476(0x4a,1,1);
  return unaff_r7;
}



//==== FUNC FUN_004088d4 @ 004088d4 ====

void FUN_004088d4(byte param_1)

{
  *(int *)(DAT_00408b9c + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_004088e8 @ 004088e8 ====

void FUN_004088e8(byte param_1)

{
  *(int *)(DAT_00408ba0 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_004088fc @ 004088fc ====

void FUN_004088fc(byte param_1)

{
  *(int *)(DAT_00408ba4 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_00408910 @ 00408910 ====

void FUN_00408910(char param_1,int param_2)

{
  if (param_1 < '\0') {
    *(char *)(DAT_00408ba8 + ((int)param_1 & 0xfU) + -4) = (char)(param_2 << 5);
  }
  else {
    *(char *)(DAT_00408bac + param_1) = (char)(param_2 << 5);
  }
  return;
}



//==== FUNC FUN_00408936 @ 00408936 ====

undefined4 FUN_00408936(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00408bb0;
  if (((((param_1 != 0x17) && (uVar1 = DAT_00408bb4, param_1 != 0x18)) &&
       (uVar1 = DAT_00408bb8, param_1 != 0x19)) &&
      ((((uVar1 = DAT_00408bbc, param_1 != 0x1a && (uVar1 = DAT_00408bc0, param_1 != 0x1b)) &&
        ((uVar1 = DAT_00408bc4, param_1 != 0x1c &&
         ((uVar1 = DAT_00408bc8, param_1 != 0x2f && (uVar1 = DAT_00408bcc, param_1 != 0x30)))))) &&
       (uVar1 = DAT_00408bd0, param_1 != 0x31)))) &&
     (((uVar1 = DAT_00408bd4, param_1 != 0x32 && (uVar1 = DAT_00408bd8, param_1 != 0x33)) &&
      (uVar1 = DAT_00408bdc, param_1 != 0x34)))) {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_004089a0 @ 004089a0 ====

undefined8 FUN_004089a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00408936(param_1);
  FUN_00406f28(puVar1,0x24,0);
  puVar1[1] = param_1;
  puVar1[5] = 0xc;
  puVar1[6] = 0;
  puVar1[7] = 0xa2c3;
  puVar1[8] = 0x50;
  puVar1[4] = 1;
  if (param_1 == 0x17) {
    *puVar1 = DAT_00408be0;
    puVar1[2] = 0;
    *(undefined *)(puVar1 + 3) = 0x17;
  }
  else if (param_1 == 0x18) {
    *puVar1 = DAT_00408be0;
    puVar1[2] = 1;
    *(undefined *)(puVar1 + 3) = 0x18;
  }
  else if (param_1 == 0x19) {
    *puVar1 = DAT_00408be0;
    puVar1[2] = 2;
    *(undefined *)(puVar1 + 3) = 0x19;
  }
  else if (param_1 == 0x1a) {
    *puVar1 = DAT_00408be4;
    puVar1[2] = 0;
    *(undefined *)(puVar1 + 3) = 0x1a;
  }
  else if (param_1 == 0x1b) {
    *puVar1 = DAT_00408be4;
    puVar1[2] = 1;
    *(undefined *)(puVar1 + 3) = 0x1b;
  }
  else if (param_1 == 0x1c) {
    *puVar1 = DAT_00408be4;
    puVar1[2] = 2;
    *(undefined *)(puVar1 + 3) = 0x1c;
  }
  else if (param_1 == 0x2f) {
    *puVar1 = DAT_00408be8;
    puVar1[2] = 0;
    *(undefined *)(puVar1 + 3) = 0x2f;
  }
  else if (param_1 == 0x30) {
    *puVar1 = DAT_00408be8;
    puVar1[2] = 1;
    *(undefined *)(puVar1 + 3) = 0x30;
  }
  else if (param_1 == 0x31) {
    *puVar1 = DAT_00408be8;
    puVar1[2] = 2;
    *(undefined *)(puVar1 + 3) = 0x31;
  }
  else if (param_1 == 0x32) {
    *puVar1 = DAT_00408bec;
    puVar1[2] = 0;
    *(undefined *)(puVar1 + 3) = 0x32;
  }
  else if (param_1 == 0x33) {
    *puVar1 = DAT_00408bec;
    puVar1[2] = 1;
    *(undefined *)(puVar1 + 3) = 0x33;
  }
  else if (param_1 == 0x34) {
    *puVar1 = DAT_00408bec;
    puVar1[2] = 2;
    *(undefined *)(puVar1 + 3) = 0x34;
  }
  return CONCAT44(param_4,puVar1);
}



//==== FUNC FUN_00408ab0 @ 00408ab0 ====

void FUN_00408ab0(undefined4 param_1,char param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00408936(param_1);
  if (param_2 == '\0') {
    FUN_004084fa(*puVar1,puVar1[2]);
  }
  else {
    FUN_004084ee(*puVar1,puVar1[2]);
  }
  return;
}



//==== FUNC FUN_00408ad8 @ 00408ad8 ====

undefined4 FUN_00408ad8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004089a0(param_1);
  FUN_00406e40(puVar1[1]);
  puVar1[6] = 2;
  FUN_004084d0(*puVar1,puVar1[2],puVar1[6] | 0x4000);
  FUN_00408506(*puVar1,puVar1[2],0xb71b);
  FUN_004088e8((int)*(char *)(puVar1 + 3));
  FUN_004088fc((int)*(char *)(puVar1 + 3));
  FUN_00408910((int)*(char *)(puVar1 + 3),puVar1[4]);
  FUN_004088d4((int)*(char *)(puVar1 + 3));
  FUN_00408524(*puVar1,puVar1[2],0xffffffff);
  FUN_00408512(*puVar1,puVar1[2],0x10);
  FUN_00408ab0(puVar1[1],1);
  return param_4;
}



//==== FUNC FUN_00408b4a @ 00408b4a ====

undefined8 FUN_00408b4a(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_00408536(DAT_00408be0,1);
  return CONCAT44(unaff_r7,(uint)(iVar1 << 0x1b < 0));
}



//==== FUNC FUN_00408b60 @ 00408b60 ====

void FUN_00408b60(char param_1)

{
  if (param_1 == '\0') {
    FUN_00408ab0(0x18,0);
    FUN_00408524(DAT_00408be0,1,0x10);
  }
  else {
    FUN_00408536(DAT_00408be0,1);
    FUN_00408ab0(0x18,1);
    FUN_00408512(DAT_00408be0,1,0x10);
  }
  return;
}



//==== FUNC FUN_00408bf0 @ 00408bf0 ====

undefined4 FUN_00408bf0(int param_1,int param_2,uint param_3)

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



//==== FUNC FUN_00408c48 @ 00408c48 ====

void FUN_00408c48(undefined4 *param_1)

{
  FUN_00408d2e(param_1);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = 0x88;
  *param_1 = 0x24;
  FUN_00408cdc(param_1);
  FUN_00408ce4(param_1);
  return;
}



//==== FUNC FUN_00408c78 @ 00408c78 ====

undefined4 FUN_00408c78(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00408c48(param_1);
  *DAT_00408d38 = 0;
  if ((param_2 == (undefined4 *)0x0) || (iVar1 = FUN_00408bf0(param_1,*param_2,param_3), iVar1 != 0)
     ) {
    uVar2 = 1;
  }
  else {
    *DAT_00408d38 = *DAT_00408d38 | param_2[1] | param_2[2] | param_2[4] | param_2[3];
    *DAT_00408d38 = *DAT_00408d38;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | *DAT_00408d38;
    uVar2 = 0;
  }
  return uVar2;
}



//==== FUNC FUN_00408cdc @ 00408cdc ====

void FUN_00408cdc(undefined4 *param_1)

{
  *param_1 = 0x100;
  return;
}



//==== FUNC FUN_00408ce4 @ 00408ce4 ====

void FUN_00408ce4(undefined4 *param_1)

{
  *param_1 = 0x80000;
  return;
}



//==== FUNC FUN_00408cec @ 00408cec ====

uint FUN_00408cec(int param_1)

{
  return *(uint *)(param_1 + 0x14) >> 1 & 1;
}



//==== FUNC FUN_00408cf6 @ 00408cf6 ====

uint FUN_00408cf6(int param_1)

{
  return *(uint *)(param_1 + 0x14) >> 9 & 1;
}



//==== FUNC FUN_00408d00 @ 00408d00 ====

bool FUN_00408d00(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x14) << 0x1e < 0;
  if (bVar1) {
    *(uint *)(param_1 + 0x1c) = param_2 & 0x1ff;
  }
  return !bVar1;
}



//==== FUNC FUN_00408d16 @ 00408d16 ====

bool FUN_00408d16(int param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x14) << 0x1f < 0;
  if (bVar1) {
    *param_2 = *(uint *)(param_1 + 0x18) & 0x1ff;
  }
  return !bVar1;
}



//==== FUNC FUN_00408d2e @ 00408d2e ====

void FUN_00408d2e(int param_1)

{
  *(undefined4 *)(param_1 + 0xe4) = DAT_00408d3c;
  return;
}



//==== FUNC FUN_00408d40 @ 00408d40 ====

void FUN_00408d40(undefined4 *param_1)

{
  *param_1 = DAT_00408d48;
  return;
}



//==== FUNC sub_00408d4c @ 00408d4c ====

undefined8 sub_00408d4c(int param_1,int param_2,int param_3)

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
  FUN_00406a90(&uStack_28,DAT_004093c8,3);
  iVar2 = FUN_00404b10(0,&local_24);
  if (iVar2 == 0) {
    local_26 = 0x15;
    (**(code **)(param_1 + 0x20bc))(param_1,&uStack_28,3);
  }
  else if (local_24 == 0xd) {
    local_20 = local_20 + -1;
    iVar2 = FUN_004054b2(param_1,&uStack_28,2,&local_20);
    if (iVar2 != 0) {
      uVar1 = CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2));
      iVar2 = FUN_004054b2(param_1,&uStack_28,uVar1,&local_20);
      if (iVar2 != 0) {
        if (uVar1 < 0x21) {
          param_2 = param_2 + 3;
          uVar3 = FUN_004065d4(DAT_004093cc);
          if ((uVar1 == uVar3) && (iVar2 = FUN_004066ec(param_2,DAT_004093cc,uVar1), iVar2 != 0)) {
            iVar2 = FUN_004054b2(param_1,&uStack_28,4,&local_20);
            if (iVar2 != 0) {
              *(ushort *)(param_1 + 0x2048) = uVar1;
              FUN_00406a90(param_1 + 0x204a,param_2,uVar1);
              *(undefined *)(param_1 + (uint)uVar1 + 0x204a) = 0;
              pbVar4 = (byte *)(param_2 + (uint)uVar1);
              *(uint *)(param_1 + 0x2072) =
                   (uint)pbVar4[1] << 0x10 | (uint)*pbVar4 << 0x18 | (uint)pbVar4[2] << 8 |
                   (uint)pbVar4[3];
              if (*(uint *)(param_1 + 0x2072) < 0x5f801) {
                FUN_0040539a(2);
                FUN_004078a0(0,6);
                iVar2 = FUN_00407916(0x440000,0x30);
                if (iVar2 == 0) {
                  *(undefined4 *)(param_1 + 0x2076) = 0x440000;
                  *(undefined4 *)(param_1 + 0x209c) = 0;
                  local_26 = 0;
                  (**(code **)(param_1 + 0x20bc))(param_1,&uStack_28,3);
                }
                else {
                  local_26 = 0xd;
                  (**(code **)(param_1 + 0x20bc))(param_1,&uStack_28,3);
                }
              }
              else {
                local_26 = 4;
                (**(code **)(param_1 + 0x20bc))(param_1,&uStack_28,3);
              }
            }
          }
          else {
            local_26 = 0x16;
            (**(code **)(param_1 + 0x20bc))(param_1,&uStack_28,3);
          }
        }
        else {
          local_26 = 8;
          (**(code **)(param_1 + 0x20bc))(param_1,&uStack_28,3);
        }
      }
    }
  }
  else {
    local_26 = 0x18;
    (**(code **)(param_1 + 0x20bc))(param_1,&uStack_28,3);
  }
  return CONCAT26(uStack_22,CONCAT24(local_24,CONCAT13(uStack_25,CONCAT12(local_26,uStack_28))));
}



//==== FUNC sub_00408f04 @ 00408f04 ====

undefined8 sub_00408f04(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uStack_28;
  undefined local_26;
  undefined5 uStack_25;
  int local_20;
  
  local_20 = param_3;
  FUN_00406a90(&uStack_28,DAT_004093d0,3);
  bVar2 = 0;
  local_20 = local_20 + -1;
  iVar3 = FUN_004054b2(param_1,&uStack_28,4,&local_20);
  if (iVar3 != 0) {
    uVar4 = (uint)*(byte *)(param_2 + 4) |
            (uint)*(byte *)(param_2 + 2) << 0x10 | (uint)*(byte *)(param_2 + 1) << 0x18 |
            (uint)*(byte *)(param_2 + 3) << 8;
    iVar3 = FUN_004054b2(param_1,&uStack_28,2,&local_20);
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_2 + 6);
      uVar5 = (uint)CONCAT11(*(undefined *)(param_2 + 5),bVar1);
      iVar3 = FUN_004054b2(param_1,&uStack_28,uVar5,&local_20);
      if (iVar3 != 0) {
        if (uVar4 < *(uint *)(param_1 + 0x2072)) {
          if ((uVar5 + *(int *)(param_1 + 0x209c) == *(int *)(param_1 + 0x2072)) &&
             ((bVar1 & 3) != 0)) {
            bVar2 = 4 - (bVar1 & 3);
            uVar5 = (uVar5 + 4) - (uVar5 & 3);
          }
          iVar3 = sub_004078ea(uVar4 + *(int *)(param_1 + 0x2076),param_2 + 7,uVar5,0);
          if (iVar3 == 0) {
            *(uint *)(param_1 + 0x209c) = uVar5 + *(int *)(param_1 + 0x209c);
            *(uint *)(param_1 + 0x209c) = *(int *)(param_1 + 0x209c) - (uint)bVar2;
            local_26 = 0;
            (**(code **)(param_1 + 0x20bc))(param_1,&uStack_28,3);
          }
          else {
            local_26 = 0xe;
            (**(code **)(param_1 + 0x20bc))(param_1,&uStack_28,3);
          }
        }
        else {
          local_26 = 0xb;
          (**(code **)(param_1 + 0x20bc))(param_1,&uStack_28,3);
        }
      }
    }
  }
  return CONCAT53(uStack_25,CONCAT12(local_26,uStack_28));
}



//==== FUNC FUN_0040903e @ 0040903e ====

void FUN_0040903e(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined auStack_50c [2];
  undefined local_50a;
  undefined4 local_508;
  uint local_504 [2];
  undefined auStack_4fc [4];
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined local_4f0 [28];
  undefined auStack_4d4 [2];
  undefined auStack_4d2 [2];
  undefined auStack_4d0 [12];
  undefined auStack_4c4 [1024];
  undefined auStack_c4 [52];
  undefined auStack_90 [100];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = param_2;
  uStack_28 = param_3;
  FUN_00406a90(auStack_50c,DAT_004093d4,3);
  iVar4 = FUN_004051e4(*(int *)(param_1 + 0x209c) + *(int *)(param_1 + 0x2076) + -0x11,DAT_004093d8,
                       0x11);
  if (iVar4 == 0) {
    uVar5 = (uint)CONCAT11(*(undefined *)
                            (*(int *)(param_1 + 0x209c) + *(int *)(param_1 + 0x2076) + -0x13),
                           *(undefined *)
                            (*(int *)(param_1 + 0x209c) + *(int *)(param_1 + 0x2076) + -0x12));
    bVar1 = *(byte *)((*(int *)(param_1 + 0x209c) + *(int *)(param_1 + 0x2076) + -0x13) - uVar5);
    FUN_0040017c(auStack_90,100);
    local_504[0] = (uint)bVar1;
    FUN_00406a90(auStack_90,
                 ((*(int *)(param_1 + 0x209c) + *(int *)(param_1 + 0x2076)) - uVar5) + -0x12,
                 local_504[0]);
    sub_00404c62(0,auStack_4d4,0xd);
    local_4f8 = *DAT_004093dc;
    uStack_4f4 = DAT_004093dc[1];
    FUN_00406a90(&local_4f8,auStack_4d0,4);
    FUN_00406a90(auStack_4fc,auStack_4d2,4);
    FUN_00406f8e(&local_4f8,auStack_4fc,4);
    sub_004072b0(auStack_c4,auStack_90,bVar1,&local_4f8,8,1);
    local_508 = 0;
    uVar2 = FUN_00400144(auStack_c4);
    FUN_00404a70(auStack_c4,&local_508,uVar2,0x2c);
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      *(char *)((int)&local_508 + iVar4) = *(char *)((int)&local_508 + iVar4) + -1;
    }
    FUN_0040017c(local_4f0,0x1c);
    sub_0040518a(&local_508,local_4f0);
    *(uint *)(param_1 + 0x209c) = (*(int *)(param_1 + 0x209c) - uVar5) + -0x13;
    if (*(uint *)(param_1 + 0x209c) < 0x5f801) {
      *(undefined4 *)(param_1 + 0x206e) = 0x4a0000;
      iVar4 = FUN_00407916(0x4a0000,0x30);
      if (iVar4 == 0) {
        do {
          uVar3 = CONCAT11(*(undefined *)(*DAT_004093e0 + *(int *)(param_1 + 0x2076)),
                           *(undefined *)(*DAT_004093e0 + *(int *)(param_1 + 0x2076) + 1));
          if (0x400 < uVar3) {
            local_50a = 0xb;
            (**(code **)(param_1 + 0x20bc))(param_1,auStack_50c,3);
            *DAT_004093e0 = 0;
            *DAT_004093e4 = 0;
            return;
          }
          bVar1 = *(byte *)(*DAT_004093e0 + *(int *)(param_1 + 0x2076) + 2);
          *DAT_004093e0 = *DAT_004093e0 + 3;
          FUN_00406f28(auStack_4c4,0x400,0);
          sub_004072b0(auStack_4c4,*DAT_004093e0 + *(int *)(param_1 + 0x2076),uVar3,local_504,8,1);
          *DAT_004093e0 = *DAT_004093e0 + (uint)uVar3;
          uVar3 = uVar3 - bVar1;
          iVar4 = sub_004078ea(*DAT_004093e4 + *(int *)(param_1 + 0x206e),auStack_4c4,uVar3,0);
          if (iVar4 != 0) {
            local_50a = 0xe;
            (**(code **)(param_1 + 0x20bc))(param_1,auStack_50c,3);
            *DAT_004093e0 = 0;
            *DAT_004093e4 = 0;
            return;
          }
          *DAT_004093e4 = *DAT_004093e4 + (uint)uVar3;
        } while (*DAT_004093e0 < *(uint *)(param_1 + 0x209c));
        iVar4 = sub_004036c2();
        if (iVar4 == 0) {
          local_50a = 0x17;
          (**(code **)(param_1 + 0x20bc))(param_1,auStack_50c,3);
          FUN_0040539a(5);
        }
        else {
          *DAT_004093e0 = 0;
          *DAT_004093e4 = 0;
          local_50a = 0;
          (**(code **)(param_1 + 0x20bc))(param_1,auStack_50c,3);
          FUN_0040539a(0);
        }
      }
      else {
        local_50a = 0xd;
        (**(code **)(param_1 + 0x20bc))(param_1,auStack_50c,3);
      }
    }
    else {
      local_50a = 4;
      (**(code **)(param_1 + 0x20bc))(param_1,auStack_50c,3);
    }
  }
  else {
    local_50a = 0xb;
    (**(code **)(param_1 + 0x20bc))(param_1,auStack_50c,3);
  }
  return;
}



//==== FUNC sub_004092e0 @ 004092e0 ====

/* WARNING: Instruction at (ram,0x004092e2) overlaps instruction at (ram,0x004092e0)
    */

void sub_004092e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  uint uVar2;
  uint unaff_r7;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr15;
  undefined4 param_5;
  undefined4 param_6;
  undefined param_11;
  
  coprocessor_function2(2,2,2,in_cr15,in_cr3,in_cr2);
  uVar2 = unaff_r6 << 5;
  while( true ) {
    param_6 = 1;
    param_5 = 8;
    sub_004072b0(&stack0x00000054,*DAT_004093e0 + *(int *)(unaff_r4 + param_2),uVar2 & 0xffff,
                 &stack0x00000014);
    *DAT_004093e0 = *DAT_004093e0 + (uVar2 & 0xffff);
    uVar2 = (uVar2 & 0xffff) - unaff_r7;
    iVar1 = sub_004078ea(*DAT_004093e4 + *(int *)(unaff_r4 + 0x206e),&stack0x00000054,uVar2 & 0xffff
                         ,0);
    if (iVar1 != 0) {
      param_11 = 0xe;
      (**(code **)(unaff_r4 + 0x20bc))();
      *DAT_004093e0 = 0;
      *DAT_004093e4 = 0;
      return;
    }
    *DAT_004093e4 = *DAT_004093e4 + (uVar2 & 0xffff);
    if (*(uint *)(unaff_r4 + 0x209c) <= *DAT_004093e0) break;
    uVar2 = (uint)CONCAT11(*(undefined *)(*DAT_004093e0 + *(int *)(unaff_r4 + 0x2076)),
                           *(undefined *)(*DAT_004093e0 + *(int *)(unaff_r4 + 0x2076) + 1));
    if (0x400 < uVar2) {
      param_11 = 0xb;
      (**(code **)(unaff_r4 + 0x20bc))();
      *DAT_004093e0 = 0;
      *DAT_004093e4 = 0;
      return;
    }
    unaff_r7 = (uint)*(byte *)(*DAT_004093e0 + *(int *)(unaff_r4 + 0x2076) + 2);
    *DAT_004093e0 = *DAT_004093e0 + 3;
    FUN_00406f28(&stack0x00000054,0x400,0);
    param_2 = 0x2076;
  }
  iVar1 = sub_004036c2();
  if (iVar1 == 0) {
    param_11 = 0x17;
    (**(code **)(unaff_r4 + 0x20bc))();
    FUN_0040539a(5);
    return;
  }
  *DAT_004093e0 = 0;
  *DAT_004093e4 = 0;
  param_11 = 0;
  (**(code **)(unaff_r4 + 0x20bc))();
  FUN_0040539a(0);
  return;
}



//==== FUNC FUN_004093e8 @ 004093e8 ====

void FUN_004093e8(undefined4 param_1)

{
  *DAT_00409400 = 0;
  *DAT_00409404 = param_1;
  return;
}



//==== FUNC FUN_00409408 @ 00409408 ====

ulonglong FUN_00409408(void)

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
  
  iVar4 = DAT_004094e4;
  iVar3 = DAT_004094e0;
  pcVar2 = DAT_004094dc;
  piVar5 = (int *)(DAT_004094dc + 4);
  piVar6 = (int *)(DAT_004094dc + 8);
  piVar7 = (int *)(DAT_004094dc + 0xc);
  if (*DAT_004094dc == '\0') {
    iVar8 = DAT_004094e4 * *piVar5 + DAT_004094e0;
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



//==== FUNC thunk_EXT_FUN_20402168 @ 0040951c ====

void thunk_EXT_FUN_20402168(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040951c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00409520)();
  return;
}



//==== FUNC FUN_00409524 @ 00409524 ====

void FUN_00409524(undefined4 *param_1,int param_2,undefined2 *param_3,ushort *param_4)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_00409728;
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = (short)(param_2 - 0x400000U >> 9);
  }
  if (param_4 != (ushort *)0x0) {
    *param_4 = (ushort)param_2 & 0x1ff;
  }
  return;
}



//==== FUNC FUN_00409552 @ 00409552 ====

void FUN_00409552(undefined4 param_1,ushort param_2,ushort param_3,int *param_4)

{
  if (param_4 != (int *)0x0) {
    *param_4 = (uint)param_2 * 0x200 + (uint)param_3 + 0x400000;
  }
  return;
}



//==== FUNC FUN_00409570 @ 00409570 ====

longlong FUN_00409570(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  FUN_0040aa30(DAT_00409728,param_1,param_2);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_00409586 @ 00409586 ====

undefined8 FUN_00409586(uint param_1,ushort param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  if (param_2 < 4) {
    if ((param_1 & 0x1ff) == 0) {
      FUN_00409524(local_14,param_1,&local_18,0);
      iVar2 = FUN_0040aa4e(local_14[0],7,param_2 | (ushort)local_18);
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



//==== FUNC FUN_004095ca @ 004095ca ====

int FUN_004095ca(undefined4 param_1,int param_2,uint param_3,int param_4)

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
  
  local_4c = DAT_0040972c;
  local_2c = param_1;
  local_28 = param_4;
  FUN_00409524(&local_40,param_1,&local_4e,&local_50);
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar3 = param_3;
    if (0x200 - local_50 < param_3) {
      uVar3 = 0x200 - local_50;
    }
    FUN_00409552(local_40,local_4e,0,&local_44);
    local_3c = (0x200 - local_50) - (short)uVar3;
    FUN_00406a90(local_4c,local_44,local_50);
    FUN_00406a90(local_4c + (uint)local_50,param_2,uVar3);
    local_34 = (uint)local_3c;
    local_38 = (int)local_44 + uVar3 + local_50;
    FUN_00406a90(local_4c + (uint)local_50 + uVar3,local_38,local_34);
    puVar2 = local_44;
    for (uVar1 = 0; uVar1 < 0x80; uVar1 = uVar1 + 1) {
      *puVar2 = *(undefined4 *)(DAT_0040972c + uVar1 * 4);
      puVar2 = puVar2 + 1;
    }
    if (local_28 == 0) {
      local_48 = FUN_0040aa4e(local_40,1,local_4e);
    }
    else {
      local_48 = FUN_0040aa4e(local_40,3,local_4e);
    }
    if (local_48 != 0) break;
    param_2 = uVar3 + param_2;
    param_3 = param_3 - uVar3;
    local_4e = local_4e + 1;
    local_50 = 0;
  }
  return local_48;
}



//==== FUNC FUN_004096e4 @ 004096e4 ====

undefined4 FUN_004096e4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_24 [5];
  
  iVar1 = thunk_EXT_FUN_20402168(DAT_00409728,0xe,0xf,local_24,4);
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



//==== FUNC FUN_00409730 @ 00409730 ====

void FUN_00409730(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

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



//==== FUNC FUN_004097a8 @ 004097a8 ====

undefined4 FUN_004097a8(undefined4 *param_1)

{
  *param_1 = 5;
  FUN_004001ec(param_1 + 1);
  return 0;
}



//==== FUNC FUN_004097ba @ 004097ba ====

undefined4 FUN_004097ba(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00400206(param_1 + 4,param_2,param_3);
  return 0;
}



//==== FUNC FUN_004097d0 @ 004097d0 ====

undefined4 FUN_004097d0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0x10;
  FUN_004002bc(param_2,param_1 + 4);
  return 0;
}



//==== FUNC FUN_004097e8 @ 004097e8 ====

void FUN_004097e8(undefined4 param_1)

{
  FUN_004097a8(param_1);
  return;
}



//==== FUNC FUN_004097f4 @ 004097f4 ====

void FUN_004097f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004097ba(param_1,param_2,param_3);
  return;
}



//==== FUNC FUN_00409808 @ 00409808 ====

int FUN_00409808(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_154;
  undefined auStack_150 [4];
  undefined auStack_14c [16];
  undefined auStack_13c [256];
  undefined auStack_3c [36];
  
  if (param_3 < 0x101) {
    iVar1 = FUN_004097d0(param_1,auStack_14c,auStack_150);
    if (iVar1 == 0) {
      FUN_004098a2(auStack_3c,auStack_14c);
      iVar2 = FUN_0040aa9c(auStack_13c,&local_154,param_2,param_3,param_4);
      if (iVar2 == 0) {
        if ((local_154 == 0x22) && (iVar2 = FUN_0040ac4c(auStack_13c,auStack_3c,0x22), iVar2 == 0))
        {
          FUN_004097a8(param_1);
        }
        else {
          iVar1 = 0x40b;
        }
      }
      else {
        iVar1 = 0x40a;
      }
    }
    FUN_0040ac1c(auStack_14c,0,0x10);
    FUN_0040ac1c(auStack_3c,0,0x22);
    FUN_0040ac1c(auStack_13c,0,0x100);
  }
  else {
    iVar1 = 0x406;
  }
  return iVar1;
}



//==== FUNC FUN_004098a2 @ 004098a2 ====

undefined4 FUN_004098a2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040ac34(param_1,DAT_004098d4,0xd);
  *(undefined *)(param_1 + 0xd) = 5;
  FUN_0040ac34(param_1 + 0xe,DAT_004098d8,4);
  FUN_0040ac34(param_1 + 0x12,param_2,0x10);
  return param_4;
}



//==== FUNC FUN_004098dc @ 004098dc ====

char FUN_004098dc(undefined param_1,undefined2 param_2,undefined param_3,undefined4 param_4)

{
  char cVar1;
  undefined uStack_44;
  undefined auStack_43 [39];
  
  cVar1 = FUN_0040ac72(2,param_1,param_2,0,0,0,0,0,0,0x27,DAT_004099fc,0x23,&uStack_44);
  if (cVar1 == '\0') {
    FUN_00406a90(param_4,auStack_43,param_3);
  }
  return cVar1;
}



//==== FUNC FUN_0040994c @ 0040994c ====

undefined FUN_0040994c(uint param_1,undefined2 param_2,undefined param_3,int param_4,
                      undefined param_5,undefined4 param_6,undefined param_7,undefined4 param_8)

{
  undefined uVar1;
  undefined auStack_4c [36];
  uint local_28;
  
  if (param_4 == 0) {
    uVar1 = 0xe2;
  }
  else {
    local_28 = param_1;
    uVar1 = FUN_0040ac72(0x12,param_1 & 0xff,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,0x27,DAT_004099fc,0x23,auStack_4c);
  }
  return uVar1;
}



//==== FUNC FUN_004099ba @ 004099ba ====

void FUN_004099ba(undefined param_1,undefined2 param_2)

{
  undefined auStack_34 [40];
  
  FUN_0040ac72(0x17,param_1,param_2,0,0,0,0,0,0,0x27,DAT_004099fc,0x23,auStack_34);
  return;
}



//==== FUNC FUN_00409a00 @ 00409a00 ====

undefined4 FUN_00409a00(undefined4 param_1)

{
  FUN_00406a90();
  return param_1;
}



//==== FUNC FUN_00409a0c @ 00409a0c ====

void FUN_00409a0c(byte param_1)

{
  *(int *)(DAT_00409b14 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_00409a20 @ 00409a20 ====

void FUN_00409a20(byte param_1)

{
  *(int *)(DAT_00409b18 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_00409a34 @ 00409a34 ====

void FUN_00409a34(char param_1,int param_2)

{
  if (param_1 < '\0') {
    *(char *)(DAT_00409b1c + ((int)param_1 & 0xfU) + -4) = (char)(param_2 << 5);
  }
  else {
    *(char *)(DAT_00409b20 + param_1) = (char)(param_2 << 5);
  }
  return;
}



//==== FUNC sub_00409a5a @ 00409a5a ====

uint sub_00409a5a(void)

{
  int iVar1;
  uint unaff_r7;
  
  iVar1 = FUN_00407dd2(&stack0xfffffff8);
  if (iVar1 != 0) {
    (**DAT_00409b28)(DAT_00409b24,unaff_r7 & 0xff,2);
  }
  return unaff_r7;
}



//==== FUNC sub_00409a76 @ 00409a76 ====

undefined4 sub_00409a76(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_00408b4a();
  if (iVar1 != 0) {
    (**DAT_00409b2c)(DAT_00409b24);
  }
  return unaff_r7;
}



//==== FUNC FUN_00409a8a @ 00409a8a ====

undefined4 FUN_00409a8a(void)

{
  undefined4 unaff_r7;
  
  (**DAT_00409b30)(DAT_00409b24);
  return unaff_r7;
}



//==== FUNC FUN_00409a96 @ 00409a96 ====

undefined4 FUN_00409a96(void)

{
  bool bVar1;
  undefined4 unaff_r7;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  FUN_00409a20(0x1a);
  FUN_00409a34(0x1a,2);
  FUN_00409a0c(0x1a);
  FUN_00409a20(0xe);
  FUN_00409a34(0xe,1);
  FUN_00409a0c(0xe);
  FUN_00409a20(0x18);
  FUN_00409a34(0x18,5);
  FUN_00409a0c(0x18);
  FUN_00409a20(0x10);
  FUN_00409a34(0x10,1);
  FUN_00409a0c(0x10);
  (**DAT_00409b34)(DAT_00409b24,0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  (**DAT_00409b38)(DAT_00409b24);
  return unaff_r7;
}



//==== FUNC FUN_00409b08 @ 00409b08 ====

void FUN_00409b08(void)

{
  do {
    (**DAT_00409b3c)(DAT_00409b24);
  } while( true );
}



//==== FUNC FUN_00409b40 @ 00409b40 ====

void FUN_00409b40(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 100) = param_2;
  }
  return;
}



//==== FUNC FUN_00409b4c @ 00409b4c ====

void FUN_00409b4c(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x84) = param_2;
  *(uint *)(param_1 + 0x8c) = 0x8000U / (uint)(param_3 << 1) - 1 & 0x3fff;
  return;
}



//==== FUNC FUN_00409b6a @ 00409b6a ====

void FUN_00409b6a(int param_1,int param_2,uint param_3)

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



//==== FUNC FUN_00409c10 @ 00409c10 ====

void FUN_00409c10(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  param_1[0x11] = param_2;
  FUN_00409b40(param_1,param_2,param_3 & 1);
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



//==== FUNC FUN_00409c50 @ 00409c50 ====

void FUN_00409c50(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  param_1[0x11] = param_2;
  FUN_00409b40(param_1,param_2,param_5);
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



//==== FUNC FUN_00409c8e @ 00409c8e ====

void FUN_00409c8e(int param_1,undefined4 param_2,int param_3)

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



//==== FUNC FUN_00409cba @ 00409cba ====

undefined8 FUN_00409cba(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_18;
  
  uVar1 = FUN_00409dee(param_1);
  uVar2 = param_2 & 0x78000000;
  if (uVar2 == 0x8000000) {
    FUN_00409b6a(uVar1,0x8000000,1 << (param_1 & 0x1f));
    FUN_00409b40(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x10000000) {
    FUN_00409b6a(uVar1,0x10000000,1 << (param_1 & 0x1f));
    FUN_00409b40(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x18000000) {
    FUN_00409b6a(uVar1,0x18000000,1 << (param_1 & 0x1f));
    FUN_00409b40(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x20000000) {
    FUN_00409b6a(uVar1,0x20000000,1 << (param_1 & 0x1f));
    FUN_00409b40(uVar1,1 << (param_1 & 0x1f),param_2 & 1);
  }
  else if (uVar2 == 0x28000000) {
    FUN_00409c10(uVar1,1 << (param_1 & 0x1f),param_2);
  }
  else {
    if ((uVar2 != 0x30000000) && (uVar2 != 0x38000000)) {
      uVar1 = 0;
      goto LAB_00409dec;
    }
    local_18 = param_2 & 1;
    FUN_00409c50(uVar1,1 << (param_1 & 0x1f),(param_2 & 0x38000000) == 0x38000000,
                 (param_2 << 0x1d) >> 0x1f);
  }
  uVar1 = 1;
LAB_00409dec:
  return CONCAT44(local_18,uVar1);
}



//==== FUNC FUN_00409dee @ 00409dee ====

int FUN_00409dee(uint param_1)

{
  return (param_1 >> 5) * 0x200 + DAT_00409e04;
}



//==== FUNC FUN_00409e08 @ 00409e08 ====

undefined4 FUN_00409e08(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
      if ((*(int *)(DAT_00409f34 + uVar2 * 0x10) == param_2) &&
         ((uVar1 & *(uint *)(DAT_00409f34 + uVar2 * 0x10 + 4)) != 0)) {
        (**(code **)(DAT_00409f34 + uVar2 * 0x10 + 0xc))
                  (*(undefined4 *)(DAT_00409f34 + uVar2 * 0x10),
                   *(undefined4 *)(DAT_00409f34 + uVar2 * 0x10 + 4));
        uVar1 = uVar1 & ~*(uint *)(DAT_00409f34 + uVar2 * 0x10 + 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 7);
  }
  return param_4;
}



//==== FUNC FUN_00409e6c @ 00409e6c ====

undefined4 FUN_00409e6c(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_r10;
  
  if (*DAT_00409f38 < 7) {
    for (uVar2 = 0; (uVar2 & 0xff) <= *DAT_00409f38; uVar2 = (uVar2 & 0xff) + 1) {
      unaff_r10 = (int *)(DAT_00409f34 + (uVar2 & 0xff) * 0x10);
      if ((*unaff_r10 == param_2) && (unaff_r10[1] == param_3)) break;
    }
    *unaff_r10 = param_2;
    unaff_r10[1] = param_3;
    unaff_r10[2] = param_4;
    unaff_r10[3] = param_5;
    if ((uVar2 & 0xff) == *DAT_00409f38 + 1) {
      *DAT_00409f38 = *DAT_00409f38 + 1;
    }
    FUN_00409c8e(param_1,param_3,param_4);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC sub_00409ef4 @ 00409ef4 ====

undefined4 sub_00409ef4(void)

{
  undefined4 unaff_r7;
  
  FUN_00409e08(DAT_00409f3c,10);
  return unaff_r7;
}



//==== FUNC sub_00409f00 @ 00409f00 ====

undefined4 sub_00409f00(void)

{
  undefined4 unaff_r7;
  
  FUN_00409e08(DAT_00409f40,0xb);
  return unaff_r7;
}



//==== FUNC sub_00409f0c @ 00409f0c ====

undefined4 sub_00409f0c(void)

{
  undefined4 unaff_r7;
  
  FUN_00409e08(DAT_00409f44,0xc);
  return unaff_r7;
}



//==== FUNC sub_00409f18 @ 00409f18 ====

undefined4 sub_00409f18(void)

{
  undefined4 unaff_r7;
  
  FUN_00409e08(DAT_00409f48,0x10);
  return unaff_r7;
}



//==== FUNC sub_00409f24 @ 00409f24 ====

undefined4 sub_00409f24(void)

{
  undefined4 unaff_r7;
  
  FUN_00409e08(DAT_00409f4c,0x11);
  return unaff_r7;
}



//==== FUNC FUN_00409f54 @ 00409f54 ====

bool FUN_00409f54(void)

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
  *DAT_0040a2c4 = 0;
  return iVar2 == 0;
}



//==== FUNC FUN_00409f7c @ 00409f7c ====

bool FUN_00409f7c(int param_1)

{
  return param_1 != 0;
}



//==== FUNC FUN_00409f8a @ 00409f8a ====

void FUN_00409f8a(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409f7c(param_1);
  if (iVar1 != 0) {
    *DAT_0040a2c4 = 1;
    DataMemoryBarrier(0x1f);
    enableIRQinterrupts();
  }
  return;
}



//==== FUNC FUN_00409fa8 @ 00409fa8 ====

void FUN_00409fa8(void)

{
  return;
}



//==== FUNC FUN_00409fb8 @ 00409fb8 ====

undefined4 FUN_00409fb8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



//==== FUNC FUN_00409fbc @ 00409fbc ====

undefined4 FUN_00409fbc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



//==== FUNC FUN_00409fc0 @ 00409fc0 ====

undefined4 FUN_00409fc0(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_0040a2d0 + param_1) == -1) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = FUN_00409f54();
  *(char *)(DAT_0040a2d0 + param_1) = *(char *)(DAT_0040a2d0 + param_1) + '\x01';
  FUN_00409f8a(uVar1);
  return param_4;
}



//==== FUNC FUN_00409ff2 @ 00409ff2 ====

undefined4 FUN_00409ff2(uint param_1)

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
    uVar1 = DAT_0040a2d8;
    if ((((param_1 != 4) && (uVar1 = DAT_0040a2d4, 3 < param_1)) &&
        (uVar1 = DAT_0040a2dc, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_0040a044 @ 0040a044 ====

undefined8 FUN_0040a044(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_00409ff2(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_0040a058 @ 0040a058 ====

undefined8 FUN_0040a058(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_0040a044();
  return CONCAT44(unaff_r7,uVar1 / 1);
}



//==== FUNC FUN_0040a066 @ 0040a066 ====

undefined4 FUN_0040a066(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == DAT_0040a2cc) {
    uVar1 = 1;
  }
  else if (param_1 == DAT_0040a2c8) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_0040a084 @ 0040a084 ====

undefined4 FUN_0040a084(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == DAT_0040a2cc) {
    uVar1 = 0x28;
  }
  else if (param_1 == DAT_0040a2c8) {
    uVar1 = 0x1d;
  }
  else {
    uVar1 = 0x1d;
  }
  return uVar1;
}



//==== FUNC FUN_0040a0a2 @ 0040a0a2 ====

void FUN_0040a0a2(int param_1,uint *param_2)

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



//==== FUNC FUN_0040a11c @ 0040a11c ====

void FUN_0040a11c(int param_1,uint param_2,char *param_3)

{
  uint uVar1;
  
  FUN_00409fa8(param_1,(int)(short)param_2);
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



//==== FUNC FUN_0040a16e @ 0040a16e ====

void FUN_0040a16e(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_0040a058();
  param_1[1] = uVar1;
  param_1[2] = DAT_0040a2e0;
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



//==== FUNC FUN_0040a1a4 @ 0040a1a4 ====

void FUN_0040a1a4(undefined *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  return;
}



//==== FUNC FUN_0040a1ae @ 0040a1ae ====

undefined8
FUN_0040a1ae(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_00409fb8(param_1);
  if (iVar1 << 7 < 0) {
    uVar2 = 0x19;
  }
  else {
    *param_1 = 1;
    FUN_0040a0a2(param_1,param_2);
    if (param_1 == DAT_0040a2c8) {
      for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
        *(undefined4 *)(DAT_0040a2e4 + uVar3 * 4) = 0;
      }
    }
    if (param_1 == DAT_0040a2cc) {
      for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
        *(undefined4 *)(DAT_0040a2e4 + uVar3 * 4 + 0x40) = 0;
      }
    }
    uVar2 = 0;
  }
  return CONCAT44(param_4,uVar2);
}



//==== FUNC FUN_0040a208 @ 0040a208 ====

undefined4 FUN_0040a208(byte param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(DAT_0040a2e4 + (uint)param_1 * 0x40 + param_2 * 4) != 0) {
    (**(code **)(DAT_0040a2e4 + (uint)param_1 * 0x40 + param_2 * 4))();
  }
  return param_4;
}



//==== FUNC FUN_0040a236 @ 0040a236 ====

uint FUN_0040a236(undefined4 param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_00409fb8(param_1);
  uVar3 = FUN_00409fbc(param_1);
  uVar3 = uVar3 & uVar2;
  uVar1 = FUN_0040a066(param_1);
  for (uVar2 = 0; uVar2 < 0x10; uVar2 = uVar2 + 1) {
    if (uVar2 < 0xc) {
      if ((int)((uVar3 >> (uVar2 & 0xff)) << 0x1f) < 0) {
        FUN_0040a208(uVar1,uVar2);
      }
    }
    else if (uVar2 < 0xf) {
      if ((int)((uVar3 >> (uVar2 + 0xc & 0xff)) << 0x1f) < 0) {
        FUN_0040a208(uVar1,uVar2);
      }
    }
    else if ((int)((uVar3 >> (uVar2 + 0xf & 0xff)) << 0x1f) < 0) {
      FUN_0040a208(uVar1,uVar2);
    }
  }
  return uVar3;
}



//==== FUNC sub_0040a2ac @ 0040a2ac ====

undefined4 sub_0040a2ac(void)

{
  undefined4 unaff_r7;
  
  FUN_0040a236(DAT_0040a2c8);
  return unaff_r7;
}



//==== FUNC sub_0040a2b6 @ 0040a2b6 ====

undefined4 sub_0040a2b6(void)

{
  undefined4 unaff_r7;
  
  FUN_0040a236(DAT_0040a2cc);
  return unaff_r7;
}



//==== FUNC FUN_0040a2e8 @ 0040a2e8 ====

undefined4 FUN_0040a2e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040a084(param_1);
  FUN_00406e40(uVar1);
  FUN_00409fc0(2);
  return param_4;
}



//==== FUNC FUN_0040a4a0 @ 0040a4a0 ====

undefined4 FUN_0040a4a0(byte param_1,int param_2,uint param_3,byte param_4,ushort *param_5)

{
  undefined4 uVar1;
  
  param_1 = param_1 & 3;
  if (param_5 == (ushort *)0x0) {
    uVar1 = 0xe2;
  }
  else if (((param_1 == 0) || (param_1 == 2)) || (param_1 == 1)) {
    *param_5 = 0;
    if ((param_1 == 0) || (param_1 == 1)) {
      *param_5 = (ushort)((param_3 & 0xff) << 3);
      *param_5 = *param_5 | (ushort)(param_4 & 7);
    }
    else {
      *param_5 = (ushort)(param_2 << 3);
      *param_5 = *param_5 | (ushort)(param_4 & 7);
      *param_5 = *param_5 | (ushort)((param_3 & 0xff) << 8);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe2;
  }
  return uVar1;
}



//==== FUNC FUN_0040a50c @ 0040a50c ====

void FUN_0040a50c(void)

{
  uint uVar1;
  
  uVar1 = *DAT_0040a6a0 & 3;
  if (uVar1 == 0) {
    if (*DAT_0040a6ac << 0x18 < 0) {
      *DAT_0040a6a8 = 0x8000;
    }
    else {
      *DAT_0040a6a8 = 32000;
    }
  }
  else if (uVar1 == 2) {
    if ((int)(*DAT_0040a69c << 7) < 0) {
      *DAT_0040a6a8 = DAT_0040a6b0;
    }
    else {
      *DAT_0040a6a8 = DAT_0040a6b4;
      uVar1 = *DAT_0040a69c & 0x70;
      if (uVar1 != 0) {
        if (uVar1 == 0x10) {
          *DAT_0040a6a8 = *DAT_0040a6a8 << 1;
        }
        else if (uVar1 == 0x20) {
          *DAT_0040a6a8 = *DAT_0040a6a8 * 3;
        }
      }
    }
    if ((*DAT_0040a6a0 & 3) == 2) {
      *DAT_0040a6a8 = (((*DAT_0040a6a4 << 5) >> 0x15) + 1) * *DAT_0040a6a8;
      *DAT_0040a6a8 = *DAT_0040a6a8 / (*DAT_0040a6a4 & 0xff);
    }
  }
  else if (uVar1 < 2) {
    if ((int)(*DAT_0040a69c << 7) < 0) {
      *DAT_0040a6a8 = DAT_0040a6b0;
    }
    else {
      *DAT_0040a6a8 = DAT_0040a6b4;
      uVar1 = *DAT_0040a69c & 0x70;
      if (uVar1 != 0) {
        if (uVar1 == 0x10) {
          *DAT_0040a6a8 = *DAT_0040a6a8 << 1;
        }
        else if (uVar1 == 0x20) {
          *DAT_0040a6a8 = *DAT_0040a6a8 * 3;
        }
      }
    }
  }
  if ((*DAT_0040a6a0 & 0x70) == 0x70) {
    *DAT_0040a6a8 = *DAT_0040a6a8 / 3;
  }
  else {
    *DAT_0040a6a8 = *DAT_0040a6a8 >> ((*DAT_0040a6a0 << 0x19) >> 0x1d);
  }
  return;
}



//==== FUNC FUN_0040a634 @ 0040a634 ====

void FUN_0040a634(uint param_1)

{
  if (param_1 < DAT_0040a6b8) {
    *DAT_0040a698 = 0x4000000;
  }
  else if (param_1 < DAT_0040a6bc) {
    *DAT_0040a698 = DAT_0040a6c0;
  }
  else if (param_1 < DAT_0040a6c4) {
    *DAT_0040a698 = DAT_0040a6c8;
  }
  else if (param_1 < DAT_0040a6cc) {
    *DAT_0040a698 = DAT_0040a6d0;
  }
  else if (param_1 < DAT_0040a6d4) {
    *DAT_0040a698 = 0x4000400;
  }
  else if (param_1 < DAT_0040a6d8) {
    *DAT_0040a698 = DAT_0040a6dc;
  }
  else {
    *DAT_0040a698 = DAT_0040a6e0;
  }
  return;
}



//==== FUNC FUN_0040a6e4 @ 0040a6e4 ====

undefined4 FUN_0040a6e4(uint param_1)

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
    uVar1 = DAT_0040a97c;
    if ((((param_1 != 4) && (uVar1 = DAT_0040a978, 3 < param_1)) &&
        (uVar1 = DAT_0040a980, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_0040a72c @ 0040a72c ====

undefined8 FUN_0040a72c(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0040a6e4(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_0040a740 @ 0040a740 ====

undefined8 FUN_0040a740(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_0040a72c();
  return CONCAT44(unaff_r7,uVar1 / 1);
}



//==== FUNC FUN_0040a74e @ 0040a74e ====

undefined8 FUN_0040a74e(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_0040a72c();
  return CONCAT44(unaff_r7,uVar1 >> 1);
}



//==== FUNC FUN_0040a758 @ 0040a758 ====

uint FUN_0040a758(uint param_1)

{
  return param_1 >> 5;
}



//==== FUNC FUN_0040a75c @ 0040a75c ====

int FUN_0040a75c(int param_1)

{
  return param_1 * 0x200 + DAT_0040a984;
}



//==== FUNC FUN_0040a768 @ 0040a768 ====

int FUN_0040a768(uint param_1)

{
  return 1 << (param_1 & 0x1f);
}



//==== FUNC FUN_0040a774 @ 0040a774 ====

undefined4 FUN_0040a774(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040a75c(param_1);
  *(undefined4 *)(iVar1 + 4) = param_2;
  return param_4;
}



//==== FUNC FUN_0040a784 @ 0040a784 ====

undefined4 FUN_0040a784(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0040a768(param_1);
  uVar2 = FUN_0040a758(param_1);
  FUN_0040a774(uVar2,uVar1);
  return param_4;
}



//==== FUNC FUN_0040a79e @ 0040a79e ====

void FUN_0040a79e(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_0040a75c(param_1);
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



//==== FUNC FUN_0040a80e @ 0040a80e ====

void FUN_0040a80e(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0040a768(param_1);
  uVar2 = FUN_0040a758(param_1);
  FUN_0040a79e(uVar2,uVar1,param_2);
  return;
}



//==== FUNC FUN_0040a82c @ 0040a82c ====

void FUN_0040a82c(undefined4 param_1)

{
  FUN_0040a784(param_1);
  return;
}



//==== FUNC FUN_0040a838 @ 0040a838 ====

undefined4 FUN_0040a838(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040a80e(param_1,param_2);
  return param_4;
}



//==== FUNC FUN_0040a848 @ 0040a848 ====

undefined8 FUN_0040a848(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_18 = param_2;
  local_14 = param_3;
  uStack_10 = param_4;
  FUN_0040a838(3,0);
  FUN_0040a82c(3);
  FUN_00409cba(3,0);
  FUN_0040a838(4,0);
  FUN_0040a82c(4);
  FUN_00409cba(4,0);
  FUN_00406e40(0x13);
  local_18 = FUN_0040a74e();
  local_14 = *DAT_0040a988;
  iVar2 = 10;
  do {
    iVar1 = FUN_0040af66(DAT_0040a98c,&local_18);
    iVar2 = iVar2 + -1;
    if (iVar1 == 0) break;
  } while (iVar2 != 0);
  return CONCAT44(local_14,local_18);
}



//==== FUNC FUN_0040a8a6 @ 0040a8a6 ====

undefined FUN_0040a8a6(byte param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined local_28;
  undefined local_27;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined local_18;
  
  local_18 = *DAT_0040a990;
  local_28 = 0;
  local_27 = 0;
  local_24 = 0;
  local_1c = (uint)param_1;
  local_20 = param_2;
  uVar1 = FUN_0040b116(DAT_0040a98c,&local_28);
  return uVar1;
}



//==== FUNC FUN_0040a8e0 @ 0040a8e0 ====

undefined FUN_0040a8e0(byte param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined local_28;
  undefined local_27;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined local_18;
  
  local_18 = 0xe4;
  local_28 = 0;
  local_27 = 0;
  local_24 = 0;
  local_1c = (uint)param_1;
  local_20 = param_2;
  uVar1 = FUN_0040b06a(DAT_0040a98c,&local_28);
  return uVar1;
}



//==== FUNC FUN_0040a918 @ 0040a918 ====

longlong FUN_0040a918(void)

{
  longlong lVar1;
  uint uVar2;
  uint unaff_r7;
  
  FUN_00408476(3,1,0);
  uVar2 = FUN_0040a740();
  lVar1 = (ulonglong)uVar2 * 100 + (ulonglong)DAT_0040a994;
  FUN_00407f14((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),DAT_0040a998,0);
  thunk_EXT_FUN_2040215c();
  FUN_00408476(3,1,1);
  uVar2 = FUN_0040a740();
  lVar1 = (ulonglong)uVar2 * 5 + 0x172b;
  FUN_00407f14((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0x172c,0);
  thunk_EXT_FUN_2040215c();
  FUN_0040a848();
  return (ulonglong)unaff_r7 << 0x20;
}



//==== FUNC FUN_0040a99c @ 0040a99c ====

void FUN_0040a99c(void)

{
  FUN_0040a848();
  return;
}



//==== FUNC FUN_0040a9a6 @ 0040a9a6 ====

void FUN_0040a9a6(undefined4 param_1,undefined param_2,undefined4 param_3)

{
  FUN_0040a8a6(param_2,param_3);
  return;
}



//==== FUNC FUN_0040a9ba @ 0040a9ba ====

void FUN_0040a9ba(undefined4 param_1,undefined param_2,undefined4 param_3)

{
  FUN_0040a8e0(param_2,param_3);
  return;
}



//==== FUNC FUN_0040a9ce @ 0040a9ce ====

void FUN_0040a9ce(void)

{
  FUN_0040a918();
  return;
}



//==== FUNC thunk_EXT_FUN_204021cc @ 0040a9d8 ====

void thunk_EXT_FUN_204021cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0040a9dc)();
  return;
}



//==== FUNC FUN_0040a9e0 @ 0040a9e0 ====

bool FUN_0040a9e0(void)

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
  *DAT_0040aa94 = 0;
  return iVar2 == 0;
}



//==== FUNC FUN_0040aa06 @ 0040aa06 ====

bool FUN_0040aa06(int param_1)

{
  return param_1 != 0;
}



//==== FUNC FUN_0040aa14 @ 0040aa14 ====

void FUN_0040aa14(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040aa06(param_1);
  if (iVar1 != 0) {
    *DAT_0040aa94 = 1;
    DataMemoryBarrier(0x1f);
    enableIRQinterrupts();
  }
  return;
}



//==== FUNC FUN_0040aa30 @ 0040aa30 ====

undefined4 FUN_0040aa30(uint *param_1,uint param_2,uint param_3)

{
  *param_1 = (param_3 & 0xf) << 8 | param_2 | 0x4000000;
  return 0;
}



//==== FUNC FUN_0040aa4e @ 0040aa4e ====

undefined4 FUN_0040aa4e(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0xe) || (param_2 == 0xf)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_0040a9e0();
    uVar1 = thunk_EXT_FUN_204021cc
                      (param_1,DAT_0040aa98 & param_3 << 8 | param_2 & 0xff | 0x5a000000);
    FUN_0040aa14(uVar2);
  }
  return uVar1;
}



//==== FUNC FUN_0040aa9c @ 0040aa9c ====

int FUN_0040aa9c(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,int *param_5)

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
    iVar2 = FUN_0040ab64(local_128,&local_12c,param_3,param_4,param_5);
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
              FUN_0040ac34(param_1,local_128 + uVar3 + 1,*param_2);
              FUN_0040ac1c(local_128,0,0x100);
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



//==== FUNC FUN_0040ab64 @ 0040ab64 ====

undefined4
FUN_0040ab64(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_430 [260];
  undefined auStack_32c [260];
  undefined auStack_228 [260];
  undefined auStack_124 [260];
  
  FUN_0040b1c0(auStack_32c,0x41,param_3,param_4);
  FUN_0040b1c0(auStack_430,0x41,param_5 + 1,0x100);
  FUN_0040b1c0(auStack_228,0x41,param_5 + 0x41,0x100);
  uVar1 = FUN_0040b736(auStack_430,0x41);
  uVar2 = FUN_0040b736(auStack_228,0x41);
  iVar3 = FUN_0040b6fe(auStack_32c,auStack_430,uVar1);
  if (iVar3 < 0) {
    FUN_0040b5f6(auStack_124,auStack_32c,auStack_228,uVar2,auStack_430,uVar1);
    *param_2 = *param_5 + 7U >> 3;
    FUN_0040b218(param_1,*param_2,auStack_124,uVar1);
    FUN_0040ac1c(auStack_124,0,0x104);
    FUN_0040ac1c(auStack_32c,0,0x104);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x401;
  }
  return uVar1;
}



//==== FUNC FUN_0040ac1c @ 0040ac1c ====

void FUN_0040ac1c(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00406f28(param_1,param_3,param_2);
  }
  return;
}



//==== FUNC FUN_0040ac34 @ 0040ac34 ====

void FUN_0040ac34(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00406a90(param_1,param_2,param_3);
  }
  return;
}



//==== FUNC FUN_0040ac4c @ 0040ac4c ====

undefined4 FUN_0040ac4c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004051e4(param_1,param_2,param_3);
  }
  return uVar1;
}



//==== FUNC FUN_0040ac68 @ 0040ac68 ====

undefined4 FUN_0040ac68(void)

{
  return 0;
}



//==== FUNC FUN_0040ac72 @ 0040ac72 ====

char FUN_0040ac72(char param_1,byte param_2,undefined2 param_3,byte param_4,undefined4 param_5,
                 byte param_6,undefined4 param_7,byte param_8,undefined4 param_9,undefined param_10,
                 char *param_11,undefined param_12,undefined4 param_13)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  char *pcVar4;
  
  cVar1 = FUN_0040ac68(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12,param_13);
  if (cVar1 == '\0') {
    if (param_1 == '\x01') {
      uVar2 = 1;
      uVar3 = 1;
      param_12 = 4;
    }
    else if (param_1 == '\x02') {
      uVar2 = 1;
      uVar3 = 3;
      if ((int)((uint)param_2 << 0x18) < 0) {
        param_12 = 0x23;
      }
      else {
        param_12 = 7;
      }
    }
    else if (param_1 == '\b') {
      uVar2 = 0xc;
      uVar3 = 0x17;
      param_12 = 0x23;
    }
    else if (param_1 == '\x11') {
      uVar2 = 0x1b;
      uVar3 = 0x2b;
      param_12 = 0x23;
    }
    else if (param_1 == '\x12') {
      uVar2 = 6;
      uVar3 = 0x26;
      param_12 = 4;
    }
    else if (param_1 == '\x15') {
      uVar2 = 0xb;
      uVar3 = 0x20;
      param_12 = 4;
    }
    else if (param_1 == '\x16') {
      uVar2 = 0x16;
      uVar3 = 0x27;
      if (param_2 == 3) {
        param_12 = 4;
      }
      else {
        param_12 = 0x23;
      }
    }
    else if (param_1 == '\x17') {
      uVar2 = 5;
      uVar3 = 0x13;
      param_12 = 4;
    }
    else if (param_1 == '\x1b') {
      uVar2 = 0xb;
      uVar3 = 0x28;
      param_12 = 0x23;
    }
    else if (param_1 == '\x1c') {
      uVar2 = 0xe;
      uVar3 = 0x31;
      param_12 = 4;
    }
    else if (param_1 == ' ') {
      uVar2 = 8;
      uVar3 = 4;
      param_12 = 4;
    }
    else if (param_1 == '(') {
      uVar2 = 0xc;
      uVar3 = 0x1a;
      param_12 = 4;
    }
    else if (param_1 == '0') {
      uVar2 = 1;
      uVar3 = 1;
      param_12 = 7;
    }
    else if (param_1 == 'G') {
      uVar2 = 10;
      uVar3 = 0xc;
      if (param_2 == 0) {
        param_12 = 4;
      }
      else {
        param_12 = 0x23;
      }
    }
    else {
      uVar2 = 0;
      uVar3 = 0x46;
    }
    cVar1 = param_8 + param_6 + param_4;
    *param_11 = cVar1 + '\a';
    param_11[1] = param_1;
    param_11[2] = param_2;
    param_11[3] = (char)param_3;
    param_11[4] = (char)((ushort)param_3 >> 8);
    pcVar4 = param_11 + 5;
    if (param_4 != 0) {
      FUN_00406a90(pcVar4,param_5,param_4);
      pcVar4 = pcVar4 + param_4;
    }
    if (param_6 != 0) {
      FUN_00406a90(pcVar4,param_7,param_6);
      pcVar4 = pcVar4 + param_6;
    }
    if (param_8 != 0) {
      FUN_00406a90(pcVar4,param_9,param_8);
      pcVar4 = pcVar4 + param_8;
    }
    FUN_0040b868(cVar1 + '\x05',param_11,pcVar4);
    cVar1 = FUN_0040b95e(param_11,param_12,param_13,uVar2,uVar3);
    if (cVar1 != '\0') {
      FUN_0040880a();
    }
  }
  else {
    FUN_0040880a();
  }
  return cVar1;
}



//==== FUNC FUN_0040aef4 @ 0040aef4 ====

char * FUN_0040aef4(uint *param_1,char param_2,uint param_3)

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
    if (bVar7) goto LAB_0040af44;
    puVar2 = (uint *)((int)param_1 + 1);
    cVar1 = *(char *)param_1;
    param_1 = puVar2;
    if (param_2 == cVar1) goto LAB_0040af48;
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
LAB_0040af44:
  puVar2 = param_1;
  if (!bVar6) {
    puVar2 = (uint *)0x1;
  }
LAB_0040af48:
  return (char *)((int)puVar2 + -1);
}



//==== FUNC FUN_0040af4c @ 0040af4c ====

undefined4 FUN_0040af4c(void)

{
  return DAT_0040af54;
}



//==== FUNC FUN_0040af58 @ 0040af58 ====

void FUN_0040af58(undefined4 *param_1)

{
  *param_1 = 8;
  *param_1 = 0x20;
  *param_1 = 4;
  return;
}



//==== FUNC FUN_0040af66 @ 0040af66 ====

bool FUN_0040af66(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  FUN_0040b1a6(param_1);
  FUN_0040af58(param_1);
  iVar1 = FUN_0040af98(param_1,param_2[1],*param_2);
  return iVar1 == 1;
}



//==== FUNC FUN_0040af98 @ 0040af98 ====

undefined4 FUN_0040af98(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < DAT_0040b1b0) {
    if (param_2 < DAT_0040b1b4) {
      uVar2 = param_3 / (param_2 << 1) - 3;
      for (; (0xff < uVar2 && (uVar4 < 7)); uVar4 = uVar4 + 1) {
        uVar2 = uVar2 >> 1;
      }
      *(uint *)(param_1 + 0x10) = (uVar4 & 7) << 0x10 | (uVar2 & 0xff) << 8 | uVar2 & 0xff;
    }
    else {
      uVar2 = param_3 / DAT_0040b1b8 - 3;
      uVar3 = param_3 / ((DAT_0040b1bc + param_2 * 2) * 2) - 3;
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



//==== FUNC FUN_0040b044 @ 0040b044 ====

uint FUN_0040b044(byte *param_1,int param_2)

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



//==== FUNC FUN_0040b06a @ 0040b06a ====

undefined8 FUN_0040b06a(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    uVar1 = FUN_0040b044(param_2,*(undefined4 *)(param_2 + 4));
    param_1[3] = uVar1;
    *param_1 = 1;
    iVar2 = 15000;
    while (iVar4 != 0) {
      if ((int)(param_1[8] << 0x17) < 0) {
        uVar1 = 5;
        goto LAB_0040b112;
      }
      if (iVar2 == 0) {
        uVar1 = 9;
        goto LAB_0040b112;
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
        goto LAB_0040b112;
      }
      bVar5 = iVar4 != 0;
      iVar4 = iVar4 + -1;
    } while (bVar5);
    uVar1 = 9;
  }
LAB_0040b112:
  return CONCAT44(param_4,uVar1);
}



//==== FUNC FUN_0040b116 @ 0040b116 ====

undefined8 FUN_0040b116(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    uVar1 = FUN_0040b044(param_2,*(undefined4 *)(param_2 + 4));
    param_1[3] = uVar1;
    while (iVar2 != 0) {
      if ((int)(param_1[8] << 0x17) < 0) {
        uVar1 = 5;
        goto LAB_0040b1a2;
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
        goto LAB_0040b1a2;
      }
    } while (-1 < (int)(param_1[8] << 0x1d));
    *param_1 = 2;
    iVar2 = 0x1000000;
    do {
      if ((int)(param_1[8] << 0x1f) < 0) {
        uVar1 = 0;
        goto LAB_0040b1a2;
      }
      bVar4 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar4);
    uVar1 = 9;
  }
LAB_0040b1a2:
  return CONCAT44(param_4,uVar1);
}



//==== FUNC FUN_0040b1a6 @ 0040b1a6 ====

void FUN_0040b1a6(undefined4 *param_1)

{
  *param_1 = 0x80;
  return;
}



//==== FUNC FUN_0040b1c0 @ 0040b1c0 ====

void FUN_0040b1c0(int param_1,uint param_2,int param_3,int param_4)

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



//==== FUNC FUN_0040b218 @ 0040b218 ====

void FUN_0040b218(int param_1,int param_2,int param_3,uint param_4)

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



//==== FUNC FUN_0040b26a @ 0040b26a ====

void FUN_0040b26a(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined4 *)(param_1 + uVar1 * 4) = *(undefined4 *)(param_2 + uVar1 * 4);
  }
  return;
}



//==== FUNC FUN_0040b284 @ 0040b284 ====

void FUN_0040b284(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    *(undefined4 *)(param_1 + uVar1 * 4) = 0;
  }
  return;
}



//==== FUNC FUN_0040b298 @ 0040b298 ====

void FUN_0040b298(int param_1,int param_2,int param_3,uint param_4)

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



//==== FUNC FUN_0040b2f6 @ 0040b2f6 ====

void FUN_0040b2f6(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int aiStack_22c [131];
  
  FUN_0040b284(aiStack_22c,param_4 << 1);
  uVar1 = FUN_0040b736(param_2,param_4);
  iVar2 = FUN_0040b736(param_3,param_4);
  for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
    iVar3 = FUN_0040b750(aiStack_22c + uVar4,aiStack_22c + uVar4,
                         *(undefined4 *)(param_2 + uVar4 * 4),param_3,iVar2);
    aiStack_22c[iVar2 + uVar4] = iVar3 + aiStack_22c[iVar2 + uVar4];
  }
  FUN_0040b26a(param_1,aiStack_22c,param_4 << 1);
  FUN_0040ac1c(aiStack_22c,0,0x208);
  return;
}



//==== FUNC FUN_0040b37e @ 0040b37e ====

uint FUN_0040b37e(int param_1,int param_2,uint param_3,uint param_4)

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



//==== FUNC FUN_0040b3c4 @ 0040b3c4 ====

uint FUN_0040b3c4(int param_1,int param_2,uint param_3,int param_4)

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



//==== FUNC FUN_0040b408 @ 0040b408 ====

void FUN_0040b408(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
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
  
  iVar1 = FUN_0040b736(param_5,param_6);
  if (iVar1 != 0) {
    local_340 = FUN_0040b852(*(undefined4 *)(param_5 + iVar1 * 4 + -4));
    local_340 = 0x20 - local_340;
    FUN_0040b284(aiStack_234,iVar1);
    iVar2 = FUN_0040b37e(aiStack_234,param_3,local_340,param_4);
    aiStack_234[param_4] = iVar2;
    FUN_0040b37e(auStack_338,param_5,local_340,iVar1);
    local_33c = *(int *)(auStack_338 + iVar1 * 4 + -4);
    FUN_0040b284(param_1,param_4);
    for (param_4 = param_4 - iVar1; -1 < param_4; param_4 = param_4 + -1) {
      if (local_33c == -1) {
        local_344 = aiStack_234[iVar1 + param_4];
      }
      else {
        FUN_0040bb82(&local_344,auStack_238 + (iVar1 + param_4) * 4,local_33c + 1);
      }
      iVar2 = FUN_0040b7ca(aiStack_234 + param_4,aiStack_234 + param_4,local_344,auStack_338,iVar1);
      aiStack_234[iVar1 + param_4] = aiStack_234[iVar1 + param_4] - iVar2;
      while ((aiStack_234[iVar1 + param_4] != 0 ||
             (iVar2 = FUN_0040b6fe(aiStack_234 + param_4,auStack_338,iVar1), -1 < iVar2))) {
        local_344 = local_344 + 1;
        iVar2 = FUN_0040b298(aiStack_234 + param_4,aiStack_234 + param_4,auStack_338,iVar1);
        aiStack_234[iVar1 + param_4] = aiStack_234[iVar1 + param_4] - iVar2;
      }
      *(int *)(param_1 + param_4 * 4) = local_344;
    }
    FUN_0040b284(param_2,param_6);
    FUN_0040b3c4(param_2,aiStack_234,local_340,iVar1);
    FUN_0040ac1c(aiStack_234,0,0x20c);
    FUN_0040ac1c(auStack_338,0,0x104);
  }
  return;
}



//==== FUNC FUN_0040b576 @ 0040b576 ====

void FUN_0040b576(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined auStack_220 [520];
  
  FUN_0040b408(auStack_220,param_1,param_2,param_3,param_4,param_5);
  FUN_0040ac1c(auStack_220,0,0x208);
  return;
}



//==== FUNC FUN_0040b5b0 @ 0040b5b0 ====

void FUN_0040b5b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined auStack_224 [524];
  
  FUN_0040b2f6(auStack_224,param_2,param_3,param_5);
  FUN_0040b576(param_1,auStack_224,param_5 << 1,param_4,param_5);
  FUN_0040ac1c(auStack_224,0,0x208);
  return;
}



//==== FUNC FUN_0040b5f6 @ 0040b5f6 ====

void FUN_0040b5f6(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
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
  
  FUN_0040b26a(auStack_334,param_2,param_6);
  FUN_0040b5b0(auStack_230,auStack_334,param_2,param_5,param_6);
  FUN_0040b5b0(auStack_12c,auStack_230,param_2,param_5,param_6);
  FUN_0040b284(local_438,param_6);
  local_438[0] = 1;
  iVar1 = FUN_0040b736(param_3,param_4);
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
      FUN_0040b5b0(local_438,local_438,local_438,param_5,param_6);
      FUN_0040b5b0(local_438,local_438,local_438,param_5,param_6);
      if (uVar2 >> 0x1e != 0) {
        FUN_0040b5b0(local_438,local_438,local_438 + (uVar2 >> 0x1e) * 0x41,param_5,param_6);
      }
      uVar2 = uVar2 << 2;
    }
  }
  FUN_0040b26a(param_1,local_438,param_6);
  FUN_0040ac1c(auStack_334,0,0x30c);
  FUN_0040ac1c(local_438,0,0x104);
  return;
}



//==== FUNC FUN_0040b6fe @ 0040b6fe ====

undefined4 FUN_0040b6fe(int param_1,int param_2,int param_3)

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



//==== FUNC FUN_0040b736 @ 0040b736 ====

int FUN_0040b736(int param_1,int param_2)

{
  for (param_2 = param_2 + -1; (-1 < param_2 && (*(int *)(param_1 + param_2 * 4) == 0));
      param_2 = param_2 + -1) {
  }
  return param_2 + 1;
}



//==== FUNC FUN_0040b750 @ 0040b750 ====

undefined8 FUN_0040b750(int param_1,int param_2,uint param_3,int param_4,uint param_5)

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
      FUN_0040baf6(&local_28,param_3,*(undefined4 *)(param_4 + uVar2 * 4));
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



//==== FUNC FUN_0040b7ca @ 0040b7ca ====

undefined8 FUN_0040b7ca(int param_1,int param_2,int param_3,int param_4,uint param_5)

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
      FUN_0040baf6(&local_28,param_3,*(undefined4 *)(param_4 + uVar3 * 4));
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



//==== FUNC FUN_0040b852 @ 0040b852 ====

void FUN_0040b852(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; (uVar1 < 0x20 && (param_1 != 0)); param_1 = param_1 >> 1) {
    uVar1 = uVar1 + 1;
  }
  return;
}



//==== FUNC FUN_0040b868 @ 0040b868 ====

void FUN_0040b868(byte param_1,int param_2,undefined *param_3)

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
      if ((uint)((*(byte *)(param_2 + uVar2) & uVar4) != 0) != uVar1 >> 0xf) {
        uVar3 = uVar3 ^ 0x8005;
      }
    }
  }
  *param_3 = (char)uVar3;
  param_3[1] = (char)(uVar3 >> 8);
  return;
}



//==== FUNC FUN_0040b8d2 @ 0040b8d2 ====

undefined8 FUN_0040b8d2(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  undefined4 local_10;
  
  bVar1 = *param_1 - 2;
  local_10 = param_4;
  FUN_0040b868(*param_1 + -2,param_1,&local_10);
  if (((local_10 & 0xff) == (uint)(byte)param_1[bVar1]) && (local_10._1_1_ == param_1[bVar1 + 1])) {
    bVar1 = 0;
  }
  else {
    bVar1 = 0xe5;
  }
  return CONCAT44(local_10,(uint)bVar1);
}



//==== FUNC FUN_0040b90c @ 0040b90c ====

undefined8 FUN_0040b90c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = FUN_004087ec(param_1);
  if (bVar1 == 0) {
    if (*param_1 == '\x04') {
      if (param_1[1] == '\x11') {
        if ((param_1[2] != '3') || (uVar2 = 0, param_1[3] != 'C')) {
          uVar2 = 0xe5;
        }
      }
      else {
        uVar2 = 0xf0;
      }
    }
    else {
      uVar2 = 0xe4;
    }
    if (uVar2 != 0) {
      FUN_0040bde2(0x46);
    }
  }
  else {
    uVar2 = (uint)bVar1;
  }
  return CONCAT44(param_4,uVar2);
}



//==== FUNC FUN_0040b95e @ 0040b95e ====

char FUN_0040b95e(char *param_1,byte param_2,byte *param_3,uint param_4,byte param_5)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  ushort local_54;
  undefined auStack_50 [36];
  char *local_2c;
  uint local_28;
  
  cVar3 = -0x20;
  cVar1 = *param_1;
  bVar6 = cVar1 - 2;
  bVar2 = false;
  local_2c = param_1;
  local_28 = param_4;
  FUN_0040b868(bVar6,param_1,param_1 + bVar6);
  do {
    cVar5 = '\x03';
LAB_0040b9aa:
    while( true ) {
      cVar4 = cVar5 + -1;
      if (cVar5 == '\0') {
        return cVar3;
      }
      if (cVar3 == '\0') {
        return '\0';
      }
      cVar3 = FUN_00408824(cVar1,local_2c);
      cVar5 = cVar4;
      if (cVar3 == '\0') break;
      FUN_0040bde2(0x47);
      bVar6 = 0;
      while ((bVar6 < 2 && (cVar4 = FUN_0040b90c(auStack_50), cVar4 != '\0'))) {
        bVar6 = bVar6 + 1;
      }
    }
    FUN_0040bde2(local_28 & 0xff);
    cVar4 = '\x01';
LAB_0040ba08:
    if (cVar4 == '\0') goto LAB_0040b9aa;
    for (uVar7 = 0; local_54 = (ushort)param_5 * 1000 + 0x25, (uVar7 & 0xff) < (uint)param_2;
        uVar7 = (uVar7 & 0xff) + 1) {
      param_3[uVar7 & 0xff] = 0;
    }
    do {
      cVar3 = FUN_00408872(param_2,param_3);
      if ((ushort)(local_54 - 0x25) < 0x26) break;
      local_54 = local_54 - 0x25;
    } while (cVar3 != '\0');
    if ((cVar3 == '\0') || (bVar2)) {
      cVar3 = FUN_0040b8d2(param_3);
      cVar4 = cVar4 + -1;
      if (cVar3 == '\0') break;
      goto LAB_0040ba08;
    }
    bVar2 = true;
    FUN_0040bde2(0x47);
    bVar6 = 0;
    while ((bVar6 < 2 && (cVar5 = FUN_0040b90c(auStack_50), cVar5 != '\0'))) {
      bVar6 = bVar6 + 1;
    }
  } while( true );
  cVar3 = '\0';
  if (*param_3 < 5) {
    bVar6 = param_3[1];
    if (bVar6 == 3) {
      cVar3 = -0x2e;
    }
    else if (bVar6 == 0xf) {
      cVar3 = -0x2d;
    }
    else if (bVar6 == 0xff) {
      cVar3 = -0x2c;
      goto LAB_0040b9aa;
    }
  }
  return cVar3;
}



//==== FUNC FUN_0040baf6 @ 0040baf6 ====

void FUN_0040baf6(uint *param_1,uint param_2,uint param_3)

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



//==== FUNC FUN_0040bb82 @ 0040bb82 ====

uint FUN_0040bb82(int *param_1,int *param_2,uint param_3)

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



//==== FUNC FUN_0040bd78 @ 0040bd78 ====

undefined4 FUN_0040bd78(uint param_1)

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
    uVar1 = DAT_0040be30;
    if ((((param_1 != 4) && (uVar1 = DAT_0040be2c, 3 < param_1)) &&
        (uVar1 = DAT_0040be34, param_1 != 6)) && ((5 < param_1 && (param_1 != 7)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== FUNC FUN_0040bdc0 @ 0040bdc0 ====

undefined8 FUN_0040bdc0(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0040bd78(6);
  return CONCAT44(unaff_r7,(uint)(iVar1 * 0x19) / 1);
}



//==== FUNC FUN_0040bdd4 @ 0040bdd4 ====

undefined8 FUN_0040bdd4(void)

{
  uint uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_0040bdc0();
  return CONCAT44(unaff_r7,uVar1 / 1);
}



//==== FUNC FUN_0040bde2 @ 0040bde2 ====

void FUN_0040bde2(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_0040bdd4();
    FUN_00407f14(uVar2 + DAT_0040be38,CARRY4(uVar2,DAT_0040be38),DAT_0040be3c,0);
    thunk_EXT_FUN_2040215c();
  }
  else {
    uVar2 = FUN_0040bdd4();
    lVar1 = (ulonglong)uVar2 * (ulonglong)param_1 + 0x172b;
    FUN_00407f14((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0x172c,0);
    thunk_EXT_FUN_2040215c();
  }
  return;
}



//==== FUNC FUN_0040df6c @ 0040df6c ====

undefined4 FUN_0040df6c(void)

{
  *DAT_0040dfb0 = DAT_0040dfac & 0xffffff80;
  return 1;
}



//==== FUNC sub_0040df7a @ 0040df7a ====

undefined4 sub_0040df7a(void)

{
  undefined4 unaff_r7;
  
  FUN_0040df82();
  return unaff_r7;
}



//==== FUNC FUN_0040df82 @ 0040df82 ====

undefined4 FUN_0040df82(void)

{
  undefined4 unaff_r7;
  
  *DAT_0040dfb0 = DAT_0040dfb4;
  FUN_0040df6c();
  FUN_0040dfbc();
  FUN_00409a96();
  FUN_00409b08();
  return unaff_r7;
}



//==== FUNC sub_0040df9c @ 0040df9c ====

void sub_0040df9c(void)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableFIQinterrupts(1);
  }
  FUN_00408d40(DAT_0040dfb8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC FUN_0040dfbc @ 0040dfbc ====

void FUN_0040dfbc(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_0040dfe0 + DAT_0040dfe0);
  for (piVar1 = (int *)((int)&DAT_0040dfdc + DAT_0040dfdc); piVar1 != piVar2;
      piVar1 = (int *)(*(code *)((int)piVar1 + *piVar1))(piVar1 + 1)) {
  }
  return;
}



//==== FUNC thunk_FUN_0040e09a @ 0040e064 ====

void thunk_FUN_0040e09a(uint *param_1)

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



//==== FUNC FUN_0040e09a @ 0040e09a ====

void FUN_0040e09a(uint *param_1)

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



