#include "../include/FadeManager.h"

FadeManager * __thiscall FadeManager::FadeManager(FadeManager *this)

{
  this->vftptr_0x0 = &FadeManager__vftable_6abc44_006abc44;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  return this;
}



FadeManager * __thiscall FadeManager::~FadeManager(FadeManager *this)

{
  FadeManager *in_EAX;
  
  this->vftptr_0x0 = &FadeManager__vftable_6abc44_006abc44;
  return in_EAX;
}



undefined4 * __thiscall FadeManager::virt_meth_0x5b4ca0(FadeManager *this,byte param_1)

{
  ~FadeManager(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/FadeManager.h"
