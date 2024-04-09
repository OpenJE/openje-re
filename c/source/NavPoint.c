#include "../include/NavPoint.h"

NavPoint * __thiscall NavPoint::NavPoint(NavPoint *this)

{
  this->vftptr_0x0 = &NavPoint__vftable_6aaa84_006aaa84;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  return this;
}



NavPoint * __thiscall NavPoint::~NavPoint(NavPoint *this)

{
  NavPoint *in_EAX;
  
  this->vftptr_0x0 = &NavPoint__vftable_6aaa84_006aaa84;
  return in_EAX;
}



undefined4 * __thiscall NavPoint::virt_meth_0x5b2be0(NavPoint *this,byte param_1)

{
  ~NavPoint(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/NavPoint.h"
