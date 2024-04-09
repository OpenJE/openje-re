#include "../include/cls_0x40e5a0.h"

char __thiscall cls_0x40e5a0::meth_0x40e5a0(cls_0x40e5a0 *this,int param_1)

{
  char cVar1;
  
  if (this->mbr_0xbd != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x168) + 0x14))(&this[1].field_0x6);
    return '\x01' - (cVar1 != '\x01');
  }
  return '\x01';
}


