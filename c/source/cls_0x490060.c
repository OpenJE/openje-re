#include "../include/cls_0x490060.h"

void __thiscall
cls_0x490060::meth_0x490060(cls_0x490060 *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  this->mbr_0xdc = this->mbr_0xdc + 1;
  this->mbr_0xbc = this->mbr_0xbc + param_3;
  (**(code **)(*(int *)this->mbr_0x8 + 0x118))((int *)this->mbr_0x8,param_1,param_2,param_3);
  return;
}



void __thiscall
cls_0x490060::meth_0x4900a0
          (cls_0x490060 *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,int param_5)

{
  this->mbr_0xe0 = this->mbr_0xe0 + 1;
  this->mbr_0xbc = this->mbr_0xbc + param_5;
  (**(code **)(*(int *)this->mbr_0x8 + 0x11c))
            ((int *)this->mbr_0x8,param_1,param_2,param_3,param_4,param_5);
  return;
}



void __thiscall cls_0x490060::meth_0x502be0(cls_0x490060 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->mbr_0xb8 = this->mbr_0xb8 + 1;
  this->mbr_0xb4 = this->mbr_0xb4 + 1;
  QueryPerformanceCounter((LARGE_INTEGER *)&this->mbr_0x6a8);
  fVar1 = (float)*(longlong *)&this->mbr_0x6a8 * *(float *)&this[1].field_0x4;
  *(float *)&this[1].field_0xc = fVar1;
  fVar2 = fVar1 - (float)this[1].mbr_0x8;
  if (0.5 < fVar2) {
    fVar3 = (float)this->mbr_0xb4;
    if ((int)this->mbr_0xb4 < 0) {
      fVar3 = fVar3 + 4.294967e+09;
    }
    this->mbr_0xb4 = 0;
    *(float *)&this->field_0xb0 = fVar3 / fVar2;
    this[1].mbr_0x8 = (dword)fVar1;
  }
  this->mbr_0xbc = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0xd4 = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xe4 = 0;
  return;
}



undefined4 __thiscall cls_0x490060::meth_0x503320(cls_0x490060 *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(&this->field_0x3ac + param_1 * 4) != param_2) {
    uVar1 = (**(code **)(*(int *)this->mbr_0x8 + 200))((int *)this->mbr_0x8,param_1,param_2);
    *(int *)(&this->field_0x3ac + param_1 * 4) = param_2;
  }
  return uVar1;
}



void __thiscall
cls_0x490060::meth_0x503360(cls_0x490060 *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(*(int *)this->mbr_0x8 + 0x94))((int *)this->mbr_0x8,param_1,param_2);
  this->mbr_0xd8 = this->mbr_0xd8 + 1;
  return;
}



undefined4 __thiscall cls_0x490060::meth_0x503390(cls_0x490060 *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int *)this->mbr_0x664 <= param_1) {
    FUN_00497120((byte *)"DeviceSetTexture failed - Stage: %d < TextureStageCount: %d\n");
    return 0x8876086a;
  }
  uVar1 = 0;
  if (*(int *)((int)param_1 * 0x78 + this->mbr_0x66c) != param_2) {
    uVar1 = (**(code **)(*(int *)this->mbr_0x8 + 0xf4))((int *)this->mbr_0x8,param_1,param_2);
    *(int *)((int)param_1 * 0x78 + this->mbr_0x66c) = param_2;
    this->mbr_0xd0 = this->mbr_0xd0 + 1;
  }
  return uVar1;
}



undefined4 __thiscall
cls_0x490060::meth_0x503400(cls_0x490060 *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (param_1 * 0x1e + param_2) * 4;
  uVar1 = 0;
  if (*(int *)(iVar2 + 4 + this->mbr_0x66c) != param_3) {
    uVar1 = (**(code **)(*(int *)this->mbr_0x8 + 0xfc))
                      ((int *)this->mbr_0x8,param_1,param_2,param_3);
    *(int *)(this->mbr_0x66c + 4 + iVar2) = param_3;
  }
  return uVar1;
}


