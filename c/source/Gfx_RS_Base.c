#include "../include/Gfx_RS_Base.h"

Gfx_RS_Base * __thiscall Gfx_RS_Base::~Gfx_RS_Base(Gfx_RS_Base *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  Gfx_RS_Base *pGVar2;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_Base__vftable_67c5d0_0067c5d0;
  local_4 = 0;
  pGVar2 = DAT_0070bbb8;
  if (DAT_0070bbb8 != (Gfx_RS_Base *)0x0) {
    DAT_0070bbb8 = (Gfx_RS_Base *)((int)&DAT_0070bbb8[-1].mbr_0xc + 3);
    pGVar2 = DAT_0070bbb8;
    if ((DAT_0070bbb8 == (Gfx_RS_Base *)0x0) &&
       (pGVar2 = DAT_0070bbbc, DAT_0070bbbc != (Gfx_RS_Base *)0x0)) {
      uVar1 = (*((DAT_0070bbbc->Gfx_RenderStyle).vftptr_0x0)->virt_meth_0x6162e5_8)(DAT_0070bbbc);
      pGVar2 = (Gfx_RS_Base *)CONCAT31(extraout_var,uVar1);
      DAT_0070bbbc = (Gfx_RS_Base *)0x0;
    }
  }
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar2;
}



undefined4 * __thiscall Gfx_RS_Base::virt_meth_0x536c00(Gfx_RS_Base *this,byte param_1)

{
  ~Gfx_RS_Base(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Gfx_RenderStyle;
}



Gfx_RS_Base * __thiscall
Gfx_RS_Base::Gfx_RS_Base(Gfx_RS_Base *this,dword param_1,dword param_2,int param_3)

{
  this->mbr_0x4 = param_1;
  this->mbr_0x8 = param_2;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_Base__vftable_67c5d0_0067c5d0;
  this->mbr_0xc = (uint)(param_3 != 0);
  return this;
}


#include "../include/Gfx_RS_Base.h"
