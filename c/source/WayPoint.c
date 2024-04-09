#include "../include/WayPoint.h"

WayPoint * __thiscall WayPoint::WayPoint(WayPoint *this)

{
  this->vftptr_0x0 = &WayPoint__vftable_6aaa8c_006aaa8c;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x38 = 0;
  return this;
}



WayPoint * __thiscall WayPoint::~WayPoint(WayPoint *this)

{
  this->vftptr_0x0 = &WayPoint__vftable_6aaa8c_006aaa8c;
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  return (WayPoint *)0x0;
}



undefined4 * __thiscall WayPoint::virt_meth_0x5b2c60(WayPoint *this,byte param_1)

{
  ~WayPoint(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/WayPoint.h"
