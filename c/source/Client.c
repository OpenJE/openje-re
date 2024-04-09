#include "../include/Client.h"

void __thiscall Client::virt_meth_0x587770(Client *this,void *param_1)

{
  char cVar1;
  uint uVar2;
  uint unaff_retaddr;
  address__vftable_6647a0 *local_1c;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined local_15;
  word local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639bc8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  if (*(short *)((int)param_1 + 8) == 0) {
    ExceptionList = &local_c;
    *(undefined2 *)((int)param_1 + 8) = 0x53fa;
  }
  local_14 = DAT_0070bd90->mbr_0x8;
  uVar2 = 2;
  local_1c = &address__vftable_6647a0_006647a0;
  local_18 = 0x7f;
  local_17 = 0;
  local_16 = 0;
  local_15 = 1;
  local_4 = 0;
  cVar1 = cls_0x5ac9e0::meth_0x5aca90((cls_0x5ac9e0 *)param_1,(int)&local_1c,'\x01');
  if (cVar1 != '\0') {
    uVar2 = 3;
  }
  Network::meth_0x543930(DAT_0070bd90,uVar2);
  net::client::virt_meth_0x59c410(&this->client,(int)param_1);
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Client::virt_meth_0x587b00(Client *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  
  uVar1 = (*(this->client).base.vftptr_0x0[10].virt_meth_0x6162e5_8)();
  *(uint *)&(this->client).base.critical_section.field_0x50 = CONCAT31(extraout_var,uVar1);
  return;
}



Audio * __thiscall Client::virt_meth_0x587b10(Client *this)

{
  Audio *pAVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pAVar1 = (Audio *)operator_new(0x4c);
  local_4 = 0;
  if (pAVar1 != (Audio *)0x0) {
    pAVar1 = Audio::Audio(pAVar1);
    ExceptionList = local_c;
    return pAVar1;
  }
  ExceptionList = local_c;
  return (Audio *)0;
}



undefined4 * __thiscall Client::virt_meth_0x587b70(Client *this)

{
  Graphics *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar1 = (Graphics *)operator_new(0x68);
  local_4 = 0;
  if (pGVar1 != (Graphics *)0x0) {
    pGVar1 = Graphics::Graphics(pGVar1);
    ExceptionList = local_c;
    return &pGVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



Input_Win32 * __thiscall Client::virt_meth_0x587bd0(Client *this)

{
  Input_Win32 *pIVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pIVar1 = (Input_Win32 *)operator_new(0x3818);
  local_4 = 0;
  if (pIVar1 != (Input_Win32 *)0x0) {
    pIVar1 = Input_Win32::Input_Win32(pIVar1,(uint)pIVar1);
    ExceptionList = local_c;
    return pIVar1;
  }
  ExceptionList = local_c;
  return (Input_Win32 *)0;
}



Processor * __thiscall Client::virt_meth_0x587c30(Client *this)

{
  Processor *pPVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pPVar1 = (Processor *)operator_new(0x14);
  local_4 = 0;
  if (pPVar1 != (Processor *)0x0) {
    pPVar1 = Processor::Processor(pPVar1);
    ExceptionList = local_c;
    return pPVar1;
  }
  ExceptionList = local_c;
  return (Processor *)0;
}



undefined4 * __thiscall Client::virt_meth_0x587c90(Client *this)

{
  HotKeys *pHVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pHVar1 = (HotKeys *)operator_new(0x18);
  local_4 = 0;
  if (pHVar1 != (HotKeys *)0x0) {
    pHVar1 = HotKeys::HotKeys(pHVar1,*(undefined4 *)&(this->client).base.critical_section.field_0x74
                              ,*(undefined4 *)&(this->client).base.critical_section.field_0x78);
    ExceptionList = local_c;
    return &pHVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



undefined4 * __thiscall Client::virt_meth_0x587d00(Client *this)

{
  CameraControl *pCVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CameraControl *)operator_new(0x120);
  local_4 = 0;
  if (pCVar1 != (CameraControl *)0x0) {
    pCVar1 = CameraControl::CameraControl(pCVar1,this);
    ExceptionList = local_c;
    return &pCVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



undefined4 * __thiscall Client::virt_meth_0x587d60(Client *this)

{
  CursorManager *pCVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CursorManager *)operator_new(0x30);
  local_4 = 0;
  if (pCVar1 != (CursorManager *)0x0) {
    pCVar1 = CursorManager::CursorManager(pCVar1);
    ExceptionList = local_c;
    return &pCVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



FadeManager * __thiscall Client::virt_meth_0x587dc0(Client *this)

{
  FadeManager *pFVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pFVar1 = (FadeManager *)operator_new(0x18);
  local_4 = 0;
  if (pFVar1 != (FadeManager *)0x0) {
    pFVar1 = FadeManager::FadeManager(pFVar1);
    ExceptionList = local_c;
    return pFVar1;
  }
  ExceptionList = local_c;
  return (FadeManager *)0;
}



int * __thiscall Client::virt_meth_0x587e20(Client *this)

{
  Video *pVVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pVVar1 = (Video *)operator_new(0x2c);
  local_4 = 0;
  if (pVVar1 != (Video *)0x0) {
    pVVar1 = Video::Video(pVVar1);
    ExceptionList = local_c;
    return (int *)pVVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}



Interfaces * __thiscall Client::virt_meth_0x587e80(Client *this)

{
  Interfaces *pIVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pIVar1 = (Interfaces *)operator_new(4);
  local_4 = 0;
  if (pIVar1 != (Interfaces *)0x0) {
    pIVar1 = Interfaces::Interfaces(pIVar1);
    ExceptionList = local_c;
    return pIVar1;
  }
  ExceptionList = local_c;
  return (Interfaces *)0;
}



void __thiscall Client::virt_meth_0x587ee0(Client *this)

{
  code **ppcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  int iStack_2c;
  undefined local_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  undefined2 uStack_8;
  undefined uStack_6;
  
  net::client::virt_meth_0x59d2d0(&this->client);
  cVar2 = (**(code **)(**(int **)&(this->client).base.critical_section.field_0x74 + 8))(local_28);
  while (cVar2 != '\0') {
    if (iStack_2c == 2) {
      *(undefined4 *)&(this->client).base.critical_section.field_0xc0 = uStack_20;
      *(undefined4 *)&(this->client).base.critical_section.field_0xc4 = uStack_1c;
      *(undefined4 *)&(this->client).base.critical_section.field_0xc8 = uStack_10;
      *(undefined2 *)&(this->client).base.critical_section.field_0xcc = uStack_8;
      (this->client).base.critical_section.field_0xbc = 1;
      (this->client).base.critical_section.field_0xce = uStack_6;
    }
    cVar2 = (**(code **)(**(int **)&(this->client).base.critical_section.field_0x70 + 0x10))
                      (&iStack_2c);
    if (cVar2 == '\0') {
      if (unaff_ESI == 2) {
        (this->client).base.critical_section.field_0xbc = 0;
      }
      cVar2 = (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 0x1c))
                        (&stack0xffffffd0);
      if (((cVar2 == '\0') &&
          (cVar2 = (*(this->client).base.vftptr_0x0[0x10].virt_meth_0x6162e5_8)(&stack0xffffffd0),
          cVar2 == '\0')) && ((this->client).base.critical_section.field_0x10c != '\0')) {
        FUN_00599720(*(void **)&(this->client).base.critical_section.field_0x7c,
                     (int *)&stack0xffffffd0);
      }
    }
    cVar2 = (**(code **)(**(int **)&(this->client).base.critical_section.field_0x74 + 8))
                      (&stack0xffffffd0);
  }
  bVar3 = cls_0x4b28a0::meth_0x4b2c10((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c);
  if (!bVar3) {
    (*(this->client).base.vftptr_0x0[0x11].virt_meth_0x6162e5_4)();
  }
  cls_0x580ba0::meth_0x580ba0(*(cls_0x580ba0 **)&(this->client).base.critical_section.field_0x78);
  CameraControl::meth_0x5869c0(*(CameraControl **)&(this->client).base.critical_section.field_0x80);
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 0x10))();
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa4 + 0x10))();
  cls_0x5b4f50::meth_0x5b5ae0(*(cls_0x5b4f50 **)&(this->client).base.critical_section.field_0xb0);
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0x70 + 4))(&stack0xffffffd3);
  (*(this->client).base.vftptr_0x0[0x11].virt_meth_0x6162e5_8)(0);
  if (*(int *)&(this->client).base.critical_section.field_0x54 == 3) {
    if (DAT_0070bd98 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)(DAT_0070bd98 + 0xc);
    }
    ppcVar1 = (code **)*puVar6;
    uVar4 = FUN_0056af50();
    (**ppcVar1)(uVar4);
    if (DAT_0070bd98 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(DAT_0070bd98 + 0xc);
    }
    (**(code **)(*piVar5 + 0x14))();
    if (((this->client).base.critical_section.field_0x104 == '\0') &&
       ((this->client).base.critical_section.field_0x105 == '\0')) {
      if (DAT_0070bd98 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(DAT_0070bd98 + 0xc);
      }
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0x70 + 8))();
  FUN_00590860();
  return;
}



void __thiscall Client::meth_0x5881a0(Client *this)

{
  uint uVar1;
  int iVar2;
  Entity *this_00;
  GameActionEquip *this_01;
  
  if (*(int *)&(this->client).base.critical_section.field_0xd8 != 0) {
    iVar2 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
    if (iVar2 != 0) {
      this_00 = (Entity *)GameActionEquip::meth_0x54be10(this_01);
      if ((this_00 != (Entity *)0x0) &&
         (uVar1 = *(uint *)&(this->client).base.critical_section.field_0xf8, uVar1 != 0)) {
        Entity::meth_0x54f150(this_00,uVar1,(int **)0x1);
        *(undefined4 *)&(this->client).base.critical_section.field_0xf8 = 0;
      }
    }
  }
  *(undefined4 *)&(this->client).base.critical_section.field_0xd8 = 0;
  return;
}



void __thiscall Client::meth_0x588200(Client *this,int param_1)

{
  if ((param_1 != 0) && (param_1 == *(int *)&(this->client).base.critical_section.field_0xd8)) {
    meth_0x5881a0(this);
  }
  return;
}



void __thiscall Client::meth_0x588230(Client *this,int param_1)

{
  undefined local_8 [8];
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0xc)) {
    World::~World((World *)local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_8,&DAT_006ddf94);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  FUN_00593090(*(int *)&(this->client).base.critical_section.field_0x98);
  return;
}



void Client::CommandToggleDebugWindow(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  if (piVar1 == (int *)0x0) {
    FUN_00497120((byte *)0x69c488);
    return;
  }
  cVar2 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
  if (cVar2 != '\0') {
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),0);
    GameActionOperateContainer::meth_0x4952a0
              ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
    return;
  }
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
  return;
}



void Client::CommandToggleStackWindow(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x90);
  if (piVar1 == (int *)0x0) {
    FUN_00497120((byte *)
                 "Client::CommandToggleStackWindow - No Stack Window was created in this client.\n")
    ;
    return;
  }
  cVar2 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
  if (cVar2 != '\0') {
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),0);
    GameActionOperateContainer::meth_0x4952a0
              ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
    return;
  }
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
  return;
}



void Client::CommandToggleDebugTools(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x94);
  if (piVar1 == (int *)0x0) {
    FUN_00497120((byte *)
                 "Client::CommandToggleDebugTools - No Debug Tools window was created in this client.\n"
                );
    return;
  }
  cVar2 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
  if (cVar2 != '\0') {
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),0);
    GameActionOperateContainer::meth_0x4952a0
              ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
    return;
  }
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
  return;
}



void __thiscall Client::virt_meth_0x588d90(Client *this)

