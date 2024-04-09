#include "../include/cls_0x56d380.h"

void __thiscall cls_0x56d380::meth_0x56d380(cls_0x56d380 *this)

{
  dword dVar1;
  int *piVar2;
  
  this->mbr_0x18c = this->mbr_0x1a8;
  this->mbr_0x180 = this->mbr_0x1a4;
  this->mbr_0x17c = this->mbr_0x1a0;
  this->mbr_0x19c = this->mbr_0x1ac;
  this->mbr_0x178 = this->mbr_0x1b0;
  if (DAT_0070bd98 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  dVar1 = (**(code **)(*piVar2 + 0x5c))();
  if ((dVar1 == this->mbr_0xb4) && (this->mbr_0x178 != 0)) {
    (**(code **)(*DAT_00707ce4 + 0x128))
              (this->mbr_0x17c,this->mbr_0x180,this->mbr_0x184,this->mbr_0x188,this->mbr_0x18c,
               this->mbr_0x190,this->mbr_0x194,this->mbr_0x198,this->mbr_0x19c,0);
  }
  return;
}


