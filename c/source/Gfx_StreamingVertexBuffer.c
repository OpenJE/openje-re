#include "../include/Gfx_StreamingVertexBuffer.h"

Gfx_StreamingVertexBuffer * __thiscall
Gfx_StreamingVertexBuffer::Gfx_StreamingVertexBuffer(Gfx_StreamingVertexBuffer *this)

{
  Gfx_StreamingVertexBuffer *extraout_EDX;
  
  Gfx_VertexBuffer::Gfx_VertexBuffer(&this->Gfx_VertexBuffer);
  (extraout_EDX->Gfx_VertexBuffer).vftptr_0x0 =
       (Gfx_VertexBuffer__vftable_67448c *)&Gfx_StreamingVertexBuffer__vftable_6744ac_006744ac;
  extraout_EDX->mbr_0x14 = 0;
  return extraout_EDX;
}



Gfx_StreamingVertexBuffer * __thiscall
Gfx_StreamingVertexBuffer::~Gfx_StreamingVertexBuffer(Gfx_StreamingVertexBuffer *this)

{
  Gfx_StreamingVertexBuffer *pGVar1;
  
  (this->Gfx_VertexBuffer).vftptr_0x0 =
       (Gfx_VertexBuffer__vftable_67448c *)&Gfx_StreamingVertexBuffer__vftable_6744ac_006744ac;
  this->mbr_0x14 = 0;
  pGVar1 = (Gfx_StreamingVertexBuffer *)Gfx_VertexBuffer::~Gfx_VertexBuffer(&this->Gfx_VertexBuffer)
  ;
  return pGVar1;
}



undefined4 * __thiscall
Gfx_StreamingVertexBuffer::virt_meth_0x5056f0(Gfx_StreamingVertexBuffer *this,byte param_1)

{
  ~Gfx_StreamingVertexBuffer(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/Gfx_StreamingVertexBuffer.h"