{
  undefined4 *puVar1;
  int iVar2;
  CameraControl *this_00;
  int *piVar3;
  
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0xf4;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)&(this->client).base.critical_section.field_0xf4 = 0;
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0xb4;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  iVar2 = *(int *)&(this->client).base.critical_section.field_0xac;
  if (iVar2 != 0) {
    (***(code ***)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2))(1);
  }
  iVar2 = *(int *)&(this->client).base.critical_section.field_0xa8;
  if (iVar2 != 0) {
    (***(code ***)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2))(1);
  }
  iVar2 = *(int *)&(this->client).base.critical_section.field_0x98;
  if (iVar2 != 0) {
    (***(code ***)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2))(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x9c;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0xa0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0xa4;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0xb0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  this_00 = *(CameraControl **)&(this->client).base.critical_section.field_0x80;
  if (this_00 != (CameraControl *)0x0) {
    CameraControl::~CameraControl(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  piVar3 = *(int **)&(this->client).base.critical_section.field_0x84;
  if (piVar3 != (int *)0x0) {
    (***(code ***)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
  }
  piVar3 = *(int **)&(this->client).base.critical_section.field_0x88;
  if (piVar3 != (int *)0x0) {
    (***(code ***)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
  }
  piVar3 = *(int **)&(this->client).base.critical_section.field_0x90;
  if (piVar3 != (int *)0x0) {
    (***(code ***)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
  }
  piVar3 = *(int **)&(this->client).base.critical_section.field_0x94;
  if (piVar3 != (int *)0x0) {
    (***(code ***)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x7c;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x78;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x74;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x70;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x6c;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  net::client::virt_meth_0x59c360(&this->client);
  return;
}



undefined4 * __thiscall Client::virt_meth_0x588f50(Client *this)

{
  connection *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (connection *)operator_new(0x4168);
  local_4 = 0;
  if (this_00 != (connection *)0x0) {
    net::connection::connection(this_00);
    *(undefined *)&this_00[1].vftptr_0x0 = 0;
    this_00->vftptr_0x0 = (connection__vftable_6a777c *)&Server__vftable_69c480_0069c480;
    ExceptionList = local_c;
    return &this_00->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



void __thiscall Client::meth_0x589130(Client *this,int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined *puVar9;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((this->client).base.critical_section.field_0x10c != '\0') &&
     ((this->client).base.critical_section.field_0xd0 == '\0')) {
    local_11c = 0.0;
    local_118 = 0.0;
    local_114 = 0.0;
    CameraControl::meth_0x585e20
              (*(CameraControl **)&(this->client).base.critical_section.field_0x80,&local_11c);
    local_d4 = 0;
    local_cc = local_11c - (float)param_1;
    local_d8 = 0;
    local_dc = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_f4 = 0;
    local_c4 = (float)param_2 + local_114;
    local_fc = 0;
    local_100 = 0;
    local_104 = 0;
    local_108 = 0;
    local_d0 = 0x3f800000;
    local_e4 = 0x3f800000;
    local_f8 = 0x3f800000;
    local_10c = 0x3f800000;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    local_94 = 0;
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_bc = 0;
    local_84 = 0x3f800000;
    local_98 = 0x3f800000;
    local_ac = 0x3f800000;
    local_c0 = 0x3f800000;
    local_8 = 0;
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_4 = 0x3f800000;
    local_18 = 0x3f800000;
    local_2c = 0x3f800000;
    local_40 = 0x3f800000;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_68 = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_7c = 0;
    local_44 = 0x3f800000;
    local_58 = 0x3f800000;
    local_6c = 0x3f800000;
    local_80 = 0x3f800000;
    thunk_FUN_0047227f(&local_10c,local_cc,local_118,local_c4);
    thunk_FUN_0047227f(&local_c0,-local_11c,-local_118,-local_114);
    thunk_FUN_0047227f(&local_40,local_11c,local_118,local_114);
    thunk_FUN_004723ab(&local_80,
                       *(float *)(*(int *)&(this->client).base.critical_section.field_0x80 + 0xa4) *
                       57.29578 * 0.01745329);
    thunk_FUN_00471943();
    thunk_FUN_00471943();
    puVar9 = &stack0xfffffedc;
    thunk_FUN_00471943();
    uVar6 = local_f8;
    uVar5 = local_fc;
    uVar4 = local_100;
    iVar7 = (**(code **)(*DAT_00707ce4 + 0xa8))(puVar9);
    iVar1 = *(int *)&(this->client).base.critical_section.field_0x110;
    fVar2 = *(float *)(iVar7 + 0x110) * 57.29578 - 6.0;
    fVar3 = (float)iVar1;
    if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
      uVar8 = FUN_00616e24();
      *(int *)&(this->client).base.critical_section.field_0x110 = (int)uVar8;
      CameraControl::meth_0x586760
                (*(CameraControl **)&(this->client).base.critical_section.field_0x80,uVar4,uVar5,
                 uVar6);
      return;
    }
    *(int *)&(this->client).base.critical_section.field_0x110 = iVar1 + -1;
  }
  return;
}



void __thiscall Client::meth_0x5897d0(Client *this)

{
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639c08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->client).base.vftptr_0x0 = (base__vftable_6a1d1c *)&Client__vftable_69c814_0069c814;
  local_4 = 0;
  virt_meth_0x588d90(this);
  local_4 = 0xffffffff;
  net::client::meth_0x59c790(&this->client);
  ExceptionList = pvStack_c;
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall Client::meth_0x589d90(Client *this,undefined4 param_1)

{
  int iVar1;
  uint unaff_ESI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  int in_stack_ffffdfbc;
  void *local_2034;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar1 = DAT_007062c0;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  GameClient::meth_0x59c4f0
            ((GameClient *)this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



int __thiscall Client::virt_meth_0x58a4a0(Client *this,int *param_1)

{
  char cVar1;
  CameraControl *pCVar2;
  float fVar3;
  undefined4 in_EAX;
  uint3 uVar6;
  undefined4 uVar4;
  int iVar5;
  float10 *unaff_EDI;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  
  uVar6 = (uint3)((uint)in_EAX >> 8);
  if ((this->client).base.critical_section.field_0x10c == '\0') {
    return (uint)uVar6 << 8;
  }
  if (*param_1 == 2) {
    iVar5 = param_1[2];
    if (iVar5 == 0) {
      uVar4 = 0;
      if ((this->client).base.critical_section.field_0xce == '\x01') {
        uVar4 = meth_0x589130(this,param_1[5],param_1[6]);
      }
      cVar1 = (this->client).base.critical_section.field_0xd0;
      iVar5 = CONCAT31((int3)((uint)uVar4 >> 8),cVar1);
      if (cVar1 != '\0') {
        iVar5 = param_1[5];
        if (iVar5 != 0) {
          pCVar2 = *(CameraControl **)&(this->client).base.critical_section.field_0x80;
          fVar3 = (float)pCVar2->mbr_0xc8 * 0.0004 * 33.0;
          if (iVar5 < 1) {
            if (iVar5 < 0) {
              CameraControl::meth_0x585e60
                        (pCVar2,*(float *)&(pCVar2->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x9c *
                                57.29578 - fVar3);
            }
          }
          else {
            CameraControl::meth_0x585e60
                      (pCVar2,*(float *)&(pCVar2->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x9c *
                              57.29578 + fVar3);
          }
        }
        iVar5 = param_1[6];
        if (iVar5 != 0) {
          pCVar2 = *(CameraControl **)&(this->client).base.critical_section.field_0x80;
          fVar3 = (float)pCVar2->mbr_0xd8 * 0.0004 * 33.0;
          if (0 < iVar5) {
            uVar4 = CameraControl::meth_0x585fd0
                              (pCVar2,(float)(pCVar2->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa0 *
                                      57.29578 - fVar3);
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
          if (iVar5 < 0) {
            uVar4 = CameraControl::meth_0x585fd0
                              (pCVar2,(float)(pCVar2->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa0 *
                                      57.29578 + fVar3);
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
        }
        return CONCAT31((int3)((uint)iVar5 >> 8),1);
      }
    }
    uVar6 = (uint3)((uint)iVar5 >> 8);
    if (((this->client).base.critical_section.field_0xbc == '\0') && (param_1[2] == 4)) {
      fVar3 = *(float *)(*(int *)&(this->client).base.critical_section.field_0x80 + 0x100) * 0.0025
              * 33.0;
      if (param_1[7] < 0) {
        FUN_00586550(unaff_EDI);
        fVar7 = extraout_ST0 + (float10)fVar3;
      }
      else {
        FUN_00586550(unaff_EDI);
        fVar7 = extraout_ST0_00 - (float10)fVar3;
      }
      uVar6 = 0;
      CameraControl::meth_0x5867c0
                (*(CameraControl **)&(this->client).base.critical_section.field_0x80,(float)fVar7);
    }
  }
  return (uint)uVar6 << 8;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall Client::virt_meth_0x58a620(Client *this,void *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int unaff_EBP;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  uint unaff_retaddr;
  packet apStack_2048 [137];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  GameActionEquip::meth_0x45e500
            ((GameActionEquip *)param_1,
             (undefined4 *)&(this->client).base.critical_section.field_0xb8);
  FUN_00497120((byte *)"Client: connected to server.  My id is %u\n");
  iVar1 = *(int *)&(this->client).base.critical_section.field_0x70;
  (this->client).base.critical_section.field_0x104 = 0;
  (this->client).base.critical_section.field_0x106 = 0;
  if (*(char *)(iVar1 + 0x56) != '\0') {
    cls_0x5b4f50::meth_0x5b5640
              (*(cls_0x5b4f50 **)&(this->client).base.critical_section.field_0xb0,
               "movies\\IPlogo.mve",0xc0,0xe0,0x280,0x140,'\x01','\x01',0);
    cls_0x5b4f50::meth_0x5b4f50
              (*(cls_0x5b4f50 **)&(this->client).base.critical_section.field_0xb0,1000);
    cls_0x5b4f50::meth_0x5b4f60
              (*(cls_0x5b4f50 **)&(this->client).base.critical_section.field_0xb0,1);
    cls_0x5b4f50::meth_0x5b5b10
              (*(cls_0x5b4f50 **)&(this->client).base.critical_section.field_0xb0,
               (undefined4 *)"movies\\BISlogo.mve",0xc0,0xe0,0x280,0x140,1,1,0);
  }
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    if (DAT_0070bd98 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(DAT_0070bd98 + 0xc);
    }
    (**(code **)(*piVar3 + 0x10))(param_1);
    net::packet::packet(apStack_2048);
    uStack_4 = 0;
    apStack_2048[0].mbr_0x30 = 0x43;
    GameClient::meth_0x59c4f0((GameClient *)this,apStack_2048,1,unaff_EDI,unaff_ESI,unaff_EBP);
    apStack_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
    apStack_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
    if (apStack_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)apStack_2048[0].buffer.mbr_0x14);
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



int * __thiscall Client::virt_meth_0x58a960(Client *this,byte param_1)

{
  meth_0x5897d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall
Client::meth_0x58aad0
          (Client *this,undefined4 param_1,int param_2,void *param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  uint unaff_retaddr;
  uint local_2c;
  uint local_28;
  void *pvStack_24;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639c68;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = local_28 & 0xffffff00;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  SS::EngineStringSystem::virt_meth_0x56c260
            ((EngineStringSystem *)&DAT_0070c2d8,param_2,(_String_base *)&local_2c);
  (**(code **)**(undefined4 **)&(this->client).base.critical_section.field_0xa8)
            (param_1,&local_2c,param_3,param_4,param_5,param_6);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  ExceptionList = pvStack_24;
  FUN_00616e15(local_28 ^ local_18);
  return;
}



void __thiscall Client::HandleMousePicking(Client *this,char param_1)

{
  ModelInstance *this_00;
  cls_0x4a4cd0 *this_01;
  int iVar1;
  undefined4 uVar2;
  Action__vftable_647888 *pAVar3;
  DynamicObject *pDVar4;
  uint uVar5;
  Entity *this_02;
  undefined4 *puVar6;
  dword dVar7;
  int *piVar8;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  GameActionEquip *extraout_ECX_01;
  GameActionEquip *pGVar9;
  GameActionEquip *this_03;
  GameActionEquip *this_04;
  GameActionEquip *extraout_ECX_02;
  GameActionEquip *extraout_ECX_03;
  GameActionEquip *extraout_ECX_04;
  GameActionEquip **ppGVar10;
  Client *unaff_ESI;
  GameActionEquip *unaff_EDI;
  undefined4 *puVar11;
  undefined *puVar12;
  Client **ppCVar13;
  undefined *puVar14;
  GameActionEquip **ppGVar15;
  Client **ppCVar16;
  undefined *puVar17;
  GameActionEquip *pGVar18;
  GameActionEquip *pGVar19;
  GameActionEquip *pGVar20;
  GameActionEquip *pGVar21;
  DynamicObject *local_3cc;
  GameActionEquip *pGStack_3c8;
  GameActionEquip *pGStack_3c4;
  int iStack_3c0;
  Client *pCStack_3bc;
  dword dStack_3b8;
  dword dStack_3b4;
  dword dStack_3b0;
  dword dStack_3ac;
  Action__vftable_647888 *local_3a8;
  Client *pCStack_3a4;
  GameActionEquip *pGStack_3a0;
  DynamicObject *local_39c;
  dword local_398;
  dword local_394;
  Action__vftable_647888 *local_390;
  undefined *local_38c;
  Action__vftable_647888 *local_388;
  float fStack_380;
  dword dStack_37c;
  dword dStack_378;
  float fStack_374;
  dword dStack_370;
  dword dStack_36c;
  GameActionEquip *pGStack_368;
  GameActionEquip *pGStack_364;
  GameActionEquip *pGStack_360;
  dword dStack_35c;
  dword dStack_358;
  Action__vftable_647888 *pAStack_354;
  float fStack_350;
  dword dStack_34c;
  dword dStack_348;
  float fStack_338;
  dword dStack_334;
  dword dStack_330;
  Client *pCStack_32c;
  GameActionEquip *pGStack_328;
  DynamicObject *pDStack_324;
  undefined auStack_308 [4];
  void *pvStack_304;
  cls_0x4f4c00 cStack_2f8;
  dword dStack_2d8;
  undefined auStack_2cc [12];
  undefined auStack_2c0 [76];
  undefined4 auStack_274 [16];
  undefined4 auStack_234 [16];
  GameActionEquip *apGStack_1f4 [5];
  dword dStack_1e0;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639c8b;
  local_c = ExceptionList;
  if (((this->client).base.critical_section.field_0x10c != '\0') &&
     ((ExceptionList = &local_c, param_1 != '\0' ||
      (ExceptionList = &local_c, iVar1 = FUN_0056af50(),
      99 < (uint)(iVar1 - *(int *)&(this->client).base.critical_section.field_0xd4))))) {
    uVar2 = FUN_0056af50();
    *(undefined4 *)&(this->client).base.critical_section.field_0xd4 = uVar2;
    if (((this->client).base.critical_section.field_0xbc != '\x01') &&
       (pAVar3 = (Action__vftable_647888 *)
                 cls_0x581190::meth_0x581190
                           (*(cls_0x581190 **)&(this->client).base.critical_section.field_0x70),
       pAVar3 != (Action__vftable_647888 *)0x0)) {
      pGVar18 = *(GameActionEquip **)&(this->client).base.critical_section.field_0xc4;
      pGVar19 = (GameActionEquip *)&local_3a8;
      local_39c = (DynamicObject *)0x0;
      local_398 = 0;
      local_394 = 0;
      local_390 = (Action__vftable_647888 *)0x7f7fffff;
      local_38c = &LAB_004adc20;
      local_388 = pAVar3;
      (**(code **)(pAVar3->virt_deldtor_0x4010e0_0 + 0x1c))();
      local_3cc = (DynamicObject *)0x0;
      pGVar20 = (GameActionEquip *)0x7f7fffff;
      iStack_3c0 = 0;
      do {
        (**(code **)(pAVar3->virt_deldtor_0x4010e0_0 + 0x20))(&dStack_3b0,0x14);
        this_03 = extraout_ECX;
        if (dStack_1e0 != 0) {
          ppGVar10 = apGStack_1f4;
          do {
            pDVar4 = (DynamicObject *)
                     FUN_006165e0((cls_0x616328 *)ppGVar10[4],0,&DynamicObject::RTTI_Type_Descriptor
                                  ,&Entity::RTTI_Type_Descriptor,0);
            this_03 = extraout_ECX_00;
            if ((((pDVar4 != (DynamicObject *)0x0) &&
                 (this_03 = extraout_ECX_00, pDVar4->field_0x3a0 != '\0')) &&
                (this_03 = extraout_ECX_00, pDVar4->field_0x388 != '\0')) &&
               (this_00 = *(ModelInstance **)&pDVar4->field_0x160, this_03 = extraout_ECX_00,
               this_00 != (ModelInstance *)0x0)) {
              this_01 = (cls_0x4a4cd0 *)this_00->mbr_0xc;
              if (this_01 == (cls_0x4a4cd0 *)0x0) {
                if (*(cls_0x49cb10 **)this_00->mbr_0x10 == (cls_0x49cb10 *)0x0) {
                  ModelInstance::meth_0x5648d0(this_00,auStack_308,0,0);
                  local_c = (void *)0x0;
                  FUN_00497120((byte *)
                               "Client::HandleMousePicking - No BaseModel for collision checking: %s!\n"
                              );
                  local_c = (void *)0xffffffff;
                  if (0xf < cStack_2f8.mbr_0x8) {
                    /* WARNING: Subroutine does not return */
                    _free(pvStack_304);
                  }
                  cStack_2f8.mbr_0x8 = 0xf;
                  cStack_2f8.mbr_0x4 = 0;
                  pvStack_304 = (void *)((uint)pvStack_304 & 0xffffff00);
                  this_03 = extraout_ECX_04;
                }
                else {
                  cls_0x49cb10::meth_0x49cb10
                            (*(cls_0x49cb10 **)this_00->mbr_0x10,&fStack_374,&fStack_338);
                  fStack_380 = fStack_374;
                  dStack_37c = dStack_370;
                  dStack_378 = dStack_36c;
                  fStack_350 = fStack_338;
                  dStack_34c = dStack_334;
                  dStack_348 = dStack_330;
                  puVar6 = *(undefined4 **)this_00->mbr_0x10;
                  puVar11 = auStack_234;
                  for (iVar1 = 0x10; puVar6 = puVar6 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
                    *puVar11 = *puVar6;
                    puVar11 = puVar11 + 1;
                  }
                  thunk_FUN_00471e4f();
                  pCStack_32c = pCStack_3bc;
                  pGStack_328 = (GameActionEquip *)dStack_3b8;
                  pDStack_324 = (DynamicObject *)dStack_3b4;
                  local_398 = dStack_3b0;
                  puVar17 = auStack_2c0;
                  local_394 = dStack_3ac;
                  ppCVar16 = &pCStack_32c;
                  local_390 = local_3a8;
                  ppGVar15 = &pGStack_3c8;
                  thunk_FUN_0047134a();
                  puVar14 = auStack_2cc;
                  ppCVar13 = &pCStack_3a4;
                  pDStack_324 = local_3cc;
                  puVar12 = &stack0xfffffc2c;
                  pCStack_32c = unaff_ESI;
                  pGStack_328 = pGVar20;
                  thunk_FUN_0047135d();
                  pGStack_368 = pGVar18;
                  pGStack_364 = pGVar19;
                  pGStack_360 = unaff_EDI;
                  cls_0x4f4c00::cls_0x4f4c00(&cStack_2f8,&fStack_338,&pGStack_368);
                  iVar1 = (*(code *)cStack_2f8.mbr_0x1c)
                                    (&pCStack_3a4,&fStack_374,&stack0xfffffc14,&local_38c,puVar12,
                                     ppCVar13,puVar14,ppGVar15,ppCVar16,puVar17);
                  this_03 = extraout_ECX_03;
                  if ((iVar1 != 0) &&
                     (pGVar9 = pGStack_3c8, pGVar21 = pGStack_3c8,
                     (float)pGStack_3c8 < (float)pGVar20 !=
                     (NAN((float)pGStack_3c8) || NAN((float)pGVar20)))) goto LAB_0058ad82;
                }
              }
              else if ((*(int *)(this_01->mbr_0xc + 0x10) == 0) ||
                      (*(int *)(this_01->mbr_0xc + 0x14) == 0)) {
                cls_0x4a4cd0::meth_0x4a4cd0(this_01);
                FUN_00497120((byte *)"Client::HandleMousePicking - No Collision Data for %s!\n");
                this_03 = extraout_ECX_02;
                if ((float)*ppGVar10 < (float)pGVar20 !=
                    (NAN((float)*ppGVar10) || NAN((float)pGVar20))) {
                  pGStack_368 = ppGVar10[1];
                  pGStack_364 = ppGVar10[2];
                  pGStack_360 = ppGVar10[3];
                  this_03 = pGStack_364;
                  pGVar20 = *ppGVar10;
                  local_3cc = pDVar4;
                }
              }
              else {
                dStack_35c = dStack_3b0;
                pAStack_354 = local_3a8;
                dStack_358 = dStack_3ac;
                pGStack_328 = pGStack_3a0;
                pCStack_32c = pCStack_3a4;
                pDStack_324 = local_39c;
                pGStack_3c4 = (GameActionEquip *)0x0;
                puVar6 = *(undefined4 **)this_00->mbr_0x10;
                puVar11 = auStack_274;
                for (iVar1 = 0x10; puVar6 = puVar6 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
                  *puVar11 = *puVar6;
                  puVar11 = puVar11 + 1;
                }
                uVar5 = Gfx_AnimMeshInstance::RayIntersection
                                  ((Gfx_AnimMeshInstance *)this_01,auStack_274);
                this_03 = extraout_ECX_01;
                if (((char)uVar5 != '\0') &&
                   (pGVar9 = extraout_ECX_01, this_03 = extraout_ECX_01, pGVar21 = pGStack_3c4,
                   (float)pGStack_3c4 < (float)pGVar20 !=
                   (NAN((float)pGStack_3c4) || NAN((float)pGVar20)))) {
LAB_0058ad82:
                  this_03 = pGVar9;
                  pGVar20 = pGVar21;
                  local_3cc = pDVar4;
                }
              }
            }
            ppGVar15 = ppGVar10 + 0xb;
            ppGVar10 = ppGVar10 + 6;
            this = unaff_ESI;
            pAVar3 = local_390;
          } while (*ppGVar15 != (GameActionEquip *)0x0);
        }
      } while (iStack_3c0 != 0);
      if (*(int *)&(this->client).base.critical_section.field_0xd8 != 0) {
        pDVar4 = (DynamicObject *)GameActionEquip::meth_0x54be10(this_03);
        if (pDVar4 == (DynamicObject *)0x0) {
          *(undefined4 *)&(unaff_ESI->client).base.critical_section.field_0xd8 = 0;
        }
        else if (pDVar4 == local_3cc) {
          piVar8 = (*pDVar4->vftptr_0x0[0x22].virt_meth_0x568400_0)(pDVar4,(byte)pGVar19);
          if (((char)piVar8 != '\0') && (*(uint *)&pGVar20->field_0xfc != 0)) {
            Entity::meth_0x54f150((Entity *)pDVar4,*(uint *)&pGVar20->field_0xfc,(int **)0x1);
            *(undefined4 *)&pGVar20->field_0xfc = 0;
            pGVar20->mbr_0xdc = 0;
          }
        }
        else {
          this_02 = (Entity *)GameActionEquip::meth_0x54be10(this_04);
          if ((this_02 != (Entity *)0x0) &&
             (uVar5 = *(uint *)&(unaff_ESI->client).base.critical_section.field_0xf8, uVar5 != 0)) {
            Entity::meth_0x54f150(this_02,uVar5,(int **)0x1);
            *(undefined4 *)&(unaff_ESI->client).base.critical_section.field_0xf8 = 0;
          }
        }
      }
      if ((pGStack_3c8 == (GameActionEquip *)0x0) ||
         (puVar6 = (*(pGStack_3c8->ActionEquip).Action.vftptr_0x0[4].virt_meth_0x6162e5_24)
                             ((critical_section *)pGStack_3c8,(byte)pGVar19), (char)puVar6 != '\0'))
      {
        if (DAT_0070bd98 == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)(DAT_0070bd98 + 0xc);
        }
        piVar8 = (int *)(**(code **)(*piVar8 + 0xc))();
        if (piVar8 != (int *)0x0) {
          iVar1 = (**(code **)(*piVar8 + 0x58))();
          if (iVar1 == 0) {
            *(undefined *)&(local_3cc->Gfx_LineSystem).mbr_0xa8 = 0;
          }
          else {
            (local_3cc->Gfx_LineSystem).mbr_0xac = cStack_2f8.mbr_0x18;
            *(undefined *)&(local_3cc->Gfx_LineSystem).mbr_0xa8 = 1;
            (local_3cc->Gfx_LineSystem).mbr_0xb0 = cStack_2f8.mbr_0x1c;
            (local_3cc->Gfx_LineSystem).mbr_0xb4 = dStack_2d8;
          }
        }
        (local_3cc->Gfx_LineSystem).mbr_0x9c = 0;
      }
      else {
        *(undefined *)&(local_3cc->Gfx_LineSystem).mbr_0xa8 = 0;
        dVar7 = net::critical_section::meth_0x54ef90
                          ((critical_section *)pGStack_3c8,
                           (int *)(local_3cc->Gfx_LineSystem).mbr_0xb8,0,'\0',(int *)0x0,1);
        (local_3cc->Gfx_LineSystem).mbr_0xbc = dVar7;
        (local_3cc->Gfx_LineSystem).mbr_0x9c = *(dword *)&pGStack_3c8->field_0x1dc;
      }
    }
  }
  ExceptionList = local_c;
  return;
}



int * __thiscall Client::virt_meth_0x58bd80(Client *this)

{
  char *pcVar1;
  void *this_00;
  char *pcVar2;
  int *piVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  this_00 = FUN_004a7680(0xbbf0);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "Console";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Console",(uint)(pcVar2 + -0x69cb10));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar3 = FUN_0059e180(this_00,local_28,(int *)0x1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return piVar3;
}



int * __thiscall Client::virt_meth_0x58be40(Client *this)

{
  char *pcVar1;
  CDebugInterface *this_00;
  char *pcVar2;
  cls_0x558740 *pcVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  this_00 = (CDebugInterface *)FUN_004a7680(0xf8);
  local_4 = 0;
  if (this_00 == (CDebugInterface *)0x0) {
    pcVar3 = (cls_0x558740 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "Debug";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Debug",(uint)(pcVar2 + -0x69cb18));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pcVar3 = CDebugInterface::CDebugInterface(this_00,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return (int *)pcVar3;
}



int * __thiscall Client::virt_meth_0x58bf00(Client *this)

{
  char *pcVar1;
  cls_0x5b6400 *pcVar2;
  char *pcVar3;
  bool bVar4;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &pVStack_c;
  pcVar2 = (cls_0x5b6400 *)FUN_004a7680(0x70);
  local_4 = 0;
  if (pcVar2 == (cls_0x5b6400 *)0x0) {
    pcVar2 = (cls_0x5b6400 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "DebugTools";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"DebugTools",(uint)(pcVar3 + -0x69cb20));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pcVar2 = cls_0x5b6400::cls_0x5b6400(pcVar2,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = pVStack_c;
  return (int *)pcVar2;
}



undefined4 __thiscall Client::virt_meth_0x58bfc0(Client *this)

{
  char *pcVar1;
  void *this_00;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  this_00 = FUN_004a7680(0x54);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "FontTest";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"FontTest",(uint)(pcVar2 + -0x69cb2c));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar3 = FUN_005b80e0(this_00,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return uVar3;
}



undefined4 * __thiscall Client::virt_meth_0x58c080(Client *this)

{
  char *pcVar1;
  DialogueInterface *pDVar2;
  char *pcVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  pDVar2 = (DialogueInterface *)FUN_004a7680(0x2ac);
  local_4 = 0;
  if (pDVar2 == (DialogueInterface *)0x0) {
    pDVar2 = (DialogueInterface *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "DialogueInterface";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"DialogueInterface",(uint)(pcVar3 + -0x69cb38));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pDVar2 = DialogueInterface::DialogueInterface(pDVar2,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return &pDVar2->vftptr_0x0;
}



undefined4 * __thiscall Client::virt_meth_0x58c140(Client *this)

{
  char *pcVar1;
  CFloatingTextInterface *pCVar2;
  char *pcVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  pCVar2 = (CFloatingTextInterface *)FUN_004a7680(0x37584);
  local_4 = 0;
  if (pCVar2 == (CFloatingTextInterface *)0x0) {
    pCVar2 = (CFloatingTextInterface *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "FloatingTextInterface";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"FloatingTextInterface",(uint)(pcVar3 + -0x69cb4c));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pCVar2 = CFloatingTextInterface::CFloatingTextInterface(pCVar2,local_28,(int *)0x1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return &pCVar2->vftptr_0x0;
}



undefined4 * __thiscall Client::virt_meth_0x58c200(Client *this)

{
  char *pcVar1;
  CSMenuInterface *pCVar2;
  char *pcVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  pCVar2 = (CSMenuInterface *)FUN_004a7680(0xd88);
  local_4 = 0;
  if (pCVar2 == (CSMenuInterface *)0x0) {
    pCVar2 = (CSMenuInterface *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "CSMenuInterface";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"CSMenuInterface",(uint)(pcVar3 + -0x69cb64));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pCVar2 = CSMenuInterface::CSMenuInterface(pCVar2,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return &pCVar2->vftptr_0x0;
}



void __thiscall Client::virt_meth_0x58c380(Client *this,void *param_1)

{
  CameraControl *this_00;
  bool bVar1;
  Entity *this_01;
  int iVar2;
  int *piVar3;
  GameActionEquip *this_02;
  byte unaff_DI;
  uint unaff_retaddr;
  char local_14d;
  void *local_14c;
  void *local_148;
  int local_144;
  void *local_140;
  void *local_13c;
  undefined local_138 [4];
  undefined local_134 [32];
  undefined4 local_114 [65];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639cfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) goto LAB_0058c5cb;
  switch(*(undefined4 *)((int)param_1 + 0x30)) {
  case 0xc:
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_144);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_14c);
    GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,&local_14d);
    FUN_0045e560(param_1,&local_140);
    FUN_0045e560(param_1,&local_148);
    FUN_0045e560(param_1,&local_14c);
    this_01 = (Entity *)GameActionEquip::meth_0x54be10(this_02);
    if (this_01 == (Entity *)0x0) {
      FUN_00497120((byte *)
                   "Error handling Network::ENGINE_ID_ENTITY_ADDTOMAP (Client::FilterPacket)\n\tEntity not found.\n"
                  );
    }
    else {
      local_13c = local_140;
      local_134._0_4_ = local_14c;
      local_138 = (undefined  [4])local_148;
      Entity::meth_0x54a8a0(this_01,(float *)&local_13c);
      if ((local_14d != '\0') ||
         ((*(int *)&(this_01->DynamicObject).field_0x1e4 ==
           *(int *)&(this->client).base.critical_section.field_0xb8 &&
          (local_144 == *(int *)&(this->client).base.critical_section.field_0xdc)))) {
        (*(this->client).base.vftptr_0x0[0x12].virt_meth_0x6162e5_4)(local_144,1,1);
      }
    }
    break;
  case 0xd:
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_14c);
    meth_0x588200(this,(int)local_14c);
    break;
  case 0x22:
  case 0x27:
  case 0x32:
    (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_DI);
    break;
  case 0x26:
  case 0x31:
  case 0x34:
    (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_DI);
    break;
  case 0x3a:
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,local_114);
    this_00 = *(CameraControl **)&(this->client).base.critical_section.field_0x80;
    CameraControl::meth_0x586590(this_00,'\x01');
    CameraControl::meth_0x586830(this_00);
    cls_0x5810f0::meth_0x5810f0
              (*(cls_0x5810f0 **)&(this->client).base.critical_section.field_0x70,1);
    (**(code **)(**(int **)&(this->client).base.critical_section.field_0x9c + 0x10))(0);
    (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 0x20))();
    piVar3 = *(int **)&(this->client).base.critical_section.field_0x9c;
    (this->client).base.critical_section.field_0x10c = 1;
    (**(code **)(*piVar3 + 0x14))();
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(local_138 + 4),local_134 + 0x1c);
    puStack_8 = (undefined *)0x0;
    piVar3 = (int *)FUN_0041d050();
    (**(code **)(*piVar3 + 4))(local_138 + 4);
    local_c = (void *)0xffffffff;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_138);
    iVar2 = FUN_0041d050();
    local_14c = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x5c)
                        )();
    goto LAB_0058c5c1;
  case 0x3f:
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_14c);
    piVar3 = (int *)FUN_0041d050();
    (**(code **)(*piVar3 + 8))(local_14c);
    (**(code **)(**(int **)&(this->client).base.critical_section.field_0x9c + 0x10))(0);
LAB_0058c5c1:
    meth_0x589d90(this,local_14c);
  }
LAB_0058c5cb:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Client::virt_meth_0x58c660(Client *this,int *param_1)

{
  char cVar1;
  CameraControl *this_00;
  undefined4 *puVar2;
  Entity *this_01;
  critical_section *pcVar3;
  cls_0x56ae70 *this_02;
  cls_0x569f10 *this_03;
  GameActionEquip *pGVar4;
  cls_0x599db0 *this_04;
  GameActionEquip **ppGVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  void *pvVar10;
  cls_0x56d570 *this_05;
  cls_0x56d380 *this_06;
  int *piVar11;
  GameActionEquip *this_07;
  GameActionEquip *this_08;
  GameActionEquip *this_09;
  GameActionEquip *this_10;
  GameActionEquip *this_11;
  GameActionEquip *this_12;
  GameActionEquip *this_13;
  GameActionEquip *this_14;
  GameActionEquip *this_15;
  GameActionEquip *this_16;
  GameActionEquip *this_17;
  undefined **ppuVar12;
  dword unaff_EBX;
  dword unaff_ESI;
  byte unaff_DI;
  uint unaff_retaddr;
  Action__vftable_647888 *in_stack_fffff860;
  undefined4 *in_stack_fffff864;
  GameActionEquip *pGVar13;
  byte bVar14;
  GameActionEquip *pGStack_754;
  int *piStack_750;
  GameActionEquip *pGStack_74c;
  GameActionEquip *pGStack_748;
  undefined4 uStack_744;
  void *pvStack_740;
  void *pvStack_73c;
  void *pvStack_738;
  int *piStack_734;
  undefined auStack_730 [24];
  undefined auStack_718 [28];
  char acStack_6fc [4];
  undefined auStack_6f8 [4];
  undefined *apuStack_6f4 [60];
  undefined auStack_604 [44];
  CStore aCStack_5d8 [4];
  undefined4 auStack_4d0 [32];
  char acStack_450 [64];
  undefined4 auStack_410 [256];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639d47;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  puVar2 = (*(this->client).base.vftptr_0x0[0x11].virt_meth_0x59d650_0)((base *)this,(byte)param_1);
  if ((char)puVar2 == '\0') {
    switch(param_1[0xc]) {
    case 9:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_73c);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pGStack_748);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pvStack_740);
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x28))();
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x30))();
      iVar7 = FUN_0041d050();
      pcVar3 = (critical_section *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x18))();
      net::critical_section::meth_0x551880(pcVar3,apuStack_6f4,pGStack_748,0,unaff_DI,unaff_ESI);
      break;
    case 10:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      puVar2 = (undefined4 *)GameActionEquip::meth_0x54be10(pGStack_748);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)();
      }
      break;
    default:
      cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_1 + 6),acStack_450,0x40,'\x01');
      FUN_00497120((byte *)"Client received packet with unknown id %d from %s\r\n");
      break;
    case 0xc:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_740);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)((int)&uStack_744 + 3))
      ;
      FUN_0045e560(param_1,&pvStack_73c);
      FUN_0045e560(param_1,&piStack_750);
      FUN_0045e560(param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pvVar10 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x54)
                        )();
      this_01 = (Entity *)GameActionEquip::meth_0x54be10(this_07);
      FUN_00573160(pvVar10,(int *)this_01);
      pvStack_738 = pvStack_73c;
      piStack_734 = piStack_750;
      auStack_730._0_4_ = pGStack_754;
      Entity::meth_0x54a8a0(this_01,(float *)&pvStack_738);
      if ((uStack_744._3_1_ != '\0') ||
         ((*(int *)&(this_01->DynamicObject).field_0x1e4 ==
           *(int *)&(this->client).base.critical_section.field_0xb8 &&
          (pvStack_740 == *(void **)&(this->client).base.critical_section.field_0xdc)))) {
        (*(this->client).base.vftptr_0x0[0x12].virt_meth_0x6162e5_4)();
      }
      break;
    case 0xd:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      meth_0x588200(this,(int)pGStack_754);
      piVar11 = (int *)GameActionEquip::meth_0x54be10(this_08);
      if (piVar11 == (int *)0x0) {
        handle_fatal_error(
                          "Error handling Network::ENGINE_ID_ENTITY_REMOVEFROMMAP (Client::recv_packet)\n\tInvalid entity\n"
                          );
      }
      else {
        iVar7 = FUN_0041d050();
        pvVar10 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) +
                                      0x54))();
        if (pvVar10 == (void *)0x0) {
          handle_fatal_error(
                            "Error handling Network::ENGINE_ID_ENTITY_REMOVEFROMMAP (Client::recv_packet)\n\tInvalid map\n"
                            );
        }
        else {
          FUN_0056e500(pvVar10,piVar11);
        }
      }
      break;
    case 0xe:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(this_09);
      if (pcVar3 != (critical_section *)0x0) {
        net::critical_section::meth_0x551ba0(pcVar3,(int)piStack_750);
      }
      break;
    case 0x10:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = GameActionEquip::meth_0x54be10(this_10);
      if (iVar7 == 0) {
        handle_fatal_error(
                          "Error handling Network::ENGINE_ID_ENTITY_ADDTOPARTY (Client::recv_packet)\n\tInvalid Entity\n"
                          );
      }
      else {
        piVar11 = (int *)FUN_00401130();
        puVar2 = (undefined4 *)(**(code **)(*piVar11 + 0x68))();
        (**(code **)*puVar2)();
      }
      break;
    case 0x11:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = GameActionEquip::meth_0x54be10(pGStack_754);
      if (iVar7 == 0) {
        handle_fatal_error(
                          "Error handling Network::ENGINE_ID_ENTITY_REMOVEFROMPARTY (Client::recv_packet)\n\tInvalid Entity\n"
                          );
      }
      else {
        piVar11 = (int *)FUN_00401130();
        piVar11 = (int *)(**(code **)(*piVar11 + 0x68))();
        (**(code **)(*piVar11 + 0x10))();
      }
      break;
    case 0x12:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(this_11);
      if (pcVar3 != (critical_section *)0x0) {
        net::critical_section::meth_0x5512b0(pcVar3,apuStack_6f4,piStack_750,1);
      }
      break;
    case 0x13:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&piStack_750);
      pvVar10 = (void *)GameActionEquip::meth_0x54be10(this_12);
      if (pvVar10 != (void *)0x0) {
        FUN_0054f270(pvVar10,(int *)pGStack_748,(char)piStack_750);
      }
      break;
    case 0x14:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      pvVar10 = (void *)GameActionEquip::meth_0x54be10(pGStack_754);
      if (pvVar10 != (void *)0x0) {
        FUN_005512f0(pvVar10,apuStack_6f4,(char)pGStack_748,piStack_750);
      }
      break;
    case 0x15:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&piStack_750);
      pvVar10 = (void *)GameActionEquip::meth_0x54be10(this_13);
      if (pvVar10 != (void *)0x0) {
        FUN_0054f590(pvVar10,(int *)pGStack_748,(char)piStack_750);
      }
      break;
    case 0x16:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x84))();
      GameActionEquip::AddToTeam(pGVar4,piStack_750,(int *)pGVar13);
      break;
    case 0x17:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x84))();
      GameActionEquip::meth_0x56a1a0(pGVar4,(int *)pGVar13);
      break;
    case 0x18:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      iVar7 = GameActionEquip::meth_0x54be10(this_14);
      if (iVar7 != 0) {
        *(int **)(iVar7 + 0x36c) = piStack_750;
      }
      break;
    case 0x19:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      iVar7 = GameActionEquip::meth_0x54be10(pGStack_754);
      iVar6 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 4) + 4 + iVar6) + 0x28))();
      iVar6 = FUN_0041d050();
      pcVar3 = (critical_section *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 4) + 4 + iVar6) + 0x18))();
      net::critical_section::meth_0x551880
                (pcVar3,(undefined **)&DAT_0064d7d8,0,0,unaff_DI,unaff_ESI);
      (*pcVar3->vftptr_0x0[10].virt_meth_0x5b92d0_0)(pcVar3,(byte)iVar7);
      break;
    case 0x1b:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x84))();
      GameActionEquip::SetTeamAttitude(pGVar4,(int **)pGStack_748,piStack_750,(int)pGVar13);
      break;
    case 0x1c:
      iVar7 = FUN_0041d050();
      this_02 = (cls_0x56ae70 *)
                (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x84))();
      cls_0x56ae70::meth_0x56ad40(this_02);
      break;
    case 0x1d:
      iVar7 = FUN_0041d050();
      this_03 = (cls_0x569f10 *)
                (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x88))();
      cls_0x569f10::meth_0x569de0(this_03);
      break;
    case 0x1e:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x88))();
      GameActionEquip::RemoveFromSquad(pGVar4,(int *)pGVar13);
      break;
    case 0x1f:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      iVar7 = GameActionEquip::meth_0x54be10(this_15);
      if (iVar7 != 0) {
        *(int **)(iVar7 + 0x374) = piStack_750;
      }
      break;
    case 0x20:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x88))();
      GameActionEquip::AddToSquad(pGVar4,piStack_750,(int *)pGVar13);
      break;
    case 0x21:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x88))();
      GameActionEquip::meth_0x569480(pGVar4,(int **)pGStack_748,piStack_750,(int)pGVar13);
      break;
    case 0x22:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      bVar14 = 0xff;
      pvVar10 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x78)
                        )();
      FUN_005a0610(pvVar10,(dword)pGStack_754,unaff_EBX);
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x23:
    case 0x24:
    case 0x25:
      break;
    case 0x26:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,auStack_4d0);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      piVar11 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x7c))
                                 ();
      pGVar13 = pGStack_754;
      (**(code **)(*piVar11 + 4))();
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,(byte)pGVar13);
      break;
    case 0x27:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      iVar7 = FUN_0041d050();
      piVar11 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x7c))
                                 ();
      bVar14 = (byte)apuStack_6f4;
      (**(code **)(*piVar11 + 0xc))();
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x2a:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x6162e5_4)();
      break;
    case 0x2b:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      bVar14 = 0x9b;
      pvVar10 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x80)
                        )();
      if ((pvVar10 != (void *)0x0) &&
         (pvVar10 = (void *)FUN_005a23b0(pvVar10,(CStore *)auStack_6f8), pvVar10 != (void *)0x0)) {
        FUN_005a26b0(pvVar10,&aCStack_5d8[0].vftptr_0x0,unaff_EBX,0,0,0,0);
      }
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x2c:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      bVar14 = 0x15;
      pvVar10 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x80)
                        )();
      if ((pvVar10 != (void *)0x0) &&
         (pvVar10 = (void *)FUN_005a23b0(pvVar10,aCStack_5d8), pvVar10 != (void *)0x0)) {
        FUN_005a1e80(pvVar10,auStack_6f8);
      }
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x2e:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      iVar7 = FUN_0041d050();
      bVar14 = (byte)apuStack_6f4;
      this_04 = (cls_0x599db0 *)
                (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x8c))();
      if ((this_04 != (cls_0x599db0 *)0x0) &&
         (ppGVar5 = (GameActionEquip **)cls_0x599db0::meth_0x599db0(this_04,unaff_EBX),
         ppGVar5 != (GameActionEquip **)0x0)) {
        *ppGVar5 = pGStack_754;
      }
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x2f:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_73c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_740);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      meth_0x58aad0(this,pGStack_74c,(int)pvStack_73c,pvStack_740,pGStack_748,piStack_750,
                    pGStack_754);
      break;
    case 0x30:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,auStack_4d0);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_604 + 0x14),(char *)auStack_4d0);
      uStack_4 = 0;
      GameClient::meth_0x587a70((GameClient *)this);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_604);
      break;
    case 0x31:
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)((int)&uStack_744 + 3))
      ;
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      ppGVar5 = &pGStack_754;
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,ppGVar5);
      bVar14 = (byte)ppGVar5;
      if (uStack_744._3_1_ == '\0') {
        iVar7 = GameActionEquip::meth_0x54be10(pGStack_74c);
        iVar6 = GameActionEquip::meth_0x54be10(this_16);
        iVar6 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar6 + 0x168),(int)piStack_750);
        bVar14 = (byte)iVar6;
        (**(code **)(**(int **)(iVar7 + 0x168) + 4))();
      }
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x32:
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)((int)&uStack_744 + 3))
      ;
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      ppGVar5 = &pGStack_754;
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,ppGVar5);
      bVar14 = (byte)ppGVar5;
      if (uStack_744._3_1_ == '\0') {
        iVar7 = GameActionEquip::meth_0x54be10(pGStack_74c);
        iVar6 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar7 + 0x168),(int)pGStack_754);
        bVar14 = (byte)iVar6;
        (**(code **)(**(int **)(iVar7 + 0x168) + 8))();
      }
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x34:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      pvVar10 = (void *)GameActionEquip::meth_0x54be10(this_17);
      if (pvVar10 == (void *)0x0) {
        FUN_00497120((byte *)
                     "ENGINE_ID_ITEM_SETSTACKSIZE - Unable to look up entity to set the stacksize of.\n"
                    );
      }
      else {
        FUN_00549d60(pvVar10,(int)pGStack_754);
        (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_DI);
      }
      break;
    case 0x37:
      meth_0x588230(this,(int)param_1);
      break;
    case 0x3a:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      this_00 = *(CameraControl **)&(this->client).base.critical_section.field_0x80;
      CameraControl::meth_0x586590(this_00,'\x01');
      CameraControl::meth_0x586830(this_00);
      cls_0x5810f0::meth_0x5810f0
                (*(cls_0x5810f0 **)&(this->client).base.critical_section.field_0x70,1);
      (**(code **)(**(int **)&(this->client).base.critical_section.field_0x9c + 0x10))();
      (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 0x20))();
      piVar11 = *(int **)&(this->client).base.critical_section.field_0x9c;
      (this->client).base.critical_section.field_0x10c = 1;
      (**(code **)(*piVar11 + 0x14))();
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x50))();
      iVar7 = FUN_0041d050();
      iVar7 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x58))();
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_718,acStack_6fc);
      pvStack_c = (void *)0x1;
      piVar11 = (int *)FUN_0041d050();
      (**(code **)(*piVar11 + 4))();
      uStack_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_718 + 8));
      meth_0x589d90(this,*(undefined4 *)(iVar7 + 0xb4));
      break;
    case 0x3d:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x3c))();
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x58))();
      break;
    case 0x3e:
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x50))();
      (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 0x20))();
      break;
    case 0x3f:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_730 + 4),(char *)&aCStack_5d8[0].mbr_0x4)
      ;
      uStack_4 = 2;
      piVar11 = (int *)FUN_0041d050();
      (**(code **)(*piVar11 + 4))();
      puStack_8 = (undefined *)0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_730);
      (**(code **)(**(int **)&(this->client).base.critical_section.field_0x9c + 0x10))();
      iVar7 = FUN_0041d050();
      uVar9 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x5c))();
      meth_0x589d90(this,uVar9);
      break;
    case 0x41:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      pGStack_754 = (GameActionEquip *)&stack0xfffff880;
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffff880,"");
      pGStack_74c = (GameActionEquip *)&stack0xfffff860;
      uStack_4 = 3;
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffff860,(char *)&aCStack_5d8[0].mbr_0x4);
      piVar11 = (int *)FUN_00401130();
      uStack_4 = 0xffffffff;
      pvVar10 = (void *)(**(code **)(*piVar11 + 0x6c))();
      FUN_005aa070(pvVar10,in_stack_fffff860,in_stack_fffff864);
      break;
    case 0x42:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      iVar7 = (**(code **)(*piVar11 + 0x54))();
      if (iVar7 == 0) {
        FUN_00497120((byte *)
                     "Invalid map ID caught in ENGINE_ID_SETLOCAL in Client::recv_packet: %d");
      }
      else {
        if (*(uint *)(iVar7 + 0x24) < 0x10) {
          pcVar8 = (char *)(iVar7 + 0x10);
        }
        else {
          pcVar8 = *(char **)(iVar7 + 0x10);
        }
        pGStack_74c = (GameActionEquip *)&stack0xfffff880;
        cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffff880,pcVar8);
        pGStack_754 = (GameActionEquip *)&stack0xfffff860;
        uStack_4 = 4;
        cls_0x4d8d70::meth_0x401d20
                  ((cls_0x4d8d70 *)&stack0xfffff860,(char *)&aCStack_5d8[0].mbr_0x4);
        piVar11 = (int *)FUN_00401130();
        uStack_4 = 0xffffffff;
        pvVar10 = (void *)(**(code **)(*piVar11 + 0x70))();
        FUN_005aa070(pvVar10,in_stack_fffff860,in_stack_fffff864);
      }
      break;
    case 0x44:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,auStack_410);
      FUN_0059eaf0(*(int *)&(this->client).base.critical_section.field_0x84,&DAT_00671dc0);
      break;
    case 0x45:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pGStack_74c);
      (*(this->client).base.vftptr_0x0[0x12].virt_meth_0x6162e5_4)();
      break;
    case 0x47:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      pGVar13 = pGStack_74c;
      puVar2 = (undefined4 *)operator_new((uint)pGStack_74c);
      GameActionEquip::meth_0x45e580((GameActionEquip *)param_1,puVar2,(uint)pGVar13);
      pcVar8 = get_some_directory_path();
      ppuVar12 = apuStack_6f4;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        *(char *)ppuVar12 = cVar1;
        ppuVar12 = (undefined **)((int)ppuVar12 + 1);
      } while (cVar1 != '\0');
      FUN_004c58a0((char *)apuStack_6f4,(undefined4 *)"characters");
      FUN_004c58a0((char *)apuStack_6f4,&aCStack_5d8[0].mbr_0x4);
      pvVar10 = (void *)ResourceSystem::FileStreamOpen(DAT_00707da8,(char)apuStack_6f4,0);
      if (pvVar10 != (void *)0x0) {
        uVar9 = ResourceSystem::FileStreamWrite(puVar2,(int)pGVar13,(int)pvVar10);
        if ((char)uVar9 == '\0') {
          handle_fatal_error("Error writing creature file %s");
        }
        cls_0x49c610::meth_0x49b1d0(DAT_00707da8,pvVar10,'\0');
      }
      break;
    case 0x49:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_73c);
      FUN_0045e560(param_1,&pvStack_740);
      FUN_0045e560(param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      FUN_0045e560(param_1,&pGStack_754);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      pGVar13 = pGStack_754;
      pGVar4 = pGStack_74c;
      pvVar10 = (void *)(**(code **)(*piVar11 + 0x54))();
      FUN_0056d4b0(pvVar10,pvStack_740,pGStack_748,piStack_750,pGVar13,(byte)pGVar4);
      break;
    case 0x4a:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_73c);
      FUN_0045e560(param_1,&pvStack_740);
      FUN_0045e560(param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      FUN_0045e560(param_1,&pGStack_754);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      pGVar13 = pGStack_754;
      pGVar4 = pGStack_74c;
      pvVar10 = (void *)(**(code **)(*piVar11 + 0x54))();
      FUN_0056d2b0(pvVar10,pvStack_740,pGStack_748,piStack_750,pGVar13,pGVar4);
      break;
    case 0x4b:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      this_05 = (cls_0x56d570 *)(**(code **)(*piVar11 + 0x54))();
      cls_0x56d570::meth_0x56d570(this_05);
      break;
    case 0x4c:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      this_06 = (cls_0x56d380 *)(**(code **)(*piVar11 + 0x54))();
      cls_0x56d380::meth_0x56d380(this_06);
      break;
    case 0x4d:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      (**(code **)(*piVar11 + 0xa0))();
      break;
    case 0x4e:
      piVar11 = (int *)FUN_00401130();
      (**(code **)(*piVar11 + 0xa4))();
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
Client::SetFocus(Client *this,uint param_1,uint param_2,undefined4 param_3,char param_4,char param_5
                )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 ******ppppppuVar5;
  char *pcVar6;
  int *piVar7;
  uint unaff_retaddr;
  undefined4 ******ppppppuStack_6c;
  void *pvStack_68;
  dword dStack_5c;
  uint uStack_58;
  VFX_Parameter__vftable_673a20 *pVStack_54;
  undefined4 auStack_50 [16];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639d68;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  if (param_1 != 0) {
    ExceptionList = &pvStack_c;
    iVar3 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(iVar3 + 0x1ec);
      if (DAT_0070bd98 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(DAT_0070bd98 + 0xc);
      }
      (**(code **)(*piVar7 + 8))(uVar2);
      meth_0x589d90(this,uVar2);
      if (DAT_0070bd98 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = DAT_0070bd98 + 0xc;
      }
      iVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x60))();
      if (*(uint *)(iVar3 + 0x24) < 0x10) {
        pcVar6 = (char *)(iVar3 + 0x10);
      }
      else {
        pcVar6 = *(char **)(iVar3 + 0x10);
      }
      uStack_58 = 0xf;
      dStack_5c = 0;
      ppppppuStack_6c = (undefined4 ******)((uint)ppppppuStack_6c & 0xffffff00);
      pcVar4 = pcVar6;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&stack0xffffff90,pcVar6,(int)pcVar4 - (int)(pcVar6 + 1));
      puStack_8 = (undefined *)0x0;
      ::cls_0x50db20::meth_0x401a40((cls_0x50db20 *)&stack0xffffff90,dStack_5c - 4,4);
      ppppppuVar5 = ppppppuStack_6c;
      if (uStack_58 < 0x10) {
        ppppppuVar5 = &ppppppuStack_6c;
      }
      (**(code **)(*DAT_00707ce4 + 0x1b0))(ppppppuVar5);
      FUN_00616d8c((char *)auStack_50,(byte *)"CameraSetTarget %u");
      FUN_00580d10(*(void **)&(this->client).base.critical_section.field_0x78,auStack_50);
      if ((char)param_2 == '\0') {
        *(undefined4 *)&(this->client).base.critical_section.field_0xdc = 0;
      }
      else {
        piVar7 = *(int **)&(this->client).base.critical_section.field_0x9c;
        *(uint *)&(this->client).base.critical_section.field_0xdc = param_1;
        (**(code **)(*piVar7 + 0x1c))();
      }
      *(undefined4 *)&(this->client).base.critical_section.field_0xd8 = 0;
      if ((char)param_3 != '\0') {
        if (DAT_0070bd98 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = DAT_0070bd98 + 0xc;
        }
        iVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x54))(uVar2)
        ;
        if (*(uint *)(iVar3 + 0x158) < 0x10) {
          pcVar6 = (char *)(iVar3 + 0x144);
        }
        else {
          pcVar6 = *(char **)(iVar3 + 0x144);
        }
        FUN_005908f0(*(void **)&(this->client).base.critical_section.field_0x6c,pcVar6);
      }
      if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_54) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_68);
      }
      goto LAB_0058db59;
    }
  }
  FUN_00497120((byte *)"Invalid entity id passed to Client::SetFocus()\n");
