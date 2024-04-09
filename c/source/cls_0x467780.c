#include "../include/cls_0x467780.h"

uint __thiscall
cls_0x467780::meth_0x467780(cls_0x467780 *this,undefined4 param_1,uint param_2,uint param_3)

{
  dword dVar1;
  int iVar2;
  cls_0x467780 *local_4;
  
  local_4 = this;
  cls_0x4542d0::meth_0x4a2630((cls_0x4542d0 *)&this->mbr_0x370,(int *)&local_4,&param_1);
  if ((((local_4 != (cls_0x467780 *)this->mbr_0x374) && (dVar1 = local_4->mbr_0x14, dVar1 != 0)) &&
      (local_4 = (cls_0x467780 *)((int)(local_4->mbr_0x18 - dVar1) >> 2), param_2 < local_4)) &&
     (iVar2 = *(int *)(*(int *)(dVar1 + param_2 * 4) + 4),
     local_4 = (cls_0x467780 *)CONCAT31((int3)((uint)iVar2 >> 8),1),
     param_3 < *(uint *)(iVar2 + 0x50))) {
    return (uint)local_4;
  }
  return (uint)local_4 & 0xffffff00;
}


