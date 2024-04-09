#include "../include/Party.h"

undefined __thiscall Party::virt_meth_0x408d30(Party *this)

{
  return 1;
}



void __thiscall Party::virt_meth_0x5a0680(Party *this)

{
  while ((this->mbr_0x8 != 0 && ((int)(this->mbr_0xc - this->mbr_0x8) >> 2 != 0))) {
    (*this->vftptr_0x0->virt_meth_0x5a0710_16)(this);
  }
  return;
}



Party * __thiscall Party::~Party(Party *this)

{
  Party *_Memory;
  
  this->vftptr_0x0 = &Party__vftable_6a2e74_006a2e74;
  _Memory = (Party *)this->mbr_0x8;
  if (_Memory != (Party *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  return _Memory;
}



Party * __thiscall Party::Party(Party *this)

{
  this->vftptr_0x0 = &Party__vftable_6a2e74_006a2e74;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  return this;
}



char __thiscall Party::virt_meth_0x5a0780(Party *this)

{
  char cVar1;
  
  cVar1 = (*this->vftptr_0x0->virt_meth_0x408d30_4)(this);
  if (cVar1 == '\0') {
    return cVar1;
  }
  cls_0x4027e0::meth_0x402eb0((cls_0x4027e0 *)&this->mbr_0x4,(undefined4 *)&stack0x00000004);
  return '\x01';
}


#include "../include/Party.h"