LAB_0058db59:
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



Client * __thiscall Client::Client(Client *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 unaff_ESI;
  char *pcVar2;
  char *pcVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639c08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  net::client::client(&this->client,(u_short)param_1);
  (this->client).base.vftptr_0x0 = (base__vftable_6a1d1c *)&Client__vftable_69c814_0069c814;
  *(undefined4 *)&(this->client).base.critical_section.field_0x6c = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x70 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x74 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x78 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x7c = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x80 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x84 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x88 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x8c = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x90 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x94 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x98 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x9c = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xa0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xa4 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xa8 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xac = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xb0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xb4 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xb8 = 0;
  (this->client).base.critical_section.field_0xd0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xd4 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xd8 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xdc = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xe0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xe8 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xec = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xf0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xf4 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xf8 = 0;
  (this->client).base.critical_section.field_0xfc = 1;
  *(undefined4 *)&(this->client).base.critical_section.field_0x100 = 0;
  (this->client).base.critical_section.field_0x104 = 0;
  (this->client).base.critical_section.field_0x105 = 0;
  (this->client).base.critical_section.field_0x106 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x108 = 0;
  (this->client).base.critical_section.field_0x10c = 0;
  *(undefined2 *)&(this->client).base.critical_section.field_0x10e = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x110 = 0;
  (this->client).base.critical_section.field_0xbc = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xc0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xc4 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xc8 = 0;
  *(undefined2 *)&(this->client).base.critical_section.field_0xcc = 0;
  local_4 = 0;
  (this->client).base.critical_section.field_0xce = 0;
  uVar1 = FUN_0056af50();
  pcVar3 = "StartMap";
  *(undefined4 *)&(this->client).base.critical_section.field_0xd4 = uVar1;
  RegisterCommand((undefined4 *)"StartMap",CommandStartMap,unaff_ESI);
  pcVar2 = "RequestNewGame";
  RegisterCommand((undefined4 *)"RequestNewGame",CommandRequestNewGame,pcVar3);
  pcVar3 = "NewGame";
  RegisterCommand((undefined4 *)"NewGame",CommandRequestNewGame,pcVar2);
  pcVar2 = "Connect";
  RegisterCommand((undefined4 *)"Connect",CommandConnect,pcVar3);
  pcVar3 = "Disconnect";
  RegisterCommand((undefined4 *)"Disconnect",CommandDisconnect,pcVar2);
  pcVar2 = "Kill";
  RegisterCommand((undefined4 *)"Kill",&CommandKill,pcVar3);
  pcVar3 = "StartDialogue";
  RegisterCommand((undefined4 *)"StartDialogue",CommandStartDialogue,pcVar2);
  RegisterCommand((undefined4 *)"EndDialogue",CommandEndDialogue,pcVar3);
  pcVar3 = "EndDialog";
  RegisterCommand((undefined4 *)"EndDialog",CommandEndDialogue,unaff_ESI);
  pcVar2 = "CreateEntity";
  RegisterCommand((undefined4 *)"CreateEntity",CommandCreateEntity,pcVar3);
  pcVar3 = "SetScript";
  RegisterCommand((undefined4 *)"SetScript",CommandSetScript,pcVar2);
  pcVar2 = "ToggleStatistics";
  RegisterCommand((undefined4 *)"ToggleStatistics",CommandToggleStatistics,pcVar3);
  pcVar3 = "ToggleFullscreen";
  RegisterCommand((undefined4 *)"ToggleFullscreen",CommandToggleFullscreen,pcVar2);
  pcVar2 = "ToggleLighting";
  RegisterCommand((undefined4 *)"ToggleLighting",CommandToggleLighting,pcVar3);
  pcVar3 = "ToggleShadow";
  RegisterCommand((undefined4 *)"ToggleShadow",CommandToggleShadow,pcVar2);
  RegisterCommand((undefined4 *)"ToggleBilinearFiltering",CommandToggleBilinearFiltering,pcVar3);
  pcVar3 = "ToggleStartupMovies";
  RegisterCommand((undefined4 *)"ToggleStartupMovies",CommandToggleStartupMovies,unaff_ESI);
  pcVar2 = "ToggleCameraFog";
  RegisterCommand((undefined4 *)"ToggleCameraFog",CommandToggleCameraFog,pcVar3);
  pcVar3 = "ToggleWireframe";
  RegisterCommand((undefined4 *)"ToggleWireframe",CommandToggleWireframe,pcVar2);
  pcVar2 = "ToggleTransparency";
  RegisterCommand((undefined4 *)"ToggleTransparency",CommandToggleTransparency,pcVar3);
  pcVar3 = "ToggleOctreeDrawing";
  RegisterCommand((undefined4 *)"ToggleOctreeDrawing",CommandToggleOctreeDrawing,pcVar2);
  pcVar2 = "ToggleMipMapping";
  RegisterCommand((undefined4 *)"ToggleMipMapping",CommandToggleMipMapping,pcVar3);
  pcVar3 = "DebugLight";
  RegisterCommand((undefined4 *)"DebugLight",CommandDebugLight,pcVar2);
  RegisterCommand((undefined4 *)"DebugOctreeLight",CommandDebugOctreeLight,pcVar3);
  pcVar3 = "ToggleHeightFog";
  RegisterCommand((undefined4 *)"ToggleHeightFog",CommandToggleHeightFog,unaff_ESI);
  pcVar2 = "ToggleOctreeNodeDebug";
  RegisterCommand((undefined4 *)"ToggleOctreeNodeDebug",CommandToggleOctreeNodeDebug,pcVar3);
  pcVar3 = "ToggleFogOfWar";
  RegisterCommand((undefined4 *)"ToggleFogOfWar",CommandToggleFogOfWar,pcVar2);
  pcVar2 = "ToggleFOWAutomap";
  RegisterCommand((undefined4 *)"ToggleFOWAutomap",CommandToggleFOWAutomap,pcVar3);
  pcVar3 = "ToggleFOWLOS";
  RegisterCommand((undefined4 *)"ToggleFOWLOS",CommandToggleFOWLOS,pcVar2);
  pcVar2 = "ToggleVisualEffects";
  RegisterCommand((undefined4 *)"ToggleVisualEffects",CommandToggleVisualEffects,pcVar3);
  pcVar3 = "ToggleWater";
  RegisterCommand((undefined4 *)"ToggleWater",CommandToggleWater,pcVar2);
  RegisterCommand((undefined4 *)"ToggleBuilding",CommandToggleBuilding,pcVar3);
  pcVar3 = "CameraReset";
  RegisterCommand((undefined4 *)"CameraReset",CommandCameraReset,unaff_ESI);
  pcVar2 = "CameraSetTarget";
  RegisterCommand((undefined4 *)"CameraSetTarget",CommandCameraSetTarget,pcVar3);
  pcVar3 = "CameraAzimuth";
  RegisterCommand((undefined4 *)"CameraAzimuth",CommandCameraAzimuth,pcVar2);
  pcVar2 = "CameraAzimuthInc";
  RegisterCommand((undefined4 *)"CameraAzimuthInc",CommandCameraAzimuthInc,pcVar3);
  pcVar3 = "CameraAzimuthDec";
  RegisterCommand((undefined4 *)"CameraAzimuthDec",CommandCameraAzimuthDec,pcVar2);
  pcVar2 = "CameraAzimuthSpeed";
  RegisterCommand((undefined4 *)"CameraAzimuthSpeed",CommandCameraAzimuthSpeed,pcVar3);
  pcVar3 = "CameraElevation";
  RegisterCommand((undefined4 *)"CameraElevation",CommandCameraElevation,pcVar2);
  RegisterCommand((undefined4 *)"CameraElevationSpeed",CommandCameraElevationSpeed,pcVar3);
  pcVar3 = "CameraDistance";
  RegisterCommand((undefined4 *)"CameraDistance",CommandCameraDistance,unaff_ESI);
  pcVar2 = "CameraDistanceSpeed";
  RegisterCommand((undefined4 *)"CameraDistanceSpeed",CommandCameraDistanceSpeed,pcVar3);
  pcVar3 = "CameraFOV";
  RegisterCommand((undefined4 *)"CameraFOV",CommandCameraFOV,pcVar2);
  pcVar2 = "CameraTopDown";
  RegisterCommand((undefined4 *)"CameraTopDown",CommandCameraTopDown,pcVar3);
  pcVar3 = "CameraTop";
  RegisterCommand((undefined4 *)"CameraTop",CommandCameraTop,pcVar2);
  pcVar2 = "CameraDown";
  RegisterCommand((undefined4 *)"CameraDown",CommandCameraDown,pcVar3);
  pcVar3 = "CameraScrollSpeed";
  RegisterCommand((undefined4 *)"CameraScrollSpeed",CommandCameraScrollSpeed,pcVar2);
  RegisterCommand((undefined4 *)"CameraScrollLeft_On",CommandCameraScrollLeft_On,pcVar3);
  pcVar3 = "CameraScrollRight_On";
  RegisterCommand((undefined4 *)"CameraScrollRight_On",CommandCameraScrollRight_On,unaff_ESI);
  pcVar2 = "CameraScrollUp_On";
  RegisterCommand((undefined4 *)"CameraScrollUp_On",CommandCameraScrollUp_On,pcVar3);
  pcVar3 = "CameraScrollDown_On";
  RegisterCommand((undefined4 *)"CameraScrollDown_On",CommandCameraScrollDown_On,pcVar2);
  pcVar2 = "CameraScrollLeft_Off";
  RegisterCommand((undefined4 *)"CameraScrollLeft_Off",CommandCameraScrollLeft_Off,pcVar3);
  pcVar3 = "CameraScrollRight_Off";
  RegisterCommand((undefined4 *)0x659c70,CommandCameraScrollRight_Off,pcVar2);
  pcVar2 = "CameraScrollUp_Off";
  RegisterCommand((undefined4 *)"CameraScrollUp_Off",CommandCameraScrollUp_Off,pcVar3);
  pcVar3 = "CameraScrollDown_Off";
  RegisterCommand((undefined4 *)"CameraScrollDown_Off",CommandCameraScrollDown_Off,pcVar2);
  RegisterCommand((undefined4 *)"CameraZoomIn_On",CommandCameraZoomIn_On,pcVar3);
  pcVar3 = "CameraZoomIn_Off";
  RegisterCommand((undefined4 *)"CameraZoomIn_Off",CommandCameraZoomIn_Off,unaff_ESI);
  pcVar2 = "CameraZoomOut_On";
  RegisterCommand((undefined4 *)"CameraZoomOut_On",CommandCameraZoomOut_On,pcVar3);
  pcVar3 = "CameraZoomOut_Off";
  RegisterCommand((undefined4 *)"CameraZoomOut_Off",CommandCameraZoomOut_Off,pcVar2);
  pcVar2 = "CameraRotateLeft";
  RegisterCommand((undefined4 *)"CameraRotateLeft",CommandCameraRotateLeft,pcVar3);
  pcVar3 = "CameraRotateRight";
  RegisterCommand((undefined4 *)"CameraRotateRight",CommandCameraRotateRight,pcVar2);
  pcVar2 = "CameraTiltUp";
  RegisterCommand((undefined4 *)"CameraTiltUp",CommandCameraTiltUp,pcVar3);
  pcVar3 = "CameraTiltDown";
  RegisterCommand((undefined4 *)"CameraTiltDown",CommandCameraTiltDown,pcVar2);
  RegisterCommand((undefined4 *)"CameraMouseRotate_On",CommandCameraMouseRotate_On,pcVar3);
  pcVar3 = "CameraMouseRotate_Off";
  RegisterCommand((undefined4 *)"CameraMouseRotate_Off",CommandCameraMouseRotate_Off,unaff_ESI);
  pcVar2 = "CameraToggleConstraints";
  RegisterCommand((undefined4 *)"CameraToggleConstraints",CommandCameraToggleConstraints,pcVar3);
  pcVar3 = "ScreenCap";
  RegisterCommand((undefined4 *)"ScreenCap",CommandScreenCap,pcVar2);
  pcVar2 = "ShowCursor";
  RegisterCommand((undefined4 *)"ShowCursor",CommandShowCursor,pcVar3);
  pcVar3 = "Warp";
  RegisterCommand((undefined4 *)"Warp",&CommandWarp,pcVar2);
  pcVar2 = "GuiOptimizationLevel";
  RegisterCommand((undefined4 *)"GuiOptimizationLevel",CommandGuiOptimizationLevel,pcVar3);
  pcVar3 = "ConsoleWindow";
  RegisterCommand((undefined4 *)"ConsoleWindow",CommandConsoleWindow,pcVar2);
  RegisterCommand((undefined4 *)"DebugWindow",CommandToggleDebugWindow,pcVar3);
  pcVar3 = "StackWindow";
  RegisterCommand((undefined4 *)"StackWindow",CommandToggleStackWindow,unaff_ESI);
  pcVar2 = "DebugTools";
  RegisterCommand((undefined4 *)"DebugTools",CommandToggleDebugTools,pcVar3);
  pcVar3 = "FontTest";
  RegisterCommand((undefined4 *)"FontTest",CommandFontTest,pcVar2);
  pcVar2 = "GetGlobal";
  RegisterCommand((undefined4 *)"GetGlobal",CommandGetGlobal,pcVar3);
  pcVar3 = "SetGlobal";
  RegisterCommand((undefined4 *)"SetGlobal",CommandSetGlobal,pcVar2);
  pcVar2 = "ToggleScene";
  RegisterCommand((undefined4 *)"ToggleScene",CommandToggleScene,pcVar3);
  pcVar3 = "ToggleEntities";
  RegisterCommand((undefined4 *)"ToggleEntities",CommandToggleEntities,pcVar2);
  RegisterCommand((undefined4 *)"ToggleGUI",CommandToggleGUI,pcVar3);
  pcVar3 = "ToggleScripts";
  RegisterCommand((undefined4 *)"ToggleScripts",CommandToggleScripts,unaff_ESI);
  pcVar2 = "DisableScripts";
  RegisterCommand((undefined4 *)"DisableScripts",CommandDisableScripts,pcVar3);
  pcVar3 = "EnableScripts";
  RegisterCommand((undefined4 *)"EnableScripts",CommandEnableScripts,pcVar2);
  pcVar2 = "OneScriptPass";
  RegisterCommand((undefined4 *)"OneScriptPass",CommandOneScriptPass,pcVar3);
  pcVar3 = "VRAM";
  RegisterCommand((undefined4 *)"VRAM",CommandVRAM,pcVar2);
  pcVar2 = "ListTextures";
  RegisterCommand((undefined4 *)"ListTextures",CommandListTextures,pcVar3);
  pcVar3 = "ToggleSampling";
  RegisterCommand((undefined4 *)"ToggleSampling",CommandToggleSampling,pcVar2);
  RegisterCommand((undefined4 *)"vsync",&CommandVSync,pcVar3);
  pcVar2 = "AdapterInfo";
  RegisterCommand((undefined4 *)"AdapterInfo",CommandAdapterInfo,unaff_ESI);
  pcVar3 = "SetDisplaymode";
  RegisterCommand((undefined4 *)"SetDisplaymode",CommandSetDisplaymode,pcVar2);
  pcVar2 = "MemoryPoolTest";
  RegisterCommand((undefined4 *)"MemoryPoolTest",CommandMemoryPoolTest,pcVar3);
  pcVar3 = "FadeIn";
  RegisterCommand((undefined4 *)"FadeIn",CommandFadeIn,pcVar2);
  pcVar2 = "FadeOut";
  RegisterCommand((undefined4 *)"FadeOut",CommandFadeOut,pcVar3);
  pcVar3 = "MovieTest";
  RegisterCommand((undefined4 *)"MovieTest",CommandMovieTest,pcVar2);
  RegisterCommand((undefined4 *)"EditToken",CommandEditToken,pcVar3);
  ExceptionList = pvStack_c;
  return this;
}



void __thiscall Client::virt_meth_0x58f010(Client *this)

{
  base__vftable_6a1d1c *pbVar1;
  undefined4 uVar2;
  undefined uVar3;
  bool bVar4;
  int *piVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined4 *puVar6;
  EditTokenInterface *pEVar7;
  undefined *this_00;
  VFX_VEGInstance *pVVar8;
  byte unaff_SI;
  byte unaff_retaddr;
  byte in_stack_00000004;
  byte in_stack_00000008;
  byte in_stack_0000000c;
  
  net::client::virt_meth_0x59c340(&this->client);
  piVar5 = (*(this->client).base.vftptr_0x0[0xb].virt_meth_0x59d650_0)((base *)this,unaff_SI);
  *(int **)&(this->client).base.critical_section.field_0x6c = piVar5;
  (**(code **)(*piVar5 + 4))();
  Graphics::meth_0x590a20(*(Graphics **)&(this->client).base.critical_section.field_0x6c);
  uVar3 = (*(this->client).base.vftptr_0x0[0xb].virt_meth_0x6162e5_4)();
  *(int **)&(this->client).base.critical_section.field_0x70 = (int *)CONCAT31(extraout_var,uVar3);
  (**(code **)(*(int *)CONCAT31(extraout_var,uVar3) + 0x14))();
  Graphics::Initialize(*(Graphics **)&(this->client).base.critical_section.field_0x70);
  uVar3 = (*(this->client).base.vftptr_0x0[0xb].virt_meth_0x6162e5_8)();
  *(int **)&(this->client).base.critical_section.field_0x74 = (int *)CONCAT31(extraout_var_00,uVar3)
  ;
  (**(code **)(*(int *)CONCAT31(extraout_var_00,uVar3) + 0x14))();
  piVar5 = (*(this->client).base.vftptr_0x0[0xc].virt_meth_0x59d650_0)((base *)this,unaff_retaddr);
  *(int **)&(this->client).base.critical_section.field_0x78 = piVar5;
  (**(code **)(*piVar5 + 4))();
  uVar3 = (*(this->client).base.vftptr_0x0[0xc].virt_meth_0x6162e5_4)();
  *(int **)&(this->client).base.critical_section.field_0x7c = (int *)CONCAT31(extraout_var_01,uVar3)
  ;
  (**(code **)(*(int *)CONCAT31(extraout_var_01,uVar3) + 4))();
  uVar3 = (*(this->client).base.vftptr_0x0[0xc].virt_meth_0x6162e5_8)();
  *(undefined4 **)&(this->client).base.critical_section.field_0x80 =
       (undefined4 *)CONCAT31(extraout_var_02,uVar3);
  (***(code ***)(undefined4 *)CONCAT31(extraout_var_02,uVar3))();
  piVar5 = (*(this->client).base.vftptr_0x0[0xd].virt_meth_0x59d650_0)
                     ((base *)this,in_stack_00000004);
  *(int **)&(this->client).base.critical_section.field_0x84 = piVar5;
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar5 + 4) + (int)piVar5),1);
  uVar3 = (*(this->client).base.vftptr_0x0[0xd].virt_meth_0x6162e5_4)();
  piVar5 = (int *)CONCAT31(extraout_var_03,uVar3);
  *(int **)&(this->client).base.critical_section.field_0x88 = piVar5;
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar5 + 4) + (int)piVar5),1);
  cls_0x558740::meth_0x558190
            (*(cls_0x558740 **)&(this->client).base.critical_section.field_0x88,0x1a4,(int *)0x6e);
  cls_0x558740::meth_0x434120
            (*(cls_0x558740 **)&(this->client).base.critical_section.field_0x88,0x400,0x300);
  uVar3 = (*(this->client).base.vftptr_0x0[0xd].virt_meth_0x6162e5_4)();
  piVar5 = (int *)CONCAT31(extraout_var_04,uVar3);
  *(int **)&(this->client).base.critical_section.field_0x8c = piVar5;
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar5 + 4) + (int)piVar5),1);
  cls_0x558740::meth_0x558190
            (*(cls_0x558740 **)&(this->client).base.critical_section.field_0x8c,300,(int *)0x1a4);
  cls_0x558740::meth_0x434120
            (*(cls_0x558740 **)&(this->client).base.critical_section.field_0x8c,0x400,0x300);
  uVar3 = (*(this->client).base.vftptr_0x0[0xd].virt_meth_0x6162e5_8)();
  piVar5 = (int *)CONCAT31(extraout_var_05,uVar3);
  *(int **)&(this->client).base.critical_section.field_0x90 = piVar5;
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar5 + 4) + (int)piVar5),1);
  cls_0x5b5c50::meth_0x5b5c50
            (*(cls_0x5b5c50 **)&(this->client).base.critical_section.field_0x90,0x400,0x300);
  uVar3 = (*(this->client).base.vftptr_0x0[0x10].virt_meth_0x6162e5_4)();
  *(int **)&(this->client).base.critical_section.field_0xb0 = (int *)CONCAT31(extraout_var_06,uVar3)
  ;
  (**(code **)(*(int *)CONCAT31(extraout_var_06,uVar3) + 4))();
  FUN_005b52e0(*(int *)&(this->client).base.critical_section.field_0xb0);
  uVar3 = (*(this->client).base.vftptr_0x0[0xf].virt_meth_0x6162e5_4)();
  *(int **)&(this->client).base.critical_section.field_0xa4 = (int *)CONCAT31(extraout_var_07,uVar3)
  ;
  (**(code **)(*(int *)CONCAT31(extraout_var_07,uVar3) + 4))();
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa4 + 8))();
  piVar5 = (*(this->client).base.vftptr_0x0[0xf].virt_meth_0x59d650_0)
                     ((base *)this,in_stack_00000008);
  *(int **)&(this->client).base.critical_section.field_0xa0 = piVar5;
  (**(code **)(*piVar5 + 4))();
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 8))();
  uVar3 = (*(this->client).base.vftptr_0x0[0xe].virt_meth_0x6162e5_8)();
  *(int **)&(this->client).base.critical_section.field_0x9c = (int *)CONCAT31(extraout_var_08,uVar3)
  ;
  (**(code **)(*(int *)CONCAT31(extraout_var_08,uVar3) + 4))();
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0x9c + 8))();
  uVar3 = (*(this->client).base.vftptr_0x0[0xe].virt_meth_0x6162e5_4)();
  *(uint *)&(this->client).base.critical_section.field_0x98 = CONCAT31(extraout_var_09,uVar3);
  uVar3 = (*(this->client).base.vftptr_0x0[0xf].virt_meth_0x6162e5_8)();
  pbVar1 = (this->client).base.vftptr_0x0;
  *(uint *)&(this->client).base.critical_section.field_0xa8 = CONCAT31(extraout_var_10,uVar3);
  puVar6 = (*pbVar1[0x10].virt_meth_0x59d650_0)((base *)this,in_stack_0000000c);
  *(undefined4 **)&(this->client).base.critical_section.field_0xac = puVar6;
  pEVar7 = FUN_0058c2c0();
  *(EditTokenInterface **)&(this->client).base.critical_section.field_0xb4 = pEVar7;
  uVar2 = DAT_006ff0d8;
  this_00 = FUN_004e1de0();
  pVVar8 = FUN_004e2ad0(this_00,(VFX_VEGInstance *)"FX_Selection_Critter_Medium_01.veg",uVar2);
  *(VFX_VEGInstance **)&(this->client).base.critical_section.field_0xf4 = pVVar8;
  (this->client).base.critical_section.field_0x104 = 1;
  (this->client).base.critical_section.field_0x106 = 1;
  bVar4 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (bVar4) {
    (*(this->client).base.vftptr_0x0[4].virt_meth_0x59d650_0)((base *)this,0x44);
  }
  return;
}


