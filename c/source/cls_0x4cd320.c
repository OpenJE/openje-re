#include "../include/cls_0x4cd320.h"

cls_0x4cd320 * __thiscall cls_0x4cd320::cls_0x4cd320(cls_0x4cd320 *this,byte param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  piVar1 = (int *)this->mbr_0x4;
  if (piVar1 == (int *)0x0) goto LAB_004cd36b;
  uVar4 = *(uint *)piVar1[9];
  if (uVar4 == 0) {
LAB_004cd35a:
    uVar4 = (**(code **)(*piVar1 + 4))(param_1);
  }
  else {
    iVar2 = *(int *)piVar1[0xd];
    if (iVar2 + uVar4 <= uVar4) goto LAB_004cd35a;
    *(int *)piVar1[0xd] = iVar2 + -1;
    pbVar3 = *(byte **)piVar1[9];
    *(byte **)piVar1[9] = pbVar3 + 1;
    *pbVar3 = param_1;
    uVar4 = (uint)param_1;
  }
  if (uVar4 != 0xffffffff) {
    return this;
  }
LAB_004cd36b:
  this->mbr_0x0 = 1;
  return this;
}


