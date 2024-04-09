#include "../include/OptionSwitch.h"

OptionSwitch * __thiscall OptionSwitch::OptionSwitch(OptionSwitch *this)

{
  OptionSwitch *extraout_EDX;
  
  OptionDial::OptionDial(&this->OptionDial);
  (extraout_EDX->OptionDial).vftptr_0x0 =
       (OptionDial__vftable_659000 *)&OptionSwitch__vftable_65901c_0065901c;
  (extraout_EDX->OptionDial).mbr_0x8 = 2;
  return extraout_EDX;
}



OptionSwitch * __thiscall OptionSwitch::~OptionSwitch(OptionSwitch *this)

{
  OptionDial *pOVar1;
  
  (this->OptionDial).vftptr_0x0 =
       (OptionDial__vftable_659000 *)&OptionSwitch__vftable_65901c_0065901c;
  pOVar1 = OptionDial::~OptionDial(&this->OptionDial);
  return (OptionSwitch *)pOVar1;
}



undefined4 * __thiscall OptionSwitch::virt_meth_0x443510(OptionSwitch *this,byte param_1)

{
  ~OptionSwitch(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/OptionSwitch.h"
