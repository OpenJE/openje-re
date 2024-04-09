#include "../include/cls_0x5ec82f.h"

int __thiscall
cls_0x5ec82f::meth_0x5ec82f
          (cls_0x5ec82f *this,undefined4 param_1,int *param_2,int *param_3,int **param_4)

{
  dword dVar1;
  int iVar2;
  cls_0x5f427b *this_00;
  
  if (*param_2 != 0x4d524150) {
    return -0x7789f4a7;
  }
  this->mbr_0x0 = (dword)(param_2 + 4);
  this->mbr_0x4 = (dword)param_3;
  this->mbr_0x8 = param_2[3];
  dVar1 = FUN_005f56b5();
  this->mbr_0xc = dVar1;
  if (dVar1 == 0) {
    return -0x7ff8fff2;
  }
  iVar2 = cls_0x5e89f7::meth_0x5e89f7((cls_0x5e89f7 *)param_2);
  if ((cls_0x5ec82f *)param_4 == this) {
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)this->mbr_0xc + 4))();
    }
    else {
      if (*(int *)(iVar2 + 0xc) != param_2[3]) {
        this_00 = (cls_0x5f427b *)FUN_005f56b5();
        if (this_00 == (cls_0x5f427b *)0x0) {
          return -0x7ff8fff2;
        }
        iVar2 = (**(code **)(this_00->mbr_0x0 + 8))(iVar2);
        if ((-1 < iVar2) &&
           (iVar2 = cls_0x5f429a::meth_0x5f429a((cls_0x5f429a *)this->mbr_0xc,(int *)this_00),
           -1 < iVar2)) {
          cls_0x5f427b::meth_0x5f427b(this_00);
          return 0;
        }
        cls_0x5f427b::meth_0x5f427b(this_00);
        return iVar2;
      }
      iVar2 = (**(code **)(*(int *)this->mbr_0xc + 8))(iVar2);
    }
  }
  else {
    iVar2 = cls_0x5f429a::meth_0x5f429a((cls_0x5f429a *)this->mbr_0xc,param_4[3]);
  }
  if (-1 < iVar2) {
    return 0;
  }
  return iVar2;
}


