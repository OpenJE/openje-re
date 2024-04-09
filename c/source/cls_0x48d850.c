#include "../include/cls_0x48d850.h"

void __thiscall cls_0x48d850::meth_0x48d850(cls_0x48d850 *this,undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  if ((int **)this->mbr_0x44 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)this->mbr_0x44;
  }
  if (piVar3 != (int *)this->mbr_0x44) {
    do {
      piVar1 = (int *)piVar3[2];
      if (((piVar1 != (int *)0x0) && (*(char *)(piVar1 + 0x1f) != '\0')) &&
         (cVar2 = (**(code **)(*piVar1 + 0x48))(), cVar2 == '\0')) {
        (**(code **)(*piVar1 + 8))(param_1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)this->mbr_0x44);
  }
  return;
}


