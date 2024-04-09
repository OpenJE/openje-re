#include "../include/ModelCache.h"

ModelCache * __thiscall ModelCache::~ModelCache(ModelCache *this)

{
  cls_0x5638e0 *this_00;
  dword unaff_EBX;
  int *piVar1;
  ModelCache *local_14;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639b76;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &ModelCache__vftable_69b9bc_0069b9bc;
  piVar1 = *(int **)(int *)this->mbr_0x14;
  local_4 = 1;
  local_14 = this;
  if (piVar1 != (int *)this->mbr_0x14) {
    do {
      this_00 = *(cls_0x5638e0 **)((int)piVar1 + 0x28);
      if (this_00 != (cls_0x5638e0 *)0x0) {
        cls_0x5638e0::meth_0x567f50(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      cls_0x4d8d70::meth_0x585040((cls_0x4d8d70 *)&this->mbr_0x10,&local_10);
      cls_0x41d550::meth_0x4c8eb0((cls_0x41d550 *)&stack0xffffffe4);
      piVar1 = (int *)unaff_EBX;
    } while (unaff_EBX != this->mbr_0x14);
  }
  DAT_0070c528 = 0;
  puStack_8 = (undefined *)((uint)puStack_8 & 0xffffff00);
  cls_0x4d8d70::meth_0x585640
            ((cls_0x4d8d70 *)&this->mbr_0x10,(int **)&local_14,*(int ***)(int **)this->mbr_0x14,
             (int **)this->mbr_0x14);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x14);
}



undefined4 * __thiscall ModelCache::virt_meth_0x585e00(ModelCache *this,byte param_1)

{
  ~ModelCache(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/ModelCache.h"
