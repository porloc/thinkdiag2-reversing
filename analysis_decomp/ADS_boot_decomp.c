// Ghidra decompilation dump: ads_raw.bin
// range: 08000000 .. 0800ffff

//==== FUNC FUN_08000150 @ 08000150 ====

int FUN_08000150(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}



//==== FUNC FUN_0800015e @ 0800015e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800015e(void)

{
  FUN_0800b816(uRam20000000);
  FUN_0800b816(0x71c);
  _DAT_40007000 = _DAT_40007000 | 0x100;
  return;
}



//==== FUNC FUN_08000180 @ 08000180 ====

bool FUN_08000180(uint param_1)

{
  byte bVar1;
  
  FUN_0800af44(DAT_20000002,param_1);
  bVar1 = FUN_0800af76(3);
  return bVar1 == param_1;
}



//==== FUNC FUN_080001aa @ 080001aa ====

bool FUN_080001aa(uint param_1)

{
  byte bVar1;
  
  FUN_0800af44(DAT_20000003,param_1);
  bVar1 = FUN_0800af76(3);
  return bVar1 == param_1;
}



//==== FUNC FUN_080001d4 @ 080001d4 ====

undefined FUN_080001d4(void)

{
  undefined uVar1;
  
  uVar1 = FUN_0800af76(DAT_20000004 ^ DAT_20000005);
  return uVar1;
}



//==== FUNC FUN_080001f6 @ 080001f6 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080001f6(void)

{
  FUN_0800b816(_DAT_20000006);
  FUN_0800b136(_DAT_20000008,_DAT_2000000c,_DAT_20000010,_DAT_20000014);
  return;
}



//==== FUNC FUN_08000238 @ 08000238 ====

void FUN_08000238(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0800024a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 * 4 + 0x20000074))();
  return;
}



//==== FUNC FUN_08000400 @ 08000400 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08000400(void)

{
  int in_r3;
  
                    /* WARNING: Could not emulate address calculation at 0x08000438 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((int)(_DAT_20000080 ^ _DAT_2000007c) < in_r3) * 4 + 0x200000e0))();
  return;
}



//==== FUNC FUN_08000480 @ 08000480 ====

void FUN_08000480(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    param_2 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08000494 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 * 4 + 0x200000e8))();
  return;
}



//==== FUNC FUN_080004ec @ 080004ec ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080004ec(undefined *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  
  *param_1 = (char)(param_2 >> ((_DAT_20000094 ^ _DAT_20000090) & 0xff));
  bVar2 = DAT_2000009d;
  bVar1 = DAT_2000009c;
  param_1[1] = (byte)_DAT_20000098 & (byte)param_2;
                    /* WARNING: Could not emulate address calculation at 0x0800054e */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((bVar2 ^ bVar1) < 2) * 4 + 0x200000f8))();
  return;
}



//==== FUNC FUN_08000632 @ 08000632 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_08000632(byte *param_1)

{
  return (uint)param_1[3] | (uint)param_1[1] << 0x10 | (uint)*param_1 << (_DAT_200000b8 & 0xff) |
         (uint)param_1[2] << ((_DAT_200000c0 ^ _DAT_200000bc) & 0xff);
}



//==== FUNC FUN_08000674 @ 08000674 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_08000674(byte *param_1)

{
  return (uint)param_1[1] | (uint)*param_1 << (_DAT_200000c4 & 0xff) & 0xffff;
}



//==== FUNC FUN_0800068c @ 0800068c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800068c(undefined4 param_1,int param_2)

{
                    /* WARNING: Could not emulate address calculation at 0x080006cc */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_2 != 0) * 4 + 0x20000110))
            (param_1,param_2,_DAT_200000cc ^ _DAT_200000d0);
  return;
}



//==== FUNC FUN_08000792 @ 08000792 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_08000792(void)

{
  int iVar1;
  
  iVar1 = FUN_08000150();
  return iVar1 + _DAT_200000dc & 0xffff;
}



//==== FUNC FUN_080007ac @ 080007ac ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080007ac(undefined4 param_1,undefined4 param_2,uint param_3)

{
  param_3 = (_DAT_20000140 ^ _DAT_2000013c) & param_3;
  if (param_3 != 0) {
    param_3 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x080007e0 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 * 4 + 0x2000015c))();
  return;
}



//==== FUNC FUN_08000904 @ 08000904 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08000904(undefined4 param_1,uint param_2)

{
  FUN_0800a744();
  FUN_0800ab12(0x307);
  FUN_0800ab12(0x1307);
                    /* WARNING: Could not emulate address calculation at 0x08000944 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20001d94 < param_2 >> 0xb) * 4 + 0x2000018c))(0x20000154);
  return;
}



//==== FUNC sub_080009fa @ 080009fa ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_080009fa(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b10a(_DAT_200001b4);
  iVar1 = iVar1 - (uint)DAT_20001d98;
  if (iVar1 != 0) {
    iVar1 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08000a24 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 * 4 + 0x200001c8))();
  return;
}



//==== FUNC sub_08000a3a @ 08000a3a ====

void sub_08000a3a(void)

{
  return;
}



//==== FUNC sub_08000a3c @ 08000a3c ====

void sub_08000a3c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_08000a40 @ 08000a40 ====

void sub_08000a40(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_08000a44 @ 08000a44 ====

void sub_08000a44(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_08000a48 @ 08000a48 ====

void sub_08000a48(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_08000a4a @ 08000a4a ====

void sub_08000a4a(void)

{
  return;
}



//==== FUNC sub_08000a4c @ 08000a4c ====

void sub_08000a4c(void)

{
  return;
}



//==== FUNC sub_08000a4e @ 08000a4e ====

void sub_08000a4e(void)

{
  return;
}



//==== FUNC thunk_FUN_0800ace8 @ 08000a50 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0800ace8(void)

{
  if (_DAT_20003f2c != 0) {
    _DAT_20003f2c = _DAT_20003f2c + -1;
  }
  return;
}



//==== FUNC sub_08000a54 @ 08000a54 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08000a54(void)

{
  int iVar1;
  
  iVar1 = FUN_08001752(&stack0xfffffff0 + -((_DAT_200001b8 ^ _DAT_200001bc) * 2 + 7 & 0xfffffff8));
  iVar1 = iVar1 - (uint)DAT_20001d99;
  if (iVar1 != 0) {
    iVar1 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08000a9c */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 * 4 + 0x200001d0))();
  return;
}



//==== FUNC sub_08000ac0 @ 08000ac0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08000ac0(void)

{
  int iVar1;
  
  iVar1 = FUN_08001b46();
  iVar1 = iVar1 - (_DAT_200001c0 ^ _DAT_200001c4);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08000aec */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 * 4 + 0x200001d8))();
  return;
}



//==== FUNC FUN_08000afc @ 08000afc ====

void FUN_08000afc(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  FUN_0800b816(0x604);
  FUN_0800b136(0x40011000,0x10,3,2);
  bVar2 = DAT_200001e1 ^ DAT_200001e0;
  iVar1 = (uint)bVar2 * 8;
  FUN_0800b816(*(undefined2 *)(&DAT_0800c132 + iVar1));
  FUN_0800b136(*(undefined4 *)(&DAT_0800c12c + (uint)bVar2 * 8),0x10,3,
               *(undefined2 *)(&DAT_0800c130 + iVar1));
  uVar3 = (uint)DAT_20001d9a;
  iVar1 = uVar3 * 8;
  FUN_0800b816(*(undefined2 *)(&DAT_0800c132 + iVar1));
  FUN_0800b136(*(undefined4 *)(&DAT_0800c12c + uVar3 * 8),0x10,3,
               *(undefined2 *)(&DAT_0800c130 + iVar1));
  FUN_0800b416(0x40011000,4);
  FUN_0800b416(0x40011000,1);
  FUN_0800b416(0x40011000,2);
  return;
}



//==== FUNC FUN_08000b9a @ 08000b9a ====

void FUN_08000b9a(int param_1)

{
  FUN_0800b416(*(undefined4 *)(&DAT_0800c12c + param_1 * 8),
               *(undefined2 *)(&DAT_0800c130 + param_1 * 8));
  return;
}



//==== FUNC FUN_08000bb0 @ 08000bb0 ====

void FUN_08000bb0(int param_1)

{
  *(uint *)(*(int *)(&DAT_0800c12c + param_1 * 8) + 0x10) =
       (uint)*(ushort *)(&DAT_0800c130 + param_1 * 8);
  return;
}



//==== FUNC FUN_08000bc8 @ 08000bc8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08000bc8(void)

{
  bool bVar1;
  
  FUN_0800abf6();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  FUN_0800b5e0(0x8000000,_DAT_200001e8 ^ _DAT_200001e4);
  FUN_0800b528(0x600);
  FUN_0800b53c(0x26,0,1);
  FUN_0800b53c(0x37,1,5);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  enableIRQinterrupts();
  FUN_08009ee6(0x20001d9c);
  do {
    FUN_08007f56(0x20001d9c);
  } while( true );
}



//==== FUNC FUN_08000c30 @ 08000c30 ====

void FUN_08000c30(void)

{
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  FUN_08005b68(0x20001d9c);
  if (DAT_0800c0e8 != 0) {
    FUN_0800c0e6(2,0x8005b8d,0x20001d9c,0,unaff_r4,in_lr);
  }
  return;
}



//==== FUNC FUN_08000c5c @ 08000c5c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08000c5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x08000c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_20000208)();
  return;
}



//==== FUNC FUN_08000cbe @ 08000cbe ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08000cbe(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_08000ce8(DAT_20003de1,param_1,_DAT_200001f4);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



//==== FUNC FUN_08000ce8 @ 08000ce8 ====

void FUN_08000ce8(uint param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)((uint)(param_1 < 3) * 4 + 0x2000020c);
                    /* WARNING: Could not emulate address calculation at 0x08000d04 */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,UNRECOVERED_JUMPTABLE,0);
  return;
}



//==== FUNC FUN_08000e38 @ 08000e38 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08000e38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_08000150(param_4);
  iVar2 = FUN_080053ec(param_1,param_4,uVar1);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08000e86 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 * 4 + 0x20000308))();
  return;
}



//==== FUNC FUN_08000ed8 @ 08000ed8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08000ed8(byte *param_1,byte *param_2)

{
  char cVar1;
  
  cVar1 = (char)_DAT_20000304;
  *param_1 = ((byte)_DAT_20000260 ^ (byte)_DAT_2000025c) + cVar1 ^ *param_2;
  param_1[1] = cVar1 + 1U ^ param_2[1];
  param_1[2] = (char)_DAT_20000264 + cVar1 ^ param_2[2];
  param_1[3] = cVar1 + 3U ^ param_2[3];
  param_1[4] = ((byte)_DAT_2000026c ^ (byte)_DAT_20000268) + cVar1 ^ param_2[4];
  param_1[5] = cVar1 + 5U ^ param_2[5];
  param_1[6] = ((byte)_DAT_20000274 ^ (byte)_DAT_20000270) + cVar1 ^ param_2[6];
  param_1[7] = cVar1 + 7U ^ param_2[7];
  param_1[8] = cVar1 + 8U ^ param_2[8];
  param_1[9] = cVar1 + 9U ^ param_2[9];
  param_1[10] = cVar1 + 10U ^ param_2[10];
  param_1[0xb] = cVar1 + 0xbU ^ param_2[0xb];
  param_1[0xc] = (char)_DAT_20000278 + cVar1 ^ param_2[0xc];
  param_1[0xd] = cVar1 + 0xdU ^ param_2[0xd];
  param_1[0xe] = cVar1 + 0xeU ^ param_2[0xe];
  param_1[0xf] = param_2[0xf] ^ cVar1 + 0xfU;
  param_1[0x10] = 0;
  return;
}



//==== FUNC FUN_08001050 @ 08001050 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08001050(void)

{
                    /* WARNING: Could not emulate address calculation at 0x08001096 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20003de4 < (_DAT_20000280 ^ _DAT_2000027c)) * 4 + 0x20000318))();
  return;
}



//==== FUNC FUN_080010c4 @ 080010c4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080010c4(int param_1)

{
                    /* WARNING: Could not emulate address calculation at 0x0800116a */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(0x6d800 <
                     ((uint)*(byte *)(param_1 + 0x4fffc) << ((_DAT_20000290 ^ _DAT_20000294) & 0xff)
                      | (uint)*(byte *)(param_1 + 0x4fffd) << (_DAT_20000298 & 0xff) |
                      (uint)*(byte *)(param_1 + 0x4fffe) << (_DAT_2000029c & 0xff) |
                     (uint)*(byte *)(param_1 + 0x4ffff))) * 4 + 0x20000320))();
  return;
}



//==== FUNC FUN_0800131a @ 0800131a ====

undefined4 FUN_0800131a(void)

{
  return 1;
}



//==== FUNC FUN_08001320 @ 08001320 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08001320(void)

{
                    /* WARNING: Could not emulate address calculation at 0x080013e6 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((_DAT_200002e8 ^ _DAT_200002e4) <
                     ((uint)DAT_0800ffff |
                     (uint)DAT_0800fffc << (_DAT_200002d8 & 0xff) | (uint)DAT_0800fffd << 0x10 |
                     (uint)DAT_0800fffe << ((_DAT_200002dc ^ _DAT_200002e0) & 0xff))) * 4 +
              0x20000358))(0xfd);
  return;
}



//==== FUNC FUN_0800156a @ 0800156a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0800156a(uint *param_1)

{
  return (*param_1 & 0x2ffe0000) == (_DAT_20000394 ^ _DAT_20000390);
}



//==== FUNC FUN_08001596 @ 08001596 ====

void FUN_08001596(undefined4 *param_1)

{
  bool bVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  disableIRQinterrupts();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(*param_1);
  }
  UNRECOVERED_JUMPTABLE = sub_080015a8 + 6;
  (*(code *)param_1[1])(*param_1);
                    /* WARNING: Could not recover jumptable at 0x080015ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



//==== FUNC sub_080015a8 @ 080015a8 ====

void sub_080015a8(undefined4 param_1)

{
  bool bVar1;
  code *unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(param_1);
  }
  UNRECOVERED_JUMPTABLE = sub_080015a8;
  (*unaff_r5)();
                    /* WARNING: Could not recover jumptable at 0x080015ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



//==== FUNC FUN_080015b0 @ 080015b0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080015b0(undefined4 param_1)

{
  FUN_0800bf14(_DAT_20000398);
  FUN_0800c006(0x40004400);
  FUN_0800b816(0x602);
  FUN_0800b816(0x602);
  FUN_0800b816(_DAT_2000039c ^ _DAT_2000039e);
  FUN_0800b136(_DAT_200003a0,_DAT_200003a4,_DAT_200003a8,_DAT_200003ac);
  FUN_0800b136(_DAT_200003b0,_DAT_200003b4,_DAT_200003b8,_DAT_200003bc);
  FUN_0800bf90(0x40004400,param_1);
  FUN_0800c01c(_DAT_200003c0,_DAT_200003c4);
  FUN_0800c010(0x40004400,_DAT_200003cc ^ _DAT_200003c8);
  FUN_0800c098(0x40004400,0x50305);
  FUN_0800bffc(_DAT_200003d0);
  FUN_0800b816(0x603);
  FUN_0800b816(_DAT_200003d4);
  FUN_0800b136(0x40010c00,0x48,3,2);
  FUN_0800b4a4(DAT_200003d6,DAT_200003d7);
  FUN_0800b05e(2,0,DAT_200003d9 ^ DAT_200003d8);
  FUN_0800b0fa(2);
  FUN_0800b53c(DAT_200003da ^ DAT_200003db,DAT_200003dd ^ DAT_200003dc,1);
  FUN_0800b53c(7,1,1);
  return;
}



//==== FUNC FUN_08001752 @ 08001752 ====

void FUN_08001752(void)

{
  int iVar1;
  
  iVar1 = FUN_0800c076(0x40004400,0x50305);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08001782 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 * 4 + 0x20000450))();
  return;
}



//==== FUNC FUN_080017e0 @ 080017e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080017e0(undefined param_1)

{
  DataMemoryBarrier(0x1f);
                    /* WARNING: Could not emulate address calculation at 0x08007920 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20003ea8 == 0) * 4 + 0x20001a68))(&DAT_20003ea8,param_1,2);
  return;
}



//==== FUNC FUN_080017f0 @ 080017f0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080017f0(undefined4 param_1)

{
  int iVar1;
  
  FUN_0800c028(0x40004400,param_1);
  iVar1 = FUN_0800c038(_DAT_200003e4,_DAT_200003e8);
                    /* WARNING: Could not emulate address calculation at 0x0800182e */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(iVar1 == 0) * 4 + 0x20000460))();
  return;
}



