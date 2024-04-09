#include "../include/cls_0x478f6d.h"

void __thiscall cls_0x478f6d::meth_0x478f6d(cls_0x478f6d *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  undefined3 extraout_var;
  
  this->mbr_0x19 = param_3 != '\0';
  this->mbr_0x0 = param_1;
  this->mbr_0x8 = param_1;
  this->mbr_0x4 = param_2;
  this->mbr_0x18 = param_3 != '\x02';
  cVar1 = FUN_00474ef1((int *)(*(int *)(this->mbr_0x14 + 0x40) + param_1 * 0xc),param_2);
  this->mbr_0x10 = CONCAT31(extraout_var,cVar1);
  if (param_3 == '\x02') {
    this->mbr_0x10 = (CONCAT31(extraout_var,cVar1) + 2) % 3;
  }
  this->mbr_0xc = this->mbr_0x10;
  return;
}



int __thiscall cls_0x478f6d::meth_0x479444(cls_0x478f6d *this)

{
  dword dVar1;
  char cVar2;
  dword dVar3;
  undefined3 extraout_var;
  dword dVar4;
  uint uVar5;
  
  dVar1 = this->mbr_0x8;
  this->mbr_0xc = this->mbr_0x10;
  dVar4 = *(dword *)(*(int *)(this->mbr_0x14 + 0x44) + (dVar1 + this->mbr_0x10 + dVar1 * 2) * 4);
  this->mbr_0x8 = dVar4;
  dVar3 = dVar1;
  if (dVar4 != this->mbr_0x0) {
    do {
      if (this->mbr_0x8 != 0xffffffff) {
        dVar4 = FUN_00475157(*(int *)(this->mbr_0x14 + 0x44) + this->mbr_0x8 * 0xc,dVar3);
        this->mbr_0x10 = dVar4;
        if (this->mbr_0x18 == 0) {
          uVar5 = dVar4 + 2;
        }
        else {
          uVar5 = dVar4 + 1;
        }
        this->mbr_0x10 = uVar5 % 3;
        return dVar1;
      }
      if (this->mbr_0x18 == 0) {
        return dVar1;
      }
      if (this->mbr_0x19 != 0) {
        return dVar1;
      }
      this->mbr_0x18 = 0;
      this->mbr_0x8 = this->mbr_0x0;
      cVar2 = FUN_00474ef1((int *)(*(int *)(this->mbr_0x14 + 0x40) + this->mbr_0x0 * 0xc),
                           this->mbr_0x4);
      this->mbr_0x10 = (CONCAT31(extraout_var,cVar2) + 2U) % 3;
      this->mbr_0xc = (this->mbr_0xc + 2) % 3;
      dVar3 = this->mbr_0x8;
      dVar4 = *(dword *)(*(int *)(this->mbr_0x14 + 0x44) + (dVar3 * 3 + this->mbr_0x10) * 4);
      this->mbr_0x8 = dVar4;
    } while (dVar4 != this->mbr_0x0);
  }
  this->mbr_0x8 = 0xffffffff;
  return dVar1;
}


