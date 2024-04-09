#include "../include/CSoundSystem.h"

void __thiscall CSoundSystem::meth_0x52a010(CSoundSystem *this,dword param_1)

{
  this->mbr_0x50 = param_1;
  return;
}



void __thiscall CSoundSystem::meth_0x52a020(CSoundSystem *this)

{
  dword *pdVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  uint unaff_retaddr;
  undefined4 local_3c;
  dword local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_2c;
  uint local_28 [4];
  undefined4 *local_18;
  uint uStack_14;
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (this->mbr_0x8 == 0) {
    FUN_00616e15(DAT_007062c0);
    return;
  }
  local_38 = this->mbr_0x20;
  local_2c = 0;
  uVar2 = *(ushort *)&this->mbr_0x1c >> 3;
  local_34 = uVar2 * local_38;
  local_30 = CONCAT22(*(ushort *)&this->mbr_0x1c,uVar2);
  puVar4 = local_28;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_18 = &local_3c;
  pdVar1 = &this->mbr_0x10;
  local_3c = 0x10001;
  local_28[0] = 0x24;
  local_28[1] = 0x12;
  local_28[2] = 0x40;
  iVar3 = (**(code **)(*(int *)this->mbr_0x4 + 0xc))((int *)this->mbr_0x4,local_28,pdVar1,0);
  if (iVar3 == 0) {
    iVar3 = (***(code ***)(undefined4 *)*pdVar1)
                      ((undefined4 *)*pdVar1,&DAT_006b79f4,&this->mbr_0x14);
    if (iVar3 == 0) {
      FUN_00616e15(local_28[2] ^ local_28[3]);
      return;
    }
    (**(code **)(*(int *)*pdVar1 + 8))((int *)*pdVar1);
    *pdVar1 = 0;
  }
  FUN_00616e15(uStack_14 ^ uStack_10);
  return;
}



void __thiscall CSoundSystem::meth_0x52a130(CSoundSystem *this,undefined4 param_1)