//==== FUNC FUN_0800183c @ 0800183c ====

void FUN_0800183c(undefined4 param_1,int param_2)

{
                    /* WARNING: Could not emulate address calculation at 0x08001858 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_2 != 0) * 4 + 0x20000468))();
  return;
}



//==== FUNC FUN_0800189c @ 0800189c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800189c(undefined4 param_1,undefined4 param_2,int param_3)

{
  param_3 = param_3 - (_DAT_200003f0 ^ _DAT_200003f4);
  if (param_3 != 0) {
    param_3 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x080018f4 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 * 4 + 0x20000470))();
  return;
}



//==== FUNC FUN_08001952 @ 08001952 ====

void FUN_08001952(void)

{
  FUN_0800b426(0x40010c00,2);
  return;
}



//==== FUNC FUN_08001966 @ 08001966 ====

void FUN_08001966(void)

{
  int iVar1;
  
  iVar1 = FUN_0800b426(0x40010c00,2);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08001986 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 * 4 + 0x20000488))();
  return;
}



//==== FUNC FUN_080019a0 @ 080019a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080019a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = _DAT_20000404 * -0x10;
  puVar3 = (undefined4 *)(&stack0xffffffe8 + iVar1);
  *puVar3 = 0;
  *(undefined4 *)(&stack0xffffffec + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
  FUN_0800b816(_DAT_20000408);
  *(short *)puVar3 = (short)(_DAT_20001d8c / (_DAT_2000040c ^ _DAT_20000410)) + -1;
  iVar2 = param_1 + -0xffff;
  if (param_1 + -0xffff != 0) {
    iVar2 = param_1;
  }
  *(int *)(&stack0xfffffff0 + iVar1) = iVar2 + -1;
  FUN_0800bb82(0x40001400,puVar3);
  return;
}



//==== FUNC FUN_08001a22 @ 08001a22 ====

void FUN_08001a22(int param_1)

{
                    /* WARNING: Could not emulate address calculation at 0x08001a36 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_1 == 1) * 4 + 0x20000490))();
  return;
}



//==== FUNC FUN_08001ace @ 08001ace ====

void FUN_08001ace(int param_1)

{
                    /* WARNING: Could not emulate address calculation at 0x08001ade */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_1 == 1) * 4 + 0x20000498))();
  return;
}



//==== FUNC FUN_08001b0c @ 08001b0c ====

void FUN_08001b0c(int param_1)

{
                    /* WARNING: Could not emulate address calculation at 0x08001b20 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_1 == 1) * 4 + 0x200004a0))();
  return;
}



//==== FUNC FUN_08001b46 @ 08001b46 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08001b46(void)

{
  uint uVar1;
  
  uVar1 = FUN_0800bc5a(_DAT_2000043c,_DAT_20000440);
                    /* WARNING: Could not emulate address calculation at 0x08001b88 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((_DAT_20000444 ^ _DAT_20000448) == uVar1) * 4 + 0x200004a8))();
  return;
}



//==== FUNC sub_08001bb8 @ 08001bb8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08001bb8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar12 = _DAT_20003f48 ^ param_1[2];
  uVar5 = _DAT_20003f44 ^ param_1[1];
  uVar4 = _DAT_20003f40 ^ *param_1;
  uVar8 = _DAT_20003f4c ^ param_1[3];
  iVar9 = -0x55992d50;
  uVar10 = 0xcfc06585;
  uVar6 = 0x6df7df3e;
  uVar7 = 0xc2f58f7;
  iVar3 = 0x30;
  do {
    uVar1 = (uint)(iVar9 << 0x13) >> 0x1e;
    uVar2 = -(uVar12 >> 0x1b) & 0x1f;
    uVar11 = uVar5 - ((*(uint *)(&DAT_20003f30 + uVar1 * 4) >> uVar2 |
                      *(uint *)(&DAT_20003f30 + uVar1 * 4) << 0x20 - uVar2) + (uVar12 >> 5) ^
                     (*(uint *)(&DAT_20003f40 + uVar1 * 4) >> (-uVar12 & 0x1f) |
                     *(uint *)(&DAT_20003f40 + uVar1 * 4) << 0x20 - (-uVar12 & 0x1f)) +
                     uVar12 * 0x10 ^ uVar4 + iVar9);
    uVar5 = -(uVar4 >> 0x1b) & 0x1f;
    uVar1 = (uVar7 << 0x13) >> 0x1e;
    uVar2 = uVar8 - ((*(uint *)(&DAT_20003f30 + (uVar7 & 3) * 4) >> uVar5 |
                     *(uint *)(&DAT_20003f30 + (uVar7 & 3) * 4) << 0x20 - uVar5) + (uVar4 >> 5) ^
                    (*(uint *)(&DAT_20003f40 + (uVar7 & 3) * 4) >> (-uVar4 & 0x1f) |
                    *(uint *)(&DAT_20003f40 + (uVar7 & 3) * 4) << 0x20 - (-uVar4 & 0x1f)) +
                    uVar4 * 0x10 ^ uVar12 + uVar7);
    uVar5 = -(uVar11 >> 0x1b) & 0x1f;
    uVar8 = uVar4 - ((*(uint *)(&DAT_20003f30 + uVar1 * 4) >> uVar5 |
                     *(uint *)(&DAT_20003f30 + uVar1 * 4) << 0x20 - uVar5) + (uVar11 >> 5) ^
                    (*(uint *)(&DAT_20003f40 + uVar1 * 4) >> (-uVar11 & 0x1f) |
                    *(uint *)(&DAT_20003f40 + uVar1 * 4) << 0x20 - (-uVar11 & 0x1f)) + uVar11 * 0x10
                    ^ uVar7 + uVar2);
    uVar5 = -(uVar2 >> 0x1b) & 0x1f;
    uVar5 = uVar12 - ((*(uint *)(&DAT_20003f30 + (uVar6 & 3) * 4) >> uVar5 |
                      *(uint *)(&DAT_20003f30 + (uVar6 & 3) * 4) << 0x20 - uVar5) + (uVar2 >> 5) ^
                     (*(uint *)(&DAT_20003f40 + (uVar6 & 3) * 4) >> (-uVar2 & 0x1f) |
                     *(uint *)(&DAT_20003f40 + (uVar6 & 3) * 4) << 0x20 - (-uVar2 & 0x1f)) +
                     uVar2 * 0x10 ^ uVar6 + uVar11);
    uVar12 = (uVar6 << 0x13) >> 0x1e;
    uVar4 = -(uVar8 >> 0x1b) & 0x1f;
    uVar12 = uVar2 - ((*(uint *)(&DAT_20003f30 + uVar12 * 4) >> uVar4 |
                      *(uint *)(&DAT_20003f30 + uVar12 * 4) << 0x20 - uVar4) + (uVar8 >> 5) ^
                     (*(uint *)(&DAT_20003f40 + uVar12 * 4) >> (-uVar8 & 0x1f) |
                     *(uint *)(&DAT_20003f40 + uVar12 * 4) << 0x20 - (-uVar8 & 0x1f)) + uVar8 * 0x10
                     ^ uVar6 + uVar5);
    uVar4 = -(uVar5 >> 0x1b) & 0x1f;
    uVar4 = uVar11 - ((*(uint *)(&DAT_20003f30 + (uVar10 & 3) * 4) >> uVar4 |
                      *(uint *)(&DAT_20003f30 + (uVar10 & 3) * 4) << 0x20 - uVar4) + (uVar5 >> 5) ^
                     (*(uint *)(&DAT_20003f40 + (uVar10 & 3) * 4) >> (-uVar5 & 0x1f) |
                     *(uint *)(&DAT_20003f40 + (uVar10 & 3) * 4) << 0x20 - (-uVar5 & 0x1f)) +
                     uVar5 * 0x10 ^ uVar10 + uVar8);
    iVar9 = iVar9 + 0x255992d5;
    uVar10 = uVar10 + 0x255992d5;
    uVar6 = uVar6 + 0x255992d5;
    iVar3 = iVar3 + -3;
    uVar7 = uVar7 + 0x255992d5;
  } while (iVar3 != 0);
  uVar8 = uVar8 - _DAT_20003f3c;
  uVar12 = uVar12 - _DAT_20003f38;
  uVar5 = uVar5 - _DAT_20003f34;
  *param_1 = uVar4 - _DAT_20003f30;
  param_1[1] = uVar5;
  param_1[2] = uVar12;
  param_1[3] = uVar8;
  return;
}



//==== FUNC FUN_08001d6a @ 08001d6a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08001d6a(void)

{
  _DAT_20003f30 = _DAT_20003f30 * -0x6b7bb150 >> 4 ^ 0x7593acd;
  _DAT_20003f34 = _DAT_20003f34 * -0x4168d100 >> 1;
  _DAT_20003f38 = _DAT_20003f38 << 2 ^ 0x181466c0;
  _DAT_20003f3c = (_DAT_20003f3c * -0x3769d983 ^ 0x683d7971U) * -0x3f3a1ff0;
  _DAT_20003f40 = _DAT_20003f40 * -0x523abc32 >> 4 ^ 0x5443999;
  _DAT_20003f44 = _DAT_20003f44 * 0x67a5478f >> 1;
  _DAT_20003f48 = _DAT_20003f48 << 2 ^ 0x181466c0;
  _DAT_20003f4c = (_DAT_20003f4c * -0x12345678 ^ 0xbad18295U) * -0x17439772;
  return;
}



//==== FUNC FUN_08001e2a @ 08001e2a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08001e2a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_080073e0();
  _DAT_20000fe4 = 0xb;
  uVar1 = FUN_080073e0(param_1,param_2,param_3);
  _DAT_20000fe4 = 0xb;
  return uVar1;
}



//==== FUNC sub_08001e60 @ 08001e60 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08001e60(void)

{
  _DAT_20003f30 = DAT_0800c990;
  _DAT_20003f34 = DAT_0800c994;
  _DAT_20003f38 = DAT_0800c998;
  _DAT_20003f3c = DAT_0800c99c;
  _DAT_20003f40 = DAT_0800c9a0;
  _DAT_20003f44 = DAT_0800c9a4;
  _DAT_20003f48 = DAT_0800c9a8;
  _DAT_20003f4c = DAT_0800c9ac;
  return;
}



//==== FUNC sub_08001eac @ 08001eac ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08001eac(void)

{
                    /* WARNING: Could not emulate address calculation at 0x08001eda */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20003e00 < _DAT_200004c8) * 4 + 0x20000588))();
  return;
}



//==== FUNC sub_08001f1c @ 08001f1c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08001f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x08001f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_20000594)();
  return;
}



//==== FUNC sub_0800215c @ 0800215c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_0800215c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar1 = (_DAT_2000053c ^ _DAT_20000540) * -0x10 + -0x38;
  uStack_34 = _DAT_20000558 ^ _DAT_20000554;
  iStack_2c = (int)&uStack_38 + _DAT_20003e04 + iVar1 + 0x38;
  iStack_30 = (int)&uStack_38 + _DAT_20000548 + iVar1 + 0x38;
  uStack_38 = param_2;
                    /* WARNING: Could not emulate address calculation at 0x080021fe */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20000544 != 0) * 4 + 0x200005a8))(param_1,0x200005a8,3);
  return;
}



//==== FUNC sub_08002400 @ 08002400 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08002400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_28;
  
  puVar2 = &uStack_28 + _DAT_20000570 * -0xc + (_DAT_20000574 ^ _DAT_20000578) * -4;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar1 = FUN_08000150(param_3);
                    /* WARNING: Could not emulate address calculation at 0x0800246c */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(0 < iVar1) * 4 + 0x200005c8))(iVar1,_DAT_2000057c);
  return;
}



//==== FUNC FUN_080024ea @ 080024ea ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080024ea(void)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  FUN_0800b528(0x600);
  FUN_0800b53c(DAT_200005e0,DAT_200005e1,DAT_200005e2);
  FUN_0800b53c(0x19,1,1);
  FUN_0800b53c(0x1d,1,DAT_200005e4 ^ DAT_200005e3);
  FUN_0800b53c(0x1e,1,3);
  FUN_0800b53c(DAT_200005e5 ^ DAT_200005e6,DAT_200005e8 ^ DAT_200005e7,1);
  FUN_0800b53c(DAT_200005e9 ^ DAT_200005ea,1,1);
  FUN_0800b53c(0x15,1,DAT_200005ec ^ DAT_200005eb);
  FUN_0800b53c(0x3f,1,1);
  FUN_0800b53c(0x40,DAT_200005ee ^ DAT_200005ed,1);
  FUN_0800b53c(DAT_200005ef ^ DAT_200005f0,DAT_200005f2 ^ DAT_200005f1,DAT_200005f4 ^ DAT_200005f3);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((_DAT_20003e0c & 1) == 1);
  }
  FUN_0800b816(_DAT_200005f6);
  FUN_0800b816(0x704);
  FUN_0800b816(0x603);
  FUN_0800b816(0x603);
  FUN_0800b816(_DAT_200005f8 ^ _DAT_200005fa);
  FUN_0800b816(_DAT_200005fc);
  FUN_0800b816(_DAT_200005fe ^ _DAT_20000600);
  FUN_0800b816(_DAT_20000602);
  FUN_080026fc();
  FUN_08002880();
  FUN_0800b41a(0x40011000,0x800,1);
  FUN_0800b41a(_DAT_200006cc,_DAT_200006d0,DAT_200006d4);
  return;
}



//==== FUNC FUN_080026fc @ 080026fc ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080026fc(void)

