#include "../include/DialogueManager.h"

void __thiscall DialogueManager::CommandAttackModeSelect(DialogueManager *this)

{
  return;
}



void __thiscall
DialogueManager::BeginDialogue(DialogueManager *this,_String_base *param_1,dword param_2)

{
  char cVar1;
  Script_Small *this_00;
  int ******ppppppiVar2;
  cls_0x50db20 *pcVar3;
  LPCSTR lpOutputString;
  char *pcVar4;
  char *pcVar5;
  uint unaff_retaddr;
  undefined auStack_1c8 [4];
  LPCSTR pCStack_1c4;
  dword dStack_1b4;
  dword dStack_1b0;
  _String_base local_1ac [4];
  int ******local_1a8 [5];
  uint local_194;
  Script_Small *local_190 [3];
  void *pvStack_184;
  uint uStack_170;
  undefined auStack_16c [172];
  byte bStack_c0;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638275;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  FUN_00434600((cls_0x50db20 *)(auStack_1c8 + 0x1c),param_1,(undefined4 *)&DAT_0069457c);
  local_4 = 0;
  local_190[0] = (Script_Small *)operator_new(0xe0);
  local_4._0_1_ = 1;
  if (local_190[0] == (Script_Small *)0x0) {
    this_00 = (Script_Small *)0x0;
  }
  else {
    this_00 = Script_Small::Script_Small(local_190[0],param_2);
  }
  local_4._0_1_ = 0;
  ppppppiVar2 = local_1a8[0];
  if (local_194 < 0x10) {
    ppppppiVar2 = (int ******)local_1a8;
  }
  cVar1 = (*this_00->vftptr_0x0->virt_meth_0x5a8880_4)(this_00,(int *)ppppppiVar2,'\x01');
  if (cVar1 == '\0') {
    dStack_1b0 = 0xf;
    dStack_1b4 = 0;
    pCStack_1c4 = (LPCSTR)((uint)pCStack_1c4 & 0xffffff00);
    pcVar5 = "DialogueManager::BeginDialogue() - Error loading script ";
    do {
      pcVar4 = pcVar5;
      pcVar5 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_1c8,
               "DialogueManager::BeginDialogue() - Error loading script ",(uint)(pcVar4 + -0x694540)
              );
    local_4._0_1_ = 2;
    pcVar3 = FUN_00434600((cls_0x50db20 *)(local_190 + 2),(_String_base *)(auStack_1c8 + 0x1c),
                          &lpOutputString_00656c9c);
    local_4._0_1_ = 3;
    cls_0x4d8d70::meth_0x4256e0((cls_0x4d8d70 *)auStack_1c8,(int)pcVar3,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0xf < uStack_170) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_184);
    }
    lpOutputString = pCStack_1c4;
    if (dStack_1b0 < 0x10) {
      lpOutputString = auStack_1c8 + 4;
    }
    OutputDebugStringA(lpOutputString);
    (*this_00->vftptr_0x0->virt_meth_0x5a78e0_0)(this_00,1);
    if (0xf < dStack_1b0) {
                    /* WARNING: Subroutine does not return */
      _free(pCStack_1c4);
    }
    dStack_1b0 = 0xf;
    dStack_1b4 = 0;
    pCStack_1c4 = (LPCSTR)((uint)pCStack_1c4 & 0xffffff00);
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      _free(local_1a8[0]);
    }
  }
  else {
    cls_0x55df60::cls_0x55df60((cls_0x55df60 *)auStack_16c);
    auStack_16c[0] = this->mbr_0x5;
    local_4._0_1_ = 4;
    auStack_16c._12_4_ = param_2;
    auStack_16c._16_4_ = 0;
    pcVar5 = "";
    do {
      pcVar4 = pcVar5;
      pcVar5 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    auStack_16c._4_4_ = this_00;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(auStack_16c + 0x18),"",(uint)(pcVar4 + -0x64d7d8));
    pcVar5 = "";
    do {
      pcVar4 = pcVar5;
      pcVar5 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(auStack_16c + 0x34),"",(uint)(pcVar4 + -0x64d7d8));
    pcVar5 = "?OnStartDialogue";
    auStack_16c._80_4_ = 0;
    auStack_16c[84] = 0;
    do {
      pcVar5 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(auStack_16c + 0x58),"OnStartDialogue",(uint)(pcVar5 + -0x694530));
    bStack_c0 = this->mbr_0x5;
    auStack_16c[168] = 0;
    cls_0x55df60::cls_0x55df60((cls_0x55df60 *)(&bStack_c0 + 4),auStack_16c);
    local_4._0_1_ = 5;
    cls_0x55bb10::meth_0x55e960((cls_0x55bb10 *)&this->mbr_0x8,local_190,(int *)&bStack_c0);
    cls_0x55bab0::meth_0x55bab0((cls_0x55bab0 *)this);
    local_4._0_1_ = 4;
    cls_0x55df60::meth_0x55dfc0((cls_0x55df60 *)(&bStack_c0 + 4));
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x55df60::meth_0x55dfc0((cls_0x55df60 *)auStack_16c);
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      _free(local_1a8[0]);
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



DialogueManager * __thiscall DialogueManager::~DialogueManager(DialogueManager *this)

{
  int **ppiVar1;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063830b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &DialogueManager__vftable_6945cc_006945cc;
  local_4 = 0;
  if (this->mbr_0x10 != 0) {
    do {
      ppiVar1 = *(int ***)this->mbr_0xc;
      if (ppiVar1[5] != (int *)0x0) {
        (**(code **)*ppiVar1[5])(1);
        ppiVar1[5] = (int *)0x0;
      }
      cls_0x55bb10::meth_0x55ea40((cls_0x55bb10 *)&this->mbr_0x8,&local_10,ppiVar1);
    } while (this->mbr_0x10 != 0);
  }
  local_4 = 0xffffffff;
  cls_0x55bb10::meth_0x55f360
            ((cls_0x55bb10 *)&this->mbr_0x8,&local_10,*(int ***)(int **)this->mbr_0xc,
             (int **)this->mbr_0xc);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xc);
}



DialogueManager * __thiscall DialogueManager::DialogueManager(DialogueManager *this)

{
  dword dVar1;
  undefined local_1;
  
  local_1 = (undefined)((uint)this >> 0x18);
  this->vftptr_0x0 = &DialogueManager__vftable_6945cc_006945cc;
  *(undefined *)&this->mbr_0x8 = local_1;
  dVar1 = FUN_0055bf20();
  this->mbr_0xc = dVar1;
  *(undefined *)(dVar1 + 0xbd) = 1;
  *(dword *)(this->mbr_0xc + 4) = this->mbr_0xc;
  *(dword *)this->mbr_0xc = this->mbr_0xc;
  *(dword *)(this->mbr_0xc + 8) = this->mbr_0xc;
  this->mbr_0x10 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x5 = 1;
  return this;
}


#include "../include/DialogueManager.h"