{
  CMasterJumplist *pCVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636a1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CMasterJumplist *)operator_new(0x58);
  local_4 = 0;
  if (pCVar1 == (CMasterJumplist *)0x0) {
    pCVar1 = (CMasterJumplist *)0x0;
  }
  else {
    pCVar1 = CMasterJumplist::CMasterJumplist(pCVar1);
  }
  this->mbr_0x1f4 = (dword)pCVar1;
  local_4 = 0xffffffff;
  if (pCVar1 != (CMasterJumplist *)0x0) {
    (*((pCVar1->CSoundFile).vftptr_0x0)->virt_meth_0x4c8540_0)(pCVar1);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall CSoundSystem::meth_0x52a1a0(CSoundSystem *this)

{
  int iVar1;
  dword *pdVar2;
  ulonglong uVar3;
  
  iVar1 = 1;
  this->mbr_0x58 = 0xffffd8f0;
  this->mbr_0x1e8 = 0;
  pdVar2 = &this->mbr_0x5c;
  do {
    uVar3 = FUN_00616e24();
    iVar1 = iVar1 + 1;
    *pdVar2 = (dword)uVar3;
    pdVar2 = pdVar2 + 1;
  } while (iVar1 < 100);
  return;
}



void __thiscall
CSoundSystem::meth_0x52a2e0
          (CSoundSystem *this,undefined4 param_1,undefined4 param_2,dword param_3,int param_4,
          dword param_5)

{
  dword *pdVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint unaff_retaddr;
  int *local_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  pdVar1 = &this->mbr_0x4;
  piVar2 = (int *)*pdVar1;
  local_40 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *pdVar1 = 0;
  }
  iVar4 = DirectSoundCreate8(0,pdVar1,0);
  if ((-1 < iVar4) &&
     (iVar4 = (**(code **)(*(int *)*pdVar1 + 0x18))((int *)*pdVar1,param_1,param_2), -1 < iVar4)) {
    uVar5 = 1;
    if (this->mbr_0x38 != 0) {
      uVar5 = 0x11;
    }
    piVar2 = (int *)*pdVar1;
    puVar6 = auStack_28;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    auStack_28[0] = 0x24;
    auStack_28[2] = 0;
    uStack_18 = 0;
    auStack_28[1] = uVar5;
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,auStack_28,&local_40,0);
    if (-1 < iVar4) {
      uStack_2c = 0;
      uVar3 = ((ushort)param_5 >> 3) * (short)param_3;
      iStack_34 = (uint)uVar3 * param_4;
      uStack_3c = CONCAT22((short)param_3,1);
      iStack_38 = param_4;
      uStack_30 = CONCAT22((ushort)param_5,uVar3);
      iVar4 = (**(code **)(*local_40 + 0x38))(local_40,&uStack_3c);
      if ((-1 < iVar4) &&
         ((this->mbr_0x8 = (dword)local_40, this->mbr_0x38 == 0 ||
          (iVar4 = (**(code **)*local_40)(local_40,&DAT_006b7a14,&this->mbr_0xc), -1 < iVar4)))) {
        (**(code **)(*(int *)this->mbr_0x8 + 0x30))((int *)this->mbr_0x8,0,0,1);
        this->mbr_0x1c = param_5;
        this->mbr_0x20 = param_4;
        this->mbr_0x24 = param_3;
        if (this->mbr_0x38 != 0) {
          meth_0x52a020(this);
        }
        this->mbr_0x48 = 1;
      }
    }
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall CSoundSystem::meth_0x52a460(CSoundSystem *this,undefined4 param_1)

{
  CMasterGrouplist *this_00;
  CMasterGrouplist *this_01;
  cls_0x52d080 *pcVar1;
  int iVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636a46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (CMasterGrouplist *)operator_new(0x474);
  local_4 = 0;
  if (this_00 == (CMasterGrouplist *)0x0) {
    this_01 = (CMasterGrouplist *)0x0;
  }
  else {
    this_01 = CMasterGrouplist::CMasterGrouplist(this_00);
  }
  local_4 = 0xffffffff;
  this->mbr_0x1ec = (dword)this_01;
  if (this_01 != (CMasterGrouplist *)0x0) {
    (*((this_01->CSoundFile).vftptr_0x0)->virt_meth_0x4c8540_0)(this_01);
  }
  pcVar1 = (cls_0x52d080 *)operator_new(0x1c);
  puStack_8 = (undefined *)0x1;
  if (pcVar1 == (cls_0x52d080 *)0x0) {
    pcVar1 = (cls_0x52d080 *)0x0;
  }
  else {
    pcVar1 = cls_0x52d080::cls_0x52d080(pcVar1);
  }
  puStack_8 = (undefined *)0xffffffff;
  this->mbr_0x1f0 = (dword)pcVar1;
  if (pcVar1 != (cls_0x52d080 *)0x0) {
    iVar2 = VFX_Sound::virt_meth_0x4080b0((VFX_Sound *)pcVar1);
    if ((iVar2 < 0) && (pcVar1 = (cls_0x52d080 *)this->mbr_0x1f0, pcVar1 != (cls_0x52d080 *)0x0)) {
      cls_0x52d080::meth_0x52ce60(pcVar1);
                    /* WARNING: Subroutine does not return */
      _free(pcVar1);
    }
  }
  ExceptionList = this_00;
  return;
}



byte __thiscall CSoundSystem::meth_0x52a5f0(CSoundSystem *this)

{
  DialogueManager *pDVar1;
  cls_0x539d90 *pcVar2;
  HRESULT HVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636a1b;
  local_c = ExceptionList;
  pDVar1 = (DialogueManager *)this->mbr_0x1f8;
  if (pDVar1 != (DialogueManager *)0x0) {
    ExceptionList = &local_c;
    DialogueManager::CommandAttackModeSelect(pDVar1);
                    /* WARNING: Subroutine does not return */
    _free(pDVar1);
  }
  ExceptionList = &local_c;
  pcVar2 = (cls_0x539d90 *)operator_new(0x48);
  local_4 = 0;
  if (pcVar2 == (cls_0x539d90 *)0x0) {
    pcVar2 = (cls_0x539d90 *)0x0;
  }
  else {
    pcVar2 = cls_0x539d90::cls_0x539d90(pcVar2);
  }
  local_4 = 0xffffffff;
  this->mbr_0x1f8 = (dword)pcVar2;
  if (pcVar2 != (cls_0x539d90 *)0x0) {
    HVar3 = cls_0x539d90::meth_0x539b70(pcVar2);
    if ((HVar3 < 0) &&
       (pDVar1 = (DialogueManager *)this->mbr_0x1f8, pDVar1 != (DialogueManager *)0x0)) {
      DialogueManager::CommandAttackModeSelect(pDVar1);
                    /* WARNING: Subroutine does not return */
      _free(pDVar1);
    }
  }
  ExceptionList = local_c;
  return (this->mbr_0x1f8 != 0) - 1U & 9;
}



byte __thiscall CSoundSystem::meth_0x52a6c0(CSoundSystem *this,undefined4 param_1)

{
  cls_0x53a1e0 *pcVar1;
  HRESULT HVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636a1b;
  local_c = ExceptionList;
  pcVar1 = (cls_0x53a1e0 *)this->mbr_0x1fc;
  if (pcVar1 != (cls_0x53a1e0 *)0x0) {
    ExceptionList = &local_c;
    cls_0x53a1e0::meth_0x53a180(pcVar1);
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
  ExceptionList = &local_c;
  pcVar1 = (cls_0x53a1e0 *)operator_new(0x14);
  local_4 = 0;
  if (pcVar1 == (cls_0x53a1e0 *)0x0) {
    pcVar1 = (cls_0x53a1e0 *)0x0;
  }
  else {
    pcVar1 = cls_0x53a1e0::cls_0x53a1e0(pcVar1);
  }
  local_4 = 0xffffffff;
  this->mbr_0x1fc = (dword)pcVar1;
  if (pcVar1 != (cls_0x53a1e0 *)0x0) {
    HVar2 = cls_0x53a1e0::meth_0x539ef0(pcVar1,param_1);
    if ((HVar2 < 0) && (pcVar1 = (cls_0x53a1e0 *)this->mbr_0x1fc, pcVar1 != (cls_0x53a1e0 *)0x0)) {
      cls_0x53a1e0::meth_0x53a180(pcVar1);
                    /* WARNING: Subroutine does not return */
      _free(pcVar1);
    }
  }
  ExceptionList = local_c;
  return (this->mbr_0x1fc != 0) - 1U & 9;
}



byte __thiscall CSoundSystem::meth_0x52a790(CSoundSystem *this)

{
  DialogueManager *pDVar1;
  cls_0x53a510 *pcVar2;
  MCIERROR MVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636a1b;
  local_c = ExceptionList;
  pDVar1 = (DialogueManager *)this->mbr_0x200;
  if (pDVar1 != (DialogueManager *)0x0) {
    ExceptionList = &local_c;
    DialogueManager::CommandAttackModeSelect(pDVar1);
                    /* WARNING: Subroutine does not return */
    _free(pDVar1);
  }
  ExceptionList = &local_c;
  pcVar2 = (cls_0x53a510 *)operator_new(0x34);
  local_4 = 0;
  if (pcVar2 == (cls_0x53a510 *)0x0) {
    pcVar2 = (cls_0x53a510 *)0x0;
  }
  else {
    pcVar2 = cls_0x53a510::cls_0x53a510(pcVar2);
  }
  local_4 = 0xffffffff;
  this->mbr_0x200 = (dword)pcVar2;
  if (pcVar2 != (cls_0x53a510 *)0x0) {
    MVar3 = cls_0x53a510::meth_0x53a550(pcVar2);
    if ((MVar3 != 0) &&
       (pDVar1 = (DialogueManager *)this->mbr_0x200, pDVar1 != (DialogueManager *)0x0)) {
      DialogueManager::CommandAttackModeSelect(pDVar1);
                    /* WARNING: Subroutine does not return */
      _free(pDVar1);
    }
  }
  ExceptionList = local_c;
  return (this->mbr_0x200 != 0) - 1U & 10;
}



void __thiscall CSoundSystem::meth_0x52ab30(CSoundSystem *this)

{
  int **ppiVar1;
  int *piVar2;
  CSoundSystem *local_4;
  
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x1f8 = 0;
  this->mbr_0x1fc = 0;
  this->mbr_0x200 = 0;
  this->mbr_0x1f0 = 0;
  this->mbr_0x1c = 0x10;
  this->mbr_0x20 = 0x5622;
  this->mbr_0x24 = 2;
  ppiVar1 = (int **)this->mbr_0x30;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x2c,(int **)&local_4,piVar2,(int *)ppiVar1)
  ;
  this->mbr_0x1f4 = 0;
  this->mbr_0x1ec = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x28 = 100;
  this->mbr_0x38 = 1;
  this->mbr_0x3c = 1;
  this->mbr_0x40 = 1;
  this->mbr_0x44 = 1;
  return;
}



void __thiscall CSoundSystem::meth_0x52abc0(CSoundSystem *this)

{
  int **ppiVar1;
  CSoundSystem *local_4;
  
  ppiVar1 = (int **)this->mbr_0x30;
  local_4 = this;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x2c,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x2c,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



CSoundSystem * __thiscall CSoundSystem::CSoundSystem(CSoundSystem *this)

{
  dword dVar1;
  DWORD DVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636a5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &CSoundSystem__vftable_678c2c_00678c2c;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x30 = dVar1;
  this->mbr_0x34 = 0;
  local_4 = 0;
  cls_0x50ca00::cls_0x50ca00(&this->cls_0x50ca00);
  meth_0x52ab30(this);
  meth_0x52a1a0(this);
  DVar2 = timeGetTime();
  this->mbr_0x4c = DVar2;
  FUN_00616e99(DVar2);
  ExceptionList = pvStack_c;
  return this;
}



CSoundSystem * __thiscall CSoundSystem::~CSoundSystem(CSoundSystem *this)

{
  int **ppiVar1;
  int *piVar2;
  CSoundSystem *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636a5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &CSoundSystem__vftable_678c2c_00678c2c;
  local_4 = 0;
  local_10 = this;
  meth_0x52abc0(this);
  cls_0x50ca00::meth_0x50ca20(&this->cls_0x50ca00);
  ppiVar1 = (int **)this->mbr_0x30;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x2c,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x30);
}



int * __thiscall CSoundSystem::virt_meth_0x52adf0(CSoundSystem *this,byte param_1)

{
  ~CSoundSystem(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/CSoundSystem.h"
