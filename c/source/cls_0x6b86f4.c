#include "../include/cls_0x6b86f4.h"

void * __thiscall cls_0x6b86f4::virt_meth_0x5db749(cls_0x6b86f4 *this,byte param_1)

{
  cls_0x6b849c::~cls_0x6b849c(&this->cls_0x6b849c);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



cls_0x6b86f4 * __thiscall cls_0x6b86f4::cls_0x6b86f4(cls_0x6b86f4 *this,undefined4 *param_1)

{
  cls_0x6b849c::cls_0x6b849c(&this->cls_0x6b849c,param_1);
  (this->cls_0x6b849c).cls_0x6b848c.vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b86f4__vftable_6b86f4_006b86f4;
  return this;
}


#include "../include/cls_0x6b86f4.h"
