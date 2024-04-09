#include "../include/cls_0x5affd0.h"

uint __thiscall cls_0x5affd0::meth_0x5affd0(cls_0x5affd0 *this,undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  
  uVar1 = this->mbr_0x0;
  uVar2 = this->mbr_0x8;
  uVar4 = uVar1 >> ((byte)this->mbr_0xc & 0x1f);
  if (*(int *)(this->mbr_0x14 + uVar4 * 4) == 0) {
    pvVar3 = operator_new(this->mbr_0x10 << 2);
    *(void **)(this->mbr_0x14 + uVar4 * 4) = pvVar3;
  }
  *(undefined4 *)(*(int *)(this->mbr_0x14 + uVar4 * 4) + (uVar2 & uVar1) * 4) = *param_1;
  uVar1 = this->mbr_0x0;
  this->mbr_0x0 = uVar1 + 1;
  return uVar1;
}