{
  undefined2 local_1c;
  undefined2 local_1a;
  ushort local_18;
  ushort local_16;
  undefined4 local_14;
  ushort local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  FUN_0800b816(_DAT_20000604);
  FUN_0800b816(0x602);
  FUN_0800b816(_DAT_20000606);
  FUN_0800b816(0x600);
  FUN_0800b136(_DAT_20000608,_DAT_2000060c,_DAT_20000610,_DAT_20000614);
  FUN_0800b136(_DAT_20000618,_DAT_2000061c,_DAT_20000620,_DAT_20000624);
  FUN_0800b816(_DAT_20000628);
  FUN_0800b816(0x603);
  FUN_0800b816(0x603);
  FUN_0800b816(0x600);
  FUN_0800b136(_DAT_2000062c ^ _DAT_20000630,0x18,3,0x2000);
  FUN_0800b136(0x40010c00,0x48,3,0x1000);
  FUN_0800b430(_DAT_20000634,DAT_20000638);
  local_10 = _DAT_2000063a ^ _DAT_2000063c;
  local_1a = _DAT_20003e10;
  local_18 = _DAT_2000063e ^ _DAT_20000640;
  local_1c = 0;
  local_16 = _DAT_20000642 ^ _DAT_20000644;
  local_14 = 0;
  local_e = 1;
  local_c = 1;
  FUN_0800afaa(&local_1c);
  FUN_0800b816(0x702);
  return;
}



//==== FUNC FUN_08002880 @ 08002880 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08002880(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_0800b816(0x604);
  FUN_0800b136(0x40011000,_DAT_2000064c ^ _DAT_20000648,3,0x200);
  FUN_0800b136(0x40011000,0x10,3,0x800);
  FUN_0800b136(_DAT_20000650 ^ _DAT_20000654,_DAT_20000658 ^ _DAT_2000065c,
               _DAT_20000664 ^ _DAT_20000660,0x100);
  FUN_0800b136(_DAT_20000668 ^ _DAT_2000066c,0x10,_DAT_20000674 ^ _DAT_20000670,
               _DAT_20000678 ^ _DAT_2000067c);
  FUN_0800b136(_DAT_20000680,_DAT_20000684,_DAT_20000688,_DAT_2000068c);
  FUN_0800b136(0x40011000,0x10,3,_DAT_20000694 ^ _DAT_20000690);
  FUN_0800b41a(_DAT_20000698 ^ _DAT_2000069c,0x800,1);
  FUN_0800b41a(0x40011000,0x400,1);
  FUN_0800b136(0x40011000,0x48,3,8);
  iVar1 = FUN_0800b426(0x40011000,8);
  uVar2 = iVar1 - (uint)DAT_20003e12;
  if (uVar2 != 0) {
    uVar2 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08002a22 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((uVar2 ^ (DAT_20003e13 ^ DAT_200006a0)) & 1) * 4 + 0x200006d8))();
  return;
}



//==== FUNC FUN_08002ac2 @ 08002ac2 ====

void FUN_08002ac2(void)

{
  int iVar1;
  
  iVar1 = FUN_080001d4();
                    /* WARNING: Could not emulate address calculation at 0x08002ada */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(iVar1 == 0xa5) * 4 + 0x20000700))();
  return;
}



//==== FUNC FUN_08002c08 @ 08002c08 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08002c08(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_20003e18;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0;
  param_1[5] = uVar1;
  return;
}



//==== FUNC FUN_08002c48 @ 08002c48 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08002c48(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = (param_3 << (_DAT_20000754 & 0xff)) + uVar1;
  *(uint *)(param_1 + 0x10) = uVar2;
                    /* WARNING: Could not emulate address calculation at 0x08002c88 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(uVar2 < (uint)(param_3 << 3)) * 4 + 0x20000a08))(_DAT_20000750 & uVar1 >> 3,0)
  ;
  return;
}



//==== FUNC FUN_08002d2e @ 08002d2e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08002d2e(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_64;
  int local_60;
  int iStack_5c;
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
  
  iVar6 = *param_1;
  uVar3 = param_1[1];
  uVar7 = param_1[2];
  uVar5 = param_1[3];
  FUN_08003ca8(&local_64,param_2,_DAT_20000758);
  uVar1 = (uVar7 & uVar3) + iVar6 + (uVar5 & ~uVar3) + local_64 + 0xd76aa478;
  uVar1 = uVar3 + (uVar1 >> 0x19 | uVar1 * 0x80);
  uVar5 = ((_DAT_2000075c ^ _DAT_20000760 ^ uVar1) & uVar7 | uVar1 & uVar3) +
          _DAT_20000764 + local_60 + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x14 | uVar5 * 0x1000);
  uVar7 = (uVar5 & uVar1) + (uVar3 & ~uVar5) + uVar7 + iStack_5c + 0x242070db;
  uVar7 = (uVar7 >> ((_DAT_2000076c ^ _DAT_20000768) & 0xff) | uVar7 * 0x20000) + uVar5;
  uVar3 = ((_DAT_20000770 ^ _DAT_20000774 ^ uVar7) & uVar1 | uVar7 & uVar5) + uVar3 + local_58 +
          0xc1bdceee;
  uVar2 = uVar7 + (uVar3 >> 10 | uVar3 * 0x400000);
  uVar1 = uVar1 + local_54 + _DAT_2000077c + ((_DAT_20000778 ^ uVar2) & uVar5 | uVar2 & uVar7);
  uVar1 = (uVar1 << (_DAT_20000780 & 0xff) | uVar1 >> 0x19) + uVar2;
  uVar5 = uVar5 + local_50 + _DAT_20000784 + (uVar7 & ~uVar1) + (uVar1 & uVar2);
  uVar4 = (uVar5 << (_DAT_20000788 & 0xff) | uVar5 >> 0x14) + uVar1;
  uVar5 = (uVar4 & uVar1) + uVar7 + local_4c + (uVar2 & ~uVar4) + 0xa8304613;
  uVar3 = uVar4 + (uVar5 >> 0xf | uVar5 * 0x20000);
  uVar5 = ((_DAT_2000078c ^ uVar3) & uVar1 | uVar3 & uVar4) + uVar2 + local_48 + 0xfd469501;
  uVar5 = (uVar5 >> (_DAT_20000790 & 0xff) | uVar5 * 0x400000) + uVar3;
  uVar1 = (uVar4 & ~uVar5) + _DAT_20000794 + local_44 + uVar1 + (uVar5 & uVar3);
  uVar7 = uVar5 + (uVar1 >> 0x19 | uVar1 * 0x80);
  uVar1 = uVar4 + _DAT_2000079c + local_40 + ((_DAT_20000798 ^ uVar7) & uVar3 | uVar7 & uVar5);
  uVar2 = (uVar1 >> ((_DAT_200007a4 ^ _DAT_200007a0) & 0xff) | uVar1 * 0x1000) + uVar7;
  uVar1 = (uVar5 & ~uVar2) + _DAT_200007a8 + local_3c + uVar3 + (uVar2 & uVar7);
  uVar3 = uVar2 + (uVar1 >> 0xf | uVar1 * 0x20000);
  uVar1 = uVar5 + local_38 + ((uVar3 ^ _DAT_200007ac) & uVar7 | uVar3 & uVar2) + 0x895cd7be;
  uVar4 = (uVar1 >> (_DAT_200007b4 & 0xff) | uVar1 << (_DAT_200007b0 & 0xff)) + uVar3;
  uVar1 = ((_DAT_200007b8 ^ _DAT_200007bc ^ uVar4) & uVar2 | uVar4 & uVar3) +
          uVar7 + _DAT_200007c0 + local_34;
  uVar5 = (uVar1 << (_DAT_200007c4 & 0xff) | uVar1 >> 0x19) + uVar4;
  uVar1 = ((_DAT_200007c8 ^ _DAT_200007cc ^ uVar5) & uVar3 | uVar5 & uVar4) + uVar2 + local_30 +
          0xfd987193;
  uVar1 = uVar5 + (uVar1 >> 0x14 | uVar1 * 0x1000);
  uVar7 = ((_DAT_200007d0 ^ _DAT_200007d4 ^ uVar1) & uVar4 | uVar1 & uVar5) + local_2c + uVar3 +
          0xa679438e;
  uVar3 = uVar1 + (uVar7 >> 0xf | uVar7 * 0x20000);
  uVar7 = uVar4 + local_28 + (uVar3 & uVar1 | (_DAT_200007d8 ^ uVar3) & uVar5) + 0x49b40821;
  uVar4 = (uVar7 >> ((_DAT_200007e0 ^ _DAT_200007dc) & 0xff) | uVar7 * 0x400000) + uVar3;
  uVar5 = uVar5 + local_60 + (uVar3 & ~uVar1) + (uVar4 & uVar1) + 0xf61e2562;
  uVar5 = uVar4 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar1 = (uVar5 & uVar3) + (uVar4 & ~uVar3) + uVar1 + _DAT_200007e4 + local_4c;
  uVar7 = uVar5 + (uVar1 >> 0x17 | uVar1 * 0x200);
  uVar1 = uVar3 + (_DAT_200007ec ^ _DAT_200007f0) + local_38 +
          (uVar7 & uVar4 | uVar5 & (_DAT_200007e8 ^ uVar4));
  uVar2 = uVar7 + (uVar1 >> 0x12 | uVar1 * 0x4000);
  uVar1 = uVar4 + _DAT_200007f8 + local_64 + ((_DAT_200007f4 ^ uVar5) & uVar7 | uVar2 & uVar5);
  uVar1 = (uVar1 >> (_DAT_20000804 & 0xff) | uVar1 << ((_DAT_20000800 ^ _DAT_200007fc) & 0xff)) +
          uVar2;
  uVar5 = (uVar2 & ~uVar7) + uVar5 + (_DAT_2000080c ^ _DAT_20000808) + local_50 + (uVar1 & uVar7);
  uVar3 = (uVar5 << (_DAT_20000810 & 0xff) | uVar5 >> 0x1b) + uVar1;
  uVar5 = (uVar1 & ~uVar2) + uVar7 + (_DAT_20000818 ^ _DAT_20000814) + local_3c + (uVar3 & uVar2);
  uVar4 = (uVar5 << ((_DAT_2000081c ^ _DAT_20000820) & 0xff) | uVar5 >> (_DAT_20000824 & 0xff)) +
          uVar3;
  uVar5 = uVar2 + _DAT_20000828 + local_28 + (uVar3 & ~uVar1) + (uVar4 & uVar1);
  uVar5 = (uVar5 << ((_DAT_2000082c ^ _DAT_20000830) & 0xff) | uVar5 >> 0x12) + uVar4;
  uVar1 = (uVar5 & uVar3) + (uVar4 & ~uVar3) + uVar1 + local_54 + 0xe7d3fbc8;
  uVar2 = uVar5 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar1 = uVar3 + _DAT_20000834 + local_40 + (uVar5 & ~uVar4) + (uVar2 & uVar4);
  uVar7 = (uVar1 << ((_DAT_20000838 ^ _DAT_2000083c) & 0xff) | uVar1 >> 0x1b) + uVar2;
  uVar1 = uVar4 + _DAT_20000840 + local_2c + (uVar2 & ~uVar5) + (uVar7 & uVar5);
  uVar4 = (uVar1 << ((_DAT_20000844 ^ _DAT_20000848) & 0xff) | uVar1 >> 0x17) + uVar7;
  uVar1 = uVar5 + (_DAT_20000850 ^ _DAT_2000084c) + local_58 + (uVar7 & ~uVar2) + (uVar4 & uVar2);
  uVar3 = uVar4 + (uVar1 >> 0x12 | uVar1 * 0x4000);
  uVar1 = (uVar3 & uVar7) + (uVar4 & ~uVar7) + uVar2 + local_44 + 0x455a14ed;
  uVar1 = (uVar1 << (_DAT_20000854 & 0xff) | uVar1 >> 0xc) + uVar3;
  uVar5 = uVar7 + _DAT_2000085c + local_30 + ((_DAT_20000858 ^ uVar4) & uVar3 | uVar1 & uVar4);
  uVar5 = (uVar5 << (_DAT_20000860 & 0xff) | uVar5 >> 0x1b) + uVar1;
  uVar7 = uVar4 + iStack_5c + (uVar1 & ~uVar3) + (uVar5 & uVar3) + 0xfcefa3f8;
  uVar7 = (uVar7 >> ((_DAT_20000864 ^ _DAT_20000868) & 0xff) | uVar7 * 0x200) + uVar5;
  uVar3 = (uVar7 & uVar1) + (uVar5 & ~uVar1) + uVar3 + local_48 + 0x676f02d9;
  uVar2 = (uVar3 >> ((_DAT_20000870 ^ _DAT_20000874) & 0xff) | uVar3 << (_DAT_2000086c & 0xff)) +
          uVar7;
  uVar1 = uVar1 + local_34 + ((_DAT_2000087c ^ _DAT_20000878 ^ uVar5) & uVar7 | uVar2 & uVar5) +
          0x8d2a4c8a;
  uVar1 = (uVar1 >> (_DAT_20000880 & 0xff) | uVar1 * 0x100000) + uVar2;
  uVar5 = (uVar5 + local_50 + (uVar1 ^ uVar2 ^ uVar7)) - 0x5c6be;
  uVar3 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar5 = (uVar1 ^ uVar2 ^ uVar3) + uVar7 + local_44 + 0x8771f681;
  uVar7 = uVar3 + (uVar5 >> 0x15 | uVar5 * 0x800);
  uVar5 = (uVar3 ^ uVar1 ^ uVar7) + (_DAT_20000884 ^ _DAT_20000888) + local_38 + uVar2;
  uVar5 = (uVar5 >> ((_DAT_20000890 ^ _DAT_2000088c) & 0xff) | uVar5 * 0x10000) + uVar7;
  uVar1 = uVar1 + local_2c + (uVar7 ^ uVar3 ^ uVar5) + 0xfde5380c;
  uVar1 = (uVar1 >> (_DAT_20000894 & 0xff) | uVar1 * 0x800000) + uVar5;
  uVar3 = uVar3 + local_60 + (uVar5 ^ uVar7 ^ uVar1) + 0xa4beea44;
  uVar3 = uVar1 + (uVar3 >> 0x1c | uVar3 * 0x10);
  uVar7 = (uVar1 ^ uVar5 ^ uVar3) + (_DAT_20000898 ^ _DAT_2000089c) + local_54 + uVar7;
  uVar2 = (uVar7 << (_DAT_200008a0 & 0xff) | uVar7 >> 0x15) + uVar3;
  uVar5 = uVar5 + (_DAT_200008a8 ^ _DAT_200008a4) + local_48 + (uVar3 ^ uVar1 ^ uVar2);
  uVar5 = (uVar5 << ((_DAT_200008b0 ^ _DAT_200008ac) & 0xff) | uVar5 >> 0x10) + uVar2;
  uVar1 = uVar1 + local_3c + (uVar2 ^ uVar3 ^ uVar5) + 0xbebfbc70;
  uVar4 = uVar5 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar1 = (uVar5 ^ uVar2 ^ uVar4) + uVar3 + local_30 + 0x289b7ec6;
  uVar7 = (uVar1 >> ((_DAT_200008b4 ^ _DAT_200008b8) & 0xff) | uVar1 * 0x10) + uVar4;
  uVar1 = (uVar4 ^ uVar5 ^ uVar7) + uVar2 + local_64 + 0xeaa127fa;
  uVar1 = (uVar1 >> (_DAT_200008c4 & 0xff) | uVar1 << ((_DAT_200008bc ^ _DAT_200008c0) & 0xff)) +
          uVar7;
  uVar5 = uVar5 + local_58 + (uVar7 ^ uVar4 ^ uVar1) + 0xd4ef3085;
  uVar5 = uVar1 + (uVar5 >> 0x10 | uVar5 * 0x10000);
  uVar3 = _DAT_200008c8 + local_4c + uVar4 + (uVar1 ^ uVar7 ^ uVar5);
  uVar3 = uVar5 + (uVar3 >> 9 | uVar3 * 0x800000);
  uVar7 = uVar7 + local_40 + _DAT_200008cc + (uVar5 ^ uVar1 ^ uVar3);
  uVar4 = (uVar7 >> ((_DAT_200008d4 ^ _DAT_200008d0) & 0xff) | uVar7 * 0x10) + uVar3;
  uVar1 = uVar1 + local_34 + (uVar3 ^ uVar5 ^ uVar4) + 0xe6db99e5;
  uVar7 = uVar4 + (uVar1 >> 0x15 | uVar1 * 0x800);
  uVar1 = (uVar4 ^ uVar3 ^ uVar7) + uVar5 + _DAT_200008d8 + local_28;
  uVar5 = (uVar1 >> (_DAT_200008e4 & 0xff) | uVar1 << ((_DAT_200008e0 ^ _DAT_200008dc) & 0xff)) +
          uVar7;
  uVar1 = (uVar7 ^ uVar4 ^ uVar5) + uVar3 + iStack_5c + 0xc4ac5665;
  uVar2 = (uVar1 >> ((_DAT_200008e8 ^ _DAT_200008ec) & 0xff) | uVar1 * 0x800000) + uVar5;
  uVar1 = ((uVar2 | ~uVar7) ^ uVar5) + _DAT_200008f0 + local_64 + uVar4;
  uVar1 = uVar2 + (uVar1 >> 0x1a | uVar1 * 0x40);
  uVar7 = uVar7 + local_48 + _DAT_200008f4 + ((uVar1 | ~uVar5) ^ uVar2);
  uVar3 = (uVar7 << (_DAT_200008f8 & 0xff) | uVar7 >> 0x16) + uVar1;
  uVar5 = uVar5 + local_2c + _DAT_200008fc + ((uVar3 | ~uVar2) ^ uVar1);
  uVar7 = uVar3 + (uVar5 >> 0x11 | uVar5 * 0x8000);
  uVar5 = ((uVar7 | ~uVar1) ^ uVar3) + uVar2 + local_50 + 0xfc93a039;
  uVar5 = (uVar5 << (_DAT_20000900 & 0xff) | uVar5 >> 0xb) + uVar7;
  uVar1 = uVar1 + local_34 + ((_DAT_20000904 ^ uVar3 | uVar5) ^ uVar7) + 0x655b59c3;
  uVar1 = uVar5 + (uVar1 >> 0x1a | uVar1 * 0x40);
  uVar3 = uVar3 + _DAT_20000908 + local_58 + ((uVar1 | ~uVar7) ^ uVar5);
  uVar3 = (uVar3 >> (_DAT_20000914 & 0xff) | uVar3 << ((_DAT_20000910 ^ _DAT_2000090c) & 0xff)) +
          uVar1;
  uVar7 = ((uVar5 ^ _DAT_20000918 | uVar3) ^ uVar1) + local_3c + _DAT_2000091c + uVar7;
  uVar7 = (uVar7 << ((_DAT_20000924 ^ _DAT_20000920) & 0xff) | uVar7 >> 0x11) + uVar3;
  uVar5 = ((uVar1 ^ _DAT_20000928 | uVar7) ^ uVar3) +
          (_DAT_20000930 ^ _DAT_2000092c) + local_60 + uVar5;
  uVar5 = (uVar5 >> (_DAT_20000934 & 0xff) | uVar5 * 0x200000) + uVar7;
  uVar1 = uVar1 + _DAT_20000938 + local_44 + ((uVar5 | ~uVar3) ^ uVar7);
  uVar2 = uVar5 + (uVar1 >> 0x1a | uVar1 * 0x40);
  uVar1 = ((_DAT_2000093c ^ _DAT_20000940 ^ uVar7 | uVar2) ^ uVar5) +
          uVar3 + _DAT_20000944 + local_28;
  uVar4 = (uVar1 >> (_DAT_2000094c & 0xff) | uVar1 << (_DAT_20000948 & 0xff)) + uVar2;
  uVar1 = ((uVar5 ^ _DAT_20000950 | uVar4) ^ uVar2) + uVar7 + local_4c + _DAT_20000954;
  uVar3 = uVar4 + (uVar1 >> 0x11 | uVar1 * 0x8000);
  uVar1 = ((uVar2 ^ _DAT_20000958 | uVar3) ^ uVar4) + local_30 + uVar5 + 0x4e0811a1;
  uVar1 = uVar3 + (uVar1 >> 0xb | uVar1 * 0x200000);
  uVar5 = ((uVar1 | ~uVar4) ^ uVar3) + local_54 + uVar2 + 0xf7537e82;
  uVar7 = (uVar5 << (_DAT_2000095c & 0xff) | uVar5 >> 0x1a) + uVar1;
  uVar5 = ((_DAT_20000960 ^ _DAT_20000964 ^ uVar3 | uVar7) ^ uVar1) +
          uVar4 + (_DAT_2000096c ^ _DAT_20000968) + local_38;
  uVar2 = (uVar5 << (_DAT_20000970 & 0xff) | uVar5 >> 0x16) + uVar7;
  uVar5 = uVar3 + iStack_5c + ((_DAT_20000974 ^ _DAT_20000978 ^ uVar1 | uVar2) ^ uVar7) + 0x2ad7d2bb
  ;
  uVar4 = uVar2 + (uVar5 >> 0x11 | uVar5 * 0x8000);
  uVar5 = uVar1 + (_DAT_20000988 ^ _DAT_20000984) + local_40 +
          ((_DAT_2000097c ^ _DAT_20000980 ^ uVar7 | uVar4) ^ uVar2);
  uVar3 = _DAT_2000098c ^ _DAT_20000990;
  uVar1 = _DAT_20000994 & 0xff;
  *param_1 = uVar7 + *param_1;
  param_1[1] = (uVar5 >> uVar1 | uVar5 << (uVar3 & 0xff)) + uVar4 + param_1[1];
  param_1[2] = uVar4 + param_1[2];
  param_1[3] = uVar2 + param_1[3];
  FUN_08005678(&local_64,_DAT_2000099c ^ _DAT_20000998,_DAT_200009a0 ^ _DAT_200009a4);
  return;
}



//==== FUNC FUN_08003aee @ 08003aee ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08003aee(undefined4 param_1,int param_2)

{
  FUN_08003bd0(&stack0xffffffe8 + _DAT_200009a8 * -8,param_2 + 0x10,_DAT_200009b0 ^ _DAT_200009ac);
                    /* WARNING: Could not emulate address calculation at 0x08003b6c */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((*(uint *)(param_2 + 0x10) >> ((_DAT_200009b4 ^ _DAT_200009b8) & 0xff) &
                      _DAT_200009bc) < _DAT_200009c0) * 4 + 0x20000a20))();
  return;
}