#include "../include/Client.h"

void __thiscall Client::virt_meth_0x587770(Client *this,void *param_1)

{
  char cVar1;
  uint uVar2;
  uint unaff_retaddr;
  address__vftable_6647a0 *local_1c;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined local_15;
  word local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639bc8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  if (*(short *)((int)param_1 + 8) == 0) {
    ExceptionList = &local_c;
    *(undefined2 *)((int)param_1 + 8) = 0x53fa;
  }
  local_14 = DAT_0070bd90->mbr_0x8;
  uVar2 = 2;
  local_1c = &address__vftable_6647a0_006647a0;
  local_18 = 0x7f;
  local_17 = 0;
  local_16 = 0;
  local_15 = 1;
  local_4 = 0;
  cVar1 = cls_0x5ac9e0::meth_0x5aca90((cls_0x5ac9e0 *)param_1,(int)&local_1c,'\x01');
  if (cVar1 != '\0') {
    uVar2 = 3;
  }
  Network::meth_0x543930(DAT_0070bd90,uVar2);
  net::client::virt_meth_0x59c410(&this->client,(int)param_1);
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Client::virt_meth_0x587b00(Client *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  
  uVar1 = (*(this->client).base.vftptr_0x0[10].virt_meth_0x6162e5_8)();
  *(uint *)&(this->client).base.critical_section.field_0x50 = CONCAT31(extraout_var,uVar1);
  return;
}



Audio * __thiscall Client::virt_meth_0x587b10(Client *this)

{
  Audio *pAVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pAVar1 = (Audio *)operator_new(0x4c);
  local_4 = 0;
  if (pAVar1 != (Audio *)0x0) {
    pAVar1 = Audio::Audio(pAVar1);
    ExceptionList = local_c;
    return pAVar1;
  }
  ExceptionList = local_c;
  return (Audio *)0;
}



undefined4 * __thiscall Client::virt_meth_0x587b70(Client *this)

{
  Graphics *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar1 = (Graphics *)operator_new(0x68);
  local_4 = 0;
  if (pGVar1 != (Graphics *)0x0) {
    pGVar1 = Graphics::Graphics(pGVar1);
    ExceptionList = local_c;
    return &pGVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



Input_Win32 * __thiscall Client::virt_meth_0x587bd0(Client *this)

{
  Input_Win32 *pIVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pIVar1 = (Input_Win32 *)operator_new(0x3818);
  local_4 = 0;
  if (pIVar1 != (Input_Win32 *)0x0) {
    pIVar1 = Input_Win32::Input_Win32(pIVar1,(uint)pIVar1);
    ExceptionList = local_c;
    return pIVar1;
  }
  ExceptionList = local_c;
  return (Input_Win32 *)0;
}



Processor * __thiscall Client::virt_meth_0x587c30(Client *this)

{
  Processor *pPVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pPVar1 = (Processor *)operator_new(0x14);
  local_4 = 0;
  if (pPVar1 != (Processor *)0x0) {
    pPVar1 = Processor::Processor(pPVar1);
    ExceptionList = local_c;
    return pPVar1;
  }
  ExceptionList = local_c;
  return (Processor *)0;
}



undefined4 * __thiscall Client::virt_meth_0x587c90(Client *this)

{
  HotKeys *pHVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pHVar1 = (HotKeys *)operator_new(0x18);
  local_4 = 0;
  if (pHVar1 != (HotKeys *)0x0) {
    pHVar1 = HotKeys::HotKeys(pHVar1,*(undefined4 *)&(this->client).base.critical_section.field_0x74
                              ,*(undefined4 *)&(this->client).base.critical_section.field_0x78);
    ExceptionList = local_c;
    return &pHVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



undefined4 * __thiscall Client::virt_meth_0x587d00(Client *this)

{
  CameraControl *pCVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CameraControl *)operator_new(0x120);
  local_4 = 0;
  if (pCVar1 != (CameraControl *)0x0) {
    pCVar1 = CameraControl::CameraControl(pCVar1,this);
    ExceptionList = local_c;
    return &pCVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



undefined4 * __thiscall Client::virt_meth_0x587d60(Client *this)

{
  CursorManager *pCVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CursorManager *)operator_new(0x30);
  local_4 = 0;
  if (pCVar1 != (CursorManager *)0x0) {
    pCVar1 = CursorManager::CursorManager(pCVar1);
    ExceptionList = local_c;
    return &pCVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



FadeManager * __thiscall Client::virt_meth_0x587dc0(Client *this)

{
  FadeManager *pFVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pFVar1 = (FadeManager *)operator_new(0x18);
  local_4 = 0;
  if (pFVar1 != (FadeManager *)0x0) {
    pFVar1 = FadeManager::FadeManager(pFVar1);
    ExceptionList = local_c;
    return pFVar1;
  }
  ExceptionList = local_c;
  return (FadeManager *)0;
}



int * __thiscall Client::virt_meth_0x587e20(Client *this)

{
  Video *pVVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pVVar1 = (Video *)operator_new(0x2c);
  local_4 = 0;
  if (pVVar1 != (Video *)0x0) {
    pVVar1 = Video::Video(pVVar1);
    ExceptionList = local_c;
    return (int *)pVVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}



Interfaces * __thiscall Client::virt_meth_0x587e80(Client *this)

{
  Interfaces *pIVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pIVar1 = (Interfaces *)operator_new(4);
  local_4 = 0;
  if (pIVar1 != (Interfaces *)0x0) {
    pIVar1 = Interfaces::Interfaces(pIVar1);
    ExceptionList = local_c;
    return pIVar1;
  }
  ExceptionList = local_c;
  return (Interfaces *)0;
}



void __thiscall Client::virt_meth_0x587ee0(Client *this)

{
  code **ppcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  int iStack_2c;
  undefined local_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  undefined2 uStack_8;
  undefined uStack_6;
  
  net::client::virt_meth_0x59d2d0(&this->client);
  cVar2 = (**(code **)(**(int **)&(this->client).base.critical_section.field_0x74 + 8))(local_28);
  while (cVar2 != '\0') {
    if (iStack_2c == 2) {
      *(undefined4 *)&(this->client).base.critical_section.field_0xc0 = uStack_20;
      *(undefined4 *)&(this->client).base.critical_section.field_0xc4 = uStack_1c;
      *(undefined4 *)&(this->client).base.critical_section.field_0xc8 = uStack_10;
      *(undefined2 *)&(this->client).base.critical_section.field_0xcc = uStack_8;
      (this->client).base.critical_section.field_0xbc = 1;
      (this->client).base.critical_section.field_0xce = uStack_6;
    }
    cVar2 = (**(code **)(**(int **)&(this->client).base.critical_section.field_0x70 + 0x10))
                      (&iStack_2c);
    if (cVar2 == '\0') {
      if (unaff_ESI == 2) {
        (this->client).base.critical_section.field_0xbc = 0;
      }
      cVar2 = (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 0x1c))
                        (&stack0xffffffd0);
      if (((cVar2 == '\0') &&
          (cVar2 = (*(this->client).base.vftptr_0x0[0x10].virt_meth_0x6162e5_8)(&stack0xffffffd0),
          cVar2 == '\0')) && ((this->client).base.critical_section.field_0x10c != '\0')) {
        FUN_00599720(*(void **)&(this->client).base.critical_section.field_0x7c,
                     (int *)&stack0xffffffd0);
      }
    }
    cVar2 = (**(code **)(**(int **)&(this->client).base.critical_section.field_0x74 + 8))
                      (&stack0xffffffd0);
  }
  bVar3 = cls_0x4b28a0::meth_0x4b2c10((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c);
  if (!bVar3) {
    (*(this->client).base.vftptr_0x0[0x11].virt_meth_0x6162e5_4)();
  }
  cls_0x580ba0::meth_0x580ba0(*(cls_0x580ba0 **)&(this->client).base.critical_section.field_0x78);
  CameraControl::meth_0x5869c0(*(CameraControl **)&(this->client).base.critical_section.field_0x80);
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 0x10))();
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa4 + 0x10))();
  cls_0x5b4f50::meth_0x5b5ae0(*(cls_0x5b4f50 **)&(this->client).base.critical_section.field_0xb0);
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0x70 + 4))(&stack0xffffffd3);
  (*(this->client).base.vftptr_0x0[0x11].virt_meth_0x6162e5_8)(0);
  if (*(int *)&(this->client).base.critical_section.field_0x54 == 3) {
    if (DAT_0070bd98 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)(DAT_0070bd98 + 0xc);
    }
    ppcVar1 = (code **)*puVar6;
    uVar4 = FUN_0056af50();
    (**ppcVar1)(uVar4);
    if (DAT_0070bd98 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(DAT_0070bd98 + 0xc);
    }
    (**(code **)(*piVar5 + 0x14))();
    if (((this->client).base.critical_section.field_0x104 == '\0') &&
       ((this->client).base.critical_section.field_0x105 == '\0')) {
      if (DAT_0070bd98 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(DAT_0070bd98 + 0xc);
      }
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0x70 + 8))();
  FUN_00590860();
  return;
}



void __thiscall Client::meth_0x5881a0(Client *this)

{
  uint uVar1;
  int iVar2;
  Entity *this_00;
  GameActionEquip *this_01;
  
  if (*(int *)&(this->client).base.critical_section.field_0xd8 != 0) {
    iVar2 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
    if (iVar2 != 0) {
      this_00 = (Entity *)GameActionEquip::meth_0x54be10(this_01);
      if ((this_00 != (Entity *)0x0) &&
         (uVar1 = *(uint *)&(this->client).base.critical_section.field_0xf8, uVar1 != 0)) {
        Entity::meth_0x54f150(this_00,uVar1,(int **)0x1);
        *(undefined4 *)&(this->client).base.critical_section.field_0xf8 = 0;
      }
    }
  }
  *(undefined4 *)&(this->client).base.critical_section.field_0xd8 = 0;
  return;
}



void __thiscall Client::meth_0x588200(Client *this,int param_1)

{
  if ((param_1 != 0) && (param_1 == *(int *)&(this->client).base.critical_section.field_0xd8)) {
    meth_0x5881a0(this);
  }
  return;
}



void __thiscall Client::meth_0x588230(Client *this,int param_1)

{
  undefined local_8 [8];
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0xc)) {
    World::~World((World *)local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_8,&DAT_006ddf94);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  FUN_00593090(*(int *)&(this->client).base.critical_section.field_0x98);
  return;
}



void Client::CommandToggleDebugWindow(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  if (piVar1 == (int *)0x0) {
    FUN_00497120((byte *)0x69c488);
    return;
  }
  cVar2 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
  if (cVar2 != '\0') {
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),0);
    GameActionOperateContainer::meth_0x4952a0
              ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
    return;
  }
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
  return;
}



void Client::CommandToggleStackWindow(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x90);
  if (piVar1 == (int *)0x0) {
    FUN_00497120((byte *)
                 "Client::CommandToggleStackWindow - No Stack Window was created in this client.\n")
    ;
    return;
  }
  cVar2 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
  if (cVar2 != '\0') {
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),0);
    GameActionOperateContainer::meth_0x4952a0
              ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
    return;
  }
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
  return;
}



void Client::CommandToggleDebugTools(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x94);
  if (piVar1 == (int *)0x0) {
    FUN_00497120((byte *)
                 "Client::CommandToggleDebugTools - No Debug Tools window was created in this client.\n"
                );
    return;
  }
  cVar2 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
  if (cVar2 != '\0') {
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),0);
    GameActionOperateContainer::meth_0x4952a0
              ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
    return;
  }
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
  return;
}



void __thiscall Client::virt_meth_0x588d90(Client *this)

