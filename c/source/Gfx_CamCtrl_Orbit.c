#include "../include/Gfx_CamCtrl_Orbit.h"

Gfx_CamCtrl_Orbit * __thiscall Gfx_CamCtrl_Orbit::Gfx_CamCtrl_Orbit(Gfx_CamCtrl_Orbit *this)

{
  Gfx_CamCtrl::Gfx_CamCtrl(&this->Gfx_CamCtrl);
  *(undefined4 *)&(this->Gfx_CamCtrl).field_0x84 = 0;
  *(undefined4 *)&(this->Gfx_CamCtrl).field_0x88 = 0x3f800000;
  *(undefined4 *)&(this->Gfx_CamCtrl).field_0x8c = 0;
  *(undefined4 *)&(this->Gfx_CamCtrl).field_0x90 = 0;
  *(undefined4 *)&(this->Gfx_CamCtrl).field_0x94 = 0;
  *(undefined4 *)&(this->Gfx_CamCtrl).field_0x98 = 0;
  (this->Gfx_CamCtrl).mbr_0xa0 = 0xbfc7f1e7;
  *(undefined4 *)&(this->Gfx_CamCtrl).field_0x9c = 0;
  (this->Gfx_CamCtrl).mbr_0xb0 = 0;
  (this->Gfx_CamCtrl).vftptr_0x0 =
       (Gfx_CamCtrl__vftable_670fa8 *)&Gfx_CamCtrl_Orbit__vftable_670fb8_00670fb8;
  (this->Gfx_CamCtrl).mbr_0xa4 = 0x3f800000;
  (this->Gfx_CamCtrl).mbr_0xa8 = 0xbfc7f1e7;
  (this->Gfx_CamCtrl).mbr_0xac = 0x3fc7f1e7;
  (this->Gfx_CamCtrl).mbr_0xb4 = 0x447a0000;
  return this;
}



int * __thiscall Gfx_CamCtrl_Orbit::virt_meth_0x4c6880(Gfx_CamCtrl_Orbit *this,byte param_1)

{
  ~Gfx_CamCtrl_Orbit(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



Gfx_CamCtrl_Orbit * __thiscall Gfx_CamCtrl_Orbit::~Gfx_CamCtrl_Orbit(Gfx_CamCtrl_Orbit *this)

{
  Gfx_CamCtrl_Orbit *pGVar1;
  
  (this->Gfx_CamCtrl).vftptr_0x0 =
       (Gfx_CamCtrl__vftable_670fa8 *)&Gfx_CamCtrl_Orbit__vftable_670fb8_00670fb8;
  pGVar1 = (Gfx_CamCtrl_Orbit *)FUN_00529fb0((Gfx_CamCtrl__vftable_670fa8 **)this);
  return pGVar1;
}


#include "../include/Gfx_CamCtrl_Orbit.h"
