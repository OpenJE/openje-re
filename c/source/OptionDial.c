#include "../include/OptionDial.h"

OptionDial * __thiscall OptionDial::OptionDial(OptionDial *this)

{
  this->vftptr_0x0 = &OptionDial__vftable_659000_00659000;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 1;
  this->mbr_0xc = 0;
  return this;
}



OptionDial * __thiscall OptionDial::~OptionDial(OptionDial *this)

{
  OptionDial *in_EAX;
  
  this->vftptr_0x0 = &OptionDial__vftable_659000_00659000;
  return in_EAX;
}



undefined4 * __thiscall OptionDial::virt_meth_0x4434f0(OptionDial *this,byte param_1)

{
  ~OptionDial(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/OptionDial.h"
