#include "../include/cls_0x55c050.h"

void __thiscall cls_0x55c050::meth_0x55c050(cls_0x55c050 *this,int *param_1,byte *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0xbd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (*(byte *)(puVar2 + 3) < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xbd) == '\0');
  }
  if ((puVar4 != puVar1) && (*(byte *)(puVar4 + 3) <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}