//==== FUNC FUN_08003bd0 @ 08003bd0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08003bd0(undefined4 param_1,undefined4 param_2,uint param_3)

{
                    /* WARNING: Could not emulate address calculation at 0x08003c06 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((_DAT_200009d4 ^ _DAT_200009d0) < param_3) * 4 + 0x20000a28))();
  return;
}



//==== FUNC FUN_08003ca8 @ 08003ca8 ====

void FUN_08003ca8(undefined4 param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not emulate address calculation at 0x08003cc6 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_3 != 0) * 4 + 0x20000a30))();
  return;
}



//==== FUNC FUN_08003d20 @ 08003d20 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08003d20(undefined4 param_1,uint param_2)

{
                    /* WARNING: Could not emulate address calculation at 0x08003d54 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((_DAT_20000a3c ^ _DAT_20000a38) < param_2) * 4 + 0x20000bc0))();
  return;
}



//==== FUNC FUN_08003e68 @ 08003e68 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08003e68(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
                    /* WARNING: Could not emulate address calculation at 0x08003e90 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_4 != 0) * 4 + 0x20000be8))(param_1,param_2 - _DAT_20000a54);
  return;
}



//==== FUNC FUN_08003f44 @ 08003f44 ====

void FUN_08003f44(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    param_2 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08003f54 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 * 4 + 0x20000c10))();
  return;
}



//==== FUNC FUN_08003f98 @ 08003f98 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08003f98(void)

{
  int in_r3;
  
  in_r3 = _DAT_20003e34 - in_r3;
  if (in_r3 != 0) {
    in_r3 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08003fc2 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_r3 * 4 + 0x20000c20))();
  return;
}



//==== FUNC FUN_08004084 @ 08004084 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08004084(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined auStack_48 [4];
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_44 = param_1;
  FUN_08003f44(auStack_48 + _DAT_20000a74 * -0x208,(_DAT_20000a78 ^ _DAT_20000a7c) * param_4);
  uStack_38 = param_2;
  iVar1 = FUN_0800429c(param_2,param_4);
  iStack_40 = param_4;
  uStack_34 = param_3;
  FUN_0800429c(param_3,param_4);
  iStack_3c = iVar1;
                    /* WARNING: Could not emulate address calculation at 0x08004100 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(iVar1 != 0) * 4 + 0x20000c40))();
  return;
}



//==== FUNC FUN_0800429c @ 0800429c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800429c(undefined4 param_1,int param_2)

{
  param_2 = _DAT_20003e3c - param_2;
  if (param_2 != 0) {
    param_2 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x080042b8 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 * 4 + 0x20000c68))();
  return;
}



//==== FUNC FUN_08004340 @ 08004340 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08004340(uint param_1,uint param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = _DAT_20000aa0 & param_1 >> 0x10;
  uVar2 = param_2 & (_DAT_20000aa4 ^ _DAT_20000aa8) & 0xffff;
  uVar1 = (param_2 >> 0x10) * (param_1 & 0xffff);
  uVar3 = uVar4 * uVar2;
  *param_4 = uVar2 * (param_1 & 0xffff);
  *param_3 = uVar4 * (param_2 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x080043a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)CARRY4(uVar1,uVar3) * 4 + 0x20000c80))(uVar1 + uVar3);
  return;
}



//==== FUNC FUN_08004414 @ 08004414 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08004414(undefined4 param_1,undefined4 param_2,int param_3)

{
  param_3 = (_DAT_20000abc ^ _DAT_20000ab8) - param_3;
  if (param_3 != 0) {
    param_3 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08004440 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 * 4 + 0x20000c90))();
  return;
}



//==== FUNC FUN_08004476 @ 08004476 ====

void FUN_08004476(undefined4 param_1,undefined4 param_2,uint param_3)

{
                    /* WARNING: Could not emulate address calculation at 0x08004498 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_3 < 0x20) * 4 + 0x20000ca0))();
  return;
}



//==== FUNC FUN_08004550 @ 08004550 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08004550(undefined4 param_1,undefined4 param_2,uint param_3)

{
                    /* WARNING: Could not emulate address calculation at 0x08004584 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_3 < (_DAT_20000acc ^ _DAT_20000ad0)) * 4 + 0x20000cc0))();
  return;
}



//==== FUNC FUN_08004664 @ 08004664 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08004664(void)

{
  int iVar1;
  undefined4 param_5;
  undefined4 param_6;
  
  iVar1 = FUN_0800429c(param_5,param_6);
                    /* WARNING: Could not emulate address calculation at 0x080046be */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(iVar1 == _DAT_20003e50) * 4 + 0x20000ce0))();
  return;
}



//==== FUNC FUN_08004d10 @ 08004d10 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08004d10(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x08004d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_20000d74)(param_1,0,_DAT_20000b60 ^ _DAT_20000b5c,_DAT_20000b58 ^ _DAT_20000b54);
  return;
}



//==== FUNC FUN_08004da8 @ 08004da8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08004da8(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_3 != 0) {
    param_3 = 1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_3 * 4 + 0x20000d80);
                    /* WARNING: Could not emulate address calculation at 0x08004df0 */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(_DAT_20000b68,UNRECOVERED_JUMPTABLE,_DAT_20000b6c);
  return;
}



//==== FUNC FUN_08004f20 @ 08004f20 ====

void FUN_08004f20(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    param_3 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08004f34 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 * 4 + 0x20000da0))();
  return;
}



//==== FUNC FUN_08004f9a @ 08004f9a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08004f9a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  int aiStack_230 [2];
  undefined auStack_228 [520];
  
  iVar2 = _DAT_20000b80;
  iVar1 = _DAT_20000b80 * -0x208;
  FUN_08004084(auStack_228 + iVar1,param_2,param_3,param_5);
  aiStack_230[iVar2 * -0x82 + 1] = param_5;
  aiStack_230[iVar2 * -0x82] = param_4;
  FUN_08004664(auStack_228,param_1,auStack_228 + iVar1,param_5 << 1);
  return;
}



//==== FUNC FUN_08004fec @ 08004fec ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08004fec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined4 auStack_148 [2];
  undefined auStack_140 [4];
  undefined4 local_13c;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined *local_12c;
  undefined4 local_128 [59];
  undefined auStack_3c [24];
  
  iVar1 = -((_DAT_20000b84 ^ _DAT_20000b88) * 0x30c + 7 & 0xfffffff8);
  puVar2 = auStack_140 + iVar1;
  local_13c = param_1;
  local_130 = param_4;
  FUN_08004414(puVar2,param_2,param_6);
  *(undefined4 *)((int)auStack_148 + iVar1) = param_6;
  FUN_08004f9a(auStack_3c + iVar1,puVar2,param_2,param_5);
  local_12c = puVar2;
  *(undefined4 *)((int)auStack_148 + iVar1) = param_6;
  FUN_08004f9a(&stack0x000000c8 + iVar1,auStack_3c + iVar1,param_2,param_5);
  FUN_08003f44(local_128,param_6);
  local_128[0] = 1;
  local_134 = param_3;
  local_138 = FUN_0800429c(param_3,local_130);
                    /* WARNING: Could not emulate address calculation at 0x080050c8 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((int)(_DAT_20000b94 ^ _DAT_20000b98) <=
                     (int)(local_138 - (_DAT_20000b90 ^ _DAT_20000b8c))) * 4 + 0x20000dc0))();
  return;
}



//==== FUNC FUN_0800529c @ 0800529c ====

void FUN_0800529c(int *param_1,int param_2)

{
  *param_1 = param_2;
                    /* WARNING: Could not emulate address calculation at 0x080052b2 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_2 == 5) * 4 + 0x20000e54))();
  return;
}



//==== FUNC FUN_08005308 @ 08005308 ====

void FUN_08005308(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x10;
  if (*param_1 == 3) {
    uVar1 = 0x14;
  }
  *param_3 = uVar1;
                    /* WARNING: Could not emulate address calculation at 0x0800532e */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(*param_1 == 5) * 4 + 0x20000e64))();
  return;
}



