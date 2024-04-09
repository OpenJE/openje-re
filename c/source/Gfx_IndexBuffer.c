#include "../include/Gfx_IndexBuffer.h"

Gfx_IndexBuffer * __thiscall Gfx_IndexBuffer::Gfx_IndexBuffer(Gfx_IndexBuffer *this)

{
  this->vftptr_0x0 = &Gfx_IndexBuffer__vftable_67449c_0067449c;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  return this;
}



void __thiscall Gfx_IndexBuffer::virt_meth_0x505510(Gfx_IndexBuffer *this)

{
  int *piVar1;
  
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  piVar1 = (int *)this->mbr_0x4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x4 = 0;
  }
  return;
}



Gfx_IndexBuffer * __thiscall Gfx_IndexBuffer::~Gfx_IndexBuffer(Gfx_IndexBuffer *this)

{
  Gfx_IndexBuffer *pGVar1;
  
  this->vftptr_0x0 = &Gfx_IndexBuffer__vftable_67449c_0067449c;
  pGVar1 = (Gfx_IndexBuffer *)virt_meth_0x505510(this);
  return pGVar1;
}



undefined4 * __thiscall Gfx_IndexBuffer::virt_meth_0x505710(Gfx_IndexBuffer *this,byte param_1)

{
  ~Gfx_IndexBuffer(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/Gfx_IndexBuffer.h"
