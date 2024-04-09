#include "../include/cls_0x507be0.h"

void __thiscall cls_0x507be0::meth_0x507be0(cls_0x507be0 *this,int param_1,dword param_2)

{
  this->mbr_0xb4 = param_1;
  this->mbr_0xb8 = param_1;
  if (param_1 != 0) {
    do {
      if (*(dword *)(param_1 + 0xb4) != 0) {
        this->mbr_0xb8 = *(dword *)(param_1 + 0xb4);
      }
      param_1 = *(int *)(param_1 + 0xb4);
    } while (param_1 != 0);
    this->mbr_0xbc = param_2;
    return;
  }
  this->mbr_0xbc = param_2;
  return;
}


