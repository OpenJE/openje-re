#include "../include/cls_0x5ad6c0.h"

void __thiscall cls_0x5ad6c0::meth_0x5ad6c0(cls_0x5ad6c0 *this)

{
  if ((void *)this->mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  return;
}



void __thiscall cls_0x5ad6c0::meth_0x5ad6d0(cls_0x5ad6c0 *this,uint param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = (int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3;
  if ((int)this->mbr_0x0 <= iVar6) {
    piVar3 = FUN_0061aba0((int *)this->mbr_0x4,(uint *)(iVar6 + 1));
    uVar4 = (iVar6 - this->mbr_0x0) + 1;
    this->mbr_0x4 = (dword)piVar3;
    puVar7 = (undefined4 *)(this->mbr_0x0 + (int)piVar3);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    this->mbr_0x0 = (dword)(uint *)(iVar6 + 1);
  }
  uVar5 = param_1 & 0x80000007;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
  }
  bVar2 = '\x01' << ((byte)uVar5 & 0x1f);
  if (param_2 != '\0') {
    *(byte *)(this->mbr_0x4 + iVar6) = *(byte *)(this->mbr_0x4 + iVar6) | bVar2;
    return;
  }
  pbVar1 = (byte *)(this->mbr_0x4 + iVar6);
  *pbVar1 = *pbVar1 & ~bVar2;
  return;
}



int __thiscall cls_0x5ad6c0::meth_0x5ad760(cls_0x5ad6c0 *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  
  iVar1 = param_1 + ((int)param_1 >> 0x1f & 7U);
  iVar2 = iVar1 >> 3;
  uVar3 = (uint3)(iVar1 >> 0xb);
  if ((int)this->mbr_0x0 <= iVar2) {
    return (uint)uVar3 << 8;
  }
  uVar4 = param_1 & 0x80000007;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
  }
  return CONCAT31(uVar3,('\x01' << ((byte)uVar4 & 0x1f) & *(byte *)(this->mbr_0x4 + iVar2)) != 0);
}


