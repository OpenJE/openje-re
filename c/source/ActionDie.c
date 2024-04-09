#include "../include/ActionDie.h"

ActionDie * __thiscall ActionDie::ActionDie(ActionDie *this)

{
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 = (Action__vftable_647888 *)&ActionDie__vftable_6949f4_006949f4;
  this->mbr_0x18 = 0;
  (this->Action).mbr_0x4 = 1;
  return this;
}



undefined4 __thiscall ActionDie::virt_meth_0x55fb30(ActionDie *this)

{
  Entity::meth_0x551ca0((Entity *)this->mbr_0x14);
  return 0;
}



undefined4 __thiscall ActionDie::virt_meth_0x5638d0(ActionDie *this)

{
  return 0;
}


#include "../include/ActionDie.h"
