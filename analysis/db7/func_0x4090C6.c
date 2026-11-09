// func @ 0x4090C6

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

