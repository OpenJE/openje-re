#include "../include/Gfx_ModelBone.h"

Gfx_ModelBone * __thiscall Gfx_ModelBone::~Gfx_ModelBone(Gfx_ModelBone *this)

{
  (this->Gfx_BaseObject).vftptr_0x0 =
       (Gfx_BaseObject__vftable_651b28 *)&Gfx_ModelBone__vftable_677ea0_00677ea0;
  if (0xf < this->mbr_0x5c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x48);
  }
  this->mbr_0x5c = 0xf;
  this->mbr_0x58 = 0;
  *(undefined *)&this->mbr_0x48 = 0;
  (this->Gfx_BaseObject).vftptr_0x0 = &Gfx_BaseObject__vftable_651b28_00651b28;
  return (Gfx_ModelBone *)0x0;
}



undefined4 * __thiscall Gfx_ModelBone::virt_meth_0x524370(Gfx_ModelBone *this,byte param_1)

{
  ~Gfx_ModelBone(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



Gfx_ModelBone * __thiscall Gfx_ModelBone::Gfx_ModelBone(Gfx_ModelBone *this,undefined4 *param_1)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_BaseObject).vftptr_0x0 = &Gfx_BaseObject__vftable_651b28_00651b28;
  pdVar3 = &(this->Gfx_BaseObject).mbr_0x4;
  pdVar2 = param_1;
  for (iVar1 = 0x10; pdVar2 = pdVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar3 = pdVar3 + 1;
  }
  (this->Gfx_BaseObject).vftptr_0x0 =
       (Gfx_BaseObject__vftable_651b28 *)&Gfx_ModelBone__vftable_677ea0_00677ea0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0xf;
  local_4 = 0;
  *(undefined *)&this->mbr_0x48 = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x44,(_String_base *)(param_1 + 0x11),0,0xffffffff);
  this->mbr_0x60 = param_1[0x18];
  ExceptionList = local_c;
  return this;
}


#include "../include/Gfx_ModelBone.h"
