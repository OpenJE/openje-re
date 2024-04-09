#include "../include/Gfx_NodeAttribute.h"

Gfx_NodeAttribute * __thiscall Gfx_NodeAttribute::~Gfx_NodeAttribute(Gfx_NodeAttribute *this)

{
  this->vftptr_0x0 = &Gfx_NodeAttribute__vftable_66b488_0066b488;
  if (0xf < this->mbr_0x20) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc);
  }
  this->mbr_0x20 = 0xf;
  this->mbr_0x1c = 0;
  *(undefined *)&this->mbr_0xc = 0;
  return (Gfx_NodeAttribute *)0x0;
}


#include "../include/Gfx_NodeAttribute.h"
