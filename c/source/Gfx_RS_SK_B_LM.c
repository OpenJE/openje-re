#include "../include/Gfx_RS_SK_B_LM.h"

Gfx_RS_SK_B_LM * __thiscall Gfx_RS_SK_B_LM::~Gfx_RS_SK_B_LM(Gfx_RS_SK_B_LM *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  Gfx_RS_SK_B_LM *pGVar2;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_SK_B_LM__vftable_67c7ec_0067c7ec;
  local_4 = 0;
  pGVar2 = DAT_0070bd04;
  if (DAT_0070bd04 != (Gfx_RS_SK_B_LM *)0x0) {
    pGVar2 = (Gfx_RS_SK_B_LM *)((int)&DAT_0070bd04[-1].mbr_0x18 + 3);
    DAT_0070bd04 = pGVar2;
    if (pGVar2 == (Gfx_RS_SK_B_LM *)0x0) {
      if (DAT_0070bd08 != (int *)0x0) {
        (**(code **)(*DAT_0070bd08 + 8))(DAT_0070bd08);
        DAT_0070bd08 = (int *)0x0;
      }
      pGVar2 = DAT_0070bd0c;
      if (DAT_0070bd0c != (Gfx_RS_SK_B_LM *)0x0) {
        uVar1 = (*((DAT_0070bd0c->Gfx_RenderStyle).vftptr_0x0)->virt_meth_0x6162e5_8)(DAT_0070bd0c);
        pGVar2 = (Gfx_RS_SK_B_LM *)CONCAT31(extraout_var,uVar1);
        DAT_0070bd0c = (Gfx_RS_SK_B_LM *)0x0;
      }
    }
  }
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar2;
}



undefined4 * __thiscall Gfx_RS_SK_B_LM::virt_meth_0x537810(Gfx_RS_SK_B_LM *this,byte param_1)

{
  ~Gfx_RS_SK_B_LM(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Gfx_RenderStyle;
}



Gfx_RS_SK_B_LM * __thiscall
Gfx_RS_SK_B_LM::Gfx_RS_SK_B_LM
          (Gfx_RS_SK_B_LM *this,dword param_1,dword param_2,dword param_3,dword param_4,int param_5)

{
  this->mbr_0x8 = param_1;
  this->mbr_0xc = param_2;
  this->mbr_0x10 = param_3;
  this->mbr_0x14 = param_4;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_SK_B_LM__vftable_67c7ec_0067c7ec;
  this->mbr_0x4 = 0;
  this->mbr_0x18 = (uint)(param_5 != 0);
  return this;
}


#include "../include/Gfx_RS_SK_B_LM.h"
