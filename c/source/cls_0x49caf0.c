#include "../include/cls_0x49caf0.h"

undefined4 __thiscall cls_0x49caf0::meth_0x49caf0(cls_0x49caf0 *this)

{
  if (this->mbr_0x148 != 0) {
    return *(undefined4 *)(this->mbr_0x148 + 0x6c);
  }
  if (this->mbr_0x144 != 0) {
    return *(undefined4 *)(this->mbr_0x144 + 0x58);
  }
  return 0;
}



undefined4 * __thiscall cls_0x49caf0::meth_0x4a06e0(cls_0x49caf0 *this)

{
  Gfx_ModelInstance *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631a7b;
  local_c = ExceptionList;
  pGVar1 = (Gfx_ModelInstance *)0x0;
  if (this->mbr_0x0 != 0) {
    ExceptionList = &local_c;
    pGVar1 = (Gfx_ModelInstance *)operator_new(0xcc);
    local_4 = 0;
    if (pGVar1 == (Gfx_ModelInstance *)0x0) {
      pGVar1 = (Gfx_ModelInstance *)0x0;
    }
    else {
      pGVar1 = Gfx_ModelInstance::Gfx_ModelInstance(pGVar1,this);
    }
    if (pGVar1 != (Gfx_ModelInstance *)0x0) {
      this->mbr_0x120 = this->mbr_0x120 + 1;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)pGVar1;
}


