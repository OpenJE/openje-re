#include "../include/cls_0x467340.h"

void __thiscall cls_0x467340::meth_0x467340(cls_0x467340 *this,undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_2 + 0x1dc);
  local_4 = param_1;
  piVar2 = (int *)Entity::GetScript((Entity *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)));
  if ((piVar2 == (int *)0x0) ||
     (cVar1 = (**(code **)(*piVar2 + 0x14))("UseSkill",&param_2,2,&local_8), cVar1 == '\0')) {
    FUN_00497120((byte *)"Couldn\'t execute GetSkillDifficulty on the entity %s\r\n");
  }
  return;
}