//==== FUNC FUN_0800535a @ 0800535a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800535a(undefined4 param_1,int param_2)

{
                    /* WARNING: Could not emulate address calculation at 0x08005378 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20000e0c == param_2) * 4 + 0x20000e6c))();
  return;
}



//==== FUNC FUN_080053cc @ 080053cc ====

void FUN_080053cc(undefined4 param_1,int param_2)

{
                    /* WARNING: Could not emulate address calculation at 0x080053dc */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_2 == 3) * 4 + 0x20000e74))();
  return;
}



//==== FUNC FUN_080053ec @ 080053ec ====

void FUN_080053ec(int *param_1)

{
                    /* WARNING: Could not emulate address calculation at 0x08005400 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(*param_1 == 3) * 4 + 0x20000e7c))();
  return;
}



//==== FUNC sub_08005410 @ 08005410 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08005410(undefined4 param_1,undefined4 param_2,uint param_3)

{
                    /* WARNING: Could not emulate address calculation at 0x0800547a */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(0x100 < param_3) * 4 + 0x20000e84))();
  return;
}



//==== FUNC FUN_08005678 @ 08005678 ====

void FUN_08005678(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    param_3 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x0800568a */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 * 4 + 0x20000ee8))();
  return;
}



//==== FUNC FUN_080056cc @ 080056cc ====

void FUN_080056cc(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    param_3 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x080056de */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 * 4 + 0x20000ef8))();
  return;
}



//==== FUNC FUN_08005710 @ 08005710 ====

void FUN_08005710(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    param_3 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08005726 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 * 4 + 0x20000f08))();
  return;
}



//==== FUNC FUN_080057d8 @ 080057d8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080057d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_238 [4];
  undefined4 local_234;
  undefined4 uStack_230;
  undefined auStack_22c [260];
  undefined auStack_128 [260];
  
  uVar1 = _DAT_20000f28 ^ _DAT_20000f2c;
  iVar3 = _DAT_20000f30 * 0x104;
  local_234 = param_2;
  uStack_230 = param_1;
  FUN_08003d20(auStack_128,0x41);
  FUN_08003d20(auStack_22c,0x41,param_5 + 4,0x100);
  FUN_08003d20(auStack_238 + (-(iVar3 + 7U & 0xfffffff8) - (uVar1 * 0x104 + 7 & 0xfffffff8)),0x41,
               param_5 + 0x104,_DAT_20000f38 ^ _DAT_20000f34);
  uVar2 = FUN_0800429c(auStack_22c,0x41);
  FUN_0800429c(auStack_238 + (-(iVar3 + 7U & 0xfffffff8) - (uVar1 * 0x104 + 7 & 0xfffffff8)),0x41);
  iVar3 = FUN_08004f20(auStack_128,auStack_22c,uVar2);
                    /* WARNING: Could not emulate address calculation at 0x080058ba */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((int)(_DAT_20000f3c ^ _DAT_20000f40) <= iVar3) * 4 + 0x20000f94))();
  return;
}



//==== FUNC sub_08005968 @ 08005968 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_08005968(void)

{
  uint in_r3;
  int *param_5;
  
                    /* WARNING: Could not emulate address calculation at 0x080059b8 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((uint)(_DAT_20000f60 + *param_5) >> 3 < in_r3) * 4 + 0x20000f9c))();
  return;
}



//==== FUNC FUN_08005b68 @ 08005b68 ====

void FUN_08005b68(int param_1)

{
  *(undefined *)(param_1 + 0x2026) = 0;
  *(undefined2 *)(param_1 + 0x202c) = 0x100;
  *(undefined4 *)(param_1 + 0x2028) = 0;
  *(undefined4 *)(param_1 + 0x2030) = 0;
  *(undefined4 *)(param_1 + 0x2034) = 0;
  *(undefined2 *)(param_1 + 0x2038) = 0;
  *(undefined *)(param_1 + 0x203a) = 0;
  return;
}



//==== FUNC FUN_08005b8e @ 08005b8e ====

void FUN_08005b8e(void)

{
  return;
}



//==== FUNC sub_08006100 @ 08006100 ====

void sub_08006100(void)

{
  int iVar1;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  
  FUN_08000632();
  FUN_08000674(unaff_r10 + 4);
  *unaff_r8 = *(int *)(unaff_r7 + -0x24) + -6;
  iVar1 = FUN_0800721c();
                    /* WARNING: Could not recover jumptable at 0x0800614a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 * 4 + 0x200018a0))();
  return;
}



//==== FUNC FUN_08006326 @ 08006326 ====

void FUN_08006326(void)

{
  return;
}



//==== FUNC FUN_08006e8c @ 08006e8c ====

void FUN_08006e8c(undefined4 param_1,byte *param_2)

{
                    /* WARNING: Could not emulate address calculation at 0x08006ea6 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(*param_2 < 3) * 4 + 0x200019b0))();
  return;
}



//==== FUNC FUN_08007192 @ 08007192 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007192(void)

{
  DataMemoryBarrier(0x1f);
                    /* WARNING: Could not emulate address calculation at 0x080071b4 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20003ea0 == 0) * 4 + 0x20001a10))();
  return;
}



//==== FUNC FUN_0800721c @ 0800721c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800721c(void)

{
  DataMemoryBarrier(0x1f);
                    /* WARNING: Could not emulate address calculation at 0x08007242 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20003ea4 == 0) * 4 + 0x20001a18))();
  return;
}



//==== FUNC FUN_080072fe @ 080072fe ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080072fe(undefined4 param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not emulate address calculation at 0x0800732a */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(0x1013 < (uint)(_DAT_20001480 + param_3)) * 4 + 0x20001a28))();
  return;
}



//==== FUNC FUN_080073e0 @ 080073e0 ====

void FUN_080073e0(undefined4 param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not emulate address calculation at 0x080073fa */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(param_3 != 0) * 4 + 0x20001a30))();
  return;
}



//==== FUNC FUN_08007430 @ 08007430 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007430(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = (byte)_DAT_20001850 ^ (byte)_DAT_20001854;
  *param_1 = bVar1 + (char)_DAT_20003ee0 ^ *param_2;
  param_1[1] = ((byte)_DAT_20001494 ^ (byte)_DAT_20001490) + bVar1 ^ param_2[1];
  param_1[2] = ((byte)_DAT_2000149c ^ (byte)_DAT_20001498) + bVar1 ^ param_2[2];
  param_1[3] = bVar1 + 3 ^ param_2[3];
  param_1[4] = bVar1 + 4 ^ param_2[4];
  param_1[5] = ((byte)_DAT_200014a4 ^ (byte)_DAT_200014a0) + bVar1 ^ param_2[5];
  param_1[6] = ((byte)_DAT_200014ac ^ (byte)_DAT_200014a8) + bVar1 ^ param_2[6];
  param_1[7] = bVar1 + 7 ^ param_2[7];
  param_1[8] = ((byte)_DAT_200014b4 ^ (byte)_DAT_200014b0) + bVar1 ^ param_2[8];
  param_1[9] = ((byte)_DAT_200014bc ^ (byte)_DAT_200014b8) + bVar1 ^ param_2[9];
  param_1[10] = ((byte)_DAT_200014c4 ^ (byte)_DAT_200014c0) + bVar1 ^ param_2[10];
  param_1[0xb] = (char)_DAT_200014c8 + bVar1 ^ param_2[0xb];
  param_1[0xc] = bVar1 + 0xc ^ param_2[0xc];
  param_1[0xd] = ((byte)_DAT_200014d0 ^ (byte)_DAT_200014cc) + bVar1 ^ param_2[0xd];
  param_1[0xe] = bVar1 + 0xe ^ param_2[0xe];
  param_1[0xf] = bVar1 + 0xf ^ param_2[0xf];
  param_1[0x10] = param_2[0x10] ^ bVar1 + 0x10;
  param_1[0x11] = 0;
  return;
}



//==== FUNC sub_080075dc @ 080075dc ====

void sub_080075dc(int param_1,int param_2,char param_3)

{
  *(byte *)(param_1 + 0xe) = param_3 + 0xeU ^ *(byte *)(param_2 + 0xe);
  *(byte *)(param_1 + 0xf) = param_3 + 0xfU ^ *(byte *)(param_2 + 0xf);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_2 + 0x10) ^ param_3 + 0x10U;
  *(undefined *)(param_1 + 0x11) = 0;
  return;
}



//==== FUNC FUN_08007640 @ 08007640 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007640(void)

{
                    /* WARNING: Could not emulate address calculation at 0x08007666 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((_DAT_200014d4 ^ _DAT_200014d8) < 0x11) * 4 + 0x20001a40))();
  return;
}



//==== FUNC FUN_080076a0 @ 080076a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080076a0(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = (byte)_DAT_20001850 ^ (byte)_DAT_20001854;
  *param_1 = bVar1 + (char)_DAT_20003ee4 ^ *param_2;
  param_1[1] = ((byte)_DAT_200014e4 ^ (byte)_DAT_200014e0) + bVar1 ^ param_2[1];
  param_1[2] = (char)_DAT_200014e8 + bVar1 ^ param_2[2];
  param_1[3] = ((byte)_DAT_200014f0 ^ (byte)_DAT_200014ec) + bVar1 ^ param_2[3];
  param_1[4] = bVar1 + 4 ^ param_2[4];
  param_1[5] = bVar1 + 5 ^ param_2[5];
  param_1[6] = bVar1 + 6 ^ param_2[6];
  param_1[7] = bVar1 + 7 ^ param_2[7];
  param_1[8] = bVar1 + 8 ^ param_2[8];
  param_1[9] = (char)_DAT_200014f4 + bVar1 ^ param_2[9];
  param_1[10] = ((byte)_DAT_200014fc ^ (byte)_DAT_200014f8) + bVar1 ^ param_2[10];
  param_1[0xb] = param_2[0xb] ^ bVar1 + 0xb;
  param_1[0xc] = 0;
  return;
}



//==== FUNC FUN_080077f8 @ 080077f8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080077f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x08007820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_20001a54)();
  return;
}



//==== FUNC FUN_08007844 @ 08007844 ====

void FUN_08007844(void)

{
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC FUN_08007870 @ 08007870 ====

void FUN_08007870(int param_1)

{
                    /* WARNING: Could not emulate address calculation at 0x08007890 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(*(char *)(param_1 + 0x202e) == '\x02') * 4 + 0x20001a58))();
  return;
}



//==== FUNC FUN_08007d32 @ 08007d32 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08007d32(void)

{
  DataMemoryBarrier(0x1f);
                    /* WARNING: Could not emulate address calculation at 0x08007d56 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20003eac == 0) * 4 + 0x20001ae8))();
  return;
}



//==== FUNC FUN_08007f56 @ 08007f56 ====

void FUN_08007f56(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x08007f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)*(byte *)(param_1 + 0x203a) * 4 + 0x20001b30))();
  return;
}



//==== FUNC FUN_08008074 @ 08008074 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08008074(undefined4 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       *(code **)((uint)((_DAT_4002201c & _DAT_200015a0) == _DAT_20003f04) * 4 + 0x20001b50);
                    /* WARNING: Could not emulate address calculation at 0x080080a8 */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,UNRECOVERED_JUMPTABLE,0x2026);
  return;
}



//==== FUNC FUN_080083dc @ 080083dc ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080083dc(void)

{
  DataMemoryBarrier(0x1f);
                    /* WARNING: Could not emulate address calculation at 0x0800840e */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20003eb0 == _DAT_20003f0c) * 4 + 0x20001b98))();
  return;
}



//==== FUNC FUN_08009a60 @ 08009a60 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08009a60(void)

{
  FUN_0800b816(0x600);
  FUN_0800eb60(_DAT_20001778,DAT_2000177c);
                    /* WARNING: Could not emulate address calculation at 0x08009ac0 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)((*_DAT_20001780 & 2) == (_DAT_20001784 ^ _DAT_20001788)) * 4 + 0x20001bf8))();
  return;
}



//==== FUNC FUN_08009ee6 @ 08009ee6 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08009ee6(undefined4 param_1)

{
  int iVar1;
  
  FUN_08009a60(param_1);
  FUN_08008074(param_1);
  iVar1 = FUN_0800131a();
  if (iVar1 != 0) {
    iVar1 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x08009f3a */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 * 4 + 0x20001c50))();
  return;
}



//==== FUNC FUN_0800a03c @ 0800a03c ====

void FUN_0800a03c(undefined4 param_1,byte param_2)

{
  uint uVar1;
  
  FUN_08001ace(DAT_20001840 ^ DAT_20001841);
  FUN_08000b9a(2);
  FUN_08000b9a(0);
  uVar1 = (uint)param_2;
  if (uVar1 != 0) {
    uVar1 = 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x0800a07c */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar1 * 4 + 0x20001c78))();
  return;
}



//==== FUNC FUN_0800a148 @ 0800a148 ====

void FUN_0800a148(undefined4 param_1,undefined param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0800a03c(param_1,param_2);
}



//==== FUNC FUN_0800a14e @ 0800a14e ====

void FUN_0800a14e(undefined4 param_1,undefined param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0800a03c(param_1,param_2);
}



//==== FUNC FUN_0800a154 @ 0800a154 ====

void FUN_0800a154(undefined4 param_1,undefined param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0800a03c(param_1,param_2);
}



//==== FUNC FUN_0800a15a @ 0800a15a ====

void FUN_0800a15a(undefined4 param_1,undefined param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_0800a03c(param_1,param_2);
}



//==== FUNC FUN_0800a160 @ 0800a160 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800a160(void)

