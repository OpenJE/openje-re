#include "../include/cls_0x4e0ed0.h"

int __thiscall cls_0x4e0ed0::meth_0x4e0ed0(cls_0x4e0ed0 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x138;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x13c - dVar1) / 100;
}


