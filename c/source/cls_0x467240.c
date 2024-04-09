#include "../include/cls_0x467240.h"

void __thiscall cls_0x467240::meth_0x467240(cls_0x467240 *this)

{
  char cVar1;
  int *piVar2;
  uint unaff_retaddr;
  int iStack_44;
  cls_0x568c20 local_40;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630418;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  cls_0x568c20::cls_0x568c20(&local_40,0);
  local_4 = 0;
  piVar2 = (int *)Entity::GetScript((Entity *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)));
  if ((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x10))("ShowSkills"), cVar1 != '\0')
     ) {
    cVar1 = (**(code **)(*piVar2 + 0x18))("ShowSkills",&iStack_44);
    if (cVar1 == '\0') {
      FUN_00497120((byte *)"Couldn\'t execute GetShowSkills on the entity %s\r\n");
    }
    if (iStack_44 != 0) {
      local_4 = 0xffffffff;
      GUI::ScrollBar::meth_0x52afb0((ScrollBar *)&local_40);
      goto LAB_00467315;
    }
  }
  local_4 = 0xffffffff;
  GUI::ScrollBar::meth_0x52afb0((ScrollBar *)&local_40);
LAB_00467315:
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


