#include "../include/cls_0x5ecb96.h"

undefined4 __thiscall
cls_0x5ecb96::meth_0x5ecb96(cls_0x5ecb96 *this,undefined4 *param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  
  this->mbr_0x18 = param_2;
  if ((param_2 & 1) == 0) {
    bVar1 = cls_0x5f5883::meth_0x5f5883((cls_0x5f5883 *)this->mbr_0x14);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      cls_0x5f5883::meth_0x5f589b((cls_0x5f5883 *)this->mbr_0x14);
      iVar2 = 0;
      uVar3 = 0;
      if (this->mbr_0x8 != 0) {
        do {
          cls_0x5edee1::meth_0x5edee1((cls_0x5edee1 *)(this->mbr_0x10 + iVar2),0);
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 0x1c;
        } while (uVar3 < this->mbr_0x8);
      }
      cls_0x5f5883::meth_0x5f58c4((cls_0x5f5883 *)this->mbr_0x14);
    }
    cls_0x5f5883::meth_0x5f58d5((cls_0x5f5883 *)this->mbr_0x14);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = this->mbr_0x8;
  }
  return 0;
}



int __thiscall cls_0x5ecb96::meth_0x5ecbfd(cls_0x5ecb96 *this,uint param_1)

{
  int iVar1;
  
  if (param_1 < this->mbr_0x8) {
    iVar1 = cls_0x5edee1::meth_0x5edee1((cls_0x5edee1 *)(param_1 * 0x1c + this->mbr_0x10),1);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -0x7789f794;
  }
  return iVar1;
}



undefined4 __thiscall cls_0x5ecb96::meth_0x5ecc25(cls_0x5ecb96 *this)

{
  if ((*(byte *)&this->mbr_0x18 & 1) == 0) {
    cls_0x5f5883::meth_0x5f58f0((cls_0x5f5883 *)this->mbr_0x14);
  }
  return 0;
}



int __thiscall cls_0x5ecb96::meth_0x5ecc88(cls_0x5ecb96 *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined local_dc [212];
  undefined local_8 [4];
  
  (**(code **)(*(int *)this->mbr_0xc + 0x1c))((int *)this->mbr_0xc,local_dc);
  iVar2 = 0;
  uVar3 = 0;
  if (this->mbr_0x8 != 0) {
    do {
      iVar1 = cls_0x5edeb0::meth_0x5edeb0((cls_0x5edeb0 *)(this->mbr_0x10 + iVar2),(int)local_dc);
      if (iVar1 < 0) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (uVar3 < this->mbr_0x8);
  }
  iVar2 = meth_0x5ecb96(this,(undefined4 *)0x0,0);
  uVar3 = 0;
  if (-1 < iVar2) {
    if (this->mbr_0x8 != 0) {
      do {
        iVar2 = meth_0x5ecbfd(this,uVar3);
        if ((iVar2 < 0) ||
           (iVar2 = (**(code **)(*(int *)this->mbr_0xc + 0x100))((int *)this->mbr_0xc,local_8),
           iVar2 < 0)) {
          meth_0x5ecc25(this);
          return iVar2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < this->mbr_0x8);
    }
    iVar2 = meth_0x5ecc25(this);
    if (-1 < iVar2) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


