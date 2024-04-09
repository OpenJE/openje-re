#include "../include/cls_0x55cfa0.h"

undefined4 * __thiscall
cls_0x55cfa0::meth_0x55cd40(cls_0x55cfa0 *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00638090;
  local_10 = ExceptionList;
  local_18 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)param_1 + 0x51) == '\0') {
    ExceptionList = &local_10;
    puVar1 = FUN_0055c970(local_18,param_2,local_18,param_1 + 3,*(undefined *)(param_1 + 0x14));
    if (*(char *)((int)local_18 + 0x51) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = meth_0x55cd40(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = meth_0x55cd40(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



void __thiscall cls_0x55cfa0::meth_0x55ceb0(cls_0x55cfa0 *this,int param_1)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  
  dVar2 = this->mbr_0x4;
  puVar8 = meth_0x55cd40(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),dVar2);
  *(undefined4 **)(dVar2 + 4) = puVar8;
  this->mbr_0x8 = *(dword *)(param_1 + 8);
  ppiVar3 = (int **)this->mbr_0x4;
  ppiVar4 = (int **)ppiVar3[1];
  if (*(char *)((int)ppiVar4 + 0x51) == '\0') {
    cVar1 = *(char *)((int)*ppiVar4 + 0x51);
    ppiVar7 = (int **)*ppiVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((int)*ppiVar7 + 0x51);
      ppiVar4 = ppiVar7;
      ppiVar7 = (int **)*ppiVar7;
    }
    *ppiVar3 = (int *)ppiVar4;
    iVar5 = *(int *)(this->mbr_0x4 + 4);
    iVar6 = *(int *)(iVar5 + 8);
    cVar1 = *(char *)(iVar6 + 0x51);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x51);
      iVar5 = iVar6;
      iVar6 = *(int *)(iVar6 + 8);
    }
    *(int *)(this->mbr_0x4 + 8) = iVar5;
    return;
  }
  *ppiVar3 = (int *)ppiVar3;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  return;
}



cls_0x55cfa0 * __thiscall cls_0x55cfa0::cls_0x55cfa0(cls_0x55cfa0 *this,undefined *param_1)

{
  dword dVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006380a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->mbr_0x0 = *param_1;
  dVar1 = FUN_0055bee0();
  this->mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x51) = 1;
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  local_8 = 0;
  meth_0x55ceb0(this,(int)param_1);
  ExceptionList = local_10;
  return this;
}


