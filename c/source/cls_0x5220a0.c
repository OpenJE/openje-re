#include "../include/cls_0x5220a0.h"

void __thiscall
cls_0x5220a0::meth_0x5220a0(cls_0x5220a0 *this,float param_1,float param_2,float *param_3)

{
  param_3[1] = (float)this->mbr_0x4;
  *param_3 = param_1 * *(float *)this + param_2 * *(float *)(this + 1);
  param_3[2] = param_1 * *(float *)(this + 1) - param_2 * *(float *)this;
  return;
}


