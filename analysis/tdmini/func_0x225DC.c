// FUN_080225dc @ 080225dc

undefined8 FUN_080225dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_28;
  int local_24 [2];
  
  local_28 = 0;
  local_24[0] = 0;
  FUN_0801f388(&local_28,param_1 + 1,4);
  if (local_28 < 0x1001) {
    FUN_0801f388(local_24,param_1 + local_28,2);
    if (local_24[0] == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      local_28 = local_28 + 2;
      if (local_28 < 0x1001) {
        FUN_0801f388(param_2,param_1 + local_28,local_24[0]);
        local_28 = local_24[0] + local_28;
        if (local_28 < 0x1001) {
          FUN_0801f388(local_24,param_1 + local_28,2);
          if (local_24[0] == 0) {
            uVar1 = 0xffffffff;
          }
          else {
            local_28 = local_28 + 2;
            FUN_0801f388(param_3,param_1 + local_28,local_24[0]);
            uVar1 = 1;
          }
        }
        else {
          uVar1 = 0xffffffff;
        }
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(local_28,uVar1);
}

