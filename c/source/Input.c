#include "../include/Input.h"

Input * __thiscall Input::Input(Input *this)

{
  this->vftptr_0x0 = &Input__vftable_6aedec_006aedec;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  return this;
}



Input * __thiscall Input::~Input(Input *this)

{
  Input *pIVar1;
  
  this->vftptr_0x0 = &Input__vftable_6aedec_006aedec;
  pIVar1 = (Input *)FUN_005c1e60((int)&this->field_0x4);
  return pIVar1;
}



undefined4 * __thiscall Input::virt_meth_0x5c1f50(Input *this,byte param_1)

{
  ~Input(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/Input.h"
