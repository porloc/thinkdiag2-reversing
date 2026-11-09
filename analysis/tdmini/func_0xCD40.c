// FUN_0800cd40 @ 0800cd40

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

