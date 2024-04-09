#include "../include/CFloatingTextInterface.h"

int __thiscall CFloatingTextInterface::meth_0x58f9c0(CFloatingTextInterface *this)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = (int *)&this->field_0x14c;
  do {
    cVar1 = (**(code **)(*piVar3 + 0x58))();
    if (cVar1 != '\0') {
      return (int)(&this->field_0x14c + uVar2 * 0x1ba0);
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 0x6e8;
  } while (uVar2 < 0x20);
  return 0;
}



CFloatingTextInterface * __thiscall
CFloatingTextInterface::CFloatingTextInterface
          (CFloatingTextInterface *this,_String_base *param_1,int *param_2)

{
  int **ppiVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  dword *pdVar5;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639f9f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    this->mbr_0x4 = (dword)&DAT_0069dea8;
    CEngineInterface::CEngineInterface(&this->CEngineInterface,param_1);
    local_4 = 0;
  }
  this->vftptr_0x0 = &CFloatingTextInterface__vftable_69de90_0069de90;
  *(undefined ***)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)) =
       &PTR_virt_meth_0x5900c0_0069de74;
  iVar4 = *(int *)(this->mbr_0x4 + 4);
  *(int *)((int)&this->vftptr_0x0 + iVar4) = iVar4 + -0x3754c;
  ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&this->field_0x8);
  local_4 = 1;
  ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&this->field_0xa4);
  local_4._0_1_ = 2;
  uVar2 = FUN_0056e0b0();
  *(undefined4 *)&this->field_0x144 = uVar2;
  *(undefined4 *)&this->field_0x148 = 0;
  local_4._0_1_ = 3;
  _eh_vector_constructor_iterator_
            (&this->field_0x14c,0x1ba0,0x20,CFloatingLabel::CFloatingLabel,
             CFloatingLabel::~CFloatingLabel);
  ppiVar1 = *(int ***)&this->field_0x144;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->field_0x140,&param_2,piVar3,(int *)ppiVar1);
  pdVar5 = &this->mbr_0xfcc;
  iVar4 = 0x20;
  do {
    piVar3 = (int *)(pdVar5 + -0x3a0);
    GameActionOperateContainer::meth_0x4959b0
              ((GameActionOperateContainer *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),
               piVar3);
    (**(code **)(*piVar3 + 0x54))(1);
    pdVar5[-5] = 0;
    (**(code **)(*piVar3 + 0xa4))(pdVar5);
    (**(code **)(*pdVar5 + 0xe8))(1);
    (**(code **)(*pdVar5 + 0x54))(1);
    pdVar5 = pdVar5 + 0x6e8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  ExceptionList = pvStack_c;
  return this;
}



void __thiscall
CFloatingTextInterface::meth_0x590500
          (CFloatingTextInterface *this,uint param_1,undefined4 param_2,undefined4 param_3,
          int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          int param_9)

{
  int *piVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  DWORD DVar6;
  int unaff_EBX;
  uint unaff_EBP;
  uint unaff_ESI;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar3 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  if (DAT_0070bd98 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_0070bd98 + 0xc;
  }
  iVar4 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4) + 0x5c))();
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1ec) == iVar4)) {
    piVar5 = (int *)meth_0x58f9c0(this);
    if (piVar5 != (int *)0x0) {
      uStack_18 = 0;
      iStack_1c = 0x590567;
      (**(code **)(*piVar5 + 0x54))();
      iStack_1c = param_5;
      uStack_20 = 0x590576;
      (**(code **)(*piVar5 + 0xcc))();
      uStack_20 = 1;
      uStack_24 = param_6;
      uStack_28 = param_7;
      iStack_2c = param_5;
      uStack_30 = 0x590591;
      (**(code **)(*piVar5 + 0x148))();
      uStack_30 = ((unaff_ESI | 0xffffff00) << 8 | unaff_EBP & 0xff) << 8 | (uint)piVar5 & 0xff;
      iStack_34 = 0x5905c3;
      (**(code **)(*piVar5 + 0x168))();
      iStack_34 = param_9;
      iStack_38 = 0x5905d2;
      (**(code **)(*piVar5 + 0x180))();
      iStack_38 = param_9;
      iStack_3c = 0x5905e1;
      (**(code **)(*piVar5 + 0x188))();
      if ((char)param_9 == '\0') {
        iStack_3c = iStack_1c;
        (**(code **)(*piVar5 + 300))();
        (**(code **)(*piVar5 + 0x10))(param_4,param_5);
      }
      else {
        iStack_3c = 0x300;
        iVar3 = param_5;
        (**(code **)(*piVar5 + 0x10))(param_5);
        (**(code **)(*piVar5 + 300))(uStack_24);
        iVar4 = (**(code **)(*piVar5 + 0x160))();
        (**(code **)(*piVar5 + 0x10))(param_5,iVar4 + 1);
        if (param_4 == 1) {
          uStack_20 = (**(code **)(*piVar5 + 0x15c))();
          piVar1 = piVar5 + 0x3a0;
          (**(code **)(*piVar5 + 0x48))(&stack0x00000000,&uStack_30);
          (**(code **)(*piVar1 + 0xcc))(&this->field_0x74);
          uVar2 = this->field_0x90;
          *(undefined *)(piVar5 + 0x6e7) = uVar2;
          (**(code **)(*piVar1 + 100))(uVar2);
          (**(code **)(*piVar1 + 0x44))
                    (unaff_EBX - *(int *)&this->field_0x94,iVar3 - *(int *)&this->field_0x9c);
          (**(code **)(*piVar1 + 0x10))
                    (*(int *)&this->field_0x98 + *(int *)&this->field_0x94 + iStack_38,
                     *(int *)&this->field_0xa0 + *(int *)&this->field_0x9c + iVar4 + 1);
          (**(code **)(*piVar1 + 0x54))(0);
        }
      }
      piVar5[0x399] = param_4;
      piVar5[0x39f] = iStack_34;
      DVar6 = timeGetTime();
      piVar5[0x39a] = DVar6;
      piVar5[0x39b] = unaff_EBX;
      piVar5[0x39e] = unaff_ESI;
      piVar5[0x39c] = unaff_EBP;
      piVar5[0x39d] = (int)piVar5;
      cls_0x4d8d70::meth_0x5904c0((cls_0x4d8d70 *)&this->field_0x140,&iStack_3c);
    }
  }
  return;
}



void __thiscall
CFloatingTextInterface::virt_meth_0x590750
          (CFloatingTextInterface *this,uint param_1,undefined4 param_2,int param_3,
          undefined4 param_4,int param_5,int param_6)

{
  dword *pdVar1;
  int iVar2;
  
  pdVar1 = &this->mbr_0xfb8;
  iVar2 = 0x20;
  do {
    if (pdVar1[4] == param_1) {
      *pdVar1 = 0;
    }
    pdVar1 = pdVar1 + 0x6e8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (param_3 < 1) {
    FUN_0058fc70(param_2);
  }
  meth_0x590500(this,param_1,param_2,param_4,param_5,param_6,&this->field_0x8,&this->field_0x24,
                *(undefined4 *)&this->field_0x40,*(int *)&this->field_0x44);
  return;
}


#include "../include/CFloatingTextInterface.h"
