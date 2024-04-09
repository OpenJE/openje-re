#include "../include/OptionCheckBox.h"

OptionCheckBox * __thiscall OptionCheckBox::OptionCheckBox(OptionCheckBox *this)

{
  OptionCheckBox *extraout_EDX;
  
  OptionDial::OptionDial(&this->OptionDial);
  (extraout_EDX->OptionDial).vftptr_0x0 =
       (OptionDial__vftable_659000 *)&OptionCheckBox__vftable_65902c_0065902c;
  (extraout_EDX->OptionDial).mbr_0x8 = 2;
  return extraout_EDX;
}



OptionCheckBox * __thiscall OptionCheckBox::~OptionCheckBox(OptionCheckBox *this)

{
  OptionDial *pOVar1;
  
  (this->OptionDial).vftptr_0x0 =
       (OptionDial__vftable_659000 *)&OptionCheckBox__vftable_65902c_0065902c;
  pOVar1 = OptionDial::~OptionDial(&this->OptionDial);
  return (OptionCheckBox *)pOVar1;
}



undefined4 * __thiscall OptionCheckBox::virt_meth_0x443530(OptionCheckBox *this,byte param_1)

{
  ~OptionCheckBox(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/OptionCheckBox.h"