{
  DataMemoryBarrier(0x1f);
                    /* WARNING: Could not emulate address calculation at 0x0800a1a0 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(_DAT_20003f24 == (_DAT_20001ca8 ^ _DAT_20001cac)) * 4 + 0x20001d34))();
  return;
}



//==== FUNC FUN_0800a636 @ 0800a636 ====

/* WARNING: Removing unreachable block (ram,0x0800a660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800a636(void)

{
  bool bVar1;
  
  bVar1 = false;
  while (!bVar1) {
    (*_DAT_0800cdc0)();
    bVar1 = true;
  }
  return;
}



//==== FUNC sub_0800a6c0 @ 0800a6c0 ====

void sub_0800a6c0(void)

{
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_c = &DAT_0800cdd0;
  for (local_10 = (undefined4 *)0x20000000; local_10 != (undefined4 *)&DAT_20001d90;
      local_10 = local_10 + 1) {
    *local_10 = *local_c;
    local_c = local_c + 1;
  }
  for (local_10 = (undefined4 *)&DAT_20001d90; local_10 != (undefined4 *)&DAT_20003f30;
      local_10 = local_10 + 1) {
    *local_10 = 0;
  }
  FUN_0800ad08();
  FUN_0800a636();
  FUN_0800eb6e();
  return;
}



//==== FUNC thunk_FUN_0800a742 @ 0800a740 ====

void thunk_FUN_0800a742(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC FUN_0800a742 @ 0800a742 ====

void FUN_0800a742(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC FUN_0800a744 @ 0800a744 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800a744(void)

{
  if (_DAT_40022010 * 0x1000000 < 0) {
    _DAT_40022004 = 0xcdef89ab;
  }
  if ((0x200 < _DAT_1ffff7e0) && (_DAT_40022050 * 0x1000000 < 0)) {
    _DAT_40022044 = 0xcdef89ab;
  }
  return;
}



//==== FUNC FUN_0800a7ba @ 0800a7ba ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800a7ba(void)

{
  _DAT_40022010 = _DAT_40022010 | 0x80;
  if (0x200 < _DAT_1ffff7e0) {
    _DAT_40022050 = _DAT_40022050 | 0x80;
  }
  return;
}



//==== FUNC FUN_0800a7f0 @ 0800a7f0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

char FUN_0800a7f0(uint param_1)

{
  char cStack_d;
  
  if (_DAT_1ffff7e0 < 0x201) {
    cStack_d = FUN_0800a948(0x1f0000);
    if (cStack_d == '\0') {
      _DAT_40022010 = _DAT_40022010 | 0x42;
      _DAT_40022014 = param_1;
      cStack_d = FUN_0800a948(0x1f0000);
      _DAT_40022010 = _DAT_40022010 & 0xfffffffd;
    }
  }
  else if (param_1 < 0x807ffff) {
    cStack_d = FUN_0800a948(0x1f0000);
    if (cStack_d == '\0') {
      _DAT_40022010 = _DAT_40022010 | 0x42;
      _DAT_40022014 = param_1;
      cStack_d = FUN_0800a948(0x1f0000);
      _DAT_40022010 = _DAT_40022010 & 0xfffffffd;
    }
  }
  else {
    cStack_d = FUN_0800a9a6(0x1f0000);
    if (cStack_d == '\0') {
      if (_DAT_4002201c * 0x40000000 < 0) {
        _DAT_40022014 = param_1;
      }
      _DAT_40022050 = _DAT_40022050 | 0x42;
      _DAT_40022054 = param_1;
      cStack_d = FUN_0800a9a6(0x1f0000);
      _DAT_40022050 = _DAT_40022050 & 0xfffffffd;
    }
  }
  return cStack_d;
}



//==== FUNC FUN_0800a948 @ 0800a948 ====

char FUN_0800a948(uint param_1)

{
  uint local_14;
  char cStack_d;
  uint local_c;
  
  local_c = param_1;
  do {
    cStack_d = FUN_0800ab36();
    local_c = local_c - 1;
    local_14 = 0;
    if ((cStack_d == '\x01') && (local_14 = local_c, local_c != 0)) {
      local_14 = 1;
    }
  } while ((local_14 & 1) != 0);
  if (cStack_d == '\x01') {
    cStack_d = '\x04';
  }
  return cStack_d;
}



//==== FUNC FUN_0800a9a6 @ 0800a9a6 ====

char FUN_0800a9a6(uint param_1)

{
  uint local_14;
  char cStack_d;
  uint local_c;
  
  local_c = param_1;
  do {
    cStack_d = FUN_0800ab96();
    local_c = local_c - 1;
    local_14 = 0;
    if ((cStack_d == '\x01') && (local_14 = local_c, local_c != 0)) {
      local_14 = 1;
    }
  } while ((local_14 & 1) != 0);
  if (cStack_d == '\x01') {
    cStack_d = '\x04';
  }
  return cStack_d;
}



//==== FUNC FUN_0800aa04 @ 0800aa04 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

char FUN_0800aa04(undefined4 *param_1,undefined4 param_2)

{
  char cStack_11;
  
  if (_DAT_1ffff7e0 < 0x201) {
    cStack_11 = FUN_0800a948(0x1f0000);
    if (cStack_11 == '\0') {
      _DAT_40022010 = _DAT_40022010 | 1;
      *param_1 = param_2;
      cStack_11 = FUN_0800a948(0x1f0000);
      _DAT_40022010 = _DAT_40022010 & 0xfffffffe;
    }
  }
  else if (param_1 < (undefined4 *)0x807ffff) {
    cStack_11 = FUN_0800a948(0x1f0000);
    if (cStack_11 == '\0') {
      _DAT_40022010 = _DAT_40022010 | 1;
      *param_1 = param_2;
      cStack_11 = FUN_0800a948(0x1f0000);
      _DAT_40022010 = _DAT_40022010 & 0xfffffffe;
    }
  }
  else {
    cStack_11 = FUN_0800a9a6(0x1f0000);
    if (cStack_11 == '\0') {
      _DAT_40022050 = _DAT_40022050 | 1;
      *param_1 = param_2;
      cStack_11 = FUN_0800a9a6(0x1f0000);
      _DAT_40022050 = _DAT_40022050 & 0xfffffffe;
    }
  }
  return cStack_11;
}



//==== FUNC FUN_0800ab12 @ 0800ab12 ====

void FUN_0800ab12(uint param_1)

{
  *(uint *)((param_1 >> 6) + 0x40022000) =
       *(uint *)((param_1 >> 6) + 0x40022000) | 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_0800ab36 @ 0800ab36 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_0800ab36(void)

{
  undefined local_1;
  
  local_1 = 0;
  if ((_DAT_4002200c & 1) == 0) {
    if ((int)(_DAT_4002200c * 0x8000000) < 0) {
      local_1 = 3;
    }
    else if ((int)(_DAT_4002200c * 0x20000000) < 0) {
      local_1 = 2;
    }
  }
  else {
    local_1 = 1;
  }
  return local_1;
}



//==== FUNC FUN_0800ab96 @ 0800ab96 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_0800ab96(void)

{
  undefined local_1;
  
  local_1 = 0;
  if ((_DAT_4002204c & 1) == 0) {
    if ((int)(_DAT_4002204c * 0x8000000) < 0) {
      local_1 = 3;
    }
    else if ((int)(_DAT_4002204c * 0x20000000) < 0) {
      local_1 = 2;
    }
  }
  else {
    local_1 = 1;
  }
  return local_1;
}



//==== FUNC FUN_0800abf6 @ 0800abf6 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800abf6(void)

{
  int iVar1;
  
  iVar1 = FUN_0800ac2a(_DAT_20001d8c / 1000,_DAT_20001d8c * 0x10624dd3);
  if (iVar1 == 0) {
    FUN_0800ac7e(0xffffffff,0);
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC FUN_0800ac2a @ 0800ac2a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0800ac2a(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 - 1U < 0x1000000;
  if (bVar1) {
    _DAT_e000e014 = param_1 + -1;
    FUN_0800ac7e(0xffffffff,0xf);
    _DAT_e000e018 = 0;
    _DAT_e000e010 = 7;
  }
  return !bVar1;
}



//==== FUNC FUN_0800ac7e @ 0800ac7e ====

void FUN_0800ac7e(byte param_1,int param_2)

{
  if ((uint)(int)(char)param_1 < 0x80000000) {
    *(char *)((char)param_1 + -0x1fff1c00) = (char)(param_2 << 4);
  }
  else {
    *(char *)((param_1 & 0xf) + 0xe000ed14) = (char)(param_2 << 4);
  }
  return;
}



//==== FUNC FUN_0800acc2 @ 0800acc2 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800acc2(int param_1)

{
  _DAT_20003f2c = param_1;
  do {
  } while (param_1 != 0);
  return;
}



//==== FUNC FUN_0800ace8 @ 0800ace8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800ace8(void)

{
  if (_DAT_20003f2c != 0) {
    _DAT_20003f2c = _DAT_20003f2c + -1;
  }
  return;
}



//==== FUNC FUN_0800ad08 @ 0800ad08 ====
// FAILED to decompile

//==== FUNC FUN_0800af44 @ 0800af44 ====

void FUN_0800af44(int param_1,undefined2 param_2)

{
  if (param_1 - 0xbU < 0x20) {
    *(undefined2 *)((param_1 << 2 | 0x40006c00U) + 0x14) = param_2;
    return;
  }
  if (9 < param_1 - 1U) {
    return;
  }
  *(undefined2 *)(param_1 << 2 | 0x40006c00) = param_2;
  return;
}



//==== FUNC FUN_0800af76 @ 0800af76 ====

undefined2 FUN_0800af76(int param_1)

{
  if (param_1 - 0xbU < 0x20) {
    return *(undefined2 *)((param_1 << 2 | 0x40006c00U) + 0x14);
  }
  if (param_1 - 1U < 10) {
    return *(undefined2 *)(param_1 << 2 | 0x40006c00);
  }
  return 0;
}



//==== FUNC FUN_0800afaa @ 0800afaa ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800afaa(undefined2 *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)(ushort)param_1[5];
  uVar3 = 1 << (uVar2 & 0xff);
  _DAT_4000661c = _DAT_4000661c & ~uVar3;
  uVar4 = ~uVar3;
  if (param_1[7] == 1) {
    _DAT_4000660c = _DAT_4000660c | uVar3;
    *(uint *)(uVar2 * 8 + 0x40006640) = CONCAT22(*param_1,param_1[1]);
    puVar1 = param_1 + 3;
  }
  else {
    if (param_1[7] != 0) goto LAB_0800b024;
    _DAT_4000660c = _DAT_4000660c & uVar4;
    *(uint *)(uVar2 * 8 + 0x40006640) = CONCAT22(param_1[3],param_1[1]);
    puVar1 = param_1;
  }
  *(uint *)(uVar2 * 8 + 0x40006644) = CONCAT22(param_1[2],*puVar1);
LAB_0800b024:
  uVar2 = _DAT_40006604 | uVar3;
  if (param_1[6] == 0) {
    uVar2 = _DAT_40006604 & uVar4;
  }
  _DAT_40006604 = uVar2;
  uVar2 = _DAT_40006614 | uVar3;
  if (param_1[4] == 0) {
    uVar2 = _DAT_40006614 & uVar4;
  }
  _DAT_40006614 = uVar2;
  if (*(char *)(param_1 + 8) == '\x01') {
    _DAT_4000661c = _DAT_4000661c | uVar3;
  }
  _DAT_40006600 = _DAT_40006600 & 0xfffffffe;
  return;
}



//==== FUNC FUN_0800b05e @ 0800b05e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b05e(uint param_1,int param_2,int param_3)

{
  _DAT_40010400 = _DAT_40010400 & ~param_1;
  _DAT_40010404 = _DAT_40010404 & ~param_1;
  _DAT_40010408 = _DAT_40010408 & ~param_1;
  _DAT_4001040c = _DAT_4001040c & ~param_1;
  if (param_2 == 1) {
    _DAT_40010404 = _DAT_40010404 | param_1;
  }
  else if (param_2 == 0) {
    _DAT_40010400 = _DAT_40010400 | param_1;
  }
  if (param_3 == 2) {
    _DAT_40010408 = _DAT_40010408 | param_1;
  }
  else {
    if (param_3 != 1) {
      if (param_3 != 0) {
        return;
      }
      _DAT_40010408 = param_1 | _DAT_40010408;
      _DAT_4001040c = _DAT_4001040c & ~param_1;
      return;
    }
    _DAT_40010408 = ~param_1 & _DAT_40010408;
  }
  _DAT_4001040c = param_1 | _DAT_4001040c;
  return;
}



//==== FUNC FUN_0800b0fa @ 0800b0fa ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b0fa(uint param_1)

{
  _DAT_40010400 = param_1 | _DAT_40010400;
  return;
}



//==== FUNC FUN_0800b10a @ 0800b10a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0800b10a(uint param_1)

{
  uint uVar1;
  
  uVar1 = _DAT_40010414 & param_1;
  param_1 = param_1 & _DAT_40010400;
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  if (param_1 != 0) {
    param_1 = 1;
  }
  return param_1 & uVar1;
}



//==== FUNC FUN_0800b136 @ 0800b136 ====

/* WARNING: Type propagation algorithm not settling */

void FUN_0800b136(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = param_2 & 0xf;
  if ((int)(param_2 << 0x1b) < 0) {
    if (param_3 == 4) {
      uVar4 = uVar4 | 3;
      param_1[0xf] = param_1[0xf] | param_4;
    }
    else {
      uVar4 = uVar4 | param_3;
    }
  }
  puVar1 = param_1 + 4;
  puVar5 = param_1 + 5;
  if ((param_4 & 1) != 0) {
    uVar2 = *param_1;
    puVar3 = puVar5;
    if ((param_2 == 0x28) || (puVar3 = puVar1, param_2 == 0x48)) {
      *puVar3 = param_4 & 1;
    }
    *param_1 = uVar2 & 0xfffffff0 | uVar4;
  }
  if ((param_4 & 2) != 0) {
    uVar2 = *param_1;
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 2;
    }
    *param_1 = uVar2 & 0xffffff0f | uVar4 << 4;
  }
  if ((param_4 & 4) != 0) {
    uVar2 = *param_1;
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 4;
    }
    *param_1 = uVar2 & 0xfffff0ff | uVar4 << 8;
  }
  if ((param_4 & 8) != 0) {
    uVar2 = *param_1;
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 8;
    }
    *param_1 = uVar2 & 0xffff0fff | uVar4 << 0xc;
  }
  if ((param_4 & 0x10) != 0) {
    uVar2 = *param_1;
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 0x10;
    }
    *param_1 = uVar2 & 0xfff0ffff | uVar4 << 0x10;
  }
  if ((param_4 & 0x20) != 0) {
    uVar2 = *param_1;
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 0x20;
    }
    *param_1 = uVar2 & 0xff0fffff | uVar4 << 0x14;
  }
  if ((param_4 & 0x40) != 0) {
    uVar2 = *param_1;
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 0x40;
    }
    *param_1 = uVar2 & 0xf0ffffff | uVar4 << 0x18;
  }
  if ((param_4 & 0x80) != 0) {
    uVar2 = *param_1;
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 0x80;
    }
    *param_1 = uVar2 & 0xfffffff | uVar4 << 0x1c;
  }
  if ((param_4 & 0x100) != 0) {
    uVar2 = param_1[1];
    puVar3 = puVar5;
    if ((param_2 == 0x28) || (puVar3 = puVar1, param_2 == 0x48)) {
      *puVar3 = param_4 & 0x100;
    }
    param_1[1] = uVar2 & 0xfffffff0 | uVar4;
  }
  if ((param_4 & 0x200) != 0) {
    uVar2 = param_1[1];
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 0x200;
    }
    param_1[1] = uVar2 & 0xffffff0f | uVar4 << 4;
  }
  if ((param_4 & 0x400) != 0) {
    uVar2 = param_1[1];
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 0x400;
    }
    param_1[1] = uVar2 & 0xfffff0ff | uVar4 << 8;
  }
  if ((param_4 & 0x800) != 0) {
    uVar2 = param_1[1];
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 0x800;
    }
    param_1[1] = uVar2 & 0xffff0fff | uVar4 << 0xc;
  }
  if ((param_4 & 0x1000) != 0) {
    uVar2 = param_1[1];
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 0x1000;
    }
    param_1[1] = uVar2 & 0xfff0ffff | uVar4 << 0x10;
  }
  if ((param_4 & 0x2000) != 0) {
    uVar2 = param_1[1];
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 0x2000;
    }
    param_1[1] = uVar2 & 0xff0fffff | uVar4 << 0x14;
  }
  if ((param_4 & 0x4000) != 0) {
    uVar2 = param_1[1];
    puVar3 = puVar1;
    if ((param_2 == 0x48) || (puVar3 = puVar5, param_2 == 0x28)) {
      *puVar3 = param_4 & 0x4000;
    }
    param_1[1] = uVar2 & 0xf0ffffff | uVar4 << 0x18;
  }
  if ((param_4 & 0x8000) == 0) {
    return;
  }
  uVar2 = param_1[1];
  if ((param_2 == 0x48) || (puVar1 = puVar5, param_2 == 0x28)) {
    *puVar1 = param_4 & 0x8000;
  }
  param_1[1] = uVar2 & 0xfffffff | uVar4 << 0x1c;
  return;
}



