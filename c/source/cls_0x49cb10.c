#include "../include/cls_0x49cb10.h"

void __thiscall cls_0x49cb10::meth_0x49cb10(cls_0x49cb10 *this,float *param_1,float *param_2)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x44;
  *param_1 = *(float *)(dVar1 + 0x108);
  param_1[1] = *(float *)(dVar1 + 0x10c);
  param_1[2] = *(float *)(dVar1 + 0x110);
  *param_2 = *(float *)(dVar1 + 0x114);
  param_2[1] = *(float *)(dVar1 + 0x118);
  param_2[2] = *(float *)(dVar1 + 0x11c);
  *param_1 = *(float *)&this[1].field_0x18 * *param_1;
  param_1[1] = param_1[1] * *(float *)&this[1].field_0x1c;
  param_1[2] = *(float *)&this[1].field_0x20 * param_1[2];
  *param_2 = *(float *)&this[1].field_0x18 * *param_2;
  param_2[1] = param_2[1] * *(float *)&this[1].field_0x1c;
  param_2[2] = *(float *)&this[1].field_0x20 * param_2[2];
  return;
}