{
  undefined4 *puVar1;
  int iVar2;
  CameraControl *this_00;
  int *piVar3;
  
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0xf4;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)&(this->client).base.critical_section.field_0xf4 = 0;
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0xb4;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  iVar2 = *(int *)&(this->client).base.critical_section.field_0xac;
  if (iVar2 != 0) {
    (***(code ***)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2))(1);
  }
  iVar2 = *(int *)&(this->client).base.critical_section.field_0xa8;
  if (iVar2 != 0) {
    (***(code ***)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2))(1);
  }
  iVar2 = *(int *)&(this->client).base.critical_section.field_0x98;
  if (iVar2 != 0) {
    (***(code ***)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2))(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x9c;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0xa0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0xa4;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0xb0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  this_00 = *(CameraControl **)&(this->client).base.critical_section.field_0x80;
  if (this_00 != (CameraControl *)0x0) {
    CameraControl::~CameraControl(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  piVar3 = *(int **)&(this->client).base.critical_section.field_0x84;
  if (piVar3 != (int *)0x0) {
    (***(code ***)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
  }
  piVar3 = *(int **)&(this->client).base.critical_section.field_0x88;
  if (piVar3 != (int *)0x0) {
    (***(code ***)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
  }
  piVar3 = *(int **)&(this->client).base.critical_section.field_0x90;
  if (piVar3 != (int *)0x0) {
    (***(code ***)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
  }
  piVar3 = *(int **)&(this->client).base.critical_section.field_0x94;
  if (piVar3 != (int *)0x0) {
    (***(code ***)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x7c;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x78;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x74;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x70;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&(this->client).base.critical_section.field_0x6c;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  net::client::virt_meth_0x59c360(&this->client);
  return;
}



undefined4 * __thiscall Client::virt_meth_0x588f50(Client *this)

{
  connection *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (connection *)operator_new(0x4168);
  local_4 = 0;
  if (this_00 != (connection *)0x0) {
    net::connection::connection(this_00);
    *(undefined *)&this_00[1].vftptr_0x0 = 0;
    this_00->vftptr_0x0 = (connection__vftable_6a777c *)&Server__vftable_69c480_0069c480;
    ExceptionList = local_c;
    return &this_00->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



void __thiscall Client::meth_0x589130(Client *this,int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined *puVar9;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((this->client).base.critical_section.field_0x10c != '\0') &&
     ((this->client).base.critical_section.field_0xd0 == '\0')) {
    local_11c = 0.0;
    local_118 = 0.0;
    local_114 = 0.0;
    CameraControl::meth_0x585e20
              (*(CameraControl **)&(this->client).base.critical_section.field_0x80,&local_11c);
    local_d4 = 0;
    local_cc = local_11c - (float)param_1;
    local_d8 = 0;
    local_dc = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_f4 = 0;
    local_c4 = (float)param_2 + local_114;
    local_fc = 0;
    local_100 = 0;
    local_104 = 0;
    local_108 = 0;
    local_d0 = 0x3f800000;
    local_e4 = 0x3f800000;
    local_f8 = 0x3f800000;
    local_10c = 0x3f800000;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    local_94 = 0;
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_bc = 0;
    local_84 = 0x3f800000;
    local_98 = 0x3f800000;
    local_ac = 0x3f800000;
    local_c0 = 0x3f800000;
    local_8 = 0;
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_4 = 0x3f800000;
    local_18 = 0x3f800000;
    local_2c = 0x3f800000;
    local_40 = 0x3f800000;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_68 = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_7c = 0;
    local_44 = 0x3f800000;
    local_58 = 0x3f800000;
    local_6c = 0x3f800000;
    local_80 = 0x3f800000;
    thunk_FUN_0047227f(&local_10c,local_cc,local_118,local_c4);
    thunk_FUN_0047227f(&local_c0,-local_11c,-local_118,-local_114);
    thunk_FUN_0047227f(&local_40,local_11c,local_118,local_114);
    thunk_FUN_004723ab(&local_80,
                       *(float *)(*(int *)&(this->client).base.critical_section.field_0x80 + 0xa4) *
                       57.29578 * 0.01745329);
    thunk_FUN_00471943();
    thunk_FUN_00471943();
    puVar9 = &stack0xfffffedc;
    thunk_FUN_00471943();
    uVar6 = local_f8;
    uVar5 = local_fc;
    uVar4 = local_100;
    iVar7 = (**(code **)(*DAT_00707ce4 + 0xa8))(puVar9);
    iVar1 = *(int *)&(this->client).base.critical_section.field_0x110;
    fVar2 = *(float *)(iVar7 + 0x110) * 57.29578 - 6.0;
    fVar3 = (float)iVar1;
    if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
      uVar8 = FUN_00616e24();
      *(int *)&(this->client).base.critical_section.field_0x110 = (int)uVar8;
      CameraControl::meth_0x586760
                (*(CameraControl **)&(this->client).base.critical_section.field_0x80,uVar4,uVar5,
                 uVar6);
      return;
    }
    *(int *)&(this->client).base.critical_section.field_0x110 = iVar1 + -1;
  }
  return;
}



void __thiscall Client::meth_0x5897d0(Client *this)

{
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639c08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->client).base.vftptr_0x0 = (base__vftable_6a1d1c *)&Client__vftable_69c814_0069c814;
  local_4 = 0;
  virt_meth_0x588d90(this);
  local_4 = 0xffffffff;
  net::client::meth_0x59c790(&this->client);
  ExceptionList = pvStack_c;
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall Client::meth_0x589d90(Client *this,undefined4 param_1)

{
  int iVar1;
  uint unaff_ESI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  int in_stack_ffffdfbc;
  void *local_2034;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar1 = DAT_007062c0;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  GameClient::meth_0x59c4f0
            ((GameClient *)this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



int __thiscall Client::virt_meth_0x58a4a0(Client *this,int *param_1)

{
  char cVar1;
  CameraControl *pCVar2;
  float fVar3;
  undefined4 in_EAX;
  uint3 uVar6;
  undefined4 uVar4;
  int iVar5;
  float10 *unaff_EDI;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  
  uVar6 = (uint3)((uint)in_EAX >> 8);
  if ((this->client).base.critical_section.field_0x10c == '\0') {
    return (uint)uVar6 << 8;
  }
  if (*param_1 == 2) {
    iVar5 = param_1[2];
    if (iVar5 == 0) {
      uVar4 = 0;
      if ((this->client).base.critical_section.field_0xce == '\x01') {
        uVar4 = meth_0x589130(this,param_1[5],param_1[6]);
      }
      cVar1 = (this->client).base.critical_section.field_0xd0;
      iVar5 = CONCAT31((int3)((uint)uVar4 >> 8),cVar1);
      if (cVar1 != '\0') {
        iVar5 = param_1[5];
        if (iVar5 != 0) {
          pCVar2 = *(CameraControl **)&(this->client).base.critical_section.field_0x80;
          fVar3 = (float)pCVar2->mbr_0xc8 * 0.0004 * 33.0;
          if (iVar5 < 1) {
            if (iVar5 < 0) {
              CameraControl::meth_0x585e60
                        (pCVar2,*(float *)&(pCVar2->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x9c *
                                57.29578 - fVar3);
            }
          }
          else {
            CameraControl::meth_0x585e60
                      (pCVar2,*(float *)&(pCVar2->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x9c *
                              57.29578 + fVar3);
          }
        }
        iVar5 = param_1[6];
        if (iVar5 != 0) {
          pCVar2 = *(CameraControl **)&(this->client).base.critical_section.field_0x80;
          fVar3 = (float)pCVar2->mbr_0xd8 * 0.0004 * 33.0;
          if (0 < iVar5) {
            uVar4 = CameraControl::meth_0x585fd0
                              (pCVar2,(float)(pCVar2->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa0 *
                                      57.29578 - fVar3);
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
          if (iVar5 < 0) {
            uVar4 = CameraControl::meth_0x585fd0
                              (pCVar2,(float)(pCVar2->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa0 *
                                      57.29578 + fVar3);
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
        }
        return CONCAT31((int3)((uint)iVar5 >> 8),1);
      }
    }
    uVar6 = (uint3)((uint)iVar5 >> 8);
    if (((this->client).base.critical_section.field_0xbc == '\0') && (param_1[2] == 4)) {
      fVar3 = *(float *)(*(int *)&(this->client).base.critical_section.field_0x80 + 0x100) * 0.0025
              * 33.0;
      if (param_1[7] < 0) {
        FUN_00586550(unaff_EDI);
        fVar7 = extraout_ST0 + (float10)fVar3;
      }
      else {
        FUN_00586550(unaff_EDI);
        fVar7 = extraout_ST0_00 - (float10)fVar3;
      }
      uVar6 = 0;
      CameraControl::meth_0x5867c0
                (*(CameraControl **)&(this->client).base.critical_section.field_0x80,(float)fVar7);
    }
  }
  return (uint)uVar6 << 8;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall Client::virt_meth_0x58a620(Client *this,void *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int unaff_EBP;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  uint unaff_retaddr;
  packet apStack_2048 [137];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  GameActionEquip::meth_0x45e500
            ((GameActionEquip *)param_1,
             (undefined4 *)&(this->client).base.critical_section.field_0xb8);
  FUN_00497120((byte *)"Client: connected to server.  My id is %u\n");
  iVar1 = *(int *)&(this->client).base.critical_section.field_0x70;
  (this->client).base.critical_section.field_0x104 = 0;
  (this->client).base.critical_section.field_0x106 = 0;
  if (*(char *)(iVar1 + 0x56) != '\0') {
    cls_0x5b4f50::meth_0x5b5640
              (*(cls_0x5b4f50 **)&(this->client).base.critical_section.field_0xb0,
               "movies\\IPlogo.mve",0xc0,0xe0,0x280,0x140,'\x01','\x01',0);
    cls_0x5b4f50::meth_0x5b4f50
              (*(cls_0x5b4f50 **)&(this->client).base.critical_section.field_0xb0,1000);
    cls_0x5b4f50::meth_0x5b4f60
              (*(cls_0x5b4f50 **)&(this->client).base.critical_section.field_0xb0,1);
    cls_0x5b4f50::meth_0x5b5b10
              (*(cls_0x5b4f50 **)&(this->client).base.critical_section.field_0xb0,
               (undefined4 *)"movies\\BISlogo.mve",0xc0,0xe0,0x280,0x140,1,1,0);
  }
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    if (DAT_0070bd98 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(DAT_0070bd98 + 0xc);
    }
    (**(code **)(*piVar3 + 0x10))(param_1);
    net::packet::packet(apStack_2048);
    uStack_4 = 0;
    apStack_2048[0].mbr_0x30 = 0x43;
    GameClient::meth_0x59c4f0((GameClient *)this,apStack_2048,1,unaff_EDI,unaff_ESI,unaff_EBP);
    apStack_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
    apStack_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
    if (apStack_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)apStack_2048[0].buffer.mbr_0x14);
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



int * __thiscall Client::virt_meth_0x58a960(Client *this,byte param_1)

{
  meth_0x5897d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall
Client::meth_0x58aad0
          (Client *this,undefined4 param_1,int param_2,void *param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  uint unaff_retaddr;
  uint local_2c;
  uint local_28;
  void *pvStack_24;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639c68;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = local_28 & 0xffffff00;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  SS::EngineStringSystem::virt_meth_0x56c260
            ((EngineStringSystem *)&DAT_0070c2d8,param_2,(_String_base *)&local_2c);
  (**(code **)**(undefined4 **)&(this->client).base.critical_section.field_0xa8)
            (param_1,&local_2c,param_3,param_4,param_5,param_6);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  ExceptionList = pvStack_24;
  FUN_00616e15(local_28 ^ local_18);
  return;
}



void __thiscall Client::HandleMousePicking(Client *this,char param_1)

{
  ModelInstance *this_00;
  cls_0x4a4cd0 *this_01;
  int iVar1;
  undefined4 uVar2;
  Action__vftable_647888 *pAVar3;
  DynamicObject *pDVar4;
  uint uVar5;
  Entity *this_02;
  undefined4 *puVar6;
  dword dVar7;
  int *piVar8;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  GameActionEquip *extraout_ECX_01;
  GameActionEquip *pGVar9;
  GameActionEquip *this_03;
  GameActionEquip *this_04;
  GameActionEquip *extraout_ECX_02;
  GameActionEquip *extraout_ECX_03;
  GameActionEquip *extraout_ECX_04;
  GameActionEquip **ppGVar10;
  Client *unaff_ESI;
  GameActionEquip *unaff_EDI;
  undefined4 *puVar11;
  undefined *puVar12;
  Client **ppCVar13;
  undefined *puVar14;
  GameActionEquip **ppGVar15;
  Client **ppCVar16;
  undefined *puVar17;
  GameActionEquip *pGVar18;
  GameActionEquip *pGVar19;
  GameActionEquip *pGVar20;
  GameActionEquip *pGVar21;
  DynamicObject *local_3cc;
  GameActionEquip *pGStack_3c8;
  GameActionEquip *pGStack_3c4;
  int iStack_3c0;
  Client *pCStack_3bc;
  dword dStack_3b8;
  dword dStack_3b4;
  dword dStack_3b0;
  dword dStack_3ac;
  Action__vftable_647888 *local_3a8;
  Client *pCStack_3a4;
  GameActionEquip *pGStack_3a0;
  DynamicObject *local_39c;
  dword local_398;
  dword local_394;
  Action__vftable_647888 *local_390;
  undefined *local_38c;
  Action__vftable_647888 *local_388;
  float fStack_380;
  dword dStack_37c;
  dword dStack_378;
  float fStack_374;
  dword dStack_370;
  dword dStack_36c;
  GameActionEquip *pGStack_368;
  GameActionEquip *pGStack_364;
  GameActionEquip *pGStack_360;
  dword dStack_35c;
  dword dStack_358;
  Action__vftable_647888 *pAStack_354;
  float fStack_350;
  dword dStack_34c;
  dword dStack_348;
  float fStack_338;
  dword dStack_334;
  dword dStack_330;
  Client *pCStack_32c;
  GameActionEquip *pGStack_328;
  DynamicObject *pDStack_324;
  undefined auStack_308 [4];
  void *pvStack_304;
  cls_0x4f4c00 cStack_2f8;
  dword dStack_2d8;
  undefined auStack_2cc [12];
  undefined auStack_2c0 [76];
  undefined4 auStack_274 [16];
  undefined4 auStack_234 [16];
  GameActionEquip *apGStack_1f4 [5];
  dword dStack_1e0;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639c8b;
  local_c = ExceptionList;
  if (((this->client).base.critical_section.field_0x10c != '\0') &&
     ((ExceptionList = &local_c, param_1 != '\0' ||
      (ExceptionList = &local_c, iVar1 = FUN_0056af50(),
      99 < (uint)(iVar1 - *(int *)&(this->client).base.critical_section.field_0xd4))))) {
    uVar2 = FUN_0056af50();
    *(undefined4 *)&(this->client).base.critical_section.field_0xd4 = uVar2;
    if (((this->client).base.critical_section.field_0xbc != '\x01') &&
       (pAVar3 = (Action__vftable_647888 *)
                 cls_0x581190::meth_0x581190
                           (*(cls_0x581190 **)&(this->client).base.critical_section.field_0x70),
       pAVar3 != (Action__vftable_647888 *)0x0)) {
      pGVar18 = *(GameActionEquip **)&(this->client).base.critical_section.field_0xc4;
      pGVar19 = (GameActionEquip *)&local_3a8;
      local_39c = (DynamicObject *)0x0;
      local_398 = 0;
      local_394 = 0;
      local_390 = (Action__vftable_647888 *)0x7f7fffff;
      local_38c = &LAB_004adc20;
      local_388 = pAVar3;
      (**(code **)(pAVar3->virt_deldtor_0x4010e0_0 + 0x1c))();
      local_3cc = (DynamicObject *)0x0;
      pGVar20 = (GameActionEquip *)0x7f7fffff;
      iStack_3c0 = 0;
      do {
        (**(code **)(pAVar3->virt_deldtor_0x4010e0_0 + 0x20))(&dStack_3b0,0x14);
        this_03 = extraout_ECX;
        if (dStack_1e0 != 0) {
          ppGVar10 = apGStack_1f4;
          do {
            pDVar4 = (DynamicObject *)
                     FUN_006165e0((cls_0x616328 *)ppGVar10[4],0,&DynamicObject::RTTI_Type_Descriptor
                                  ,&Entity::RTTI_Type_Descriptor,0);
            this_03 = extraout_ECX_00;
            if ((((pDVar4 != (DynamicObject *)0x0) &&
                 (this_03 = extraout_ECX_00, pDVar4->field_0x3a0 != '\0')) &&
                (this_03 = extraout_ECX_00, pDVar4->field_0x388 != '\0')) &&
               (this_00 = *(ModelInstance **)&pDVar4->field_0x160, this_03 = extraout_ECX_00,
               this_00 != (ModelInstance *)0x0)) {
              this_01 = (cls_0x4a4cd0 *)this_00->mbr_0xc;
              if (this_01 == (cls_0x4a4cd0 *)0x0) {
                if (*(cls_0x49cb10 **)this_00->mbr_0x10 == (cls_0x49cb10 *)0x0) {
                  ModelInstance::meth_0x5648d0(this_00,auStack_308,0,0);
                  local_c = (void *)0x0;
                  FUN_00497120((byte *)
                               "Client::HandleMousePicking - No BaseModel for collision checking: %s!\n"
                              );
                  local_c = (void *)0xffffffff;
                  if (0xf < cStack_2f8.mbr_0x8) {
                    /* WARNING: Subroutine does not return */
                    _free(pvStack_304);
                  }
                  cStack_2f8.mbr_0x8 = 0xf;
                  cStack_2f8.mbr_0x4 = 0;
                  pvStack_304 = (void *)((uint)pvStack_304 & 0xffffff00);
                  this_03 = extraout_ECX_04;
                }
                else {
                  cls_0x49cb10::meth_0x49cb10
                            (*(cls_0x49cb10 **)this_00->mbr_0x10,&fStack_374,&fStack_338);
                  fStack_380 = fStack_374;
                  dStack_37c = dStack_370;
                  dStack_378 = dStack_36c;
                  fStack_350 = fStack_338;
                  dStack_34c = dStack_334;
                  dStack_348 = dStack_330;
                  puVar6 = *(undefined4 **)this_00->mbr_0x10;
                  puVar11 = auStack_234;
                  for (iVar1 = 0x10; puVar6 = puVar6 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
                    *puVar11 = *puVar6;
                    puVar11 = puVar11 + 1;
                  }
                  thunk_FUN_00471e4f();
                  pCStack_32c = pCStack_3bc;
                  pGStack_328 = (GameActionEquip *)dStack_3b8;
                  pDStack_324 = (DynamicObject *)dStack_3b4;
                  local_398 = dStack_3b0;
                  puVar17 = auStack_2c0;
                  local_394 = dStack_3ac;
                  ppCVar16 = &pCStack_32c;
                  local_390 = local_3a8;
                  ppGVar15 = &pGStack_3c8;
                  thunk_FUN_0047134a();
                  puVar14 = auStack_2cc;
                  ppCVar13 = &pCStack_3a4;
                  pDStack_324 = local_3cc;
                  puVar12 = &stack0xfffffc2c;
                  pCStack_32c = unaff_ESI;
                  pGStack_328 = pGVar20;
                  thunk_FUN_0047135d();
                  pGStack_368 = pGVar18;
                  pGStack_364 = pGVar19;
                  pGStack_360 = unaff_EDI;
                  cls_0x4f4c00::cls_0x4f4c00(&cStack_2f8,&fStack_338,&pGStack_368);
                  iVar1 = (*(code *)cStack_2f8.mbr_0x1c)
                                    (&pCStack_3a4,&fStack_374,&stack0xfffffc14,&local_38c,puVar12,
                                     ppCVar13,puVar14,ppGVar15,ppCVar16,puVar17);
                  this_03 = extraout_ECX_03;
                  if ((iVar1 != 0) &&
                     (pGVar9 = pGStack_3c8, pGVar21 = pGStack_3c8,
                     (float)pGStack_3c8 < (float)pGVar20 !=
                     (NAN((float)pGStack_3c8) || NAN((float)pGVar20)))) goto LAB_0058ad82;
                }
              }
              else if ((*(int *)(this_01->mbr_0xc + 0x10) == 0) ||
                      (*(int *)(this_01->mbr_0xc + 0x14) == 0)) {
                cls_0x4a4cd0::meth_0x4a4cd0(this_01);
                FUN_00497120((byte *)"Client::HandleMousePicking - No Collision Data for %s!\n");
                this_03 = extraout_ECX_02;
                if ((float)*ppGVar10 < (float)pGVar20 !=
                    (NAN((float)*ppGVar10) || NAN((float)pGVar20))) {
                  pGStack_368 = ppGVar10[1];
                  pGStack_364 = ppGVar10[2];
                  pGStack_360 = ppGVar10[3];
                  this_03 = pGStack_364;
                  pGVar20 = *ppGVar10;
                  local_3cc = pDVar4;
                }
              }
              else {
                dStack_35c = dStack_3b0;
                pAStack_354 = local_3a8;
                dStack_358 = dStack_3ac;
                pGStack_328 = pGStack_3a0;
                pCStack_32c = pCStack_3a4;
                pDStack_324 = local_39c;
                pGStack_3c4 = (GameActionEquip *)0x0;
                puVar6 = *(undefined4 **)this_00->mbr_0x10;
                puVar11 = auStack_274;
                for (iVar1 = 0x10; puVar6 = puVar6 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
                  *puVar11 = *puVar6;
                  puVar11 = puVar11 + 1;
                }
                uVar5 = Gfx_AnimMeshInstance::RayIntersection
                                  ((Gfx_AnimMeshInstance *)this_01,auStack_274);
                this_03 = extraout_ECX_01;
                if (((char)uVar5 != '\0') &&
                   (pGVar9 = extraout_ECX_01, this_03 = extraout_ECX_01, pGVar21 = pGStack_3c4,
                   (float)pGStack_3c4 < (float)pGVar20 !=
                   (NAN((float)pGStack_3c4) || NAN((float)pGVar20)))) {
LAB_0058ad82:
                  this_03 = pGVar9;
                  pGVar20 = pGVar21;
                  local_3cc = pDVar4;
                }
              }
            }
            ppGVar15 = ppGVar10 + 0xb;
            ppGVar10 = ppGVar10 + 6;
            this = unaff_ESI;
            pAVar3 = local_390;
          } while (*ppGVar15 != (GameActionEquip *)0x0);
        }
      } while (iStack_3c0 != 0);
      if (*(int *)&(this->client).base.critical_section.field_0xd8 != 0) {
        pDVar4 = (DynamicObject *)GameActionEquip::meth_0x54be10(this_03);
        if (pDVar4 == (DynamicObject *)0x0) {
          *(undefined4 *)&(unaff_ESI->client).base.critical_section.field_0xd8 = 0;
        }
        else if (pDVar4 == local_3cc) {
          piVar8 = (*pDVar4->vftptr_0x0[0x22].virt_meth_0x568400_0)(pDVar4,(byte)pGVar19);
          if (((char)piVar8 != '\0') && (*(uint *)&pGVar20->field_0xfc != 0)) {
            Entity::meth_0x54f150((Entity *)pDVar4,*(uint *)&pGVar20->field_0xfc,(int **)0x1);
            *(undefined4 *)&pGVar20->field_0xfc = 0;
            pGVar20->mbr_0xdc = 0;
          }
        }
        else {
          this_02 = (Entity *)GameActionEquip::meth_0x54be10(this_04);
          if ((this_02 != (Entity *)0x0) &&
             (uVar5 = *(uint *)&(unaff_ESI->client).base.critical_section.field_0xf8, uVar5 != 0)) {
            Entity::meth_0x54f150(this_02,uVar5,(int **)0x1);
            *(undefined4 *)&(unaff_ESI->client).base.critical_section.field_0xf8 = 0;
          }
        }
      }
      if ((pGStack_3c8 == (GameActionEquip *)0x0) ||
         (puVar6 = (*(pGStack_3c8->ActionEquip).Action.vftptr_0x0[4].virt_meth_0x6162e5_24)
                             ((critical_section *)pGStack_3c8,(byte)pGVar19), (char)puVar6 != '\0'))
      {
        if (DAT_0070bd98 == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)(DAT_0070bd98 + 0xc);
        }
        piVar8 = (int *)(**(code **)(*piVar8 + 0xc))();
        if (piVar8 != (int *)0x0) {
          iVar1 = (**(code **)(*piVar8 + 0x58))();
          if (iVar1 == 0) {
            *(undefined *)&(local_3cc->Gfx_LineSystem).mbr_0xa8 = 0;
          }
          else {
            (local_3cc->Gfx_LineSystem).mbr_0xac = cStack_2f8.mbr_0x18;
            *(undefined *)&(local_3cc->Gfx_LineSystem).mbr_0xa8 = 1;
            (local_3cc->Gfx_LineSystem).mbr_0xb0 = cStack_2f8.mbr_0x1c;
            (local_3cc->Gfx_LineSystem).mbr_0xb4 = dStack_2d8;
          }
        }
        (local_3cc->Gfx_LineSystem).mbr_0x9c = 0;
      }
      else {
        *(undefined *)&(local_3cc->Gfx_LineSystem).mbr_0xa8 = 0;
        dVar7 = net::critical_section::meth_0x54ef90
                          ((critical_section *)pGStack_3c8,
                           (int *)(local_3cc->Gfx_LineSystem).mbr_0xb8,0,'\0',(int *)0x0,1);
        (local_3cc->Gfx_LineSystem).mbr_0xbc = dVar7;
        (local_3cc->Gfx_LineSystem).mbr_0x9c = *(dword *)&pGStack_3c8->field_0x1dc;
      }
    }
  }
  ExceptionList = local_c;
  return;
}



int * __thiscall Client::virt_meth_0x58bd80(Client *this)

{
  char *pcVar1;
  void *this_00;
  char *pcVar2;
  int *piVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  this_00 = FUN_004a7680(0xbbf0);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "Console";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Console",(uint)(pcVar2 + -0x69cb10));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar3 = FUN_0059e180(this_00,local_28,(int *)0x1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return piVar3;
}



int * __thiscall Client::virt_meth_0x58be40(Client *this)

{
  char *pcVar1;
  CDebugInterface *this_00;
  char *pcVar2;
  cls_0x558740 *pcVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  this_00 = (CDebugInterface *)FUN_004a7680(0xf8);
  local_4 = 0;
  if (this_00 == (CDebugInterface *)0x0) {
    pcVar3 = (cls_0x558740 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "Debug";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Debug",(uint)(pcVar2 + -0x69cb18));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pcVar3 = CDebugInterface::CDebugInterface(this_00,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return (int *)pcVar3;
}



int * __thiscall Client::virt_meth_0x58bf00(Client *this)

{
  char *pcVar1;
  cls_0x5b6400 *pcVar2;
  char *pcVar3;
  bool bVar4;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &pVStack_c;
  pcVar2 = (cls_0x5b6400 *)FUN_004a7680(0x70);
  local_4 = 0;
  if (pcVar2 == (cls_0x5b6400 *)0x0) {
    pcVar2 = (cls_0x5b6400 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "DebugTools";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"DebugTools",(uint)(pcVar3 + -0x69cb20));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pcVar2 = cls_0x5b6400::cls_0x5b6400(pcVar2,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = pVStack_c;
  return (int *)pcVar2;
}



undefined4 __thiscall Client::virt_meth_0x58bfc0(Client *this)

{
  char *pcVar1;
  void *this_00;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  this_00 = FUN_004a7680(0x54);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "FontTest";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"FontTest",(uint)(pcVar2 + -0x69cb2c));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar3 = FUN_005b80e0(this_00,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return uVar3;
}



undefined4 * __thiscall Client::virt_meth_0x58c080(Client *this)

{
  char *pcVar1;
  DialogueInterface *pDVar2;
  char *pcVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  pDVar2 = (DialogueInterface *)FUN_004a7680(0x2ac);
  local_4 = 0;
  if (pDVar2 == (DialogueInterface *)0x0) {
    pDVar2 = (DialogueInterface *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "DialogueInterface";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"DialogueInterface",(uint)(pcVar3 + -0x69cb38));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pDVar2 = DialogueInterface::DialogueInterface(pDVar2,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return &pDVar2->vftptr_0x0;
}



undefined4 * __thiscall Client::virt_meth_0x58c140(Client *this)

{
  char *pcVar1;
  CFloatingTextInterface *pCVar2;
  char *pcVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  pCVar2 = (CFloatingTextInterface *)FUN_004a7680(0x37584);
  local_4 = 0;
  if (pCVar2 == (CFloatingTextInterface *)0x0) {
    pCVar2 = (CFloatingTextInterface *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "FloatingTextInterface";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"FloatingTextInterface",(uint)(pcVar3 + -0x69cb4c));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pCVar2 = CFloatingTextInterface::CFloatingTextInterface(pCVar2,local_28,(int *)0x1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return &pCVar2->vftptr_0x0;
}



undefined4 * __thiscall Client::virt_meth_0x58c200(Client *this)

{
  char *pcVar1;
  CSMenuInterface *pCVar2;
  char *pcVar3;
  bool bVar4;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ce2;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  pCVar2 = (CSMenuInterface *)FUN_004a7680(0xd88);
  local_4 = 0;
  if (pCVar2 == (CSMenuInterface *)0x0) {
    pCVar2 = (CSMenuInterface *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "CSMenuInterface";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"CSMenuInterface",(uint)(pcVar3 + -0x69cb64));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pCVar2 = CSMenuInterface::CSMenuInterface(pCVar2,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return &pCVar2->vftptr_0x0;
}



void __thiscall Client::virt_meth_0x58c380(Client *this,void *param_1)

{
  CameraControl *this_00;
  bool bVar1;
  Entity *this_01;
  int iVar2;
  int *piVar3;
  GameActionEquip *this_02;
  byte unaff_DI;
  uint unaff_retaddr;
  char local_14d;
  void *local_14c;
  void *local_148;
  int local_144;
  void *local_140;
  void *local_13c;
  undefined local_138 [4];
  undefined local_134 [32];
  undefined4 local_114 [65];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639cfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) goto LAB_0058c5cb;
  switch(*(undefined4 *)((int)param_1 + 0x30)) {
  case 0xc:
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_144);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_14c);
    GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,&local_14d);
    FUN_0045e560(param_1,&local_140);
    FUN_0045e560(param_1,&local_148);
    FUN_0045e560(param_1,&local_14c);
    this_01 = (Entity *)GameActionEquip::meth_0x54be10(this_02);
    if (this_01 == (Entity *)0x0) {
      FUN_00497120((byte *)
                   "Error handling Network::ENGINE_ID_ENTITY_ADDTOMAP (Client::FilterPacket)\n\tEntity not found.\n"
                  );
    }
    else {
      local_13c = local_140;
      local_134._0_4_ = local_14c;
      local_138 = (undefined  [4])local_148;
      Entity::meth_0x54a8a0(this_01,(float *)&local_13c);
      if ((local_14d != '\0') ||
         ((*(int *)&(this_01->DynamicObject).field_0x1e4 ==
           *(int *)&(this->client).base.critical_section.field_0xb8 &&
          (local_144 == *(int *)&(this->client).base.critical_section.field_0xdc)))) {
        (*(this->client).base.vftptr_0x0[0x12].virt_meth_0x6162e5_4)(local_144,1,1);
      }
    }
    break;
  case 0xd:
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_14c);
    meth_0x588200(this,(int)local_14c);
    break;
  case 0x22:
  case 0x27:
  case 0x32:
    (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_DI);
    break;
  case 0x26:
  case 0x31:
  case 0x34:
    (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_DI);
    break;
  case 0x3a:
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,local_114);
    this_00 = *(CameraControl **)&(this->client).base.critical_section.field_0x80;
    CameraControl::meth_0x586590(this_00,'\x01');
    CameraControl::meth_0x586830(this_00);
    cls_0x5810f0::meth_0x5810f0
              (*(cls_0x5810f0 **)&(this->client).base.critical_section.field_0x70,1);
    (**(code **)(**(int **)&(this->client).base.critical_section.field_0x9c + 0x10))(0);
    (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 0x20))();
    piVar3 = *(int **)&(this->client).base.critical_section.field_0x9c;
    (this->client).base.critical_section.field_0x10c = 1;
    (**(code **)(*piVar3 + 0x14))();
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(local_138 + 4),local_134 + 0x1c);
    puStack_8 = (undefined *)0x0;
    piVar3 = (int *)FUN_0041d050();
    (**(code **)(*piVar3 + 4))(local_138 + 4);
    local_c = (void *)0xffffffff;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_138);
    iVar2 = FUN_0041d050();
    local_14c = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x5c)
                        )();
    goto LAB_0058c5c1;
  case 0x3f:
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_14c);
    piVar3 = (int *)FUN_0041d050();
    (**(code **)(*piVar3 + 8))(local_14c);
    (**(code **)(**(int **)&(this->client).base.critical_section.field_0x9c + 0x10))(0);
LAB_0058c5c1:
    meth_0x589d90(this,local_14c);
  }
LAB_0058c5cb:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Client::virt_meth_0x58c660(Client *this,int *param_1)

{
  char cVar1;
  CameraControl *this_00;
  undefined4 *puVar2;
  Entity *this_01;
  critical_section *pcVar3;
  cls_0x56ae70 *this_02;
  cls_0x569f10 *this_03;
  GameActionEquip *pGVar4;
  cls_0x599db0 *this_04;
  GameActionEquip **ppGVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  void *pvVar10;
  cls_0x56d570 *this_05;
  cls_0x56d380 *this_06;
  int *piVar11;
  GameActionEquip *this_07;
  GameActionEquip *this_08;
  GameActionEquip *this_09;
  GameActionEquip *this_10;
  GameActionEquip *this_11;
  GameActionEquip *this_12;
  GameActionEquip *this_13;
  GameActionEquip *this_14;
  GameActionEquip *this_15;
  GameActionEquip *this_16;
  GameActionEquip *this_17;
  undefined **ppuVar12;
  dword unaff_EBX;
  dword unaff_ESI;
  byte unaff_DI;
  uint unaff_retaddr;
  Action__vftable_647888 *in_stack_fffff860;
  undefined4 *in_stack_fffff864;
  GameActionEquip *pGVar13;
  byte bVar14;
  GameActionEquip *pGStack_754;
  int *piStack_750;
  GameActionEquip *pGStack_74c;
  GameActionEquip *pGStack_748;
  undefined4 uStack_744;
  void *pvStack_740;
  void *pvStack_73c;
  void *pvStack_738;
  int *piStack_734;
  undefined auStack_730 [24];
  undefined auStack_718 [28];
  char acStack_6fc [4];
  undefined auStack_6f8 [4];
  undefined *apuStack_6f4 [60];
  undefined auStack_604 [44];
  CStore aCStack_5d8 [4];
  undefined4 auStack_4d0 [32];
  char acStack_450 [64];
  undefined4 auStack_410 [256];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639d47;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  puVar2 = (*(this->client).base.vftptr_0x0[0x11].virt_meth_0x59d650_0)((base *)this,(byte)param_1);
  if ((char)puVar2 == '\0') {
    switch(param_1[0xc]) {
    case 9:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_73c);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pGStack_748);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pvStack_740);
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x28))();
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x30))();
      iVar7 = FUN_0041d050();
      pcVar3 = (critical_section *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x18))();
      net::critical_section::meth_0x551880(pcVar3,apuStack_6f4,pGStack_748,0,unaff_DI,unaff_ESI);
      break;
    case 10:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      puVar2 = (undefined4 *)GameActionEquip::meth_0x54be10(pGStack_748);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)();
      }
      break;
    default:
      cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_1 + 6),acStack_450,0x40,'\x01');
      FUN_00497120((byte *)"Client received packet with unknown id %d from %s\r\n");
      break;
    case 0xc:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_740);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)((int)&uStack_744 + 3))
      ;
      FUN_0045e560(param_1,&pvStack_73c);
      FUN_0045e560(param_1,&piStack_750);
      FUN_0045e560(param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pvVar10 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x54)
                        )();
      this_01 = (Entity *)GameActionEquip::meth_0x54be10(this_07);
      FUN_00573160(pvVar10,(int *)this_01);
      pvStack_738 = pvStack_73c;
      piStack_734 = piStack_750;
      auStack_730._0_4_ = pGStack_754;
      Entity::meth_0x54a8a0(this_01,(float *)&pvStack_738);
      if ((uStack_744._3_1_ != '\0') ||
         ((*(int *)&(this_01->DynamicObject).field_0x1e4 ==
           *(int *)&(this->client).base.critical_section.field_0xb8 &&
          (pvStack_740 == *(void **)&(this->client).base.critical_section.field_0xdc)))) {
        (*(this->client).base.vftptr_0x0[0x12].virt_meth_0x6162e5_4)();
      }
      break;
    case 0xd:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      meth_0x588200(this,(int)pGStack_754);
      piVar11 = (int *)GameActionEquip::meth_0x54be10(this_08);
      if (piVar11 == (int *)0x0) {
        handle_fatal_error(
                          "Error handling Network::ENGINE_ID_ENTITY_REMOVEFROMMAP (Client::recv_packet)\n\tInvalid entity\n"
                          );
      }
      else {
        iVar7 = FUN_0041d050();
        pvVar10 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) +
                                      0x54))();
        if (pvVar10 == (void *)0x0) {
          handle_fatal_error(
                            "Error handling Network::ENGINE_ID_ENTITY_REMOVEFROMMAP (Client::recv_packet)\n\tInvalid map\n"
                            );
        }
        else {
          FUN_0056e500(pvVar10,piVar11);
        }
      }
      break;
    case 0xe:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(this_09);
      if (pcVar3 != (critical_section *)0x0) {
        net::critical_section::meth_0x551ba0(pcVar3,(int)piStack_750);
      }
      break;
    case 0x10:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = GameActionEquip::meth_0x54be10(this_10);
      if (iVar7 == 0) {
        handle_fatal_error(
                          "Error handling Network::ENGINE_ID_ENTITY_ADDTOPARTY (Client::recv_packet)\n\tInvalid Entity\n"
                          );
      }
      else {
        piVar11 = (int *)FUN_00401130();
        puVar2 = (undefined4 *)(**(code **)(*piVar11 + 0x68))();
        (**(code **)*puVar2)();
      }
      break;
    case 0x11:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = GameActionEquip::meth_0x54be10(pGStack_754);
      if (iVar7 == 0) {
        handle_fatal_error(
                          "Error handling Network::ENGINE_ID_ENTITY_REMOVEFROMPARTY (Client::recv_packet)\n\tInvalid Entity\n"
                          );
      }
      else {
        piVar11 = (int *)FUN_00401130();
        piVar11 = (int *)(**(code **)(*piVar11 + 0x68))();
        (**(code **)(*piVar11 + 0x10))();
      }
      break;
    case 0x12:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(this_11);
      if (pcVar3 != (critical_section *)0x0) {
        net::critical_section::meth_0x5512b0(pcVar3,apuStack_6f4,piStack_750,1);
      }
      break;
    case 0x13:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&piStack_750);
      pvVar10 = (void *)GameActionEquip::meth_0x54be10(this_12);
      if (pvVar10 != (void *)0x0) {
        FUN_0054f270(pvVar10,(int *)pGStack_748,(char)piStack_750);
      }
      break;
    case 0x14:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      pvVar10 = (void *)GameActionEquip::meth_0x54be10(pGStack_754);
      if (pvVar10 != (void *)0x0) {
        FUN_005512f0(pvVar10,apuStack_6f4,(char)pGStack_748,piStack_750);
      }
      break;
    case 0x15:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&piStack_750);
      pvVar10 = (void *)GameActionEquip::meth_0x54be10(this_13);
      if (pvVar10 != (void *)0x0) {
        FUN_0054f590(pvVar10,(int *)pGStack_748,(char)piStack_750);
      }
      break;
    case 0x16:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x84))();
      GameActionEquip::AddToTeam(pGVar4,piStack_750,(int *)pGVar13);
      break;
    case 0x17:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x84))();
      GameActionEquip::meth_0x56a1a0(pGVar4,(int *)pGVar13);
      break;
    case 0x18:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      iVar7 = GameActionEquip::meth_0x54be10(this_14);
      if (iVar7 != 0) {
        *(int **)(iVar7 + 0x36c) = piStack_750;
      }
      break;
    case 0x19:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      iVar7 = GameActionEquip::meth_0x54be10(pGStack_754);
      iVar6 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 4) + 4 + iVar6) + 0x28))();
      iVar6 = FUN_0041d050();
      pcVar3 = (critical_section *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 4) + 4 + iVar6) + 0x18))();
      net::critical_section::meth_0x551880
                (pcVar3,(undefined **)&DAT_0064d7d8,0,0,unaff_DI,unaff_ESI);
      (*pcVar3->vftptr_0x0[10].virt_meth_0x5b92d0_0)(pcVar3,(byte)iVar7);
      break;
    case 0x1b:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x84))();
      GameActionEquip::SetTeamAttitude(pGVar4,(int **)pGStack_748,piStack_750,(int)pGVar13);
      break;
    case 0x1c:
      iVar7 = FUN_0041d050();
      this_02 = (cls_0x56ae70 *)
                (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x84))();
      cls_0x56ae70::meth_0x56ad40(this_02);
      break;
    case 0x1d:
      iVar7 = FUN_0041d050();
      this_03 = (cls_0x569f10 *)
                (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x88))();
      cls_0x569f10::meth_0x569de0(this_03);
      break;
    case 0x1e:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x88))();
      GameActionEquip::RemoveFromSquad(pGVar4,(int *)pGVar13);
      break;
    case 0x1f:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      iVar7 = GameActionEquip::meth_0x54be10(this_15);
      if (iVar7 != 0) {
        *(int **)(iVar7 + 0x374) = piStack_750;
      }
      break;
    case 0x20:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x88))();
      GameActionEquip::AddToSquad(pGVar4,piStack_750,(int *)pGVar13);
      break;
    case 0x21:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      pGVar13 = pGStack_754;
      pGVar4 = (GameActionEquip *)
               (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x88))();
      GameActionEquip::meth_0x569480(pGVar4,(int **)pGStack_748,piStack_750,(int)pGVar13);
      break;
    case 0x22:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      bVar14 = 0xff;
      pvVar10 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x78)
                        )();
      FUN_005a0610(pvVar10,(dword)pGStack_754,unaff_EBX);
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x23:
    case 0x24:
    case 0x25:
      break;
    case 0x26:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,auStack_4d0);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      piVar11 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x7c))
                                 ();
      pGVar13 = pGStack_754;
      (**(code **)(*piVar11 + 4))();
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,(byte)pGVar13);
      break;
    case 0x27:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      iVar7 = FUN_0041d050();
      piVar11 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x7c))
                                 ();
      bVar14 = (byte)apuStack_6f4;
      (**(code **)(*piVar11 + 0xc))();
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x2a:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x6162e5_4)();
      break;
    case 0x2b:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      bVar14 = 0x9b;
      pvVar10 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x80)
                        )();
      if ((pvVar10 != (void *)0x0) &&
         (pvVar10 = (void *)FUN_005a23b0(pvVar10,(CStore *)auStack_6f8), pvVar10 != (void *)0x0)) {
        FUN_005a26b0(pvVar10,&aCStack_5d8[0].vftptr_0x0,unaff_EBX,0,0,0,0);
      }
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x2c:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      iVar7 = FUN_0041d050();
      bVar14 = 0x15;
      pvVar10 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x80)
                        )();
      if ((pvVar10 != (void *)0x0) &&
         (pvVar10 = (void *)FUN_005a23b0(pvVar10,aCStack_5d8), pvVar10 != (void *)0x0)) {
        FUN_005a1e80(pvVar10,auStack_6f8);
      }
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x2e:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      iVar7 = FUN_0041d050();
      bVar14 = (byte)apuStack_6f4;
      this_04 = (cls_0x599db0 *)
                (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x8c))();
      if ((this_04 != (cls_0x599db0 *)0x0) &&
         (ppGVar5 = (GameActionEquip **)cls_0x599db0::meth_0x599db0(this_04,unaff_EBX),
         ppGVar5 != (GameActionEquip **)0x0)) {
        *ppGVar5 = pGStack_754;
      }
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x2f:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_73c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_740);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      meth_0x58aad0(this,pGStack_74c,(int)pvStack_73c,pvStack_740,pGStack_748,piStack_750,
                    pGStack_754);
      break;
    case 0x30:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_748);
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,auStack_4d0);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_604 + 0x14),(char *)auStack_4d0);
      uStack_4 = 0;
      GameClient::meth_0x587a70((GameClient *)this);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_604);
      break;
    case 0x31:
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)((int)&uStack_744 + 3))
      ;
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      ppGVar5 = &pGStack_754;
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,ppGVar5);
      bVar14 = (byte)ppGVar5;
      if (uStack_744._3_1_ == '\0') {
        iVar7 = GameActionEquip::meth_0x54be10(pGStack_74c);
        iVar6 = GameActionEquip::meth_0x54be10(this_16);
        iVar6 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar6 + 0x168),(int)piStack_750);
        bVar14 = (byte)iVar6;
        (**(code **)(**(int **)(iVar7 + 0x168) + 4))();
      }
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x32:
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)((int)&uStack_744 + 3))
      ;
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      ppGVar5 = &pGStack_754;
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,ppGVar5);
      bVar14 = (byte)ppGVar5;
      if (uStack_744._3_1_ == '\0') {
        iVar7 = GameActionEquip::meth_0x54be10(pGStack_74c);
        iVar6 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar7 + 0x168),(int)pGStack_754);
        bVar14 = (byte)iVar6;
        (**(code **)(**(int **)(iVar7 + 0x168) + 8))();
      }
      (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x34:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      pvVar10 = (void *)GameActionEquip::meth_0x54be10(this_17);
      if (pvVar10 == (void *)0x0) {
        FUN_00497120((byte *)
                     "ENGINE_ID_ITEM_SETSTACKSIZE - Unable to look up entity to set the stacksize of.\n"
                    );
      }
      else {
        FUN_00549d60(pvVar10,(int)pGStack_754);
        (*(this->client).base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_DI);
      }
      break;
    case 0x37:
      meth_0x588230(this,(int)param_1);
      break;
    case 0x3a:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,apuStack_6f4);
      this_00 = *(CameraControl **)&(this->client).base.critical_section.field_0x80;
      CameraControl::meth_0x586590(this_00,'\x01');
      CameraControl::meth_0x586830(this_00);
      cls_0x5810f0::meth_0x5810f0
                (*(cls_0x5810f0 **)&(this->client).base.critical_section.field_0x70,1);
      (**(code **)(**(int **)&(this->client).base.critical_section.field_0x9c + 0x10))();
      (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 0x20))();
      piVar11 = *(int **)&(this->client).base.critical_section.field_0x9c;
      (this->client).base.critical_section.field_0x10c = 1;
      (**(code **)(*piVar11 + 0x14))();
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x50))();
      iVar7 = FUN_0041d050();
      iVar7 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x58))();
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_718,acStack_6fc);
      pvStack_c = (void *)0x1;
      piVar11 = (int *)FUN_0041d050();
      (**(code **)(*piVar11 + 4))();
      uStack_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_718 + 8));
      meth_0x589d90(this,*(undefined4 *)(iVar7 + 0xb4));
      break;
    case 0x3d:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x3c))();
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x58))();
      break;
    case 0x3e:
      iVar7 = FUN_0041d050();
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x50))();
      (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 0x20))();
      break;
    case 0x3f:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_730 + 4),(char *)&aCStack_5d8[0].mbr_0x4)
      ;
      uStack_4 = 2;
      piVar11 = (int *)FUN_0041d050();
      (**(code **)(*piVar11 + 4))();
      puStack_8 = (undefined *)0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_730);
      (**(code **)(**(int **)&(this->client).base.critical_section.field_0x9c + 0x10))();
      iVar7 = FUN_0041d050();
      uVar9 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x5c))();
      meth_0x589d90(this,uVar9);
      break;
    case 0x41:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      pGStack_754 = (GameActionEquip *)&stack0xfffff880;
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffff880,"");
      pGStack_74c = (GameActionEquip *)&stack0xfffff860;
      uStack_4 = 3;
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffff860,(char *)&aCStack_5d8[0].mbr_0x4);
      piVar11 = (int *)FUN_00401130();
      uStack_4 = 0xffffffff;
      pvVar10 = (void *)(**(code **)(*piVar11 + 0x6c))();
      FUN_005aa070(pvVar10,in_stack_fffff860,in_stack_fffff864);
      break;
    case 0x42:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      iVar7 = (**(code **)(*piVar11 + 0x54))();
      if (iVar7 == 0) {
        FUN_00497120((byte *)
                     "Invalid map ID caught in ENGINE_ID_SETLOCAL in Client::recv_packet: %d");
      }
      else {
        if (*(uint *)(iVar7 + 0x24) < 0x10) {
          pcVar8 = (char *)(iVar7 + 0x10);
        }
        else {
          pcVar8 = *(char **)(iVar7 + 0x10);
        }
        pGStack_74c = (GameActionEquip *)&stack0xfffff880;
        cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffff880,pcVar8);
        pGStack_754 = (GameActionEquip *)&stack0xfffff860;
        uStack_4 = 4;
        cls_0x4d8d70::meth_0x401d20
                  ((cls_0x4d8d70 *)&stack0xfffff860,(char *)&aCStack_5d8[0].mbr_0x4);
        piVar11 = (int *)FUN_00401130();
        uStack_4 = 0xffffffff;
        pvVar10 = (void *)(**(code **)(*piVar11 + 0x70))();
        FUN_005aa070(pvVar10,in_stack_fffff860,in_stack_fffff864);
      }
      break;
    case 0x44:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,auStack_410);
      FUN_0059eaf0(*(int *)&(this->client).base.critical_section.field_0x84,&DAT_00671dc0);
      break;
    case 0x45:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pGStack_74c);
      (*(this->client).base.vftptr_0x0[0x12].virt_meth_0x6162e5_4)();
      break;
    case 0x47:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&aCStack_5d8[0].mbr_0x4);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      pGVar13 = pGStack_74c;
      puVar2 = (undefined4 *)operator_new((uint)pGStack_74c);
      GameActionEquip::meth_0x45e580((GameActionEquip *)param_1,puVar2,(uint)pGVar13);
      pcVar8 = get_some_directory_path();
      ppuVar12 = apuStack_6f4;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        *(char *)ppuVar12 = cVar1;
        ppuVar12 = (undefined **)((int)ppuVar12 + 1);
      } while (cVar1 != '\0');
      FUN_004c58a0((char *)apuStack_6f4,(undefined4 *)"characters");
      FUN_004c58a0((char *)apuStack_6f4,&aCStack_5d8[0].mbr_0x4);
      pvVar10 = (void *)ResourceSystem::FileStreamOpen(DAT_00707da8,(char)apuStack_6f4,0);
      if (pvVar10 != (void *)0x0) {
        uVar9 = ResourceSystem::FileStreamWrite(puVar2,(int)pGVar13,(int)pvVar10);
        if ((char)uVar9 == '\0') {
          handle_fatal_error("Error writing creature file %s");
        }
        cls_0x49c610::meth_0x49b1d0(DAT_00707da8,pvVar10,'\0');
      }
      break;
    case 0x49:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_73c);
      FUN_0045e560(param_1,&pvStack_740);
      FUN_0045e560(param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      FUN_0045e560(param_1,&pGStack_754);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      pGVar13 = pGStack_754;
      pGVar4 = pGStack_74c;
      pvVar10 = (void *)(**(code **)(*piVar11 + 0x54))();
      FUN_0056d4b0(pvVar10,pvStack_740,pGStack_748,piStack_750,pGVar13,(byte)pGVar4);
      break;
    case 0x4a:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_73c);
      FUN_0045e560(param_1,&pvStack_740);
      FUN_0045e560(param_1,&pGStack_748);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&piStack_750);
      FUN_0045e560(param_1,&pGStack_754);
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,(undefined *)&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      pGVar13 = pGStack_754;
      pGVar4 = pGStack_74c;
      pvVar10 = (void *)(**(code **)(*piVar11 + 0x54))();
      FUN_0056d2b0(pvVar10,pvStack_740,pGStack_748,piStack_750,pGVar13,pGVar4);
      break;
    case 0x4b:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      this_05 = (cls_0x56d570 *)(**(code **)(*piVar11 + 0x54))();
      cls_0x56d570::meth_0x56d570(this_05);
      break;
    case 0x4c:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      this_06 = (cls_0x56d380 *)(**(code **)(*piVar11 + 0x54))();
      cls_0x56d380::meth_0x56d380(this_06);
      break;
    case 0x4d:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_754);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_74c);
      piVar11 = (int *)FUN_00401130();
      (**(code **)(*piVar11 + 0xa0))();
      break;
    case 0x4e:
      piVar11 = (int *)FUN_00401130();
      (**(code **)(*piVar11 + 0xa4))();
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
Client::SetFocus(Client *this,uint param_1,uint param_2,undefined4 param_3,char param_4,char param_5
                )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 ******ppppppuVar5;
  char *pcVar6;
  int *piVar7;
  uint unaff_retaddr;
  undefined4 ******ppppppuStack_6c;
  void *pvStack_68;
  dword dStack_5c;
  uint uStack_58;
  VFX_Parameter__vftable_673a20 *pVStack_54;
  undefined4 auStack_50 [16];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639d68;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  if (param_1 != 0) {
    ExceptionList = &pvStack_c;
    iVar3 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(iVar3 + 0x1ec);
      if (DAT_0070bd98 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(DAT_0070bd98 + 0xc);
      }
      (**(code **)(*piVar7 + 8))(uVar2);
      meth_0x589d90(this,uVar2);
      if (DAT_0070bd98 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = DAT_0070bd98 + 0xc;
      }
      iVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x60))();
      if (*(uint *)(iVar3 + 0x24) < 0x10) {
        pcVar6 = (char *)(iVar3 + 0x10);
      }
      else {
        pcVar6 = *(char **)(iVar3 + 0x10);
      }
      uStack_58 = 0xf;
      dStack_5c = 0;
      ppppppuStack_6c = (undefined4 ******)((uint)ppppppuStack_6c & 0xffffff00);
      pcVar4 = pcVar6;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&stack0xffffff90,pcVar6,(int)pcVar4 - (int)(pcVar6 + 1));
      puStack_8 = (undefined *)0x0;
      ::cls_0x50db20::meth_0x401a40((cls_0x50db20 *)&stack0xffffff90,dStack_5c - 4,4);
      ppppppuVar5 = ppppppuStack_6c;
      if (uStack_58 < 0x10) {
        ppppppuVar5 = &ppppppuStack_6c;
      }
      (**(code **)(*DAT_00707ce4 + 0x1b0))(ppppppuVar5);
      FUN_00616d8c((char *)auStack_50,(byte *)"CameraSetTarget %u");
      FUN_00580d10(*(void **)&(this->client).base.critical_section.field_0x78,auStack_50);
      if ((char)param_2 == '\0') {
        *(undefined4 *)&(this->client).base.critical_section.field_0xdc = 0;
      }
      else {
        piVar7 = *(int **)&(this->client).base.critical_section.field_0x9c;
        *(uint *)&(this->client).base.critical_section.field_0xdc = param_1;
        (**(code **)(*piVar7 + 0x1c))();
      }
      *(undefined4 *)&(this->client).base.critical_section.field_0xd8 = 0;
      if ((char)param_3 != '\0') {
        if (DAT_0070bd98 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = DAT_0070bd98 + 0xc;
        }
        iVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x54))(uVar2)
        ;
        if (*(uint *)(iVar3 + 0x158) < 0x10) {
          pcVar6 = (char *)(iVar3 + 0x144);
        }
        else {
          pcVar6 = *(char **)(iVar3 + 0x144);
        }
        FUN_005908f0(*(void **)&(this->client).base.critical_section.field_0x6c,pcVar6);
      }
      if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_54) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_68);
      }
      goto LAB_0058db59;
    }
  }
  FUN_00497120((byte *)"Invalid entity id passed to Client::SetFocus()\n");