//==== FUNC FUN_0800b416 @ 0800b416 ====

void FUN_0800b416(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



//==== FUNC FUN_0800b41a @ 0800b41a ====

void FUN_0800b41a(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0x10;
  if (param_3 == 0) {
    iVar1 = 0x14;
  }
  *(undefined4 *)(iVar1 + param_1) = param_2;
  return;
}



//==== FUNC FUN_0800b426 @ 0800b426 ====

uint FUN_0800b426(int param_1,uint param_2)

{
  param_2 = *(uint *)(param_1 + 8) & param_2;
  if (param_2 != 0) {
    param_2 = 1;
  }
  return param_2;
}



//==== FUNC FUN_0800b430 @ 0800b430 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b430(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)&DAT_40010004;
  if ((int)param_1 < 0) {
    puVar1 = (uint *)0x4001001c;
  }
  if ((param_1 & 0x300000) == 0x300000) {
    uVar2 = *puVar1 & 0xf8ffffff;
    _DAT_40010004 = _DAT_40010004 & 0xf8ffffff;
  }
  else {
    if ((int)(param_1 << 0xb) < 0) {
      uVar2 = 3 << ((param_1 << 0xc) >> 0x1c);
    }
    else {
      uVar2 = (param_1 & 0xffff) << (param_1 >> 0x11 & 0xf0);
    }
    uVar2 = *puVar1 & ~uVar2 | 0x7000000;
  }
  if (param_2 != 0) {
    uVar2 = uVar2 | (param_1 & 0xffff) << (param_1 >> 0x11 & 0xf0);
  }
  puVar1 = (uint *)&DAT_40010004;
  if ((int)param_1 < 0) {
    puVar1 = (uint *)0x4001001c;
  }
  *puVar1 = uVar2;
  return;
}



//==== FUNC FUN_0800b4a4 @ 0800b4a4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b4a4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (param_2 & 3) << 2;
  uVar1 = 0xf << iVar2;
  if (param_2 < 4) {
    _DAT_40010008 = param_1 << iVar2 | _DAT_40010008 & ~uVar1;
    return;
  }
  if (param_2 < 8) {
    _DAT_4001000c = param_1 << iVar2 | _DAT_4001000c & ~uVar1;
    return;
  }
  if (param_2 < 0xc) {
    _DAT_40010010 = param_1 << iVar2 | ~uVar1 & _DAT_40010010;
    return;
  }
  _DAT_40010014 = param_1 << iVar2 | ~uVar1 & _DAT_40010014;
  return;
}



//==== FUNC FUN_0800b528 @ 0800b528 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b528(uint param_1)

{
  _DAT_e000ed0c = param_1 | 0x5fa0000;
  return;
}



//==== FUNC FUN_0800b53c @ 0800b53c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b53c(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if ((_DAT_e000ed0c & 0x700) == 0x700) {
    iVar1 = 4;
  }
  else if ((_DAT_e000ed0c & 0x700) == 0x600) {
    iVar1 = 3;
  }
  else {
    if ((_DAT_e000ed0c & 0x700) != 0x500) {
      if ((_DAT_e000ed0c & 0x700) == 0x400) {
        iVar1 = 1;
        goto LAB_0800b5a8;
      }
      if ((_DAT_e000ed0c & 0x700) == 0x300) {
        iVar1 = 0;
        goto LAB_0800b5a8;
      }
      _DAT_e000ed0c = 0x5fa0500;
    }
    iVar1 = 2;
  }
LAB_0800b5a8:
  *(char *)((param_1 | 0xe000e100) + 0x300) =
       (char)((0xfU >> (4U - iVar1 & 0xff) & param_3 | param_2 << iVar1) << 4);
  *(int *)((param_1 >> 3 & 0x1c) + 0xe000e100) = 1 << (param_1 & 0x1f);
  return;
}



//==== FUNC FUN_0800b5e0 @ 0800b5e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b5e0(uint param_1,uint param_2)

{
  _DAT_e000ed08 = param_1 | param_2 & 0x1fffff80;
  DataSynchronizationBarrier(0xf);
  return;
}



//==== FUNC FUN_0800b610 @ 0800b610 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0800b610(int param_1)

{
  int iVar1;
  bool bVar2;
  
  switch(param_1) {
  case 0:
    iVar1 = 0x4fc;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1b:
    return 0;
  case 0x10:
    iVar1 = 0xfffc;
    while (-1 < _DAT_40021000 << 0xe) {
      bVar2 = _DAT_40021000 << 0xe < 0;
      if (!bVar2) {
        bVar2 = _DAT_40021000 << 0xe < 0;
      }
      if (((bVar2) || (iVar1 == 0)) || (iVar1 = iVar1 + -4, _DAT_40021000 << 0xe < 0)) break;
    }
    return (uint)(_DAT_40021000 << 0xe) >> 0x1f;
  case 0x18:
    iVar1 = 0xffffc;
    while (-1 < _DAT_40021000 << 6) {
      bVar2 = _DAT_40021000 << 6 < 0;
      if (!bVar2) {
        bVar2 = _DAT_40021000 << 6 < 0;
      }
      if (((bVar2) || (iVar1 == 0)) || (iVar1 = iVar1 + -4, _DAT_40021000 << 6 < 0)) break;
    }
    return (uint)(_DAT_40021000 << 6) >> 0x1f;
  case 0x1a:
    iVar1 = 0xffffc;
    while (-1 < _DAT_40021000 << 4) {
      bVar2 = _DAT_40021000 << 4 < 0;
      if (!bVar2) {
        bVar2 = _DAT_40021000 << 4 < 0;
      }
      if (((bVar2) || (iVar1 == 0)) || (iVar1 = iVar1 + -4, _DAT_40021000 << 4 < 0)) break;
    }
    return (uint)(_DAT_40021000 << 4) >> 0x1f;
  case 0x1c:
    iVar1 = 0xffffc;
    while (-1 < _DAT_40021000 << 2) {
      bVar2 = _DAT_40021000 << 2 < 0;
      if (!bVar2) {
        bVar2 = _DAT_40021000 << 2 < 0;
      }
      if (((bVar2) || (iVar1 == 0)) || (iVar1 = iVar1 + -4, _DAT_40021000 << 2 < 0)) break;
    }
    return (uint)(_DAT_40021000 << 2) >> 0x1f;
  default:
    if (param_1 == 0x800) {
      iVar1 = 0x3fffffc;
      while (-1 < _DAT_40021020 << 0x1e) {
        bVar2 = _DAT_40021020 << 0x1e < 0;
        if (!bVar2) {
          bVar2 = _DAT_40021020 << 0x1e < 0;
        }
        if (((bVar2) || (iVar1 == 0)) || (iVar1 = iVar1 + -4, _DAT_40021020 << 0x1e < 0)) break;
      }
      return (uint)(_DAT_40021020 << 0x1e) >> 0x1f;
    }
    if (param_1 == 0x900) {
      iVar1 = 0xffffc;
      while (-1 < _DAT_40021024 << 0x1e) {
        bVar2 = _DAT_40021024 << 0x1e < 0;
        if (!bVar2) {
          bVar2 = _DAT_40021024 << 0x1e < 0;
        }
        if (((bVar2) || (iVar1 == 0)) || (iVar1 = iVar1 + -4, _DAT_40021024 << 0x1e < 0)) break;
      }
      return (uint)(_DAT_40021024 << 0x1e) >> 0x1f;
    }
    if (param_1 != 0x3010) {
      return 0;
    }
    iVar1 = 0xffffc;
    while (-1 < _DAT_400210c0 << 0xe) {
      bVar2 = _DAT_400210c0 << 0xe < 0;
      if (!bVar2) {
        bVar2 = _DAT_400210c0 << 0xe < 0;
      }
      if (((bVar2) || (iVar1 == 0)) || (iVar1 = iVar1 + -4, _DAT_400210c0 << 0xe < 0)) break;
    }
    return (uint)(_DAT_400210c0 << 0xe) >> 0x1f;
  }
  while( true ) {
    bVar2 = _DAT_40021000 << 0x1e < 0;
    if (!bVar2) {
      bVar2 = _DAT_40021000 << 0x1e < 0;
    }
    if (bVar2) break;
    bVar2 = _DAT_40021000 << 0x1e < 0;
    if (!bVar2) {
      bVar2 = _DAT_40021000 << 0x1e < 0;
    }
    if ((bVar2) || (bVar2 = iVar1 == 0, iVar1 = iVar1 + -4, bVar2)) break;
  }
  return (uint)(_DAT_40021000 << 0x1e) >> 0x1f;
}



//==== FUNC FUN_0800b816 @ 0800b816 ====

void FUN_0800b816(uint param_1)

{
  *(uint *)(&DAT_40021000 + (param_1 >> 6)) =
       1 << (param_1 & 0x1f) | *(uint *)(&DAT_40021000 + (param_1 >> 6));
  return;
}



//==== FUNC FUN_0800b834 @ 0800b834 ====

void FUN_0800b834(uint param_1)

{
  *(uint *)(&DAT_40021000 + (param_1 >> 6)) =
       1 << (param_1 & 0x1f) | *(uint *)(&DAT_40021000 + (param_1 >> 6));
  return;
}



//==== FUNC FUN_0800b872 @ 0800b872 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b872(uint param_1)

{
  _DAT_40021020 = param_1 | _DAT_40021020 & 0xfffffcff;
  return;
}



//==== FUNC FUN_0800b886 @ 0800b886 ====

uint FUN_0800b886(uint param_1)

{
  return *(uint *)(&DAT_40021000 + (param_1 >> 6)) >> (param_1 & 0x1f) & 1;
}



//==== FUNC FUN_0800b8a0 @ 0800b8a0 ====

void FUN_0800b8a0(uint param_1)

{
  *(uint *)(&DAT_40021000 + (param_1 >> 6)) =
       1 << (param_1 & 0x1f) | *(uint *)(&DAT_40021000 + (param_1 >> 6));
  return;
}



//==== FUNC FUN_0800b8c0 @ 0800b8c0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0800b8c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = (_DAT_40021004 << 0x1c) >> 0x1e;
  if (uVar1 == 2) {
    if ((int)(_DAT_40021004 << 0xf) < 0) {
      uVar1 = 48000000;
      if (-1 < (int)(_DAT_4002102c << 1)) {
        uVar1 = 25000000;
      }
      if ((int)(_DAT_4002102c << 0xf) < 0) {
        iVar4 = ((_DAT_4002102c << 0x14) >> 0x1c) + 2;
        if (iVar4 == 0x11) {
          iVar4 = 0x14;
        }
        uVar1 = iVar4 * (uVar1 / (((_DAT_4002102c << 0x18) >> 0x1c) + 1));
      }
      uVar1 = uVar1 / ((_DAT_4002102c & 0xf) + 1);
    }
    else {
      uVar1 = 4000000;
    }
    uVar3 = (_DAT_40021004 >> 0x19 & 0x20) +
            ((_DAT_40021004 << 10) >> 0x1c) + (_DAT_40021004 >> 0x19 & 0x10);
    uVar2 = uVar3;
    if (uVar3 != 0x3f) {
      uVar2 = uVar3 + 1;
    }
    if (uVar3 < 0xf) {
      uVar2 = uVar3 + 2;
    }
    if (uVar2 == 0xf) {
      uVar2 = uVar1 * 6 + (uVar1 >> 1);
    }
    else {
      uVar2 = uVar2 * uVar1;
    }
  }
  else if (uVar1 == 1) {
    uVar2 = 25000000;
  }
  else {
    uVar2 = 8000000;
  }
  if (3 < param_1) {
    return 0;
  }
  uVar1 = uVar2 >> *(sbyte *)(((_DAT_40021004 << 0x18) >> 0x1c) + 0x800cd98);
  switch(param_1) {
  case 0:
    goto switchD_0800b9a4_caseD_0;
  case 1:
    return uVar1;
  case 2:
    uVar2 = _DAT_40021004 << 0x15;
    break;
  case 3:
    uVar2 = _DAT_40021004 << 0x12;
  }
  uVar2 = uVar1 >> *(sbyte *)((uVar2 >> 0x1d) + 0x800cda8);
switchD_0800b9a4_caseD_0:
  return uVar2;
}



//==== FUNC FUN_0800b9cc @ 0800b9cc ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b9cc(void)

{
  bool bVar1;
  
  while( true ) {
    if (_DAT_40002804 << 0x1a < 0) {
      return;
    }
    bVar1 = _DAT_40002804 << 0x1a < 0;
    if (!bVar1) {
      bVar1 = _DAT_40002804 << 0x1a < 0;
    }
    if (bVar1) break;
    if (_DAT_40002804 << 0x1a < 0) {
      return;
    }
  }
  return;
}



//==== FUNC FUN_0800b9f8 @ 0800b9f8 ====

/* WARNING: Removing unreachable block (ram,0x0800ba12) */
/* WARNING: Removing unreachable block (ram,0x0800ba28) */

void FUN_0800b9f8(void)

{
  do {
  } while( true );
}



//==== FUNC FUN_0800ba2a @ 0800ba2a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800ba2a(uint param_1)

{
  _DAT_40002818 = param_1 >> 0x10;
  _DAT_4000281c = param_1 & 0xffff;
  _DAT_40002804 = _DAT_40002804 & 0xffffffef;
  return;
}



//==== FUNC FUN_0800ba4c @ 0800ba4c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800ba4c(uint param_1)

{
  _DAT_40002808 = (param_1 << 0xc) >> 0x1c;
  _DAT_4000280c = param_1 & 0xffff;
  _DAT_40002804 = _DAT_40002804 & 0xffffffef;
  return;
}



//==== FUNC FUN_0800ba70 @ 0800ba70 ====

void FUN_0800ba70(int param_1)

