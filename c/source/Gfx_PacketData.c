#include "../include/Gfx_PacketData.h"

undefined4 * __thiscall Gfx_PacketData::virt_meth_0x4229f0(Gfx_PacketData *this,byte param_1)

{
  ~Gfx_PacketData(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



Gfx_PacketData * __thiscall Gfx_PacketData::~Gfx_PacketData(Gfx_PacketData *this)

{
  Gfx_BasePacketData *pGVar1;
  
  (this->Gfx_BasePacketData).vftptr_0x0 =
       (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
  pGVar1 = Gfx_BasePacketData::~Gfx_BasePacketData(&this->Gfx_BasePacketData);
  return (Gfx_PacketData *)pGVar1;
}


#include "../include/Gfx_PacketData.h"
