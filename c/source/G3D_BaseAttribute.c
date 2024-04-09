#include "../include/G3D_BaseAttribute.h"

undefined4 * __thiscall G3D_BaseAttribute::virt_meth_0x4cb170(G3D_BaseAttribute *this,byte param_1)

{
  ~G3D_BaseAttribute(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



G3D_BaseAttribute * __thiscall G3D_BaseAttribute::~G3D_BaseAttribute(G3D_BaseAttribute *this)

{
  this->vftptr_0x0 = &G3D_BaseAttribute__vftable_671ce0_00671ce0;
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  return (G3D_BaseAttribute *)0x0;
}


#include "../include/G3D_BaseAttribute.h"
