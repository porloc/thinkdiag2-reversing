// FUN_08009934 @ 08009934

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

