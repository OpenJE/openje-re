#include "../include/cls_0x47fcb9.h"

undefined4 __thiscall cls_0x47fcb9::meth_0x47fcb9(cls_0x47fcb9 *this,uint *param_1)

{
  undefined4 uVar1;
  
  if ((((((*param_1 & this->mbr_0x0) == *param_1) && ((this->mbr_0x4 & param_1[1]) == param_1[1]))
       && ((this->mbr_0x8 & param_1[2]) == param_1[2])) &&
      (((this->mbr_0xc & param_1[3]) == param_1[3] && ((this->mbr_0x10 & param_1[4]) == param_1[4]))
      )) && (((this->mbr_0x14 & param_1[5]) == param_1[5] &&
             (((this->mbr_0x18 & param_1[6]) == param_1[6] &&
              ((this->mbr_0x1c & param_1[7]) == param_1[7])))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


