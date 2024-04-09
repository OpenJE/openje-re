#include "../include/cls_0x56e070.h"

void __thiscall cls_0x56e070::meth_0x56e070(cls_0x56e070 *this,int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)(undefined4 *)puVar3[1] + 0xdd) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xdd) == '\0');
  }
  *param_1 = (int)puVar3;
  return;
}



void __thiscall cls_0x56e070::meth_0x56ed30(cls_0x56e070 *this,int **param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  meth_0x56e070(this,(int *)&param_2,param_2);
  if ((param_2 != (int *)this->mbr_0x4) && (param_2[3] <= *piVar1)) {
    *param_1 = param_2;
    return;
  }
  *param_1 = (int *)this->mbr_0x4;
  return;
}


