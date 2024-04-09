#include "../include/cls_0x5067c0.h"

void __thiscall cls_0x5067c0::meth_0x5067c0(cls_0x5067c0 *this,char param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 != '\0') - 1 & 0x20;
  this->mbr_0x0 = uVar1;
  (**(code **)(*(int *)this->mbr_0x28 + 4))(0x1c0000,uVar1 | 0x208,0,0);
  uVar1 = this->mbr_0x40 + 0x1c0000;
  this->mbr_0x40 = uVar1;
  if (this->mbr_0x48 < uVar1) {
    this->mbr_0x48 = uVar1;
  }
  (**(code **)(*(int *)this->mbr_0x30 + 4))(0x60000,this->mbr_0x0 | 0x208,DAT_007083a4,0);
  uVar1 = this->mbr_0x44 + 0x60000;
  this->mbr_0x44 = uVar1;
  if (this->mbr_0x4c < uVar1) {
    this->mbr_0x4c = uVar1;
  }
  return;
}



void __thiscall cls_0x5067c0::meth_0x506890(cls_0x5067c0 *this)

{
  int *piVar1;
  
  meth_0x5067c0(this,this->mbr_0x0 == 0);
  if ((int **)this->mbr_0x38 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)this->mbr_0x38;
  }
  if (piVar1 != (int *)this->mbr_0x38) {
    do {
      DialogueManager::CommandAttackModeSelect((DialogueManager *)piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)this->mbr_0x38);
  }
  return;
}


