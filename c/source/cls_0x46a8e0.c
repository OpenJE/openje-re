#include "../include/cls_0x46a8e0.h"

undefined __thiscall cls_0x46a8e0::meth_0x46a8e0(cls_0x46a8e0 *this,int param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_9;
  uint local_8;
  cls_0x46a8e0 *local_4;
  
  local_9 = 0;
  local_8 = 0;
  local_4 = this;
  do {
    uVar1 = local_8;
    if (((&local_4->mbr_0x14)[local_8] != 0) &&
       (*(int *)((&local_4->mbr_0x14)[local_8] + 0x1dc) == param_1)) {
      local_9 = 1;
      if (*(int **)((int)param_2 + 4) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)((int)param_2 + 4);
      }
      iVar2 = FUN_00433760(iVar3,*(undefined4 *)(iVar3 + 4),&local_8);
      cls_0x401b00::meth_0x436410((cls_0x401b00 *)param_2,1);
      *(int *)(iVar3 + 4) = iVar2;
      **(int **)(iVar2 + 4) = iVar2;
    }
    local_8 = uVar1 + 1;
  } while (local_8 < 6);
  return local_9;
}



int __thiscall cls_0x46a8e0::meth_0x55fea0(cls_0x46a8e0 *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((undefined4 *)this->mbr_0xc == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(undefined4 *)this->mbr_0xc;
  }
  while( true ) {
    if (puVar2 == (undefined4 *)this->mbr_0xc) {
      return 0;
    }
    iVar1 = puVar2[2];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1dc) == param_1)) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return iVar1;
}


