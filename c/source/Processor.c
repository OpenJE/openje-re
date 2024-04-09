#include "../include/Processor.h"

Processor * __thiscall Processor::~Processor(Processor *this)

{
  Processor *pPVar1;
  
  this->vftptr_0x0 = &Processor__vftable_69ad8c_0069ad8c;
  pPVar1 = (Processor *)this->mbr_0x8;
  if (pPVar1 != (Processor *)0x0) {
    FUN_004310a0((int)pPVar1,this->mbr_0xc);
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  return pPVar1;
}



Processor * __thiscall Processor::Processor(Processor *this)

{
  this->vftptr_0x0 = &Processor__vftable_69ad8c_0069ad8c;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  return this;
}



undefined4 * __thiscall Processor::virt_meth_0x580ae0(Processor *this,byte param_1)

{
  ~Processor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/Processor.h"
