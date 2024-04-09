#include "../include/GameClient.h"

GameClient * __thiscall GameClient::~GameClient(GameClient *this)

{
  GameClient *pGVar1;
  
  (this->Client).client.base.vftptr_0x0 =
       (base__vftable_6a1d1c *)&GameClient__vftable_664804_00664804;
  pGVar1 = (GameClient *)Client::meth_0x5897d0(&this->Client);
  return pGVar1;
}



void __thiscall GameClient::virt_meth_0x45e7f0(GameClient *this)

{
  GameActionEquip::meth_0x43f5e0
            (*(GameActionEquip **)
              (*(int *)&(this->Client).client.base.critical_section.field_0x9c + 0x18));
  cls_0x41a2b0::meth_0x41c4c0
            (*(cls_0x41a2b0 **)
              (*(int *)&(this->Client).client.base.critical_section.field_0x9c + 0x10));
  CLoadMapInterface::meth_0x458710
            (*(CLoadMapInterface **)
              (*(int *)&(this->Client).client.base.critical_section.field_0x9c + 0x28));
  return;
}



undefined4 * __thiscall GameClient::virt_meth_0x45e830(GameClient *this)

{
  Audio *this_00;
  Audio *pAVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006302ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (Audio *)operator_new(0x4c);
  local_4 = 0;
  pAVar1 = (Audio *)0x0;
  if (this_00 != (Audio *)0x0) {
    Audio::Audio(this_00);
    this_00->vftptr_0x0 = (Audio__vftable_69e2ec *)&GameAudio__vftable_6647e0_006647e0;
    pAVar1 = this_00;
  }
  ExceptionList = local_c;
  return &pAVar1->vftptr_0x0;
}



undefined4 * __thiscall GameClient::virt_meth_0x45e880(GameClient *this)

{
  HotKeys *this_00;
  HotKeys *pHVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006302ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (HotKeys *)operator_new(0x18);
  local_4 = 0;
  pHVar1 = (HotKeys *)0x0;
  if (this_00 != (HotKeys *)0x0) {
    HotKeys::HotKeys(this_00,*(undefined4 *)&(this->Client).client.base.critical_section.field_0x74,
                     *(undefined4 *)&(this->Client).client.base.critical_section.field_0x78);
    this_00->vftptr_0x0 = (HotKeys__vftable_69fd34 *)&GameHotKeys__vftable_6647f4_006647f4;
    pHVar1 = this_00;
  }
  ExceptionList = local_c;
  return &pHVar1->vftptr_0x0;
}



undefined4 * __thiscall GameClient::virt_meth_0x45e8e0(GameClient *this)

{
  GameInterfaces *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006302ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar1 = (GameInterfaces *)operator_new(100);
  local_4 = 0;
  if (pGVar1 != (GameInterfaces *)0x0) {
    pGVar1 = GameInterfaces::GameInterfaces(pGVar1);
    ExceptionList = local_c;
    return &pGVar1->Interfaces;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



int * __thiscall GameClient::virt_meth_0x45e940(GameClient *this)

{
  GameCursorManager *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006302ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar1 = (GameCursorManager *)operator_new(0xb0);
  local_4 = 0;
  if (pGVar1 != (GameCursorManager *)0x0) {
    pGVar1 = GameCursorManager::GameCursorManager(pGVar1);
    ExceptionList = local_c;
    return (int *)pGVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}



int __thiscall GameClient::virt_meth_0x45e9a0(GameClient *this,void *param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte unaff_SI;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (bVar1) {
    puVar2 = (undefined4 *)(*(int *)((int)param_1 + 0x30) + -0x54);
    switch(puVar2) {
    case (undefined4 *)0x0:
    case (undefined4 *)0xc:
    case (undefined4 *)0xd:
    case (undefined4 *)0xf:
    case (undefined4 *)0x10:
    case (undefined4 *)0x13:
      puVar2 = (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)
                         ((base *)this,unaff_SI);
      return CONCAT31((int3)((uint)puVar2 >> 8),1);
    default:
      uVar3 = Client::virt_meth_0x58c380(&this->Client,param_1);
      return uVar3;
    case (undefined4 *)0x2:
    case (undefined4 *)0x3:
    case (undefined4 *)0x4:
    case (undefined4 *)0x14:
      break;
    case (undefined4 *)0x5:
    case (undefined4 *)0x8:
    case (undefined4 *)0xb:
    case (undefined4 *)0xe:
    case (undefined4 *)0x11:
    case (undefined4 *)0x12:
      puVar2 = (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)
                         ((base *)this,unaff_SI);
    }
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  return (uint)extraout_var << 8;
}



void __thiscall GameClient::meth_0x45ef70(GameClient *this,uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  cls_0x616328 *pcVar3;
  cls_0x467240 *this_00;
  void *this_01;
  GameActionEquip *this_02;
  int iVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  int iVar7;
  
  iVar2 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  iVar7 = 0;
  pTVar6 = &GameEntity::RTTI_Type_Descriptor;
  pTVar5 = &Entity::RTTI_Type_Descriptor;
  iVar4 = 0;
  pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_02);
  this_00 = (cls_0x467240 *)FUN_006165e0(pcVar3,iVar4,pTVar5,pTVar6,iVar7);
  this_01 = (void *)FUN_006165e0(*(cls_0x616328 **)
                                  &(this->Client).client.base.critical_section.field_0xac,0,
                                 &CSMenuInterface::RTTI_Type_Descriptor,
                                 &GameCSMenuInterface::RTTI_Type_Descriptor,0);
  if (((iVar2 != 0) && (this_00 != (cls_0x467240 *)0x0)) && (this_01 != (void *)0x0)) {
    cVar1 = cls_0x467240::meth_0x467240(this_00);
    if (cVar1 != '\0') {
      FUN_004357c0(this_01,param_1,param_2);
    }
  }
  return;
}



void __thiscall GameClient::virt_meth_0x45f000(GameClient *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  
  iVar1 = *(int *)&(this->Client).client.base.critical_section.field_0x9c;
  piVar2 = *(int **)(iVar1 + 0x48);
  piVar3 = *(int **)(iVar1 + 0x44);
  iVar1 = *(int *)(*(int *)&(this->Client).client.base.critical_section.field_0x70 + 0x14);
  cVar4 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar2 + 4) + (int)piVar2));
  if (cVar4 != '\0') {
    cVar4 = GameActionOperateContainer::Get_mbr_0x20
                      ((GameActionOperateContainer *)(*(int *)(*piVar3 + 4) + (int)piVar3));
    if ((cVar4 != '\0') || (piVar3[0x13] != 3)) {
      *(undefined *)(iVar1 + 0x40) = 0;
      Client::virt_meth_0x587ee0(&this->Client);
      return;
    }
  }
  *(undefined *)(iVar1 + 0x40) = 1;
  Client::virt_meth_0x587ee0(&this->Client);
  return;
}



