#include "../include/SaveSlotOption.h"

SaveSlotOption * __thiscall SaveSlotOption::SaveSlotOption(SaveSlotOption *this)

{
  this->vftptr_0x0 = &SaveSlotOption__vftable_65a6b4_0065a6b4;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  return this;
}



SaveSlotOption * __thiscall SaveSlotOption::~SaveSlotOption(SaveSlotOption *this)

{
  SaveSlotOption *in_EAX;
  
  this->vftptr_0x0 = &SaveSlotOption__vftable_65a6b4_0065a6b4;
  return in_EAX;
}



undefined4 * __thiscall SaveSlotOption::virt_meth_0x448500(SaveSlotOption *this,byte param_1)

{
  ~SaveSlotOption(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/SaveSlotOption.h"
