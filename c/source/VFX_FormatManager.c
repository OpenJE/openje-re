#include "../include/VFX_FormatManager.h"

VFX_FormatManager * __thiscall VFX_FormatManager::~VFX_FormatManager(VFX_FormatManager *this)

{
  VFX_FormatManager *pVVar1;
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006350b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &VFX_FormatManager__vftable_67396c_0067396c;
  local_4 = 1;
  cls_0x4fb510::meth_0x4fb510((cls_0x4fb510 *)&this->mbr_0x28);
  local_4 = local_4 & 0xffffff00;
  cls_0x4fc0e0::meth_0x4fb560((cls_0x4fc0e0 *)&this->mbr_0x18);
  local_4 = 0xffffffff;
  pVVar1 = (VFX_FormatManager *)cls_0x4fd150::meth_0x4fd150((cls_0x4fd150 *)&this->mbr_0x4);
  ExceptionList = local_c;
  return pVVar1;
}



undefined4 * __thiscall VFX_FormatManager::virt_meth_0x4fd660(VFX_FormatManager *this,byte param_1)

{
  ~VFX_FormatManager(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/VFX_FormatManager.h"
