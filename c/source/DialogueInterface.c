#include "../include/DialogueInterface.h"

DialogueInterface * __thiscall
DialogueInterface::DialogueInterface(DialogueInterface *this,_String_base *param_1,int param_2)

{
  int iVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a324;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    this->mbr_0x4 = (dword)&DAT_0069ee6c;
    CEngineInterface::CEngineInterface(&this->CEngineInterface,param_1);
    local_4 = 0;
  }
  this->vftptr_0x0 = &DialogueInterface__vftable_69edbc_0069edbc;
  *(undefined ***)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)) =
       &PTR_virt_meth_0x593620_0069eda0;
  iVar1 = *(int *)(this->mbr_0x4 + 4);
  *(int *)((int)&this->vftptr_0x0 + iVar1) = iVar1 + -0x274;
  ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&this->field_0x8);
  local_4 = 1;
  ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&this->field_0x138);
  local_4._0_1_ = 2;
  this->field_0x268 = (undefined)param_2;
  iVar1 = FUN_004c6640();
  *(int *)&this->field_0x26c = iVar1;
  *(undefined *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)&this->field_0x26c + 4) = *(int *)&this->field_0x26c;
  *(undefined4 *)*(undefined4 *)&this->field_0x26c = *(undefined4 *)&this->field_0x26c;
  *(int *)(*(int *)&this->field_0x26c + 8) = *(int *)&this->field_0x26c;
  *(undefined4 *)&this->field_0x270 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00497120((byte *)
               "DIALOGUEINTERFACE INSTANTIATED\n - This debug line is to double check that it\'s not being created more than once."
              );
  ExceptionList = pvStack_c;
  return this;
}



int * __thiscall
DialogueInterface::virt_meth_0x596780(DialogueInterface *this,undefined4 param_1,undefined4 param_2)

{
  DialogueWindow *pDVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a49b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pDVar1 = (DialogueWindow *)FUN_004a7680(0xdc8);
  local_4 = 0;
  if (pDVar1 != (DialogueWindow *)0x0) {
    pDVar1 = DialogueWindow::DialogueWindow(pDVar1,(undefined)param_1,(undefined)param_2,(int)this);
    ExceptionList = local_c;
    return (int *)pDVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


#include "../include/DialogueInterface.h"
