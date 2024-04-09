#include "../include/cls_0x4962f0.h"

int __thiscall cls_0x4962f0::meth_0x4962f0(cls_0x4962f0 *this)

{
  cls_0x4962f0 *local_4;
  
  if (this->mbr_0x0 == 0) {
    local_4 = this;
    cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)&local_4,0);
    if (this->mbr_0x0 == 0) {
      DAT_0070f670 = DAT_0070f670 + 1;
      this->mbr_0x0 = DAT_0070f670;
    }
    cls_0x4d8d70::meth_0x605760((cls_0x4d8d70 *)&local_4);
  }
  return this->mbr_0x0;
}


