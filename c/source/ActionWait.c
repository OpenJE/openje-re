#include "../include/ActionWait.h"

ActionWait * __thiscall ActionWait::ActionWait(ActionWait *this)

{
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 = (Action__vftable_647888 *)&ActionWait__vftable_695f34_00695f34;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  (this->Action).mbr_0x4 = 1;
  return this;
}



undefined4 __thiscall ActionWait::Set_mbr_0x1c_to_param_1(ActionWait *this,dword param_1)

{
  this->mbr_0x1c = param_1;
  return 0;
}


#include "../include/ActionWait.h"
