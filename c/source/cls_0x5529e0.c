#include "../include/cls_0x5529e0.h"

bool __thiscall cls_0x5529e0::meth_0x5529e0(cls_0x5529e0 *this,int param_1)

{
  if ((this->mbr_0x70e5 != 0) && (this->mbr_0x70e6 == 0)) {
    return true;
  }
  if (this->mbr_0x70e8 == 0) {
    return false;
  }
  return this->mbr_0x70e8 != param_1;
}