{
  uint uVar1;
  
  if (param_1 < 0x40002000) {
    if (param_1 < 0x40001400) {
      if (param_1 == 0x40000400) {
        uVar1 = 0x401;
      }
      else if (param_1 == 0x40000800) {
        uVar1 = 0x402;
      }
      else {
        if (param_1 != 0x40001000) {
          return;
        }
        uVar1 = 0x404;
      }
    }
    else if (param_1 == 0x40001400) {
      uVar1 = 0x405;
    }
    else if (param_1 == 0x40001800) {
      uVar1 = 0x406;
    }
    else {
      if (param_1 != 0x40001c00) {
        return;
      }
      uVar1 = 0x407;
    }
  }
  else if (param_1 < 0x40014c00) {
    if (param_1 == 0x40002000) {
      uVar1 = 0x408;
    }
    else if (param_1 == 0x40012c00) {
      uVar1 = 0x30b;
    }
    else {
      if (param_1 != 0x40013400) {
        return;
      }
      uVar1 = 0x30d;
    }
  }
  else if (param_1 == 0x40014c00) {
    uVar1 = 0x313;
  }
  else if (param_1 == 0x40015000) {
    uVar1 = 0x314;
  }
  else {
    if (param_1 != 0x40015400) {
      return;
    }
    uVar1 = 0x315;
  }
  FUN_0800b834(uVar1);
  *(uint *)(&DAT_40021000 + (uVar1 >> 6)) =
       *(uint *)(&DAT_40021000 + (uVar1 >> 6)) & ~(1 << (uVar1 & 0x1f));
  return;
}



//==== FUNC FUN_0800bb82 @ 0800bb82 ====

void FUN_0800bb82(uint *param_1,ushort *param_2)

{
  param_1[10] = (uint)*param_2;
  if ((int)param_1 < 0x40012c00) {
    if ((param_1 != (uint *)0x40000400) && (param_1 != (uint *)0x40000800)) goto LAB_0800bbe0;
  }
  else if ((param_1 != (uint *)0x40013400) && (param_1 != (uint *)0x40012c00)) goto LAB_0800bbe0;
  *param_1 = *param_1 & 0xffffff8f;
  *param_1 = *param_1 | (uint)param_2[1];
  *param_1 = (uint)param_2[2] | *param_1;
LAB_0800bbe0:
  param_1[0xb] = *(uint *)(param_2 + 4);
  if (((uint)param_1 & 0xfffffbff) != 0x40001000) {
    *param_1 = *param_1 & 0xfffffcff;
    *param_1 = (uint)param_2[3] | *param_1;
  }
  if ((param_1 == (uint *)0x40013400) || (param_1 == (uint *)0x40012c00)) {
    param_1[0xc] = (uint)*(byte *)(param_2 + 6);
  }
  param_1[5] = param_1[5] | 1;
  return;
}



//==== FUNC FUN_0800bc26 @ 0800bc26 ====

void FUN_0800bc26(uint *param_1)

{
  *param_1 = *param_1 | 1;
  return;
}



//==== FUNC FUN_0800bc30 @ 0800bc30 ====

void FUN_0800bc30(uint *param_1)

{
  *param_1 = *param_1 & 0xfffffffe;
  return;
}



//==== FUNC FUN_0800bc3a @ 0800bc3a ====

void FUN_0800bc3a(uint *param_1)

{
  *param_1 = *param_1 | 2;
  return;
}



//==== FUNC FUN_0800bc44 @ 0800bc44 ====

void FUN_0800bc44(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



//==== FUNC FUN_0800bc5a @ 0800bc5a ====

uint FUN_0800bc5a(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc) & param_2;
  param_2 = *(uint *)(param_1 + 0x10) & param_2;
  if (param_2 != 0) {
    param_2 = 1;
  }
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  return param_2 & uVar1;
}



//==== FUNC FUN_0800bc70 @ 0800bc70 ====

void FUN_0800bc70(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = ~param_2;
  return;
}



//==== FUNC FUN_0800bc76 @ 0800bc76 ====

void FUN_0800bc76(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = ~param_2;
  return;
}



//==== FUNC FUN_0800bc7c @ 0800bc7c ====

void FUN_0800bc7c(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x44) & 0xffff7fff;
  if (param_2 == 1) {
    uVar1 = uVar1 + 0x8000;
  }
  *(uint *)(param_1 + 0x44) = uVar1;
  return;
}



//==== FUNC FUN_0800bc90 @ 0800bc90 ====

void FUN_0800bc90(int param_1,undefined4 param_2,ushort *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  switch(param_2) {
  case 0:
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffc;
    *(uint *)(param_1 + 0x20) = (uint)*param_3 | *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffd;
    *(uint *)(param_1 + 0x20) = (uint)param_3[2] | *(uint *)(param_1 + 0x20);
    if ((param_1 != 0x40013400) && (param_1 != 0x40012c00)) {
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffb;
    *(uint *)(param_1 + 0x20) = (uint)param_3[1] | *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffff7;
    *(uint *)(param_1 + 0x20) = (uint)param_3[3] | *(uint *)(param_1 + 0x20);
    puVar1 = (uint *)(param_1 + 4);
    *puVar1 = *puVar1 & 0xfffffeff;
    *puVar1 = (uint)param_3[4] | *puVar1;
    *puVar1 = *puVar1 & 0xfffffdff;
    uVar2 = (uint)param_3[5];
    uVar3 = *puVar1;
    break;
  case 1:
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffcff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*param_3 << 4;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3[2] << 4;
    if ((param_1 != 0x40013400) && (param_1 != 0x40012c00)) {
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffbf;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3[1] << 4;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff7f;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3[3] << 4;
    puVar1 = (uint *)(param_1 + 4);
    *puVar1 = *puVar1 & 0xfffffbff;
    *puVar1 = *puVar1 | (uint)param_3[4] << 2;
    *puVar1 = *puVar1 & 0xfffff7ff;
    uVar2 = *puVar1;
    uVar3 = (uint)param_3[5] << 2;
    break;
  case 2:
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffc;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*param_3 << 8;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffdff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3[2] << 8;
    if ((param_1 != 0x40013400) && (param_1 != 0x40012c00)) {
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffbff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3[1] << 8;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffff7ff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3[3] << 8;
    puVar1 = (uint *)(param_1 + 4);
    *puVar1 = *puVar1 & 0xffffefff;
    *puVar1 = *puVar1 | (uint)param_3[4] << 4;
    *puVar1 = *puVar1 & 0xffffdfff;
    uVar2 = *puVar1;
    uVar3 = (uint)param_3[5] << 4;
    break;
  case 3:
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffefff;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffcff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)*param_3 << 0xc;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffdfff;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | (uint)param_3[2] << 0xc;
    if ((param_1 != 0x40013400) && (param_1 != 0x40012c00)) {
      return;
    }
    puVar1 = (uint *)(param_1 + 4);
    *puVar1 = *puVar1 & 0xffffbfff;
    uVar2 = *puVar1;
    uVar3 = (uint)param_3[4] << 6;
    break;
  default:
    goto switchD_0800bc96_caseD_4;
  }
  *(uint *)(param_1 + 4) = uVar2 | uVar3;
switchD_0800bc96_caseD_4:
  return;
}



//==== FUNC FUN_0800be98 @ 0800be98 ====

void FUN_0800be98(int param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  switch(param_2) {
  case 0:
    puVar1 = (uint *)(param_1 + 0x18);
    uVar2 = *puVar1;
    break;
  case 1:
    puVar1 = (uint *)(param_1 + 0x18);
    uVar2 = *puVar1;
    goto LAB_0800bec0;
  case 2:
    puVar1 = (uint *)(param_1 + 0x1c);
    uVar2 = *puVar1;
    break;
  case 3:
    puVar1 = (uint *)(param_1 + 0x1c);
    uVar2 = *puVar1;
LAB_0800bec0:
    uVar2 = uVar2 & 0xffff8fff;
    param_3 = param_3 << 8;
    goto LAB_0800bec6;
  default:
    return;
  }
  uVar2 = uVar2 & 0xffffff8f;
LAB_0800bec6:
  *puVar1 = uVar2;
  *puVar1 = *puVar1 | param_3;
  return;
}



//==== FUNC FUN_0800bed0 @ 0800bed0 ====

void FUN_0800bed0(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < 4) {
    param_1 = param_1 + param_2 * 4;
  }
  if (param_2 < 4) {
    *(undefined4 *)(param_1 + 0x34) = param_3;
  }
  return;
}



//==== FUNC FUN_0800bedc @ 0800bedc ====

void FUN_0800bedc(int param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  switch(param_2) {
  case 0:
    puVar1 = (uint *)(param_1 + 0x18);
    uVar2 = *puVar1;
    break;
  case 1:
    puVar1 = (uint *)(param_1 + 0x18);
    uVar2 = *puVar1;
    goto LAB_0800bf04;
  case 2:
    puVar1 = (uint *)(param_1 + 0x1c);
    uVar2 = *puVar1;
    break;
  case 3:
    puVar1 = (uint *)(param_1 + 0x1c);
    uVar2 = *puVar1;
LAB_0800bf04:
    uVar2 = uVar2 & 0xfffff7ff;
    param_3 = param_3 << 8;
    goto LAB_0800bf0a;
  default:
    return;
  }
  uVar2 = uVar2 & 0xfffffff7;
LAB_0800bf0a:
  *puVar1 = uVar2;
  *puVar1 = *puVar1 | param_3;
  return;
}



//==== FUNC FUN_0800bf14 @ 0800bf14 ====

void FUN_0800bf14(int param_1)

{
  uint uVar1;
  
  if (param_1 < 0x40004c00) {
    if (param_1 == 0x40004400) {
      uVar1 = 0x411;
    }
    else {
      if (param_1 != 0x40004800) {
        return;
      }
      uVar1 = 0x412;
    }
  }
  else if (param_1 == 0x40004c00) {
    uVar1 = 0x413;
  }
  else if (param_1 == 0x40005000) {
    uVar1 = 0x414;
  }
  else {
    if (param_1 != 0x40013800) {
      return;
    }
    uVar1 = 0x30e;
  }
  FUN_0800b834(uVar1);
  *(uint *)(&DAT_40021000 + (uVar1 >> 6)) =
       *(uint *)(&DAT_40021000 + (uVar1 >> 6)) & ~(1 << (uVar1 & 0x1f));
  return;
}



//==== FUNC FUN_0800bf90 @ 0800bf90 ====

void FUN_0800bf90(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (param_1 < 0x40004c00) {
    if ((param_1 != 0x40004400) && (param_1 != 0x40004800)) goto LAB_0800bfee;
LAB_0800bfe8:
    uVar2 = 2;
  }
  else {
    if ((param_1 == 0x40004c00) || (param_1 == 0x40005000)) goto LAB_0800bfe8;
    if (param_1 != 0x40013800) goto LAB_0800bfee;
    uVar2 = 3;
  }
  iVar1 = FUN_0800b8c0(uVar2);
LAB_0800bfee:
  *(uint *)(param_1 + 8) = (iVar1 + (param_2 >> 1)) / param_2 & 0xffff;
  return;
}



//==== FUNC FUN_0800bffc @ 0800bffc ====

void FUN_0800bffc(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x2000;
  return;
}



//==== FUNC FUN_0800c006 @ 0800c006 ====

void FUN_0800c006(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffdfff;
  return;
}



//==== FUNC FUN_0800c010 @ 0800c010 ====

void FUN_0800c010(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = param_2 | *(uint *)(param_1 + 0xc) & 0xfffffff7;
  return;
}



//==== FUNC FUN_0800c01c @ 0800c01c ====

void FUN_0800c01c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = param_2 | *(uint *)(param_1 + 0xc) & 0xfffffffb;
  return;
}



//==== FUNC FUN_0800c028 @ 0800c028 ====

void FUN_0800c028(int param_1,uint param_2)

{
  *(uint *)(param_1 + 4) = param_2 & 0x1ff;
  return;
}



//==== FUNC FUN_0800c030 @ 0800c030 ====

uint FUN_0800c030(int param_1)

{
  return *(uint *)(param_1 + 4) & 0x1ff;
}



//==== FUNC FUN_0800c038 @ 0800c038 ====

uint FUN_0800c038(int param_1,uint param_2)

{
  return *(uint *)((param_2 >> 6) + param_1) >> (param_2 & 0x1f) & 1;
}



//==== FUNC FUN_0800c048 @ 0800c048 ====

void FUN_0800c048(int param_1,uint param_2)

{
  *(uint *)((param_2 >> 6) + param_1) = 1 << (param_2 & 0x1f) | *(uint *)((param_2 >> 6) + param_1);
  return;
}



//==== FUNC FUN_0800c076 @ 0800c076 ====

uint FUN_0800c076(int param_1,uint param_2)

{
  return *(uint *)((param_2 >> 0x16) + param_1) >> ((param_2 << 0xb) >> 0x1b) &
         *(uint *)(((param_2 << 0x10) >> 0x16) + param_1) >> (param_2 & 0x1f) & 1;
}



//==== FUNC FUN_0800c098 @ 0800c098 ====

void FUN_0800c098(int param_1,uint param_2)

{
  *(uint *)((param_2 >> 0x16) + param_1) =
       *(uint *)((param_2 >> 0x16) + param_1) & ~(1 << ((param_2 << 0xb) >> 0x1b));
  return;
}



//==== FUNC FUN_0800c0b0 @ 0800c0b0 ====

void FUN_0800c0b0(undefined4 param_1,undefined4 param_2)

{
  FUN_0800c0c2(param_1,param_2,0);
  return;
}



//==== FUNC FUN_0800c0ba @ 0800c0ba ====

void FUN_0800c0ba(void)

{
  FUN_0800c108();
  return;
}



//==== FUNC FUN_0800c0c2 @ 0800c0c2 ====

void FUN_0800c0c2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0800c11a(param_1,param_3,param_2);
  return;
}



//==== FUNC FUN_0800c0e6 @ 0800c0e6 ====

void FUN_0800c0e6(void)

{
  return;
}



//==== FUNC FUN_0800c0ec @ 0800c0ec ====

int FUN_0800c0ec(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  do {
    if (param_3 == iVar2) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
    uVar3 = (uint)*(byte *)(param_2 + -1 + iVar2);
  } while (*pbVar1 == uVar3);
  return *pbVar1 - uVar3;
}



//==== FUNC FUN_0800c108 @ 0800c108 ====

void FUN_0800c108(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    *(undefined *)(param_1 + iVar1) = *(undefined *)(param_2 + iVar1);
  }
  return;
}



//==== FUNC FUN_0800c11a @ 0800c11a ====

void FUN_0800c11a(undefined *param_1,undefined param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}



//==== FUNC sub_0800cd8c @ 0800cd8c ====

/* WARNING: Control flow encountered bad instruction data */

void sub_0800cd8c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== FUNC sub_0800cde2 @ 0800cde2 ====

/* WARNING: Control flow encountered bad instruction data */

void sub_0800cde2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== FUNC FUN_0800eb60 @ 0800eb60 ====

void FUN_0800eb60(undefined4 param_1,undefined4 param_2)

{
  FUN_08001d6a();
  FUN_0800b430(param_1,param_2);
  return;
}



//==== FUNC FUN_0800eb6e @ 0800eb6e ====

void FUN_0800eb6e(void)

{
  sub_08001e60();
  FUN_08000bc8();
  return;
}



