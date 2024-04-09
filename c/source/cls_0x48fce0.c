#include "../include/cls_0x48fce0.h"

void __thiscall cls_0x48fce0::meth_0x48fac0(cls_0x48fce0 *this,int param_1,double *param_2)

{
  double *pdVar1;
  int iVar2;
  dword *pdVar3;
  dword *pdVar4;
  
  iVar2 = 3;
  pdVar1 = (double *)(param_1 + 8);
  pdVar3 = &(this->cls_0x48fb60).mbr_0x10;
  pdVar4 = &(this->cls_0x48fb60).mbr_0x48;
  do {
    iVar2 = iVar2 + -1;
    *(double *)(pdVar3 + -4) = *param_2 * pdVar1[-1] + *pdVar1 * param_2[3] + param_2[6] * pdVar1[1]
    ;
    *(double *)(pdVar3 + -2) =
         param_2[1] * pdVar1[-1] + *pdVar1 * param_2[4] + param_2[7] * pdVar1[1];
    *(double *)pdVar3 = param_2[2] * pdVar1[-1] + param_2[8] * pdVar1[1] + *pdVar1 * param_2[5];
    *(double *)pdVar4 =
         pdVar1[1] * param_2[0xb] +
         param_2[9] * pdVar1[-1] + *pdVar1 * param_2[10] +
         *(double *)((param_1 - (int)this) + -8 + (int)(pdVar4 + 2));
    pdVar1 = pdVar1 + 3;
    pdVar3 = pdVar3 + 6;
    pdVar4 = pdVar4 + 2;
  } while (iVar2 != 0);
  return;
}



cls_0x48fce0 * __thiscall cls_0x48fce0::cls_0x48fce0(cls_0x48fce0 *this)

{
  dword *pdVar1;
  int iVar2;
  
  pdVar1 = &(this->cls_0x48fb60).mbr_0x8;
  iVar2 = 3;
  do {
    pdVar1[2] = 0;
    pdVar1[3] = 0;
    *pdVar1 = 0;
    pdVar1[1] = 0;
    ((cls_0x48fb60 *)(pdVar1 + -2))->mbr_0x0 = 0;
    pdVar1[-1] = 0;
    pdVar1 = pdVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (this->cls_0x48fb60).mbr_0x58 = 0;
  (this->cls_0x48fb60).mbr_0x5c = 0;
  (this->cls_0x48fb60).mbr_0x50 = 0;
  (this->cls_0x48fb60).mbr_0x54 = 0;
  (this->cls_0x48fb60).mbr_0x48 = 0;
  (this->cls_0x48fb60).mbr_0x4c = 0;
  cls_0x48fb60::cls_0x48fb60(&this->cls_0x48fb60);
  return this;
}


