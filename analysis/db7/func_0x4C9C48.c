// func @ 0x4C9C48

undefined8 FUN_004c9c48(undefined4 param_1,char *param_2,undefined1 *param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    FUN_004b3da8();
  }
  else if (cVar1 == '\x01') {
    FUN_004b3db0();
  }
  else if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      *param_3 = 0xff;
      param_3[1] = 1;
      goto LAB_004c9c94;
    }
    FUN_004b3aae();
  }
  *param_3 = 0xff;
  param_3[1] = 0;
LAB_004c9c94:
  return CONCAT44(param_4,2);
}

