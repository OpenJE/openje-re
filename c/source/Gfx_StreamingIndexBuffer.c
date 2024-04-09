#include "../include/Gfx_StreamingIndexBuffer.h"

Gfx_StreamingIndexBuffer * __thiscall
Gfx_StreamingIndexBuffer::Gfx_StreamingIndexBuffer(Gfx_StreamingIndexBuffer *this)

{
  Gfx_StreamingIndexBuffer *extraout_EDX;
  
  Gfx_IndexBuffer::Gfx_IndexBuffer(&this->Gfx_IndexBuffer);
  extraout_EDX->mbr_0x10 = 0;
  extraout_EDX->mbr_0x14 = 0;
  (extraout_EDX->Gfx_IndexBuffer).vftptr_0x0 =
       (Gfx_IndexBuffer__vftable_67449c *)&Gfx_StreamingIndexBuffer__vftable_6744bc_006744bc;
  return extraout_EDX;
}



Gfx_StreamingIndexBuffer * __thiscall
Gfx_StreamingIndexBuffer::~Gfx_StreamingIndexBuffer(Gfx_StreamingIndexBuffer *this)

{
  Gfx_StreamingIndexBuffer *pGVar1;
  
  (this->Gfx_IndexBuffer).vftptr_0x0 =
       (Gfx_IndexBuffer__vftable_67449c *)&Gfx_StreamingIndexBuffer__vftable_6744bc_006744bc;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  pGVar1 = (Gfx_StreamingIndexBuffer *)Gfx_IndexBuffer::~Gfx_IndexBuffer(&this->Gfx_IndexBuffer);
  return pGVar1;
}



undefined4 * __thiscall
Gfx_StreamingIndexBuffer::virt_meth_0x505730(Gfx_StreamingIndexBuffer *this,byte param_1)

{
  ~Gfx_StreamingIndexBuffer(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/Gfx_StreamingIndexBuffer.h"
