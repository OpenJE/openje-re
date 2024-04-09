#include "../include/cls_0x5cfda5.h"

cls_0x5cfda5 * __thiscall cls_0x5cfda5::cls_0x5cfda5(cls_0x5cfda5 *this,byte param_1)

{
  cls_0x6b80d8::~cls_0x6b80d8((cls_0x6b80d8 *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


