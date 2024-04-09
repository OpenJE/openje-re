#include "../include/cls_0x53b180.h"

cls_0x53b180 * __thiscall cls_0x53b180::cls_0x53b180(cls_0x53b180 *this,dword param_1,int param_2)

{
  code *pcVar1;
  cls_0x53b180 *pcVar2;
  void *pvVar3;
  uint uVar4;
  
  this->mbr_0x0 = 0;
  this->mbr_0x4 = param_1;
  this->mbr_0x8 = param_2 - 1;
  this->mbr_0x10 = param_2;
  uVar4 = 1;
  do {
    if (this->mbr_0x8 >> ((byte)uVar4 & 0x1f) == 0) break;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x20);
  this->mbr_0xc = uVar4;
  if (uVar4 < 0x20) {
    do {
      if (this->mbr_0x8 >> ((byte)uVar4 & 0x1f) != 0) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x20);
  }
  if ((uVar4 == 0x20) && ((1 << ((byte)this->mbr_0xc & 0x1f)) - 1U == this->mbr_0x8)) {
    pvVar3 = operator_new(this->mbr_0x4 << 2);
    this->mbr_0x14 = (dword)pvVar3;
    uVar4 = 0;
    if (this->mbr_0x4 != 0) {
      do {
        *(undefined4 *)(this->mbr_0x14 + uVar4 * 4) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < this->mbr_0x4);
    }
    return this;
  }
  pcVar1 = (code *)swi(3);
  pcVar2 = (cls_0x53b180 *)(*pcVar1)();
  return pcVar2;
}


