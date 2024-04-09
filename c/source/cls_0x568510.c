#include "../include/cls_0x568510.h"

void __thiscall cls_0x568510::meth_0x568510(cls_0x568510 *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  this->mbr_0xd40 = 0;
  iVar1 = CWorldContainerInterface::Get_Interface_mbr_0x24
                    ((CWorldContainerInterface *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4))
                    );
  puVar2 = *(undefined4 **)(iVar1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  (**(code **)(*(int *)puVar2[2] + 100))(0xff);
  (**(code **)(this->mbr_0x8 + 0x54))(1);
  return;
}



void __thiscall cls_0x568510::meth_0x568710(cls_0x568510 *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (this->mbr_0xd44 <= param_1 - this->mbr_0xd40) {
    meth_0x568510(this);
    return;
  }
  uVar2 = FUN_00616e24();
  iVar1 = CWorldContainerInterface::Get_Interface_mbr_0x24
                    ((CWorldContainerInterface *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4))
                    );
  if (*(int **)(iVar1 + 4) == (int *)0x0) {
    (**(code **)(*piRam00000008 + 100))((int)uVar2);
    return;
  }
  (**(code **)(**(int **)(**(int **)(iVar1 + 4) + 8) + 100))((int)uVar2);
  return;
}


