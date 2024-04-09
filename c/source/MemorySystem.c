#include "../include/MemorySystem.h"

MemorySystem * __thiscall MemorySystem::~MemorySystem(MemorySystem *this)

{
  MemorySystem *in_EAX;
  
  this->vftptr_0x0 = &MemorySystem__vftable_6aaf14_006aaf14;
  return in_EAX;
}



MemorySystem * __thiscall MemorySystem::MemorySystem(MemorySystem *this)

{
  this->vftptr_0x0 = &MemorySystem__vftable_6aaf14_006aaf14;
  this->mbr_0xc = 0;
  return this;
}



undefined4 * __thiscall MemorySystem::virt_meth_0x5b31d0(MemorySystem *this,byte param_1)

{
  ~MemorySystem(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall MemorySystem::virt_meth_0x5b3870(MemorySystem *this)

{
  int *_Memory;
  
  _Memory = (int *)this->mbr_0xc;
  if (_Memory != (int *)0x0) {
    FUN_005b3510(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


#include "../include/MemorySystem.h"
