#include "../include/ActionAnim.h"

undefined4 * __thiscall ActionAnim::virt_meth_0x405350(ActionAnim *this,byte param_1)

{
  Action::~Action(&this->Action);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



ActionAnim * __thiscall ActionAnim::ActionAnim(ActionAnim *this)

{
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 = (Action__vftable_647888 *)&ActionAnim__vftable_6a6414_006a6414;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x22 = 0;
  this->mbr_0x23 = 0;
  this->mbr_0x24 = 0;
  (this->Action).mbr_0x4 = 1;
  return this;
}


#include "../include/ActionAnim.h"
