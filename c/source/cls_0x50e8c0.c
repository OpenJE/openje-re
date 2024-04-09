#include "../include/cls_0x50e8c0.h"

void __thiscall
cls_0x50e8c0::meth_0x50e8c0
          (cls_0x50e8c0 *this,int param_1,undefined4 *param_2,undefined4 *param_3,
          undefined4 *param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,
          undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,
          undefined4 *param_12,undefined4 *param_13,undefined4 *param_14,undefined4 *param_15)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)this->mbr_0x10c;
  if (0 < param_1) {
    puVar2 = puVar2 + param_1 * 0xe;
  }
  puVar3 = local_38;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_38[0];
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_38[1];
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_38[2];
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_38[3];
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_28;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = local_24;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = local_20;
  }
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = local_1c;
  }
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = local_18;
  }
  if (param_11 != (undefined4 *)0x0) {
    *param_11 = local_14;
  }
  if (param_12 != (undefined4 *)0x0) {
    *param_12 = local_10;
  }
  if (param_13 != (undefined4 *)0x0) {
    *param_13 = local_c;
  }
  if (param_14 != (undefined4 *)0x0) {
    *param_14 = local_8;
  }
  if (param_15 != (undefined4 *)0x0) {
    *param_15 = local_4;
  }
  return;
}


