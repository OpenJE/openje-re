#include "../include/VFX_VEGCache.h"

VFX_VEGCache * __thiscall VFX_VEGCache::~VFX_VEGCache(VFX_VEGCache *this)

{
  cls_0x4e1e50 local_14;
  VFX_VEGCache *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00633fbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &VFX_VEGCache__vftable_6729d4_006729d4;
  local_14.mbr_0x0 = *(int *)this->mbr_0x8;
  local_4 = 0;
  local_10 = this;
  if ((int *)local_14.mbr_0x0 != (int *)this->mbr_0x8) {
    do {
      if (*(undefined4 **)(local_14.mbr_0x0 + 0x28) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_14.mbr_0x0 + 0x28))(1);
      }
      cls_0x4e1e50::meth_0x4e1e50(&local_14);
    } while (local_14.mbr_0x0 != this->mbr_0x8);
  }
  local_4 = 0xffffffff;
  cls_0x4e1df0::meth_0x4e24d0
            ((cls_0x4e1df0 *)&this->mbr_0x4,(int **)&local_10,*(int ***)(int **)this->mbr_0x8,
             (int **)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x8);
}



VFX_VEGCache * __thiscall VFX_VEGCache::VFX_VEGCache(VFX_VEGCache *this)

{
  dword dVar1;
  undefined local_1;
  
  local_1 = (undefined)((uint)this >> 0x18);
  this->vftptr_0x0 = &VFX_VEGCache__vftable_6729d4_006729d4;
  *(undefined *)&this->mbr_0x4 = local_1;
  dVar1 = FUN_004e1fe0();
  this->mbr_0x8 = dVar1;
  *(undefined *)(dVar1 + 0x31) = 1;
  *(dword *)(this->mbr_0x8 + 4) = this->mbr_0x8;
  *(dword *)this->mbr_0x8 = this->mbr_0x8;
  *(dword *)(this->mbr_0x8 + 8) = this->mbr_0x8;
  this->mbr_0xc = 0;
  return this;
}



int * __thiscall VFX_VEGCache::virt_meth_0x4e2ab0(VFX_VEGCache *this,byte param_1)

{
  ~VFX_VEGCache(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/VFX_VEGCache.h"
