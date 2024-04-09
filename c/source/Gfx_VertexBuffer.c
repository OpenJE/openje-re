#include "../include/Gfx_VertexBuffer.h"

Gfx_VertexBuffer * __thiscall Gfx_VertexBuffer::Gfx_VertexBuffer(Gfx_VertexBuffer *this)

{
  this->vftptr_0x0 = &Gfx_VertexBuffer__vftable_67448c_0067448c;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  return this;
}



Gfx_VertexBuffer * __thiscall Gfx_VertexBuffer::~Gfx_VertexBuffer(Gfx_VertexBuffer *this)

{
  Gfx_VertexBuffer *pGVar1;
  
  this->vftptr_0x0 = &Gfx_VertexBuffer__vftable_67448c_0067448c;
  pGVar1 = (Gfx_VertexBuffer *)FUN_00505380((int)this);
  return pGVar1;
}



undefined4 * __thiscall Gfx_VertexBuffer::virt_meth_0x5056d0(Gfx_VertexBuffer *this,byte param_1)

{
  ~Gfx_VertexBuffer(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/Gfx_VertexBuffer.h"
