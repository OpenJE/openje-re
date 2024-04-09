#include "../include/cls_0x408990.h"

void __thiscall cls_0x408990::meth_0x408990(cls_0x408990 *this,int param_1)

{
  Entity *this_00;
  undefined4 uVar1;
  int local_8;
  undefined4 local_4;
  
  (&this[3].field_0x62)[*(int *)(this->mbr_0x4 + 4)] = 1;
  local_4 = *(undefined4 *)(param_1 + 0x1dc);
  this_00 = (Entity *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4));
  if (this->mbr_0xbc == 0) {
    uVar1 = Entity::RunScript(this_00,"OnOpen",&local_8,1,&local_4);
    if (((char)uVar1 == '\0') || (local_8 != 0)) {
      Entity::meth_0x548d80((Entity *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x202,0);
      this->mbr_0xbc = 1;
    }
  }
  else {
    uVar1 = Entity::RunScript(this_00,"OnClose",&local_8,1,&local_4);
    if (((char)uVar1 == '\0') || (local_8 != 0)) {
      Entity::meth_0x548d80((Entity *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x202,0);
      this->mbr_0xbc = 0;
      return;
    }
  }
  return;
}