LAB_0058db59:
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



Client * __thiscall Client::Client(Client *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 unaff_ESI;
  char *pcVar2;
  char *pcVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639c08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  net::client::client(&this->client,(u_short)param_1);
  (this->client).base.vftptr_0x0 = (base__vftable_6a1d1c *)&Client__vftable_69c814_0069c814;
  *(undefined4 *)&(this->client).base.critical_section.field_0x6c = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x70 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x74 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x78 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x7c = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x80 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x84 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x88 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x8c = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x90 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x94 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x98 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x9c = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xa0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xa4 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xa8 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xac = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xb0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xb4 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xb8 = 0;
  (this->client).base.critical_section.field_0xd0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xd4 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xd8 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xdc = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xe0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xe8 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xec = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xf0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xf4 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xf8 = 0;
  (this->client).base.critical_section.field_0xfc = 1;
  *(undefined4 *)&(this->client).base.critical_section.field_0x100 = 0;
  (this->client).base.critical_section.field_0x104 = 0;
  (this->client).base.critical_section.field_0x105 = 0;
  (this->client).base.critical_section.field_0x106 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x108 = 0;
  (this->client).base.critical_section.field_0x10c = 0;
  *(undefined2 *)&(this->client).base.critical_section.field_0x10e = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0x110 = 0;
  (this->client).base.critical_section.field_0xbc = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xc0 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xc4 = 0;
  *(undefined4 *)&(this->client).base.critical_section.field_0xc8 = 0;
  *(undefined2 *)&(this->client).base.critical_section.field_0xcc = 0;
  local_4 = 0;
  (this->client).base.critical_section.field_0xce = 0;
  uVar1 = FUN_0056af50();
  pcVar3 = "StartMap";
  *(undefined4 *)&(this->client).base.critical_section.field_0xd4 = uVar1;
  RegisterCommand((undefined4 *)"StartMap",CommandStartMap,unaff_ESI);
  pcVar2 = "RequestNewGame";
  RegisterCommand((undefined4 *)"RequestNewGame",CommandRequestNewGame,pcVar3);
  pcVar3 = "NewGame";
  RegisterCommand((undefined4 *)"NewGame",CommandRequestNewGame,pcVar2);
  pcVar2 = "Connect";
  RegisterCommand((undefined4 *)"Connect",CommandConnect,pcVar3);
  pcVar3 = "Disconnect";
  RegisterCommand((undefined4 *)"Disconnect",CommandDisconnect,pcVar2);
  pcVar2 = "Kill";
  RegisterCommand((undefined4 *)"Kill",&CommandKill,pcVar3);
  pcVar3 = "StartDialogue";
  RegisterCommand((undefined4 *)"StartDialogue",CommandStartDialogue,pcVar2);
  RegisterCommand((undefined4 *)"EndDialogue",CommandEndDialogue,pcVar3);
  pcVar3 = "EndDialog";
  RegisterCommand((undefined4 *)"EndDialog",CommandEndDialogue,unaff_ESI);
  pcVar2 = "CreateEntity";
  RegisterCommand((undefined4 *)"CreateEntity",CommandCreateEntity,pcVar3);
  pcVar3 = "SetScript";
  RegisterCommand((undefined4 *)"SetScript",CommandSetScript,pcVar2);
  pcVar2 = "ToggleStatistics";
  RegisterCommand((undefined4 *)"ToggleStatistics",CommandToggleStatistics,pcVar3);
  pcVar3 = "ToggleFullscreen";
  RegisterCommand((undefined4 *)"ToggleFullscreen",CommandToggleFullscreen,pcVar2);
  pcVar2 = "ToggleLighting";
  RegisterCommand((undefined4 *)"ToggleLighting",CommandToggleLighting,pcVar3);
  pcVar3 = "ToggleShadow";
  RegisterCommand((undefined4 *)"ToggleShadow",CommandToggleShadow,pcVar2);
  RegisterCommand((undefined4 *)"ToggleBilinearFiltering",CommandToggleBilinearFiltering,pcVar3);
  pcVar3 = "ToggleStartupMovies";
  RegisterCommand((undefined4 *)"ToggleStartupMovies",CommandToggleStartupMovies,unaff_ESI);
  pcVar2 = "ToggleCameraFog";
  RegisterCommand((undefined4 *)"ToggleCameraFog",CommandToggleCameraFog,pcVar3);
  pcVar3 = "ToggleWireframe";
  RegisterCommand((undefined4 *)"ToggleWireframe",CommandToggleWireframe,pcVar2);
  pcVar2 = "ToggleTransparency";
  RegisterCommand((undefined4 *)"ToggleTransparency",CommandToggleTransparency,pcVar3);
  pcVar3 = "ToggleOctreeDrawing";
  RegisterCommand((undefined4 *)"ToggleOctreeDrawing",CommandToggleOctreeDrawing,pcVar2);
  pcVar2 = "ToggleMipMapping";
  RegisterCommand((undefined4 *)"ToggleMipMapping",CommandToggleMipMapping,pcVar3);
  pcVar3 = "DebugLight";
  RegisterCommand((undefined4 *)"DebugLight",CommandDebugLight,pcVar2);
  RegisterCommand((undefined4 *)"DebugOctreeLight",CommandDebugOctreeLight,pcVar3);
  pcVar3 = "ToggleHeightFog";
  RegisterCommand((undefined4 *)"ToggleHeightFog",CommandToggleHeightFog,unaff_ESI);
  pcVar2 = "ToggleOctreeNodeDebug";
  RegisterCommand((undefined4 *)"ToggleOctreeNodeDebug",CommandToggleOctreeNodeDebug,pcVar3);
  pcVar3 = "ToggleFogOfWar";
  RegisterCommand((undefined4 *)"ToggleFogOfWar",CommandToggleFogOfWar,pcVar2);
  pcVar2 = "ToggleFOWAutomap";
  RegisterCommand((undefined4 *)"ToggleFOWAutomap",CommandToggleFOWAutomap,pcVar3);
  pcVar3 = "ToggleFOWLOS";
  RegisterCommand((undefined4 *)"ToggleFOWLOS",CommandToggleFOWLOS,pcVar2);
  pcVar2 = "ToggleVisualEffects";
  RegisterCommand((undefined4 *)"ToggleVisualEffects",CommandToggleVisualEffects,pcVar3);
  pcVar3 = "ToggleWater";
  RegisterCommand((undefined4 *)"ToggleWater",CommandToggleWater,pcVar2);
  RegisterCommand((undefined4 *)"ToggleBuilding",CommandToggleBuilding,pcVar3);
  pcVar3 = "CameraReset";
  RegisterCommand((undefined4 *)"CameraReset",CommandCameraReset,unaff_ESI);
  pcVar2 = "CameraSetTarget";
  RegisterCommand((undefined4 *)"CameraSetTarget",CommandCameraSetTarget,pcVar3);
  pcVar3 = "CameraAzimuth";
  RegisterCommand((undefined4 *)"CameraAzimuth",CommandCameraAzimuth,pcVar2);
  pcVar2 = "CameraAzimuthInc";
  RegisterCommand((undefined4 *)"CameraAzimuthInc",CommandCameraAzimuthInc,pcVar3);
  pcVar3 = "CameraAzimuthDec";
  RegisterCommand((undefined4 *)"CameraAzimuthDec",CommandCameraAzimuthDec,pcVar2);
  pcVar2 = "CameraAzimuthSpeed";
  RegisterCommand((undefined4 *)"CameraAzimuthSpeed",CommandCameraAzimuthSpeed,pcVar3);
  pcVar3 = "CameraElevation";
  RegisterCommand((undefined4 *)"CameraElevation",CommandCameraElevation,pcVar2);
  RegisterCommand((undefined4 *)"CameraElevationSpeed",CommandCameraElevationSpeed,pcVar3);
  pcVar3 = "CameraDistance";
  RegisterCommand((undefined4 *)"CameraDistance",CommandCameraDistance,unaff_ESI);
  pcVar2 = "CameraDistanceSpeed";
  RegisterCommand((undefined4 *)"CameraDistanceSpeed",CommandCameraDistanceSpeed,pcVar3);
  pcVar3 = "CameraFOV";
  RegisterCommand((undefined4 *)"CameraFOV",CommandCameraFOV,pcVar2);
  pcVar2 = "CameraTopDown";
  RegisterCommand((undefined4 *)"CameraTopDown",CommandCameraTopDown,pcVar3);
  pcVar3 = "CameraTop";
  RegisterCommand((undefined4 *)"CameraTop",CommandCameraTop,pcVar2);
  pcVar2 = "CameraDown";
  RegisterCommand((undefined4 *)"CameraDown",CommandCameraDown,pcVar3);
  pcVar3 = "CameraScrollSpeed";
  RegisterCommand((undefined4 *)"CameraScrollSpeed",CommandCameraScrollSpeed,pcVar2);
  RegisterCommand((undefined4 *)"CameraScrollLeft_On",CommandCameraScrollLeft_On,pcVar3);
  pcVar3 = "CameraScrollRight_On";
  RegisterCommand((undefined4 *)"CameraScrollRight_On",CommandCameraScrollRight_On,unaff_ESI);
  pcVar2 = "CameraScrollUp_On";
  RegisterCommand((undefined4 *)"CameraScrollUp_On",CommandCameraScrollUp_On,pcVar3);
  pcVar3 = "CameraScrollDown_On";
  RegisterCommand((undefined4 *)"CameraScrollDown_On",CommandCameraScrollDown_On,pcVar2);
  pcVar2 = "CameraScrollLeft_Off";
  RegisterCommand((undefined4 *)"CameraScrollLeft_Off",CommandCameraScrollLeft_Off,pcVar3);
  pcVar3 = "CameraScrollRight_Off";
  RegisterCommand((undefined4 *)0x659c70,CommandCameraScrollRight_Off,pcVar2);
  pcVar2 = "CameraScrollUp_Off";
  RegisterCommand((undefined4 *)"CameraScrollUp_Off",CommandCameraScrollUp_Off,pcVar3);
  pcVar3 = "CameraScrollDown_Off";
  RegisterCommand((undefined4 *)"CameraScrollDown_Off",CommandCameraScrollDown_Off,pcVar2);
  RegisterCommand((undefined4 *)"CameraZoomIn_On",CommandCameraZoomIn_On,pcVar3);
  pcVar3 = "CameraZoomIn_Off";
  RegisterCommand((undefined4 *)"CameraZoomIn_Off",CommandCameraZoomIn_Off,unaff_ESI);
  pcVar2 = "CameraZoomOut_On";
  RegisterCommand((undefined4 *)"CameraZoomOut_On",CommandCameraZoomOut_On,pcVar3);
  pcVar3 = "CameraZoomOut_Off";
  RegisterCommand((undefined4 *)"CameraZoomOut_Off",CommandCameraZoomOut_Off,pcVar2);
  pcVar2 = "CameraRotateLeft";
  RegisterCommand((undefined4 *)"CameraRotateLeft",CommandCameraRotateLeft,pcVar3);
  pcVar3 = "CameraRotateRight";
  RegisterCommand((undefined4 *)"CameraRotateRight",CommandCameraRotateRight,pcVar2);
  pcVar2 = "CameraTiltUp";
  RegisterCommand((undefined4 *)"CameraTiltUp",CommandCameraTiltUp,pcVar3);
  pcVar3 = "CameraTiltDown";
  RegisterCommand((undefined4 *)"CameraTiltDown",CommandCameraTiltDown,pcVar2);
  RegisterCommand((undefined4 *)"CameraMouseRotate_On",CommandCameraMouseRotate_On,pcVar3);
  pcVar3 = "CameraMouseRotate_Off";
  RegisterCommand((undefined4 *)"CameraMouseRotate_Off",CommandCameraMouseRotate_Off,unaff_ESI);
  pcVar2 = "CameraToggleConstraints";
  RegisterCommand((undefined4 *)"CameraToggleConstraints",CommandCameraToggleConstraints,pcVar3);
  pcVar3 = "ScreenCap";
  RegisterCommand((undefined4 *)"ScreenCap",CommandScreenCap,pcVar2);
  pcVar2 = "ShowCursor";
  RegisterCommand((undefined4 *)"ShowCursor",CommandShowCursor,pcVar3);
  pcVar3 = "Warp";
  RegisterCommand((undefined4 *)"Warp",&CommandWarp,pcVar2);
  pcVar2 = "GuiOptimizationLevel";
  RegisterCommand((undefined4 *)"GuiOptimizationLevel",CommandGuiOptimizationLevel,pcVar3);
  pcVar3 = "ConsoleWindow";
  RegisterCommand((undefined4 *)"ConsoleWindow",CommandConsoleWindow,pcVar2);
  RegisterCommand((undefined4 *)"DebugWindow",CommandToggleDebugWindow,pcVar3);
  pcVar3 = "StackWindow";
  RegisterCommand((undefined4 *)"StackWindow",CommandToggleStackWindow,unaff_ESI);
  pcVar2 = "DebugTools";
  RegisterCommand((undefined4 *)"DebugTools",CommandToggleDebugTools,pcVar3);
  pcVar3 = "FontTest";
  RegisterCommand((undefined4 *)"FontTest",CommandFontTest,pcVar2);
  pcVar2 = "GetGlobal";
  RegisterCommand((undefined4 *)"GetGlobal",CommandGetGlobal,pcVar3);
  pcVar3 = "SetGlobal";
  RegisterCommand((undefined4 *)"SetGlobal",CommandSetGlobal,pcVar2);
  pcVar2 = "ToggleScene";
  RegisterCommand((undefined4 *)"ToggleScene",CommandToggleScene,pcVar3);
  pcVar3 = "ToggleEntities";
  RegisterCommand((undefined4 *)"ToggleEntities",CommandToggleEntities,pcVar2);
  RegisterCommand((undefined4 *)"ToggleGUI",CommandToggleGUI,pcVar3);
  pcVar3 = "ToggleScripts";
  RegisterCommand((undefined4 *)"ToggleScripts",CommandToggleScripts,unaff_ESI);
  pcVar2 = "DisableScripts";
  RegisterCommand((undefined4 *)"DisableScripts",CommandDisableScripts,pcVar3);
  pcVar3 = "EnableScripts";
  RegisterCommand((undefined4 *)"EnableScripts",CommandEnableScripts,pcVar2);
  pcVar2 = "OneScriptPass";
  RegisterCommand((undefined4 *)"OneScriptPass",CommandOneScriptPass,pcVar3);
  pcVar3 = "VRAM";
  RegisterCommand((undefined4 *)"VRAM",CommandVRAM,pcVar2);
  pcVar2 = "ListTextures";
  RegisterCommand((undefined4 *)"ListTextures",CommandListTextures,pcVar3);
  pcVar3 = "ToggleSampling";
  RegisterCommand((undefined4 *)"ToggleSampling",CommandToggleSampling,pcVar2);
  RegisterCommand((undefined4 *)"vsync",&CommandVSync,pcVar3);
  pcVar2 = "AdapterInfo";
  RegisterCommand((undefined4 *)"AdapterInfo",CommandAdapterInfo,unaff_ESI);
  pcVar3 = "SetDisplaymode";
  RegisterCommand((undefined4 *)"SetDisplaymode",CommandSetDisplaymode,pcVar2);
  pcVar2 = "MemoryPoolTest";
  RegisterCommand((undefined4 *)"MemoryPoolTest",CommandMemoryPoolTest,pcVar3);
  pcVar3 = "FadeIn";
  RegisterCommand((undefined4 *)"FadeIn",CommandFadeIn,pcVar2);
  pcVar2 = "FadeOut";
  RegisterCommand((undefined4 *)"FadeOut",CommandFadeOut,pcVar3);
  pcVar3 = "MovieTest";
  RegisterCommand((undefined4 *)"MovieTest",CommandMovieTest,pcVar2);
  RegisterCommand((undefined4 *)"EditToken",CommandEditToken,pcVar3);
  ExceptionList = pvStack_c;
  return this;
}



void __thiscall Client::virt_meth_0x58f010(Client *this)

{
  base__vftable_6a1d1c *pbVar1;
  undefined4 uVar2;
  undefined uVar3;
  bool bVar4;
  int *piVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined4 *puVar6;
  EditTokenInterface *pEVar7;
  undefined *this_00;
  VFX_VEGInstance *pVVar8;
  byte unaff_SI;
  byte unaff_retaddr;
  byte in_stack_00000004;
  byte in_stack_00000008;
  byte in_stack_0000000c;
  
  net::client::virt_meth_0x59c340(&this->client);
  piVar5 = (*(this->client).base.vftptr_0x0[0xb].virt_meth_0x59d650_0)((base *)this,unaff_SI);
  *(int **)&(this->client).base.critical_section.field_0x6c = piVar5;
  (**(code **)(*piVar5 + 4))();
  Graphics::meth_0x590a20(*(Graphics **)&(this->client).base.critical_section.field_0x6c);
  uVar3 = (*(this->client).base.vftptr_0x0[0xb].virt_meth_0x6162e5_4)();
  *(int **)&(this->client).base.critical_section.field_0x70 = (int *)CONCAT31(extraout_var,uVar3);
  (**(code **)(*(int *)CONCAT31(extraout_var,uVar3) + 0x14))();
  Graphics::Initialize(*(Graphics **)&(this->client).base.critical_section.field_0x70);
  uVar3 = (*(this->client).base.vftptr_0x0[0xb].virt_meth_0x6162e5_8)();
  *(int **)&(this->client).base.critical_section.field_0x74 = (int *)CONCAT31(extraout_var_00,uVar3)
  ;
  (**(code **)(*(int *)CONCAT31(extraout_var_00,uVar3) + 0x14))();
  piVar5 = (*(this->client).base.vftptr_0x0[0xc].virt_meth_0x59d650_0)((base *)this,unaff_retaddr);
  *(int **)&(this->client).base.critical_section.field_0x78 = piVar5;
  (**(code **)(*piVar5 + 4))();
  uVar3 = (*(this->client).base.vftptr_0x0[0xc].virt_meth_0x6162e5_4)();
  *(int **)&(this->client).base.critical_section.field_0x7c = (int *)CONCAT31(extraout_var_01,uVar3)
  ;
  (**(code **)(*(int *)CONCAT31(extraout_var_01,uVar3) + 4))();
  uVar3 = (*(this->client).base.vftptr_0x0[0xc].virt_meth_0x6162e5_8)();
  *(undefined4 **)&(this->client).base.critical_section.field_0x80 =
       (undefined4 *)CONCAT31(extraout_var_02,uVar3);
  (***(code ***)(undefined4 *)CONCAT31(extraout_var_02,uVar3))();
  piVar5 = (*(this->client).base.vftptr_0x0[0xd].virt_meth_0x59d650_0)
                     ((base *)this,in_stack_00000004);
  *(int **)&(this->client).base.critical_section.field_0x84 = piVar5;
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar5 + 4) + (int)piVar5),1);
  uVar3 = (*(this->client).base.vftptr_0x0[0xd].virt_meth_0x6162e5_4)();
  piVar5 = (int *)CONCAT31(extraout_var_03,uVar3);
  *(int **)&(this->client).base.critical_section.field_0x88 = piVar5;
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar5 + 4) + (int)piVar5),1);
  cls_0x558740::meth_0x558190
            (*(cls_0x558740 **)&(this->client).base.critical_section.field_0x88,0x1a4,(int *)0x6e);
  cls_0x558740::meth_0x434120
            (*(cls_0x558740 **)&(this->client).base.critical_section.field_0x88,0x400,0x300);
  uVar3 = (*(this->client).base.vftptr_0x0[0xd].virt_meth_0x6162e5_4)();
  piVar5 = (int *)CONCAT31(extraout_var_04,uVar3);
  *(int **)&(this->client).base.critical_section.field_0x8c = piVar5;
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar5 + 4) + (int)piVar5),1);
  cls_0x558740::meth_0x558190
            (*(cls_0x558740 **)&(this->client).base.critical_section.field_0x8c,300,(int *)0x1a4);
  cls_0x558740::meth_0x434120
            (*(cls_0x558740 **)&(this->client).base.critical_section.field_0x8c,0x400,0x300);
  uVar3 = (*(this->client).base.vftptr_0x0[0xd].virt_meth_0x6162e5_8)();
  piVar5 = (int *)CONCAT31(extraout_var_05,uVar3);
  *(int **)&(this->client).base.critical_section.field_0x90 = piVar5;
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar5 + 4) + (int)piVar5),1);
  cls_0x5b5c50::meth_0x5b5c50
            (*(cls_0x5b5c50 **)&(this->client).base.critical_section.field_0x90,0x400,0x300);
  uVar3 = (*(this->client).base.vftptr_0x0[0x10].virt_meth_0x6162e5_4)();
  *(int **)&(this->client).base.critical_section.field_0xb0 = (int *)CONCAT31(extraout_var_06,uVar3)
  ;
  (**(code **)(*(int *)CONCAT31(extraout_var_06,uVar3) + 4))();
  FUN_005b52e0(*(int *)&(this->client).base.critical_section.field_0xb0);
  uVar3 = (*(this->client).base.vftptr_0x0[0xf].virt_meth_0x6162e5_4)();
  *(int **)&(this->client).base.critical_section.field_0xa4 = (int *)CONCAT31(extraout_var_07,uVar3)
  ;
  (**(code **)(*(int *)CONCAT31(extraout_var_07,uVar3) + 4))();
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa4 + 8))();
  piVar5 = (*(this->client).base.vftptr_0x0[0xf].virt_meth_0x59d650_0)
                     ((base *)this,in_stack_00000008);
  *(int **)&(this->client).base.critical_section.field_0xa0 = piVar5;
  (**(code **)(*piVar5 + 4))();
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0xa0 + 8))();
  uVar3 = (*(this->client).base.vftptr_0x0[0xe].virt_meth_0x6162e5_8)();
  *(int **)&(this->client).base.critical_section.field_0x9c = (int *)CONCAT31(extraout_var_08,uVar3)
  ;
  (**(code **)(*(int *)CONCAT31(extraout_var_08,uVar3) + 4))();
  (**(code **)(**(int **)&(this->client).base.critical_section.field_0x9c + 8))();
  uVar3 = (*(this->client).base.vftptr_0x0[0xe].virt_meth_0x6162e5_4)();
  *(uint *)&(this->client).base.critical_section.field_0x98 = CONCAT31(extraout_var_09,uVar3);
  uVar3 = (*(this->client).base.vftptr_0x0[0xf].virt_meth_0x6162e5_8)();
  pbVar1 = (this->client).base.vftptr_0x0;
  *(uint *)&(this->client).base.critical_section.field_0xa8 = CONCAT31(extraout_var_10,uVar3);
  puVar6 = (*pbVar1[0x10].virt_meth_0x59d650_0)((base *)this,in_stack_0000000c);
  *(undefined4 **)&(this->client).base.critical_section.field_0xac = puVar6;
  pEVar7 = FUN_0058c2c0();
  *(EditTokenInterface **)&(this->client).base.critical_section.field_0xb4 = pEVar7;
  uVar2 = DAT_006ff0d8;
  this_00 = FUN_004e1de0();
  pVVar8 = FUN_004e2ad0(this_00,(VFX_VEGInstance *)"FX_Selection_Critter_Medium_01.veg",uVar2);
  *(VFX_VEGInstance **)&(this->client).base.critical_section.field_0xf4 = pVVar8;
  (this->client).base.critical_section.field_0x104 = 1;
  (this->client).base.critical_section.field_0x106 = 1;
  bVar4 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (bVar4) {
    (*(this->client).base.vftptr_0x0[4].virt_meth_0x59d650_0)((base *)this,0x44);
  }
  return;
}


