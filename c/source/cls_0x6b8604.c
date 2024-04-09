#include "../include/cls_0x6b8604.h"

void __thiscall
cls_0x6b8604::virt_meth_0x5d8772(cls_0x6b8604 *this,uint param_1,float param_2,uint param_3)

{
  float fVar1;
  cls_0x6b8604 *extraout_ECX;
  undefined *puVar2;
  uint uVar3;
  float *pfVar4;
  dword *pdVar5;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
    this = extraout_ECX;
  }
  puVar2 = (undefined *)
           ((this->cls_0x6b848c).mbr_0x1050 * param_1 +
            (this->cls_0x6b848c).mbr_0x1054 * (int)param_2 + (this->cls_0x6b848c).mbr_0x18);
  param_1 = 0;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    pfVar4 = (float *)(param_3 + 8);
    do {
      uVar3 = 0;
      param_2 = 3.402823e+38;
      param_3 = 0;
      pdVar5 = &(this->cls_0x6b848c).mbr_0x38;
      do {
        fVar1 = (pfVar4[-2] - (float)pdVar5[-2]) * (pfVar4[-2] - (float)pdVar5[-2]) +
                (pfVar4[-1] - (float)pdVar5[-1]) * (pfVar4[-1] - (float)pdVar5[-1]) +
                (*pfVar4 - (float)*pdVar5) * (*pfVar4 - (float)*pdVar5) +
                (pfVar4[1] - (float)pdVar5[1]) * (pfVar4[1] - (float)pdVar5[1]);
        if (fVar1 < param_2 != (NAN(fVar1) || NAN(param_2))) {
          uVar3 = param_3;
          param_2 = fVar1;
        }
        param_3 = param_3 + 1;
        pdVar5 = pdVar5 + 4;
      } while (param_3 < 0x100);
      *puVar2 = (char)uVar3;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
      pfVar4 = pfVar4 + 4;
    } while (param_1 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



cls_0x6b8604 * __thiscall cls_0x6b8604::cls_0x6b8604(cls_0x6b8604 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,8,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8604__vftable_6b8604_006b8604;
  return this;
}


#include "../include/cls_0x6b8604.h"
