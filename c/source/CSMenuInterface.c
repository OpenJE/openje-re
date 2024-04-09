#include "../include/CSMenuInterface.h"

CSMenuInterface * __thiscall
CSMenuInterface::CSMenuInterface(CSMenuInterface *this,_String_base *param_1,int param_2)

{
  undefined *this_00;
  int iVar1;
  int **ppiVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  CSMenuInterface *local_2c;
  void *local_28;
  undefined local_24;
  void *pvStack_1c;
  uint uStack_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = (int *)&LAB_00638976;
  uStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &uStack_c;
  local_2c = this;
  if (param_2 != 0) {
    ExceptionList = &uStack_c;
    this->mbr_0x4 = (dword)&DAT_0069802c;
    CEngineInterface::CEngineInterface(&this->CEngineInterface,param_1);
    local_4 = 0;
  }
  this->vftptr_0x0 = &CSMenuInterface__vftable_698020_00698020;
  *(undefined ***)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)) =
       &PTR_virt_meth_0x568b40_00698004;
  iVar1 = *(int *)(this->mbr_0x4 + 4);
  *(int *)((int)&this->vftptr_0x0 + iVar1) = iVar1 + -0xd50;
  this_00 = &this->field_0x8;
  GUI::Window::Window((Window *)this_00,0);
  local_4 = 1;
  uVar4 = FUN_0056e0b0();
  *(undefined4 *)&this->field_0xd2c = uVar4;
  *(undefined4 *)&this->field_0xd30 = 0;
  local_4._0_1_ = 2;
  *(undefined4 *)&this->field_0xd34 = 0;
  *(undefined4 *)&this->field_0xd38 = 0;
  *(undefined4 *)&this->field_0xd3c = 0;
  local_10 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_14 = 0;
  local_24 = 0;
  pcVar3 = "DefaultInterface.ini";
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"DefaultInterface.ini",(uint)(pcVar5 + -0x65202c));
  local_4 = CONCAT31(local_4._1_3_,3);
  (**(code **)(*(int *)this_00 + 0xcc))(&local_28);
  uStack_8._0_1_ = 2;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  local_14 = 0xf;
  uStack_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  pcVar3 = "CSMenu";
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_2c,"CSMenu",(uint)(pcVar5 + -0x698024));
  uStack_8 = (int *)CONCAT31(uStack_8._1_3_,4);
  (**(code **)(*(int *)this_00 + 0x4c))(&local_2c);
  uStack_c = (VFX_Parameter__vftable_673a20 *)CONCAT31(uStack_c._1_3_,2);
  if (0xf < uStack_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(*(int *)this_00 + 100))(0xb4);
  (**(code **)(*(int *)this_00 + 0x54))(1);
  GameActionOperateContainer::meth_0x4959b0
            ((GameActionOperateContainer *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),
             (int *)this_00);
  *(undefined4 *)&this->field_0xd24 = 0;
  ppiVar2 = *(int ***)&this->field_0xd2c;
  if (ppiVar2 == (int **)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->field_0xd28,(int **)&uStack_8,piVar6,(int *)ppiVar2);
  this->mbr_0xd40 = 0;
  this->mbr_0xd44 = 0;
  this->mbr_0xd48 = 0;
  this->mbr_0xd4c = 0;
  ExceptionList = pvStack_1c;
  return this;
}


#include "../include/CSMenuInterface.h"
