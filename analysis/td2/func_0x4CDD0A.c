// func @ 0x4CDD0A

undefined8 FUN_004cdd0a(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  byte unaff_r8;
  code *in_stack_ffffffd0;
  
  uVar5 = 6;
  uVar3 = 0;
  do {
    uVar4 = (ushort)uVar5;
    if (5 < (uVar3 & 0xff)) {
LAB_004cdf08:
      if (DAT_004cdf58[8] == 0) {
        *param_3 = 0xff;
        param_3[1] = 2;
        uVar3 = 2;
      }
      else {
        *param_3 = 0;
        param_3[1] = unaff_r8;
        param_3[2] = (char)((uint)DAT_004cdf58[8] >> 0x18);
        param_3[3] = (char)((uint)DAT_004cdf58[8] >> 0x10);
        param_3[4] = (char)((uint)DAT_004cdf58[8] >> 8);
        param_3[5] = (char)DAT_004cdf58[8];
        uVar3 = (uint)uVar4;
      }
LAB_004cdf46:
      return CONCAT44(in_stack_ffffffd0,uVar3);
    }
    in_stack_ffffffd0 = *(code **)(DAT_004cdf54 + (uVar3 & 0xff) * 4);
    if (in_stack_ffffffd0 == (code *)0x0) {
      *param_3 = 0xff;
      param_3[1] = 2;
      uVar3 = 2;
      goto LAB_004cdf46;
    }
    unaff_r8 = 0;
    (*in_stack_ffffffd0)(DAT_004cdf58);
    DAT_004cdf58[8] = 0;
    *(undefined1 *)(DAT_004cdf58 + 7) = *param_2;
    if (*DAT_004cdf58 == 0) {
LAB_004cdd8e:
      if (DAT_004cdf58[1] != 0) {
        sVar1 = (*(code *)DAT_004cdf58[1])
                          (0,DAT_004cdf60,DAT_004cdf5c,(code *)DAT_004cdf58[1],in_stack_ffffffd0,
                           param_1);
        if (sVar1 == 0x11) {
          FUN_004b27ac(param_3 + 6,DAT_004cdf5c,0x11);
          unaff_r8 = unaff_r8 | 2;
        }
        else {
          for (uVar2 = 0; (uVar2 & 0xff) < 0x11; uVar2 = (uVar2 & 0xff) + 1) {
            param_3[(uVar2 & 0xff) + 6] = 0x30;
          }
        }
        uVar5 = uVar5 + 0x11;
      }
      FUN_004b0888(10);
      if (DAT_004cdf58[2] != 0) {
        sVar1 = (*(code *)DAT_004cdf58[2])(0,DAT_004cdf60,DAT_004cdf5c);
        if (sVar1 == 0) {
          param_3[0x17] = 0xff;
          param_3[0x18] = 0xff;
        }
        else {
          param_3[0x17] = (char)DAT_004cdf58[0xf];
          param_3[0x18] = *(undefined1 *)((int)DAT_004cdf58 + 0x3d);
          unaff_r8 = unaff_r8 | 4;
        }
        uVar5 = uVar5 + 2;
      }
      FUN_004b0888(10);
      if (DAT_004cdf58[3] != 0) {
        uVar2 = (*(code *)DAT_004cdf58[3])(0,DAT_004cdf60,DAT_004cdf5c);
        if (0xf < (uVar2 & 0xffff)) {
          param_3[0x19] = (char)(uVar2 & 0xffff);
          FUN_004b27ac(param_3 + 0x1a,DAT_004cdf5c,uVar2 & 0xffff);
          unaff_r8 = unaff_r8 | 8;
          uVar5 = (uVar2 & 0xffff) + 1 + uVar5;
        }
      }
      FUN_004b0888(10);
      if ((DAT_004cdf58[4] != 0) &&
         (sVar1 = (*(code *)DAT_004cdf58[4])(0,DAT_004cdf60,DAT_004cdf5c), sVar1 == 6)) {
        param_3[uVar5 & 0xffff] = 6;
        FUN_004b27ac(param_3 + (uVar5 & 0xffff) + 1,DAT_004cdf5c,6);
        unaff_r8 = unaff_r8 | 0x10;
        uVar5 = (uVar5 & 0xffff) + 7;
      }
      FUN_004b0888(10);
      if ((DAT_004cdf58[5] != 0) &&
         (sVar1 = (*(code *)DAT_004cdf58[5])(0,DAT_004cdf60,DAT_004cdf5c), sVar1 == 6)) {
        param_3[uVar5 & 0xffff] = 6;
        FUN_004b27ac(param_3 + (uVar5 & 0xffff) + 1,DAT_004cdf5c,6);
        unaff_r8 = unaff_r8 | 0x20;
        uVar5 = (uVar5 & 0xffff) + 7;
      }
      uVar4 = (ushort)uVar5;
      if (DAT_004cdf58[6] != 0) {
        (*(code *)DAT_004cdf58[6])();
      }
      if (unaff_r8 != 0) goto LAB_004cdf08;
    }
    else {
      sVar1 = (*(code *)*DAT_004cdf58)(DAT_004cdf58);
      if (sVar1 == 2) {
        unaff_r8 = 1;
        goto LAB_004cdd8e;
      }
      if (DAT_004cdf58[6] != 0) {
        (*(code *)DAT_004cdf58[6])();
      }
      unaff_r8 = 0;
      if (sVar1 == 1) {
        unaff_r8 = 1;
        goto LAB_004cdf08;
      }
    }
    uVar3 = (uVar3 & 0xff) + 1;
  } while( true );
}

