#include "../include/cls_0x474d3c.h"

cls_0x474d3c * __thiscall cls_0x474d3c::cls_0x474d3c(cls_0x474d3c *this,dword param_1)

{
  this->mbr_0x0 = 0xffff;
  this->mbr_0x2 = 0xffff;
  this->mbr_0x4 = 0xffff;
  this->mbr_0x10 = 0;
  this->mbr_0x11 = 0;
  this->mbr_0xc = param_1;
  return this;
}



void __thiscall
cls_0x474d3c::meth_0x478fcb(cls_0x474d3c *this,ushort param_1,ushort param_2,char param_3)

{
  char cVar1;
  undefined3 extraout_var;
  
  this->mbr_0x0 = param_1;
  this->mbr_0x4 = param_1;
  this->mbr_0x11 = param_3 != '\0';
  this->mbr_0x2 = param_2;
  this->mbr_0x10 = param_3 != '\x02';
  cVar1 = FUN_00474f1a((ushort *)(*(int *)(this->mbr_0xc + 0x40) + (uint)param_1 * 6),(uint)param_2)
  ;
  this->mbr_0x8 = (word)CONCAT31(extraout_var,cVar1);
  if (param_3 == '\x02') {
    this->mbr_0x8 = (word)((ulonglong)((CONCAT31(extraout_var,cVar1) & 0xffff) + 2) % 3);
  }
  this->mbr_0x6 = this->mbr_0x8;
  return;
}



undefined4 __thiscall cls_0x474d3c::meth_0x479507(cls_0x474d3c *this)

{
  ushort uVar1;
  word wVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined2 uVar7;
  undefined3 extraout_var;
  uint uVar6;
  
  uVar1 = this->mbr_0x4;
  this->mbr_0x6 = this->mbr_0x8;
  iVar5 = (uint)uVar1 * 3 + (uint)this->mbr_0x8;
  wVar2 = *(word *)(*(int *)(this->mbr_0xc + 0x44) + iVar5 * 2);
  uVar7 = (undefined2)((uint)iVar5 >> 0x10);
  this->mbr_0x4 = wVar2;
  uVar4 = uVar1;
  if (wVar2 != this->mbr_0x0) {
    do {
      if (this->mbr_0x4 != 0xffff) {
        uVar4 = FUN_00475263(*(int *)(this->mbr_0xc + 0x44) + (uint)this->mbr_0x4 * 6,uVar4);
        this->mbr_0x8 = uVar4;
        uVar6 = uVar4 + 1;
        if (this->mbr_0x10 == 0) {
          uVar6 = uVar4 + 2;
        }
        uVar7 = 0;
        this->mbr_0x8 = (word)((ulonglong)uVar6 % 3);
        goto LAB_004795b9;
      }
      if ((this->mbr_0x10 == 0) || (this->mbr_0x11 != 0)) goto LAB_004795b9;
      this->mbr_0x10 = 0;
      this->mbr_0x4 = this->mbr_0x0;
      cVar3 = FUN_00474f1a((ushort *)(*(int *)(this->mbr_0xc + 0x40) + (uint)this->mbr_0x0 * 6),
                           (uint)this->mbr_0x2);
      this->mbr_0x8 = (word)((ulonglong)((CONCAT31(extraout_var,cVar3) & 0xffff) + 2) % 3);
      this->mbr_0x6 = (word)((ulonglong)(this->mbr_0x6 + 2) % 3);
      uVar4 = this->mbr_0x4;
      iVar5 = (uint)uVar4 * 3 + (uint)this->mbr_0x8;
      wVar2 = *(word *)(*(int *)(this->mbr_0xc + 0x44) + iVar5 * 2);
      uVar7 = (undefined2)((uint)iVar5 >> 0x10);
      this->mbr_0x4 = wVar2;
    } while (wVar2 != this->mbr_0x0);
  }
  this->mbr_0x4 = 0xffff;
LAB_004795b9:
  return CONCAT22(uVar7,uVar1);
}


