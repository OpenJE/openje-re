#include "../include/cls_0x5f429a.h"

int __thiscall cls_0x5f429a::meth_0x5f429a(cls_0x5f429a *this,int *param_1)

{
  int *piVar1;
  dword dVar2;
  int iVar3;
  
  piVar1 = param_1;
  if ((cls_0x5f429a *)param_1 == this) {
    return 0;
  }
  switch(param_1[2]) {
  case 0:
    iVar3 = (**(code **)(this->mbr_0x0 + 0xc))(param_1[3]);
    break;
  case 1:
    iVar3 = (**(code **)(this->mbr_0x0 + 0x10))(param_1[3]);
    break;
  case 2:
    iVar3 = (**(code **)(this->mbr_0x0 + 0x14))(param_1 + 3);
    break;
  case 3:
    iVar3 = (**(code **)(this->mbr_0x0 + 0x18))(param_1 + 3);
    break;
  case 4:
    iVar3 = (**(code **)(this->mbr_0x0 + 0x20))(param_1[3]);
    break;
  case 5:
    iVar3 = (**(code **)(*param_1 + 0x48))(&param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
    dVar2 = this->mbr_0x0;
    if (this->mbr_0x8 != 5) {
      iVar3 = (**(code **)(dVar2 + 0x24))(param_1);
      return iVar3;
    }
    iVar3 = piVar1[0xd];
    goto LAB_005f434c;
  case 6:
    iVar3 = (**(code **)(*param_1 + 0x4c))(&param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
    dVar2 = this->mbr_0x0;
    if (this->mbr_0x8 != 6) {
      iVar3 = (**(code **)(dVar2 + 0x28))(param_1);
      return iVar3;
    }
    iVar3 = piVar1[8];
LAB_005f434c:
    iVar3 = (**(code **)(dVar2 + 0x60))(param_1,iVar3);
    break;
  default:
    iVar3 = -0x7789f4a7;
    break;
  case 8:
    iVar3 = (**(code **)(this->mbr_0x0 + 0x2c))(param_1[4]);
  }
  return iVar3;
}


