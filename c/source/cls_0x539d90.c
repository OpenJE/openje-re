#include "../include/cls_0x539d90.h"

HRESULT __thiscall cls_0x539d90::meth_0x539b70(cls_0x539d90 *this)

{
  HRESULT HVar1;
  int iVar2;
  
  HVar1 = CoInitialize((LPVOID)0x0);
  if (HVar1 < 0) {
    return HVar1;
  }
  HVar1 = CoCreateInstance((IID *)&rclsid_006c96c8,(LPUNKNOWN)0x0,3,(IID *)&riid_006c9678,
                           (LPVOID *)this);
  if ((((-1 < HVar1) &&
       (iVar2 = (***(code ***)(undefined4 *)this->mbr_0x0)
                          ((undefined4 *)this->mbr_0x0,&DAT_006c96b8,&this->mbr_0x4), -1 < iVar2))
      && (iVar2 = (***(code ***)(undefined4 *)this->mbr_0x0)
                            ((undefined4 *)this->mbr_0x0,&DAT_006c9688,&this->mbr_0x8), -1 < iVar2))
     && ((iVar2 = (***(code ***)(undefined4 *)this->mbr_0x0)
                            ((undefined4 *)this->mbr_0x0,&DAT_006c96a8,&this->mbr_0xc), -1 < iVar2
         && (iVar2 = (***(code ***)(undefined4 *)this->mbr_0x0)
                               ((undefined4 *)this->mbr_0x0,&DAT_006c9698,&this->mbr_0x10),
            -1 < iVar2)))) {
    this->mbr_0x20 = 1;
    return 0;
  }
  return HVar1;
}



undefined4 __thiscall cls_0x539d90::meth_0x539c90(cls_0x539d90 *this)

{
  int *piVar1;
  int iVar2;
  
  if (this->mbr_0x20 == 0) {
    return 9;
  }
  piVar1 = (int *)this->mbr_0x4;
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1), iVar2 != 0)) {
    return 9;
  }
  return 0;
}



int __thiscall cls_0x539d90::meth_0x539cc0(cls_0x539d90 *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(DAT_0070b250 + 0x4c);
  uVar2 = this->mbr_0x34;
  if ((uVar2 & 1) == 0) {
    if (((uVar2 & 2) != 0) && (uVar3 = this->mbr_0x38, uVar3 <= uVar1)) {
      if (uVar1 < this->mbr_0x3c + uVar3) {
        this->mbr_0x30 =
             this->mbr_0x40 - ((this->mbr_0x40 - this->mbr_0x44) * (uVar1 - uVar3)) / this->mbr_0x3c
        ;
      }
      else {
        this->mbr_0x30 = this->mbr_0x44;
        this->mbr_0x34 = uVar2 & 0xfffffffd;
      }
    }
  }
  else {
    uVar3 = this->mbr_0x38;
    if (uVar3 <= uVar1) {
      if (uVar1 < this->mbr_0x3c + uVar3) {
        this->mbr_0x30 =
             ((this->mbr_0x44 - this->mbr_0x40) * (uVar1 - uVar3)) / this->mbr_0x3c + this->mbr_0x40
        ;
      }
      else {
        this->mbr_0x30 = this->mbr_0x44;
        this->mbr_0x34 = uVar2 & 0xfffffffe;
      }
    }
  }
  if ((int)this->mbr_0x30 < 0) {
    this->mbr_0x30 = 0;
  }
  if (100 < (int)this->mbr_0x30) {
    this->mbr_0x30 = 100;
  }
  return (int)(*(int *)(DAT_0070b250 + 0x28) * this->mbr_0x24 * this->mbr_0x30) / 10000;
}



cls_0x539d90 * __thiscall cls_0x539d90::cls_0x539d90(cls_0x539d90 *this)

{
  dword dVar1;
  
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 100;
  dVar1 = meth_0x539cc0(this);
  this->mbr_0x28 = dVar1;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x2c = 100;
  this->mbr_0x30 = 100;
  return this;
}



undefined4 __thiscall cls_0x539d90::meth_0x539df0(cls_0x539d90 *this,dword param_1,char param_2)

{
  dword dVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((this->mbr_0x20 != 0) && (this->mbr_0x10 != 0)) {
    this->mbr_0x24 = param_1;
    dVar1 = meth_0x539cc0(this);
    this->mbr_0x28 = dVar1;
    if ((dVar1 != this->mbr_0x2c) || (param_2 == '\x01')) {
      uVar2 = cls_0x52a1f0::meth_0x52a1f0(DAT_0070b250,dVar1);
      iVar3 = (**(code **)(*(int *)this->mbr_0x10 + 0x1c))((int *)this->mbr_0x10,uVar2);
      this->mbr_0x2c = this->mbr_0x28;
      if (iVar3 != 0) {
        return 9;
      }
    }
    return 0;
  }
  return 9;
}



void __thiscall cls_0x539d90::meth_0x539e50(cls_0x539d90 *this,char param_1)

{
  meth_0x539df0(this,this->mbr_0x24,param_1);
  return;
}



void __thiscall cls_0x539d90::meth_0x539e70(cls_0x539d90 *this)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  dword dVar3;
  undefined *puStack_24;
  int *piStack_20;
  undefined *puVar4;
  undefined4 uStack_14;
  undefined local_8 [8];
  
  if (this->mbr_0x20 != 0) {
    piStack_20 = (int *)0x539e84;
    meth_0x539e50(this,'\0');
    piStack_20 = (int *)this->mbr_0xc;
    puVar4 = local_8;
    puStack_24 = (undefined *)0x539e92;
    (**(code **)(*piStack_20 + 0x1c))();
    puStack_24 = &stack0xffffffe8;
    (**(code **)(*(int *)this->mbr_0xc + 0x24))((int *)this->mbr_0xc);
    if ((double)CONCAT44(uStack_14,unaff_ESI) <= (double)CONCAT44(puVar4,piStack_20)) {
      meth_0x539c90(this);
    }
    piVar1 = (int *)this->mbr_0x4;
    if (piVar1 == (int *)0x0) {
      this->mbr_0x1c = 0;
    }
    else {
      dVar3 = 0;
      iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,0,&puStack_24);
      if (iVar2 == 0) {
        this->mbr_0x1c = dVar3;
        return;
      }
    }
  }
  return;
}