int * __thiscall GameClient::virt_meth_0x45f2e0(GameClient *this,byte param_1)

{
  ~GameClient(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x45f370
          (GameClient *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 *param_4)

{
  uint unaff_ESI;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  int in_stack_ffffdfb0;
  undefined local_2048 [12];
  uint local_203c;
  uint local_2038;
  void *local_2034;
  address__vftable_6647a0 *local_2030;
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet((packet *)local_2048);
  local_4 = 0;
  local_2018 = 0x5b;
  net::packet::meth_0x45f130((packet *)local_2048,param_1);
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  net::packet::meth_0x45f0b0((packet *)local_2048,param_3);
  if (local_2048._8_4_ == local_2038) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&stack0xffffdfb0,&DAT_006ddff0);
  }
  *(bool *)(local_203c + (int)local_2034) = param_4 != (undefined4 *)0x0;
  local_203c = local_203c + 1;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  if (param_4 != (undefined4 *)0x0) {
    net::packet::meth_0x45f130((packet *)local_2048,*param_4);
    net::packet::meth_0x45f130((packet *)local_2048,param_4[1]);
    in_stack_ffffdfb0 = param_4[2];
    net::packet::meth_0x45f130((packet *)local_2048,in_stack_ffffdfb0);
  }
  meth_0x59c4f0(this,local_2048,1,unaff_ESI,unaff_EDI,in_stack_ffffdfb0);
  local_2030 = &address__vftable_6647a0_006647a0;
  local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
  if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45f4f0(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45f5d0(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45f6b0(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45f790(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45f870(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45f950(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45fa30(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45fb10(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45fbf0(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45fcd0(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45fdb0(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x45fe90(GameClient *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_3);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x45ff80(GameClient *this,undefined4 param_1)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x460040(GameClient *this,undefined4 param_1)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x460100(GameClient *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_3);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x4601f0(GameClient *this)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x4602a0(GameClient *this)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x460350(GameClient *this)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x460400
          (GameClient *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_3);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_4);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x460500(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x4605e0(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006302cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x460400
          (GameClient *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  int iVar1;
  uint unaff_ESI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  int in_stack_ffffdfbc;
  void *pvStack_2034;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_007062c0;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006302cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  uStack_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_3);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_4);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2034);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x460500(GameClient *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint unaff_ESI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  int in_stack_ffffdfbc;
  void *pvStack_2034;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_007062c0;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006302cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  uStack_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2034);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x4605e0(GameClient *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint unaff_ESI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  int in_stack_ffffdfbc;
  void *pvStack_2034;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_007062c0;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006302cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  uStack_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2034);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(iVar1);
  return;
}



void GameClient::CommandForceEntityStep(int param_1)

{
  dword dVar1;
  int iVar2;
  Map *this;
  int *piVar3;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  double dVar4;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  float fStack_8;
  
  if ((*(int *)(param_1 + 4) == 0) ||
     ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) < 3)) {
    FUN_00497120((byte *)"GameClient::CommandForceEntityStep - Incorrect parameters");
    return;
  }
  dVar1 = (*(GameActionEquip **)(DAT_0070bd90 + 0x2c))->mbr_0xe0;
  if (dVar1 == 0) {
    FUN_00497120((byte *)"GameClient::CommandForceEntityStep - Invalid entity ID");
    return;
  }
  iVar2 = GameActionEquip::meth_0x54be10(*(GameActionEquip **)(DAT_0070bd90 + 0x2c));
  if (iVar2 != 0) {
    if (DAT_0070bd98 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    this = (Map *)(**(code **)(*piVar3 + 0x54))(*(undefined4 *)(iVar2 + 0x1ec));
    if (this != (Map *)0x0) {
      fStack_1c = *(float *)(iVar2 + 4);
      fStack_14 = *(float *)(iVar2 + 0xc);
      iVar2 = __stricmp("up",*(char **)(*(int *)(param_1 + 4) + 4));
      if (iVar2 == 0) {
        dVar4 = _atof(*(char **)(*(int *)(param_1 + 4) + 8));
        fStack_14 = (float)dVar4 + fStack_14;
      }
      else {
        iVar2 = __stricmp("down",*(char **)(*(int *)(param_1 + 4) + 4));
        if (iVar2 == 0) {
          dVar4 = _atof(*(char **)(*(int *)(param_1 + 4) + 8));
          fStack_14 = fStack_14 - (float)dVar4;
        }
        else {
          iVar2 = __stricmp("left",*(char **)(*(int *)(param_1 + 4) + 4));
          if (iVar2 == 0) {
            dVar4 = _atof(*(char **)(*(int *)(param_1 + 4) + 8));
            fStack_1c = fStack_1c - (float)dVar4;
          }
          else {
            iVar2 = __stricmp("right",*(char **)(*(int *)(param_1 + 4) + 4));
            if (iVar2 == 0) {
              dVar4 = _atof(*(char **)(*(int *)(param_1 + 4) + 8));
              fStack_1c = (float)dVar4 + fStack_1c;
            }
          }
        }
      }
      fStack_10 = fStack_1c;
      uStack_c = 0x41200000;
      fStack_8 = fStack_14;
      piVar3 = Map::GetOctree(this);
      iVar2 = (**(code **)(*piVar3 + 0x5c))(&fStack_10,&stack0x00000000,1,0,0);
      if (iVar2 == 1) {
        meth_0x589fd0(*(GameClient **)(DAT_0070bd90 + 0x2c),dVar1,unaff_EDI,fStack_14,unaff_EBP);
      }
      return;
    }
    FUN_00497120((byte *)"GameClient::CommandForceEntityStep - Failed to get map");
    return;
  }
  FUN_00497120((byte *)"GameClient::CommandForceEntityStep - Failed to find entity");
  return;
}



GameClient * __thiscall
GameClient::GameClient(GameClient *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_ESI;
  char *pcVar1;
  char *pcVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006302e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Client::Client(&this->Client,param_1,unaff_ESI);
  pcVar2 = "EscapeMenu";
  local_4 = 0;
  (this->Client).client.base.vftptr_0x0 =
       (base__vftable_6a1d1c *)&GameClient__vftable_664804_00664804;
  RegisterCommand((undefined4 *)"EscapeMenu",CommandEscapeMenu,unaff_ESI);
  pcVar1 = "AttackModeCycle";
  RegisterCommand((undefined4 *)"AttackModeCycle",CommandAttackModeCycle,pcVar2);
  pcVar2 = "AttackModeSelect";
  RegisterCommand((undefined4 *)"AttackModeSelect",DialogueManager::CommandAttackModeSelect,pcVar1);
  pcVar1 = "CharacterRecordWindow";
  RegisterCommand((undefined4 *)"CharacterRecordWindow",DialogueManager::CommandAttackModeSelect,
                  pcVar2);
  pcVar2 = "FeedbackWindow";
  RegisterCommand((undefined4 *)"FeedbackWindow",CommandFeedbackWindow,pcVar1);
  pcVar1 = "GameOptions";
  RegisterCommand((undefined4 *)"GameOptions",CommandGameOptions,pcVar2);
  pcVar2 = "HotKeyOptions";
  RegisterCommand((undefined4 *)"HotKeyOptions",CommandHotKeyOptions,pcVar1);
  RegisterCommand((undefined4 *)"InventoryWindow",CommandInventoryWindow,pcVar2);
  pcVar2 = "LoadGameOptions";
  RegisterCommand((undefined4 *)"LoadGameOptions",CommandLoadGameOptions,unaff_ESI);
  pcVar1 = "MultiplayerOptions";
  RegisterCommand((undefined4 *)"MultiplayerOptions",CommandMultiplayerOptions,pcVar2);
  pcVar2 = "PipBoy";
  RegisterCommand((undefined4 *)"PipBoy",CommandPipBoy,pcVar1);
  pcVar1 = "SneakToggle";
  RegisterCommand((undefined4 *)"SneakToggle",DialogueManager::CommandAttackModeSelect,pcVar2);
  pcVar2 = "UseSkill";
  RegisterCommand((undefined4 *)"UseSkill",CommandUseSkill,pcVar1);
  pcVar1 = "VideoOptions";
  RegisterCommand((undefined4 *)"VideoOptions",CommandVideoOptions,pcVar2);
  pcVar2 = "WeaponLinkToggle";
  RegisterCommand((undefined4 *)"WeaponLinkToggle",DialogueManager::CommandAttackModeSelect,pcVar1);
  RegisterCommand((undefined4 *)"WeaponToggle",CommandWeaponToggle,pcVar2);
  pcVar1 = "ActionbarWindow";
  RegisterCommand((undefined4 *)"ActionbarWindow",CommandActionbarWindow,unaff_ESI);
  pcVar2 = "ForceEntityStep";
  RegisterCommand((undefined4 *)"ForceEntityStep",CommandForceEntityStep,pcVar1);
  pcVar1 = "OptionsWindow";
  RegisterCommand((undefined4 *)"OptionsWindow",CommandOptionsWindow,pcVar2);
  pcVar2 = "TestAnim";
  RegisterCommand((undefined4 *)"TestAnim",CommandTestAnim,pcVar1);
  pcVar1 = "ToggleRain";
  RegisterCommand((undefined4 *)"ToggleRain",CommandToggleRain,pcVar2);
  pcVar2 = "ToggleSnow";
  RegisterCommand((undefined4 *)"ToggleSnow",CommandToggleSnow,pcVar1);
  RegisterCommand((undefined4 *)"ToggleWind",CommandToggleWind,pcVar2);
  ExceptionList = pvStack_c;
  return this;
}



GameDialogueInterface * __thiscall GameClient::virt_meth_0x4613d0(GameClient *this)

{
  char *pcVar1;
  GameDialogueInterface *pGVar2;
  char *pcVar3;
  dword in_stack_ffffffc4;
  uint in_stack_ffffffc8;
  void *pvVar4;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063032b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar2 = (GameDialogueInterface *)FUN_004a7680(0x2b0);
  local_4 = 0;
  if (pGVar2 != (GameDialogueInterface *)0x0) {
    pvVar4 = (void *)(in_stack_ffffffc8 & 0xffffff00);
    pcVar1 = "GameDialogueInterface";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffffc4,"GameDialogueInterface",(uint)(pcVar3 + -0x664be0));
    pGVar2 = GameDialogueInterface::GameDialogueInterface(pGVar2,in_stack_ffffffc4,pvVar4);
    ExceptionList = local_c;
    return pGVar2;
  }
  ExceptionList = local_c;
  return (GameDialogueInterface *)0;
}



undefined4 * __thiscall GameClient::virt_meth_0x461470(GameClient *this)

{
  char *pcVar1;
  CGameFloatingTextInterface *pCVar2;
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
  puStack_8 = &LAB_00630362;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  pCVar2 = (CGameFloatingTextInterface *)FUN_004a7680(0x37588);
  local_4 = 0;
  if (pCVar2 == (CGameFloatingTextInterface *)0x0) {
    pCVar2 = (CGameFloatingTextInterface *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "GameFloatingTextInterface";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"GameFloatingTextInterface",(uint)(pcVar3 + -0x664bf8));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pCVar2 = CGameFloatingTextInterface::CGameFloatingTextInterface(pCVar2,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return (undefined4 *)pCVar2;
}



undefined4 * __thiscall GameClient::virt_meth_0x461530(GameClient *this)

{
  char *pcVar1;
  GameCSMenuInterface *pGVar2;
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
  puStack_8 = &LAB_00630362;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar4 = false;
  ExceptionList = &local_c;
  pGVar2 = (GameCSMenuInterface *)FUN_004a7680(0x1b18);
  local_4 = 0;
  if (pGVar2 == (GameCSMenuInterface *)0x0) {
    pGVar2 = (GameCSMenuInterface *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "GameCSMenuInterface";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"GameCSMenuInterface",(uint)(pcVar3 + -0x664c14));
    bVar4 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    pGVar2 = GameCSMenuInterface::GameCSMenuInterface(pGVar2,local_28,1);
  }
  if ((bVar4) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return (undefined4 *)pGVar2;
}



void __thiscall GameClient::meth_0x4615f0(GameClient *this,int param_1)

{
  cls_0x558740 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  _String_base *p_Var5;
  GameActionEquip *this_01;
  uint unaff_retaddr;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined local_a4 [12];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined *local_88;
  undefined auStack_6c [92];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00630378;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  iVar4 = *(int *)(DAT_0070bd90 + 0x2c);
  if (*(int *)(param_1 + 8) == 0) {
    this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
    if (((this_00 != (cls_0x558740 *)0x0) &&
        (ExceptionList = &local_c,
        cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_b0,&local_a8),
        (*(byte *)(param_1 + 4) & 2) != 0)) &&
       (piVar3 = (int *)cls_0x581190::meth_0x581190
                                  (*(cls_0x581190 **)
                                    &(this->Client).client.base.critical_section.field_0x70),
       piVar3 != (int *)0x0)) {
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      local_8c = 0x7f7fffff;
      local_88 = &LAB_004adc20;
      (**(code **)(*piVar3 + 0x1c))();
      if (DAT_0070bd98 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(DAT_0070bd98 + 0xc);
      }
      piVar3 = (int *)(**(code **)(*piVar3 + 0xc))();
      if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0x58))(local_a4), iVar4 != 0)) {
        FUN_00616d8c(auStack_6c + 0x1c,(byte *)"X: %f Y: %f Z: %f");
        p_Var5 = (_String_base *)
                 cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_6c,auStack_6c + 0x1c);
        uStack_4 = 0;
        cls_0x558740::meth_0x5583e0(this_00,p_Var5,0x40,0x40,(void *)0x40);
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_6c);
      }
    }
  }
  else if ((*(int *)(param_1 + 8) == 2) && (*(int *)(param_1 + 0x20) == 0)) {
    ExceptionList = &local_c;
    (*(this->Client).client.base.vftptr_0x0[0x11].virt_meth_0x6162e5_8)();
    if (*(int *)&(this->Client).client.base.critical_section.field_0xd8 == 0) {
      iVar4 = *(int *)&(this->Client).client.base.critical_section.field_0xdc;
      if ((*(byte *)(param_1 + 4) & 1) == 0) {
        if ((iVar4 != 0) && ((this->Client).client.base.critical_section.field_0xe4 != '\0')) {
          meth_0x58a0e0(this,*(undefined4 *)&(this->Client).client.base.critical_section.field_0xdc,
                        *(undefined4 *)&(this->Client).client.base.critical_section.field_0xe8,
                        *(undefined4 *)&(this->Client).client.base.critical_section.field_0xec,
                        *(undefined4 *)&(this->Client).client.base.critical_section.field_0xf0);
        }
      }
      else {
        if (iVar4 == 0) {
          puVar2 = cls_0x401b00::meth_0x4014f0((cls_0x401b00 *)&DAT_0070be08,&uStack_ac);
          for (puVar2 = (undefined4 *)*puVar2; puVar2 != DAT_0070be0c;
              puVar2 = (undefined4 *)*puVar2) {
            iVar4 = *(int *)(puVar2[2] + 0x1e4);
            if ((iVar4 != 0) && (iVar4 == *(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0xbc))) {
              *(undefined4 *)&(this->Client).client.base.critical_section.field_0xdc =
                   *(undefined4 *)(puVar2[2] + 0x1dc);
              break;
            }
          }
        }
        if (*(int *)&(this->Client).client.base.critical_section.field_0xdc != 0) {
          meth_0x589fd0(this,*(undefined4 *)&(this->Client).client.base.critical_section.field_0xdc,
                        *(undefined4 *)&(this->Client).client.base.critical_section.field_0xe8,
                        *(undefined4 *)&(this->Client).client.base.critical_section.field_0xec,
                        *(undefined4 *)&(this->Client).client.base.critical_section.field_0xf0);
        }
      }
    }
    else {
      iVar1 = GameActionEquip::meth_0x54be10(this_01);
      if ((iVar1 != 0) &&
         (*(int *)(iVar1 + 0x1e4) == *(int *)&(this->Client).client.base.critical_section.field_0xb8
         )) {
        iVar1 = *(int *)&(this->Client).client.base.critical_section.field_0xd8;
        *(int *)&(this->Client).client.base.critical_section.field_0xdc = iVar1;
        cls_0x41a2b0::meth_0x41c9d0(*(cls_0x41a2b0 **)(*(int *)(iVar4 + 0xa0) + 0x10),iVar1);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameClient::virt_meth_0x4618f0(GameClient *this)

{
  DialogueManager *this_00;
  
  Client::virt_meth_0x58f010(&this->Client);
  this_00 = *(DialogueManager **)
             (*(int *)&(this->Client).client.base.critical_section.field_0x9c + 4);
  DialogueManager::CommandAttackModeSelect(this_00);
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             ((int)&this_00->vftptr_0x0 + (int)this_00->vftptr_0x0->virt_meth_0x404b70_4),0);
  GameActionOperateContainer::meth_0x4952a0
            ((GameActionOperateContainer *)
             ((int)&this_00->vftptr_0x0 + (int)this_00->vftptr_0x0->virt_meth_0x404b70_4));
  FUN_00460d60();
  return;
}



void __thiscall GameClient::recv_packet(GameClient *this,int *param_1)

{
  cls_0x46a8e0 *this_00;
  GameActionOperateContainer *this_01;
  cls_0x558740 *this_02;
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  GameActionEquip *pGVar5;
  cls_0x412c10 *this_03;
  cls_0x616328 *pcVar6;
  cls_0x412c70 *this_04;
  GameAmmo *pGVar7;
  undefined4 uVar8;
  cls_0x50db20 *pcVar9;
  int *piVar10;
  void *pvVar11;
  GameActionEquip *this_05;
  GameActionEquip *this_06;
  GameActionEquip *this_07;
  GameActionEquip *this_08;
  GameActionEquip *this_09;
  GameActionEquip *this_10;
  GameActionEquip *this_11;
  GameActionEquip *this_12;
  GameActionEquip *this_13;
  GameActionEquip *this_14;
  byte unaff_BL;
  TaskEntry *unaff_ESI;
  uint unaff_retaddr;
  TypeDescriptor *pTVar12;
  TypeDescriptor *pTVar13;
  byte bVar14;
  char *pcVar15;
  GameActionEquip *pGStack_170;
  undefined auStack_16c [7];
  byte bStack_165;
  void *pvStack_164;
  byte bStack_15e;
  byte bStack_15d;
  undefined4 uStack_15c;
  undefined auStack_158 [20];
  dword dStack_144;
  dword dStack_140;
  char acStack_13c [12];
  cls_0x4d8d70 acStack_130 [5];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006303df;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (param_1[0xc] == 0x29) {
    pcVar15 = "Game Client - Received GAME_ID_ITEM_EQUIP.\n";
LAB_00461a62:
    ExceptionList = &pvStack_c;
    FUN_00497120((byte *)pcVar15);
  }
  else {
    ExceptionList = &pvStack_c;
    if (param_1[0xc] == 0x2a) {
      pcVar15 = "Game Client - Received GAME_ID_ITEM_UNEQUIP.\n";
      goto LAB_00461a62;
    }
  }
  bVar14 = 0x75;
  puVar2 = (*(this->Client).client.base.vftptr_0x0[0x11].virt_meth_0x59d650_0)
                     ((base *)this,(byte)param_1);
  if ((char)puVar2 == '\0') {
    switch(param_1[0xc]) {
    case 0x32:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      iVar4 = GameActionEquip::meth_0x54be10(this_09);
      iVar3 = GameActionEquip::meth_0x54be10((GameActionEquip *)auStack_16c._0_4_);
      if ((iVar4 == 0) || (iVar3 == 0)) {
        FUN_00497120((byte *)"ENGINE_ID_ITEM_REMOVE - Unable to find entity or the ammo.\n");
      }
      else {
        piVar10 = (int *)FUN_006165e0(*(cls_0x616328 **)(iVar4 + 0x168),0,
                                      &Inventory::RTTI_Type_Descriptor,
                                      &GameInventory::RTTI_Type_Descriptor,0);
        if (piVar10 == (int *)0x0) {
          FUN_00497120((byte *)
                       "ENGINE_ID_ITEM_REMOVE - Unable to retrieve the inventory in question.\n");
        }
        else {
          (**(code **)(*piVar10 + 8))(iVar3);
        }
      }
      break;
    default:
      Client::virt_meth_0x58c660(&this->Client,param_1);
      break;
    case 0x55:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&uStack_15c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_164);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      pcVar6 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_05);
      if (pcVar6 == (cls_0x616328 *)0x0) {
        FUN_00497120((byte *)"Couldn\'t find target entity %d");
      }
      else {
        iVar4 = FUN_006165e0(pcVar6,0,&Entity::RTTI_Type_Descriptor,
                             &GameEntity::RTTI_Type_Descriptor,0);
        if (iVar4 == 0) {
          if (pcVar6[0x76].mbr_0x0 < 0x10) {
            FUN_00497120((byte *)"Target entity wasn\'t a game entity %s");
          }
          else {
            FUN_00497120((byte *)"Target entity wasn\'t a game entity %s");
          }
        }
        else {
          __itoa((int)pvStack_164,acStack_13c,10);
          cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_158,acStack_13c);
          uStack_4 = 0;
          meth_0x587a70(this);
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_16c);
        }
      }
      break;
    case 0x56:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      FUN_0045e560(param_1,&pvStack_164);
      iVar3 = 0;
      pTVar13 = &GameEntity::RTTI_Type_Descriptor;
      pTVar12 = &Entity::RTTI_Type_Descriptor;
      iVar4 = 0;
      pcVar6 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(pGStack_170);
      iVar4 = FUN_006165e0(pcVar6,iVar4,pTVar12,pTVar13,iVar3);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x90) = auStack_16c._0_4_;
        *(void **)(iVar4 + 0x94) = pvStack_164;
      }
      break;
    case 0x57:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      iVar3 = 0;
      pTVar13 = &GameEntity::RTTI_Type_Descriptor;
      pTVar12 = &Entity::RTTI_Type_Descriptor;
      iVar4 = 0;
      pcVar6 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_11);
      iVar4 = FUN_006165e0(pcVar6,iVar4,pTVar12,pTVar13,iVar3);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x20) = auStack_16c._0_4_;
      }
      break;
    case 0x58:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      iVar3 = 0;
      pTVar13 = &GameEntity::RTTI_Type_Descriptor;
      pTVar12 = &Entity::RTTI_Type_Descriptor;
      iVar4 = 0;
      pcVar6 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(pGStack_170);
      pGVar5 = (GameActionEquip *)FUN_006165e0(pcVar6,iVar4,pTVar12,pTVar13,iVar3);
      if (pGVar5 != (GameActionEquip *)0x0) {
        GameActionEquip::meth_0x4629c0(pGVar5,auStack_16c._0_4_);
      }
      break;
    case 0x59:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      pcVar6 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_10);
      pGVar5 = (GameActionEquip *)
               FUN_006165e0(pcVar6,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor
                            ,0);
      GameActionEquip::meth_0x463b70(pGVar5,auStack_16c._0_4_);
    case 0x65:
      (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_BL);
      break;
    case 0x5c:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_164);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      iVar4 = FUN_00408110(auStack_16c._0_4_,(int)pGStack_170);
      if (iVar4 == 0) {
        handle_fatal_error(
                          "GameClient::recv_packet() - Unable to look up ammo. Caliber %d, modifier %d"
                          );
      }
      auStack_16c._0_4_ = operator_new(0x7b0);
      if ((GameActionEquip *)auStack_16c._0_4_ == (GameActionEquip *)0x0) {
        pGVar7 = (GameAmmo *)0x0;
      }
      else {
        pGVar7 = GameAmmo::GameAmmo((GameAmmo *)auStack_16c._0_4_,1);
      }
      unaff_retaddr = 0xffffffff;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4;
      }
      (**(code **)(*(int *)((int)&(pGVar7->GameItem).GameEntity.mbr_0x4 +
                           *(int *)((pGVar7->GameItem).GameEntity.mbr_0x4 + 4)) + 0x28))(iVar4);
      iVar3 = 0;
      pTVar13 = &GameEntity::RTTI_Type_Descriptor;
      pTVar12 = &Entity::RTTI_Type_Descriptor;
      iVar4 = 0;
      pcVar6 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_13);
      iVar4 = FUN_006165e0(pcVar6,iVar4,pTVar12,pTVar13,iVar3);
      if (iVar4 == 0) {
        FUN_00497120((byte *)
                     "GameClient - GAME_ID_ENTITY_ADD_AMMO_FROM_CACHE - ownerID is not a valid entity ID.\n"
                    );
      }
      else {
        (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + 4) + 4) + 0x16c + iVar4) + 4))
                  ((int)&(pGVar7->GameItem).GameEntity.mbr_0x4 +
                   *(int *)((pGVar7->GameItem).GameEntity.mbr_0x4 + 4));
      }
      break;
    case 0x5e:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_164);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      iVar3 = 0;
      pTVar13 = &GameEntity::RTTI_Type_Descriptor;
      pTVar12 = &Entity::RTTI_Type_Descriptor;
      iVar4 = 0;
      pcVar6 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_14);
      pcVar6 = (cls_0x616328 *)FUN_006165e0(pcVar6,iVar4,pTVar12,pTVar13,iVar3);
      pvVar11 = (void *)FUN_006165e0(pcVar6,0,&GameEntity::RTTI_Type_Descriptor,
                                     &GameCreature::RTTI_Type_Descriptor,0);
      if (pvVar11 == (void *)0x0) {
        FUN_00497120((byte *)
                     "GameNetwork::GAME_ID_ENTITY_PERK_SET - Unable to find the entity needed.\n");
      }
      else {
        FUN_0040a370(pvVar11,(int)pvStack_164,auStack_16c._0_4_);
        (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_BL);
      }
      break;
    case 0x5f:
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,&bStack_165);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_164);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&uStack_15c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      iVar4 = GameActionEquip::meth_0x54be10(this_06);
      iVar3 = GameActionEquip::meth_0x54be10(this_07);
      iVar3 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar3 + 0x168),auStack_16c._0_4_);
      if (bStack_165 == 0) {
        bVar14 = 1;
        (**(code **)(**(int **)(iVar4 + 0x168) + 0x38))(iVar3,pGStack_170);
        (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
        break;
      }
      (**(code **)(**(int **)(iVar4 + 0x168) + 4))();
      bVar14 = (byte)iVar3;
    case 0x54:
    case 100:
      (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x60:
      GameActionEquip::meth_0x45e460((GameActionEquip *)param_1,&bStack_165);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      iVar4 = GameActionEquip::meth_0x54be10(pGStack_170);
      pGVar5 = (GameActionEquip *)auStack_16c._0_4_;
      bVar14 = (byte)pGStack_170;
      this_00 = *(cls_0x46a8e0 **)(iVar4 + 0x168);
      iVar4 = GameActionEquip::meth_0x54be10(this_08);
      if (iVar4 == 0) {
        iVar4 = cls_0x46a8e0::meth_0x55fea0(this_00,(int)pGVar5);
        bVar14 = (byte)pGVar5;
      }
      if (bStack_165 == 0) {
        bVar14 = (byte)iVar4;
        (**(code **)(*(int *)this_00 + 0x3c))();
      }
      (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x61:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      piVar10 = (int *)FUN_00401130();
      bVar14 = 0xc9;
      pcVar6 = (cls_0x616328 *)(**(code **)(*piVar10 + 0x78))();
      pvVar11 = (void *)FUN_006165e0(pcVar6,0,&Journal::RTTI_Type_Descriptor,
                                     &GameJournal::RTTI_Type_Descriptor,0);
      FUN_0046c7a0(pvVar11,(TaskStatus *)pGStack_170,(dword)unaff_ESI);
      (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x62:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      piVar10 = (int *)FUN_00401130();
      bVar14 = 0x21;
      pcVar6 = (cls_0x616328 *)(**(code **)(*piVar10 + 0x78))();
      pvVar11 = (void *)FUN_006165e0(pcVar6,0,&Journal::RTTI_Type_Descriptor,
                                     &GameJournal::RTTI_Type_Descriptor,0);
      FUN_0046c840(pvVar11,(TaskStatus *)pGStack_170,(dword)unaff_ESI);
      (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 99:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      piVar10 = (int *)FUN_00401130();
      bVar14 = 0x76;
      pcVar6 = (cls_0x616328 *)(**(code **)(*piVar10 + 0x78))();
      pvVar11 = (void *)FUN_006165e0(pcVar6,0,&Journal::RTTI_Type_Descriptor,
                                     &GameJournal::RTTI_Type_Descriptor,0);
      FUN_0046c6c0(pvVar11,(TaskEntry *)pGStack_170,unaff_ESI);
      (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,bVar14);
      break;
    case 0x66:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_164);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      pcVar6 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_12);
      if (pcVar6 == (cls_0x616328 *)0x0) {
        FUN_00497120((byte *)"GAME_ID_WEAPON_SET_PRIMARY_AMMO - Unable to look up entity ID.\n");
      }
      else {
        this_03 = (cls_0x412c10 *)
                  FUN_006165e0(pcVar6,0,&Entity::RTTI_Type_Descriptor,
                               &GameWeapon::RTTI_Type_Descriptor,0);
        if (this_03 == (cls_0x412c10 *)0x0) {
          FUN_00497120((byte *)
                       "GAME_ID_WEAPON_SET_PRIMARY_AMMO - ID doesn\'t belong to a weapon. \n");
        }
        else {
          cls_0x412c10::meth_0x412c10(this_03,(int)pvStack_164,auStack_16c._0_4_);
          (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_BL);
        }
      }
      break;
    case 0x67:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pvStack_164);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,(undefined4 *)auStack_16c);
      pcVar6 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(pGStack_170);
      if ((pcVar6 == (cls_0x616328 *)0x0) ||
         (this_04 = (cls_0x412c70 *)
                    FUN_006165e0(pcVar6,0,&Entity::RTTI_Type_Descriptor,
                                 &GameWeapon::RTTI_Type_Descriptor,0),
         this_04 == (cls_0x412c70 *)0x0)) {
        FUN_00497120((byte *)"GAME_ID_WEAPON_SET_SECONDARY_AMMO - Unable to look up entity.\n");
      }
      else {
        cls_0x412c70::meth_0x412c70(this_04,(int)pvStack_164,auStack_16c._0_4_);
        (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_BL);
      }
      break;
    case 0x68:
      FUN_0045e6c0();
      break;
    case 0x69:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&acStack_130[0].mbr_0x1c);
      FUN_00461960();
      (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_BL);
      break;
    case 0x6c:
      GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_1,&acStack_130[0].mbr_0x1c);
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      this_01 = *(GameActionOperateContainer **)
                 (*(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0xa0) + 0x34);
      cVar1 = GameActionOperateContainer::Get_mbr_0x20(this_01);
      if (cVar1 != '\0') {
        GameActionOperateContainer::meth_0x459e70(this_01,(int)&acStack_130[0].mbr_0x1c);
        CLoadMapInterface::meth_0x495220((CLoadMapInterface *)this_01,0);
        GameActionOperateContainer::meth_0x4952a0(this_01);
        cls_0x4b28a0::meth_0x4b4f00((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(int)this_01);
        *(undefined *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x108) = 1;
      }
      (*(this->Client).client.base.vftptr_0x0[10].virt_meth_0x59d650_0)((base *)this,unaff_BL);
      break;
    case 0x6d:
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&pGStack_170);
      GameActionEquip::meth_0x45e4c0((GameActionEquip *)param_1,&bStack_15d);
      GameActionEquip::meth_0x45e4c0((GameActionEquip *)param_1,&bStack_15e);
      GameActionEquip::meth_0x45e4c0((GameActionEquip *)param_1,&bStack_165);
      this_02 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
      if (this_02 != (cls_0x558740 *)0x0) {
        dStack_140 = 0xf;
        dStack_144 = 0;
        auStack_158[4] = 0;
        uStack_4 = 2;
        uVar8 = FUN_0056c280((int)pGStack_170,(_String_base *)auStack_158);
        if ((char)uVar8 != '\0') {
          pcVar9 = ::cls_0x50db20::cls_0x50db20
                             ((cls_0x50db20 *)acStack_130,(_String_base *)auStack_158);
          uStack_4 = CONCAT31(uStack_4._1_3_,3);
          cls_0x558740::meth_0x5583e0
                    (this_02,(_String_base *)pcVar9,(uint)bStack_15d,(uint)bStack_15e,
                     (void *)(uint)bStack_165);
          cls_0x4d8d70::meth_0x4b2dd0(acStack_130);
        }
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_158);
      }
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameClient::meth_0x587a60(GameClient *this)

