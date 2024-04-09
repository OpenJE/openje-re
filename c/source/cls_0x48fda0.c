#include "../include/cls_0x48fda0.h"

double * __thiscall cls_0x48fda0::meth_0x48fda0(cls_0x48fda0 *this,double *param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  double *pdVar2;
  undefined4 unaff_EDI;
  double *pdVar3;
  float10 extraout_ST0;
  double local_18;
  double local_10;
  double local_8;
  
  FUN_0048f670(SUB84(*(double *)(this + 4) * *(double *)(this + 4) +
                     *(double *)(this + 2) * *(double *)(this + 2) +
                     *(double *)this * *(double *)this,0),(double)CONCAT44(unaff_ESI,unaff_EDI));
  pdVar2 = &local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(dword *)pdVar2 = this->mbr_0x0;
    this = this + 1;
    pdVar2 = (double *)((int)pdVar2 + 4);
  }
  local_18 = (double)((float10)local_18 * extraout_ST0);
  local_10 = (double)((float10)local_10 * extraout_ST0);
  local_8 = (double)((float10)local_8 * extraout_ST0);
  pdVar2 = &local_18;
  pdVar3 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar3 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  FUN_0048fc80(param_1);
  return param_1;
}


