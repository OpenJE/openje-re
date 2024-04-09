#include "../include/Gfx_RS_B_LM_FOW.h"

Gfx_RS_B_LM_FOW * __thiscall Gfx_RS_B_LM_FOW::~Gfx_RS_B_LM_FOW(Gfx_RS_B_LM_FOW *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  Gfx_RS_B_LM_FOW *pGVar2;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_B_LM_FOW__vftable_67c738_0067c738;
  local_4 = 0;
  pGVar2 = DAT_0070bc84;
  if (DAT_0070bc84 != (Gfx_RS_B_LM_FOW *)0x0) {
    DAT_0070bc84 = (Gfx_RS_B_LM_FOW *)((int)&DAT_0070bc84[-1].mbr_0x14 + 3);
    pGVar2 = DAT_0070bc84;
    if ((DAT_0070bc84 == (Gfx_RS_B_LM_FOW *)0x0) &&
       (pGVar2 = DAT_0070bc88, DAT_0070bc88 != (Gfx_RS_B_LM_FOW *)0x0)) {
      uVar1 = (*((DAT_0070bc88->Gfx_RenderStyle).vftptr_0x0)->virt_meth_0x6162e5_8)(DAT_0070bc88);
      pGVar2 = (Gfx_RS_B_LM_FOW *)CONCAT31(extraout_var,uVar1);
      DAT_0070bc88 = (Gfx_RS_B_LM_FOW *)0x0;
    }
  }
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar2;
}



undefined4 * __thiscall Gfx_RS_B_LM_FOW::virt_meth_0x537410(Gfx_RS_B_LM_FOW *this,byte param_1)

{
  ~Gfx_RS_B_LM_FOW(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Gfx_RenderStyle;
}



Gfx_RS_B_LM_FOW * __thiscall
Gfx_RS_B_LM_FOW::Gfx_RS_B_LM_FOW
          (Gfx_RS_B_LM_FOW *this,dword param_1,dword param_2,dword param_3,dword param_4,
          dword param_5)

{
  this->mbr_0x4 = param_1;
  this->mbr_0x8 = param_2;
  this->mbr_0xc = param_3;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_B_LM_FOW__vftable_67c738_0067c738;
  this->mbr_0x10 = param_4;
  this->mbr_0x14 = param_5;
  return this;
}


#include "../include/Gfx_RS_B_LM_FOW.h"
