#include "../include/POIWaypoint.h"

POIWaypoint * __thiscall POIWaypoint::POIWaypoint(POIWaypoint *this)

{
  LineSystem *pLVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ffc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GUI::Label::Label(&this->Label,3);
  (this->Label).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&POIWaypoint__vftable_65d15c_0065d15c;
  *(undefined ***)&(this->Label).Window.Base.field_0x18 = &PTR_virt_meth_0x4589d0_0065d150;
  this->mbr_0xe6c = 0;
  this->mbr_0xe70 = 0;
  this->mbr_0xe74 = 0;
  local_4 = 0;
  this->mbr_0xe64 = 0;
  this->mbr_0xe68 = 0;
  this->mbr_0xe78 = 0;
  pLVar1 = (LineSystem *)operator_new(0x100);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pLVar1 != (LineSystem *)0x0) {
    pLVar1 = GUI::LineSystem::LineSystem(pLVar1);
    this->mbr_0xe7c = (dword)pLVar1;
    ExceptionList = local_c;
    return this;
  }
  this->mbr_0xe7c = 0;
  ExceptionList = local_c;
  return this;
}



POIWaypoint * __thiscall POIWaypoint::~POIWaypoint(POIWaypoint *this)

{
  POIWaypoint *pPVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062ffd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Label).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&POIWaypoint__vftable_65d15c_0065d15c;
  *(undefined ***)&(this->Label).Window.Base.field_0x18 = &PTR_virt_meth_0x4589d0_0065d150;
  local_4 = 0;
  if ((undefined4 *)this->mbr_0xe7c != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xe7c)(1);
  }
  local_4 = 0xffffffff;
  pPVar1 = (POIWaypoint *)GUI::Label::~Label(&this->Label);
  ExceptionList = local_c;
  return pPVar1;
}



void __thiscall POIWaypoint::virt_meth_0x458930(POIWaypoint *this)

{
  GUI::Window::virt_meth_0x4afa90((Window *)this);
  if ((int *)this->mbr_0xe7c != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00458945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this->mbr_0xe7c + 4))();
    return;
  }
  return;
}



void __thiscall POIWaypoint::virt_meth_0x458950(POIWaypoint *this)

{
  int iVar1;
  undefined uVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  GUI::Label::virt_meth_0x4a80d0(&this->Label);
  if ((int *)this->mbr_0xe7c != (int *)0x0) {
    iVar1 = *(int *)this->mbr_0xe7c;
    uVar2 = (*(this->Label).Window.Base.vftptr_0x0[5].virt_meth_0x4b2750_8)
                      ((Base *)this,unaff_EDI,unaff_ESI);
    (**(code **)(iVar1 + 8))(uVar2);
  }
  return;
}



int * __thiscall POIWaypoint::virt_meth_0x458a00(POIWaypoint *this,byte param_1)

{
  ~POIWaypoint(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}


#include "../include/POIWaypoint.h"
