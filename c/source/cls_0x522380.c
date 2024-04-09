#include "../include/cls_0x522380.h"

void __thiscall cls_0x522380::meth_0x522000(cls_0x522380 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar4 = 1.0 / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  *(float *)(this + 4) = fVar2 * fVar4;
  *(float *)(this + 8) = fVar3 * fVar4;
  *(float *)this = fVar4 * fVar1;
  return;
}



float10 * __thiscall
cls_0x522380::meth_0x522100(cls_0x522380 *this,float10 *__return_storage_ptr__,float *param_1)

{
  return (float10 *)this;
}



float * __thiscall cls_0x522380::meth_0x522210(cls_0x522380 *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = *(float *)(this + 8);
  fVar3 = param_2[2];
  fVar4 = *(float *)this;
  fVar5 = param_2[1];
  fVar6 = *(float *)this;
  fVar7 = *param_2;
  fVar8 = *(float *)(this + 4);
  *param_1 = param_2[2] * *(float *)(this + 4) - param_2[1] * *(float *)(this + 8);
  param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return param_1;
}



float * __thiscall cls_0x522380::meth_0x5222a0(cls_0x522380 *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(this + 4);
  fVar2 = param_2[1];
  fVar3 = *(float *)(this + 8);
  fVar4 = param_2[2];
  *param_1 = *(float *)this - *param_2;
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar3 - fVar4;
  return param_1;
}



float * __thiscall cls_0x522380::meth_0x522310(cls_0x522380 *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(this + 4);
  fVar2 = param_2[1];
  fVar3 = *(float *)(this + 8);
  fVar4 = param_2[2];
  *param_1 = *(float *)this + *param_2;
  param_1[1] = fVar1 + fVar2;
  param_1[2] = fVar3 + fVar4;
  return param_1;
}



cls_0x522380 * __thiscall cls_0x522380::cls_0x522380(cls_0x522380 *this,float *param_1)

{
  *(float *)this = *param_1 + *(float *)this;
  *(float *)(this + 4) = param_1[1] + *(float *)(this + 4);
  *(float *)(this + 8) = param_1[2] + *(float *)(this + 8);
  return this;
}


