#include "../include/cls_0x5b2c80.h"

void __thiscall cls_0x5b2c80::meth_0x5b2c80(cls_0x5b2c80 *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if ((this->mbr_0x48 != 0) != ((byte)param_1 != 0)) {
    this->mbr_0x48 = (byte)param_1;
    param_1 = *(int **)(int *)this->mbr_0x54;
    if (param_1 != (int *)this->mbr_0x54) {
      do {
        FUN_0059f890((void *)param_1[4],piVar1);
        cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_1);
      } while (param_1 != (int *)this->mbr_0x54);
    }
  }
  return;
}


