#include "../include/cls_0x5f427b.h"

dword __thiscall cls_0x5f427b::meth_0x5f427b(cls_0x5f427b *this)

{
  dword *pdVar1;
  dword dVar2;
  
  pdVar1 = &this->mbr_0x4;
  *pdVar1 = *pdVar1 - 1;
  dVar2 = this->mbr_0x4;
  if (*pdVar1 == 0) {
    (**(code **)this->mbr_0x0)(1);
    dVar2 = 0;
  }
  return dVar2;
}


