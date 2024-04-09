#include "../include/cls_0x4c8c60.h"

void __thiscall cls_0x4c8c60::meth_0x4c8c60(cls_0x4c8c60 *this,int param_1,int *param_2)

{
  dword dVar1;
  float fVar2;
  
  dVar1 = *(dword *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  this->mbr_0x0 = dVar1;
  fVar2 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)(this + 2) = (double)fVar2;
  return;
}