#include "../include/Client.h"
#include "../include/Client.h"
#include "../include/client.h"

undefined __thiscall net::client::virt_meth_0x409bb0(client *this)

{
  return 1;
}



undefined4 __thiscall net::client::Get_base_critical_section_field_0xc(client *this)

{
  return *(undefined4 *)&(this->base).critical_section.field_0xc;
}



client * __thiscall net::client::client(client *this,u_short param_1)

{
  base::base(&this->base,param_1);
  *(undefined4 *)&(this->base).critical_section.field_0x50 = 0;
  *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
  (this->base).vftptr_0x0 = (base__vftable_6a1d1c *)&client__vftable_6a1934_006a1934;
  (this->base).critical_section.field_0x5f = 0;
  (this->base).critical_section.field_0x5e = 0;
  (this->base).critical_section.field_0x5d = 0;
  (this->base).critical_section.field_0x5c = 0;
  *(undefined2 *)&(this->base).critical_section.field_0x60 = 0;
  *(address__vftable_6647a0 **)&(this->base).critical_section.field_0x58 =
       &address__vftable_6647a0_006647a0;
  *(undefined4 *)&(this->base).critical_section.field_0x64 = 0;
  *(undefined4 *)&(this->base).critical_section.field_0x68 = 0;
  return this;
}



void __thiscall net::client::virt_meth_0x59c340(client *this)

{
  (*((this->base).vftptr_0x0)->virt_meth_0x6162e5_8)();
  (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_8)();
  *(undefined4 *)&(this->base).critical_section.field_0x3c = 10;
  *(undefined4 *)&(this->base).critical_section.field_0x2c = 3000;
  return;
}



void __thiscall net::client::virt_meth_0x59c360(client *this)

{
  undefined4 *puVar1;
  
  (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_4)();
  puVar1 = *(undefined4 **)&(this->base).critical_section.field_0x50;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  *(undefined4 *)&(this->base).critical_section.field_0x50 = 0;
  return;
}



void __thiscall net::client::virt_meth_0x59c380(client *this,char *param_1)

{
  uint unaff_retaddr;
  undefined local_1c [12];
  void *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063a7a8;
  pvStack_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  local_1c._0_4_ = &address__vftable_6647a0_006647a0;
  local_1c[7] = 0;
  local_1c[6] = 0;
  local_1c[5] = 0;
  local_1c[4] = 0;
  local_1c._8_4_ = local_1c._8_4_ & 0xffff0000;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  cls_0x5aca50::meth_0x5acc00((cls_0x5aca50 *)local_1c,param_1);
  (*(this->base).vftptr_0x0[3].virt_meth_0x6162e5_8)(local_1c);
  ExceptionList = local_10;
  FUN_00616e15(local_1c._8_4_ ^ local_4);
  return;
}



void __thiscall net::client::virt_meth_0x59c410(client *this,int param_1)

{
  (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_4)();
  *(undefined4 *)&(this->base).critical_section.field_0x54 = 1;
  cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)&(this->base).critical_section.field_0x58,param_1);
  *(undefined4 *)&(this->base).critical_section.field_0x64 = 0;
  return;
}



void __thiscall net::client::virt_meth_0x59c450(client *this)

{
  connection *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a7cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (connection *)operator_new(0x4168);
  local_4 = 0;
  if (this_00 != (connection *)0x0) {
    connection::connection(this_00);
    this_00->vftptr_0x0 = (connection__vftable_6a777c *)&server__vftable_69c418_0069c418;
    *(undefined *)&this_00[1].vftptr_0x0 = 0;
    *(connection **)&(this->base).critical_section.field_0x50 = this_00;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)&(this->base).critical_section.field_0x50 = 0;
  ExceptionList = local_c;
  return;
}



void __thiscall net::client::virt_meth_0x59c4d0(client *this)

{
  meth_0x59d5d0(this);
  cls_0x5ab770::meth_0x5ab770
            (*(cls_0x5ab770 **)&(this->base).critical_section.field_0x50,
             *(undefined4 *)&(this->base).critical_section.field_0x30,
             *(undefined4 *)&(this->base).critical_section.field_0x40);
  return;
}



void __thiscall net::client::meth_0x59c560(client *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  char local_44 [60];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_1 + 0x18),local_44,0x40,'\x01');
  ::debug_stream::printf
            (&(this->base).critical_section.field_0x8,0x2000,
             "[client %u] Receiving requested info from server at %s\n",
             (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar1);
  (*(this->base).vftptr_0x0[7].virt_meth_0x6162e5_4)(param_1);
  FUN_00616e15(uStack_8 ^ local_4);
  return;
}



