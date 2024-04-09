#include "../include/cls_0x6b8704.h"

cls_0x6b8704 * __thiscall
cls_0x6b8704::cls_0x6b8704(cls_0x6b8704 *this,undefined param_1,undefined4 param_2)

{
  cls_0x6b84f0::cls_0x6b84f0(&this->cls_0x6b84f0);
  (this->cls_0x6b84f0).cls_0x6b848c.vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8704__vftable_6b8704_006b8704;
  return this;
}



void * __thiscall cls_0x6b8704::virt_meth_0x5dbf5b(cls_0x6b8704 *this,byte param_1)

{
  cls_0x6b84f0::~cls_0x6b84f0(&this->cls_0x6b84f0);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


#include "../include/cls_0x6b8704.h"