{
                    /* WARNING: Could not recover jumptable at 0x00587a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)&(this->Client).client.base.critical_section.field_0xa8)();
  return;
}



void __thiscall GameClient::meth_0x587a70(GameClient *this)

{
                    /* WARNING: Could not recover jumptable at 0x00587a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)&(this->Client).client.base.critical_section.field_0xa8 + 4))();
  return;
}



uint __thiscall GameClient::meth_0x587ac0(GameClient *this,undefined4 *param_1)

{
  uint in_EAX;
  
  if ((this->Client).client.base.critical_section.field_0xe4 == '\0') {
    return in_EAX & 0xffffff00;
  }
  *param_1 = *(undefined4 *)&(this->Client).client.base.critical_section.field_0xe8;
  param_1[1] = *(undefined4 *)&(this->Client).client.base.critical_section.field_0xec;
  param_1[2] = *(undefined4 *)&(this->Client).client.base.critical_section.field_0xf0;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x589820
          (GameClient *this,int param_1,undefined4 param_2,undefined4 *param_3,undefined param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  int iVar5;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (bVar2) {
    net::packet::packet(local_2048);
    local_4 = 0;
    local_2048[0].mbr_0x30 = 9;
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      puVar4 = (undefined4 *)(param_1 + 4);
    }
    else {
      puVar4 = *(undefined4 **)(param_1 + 4);
    }
    puVar3 = puVar4;
    do {
      cVar1 = *(char *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    } while (cVar1 != '\0');
    net::packet::meth_0x45f1b0(local_2048,puVar4,(uint)((int)puVar3 + (1 - ((int)puVar4 + 1))));
    net::packet::meth_0x45f130(local_2048,param_2);
    net::packet::meth_0x45f130(local_2048,*param_3);
    net::packet::meth_0x45f130(local_2048,param_3[1]);
    iVar5 = param_3[2];
    net::packet::meth_0x45f130(local_2048,iVar5);
    net::packet::meth_0x46cfb0(local_2048,param_4);
    meth_0x59c4f0(this,local_2048,1,unaff_ESI,unaff_EDI,iVar5);
    local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
    local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
    if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_2048[0].buffer.mbr_0x14);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x589980(GameClient *this,undefined4 param_1)

{
  int iVar1;
  bool bVar2;
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
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (bVar2) {
    net::packet::packet((packet *)&stack0xffffdfb8);
    local_4 = 0;
    net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
    meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
    if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2034);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x589a50(GameClient *this,undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  byte local_2044;
  void *local_2034;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar2 = DAT_007062c0;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar3 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (bVar3) {
    net::packet::packet((packet *)&stack0xffffdfb8);
    local_4 = 0;
    net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
    if (*(uint *)(param_2 + 0x18) < 0x10) {
      puVar5 = (undefined4 *)(param_2 + 4);
    }
    else {
      puVar5 = *(undefined4 **)(param_2 + 4);
    }
    puVar4 = puVar5;
    do {
      cVar1 = *(char *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (cVar1 != '\0');
    net::packet::meth_0x45f1b0
              ((packet *)&stack0xffffdfb8,puVar5,(uint)((int)puVar4 + (1 - ((int)puVar5 + 1))));
    meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,unaff_EDI,(int)in_stack_ffffdfb8);
    if (local_2044 != 0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2034);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar2);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x589b60
          (GameClient *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined param_5)

{
  uint unaff_ESI;
  uint unaff_retaddr;
  undefined4 in_stack_ffffdfb0;
  int in_stack_ffffdfb4;
  undefined local_2048 [12];
  uint local_203c;
  uint local_2038;
  void *local_2034;
  address__vftable_6647a0 *local_2030;
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet((packet *)local_2048);
  local_4 = 0;
  local_2018 = 0x1a;
  net::packet::meth_0x45f130((packet *)local_2048,param_1);
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  net::packet::meth_0x45f130((packet *)local_2048,param_3);
  net::packet::meth_0x588d30((packet *)local_2048,(undefined2)param_4);
  if (local_2048._8_4_ == local_2038) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&stack0xffffdfb0,&DAT_006ddff0);
  }
  *(undefined *)(local_203c + (int)local_2034) = param_5;
  local_203c = local_203c + 1;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  meth_0x59c4f0(this,local_2048,1,unaff_ESI,in_stack_ffffdfb0,in_stack_ffffdfb4);
  local_2030 = &address__vftable_6647a0_006647a0;
  local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
  if (local_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x589cb0(GameClient *this)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
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
  pcVar2 = "White Ford Test Dialogue";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  net::packet::meth_0x45f1b0
            ((packet *)&stack0xffffdfb8,(undefined4 *)"White Ford Test Dialogue",
             (uint)(pcVar3 + -0x69c8f3));
  meth_0x59c4f0(this,&stack0xffffdfb8,0,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x589e50(GameClient *this)

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
  meth_0x59c4f0(this,&stack0xffffdfb8,0,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x589f00(GameClient *this)

{
  int iVar1;
  bool bVar2;
  uint unaff_ESI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  byte bVar3;
  int in_stack_ffffdfbc;
  void *pvStack_2034;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar1 = DAT_007062c0;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (bVar2) {
    net::packet::packet((packet *)&stack0xffffdfb8);
    local_4 = 0;
    meth_0x59c4f0(this,&stack0xffffdfb8,0,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
    bVar3 = (byte)in_stack_ffffdfbc;
    (**(code **)(**(int **)&(this->Client).client.base.critical_section.field_0x9c + 0x10))(1);
    if (bVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_2034);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x589fd0
          (GameClient *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  int iVar1;
  uint unaff_ESI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  byte local_2044;
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
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_3);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_4);
  meth_0x59c4f0(this,&stack0xffffdfb8,0,unaff_ESI,param_4,(int)in_stack_ffffdfb8);
  if (local_2044 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x58a0e0
          (GameClient *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  int iVar1;
  uint unaff_ESI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  byte local_2044;
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
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_3);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_4);
  meth_0x59c4f0(this,&stack0xffffdfb8,0,unaff_ESI,param_4,(int)in_stack_ffffdfb8);
  if (local_2044 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x58a1f0(GameClient *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  byte local_2044;
  void *local_2034;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar2 = DAT_007062c0;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = 0;
  puVar3 = param_1;
  do {
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0
            ((packet *)&stack0xffffdfb8,param_1,(uint)((int)puVar3 + (1 - ((int)param_1 + 1))));
  meth_0x59c4f0(this,&stack0xffffdfb8,0,unaff_EDI,unaff_ESI,(int)in_stack_ffffdfb8);
  if (local_2044 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar2);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x58a2d0(GameClient *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_3);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x58a3c0(GameClient *this,undefined4 param_1,undefined4 param_2)

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
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameClient::meth_0x58a2d0(GameClient *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint unaff_ESI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  int in_stack_ffffdfbc;
  void *pvStack_2034;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_007062c0;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  uStack_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_3);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2034);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x58a3c0(GameClient *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint unaff_ESI;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  int in_stack_ffffdfbc;
  void *pvStack_2034;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_007062c0;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639c2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  uStack_4 = 0;
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_1);
  net::packet::meth_0x45f130((packet *)&stack0xffffdfb8,param_2);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_ESI,in_stack_ffffdfb8,in_stack_ffffdfbc);
  if ((byte)in_stack_ffffdfbc != 0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2034);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(iVar1);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameClient::meth_0x58a9a0(GameClient *this,undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined4 **ppuVar4;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  buffer__vftable_6648e8 *in_stack_ffffdfb8;
  byte local_2044;
  void *local_2034;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar2 = DAT_007062c0;
  puStack_8 = &LAB_00639c53;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  net::packet::packet((packet *)&stack0xffffdfb8);
  local_4 = CONCAT31(local_4._1_3_,1);
  ppuVar4 = (undefined4 **)param_2;
  if (in_stack_0000001c < 0x10) {
    ppuVar4 = &param_2;
  }
  ppuVar3 = ppuVar4;
  do {
    cVar1 = *(char *)ppuVar3;
    ppuVar3 = (undefined4 **)((int)ppuVar3 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0
            ((packet *)&stack0xffffdfb8,ppuVar4,(uint)((int)ppuVar3 + (1 - ((int)ppuVar4 + 1))));
  net::packet::meth_0x45f0b0((packet *)&stack0xffffdfb8,in_stack_00000020);
  meth_0x59c4f0(this,&stack0xffffdfb8,1,unaff_EDI,unaff_ESI,(int)in_stack_ffffdfb8);
  if (local_2044 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2034);
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  FUN_00616e15(iVar2);
  return;
}



void __thiscall
GameClient::meth_0x59c4f0
          (GameClient *this,void *param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_1 + 0x18),local_44,0x40,'\x01');
  debug_stream::printf
            (&(this->Client).client.base.critical_section.field_0x8,1,
             "[client %u] Sending packet to server at %s\n",
             (uint)*(ushort *)&(this->Client).client.base.critical_section.mbr_0x24,uVar1);
  net::connection::meth_0x5ac450
            (*(connection **)&(this->Client).client.base.critical_section.field_0x50,param_1,param_2
            );
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}


#include "../include/GameClient.h"
