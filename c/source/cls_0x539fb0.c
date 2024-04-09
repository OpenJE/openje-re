#include "../include/cls_0x539fb0.h"

int __thiscall cls_0x539fb0::meth_0x539fb0(cls_0x539fb0 *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(DAT_0070b250 + 0x4c);
  uVar2 = this->mbr_0x18;
  if ((char)uVar2 < '\0') {
    uVar3 = this->mbr_0x2c;
    if (uVar3 <= uVar1) {
      if (uVar1 < this->mbr_0x30 + uVar3) {
        this->mbr_0x28 =
             ((this->mbr_0x38 - this->mbr_0x34) * (uVar1 - uVar3)) / this->mbr_0x30 + this->mbr_0x34
        ;
      }
      else {
        this->mbr_0x28 = this->mbr_0x38;
        this->mbr_0x18 = uVar2 & 0xffffff7f;
      }
    }
  }
  else if (((uVar2 & 0x100) != 0) && (uVar3 = this->mbr_0x2c, uVar3 <= uVar1)) {
    if (uVar1 < this->mbr_0x30 + uVar3) {
      this->mbr_0x28 =
           this->mbr_0x34 - ((this->mbr_0x34 - this->mbr_0x38) * (uVar1 - uVar3)) / this->mbr_0x30;
    }
    else {
      this->mbr_0x28 = this->mbr_0x38;
      this->mbr_0x18 = uVar2 & 0xfffffeff;
    }
  }
  if ((int)this->mbr_0x28 < 0) {
    this->mbr_0x28 = 0;
  }
  if (100 < (int)this->mbr_0x28) {
    this->mbr_0x28 = 100;
  }
  return (int)(*(int *)(DAT_0070b250 + 0x28) * this->mbr_0x1c * this->mbr_0x28) / 10000;
}



undefined4 __thiscall cls_0x539fb0::meth_0x53a080(cls_0x539fb0 *this,dword param_1,char param_2)

{
  dword dVar1;
  undefined4 uVar2;
  
  if (DAT_0070b250->field_0x48 == '\0') {
    return 1;
  }
  this->mbr_0x1c = param_1;
  dVar1 = meth_0x539fb0(this);
  this->mbr_0x20 = dVar1;
  if ((dVar1 != this->mbr_0x24) || (param_2 == '\x01')) {
    uVar2 = cls_0x52a1f0::meth_0x52a1f0(DAT_0070b250,dVar1);
    (**(code **)(*(int *)this->mbr_0x4 + 0x14))((int *)this->mbr_0x4,uVar2,0);
    this->mbr_0x24 = this->mbr_0x20;
  }
  return 0;
}



void __thiscall cls_0x539fb0::meth_0x53a0e0(cls_0x539fb0 *this,char param_1)

{
  meth_0x53a080(this,this->mbr_0x1c,param_1);
  return;
}



void __thiscall cls_0x539fb0::meth_0x53a100(cls_0x539fb0 *this)

{
  uint uVar1;
  int iVar2;
  
  meth_0x53a0e0(this,'\0');
  if ((*(byte *)&this->mbr_0x18 & 4) != 0) {
    iVar2 = (**(code **)(*(int *)this->mbr_0xc + 0x38))((int *)this->mbr_0xc,this->mbr_0x0,0);
    uVar1 = this->mbr_0x18;
    if ((uVar1 & 0x20) == 0) {
      if (iVar2 != 0) {
        this->mbr_0x18 = uVar1 & 0xfffffffb | 0x48;
      }
    }
    else if (iVar2 == 0) {
      this->mbr_0x18 = uVar1 & 0xffffffdf;
      return;
    }
  }
  return;
}


