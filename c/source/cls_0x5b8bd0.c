#include "../include/cls_0x5b8bd0.h"

void __thiscall cls_0x5b8bd0::meth_0x5b8b90(cls_0x5b8bd0 *this,float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)this->mbr_0x8;
  if (pfVar1 != (float *)this->mbr_0xc) {
    do {
      pfVar2 = pfVar1 + 3;
      *pfVar1 = *pfVar1 + *param_1;
      pfVar1[1] = pfVar1[1] + param_1[1];
      pfVar1[2] = pfVar1[2] + param_1[2];
      pfVar1 = pfVar2;
    } while (pfVar2 != (float *)this->mbr_0xc);
  }
  return;
}



cls_0x5b8bd0 * __thiscall cls_0x5b8bd0::cls_0x5b8bd0(cls_0x5b8bd0 *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((void *)this->mbr_0x8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0xc)) {
    do {
      local_c = *puVar1;
      local_8 = puVar1[1];
      local_4 = puVar1[2];
      cls_0x49c610::meth_0x574820((cls_0x49c610 *)&this->mbr_0x4,&local_c);
      puVar1 = puVar1 + 3;
    } while (puVar1 != *(undefined4 **)(param_1 + 0xc));
  }
  return this;
}