void __thiscall net::client::meth_0x59c5d0(client *this,int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->base).critical_section.field_0x54 == 2) {
    uVar3 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x10000,
               "[client %u] Receiving requested start from server at %s\n",
               (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar3);
    cVar2 = (*(this->base).vftptr_0x0[8].virt_meth_0x6162e5_4)(param_1);
    if (cVar2 == '\0') {
      (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_4)();
      FUN_00616e15(local_4 ^ unaff_retaddr);
      return;
    }
    iVar1 = *(int *)&(this->base).critical_section.field_0x50;
    *(undefined4 *)&(this->base).critical_section.field_0x54 = 3;
    *(undefined *)(iVar1 + 0x4164) = 1;
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::client::meth_0x59c670(client *this,void *param_1)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if ((1 < *(int *)&(this->base).critical_section.field_0x54) &&
     (*(char *)(*(int *)&(this->base).critical_section.field_0x50 + 0x4164) != '\0')) {
    uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x20000,
               "[client %u] Receiving update from server at %s\n",
               (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar1);
    cls_0x5ab960::meth_0x5ab960(*(cls_0x5ab960 **)&(this->base).critical_section.field_0x50,param_1)
    ;
    (*(this->base).vftptr_0x0[8].virt_meth_0x6162e5_8)(param_1);
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::client::meth_0x59c6f0(client *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (1 < *(int *)&(this->base).critical_section.field_0x54) {
    uVar1 = connection::meth_0x5ab8e0
                      (*(connection **)&(this->base).critical_section.field_0x50,
                       (int)(cls_0x5ac9e0 *)(param_1 + 0x18),*(short *)(param_1 + 0x24));
    if ((char)uVar1 != '\0') {
      uVar2 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_1 + 0x18),local_44,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x80000,
                 "[client %u] Receiving disconnect from server at %s\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar2);
      (*(this->base).vftptr_0x0[9].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
      connection::Set_mbr_0x10_to_0(*(connection **)&(this->base).critical_section.field_0x50);
      *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
    }
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::client::meth_0x59c780(client *this)

{
  cls_0x5aba20 *this_00;
  
  this_00 = *(cls_0x5aba20 **)&(this->base).critical_section.field_0x50;
  if (0 < *(int *)&this_00->field_0x10) {
    cls_0x5aba20::meth_0x5aba20(this_00);
    return;
  }
  return;
}



void __thiscall net::client::meth_0x59c790(client *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a7f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->base).vftptr_0x0 = (base__vftable_6a1d1c *)&client__vftable_6a1934_006a1934;
  local_4 = 1;
  virt_meth_0x59c360(this);
  *(address__vftable_6647a0 **)&(this->base).critical_section.field_0x58 =
       &address__vftable_6647a0_006647a0;
  local_4 = 0xffffffff;
  base::meth_0x59d530(&this->base);
  ExceptionList = local_c;
  return;
}



void __thiscall net::client::meth_0x59c7f0(client *this,void *param_1)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)((int)param_1 + 0x30) == 5) {
    meth_0x59c5d0(this,(int)param_1);
  }
  else if (*(int *)((int)param_1 + 0x30) == 6) {
    meth_0x59c670(this,param_1);
  }
  else {
    uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x1000,
               "[client %u] Receiving sequenced user packet %u from %s\n",
               (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,
               *(undefined4 *)((int)param_1 + 0x30),uVar1);
    (*(this->base).vftptr_0x0[9].virt_meth_0x6162e5_4)(param_1);
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



int * __thiscall net::client::virt_meth_0x59c880(client *this,byte param_1)

{
  meth_0x59c790(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::virt_meth_0x59c8a0(client *this)

{
  undefined4 uVar1;
  uint unaff_ESI;
  uint unaff_retaddr;
  undefined4 in_stack_ffffdf78;
  int in_stack_ffffdf7c;
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->base).critical_section.field_0x54 < 2) {
    *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
  }
  else {
    ExceptionList = &local_c;
    packet::packet((packet *)local_2048);
    local_4 = 0;
    cls_0x5ac9e0::meth_0x5ac9e0
              ((cls_0x5ac9e0 *)(local_2048 + 0x18),
               *(int *)&(this->base).critical_section.field_0x50 + 0x1c);
    local_2018 = 8;
    uVar1 = cls_0x5ac9e0::meth_0x5acaf0
                      ((cls_0x5ac9e0 *)(local_2048 + 0x18),&stack0xffffdf78,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x10,
               "[client %u] Sending disconnect to server at %s\n",
               (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar1);
    (*(this->base).vftptr_0x0[7].virt_meth_0x59d650_0)(&this->base,(byte)local_2048);
    GameClient::meth_0x59c4f0
              ((GameClient *)this,local_2048,2,unaff_ESI,in_stack_ffffdf78,in_stack_ffffdf7c);
    connection::Set_mbr_0x10_to_0(*(connection **)&(this->base).critical_section.field_0x50);
    *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
    local_2048._24_4_ = &address__vftable_6647a0_006647a0;
    local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
    if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_2048._20_4_);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::meth_0x59c9c0(client *this,void *param_1)

{
  cls_0x5ac9e0 *this_00;
  undefined *_Format;
  char cVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  undefined4 local_208c;
  char local_2088 [64];
  undefined auStack_2048 [48];
  dword dStack_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->base).critical_section.field_0x54 == 1) {
    this_00 = (cls_0x5ac9e0 *)((int)param_1 + 0x18);
    ExceptionList = &local_c;
    cVar1 = cls_0x5ac9e0::meth_0x5aca90(this_00,(int)&(this->base).critical_section.field_0x58,'\0')
    ;
    if ((cVar1 != '\0') &&
       (*(undefined4 *)((int)param_1 + 0xc) = 0, 3 < *(uint *)((int)param_1 + 0x10))) {
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_208c);
      _Format = &(this->base).critical_section.field_0x8;
      uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
      ::debug_stream::printf
                (_Format,0x4000,"[client %u] Receiving requested challenge from server at %s\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar2);
      cVar1 = (*(this->base).vftptr_0x0[7].virt_meth_0x6162e5_8)(param_1);
      if (cVar1 != '\0') {
        *(undefined4 *)&(this->base).critical_section.field_0x68 = local_208c;
        packet::packet((packet *)auStack_2048);
        uStack_4 = 0;
        cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(auStack_2048 + 0x18),(int)this_00);
        dStack_2018 = 4;
        packet::meth_0x45f130((packet *)auStack_2048,1);
        packet::meth_0x45f130
                  ((packet *)auStack_2048,*(undefined4 *)&(this->base).critical_section.field_0x68);
        uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
        ::debug_stream::printf
                  (_Format,0x10,"[client %u] Sending connect request to server at %s\n",
                   (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar2);
        (*(this->base).vftptr_0x0[5].virt_meth_0x6162e5_8)(auStack_2048);
        meth_0x59d630(this,auStack_2048);
        buffer::~buffer((buffer *)auStack_2048);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::meth_0x59cb40(client *this,void *param_1)

{
  cls_0x5ac9e0 *this_00;
  undefined *_Format;
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  undefined4 unaff_EBP;
  uint unaff_EDI;
  uint unaff_retaddr;
  int local_208c;
  char local_2088 [64];
  undefined auStack_2048 [48];
  dword dStack_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->base).critical_section.field_0x54 == 1) {
    this_00 = (cls_0x5ac9e0 *)((int)param_1 + 0x18);
    ExceptionList = &local_c;
    cVar1 = cls_0x5ac9e0::meth_0x5aca90(this_00,(int)&(this->base).critical_section.field_0x58,'\0')
    ;
    if (cVar1 != '\0') {
      if (((uint)(*(int *)((int)param_1 + 0x10) - *(int *)((int)param_1 + 0xc)) < 4) ||
         (GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_208c), local_208c != 0))
      {
        *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
      }
      else {
        _Format = &(this->base).critical_section.field_0x8;
        uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
        ::debug_stream::printf
                  (_Format,0x8000,"[client %u] Receiving requested connect from server at %s\n",
                   (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar2);
        puVar3 = (*(this->base).vftptr_0x0[8].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
        if ((char)puVar3 == '\0') {
          *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
        }
        else {
          connection::meth_0x5abc00
                    (*(connection **)&(this->base).critical_section.field_0x50,
                     &(this->base).critical_section.mbr_0x14,
                     *(undefined2 *)&(this->base).critical_section.field_0x28,(int)this_00,
                     *(undefined2 *)((int)param_1 + 0x24),
                     *(undefined4 *)&(this->base).critical_section.field_0x40);
          *(undefined *)(*(int *)&(this->base).critical_section.field_0x50 + 0x4164) = 0;
          *(undefined4 *)&(this->base).critical_section.field_0x54 = 2;
          packet::packet((packet *)auStack_2048);
          uStack_4 = 0;
          cls_0x5ac9e0::meth_0x5ac9e0
                    ((cls_0x5ac9e0 *)(auStack_2048 + 0x18),
                     *(int *)&(this->base).critical_section.field_0x50 + 0x1c);
          dStack_2018 = 5;
          uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
          ::debug_stream::printf
                    (_Format,0x20,"[client %u] Sending start request to server at %s\n",
                     (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar2);
          (*(this->base).vftptr_0x0[6].virt_meth_0x59d650_0)(&this->base,(byte)auStack_2048);
          GameClient::meth_0x59c4f0((GameClient *)this,auStack_2048,1,unaff_EDI,unaff_EBP,unaff_EBX)
          ;
          buffer::~buffer((buffer *)auStack_2048);
        }
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::meth_0x59ccf0(client *this)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint unaff_retaddr;
  char local_2088 [64];
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->base).critical_section.field_0x54 == 1) {
    uVar1 = *(uint *)&(this->base).critical_section.field_0x30;
    ExceptionList = &local_c;
    uVar2 = FUN_005b8d00(*(uint *)&(this->base).critical_section.field_0x64,uVar1);
    if (2999 < uVar2) {
      *(uint *)&(this->base).critical_section.field_0x64 = uVar1;
      packet::packet((packet *)local_2048);
      local_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0
                ((cls_0x5ac9e0 *)(local_2048 + 0x18),(int)&(this->base).critical_section.field_0x58)
      ;
      local_2018 = 3;
      uVar3 = cls_0x5ac9e0::meth_0x5acaf0
                        ((cls_0x5ac9e0 *)(local_2048 + 0x18),local_2088,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,8,
                 "[client %u] Sending challenge request to server at %s\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar3);
      (*(this->base).vftptr_0x0[5].virt_meth_0x6162e5_4)(local_2048);
      meth_0x59d630(this,local_2048);
      local_2048._24_4_ = &address__vftable_6647a0_006647a0;
      local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
      if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_2048._20_4_);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::meth_0x59cf10(client *this)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 uVar4;
  uint unaff_ESI;
  uint unaff_retaddr;
  undefined4 in_stack_ffffdf78;
  int in_stack_ffffdf7c;
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  iVar1 = *(int *)&(this->base).critical_section.field_0x50;
  if (0 < *(int *)(iVar1 + 0x10)) {
    uVar3 = *(uint *)(iVar1 + 0x54);
    ExceptionList = &local_c;
    DVar2 = timeGetTime();
    uVar3 = FUN_005b8d00(uVar3,DVar2);
    if (100 < uVar3) {
      packet::packet((packet *)local_2048);
      local_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0
                ((cls_0x5ac9e0 *)(local_2048 + 0x18),
                 *(int *)&(this->base).critical_section.field_0x50 + 0x1c);
      local_2018 = 7;
      uVar4 = cls_0x5ac9e0::meth_0x5acaf0
                        ((cls_0x5ac9e0 *)(local_2048 + 0x18),&stack0xffffdf78,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x80,
                 "[client %u] Sending keepalive to server at %s\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar4);
      (*(this->base).vftptr_0x0[6].virt_meth_0x6162e5_8)(local_2048);
      GameClient::meth_0x59c4f0
                ((GameClient *)this,local_2048,0,unaff_ESI,in_stack_ffffdf78,in_stack_ffffdf7c);
      local_2048._24_4_ = &address__vftable_6647a0_006647a0;
      local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
      if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_2048._20_4_);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::meth_0x59d040(client *this,char param_1)

{
  undefined4 uVar1;
  uint unaff_ESI;
  uint unaff_retaddr;
  undefined4 in_stack_ffffdf78;
  int in_stack_ffffdf7c;
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (0 < *(int *)(*(int *)&(this->base).critical_section.field_0x50 + 0x10)) {
    ExceptionList = &local_c;
    if (param_1 != '\0') {
      ExceptionList = &local_c;
      packet::packet((packet *)local_2048);
      local_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0
                ((cls_0x5ac9e0 *)(local_2048 + 0x18),
                 *(int *)&(this->base).critical_section.field_0x50 + 0x1c);
      local_2018 = 8;
      uVar1 = cls_0x5ac9e0::meth_0x5acaf0
                        ((cls_0x5ac9e0 *)(local_2048 + 0x18),&stack0xffffdf78,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x10,
                 "[client %u] Sending disconnect to server at %s\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar1);
      (*(this->base).vftptr_0x0[7].virt_meth_0x59d650_0)(&this->base,(byte)local_2048);
      GameClient::meth_0x59c4f0
                ((GameClient *)this,local_2048,2,unaff_ESI,in_stack_ffffdf78,in_stack_ffffdf7c);
      local_4 = 0xffffffff;
      local_2048._24_4_ = &address__vftable_6647a0_006647a0;
      local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
      if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_2048._20_4_);
      }
      local_2048[4] = 0;
      local_2048._20_4_ = (void *)0x0;
    }
    local_4 = 0xffffffff;
    connection::Set_mbr_0x10_to_0(*(connection **)&(this->base).critical_section.field_0x50);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



uint __thiscall net::client::virt_meth_0x59d180(client *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = meth_0x59d930(this);
  uVar2 = meth_0x59cf10(this);
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}



void __thiscall net::client::meth_0x59d1a0(client *this,void *param_1)

{
  undefined4 uVar1;
  uint unaff_EDI;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  switch(*(undefined4 *)((int)param_1 + 0x30)) {
  case 2:
    meth_0x59c560(this,(uint)param_1,unaff_EDI);
    break;
  case 3:
    meth_0x59c9c0(this,param_1);
    break;
  case 4:
    meth_0x59cb40(this,param_1);
    break;
  default:
    uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x1000,
               "[client %u] Receiving out-of-band user packet %u from %s\n",
               (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,
               *(undefined4 *)((int)param_1 + 0x30),uVar1);
    (*(this->base).vftptr_0x0[9].virt_meth_0x6162e5_4)(param_1);
    break;
  case 8:
    meth_0x59c6f0(this,(int)param_1);
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::client::meth_0x59d260(client *this)

{
  cls_0x5ab930 *this_00;
  char cVar1;
  int iVar2;
  
  this_00 = *(cls_0x5ab930 **)&(this->base).critical_section.field_0x50;
  if (0 < *(int *)&this_00->field_0x10) {
    iVar2 = cls_0x5ab930::meth_0x5ab930
                      (this_00,*(int *)&(this->base).critical_section.field_0x40,
                       *(uint *)&(this->base).critical_section.field_0x2c,
                       *(int *)&(this->base).critical_section.field_0x3c);
    if ((char)iVar2 != '\0') {
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x1000000,
                 "[client %u] Server timed out after %u milliseconds.\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,
                 *(undefined4 *)(*(int *)&(this->base).critical_section.field_0x50 + 0x44));
      cVar1 = (*(this->base).vftptr_0x0[9].virt_meth_0x6162e5_8)
                        (*(undefined4 *)(*(int *)&(this->base).critical_section.field_0x50 + 0x44));
      if (cVar1 != '\0') {
        meth_0x59d040(this,'\x01');
      }
    }
  }
  return;
}



void __thiscall net::client::virt_meth_0x59d2d0(client *this)

{
  meth_0x59d5f0(this);
  meth_0x59d260(this);
  meth_0x59c780(this);
  meth_0x59ccf0(this);
  FUN_0059ce10((int *)this);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::virt_meth_0x59d300(client *this,void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_EBP;
  void *unaff_ESI;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  undefined local_2048 [20];
  void *local_2034;
  address__vftable_6647a0 *local_2030;
  word local_2024;
  dword local_2014;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a836;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  if (*(int *)((int)param_1 + 0x28) == -1) {
    if (*(int *)((int)param_1 + 0x30) == 1) {
      packet::packet((packet *)local_2048);
      local_4 = 0;
      if (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc)) {
        do {
          packet::meth_0x5ac7b0((packet *)local_2048,param_1);
          cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(local_2048 + 0x18),(int)param_1 + 0x18);
          local_2024 = *(word *)((int)param_1 + 0x24);
          local_2014 = *(dword *)((int)param_1 + 0x34);
          local_2048._12_4_ = 0;
          meth_0x59d1a0(this,local_2048);
        } while (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc));
      }
      local_2030 = &address__vftable_6647a0_006647a0;
      local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
      if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
        _free(local_2034);
      }
    }
    else {
      meth_0x59d1a0(this,param_1);
    }
  }
  else if (1 < *(int *)&(this->base).critical_section.field_0x54) {
    uVar1 = connection::meth_0x5ab8e0
                      (*(connection **)&(this->base).critical_section.field_0x50,(int)param_1 + 0x18
                       ,*(short *)((int)param_1 + 0x24));
    if ((char)uVar1 != '\0') {
      uVar2 = connection::meth_0x5ab7a0
                        (*(connection **)&(this->base).critical_section.field_0x50,param_1,
                         *(uint *)&(this->base).critical_section.field_0x40,unaff_EDI,unaff_ESI,
                         unaff_EBP);
      if ((char)uVar2 != '\0') {
        if (*(int *)((int)param_1 + 0x30) == 1) {
          packet::packet((packet *)local_2048);
          local_4 = 1;
          if (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc)) {
            do {
              packet::meth_0x5ac7b0((packet *)local_2048,param_1);
              cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(local_2048 + 0x18),(int)param_1 + 0x18);
              local_2024 = *(word *)((int)param_1 + 0x24);
              local_2014 = *(dword *)((int)param_1 + 0x34);
              local_2048._12_4_ = 0;
              meth_0x59c7f0(this,local_2048);
            } while (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc));
          }
          buffer::~buffer((buffer *)local_2048);
        }
        else {
          meth_0x59c7f0(this,param_1);
        }
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall net::client::meth_0x59d5d0(client *this)

{
  DWORD DVar1;
  
  *(undefined4 *)&(this->base).critical_section.field_0x40 = 0;
  DVar1 = timeGetTime();
  *(DWORD *)&(this->base).critical_section.field_0x34 = DVar1;
  *(undefined4 *)&(this->base).critical_section.field_0x38 = 0;
  return;
}



void __thiscall net::client::meth_0x59d5f0(client *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)&(this->base).critical_section.field_0x4c != 0) {
    iVar1 = 0;
    do {
      (*(this->base).vftptr_0x0[3].virt_meth_0x6162e5_4)
                (*(int *)&(this->base).critical_section.field_0x44 + iVar1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x2038;
    } while (uVar2 < *(uint *)&(this->base).critical_section.field_0x4c);
  }
  *(undefined4 *)&(this->base).critical_section.field_0x4c = 0;
  return;
}



void __thiscall net::client::meth_0x59d630(client *this,void *param_1)

{
  *(undefined2 *)((int)param_1 + 0x24) = *(undefined2 *)&(this->base).critical_section.field_0x28;
  *(undefined4 *)((int)param_1 + 0x28) = 0xffffffff;
  FUN_005b8f80(&(this->base).critical_section.mbr_0x14,(cls_0x5ac5e0 *)param_1);
  return;
}



void __thiscall net::client::meth_0x59d7f0(client *this)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a8db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = cls_0x5b9100::meth_0x5b9100
                    ((cls_0x5b9100 *)&(this->base).critical_section.mbr_0x14,
                     (void *)(*(int *)&(this->base).critical_section.field_0x4c * 0x2038 +
                             *(int *)&(this->base).critical_section.field_0x44));
  do {
    if (cVar2 == '\0') {
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)
     (*(int *)&(this->base).critical_section.field_0x4c * 0x2038 + 0x34 +
     *(int *)&(this->base).critical_section.field_0x44) =
         *(undefined4 *)&(this->base).critical_section.field_0x30;
    uVar6 = *(uint *)&(this->base).critical_section.field_0x48;
    uVar5 = *(int *)&(this->base).critical_section.field_0x4c + 1;
    *(uint *)&(this->base).critical_section.field_0x4c = uVar5;
    if (uVar6 <= uVar5) {
      puVar1 = *(undefined4 **)&(this->base).critical_section.field_0x44;
      iVar7 = uVar6 * 2;
      *(int *)&(this->base).critical_section.field_0x48 = iVar7;
      piVar3 = (int *)operator_new(uVar6 * 0x4070 + 4);
      local_4 = 0;
      if (piVar3 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = piVar3 + 1;
        *piVar3 = iVar7;
        _eh_vector_constructor_iterator_(piVar4,0x2038,iVar7,packet::packet,buffer::~buffer);
      }
      local_4 = 0xffffffff;
      *(int **)&(this->base).critical_section.field_0x44 = piVar4;
      if (uVar6 != 0) {
        iVar7 = 0;
        do {
          packet::meth_0x5ac630
                    ((packet *)(*(int *)&(this->base).critical_section.field_0x44 + iVar7),
                     iVar7 + (int)puVar1);
          iVar7 = iVar7 + 0x2038;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (puVar1 != (undefined4 *)0x0) {
        if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
          _free(puVar1 + -1);
        }
        (**(code **)*puVar1)(3);
      }
    }
    cVar2 = cls_0x5b9100::meth_0x5b9100
                      ((cls_0x5b9100 *)&(this->base).critical_section.mbr_0x14,
                       (void *)(*(int *)&(this->base).critical_section.field_0x4c * 0x2038 +
                               *(int *)&(this->base).critical_section.field_0x44));
  } while( true );
}



undefined4 __thiscall net::client::meth_0x59d930(client *this)

{
  undefined *puVar1;
  base__vftable_6a1d1c *pbVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte unaff_SI;
  undefined4 unaff_EDI;
  undefined4 *puVar9;
  
  if ((this->base).critical_section.field_0x2a != '\0') {
    pbVar2 = (this->base).vftptr_0x0;
    (this->base).critical_section.field_0x2a = 0;
    (*pbVar2[2].virt_meth_0x6162e5_8)();
  }
  DVar5 = timeGetTime();
  uVar8 = *(uint *)&(this->base).critical_section.field_0x34;
  *(DWORD *)&(this->base).critical_section.field_0x30 = DVar5;
  iVar6 = FUN_005b8d00(uVar8,DVar5);
  uVar3 = *(undefined4 *)&(this->base).critical_section.field_0x30;
  *(int *)&(this->base).critical_section.field_0x38 =
       *(int *)&(this->base).critical_section.field_0x38 + iVar6;
  *(undefined4 *)&(this->base).critical_section.field_0x34 = uVar3;
  meth_0x59d7f0(this);
  uVar8 = *(uint *)&(this->base).critical_section.field_0x3c;
  if (uVar8 == 0) {
    puVar1 = &(this->base).critical_section.field_0x40;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    puVar7 = (*(this->base).vftptr_0x0[3].virt_meth_0x59d650_0)(&this->base,unaff_SI);
    return CONCAT31((int3)((uint)puVar7 >> 8),1);
  }
  uVar4 = (ulonglong)*(uint *)&(this->base).critical_section.field_0x38 / (ulonglong)uVar8;
  puVar7 = (undefined4 *)uVar4;
  if (puVar7 == (undefined4 *)0x0) {
    return (uint)(uint3)(uVar4 >> 8) << 8;
  }
  puVar9 = puVar7;
  if (&DAT_0000000a < puVar7) {
    puVar9 = (undefined4 *)&DAT_0000000a;
  }
  do {
    if (*(uint *)&(this->base).critical_section.field_0x38 <= uVar8) break;
    pbVar2 = (this->base).vftptr_0x0;
    puVar9 = (undefined4 *)((int)puVar9 + -1);
    *(int *)&(this->base).critical_section.field_0x40 =
         *(int *)&(this->base).critical_section.field_0x40 + 1;
    puVar7 = (*pbVar2[3].virt_meth_0x59d650_0)(&this->base,(byte)unaff_EDI);
    uVar8 = *(uint *)&(this->base).critical_section.field_0x3c;
    *(uint *)&(this->base).critical_section.field_0x38 =
         *(int *)&(this->base).critical_section.field_0x38 - uVar8;
  } while (puVar9 != (undefined4 *)0x0);
  return CONCAT31((int3)((uint)puVar7 >> 8),1);
}


#include "../include/client.h"

undefined __thiscall net::client::virt_meth_0x409bb0(client *this)

{
  return 1;
}



undefined4 __thiscall net::client::Get_base_critical_section_field_0xc(client *this)

{
  return *(undefined4 *)&(this->base).critical_section.field_0xc;
}



client * __thiscall net::client::client(client *this,u_short param_1)

{
  base::base(&this->base,param_1);
  *(undefined4 *)&(this->base).critical_section.field_0x50 = 0;
  *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
  (this->base).vftptr_0x0 = (base__vftable_6a1d1c *)&client__vftable_6a1934_006a1934;
  (this->base).critical_section.field_0x5f = 0;
  (this->base).critical_section.field_0x5e = 0;
  (this->base).critical_section.field_0x5d = 0;
  (this->base).critical_section.field_0x5c = 0;
  *(undefined2 *)&(this->base).critical_section.field_0x60 = 0;
  *(address__vftable_6647a0 **)&(this->base).critical_section.field_0x58 =
       &address__vftable_6647a0_006647a0;
  *(undefined4 *)&(this->base).critical_section.field_0x64 = 0;
  *(undefined4 *)&(this->base).critical_section.field_0x68 = 0;
  return this;
}



void __thiscall net::client::virt_meth_0x59c340(client *this)

{
  (*((this->base).vftptr_0x0)->virt_meth_0x6162e5_8)();
  (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_8)();
  *(undefined4 *)&(this->base).critical_section.field_0x3c = 10;
  *(undefined4 *)&(this->base).critical_section.field_0x2c = 3000;
  return;
}



void __thiscall net::client::virt_meth_0x59c360(client *this)

{
  undefined4 *puVar1;
  
  (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_4)();
  puVar1 = *(undefined4 **)&(this->base).critical_section.field_0x50;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  *(undefined4 *)&(this->base).critical_section.field_0x50 = 0;
  return;
}



void __thiscall net::client::virt_meth_0x59c380(client *this,char *param_1)

{
  uint unaff_retaddr;
  undefined local_1c [12];
  void *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063a7a8;
  pvStack_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  local_1c._0_4_ = &address__vftable_6647a0_006647a0;
  local_1c[7] = 0;
  local_1c[6] = 0;
  local_1c[5] = 0;
  local_1c[4] = 0;
  local_1c._8_4_ = local_1c._8_4_ & 0xffff0000;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  cls_0x5aca50::meth_0x5acc00((cls_0x5aca50 *)local_1c,param_1);
  (*(this->base).vftptr_0x0[3].virt_meth_0x6162e5_8)(local_1c);
  ExceptionList = local_10;
  FUN_00616e15(local_1c._8_4_ ^ local_4);
  return;
}



void __thiscall net::client::virt_meth_0x59c410(client *this,int param_1)

{
  (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_4)();
  *(undefined4 *)&(this->base).critical_section.field_0x54 = 1;
  cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)&(this->base).critical_section.field_0x58,param_1);
  *(undefined4 *)&(this->base).critical_section.field_0x64 = 0;
  return;
}



void __thiscall net::client::virt_meth_0x59c450(client *this)

{
  connection *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a7cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (connection *)operator_new(0x4168);
  local_4 = 0;
  if (this_00 != (connection *)0x0) {
    connection::connection(this_00);
    this_00->vftptr_0x0 = (connection__vftable_6a777c *)&server__vftable_69c418_0069c418;
    *(undefined *)&this_00[1].vftptr_0x0 = 0;
    *(connection **)&(this->base).critical_section.field_0x50 = this_00;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)&(this->base).critical_section.field_0x50 = 0;
  ExceptionList = local_c;
  return;
}



void __thiscall net::client::virt_meth_0x59c4d0(client *this)

{
  meth_0x59d5d0(this);
  cls_0x5ab770::meth_0x5ab770
            (*(cls_0x5ab770 **)&(this->base).critical_section.field_0x50,
             *(undefined4 *)&(this->base).critical_section.field_0x30,
             *(undefined4 *)&(this->base).critical_section.field_0x40);
  return;
}



void __thiscall net::client::meth_0x59c560(client *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  char local_44 [60];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_1 + 0x18),local_44,0x40,'\x01');
  ::debug_stream::printf
            (&(this->base).critical_section.field_0x8,0x2000,
             "[client %u] Receiving requested info from server at %s\n",
             (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar1);
  (*(this->base).vftptr_0x0[7].virt_meth_0x6162e5_4)(param_1);
  FUN_00616e15(uStack_8 ^ local_4);
  return;
}



void __thiscall net::client::meth_0x59c5d0(client *this,int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->base).critical_section.field_0x54 == 2) {
    uVar3 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x10000,
               "[client %u] Receiving requested start from server at %s\n",
               (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar3);
    cVar2 = (*(this->base).vftptr_0x0[8].virt_meth_0x6162e5_4)(param_1);
    if (cVar2 == '\0') {
      (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_4)();
      FUN_00616e15(local_4 ^ unaff_retaddr);
      return;
    }
    iVar1 = *(int *)&(this->base).critical_section.field_0x50;
    *(undefined4 *)&(this->base).critical_section.field_0x54 = 3;
    *(undefined *)(iVar1 + 0x4164) = 1;
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::client::meth_0x59c670(client *this,void *param_1)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if ((1 < *(int *)&(this->base).critical_section.field_0x54) &&
     (*(char *)(*(int *)&(this->base).critical_section.field_0x50 + 0x4164) != '\0')) {
    uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x20000,
               "[client %u] Receiving update from server at %s\n",
               (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar1);
    cls_0x5ab960::meth_0x5ab960(*(cls_0x5ab960 **)&(this->base).critical_section.field_0x50,param_1)
    ;
    (*(this->base).vftptr_0x0[8].virt_meth_0x6162e5_8)(param_1);
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::client::meth_0x59c6f0(client *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (1 < *(int *)&(this->base).critical_section.field_0x54) {
    uVar1 = connection::meth_0x5ab8e0
                      (*(connection **)&(this->base).critical_section.field_0x50,
                       (int)(cls_0x5ac9e0 *)(param_1 + 0x18),*(short *)(param_1 + 0x24));
    if ((char)uVar1 != '\0') {
      uVar2 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_1 + 0x18),local_44,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x80000,
                 "[client %u] Receiving disconnect from server at %s\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar2);
      (*(this->base).vftptr_0x0[9].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
      connection::Set_mbr_0x10_to_0(*(connection **)&(this->base).critical_section.field_0x50);
      *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
    }
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::client::meth_0x59c780(client *this)

{
  cls_0x5aba20 *this_00;
  
  this_00 = *(cls_0x5aba20 **)&(this->base).critical_section.field_0x50;
  if (0 < *(int *)&this_00->field_0x10) {
    cls_0x5aba20::meth_0x5aba20(this_00);
    return;
  }
  return;
}



void __thiscall net::client::meth_0x59c790(client *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a7f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->base).vftptr_0x0 = (base__vftable_6a1d1c *)&client__vftable_6a1934_006a1934;
  local_4 = 1;
  virt_meth_0x59c360(this);
  *(address__vftable_6647a0 **)&(this->base).critical_section.field_0x58 =
       &address__vftable_6647a0_006647a0;
  local_4 = 0xffffffff;
  base::meth_0x59d530(&this->base);
  ExceptionList = local_c;
  return;
}



void __thiscall net::client::meth_0x59c7f0(client *this,void *param_1)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)((int)param_1 + 0x30) == 5) {
    meth_0x59c5d0(this,(int)param_1);
  }
  else if (*(int *)((int)param_1 + 0x30) == 6) {
    meth_0x59c670(this,param_1);
  }
  else {
    uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x1000,
               "[client %u] Receiving sequenced user packet %u from %s\n",
               (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,
               *(undefined4 *)((int)param_1 + 0x30),uVar1);
    (*(this->base).vftptr_0x0[9].virt_meth_0x6162e5_4)(param_1);
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



int * __thiscall net::client::virt_meth_0x59c880(client *this,byte param_1)

{
  meth_0x59c790(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::virt_meth_0x59c8a0(client *this)

{
  undefined4 uVar1;
  uint unaff_ESI;
  uint unaff_retaddr;
  undefined4 in_stack_ffffdf78;
  int in_stack_ffffdf7c;
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->base).critical_section.field_0x54 < 2) {
    *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
  }
  else {
    ExceptionList = &local_c;
    packet::packet((packet *)local_2048);
    local_4 = 0;
    cls_0x5ac9e0::meth_0x5ac9e0
              ((cls_0x5ac9e0 *)(local_2048 + 0x18),
               *(int *)&(this->base).critical_section.field_0x50 + 0x1c);
    local_2018 = 8;
    uVar1 = cls_0x5ac9e0::meth_0x5acaf0
                      ((cls_0x5ac9e0 *)(local_2048 + 0x18),&stack0xffffdf78,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x10,
               "[client %u] Sending disconnect to server at %s\n",
               (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar1);
    (*(this->base).vftptr_0x0[7].virt_meth_0x59d650_0)(&this->base,(byte)local_2048);
    GameClient::meth_0x59c4f0
              ((GameClient *)this,local_2048,2,unaff_ESI,in_stack_ffffdf78,in_stack_ffffdf7c);
    connection::Set_mbr_0x10_to_0(*(connection **)&(this->base).critical_section.field_0x50);
    *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
    local_2048._24_4_ = &address__vftable_6647a0_006647a0;
    local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
    if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_2048._20_4_);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::meth_0x59c9c0(client *this,void *param_1)

{
  cls_0x5ac9e0 *this_00;
  undefined *_Format;
  char cVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  undefined4 local_208c;
  char local_2088 [64];
  undefined auStack_2048 [48];
  dword dStack_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->base).critical_section.field_0x54 == 1) {
    this_00 = (cls_0x5ac9e0 *)((int)param_1 + 0x18);
    ExceptionList = &local_c;
    cVar1 = cls_0x5ac9e0::meth_0x5aca90(this_00,(int)&(this->base).critical_section.field_0x58,'\0')
    ;
    if ((cVar1 != '\0') &&
       (*(undefined4 *)((int)param_1 + 0xc) = 0, 3 < *(uint *)((int)param_1 + 0x10))) {
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_208c);
      _Format = &(this->base).critical_section.field_0x8;
      uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
      ::debug_stream::printf
                (_Format,0x4000,"[client %u] Receiving requested challenge from server at %s\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar2);
      cVar1 = (*(this->base).vftptr_0x0[7].virt_meth_0x6162e5_8)(param_1);
      if (cVar1 != '\0') {
        *(undefined4 *)&(this->base).critical_section.field_0x68 = local_208c;
        packet::packet((packet *)auStack_2048);
        uStack_4 = 0;
        cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(auStack_2048 + 0x18),(int)this_00);
        dStack_2018 = 4;
        packet::meth_0x45f130((packet *)auStack_2048,1);
        packet::meth_0x45f130
                  ((packet *)auStack_2048,*(undefined4 *)&(this->base).critical_section.field_0x68);
        uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
        ::debug_stream::printf
                  (_Format,0x10,"[client %u] Sending connect request to server at %s\n",
                   (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar2);
        (*(this->base).vftptr_0x0[5].virt_meth_0x6162e5_8)(auStack_2048);
        meth_0x59d630(this,auStack_2048);
        buffer::~buffer((buffer *)auStack_2048);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::meth_0x59cb40(client *this,void *param_1)

{
  cls_0x5ac9e0 *this_00;
  undefined *_Format;
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  undefined4 unaff_EBP;
  uint unaff_EDI;
  uint unaff_retaddr;
  int local_208c;
  char local_2088 [64];
  undefined auStack_2048 [48];
  dword dStack_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->base).critical_section.field_0x54 == 1) {
    this_00 = (cls_0x5ac9e0 *)((int)param_1 + 0x18);
    ExceptionList = &local_c;
    cVar1 = cls_0x5ac9e0::meth_0x5aca90(this_00,(int)&(this->base).critical_section.field_0x58,'\0')
    ;
    if (cVar1 != '\0') {
      if (((uint)(*(int *)((int)param_1 + 0x10) - *(int *)((int)param_1 + 0xc)) < 4) ||
         (GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&local_208c), local_208c != 0))
      {
        *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
      }
      else {
        _Format = &(this->base).critical_section.field_0x8;
        uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
        ::debug_stream::printf
                  (_Format,0x8000,"[client %u] Receiving requested connect from server at %s\n",
                   (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar2);
        puVar3 = (*(this->base).vftptr_0x0[8].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
        if ((char)puVar3 == '\0') {
          *(undefined4 *)&(this->base).critical_section.field_0x54 = 0;
        }
        else {
          connection::meth_0x5abc00
                    (*(connection **)&(this->base).critical_section.field_0x50,
                     &(this->base).critical_section.mbr_0x14,
                     *(undefined2 *)&(this->base).critical_section.field_0x28,(int)this_00,
                     *(undefined2 *)((int)param_1 + 0x24),
                     *(undefined4 *)&(this->base).critical_section.field_0x40);
          *(undefined *)(*(int *)&(this->base).critical_section.field_0x50 + 0x4164) = 0;
          *(undefined4 *)&(this->base).critical_section.field_0x54 = 2;
          packet::packet((packet *)auStack_2048);
          uStack_4 = 0;
          cls_0x5ac9e0::meth_0x5ac9e0
                    ((cls_0x5ac9e0 *)(auStack_2048 + 0x18),
                     *(int *)&(this->base).critical_section.field_0x50 + 0x1c);
          dStack_2018 = 5;
          uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
          ::debug_stream::printf
                    (_Format,0x20,"[client %u] Sending start request to server at %s\n",
                     (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar2);
          (*(this->base).vftptr_0x0[6].virt_meth_0x59d650_0)(&this->base,(byte)auStack_2048);
          GameClient::meth_0x59c4f0((GameClient *)this,auStack_2048,1,unaff_EDI,unaff_EBP,unaff_EBX)
          ;
          buffer::~buffer((buffer *)auStack_2048);
        }
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::meth_0x59ccf0(client *this)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint unaff_retaddr;
  char local_2088 [64];
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->base).critical_section.field_0x54 == 1) {
    uVar1 = *(uint *)&(this->base).critical_section.field_0x30;
    ExceptionList = &local_c;
    uVar2 = FUN_005b8d00(*(uint *)&(this->base).critical_section.field_0x64,uVar1);
    if (2999 < uVar2) {
      *(uint *)&(this->base).critical_section.field_0x64 = uVar1;
      packet::packet((packet *)local_2048);
      local_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0
                ((cls_0x5ac9e0 *)(local_2048 + 0x18),(int)&(this->base).critical_section.field_0x58)
      ;
      local_2018 = 3;
      uVar3 = cls_0x5ac9e0::meth_0x5acaf0
                        ((cls_0x5ac9e0 *)(local_2048 + 0x18),local_2088,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,8,
                 "[client %u] Sending challenge request to server at %s\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar3);
      (*(this->base).vftptr_0x0[5].virt_meth_0x6162e5_4)(local_2048);
      meth_0x59d630(this,local_2048);
      local_2048._24_4_ = &address__vftable_6647a0_006647a0;
      local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
      if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_2048._20_4_);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::meth_0x59cf10(client *this)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 uVar4;
  uint unaff_ESI;
  uint unaff_retaddr;
  undefined4 in_stack_ffffdf78;
  int in_stack_ffffdf7c;
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  iVar1 = *(int *)&(this->base).critical_section.field_0x50;
  if (0 < *(int *)(iVar1 + 0x10)) {
    uVar3 = *(uint *)(iVar1 + 0x54);
    ExceptionList = &local_c;
    DVar2 = timeGetTime();
    uVar3 = FUN_005b8d00(uVar3,DVar2);
    if (100 < uVar3) {
      packet::packet((packet *)local_2048);
      local_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0
                ((cls_0x5ac9e0 *)(local_2048 + 0x18),
                 *(int *)&(this->base).critical_section.field_0x50 + 0x1c);
      local_2018 = 7;
      uVar4 = cls_0x5ac9e0::meth_0x5acaf0
                        ((cls_0x5ac9e0 *)(local_2048 + 0x18),&stack0xffffdf78,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x80,
                 "[client %u] Sending keepalive to server at %s\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar4);
      (*(this->base).vftptr_0x0[6].virt_meth_0x6162e5_8)(local_2048);
      GameClient::meth_0x59c4f0
                ((GameClient *)this,local_2048,0,unaff_ESI,in_stack_ffffdf78,in_stack_ffffdf7c);
      local_2048._24_4_ = &address__vftable_6647a0_006647a0;
      local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
      if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_2048._20_4_);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::meth_0x59d040(client *this,char param_1)

{
  undefined4 uVar1;
  uint unaff_ESI;
  uint unaff_retaddr;
  undefined4 in_stack_ffffdf78;
  int in_stack_ffffdf7c;
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a80b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (0 < *(int *)(*(int *)&(this->base).critical_section.field_0x50 + 0x10)) {
    ExceptionList = &local_c;
    if (param_1 != '\0') {
      ExceptionList = &local_c;
      packet::packet((packet *)local_2048);
      local_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0
                ((cls_0x5ac9e0 *)(local_2048 + 0x18),
                 *(int *)&(this->base).critical_section.field_0x50 + 0x1c);
      local_2018 = 8;
      uVar1 = cls_0x5ac9e0::meth_0x5acaf0
                        ((cls_0x5ac9e0 *)(local_2048 + 0x18),&stack0xffffdf78,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x10,
                 "[client %u] Sending disconnect to server at %s\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,uVar1);
      (*(this->base).vftptr_0x0[7].virt_meth_0x59d650_0)(&this->base,(byte)local_2048);
      GameClient::meth_0x59c4f0
                ((GameClient *)this,local_2048,2,unaff_ESI,in_stack_ffffdf78,in_stack_ffffdf7c);
      local_4 = 0xffffffff;
      local_2048._24_4_ = &address__vftable_6647a0_006647a0;
      local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
      if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_2048._20_4_);
      }
      local_2048[4] = 0;
      local_2048._20_4_ = (void *)0x0;
    }
    local_4 = 0xffffffff;
    connection::Set_mbr_0x10_to_0(*(connection **)&(this->base).critical_section.field_0x50);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



uint __thiscall net::client::virt_meth_0x59d180(client *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = meth_0x59d930(this);
  uVar2 = meth_0x59cf10(this);
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}



void __thiscall net::client::meth_0x59d1a0(client *this,void *param_1)

{
  undefined4 uVar1;
  uint unaff_EDI;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  switch(*(undefined4 *)((int)param_1 + 0x30)) {
  case 2:
    meth_0x59c560(this,(uint)param_1,unaff_EDI);
    break;
  case 3:
    meth_0x59c9c0(this,param_1);
    break;
  case 4:
    meth_0x59cb40(this,param_1);
    break;
  default:
    uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x1000,
               "[client %u] Receiving out-of-band user packet %u from %s\n",
               (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,
               *(undefined4 *)((int)param_1 + 0x30),uVar1);
    (*(this->base).vftptr_0x0[9].virt_meth_0x6162e5_4)(param_1);
    break;
  case 8:
    meth_0x59c6f0(this,(int)param_1);
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::client::meth_0x59d260(client *this)

{
  cls_0x5ab930 *this_00;
  char cVar1;
  int iVar2;
  
  this_00 = *(cls_0x5ab930 **)&(this->base).critical_section.field_0x50;
  if (0 < *(int *)&this_00->field_0x10) {
    iVar2 = cls_0x5ab930::meth_0x5ab930
                      (this_00,*(int *)&(this->base).critical_section.field_0x40,
                       *(uint *)&(this->base).critical_section.field_0x2c,
                       *(int *)&(this->base).critical_section.field_0x3c);
    if ((char)iVar2 != '\0') {
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x1000000,
                 "[client %u] Server timed out after %u milliseconds.\n",
                 (uint)*(ushort *)&(this->base).critical_section.mbr_0x24,
                 *(undefined4 *)(*(int *)&(this->base).critical_section.field_0x50 + 0x44));
      cVar1 = (*(this->base).vftptr_0x0[9].virt_meth_0x6162e5_8)
                        (*(undefined4 *)(*(int *)&(this->base).critical_section.field_0x50 + 0x44));
      if (cVar1 != '\0') {
        meth_0x59d040(this,'\x01');
      }
    }
  }
  return;
}



void __thiscall net::client::virt_meth_0x59d2d0(client *this)

{
  meth_0x59d5f0(this);
  meth_0x59d260(this);
  meth_0x59c780(this);
  meth_0x59ccf0(this);
  FUN_0059ce10((int *)this);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::client::virt_meth_0x59d300(client *this,void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_EBP;
  void *unaff_ESI;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  undefined local_2048 [20];
  void *local_2034;
  address__vftable_6647a0 *local_2030;
  word local_2024;
  dword local_2014;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a836;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  if (*(int *)((int)param_1 + 0x28) == -1) {
    if (*(int *)((int)param_1 + 0x30) == 1) {
      packet::packet((packet *)local_2048);
      local_4 = 0;
      if (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc)) {
        do {
          packet::meth_0x5ac7b0((packet *)local_2048,param_1);
          cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(local_2048 + 0x18),(int)param_1 + 0x18);
          local_2024 = *(word *)((int)param_1 + 0x24);
          local_2014 = *(dword *)((int)param_1 + 0x34);
          local_2048._12_4_ = 0;
          meth_0x59d1a0(this,local_2048);
        } while (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc));
      }
      local_2030 = &address__vftable_6647a0_006647a0;
      local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
      if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
        _free(local_2034);
      }
    }
    else {
      meth_0x59d1a0(this,param_1);
    }
  }
  else if (1 < *(int *)&(this->base).critical_section.field_0x54) {
    uVar1 = connection::meth_0x5ab8e0
                      (*(connection **)&(this->base).critical_section.field_0x50,(int)param_1 + 0x18
                       ,*(short *)((int)param_1 + 0x24));
    if ((char)uVar1 != '\0') {
      uVar2 = connection::meth_0x5ab7a0
                        (*(connection **)&(this->base).critical_section.field_0x50,param_1,
                         *(uint *)&(this->base).critical_section.field_0x40,unaff_EDI,unaff_ESI,
                         unaff_EBP);
      if ((char)uVar2 != '\0') {
        if (*(int *)((int)param_1 + 0x30) == 1) {
          packet::packet((packet *)local_2048);
          local_4 = 1;
          if (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc)) {
            do {
              packet::meth_0x5ac7b0((packet *)local_2048,param_1);
              cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(local_2048 + 0x18),(int)param_1 + 0x18);
              local_2024 = *(word *)((int)param_1 + 0x24);
              local_2014 = *(dword *)((int)param_1 + 0x34);
              local_2048._12_4_ = 0;
              meth_0x59c7f0(this,local_2048);
            } while (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc));
          }
          buffer::~buffer((buffer *)local_2048);
        }
        else {
          meth_0x59c7f0(this,param_1);
        }
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall net::client::meth_0x59d5d0(client *this)

{
  DWORD DVar1;
  
  *(undefined4 *)&(this->base).critical_section.field_0x40 = 0;
  DVar1 = timeGetTime();
  *(DWORD *)&(this->base).critical_section.field_0x34 = DVar1;
  *(undefined4 *)&(this->base).critical_section.field_0x38 = 0;
  return;
}



void __thiscall net::client::meth_0x59d5f0(client *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)&(this->base).critical_section.field_0x4c != 0) {
    iVar1 = 0;
    do {
      (*(this->base).vftptr_0x0[3].virt_meth_0x6162e5_4)
                (*(int *)&(this->base).critical_section.field_0x44 + iVar1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x2038;
    } while (uVar2 < *(uint *)&(this->base).critical_section.field_0x4c);
  }
  *(undefined4 *)&(this->base).critical_section.field_0x4c = 0;
  return;
}



void __thiscall net::client::meth_0x59d630(client *this,void *param_1)

{
  *(undefined2 *)((int)param_1 + 0x24) = *(undefined2 *)&(this->base).critical_section.field_0x28;
  *(undefined4 *)((int)param_1 + 0x28) = 0xffffffff;
  FUN_005b8f80(&(this->base).critical_section.mbr_0x14,(cls_0x5ac5e0 *)param_1);
  return;
}



void __thiscall net::client::meth_0x59d7f0(client *this)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a8db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = cls_0x5b9100::meth_0x5b9100
                    ((cls_0x5b9100 *)&(this->base).critical_section.mbr_0x14,
                     (void *)(*(int *)&(this->base).critical_section.field_0x4c * 0x2038 +
                             *(int *)&(this->base).critical_section.field_0x44));
  do {
    if (cVar2 == '\0') {
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)
     (*(int *)&(this->base).critical_section.field_0x4c * 0x2038 + 0x34 +
     *(int *)&(this->base).critical_section.field_0x44) =
         *(undefined4 *)&(this->base).critical_section.field_0x30;
    uVar6 = *(uint *)&(this->base).critical_section.field_0x48;
    uVar5 = *(int *)&(this->base).critical_section.field_0x4c + 1;
    *(uint *)&(this->base).critical_section.field_0x4c = uVar5;
    if (uVar6 <= uVar5) {
      puVar1 = *(undefined4 **)&(this->base).critical_section.field_0x44;
      iVar7 = uVar6 * 2;
      *(int *)&(this->base).critical_section.field_0x48 = iVar7;
      piVar3 = (int *)operator_new(uVar6 * 0x4070 + 4);
      local_4 = 0;
      if (piVar3 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = piVar3 + 1;
        *piVar3 = iVar7;
        _eh_vector_constructor_iterator_(piVar4,0x2038,iVar7,packet::packet,buffer::~buffer);
      }
      local_4 = 0xffffffff;
      *(int **)&(this->base).critical_section.field_0x44 = piVar4;
      if (uVar6 != 0) {
        iVar7 = 0;
        do {
          packet::meth_0x5ac630
                    ((packet *)(*(int *)&(this->base).critical_section.field_0x44 + iVar7),
                     iVar7 + (int)puVar1);
          iVar7 = iVar7 + 0x2038;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (puVar1 != (undefined4 *)0x0) {
        if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
          _free(puVar1 + -1);
        }
        (**(code **)*puVar1)(3);
      }
    }
    cVar2 = cls_0x5b9100::meth_0x5b9100
                      ((cls_0x5b9100 *)&(this->base).critical_section.mbr_0x14,
                       (void *)(*(int *)&(this->base).critical_section.field_0x4c * 0x2038 +
                               *(int *)&(this->base).critical_section.field_0x44));
  } while( true );
}



undefined4 __thiscall net::client::meth_0x59d930(client *this)

{
  undefined *puVar1;
  base__vftable_6a1d1c *pbVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte unaff_SI;
  undefined4 unaff_EDI;
  undefined4 *puVar9;
  
  if ((this->base).critical_section.field_0x2a != '\0') {
    pbVar2 = (this->base).vftptr_0x0;
    (this->base).critical_section.field_0x2a = 0;
    (*pbVar2[2].virt_meth_0x6162e5_8)();
  }
  DVar5 = timeGetTime();
  uVar8 = *(uint *)&(this->base).critical_section.field_0x34;
  *(DWORD *)&(this->base).critical_section.field_0x30 = DVar5;
  iVar6 = FUN_005b8d00(uVar8,DVar5);
  uVar3 = *(undefined4 *)&(this->base).critical_section.field_0x30;
  *(int *)&(this->base).critical_section.field_0x38 =
       *(int *)&(this->base).critical_section.field_0x38 + iVar6;
  *(undefined4 *)&(this->base).critical_section.field_0x34 = uVar3;
  meth_0x59d7f0(this);
  uVar8 = *(uint *)&(this->base).critical_section.field_0x3c;
  if (uVar8 == 0) {
    puVar1 = &(this->base).critical_section.field_0x40;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    puVar7 = (*(this->base).vftptr_0x0[3].virt_meth_0x59d650_0)(&this->base,unaff_SI);
    return CONCAT31((int3)((uint)puVar7 >> 8),1);
  }
  uVar4 = (ulonglong)*(uint *)&(this->base).critical_section.field_0x38 / (ulonglong)uVar8;
  puVar7 = (undefined4 *)uVar4;
  if (puVar7 == (undefined4 *)0x0) {
    return (uint)(uint3)(uVar4 >> 8) << 8;
  }
  puVar9 = puVar7;
  if (&DAT_0000000a < puVar7) {
    puVar9 = (undefined4 *)&DAT_0000000a;
  }
  do {
    if (*(uint *)&(this->base).critical_section.field_0x38 <= uVar8) break;
    pbVar2 = (this->base).vftptr_0x0;
    puVar9 = (undefined4 *)((int)puVar9 + -1);
    *(int *)&(this->base).critical_section.field_0x40 =
         *(int *)&(this->base).critical_section.field_0x40 + 1;
    puVar7 = (*pbVar2[3].virt_meth_0x59d650_0)(&this->base,(byte)unaff_EDI);
    uVar8 = *(uint *)&(this->base).critical_section.field_0x3c;
    *(uint *)&(this->base).critical_section.field_0x38 =
         *(int *)&(this->base).critical_section.field_0x38 - uVar8;
  } while (puVar9 != (undefined4 *)0x0);
  return CONCAT31((int3)((uint)puVar7 >> 8),1);
}


#include "../include/client.h"
#include "../include/client.h"
