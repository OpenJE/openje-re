#include "../include/Gfx_RS_Base_FOW.h"

Gfx_RS_Base_FOW * __thiscall Gfx_RS_Base_FOW::~Gfx_RS_Base_FOW(Gfx_RS_Base_FOW *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  Gfx_RS_Base_FOW *pGVar2;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_Base_FOW__vftable_67c6fc_0067c6fc;
  local_4 = 0;
  pGVar2 = DAT_0070bc60;
  if (DAT_0070bc60 != (Gfx_RS_Base_FOW *)0x0) {
    pGVar2 = (Gfx_RS_Base_FOW *)((int)&DAT_0070bc60[-1].mbr_0x10 + 3);
    DAT_0070bc60 = pGVar2;
    if (pGVar2 == (Gfx_RS_Base_FOW *)0x0) {
      if (DAT_0070bc64 != (int *)0x0) {
        (**(code **)(*DAT_0070bc64 + 8))(DAT_0070bc64);
        DAT_0070bc64 = (int *)0x0;
      }
      pGVar2 = DAT_0070bc68;
      if (DAT_0070bc68 != (Gfx_RS_Base_FOW *)0x0) {
        uVar1 = (*((DAT_0070bc68->Gfx_RenderStyle).vftptr_0x0)->virt_meth_0x6162e5_8)(DAT_0070bc68);
        pGVar2 = (Gfx_RS_Base_FOW *)CONCAT31(extraout_var,uVar1);
        DAT_0070bc68 = (Gfx_RS_Base_FOW *)0x0;
      }
    }
  }
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar2;
}



undefined4 * __thiscall Gfx_RS_Base_FOW::virt_meth_0x5372b0(Gfx_RS_Base_FOW *this,byte param_1)

{
  ~Gfx_RS_Base_FOW(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Gfx_RenderStyle;
}



Gfx_RS_Base_FOW * __thiscall
Gfx_RS_Base_FOW::Gfx_RS_Base_FOW(Gfx_RS_Base_FOW *this,dword param_1,dword param_2,dword param_3)

{
  this->mbr_0x8 = param_1;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_Base_FOW__vftable_67c6fc_0067c6fc;
  this->mbr_0x4 = 0;
  this->mbr_0xc = param_2;
  this->mbr_0x10 = param_3;
  return this;
}


#include "../include/Gfx_RS_Base_FOW.h"
