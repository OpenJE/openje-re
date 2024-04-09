#include "../include/GameServer.h"

GameServer * __thiscall GameServer::~GameServer(GameServer *this)

{
  GameServer *pGVar1;
  
  (this->Server).server.base.vftptr_0x0 =
       (base__vftable_6a1d1c *)&GameServer__vftable_667dd4_00667dd4;
  pGVar1 = (GameServer *)Server::meth_0x5553c0(&this->Server);
  return pGVar1;
}



void __thiscall GameServer::virt_meth_0x46ceb0(GameServer *this)

{
  if ((undefined4 *)this->mbr_0x70f0 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x70f0)(1);
    this->mbr_0x70f0 = 0;
  }
  if ((undefined4 *)this->mbr_0x70f8 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x70f8)(1);
    this->mbr_0x70f8 = 0;
  }
  if ((undefined4 *)this->mbr_0x7100 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x7100)(1);
    this->mbr_0x7100 = 0;
  }
  Server::virt_meth_0x552c70(&this->Server);
  return;
}



void __thiscall GameServer::meth_0x46cf10(GameServer *this,int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_006165e0(*(cls_0x616328 **)(param_1 + 0x168),0,
                               &Inventory::RTTI_Type_Descriptor,&GameInventory::RTTI_Type_Descriptor
                               ,0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(param_2);
  }
  Server::meth_0x553b00
            (&this->Server,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_2 + 0x1dc),0);
  return;
}



undefined4 * __thiscall GameServer::virt_meth_0x46d000(GameServer *this,byte param_1)

{
  ~GameServer(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x46d020(GameServer *this,undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063087b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x55;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  net::packet::meth_0x45f130(local_2048,param_3);
  meth_0x5a0a00(this,local_2048,1);
  FUN_00497120((byte *)"Server - Sending GAME_ID_ENTITY_DAMAGE.\n");
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x46d110
          (GameServer *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined param_5)

{
  uint unaff_retaddr;
  overflow__vftable_6647c4 *local_2050;
  char *local_204c;
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
  puStack_8 = &LAB_0063087b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet((packet *)local_2048);
  local_4 = 0;
  local_2018 = 0x5f;
  if (local_2048._8_4_ == local_2038) {
    local_204c = "Buffer overflow.";
    local_2050 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2050,&DAT_006ddff0);
  }
  *(undefined *)(local_203c + (int)local_2034) = param_5;
  local_203c = local_203c + 1;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  net::packet::meth_0x45f130((packet *)local_2048,param_1);
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  net::packet::meth_0x45f130((packet *)local_2048,param_3);
  net::packet::meth_0x45f130((packet *)local_2048,param_4);
  meth_0x5a0a00(this,local_2048,1);
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

void __thiscall
GameServer::meth_0x46d260(GameServer *this,undefined4 param_1,undefined4 param_2,undefined param_3)

{
  uint unaff_retaddr;
  overflow__vftable_6647c4 *local_2050;
  char *local_204c;
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
  puStack_8 = &LAB_0063087b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet((packet *)local_2048);
  local_4 = 0;
  local_2018 = 0x60;
  if (local_2048._8_4_ == local_2038) {
    local_204c = "Buffer overflow.";
    local_2050 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2050,&DAT_006ddff0);
  }
  *(undefined *)(local_203c + (int)local_2034) = param_3;
  local_203c = local_203c + 1;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  net::packet::meth_0x45f130((packet *)local_2048,param_1);
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  meth_0x5a0a00(this,local_2048,1);
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

void __thiscall GameServer::meth_0x46d390(GameServer *this,undefined4 param_1,undefined4 param_2)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063087b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x59;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x46d560(GameServer *this,undefined4 param_1,uint param_2)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063087b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x68;
  meth_0x5a0a00(this,local_2048,1);
  FUN_00497120((byte *)"Server - Sending GAME_ID_INTERFACE_HIDE\n");
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x46d700(GameServer *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063087b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x66;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f0b0(local_2048,param_2);
  net::packet::meth_0x45f130(local_2048,param_3);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x46d7f0(GameServer *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063087b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x67;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f0b0(local_2048,param_2);
  net::packet::meth_0x45f130(local_2048,param_3);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x46d8e0
          (GameServer *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063087b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x5c;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  net::packet::meth_0x45f0b0(local_2048,param_3);
  net::packet::meth_0x45f0b0(local_2048,param_4);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x46d9e0(GameServer *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063087b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x5e;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f0b0(local_2048,param_2);
  net::packet::meth_0x45f130(local_2048,param_3);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x46dad0(GameServer *this,undefined4 param_1,undefined4 param_2)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063087b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x61;
  net::packet::meth_0x45f0b0(local_2048,param_1);
  net::packet::meth_0x45f0b0(local_2048,param_2);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x46dbb0(GameServer *this,undefined4 param_1,undefined4 param_2)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063087b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x62;
  net::packet::meth_0x45f0b0(local_2048,param_1);
  net::packet::meth_0x45f0b0(local_2048,param_2);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x46dc90(GameServer *this,undefined4 param_1,undefined4 param_2)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063087b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 99;
  net::packet::meth_0x45f0b0(local_2048,param_1);
  net::packet::meth_0x45f0b0(local_2048,param_2);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::recv_packet(GameServer *this,int *param_1,void *param_2)

{
  char cVar1;
  GameActionInitiateDialogue *pGVar2;
  GameActionOperateDoor *this_00;
  GameActionOperateContainer *this_01;
  GameActionPickUp *this_02;
  GameActionGive *this_03;
  cls_0x4134a0 *this_04;
  cls_0x616328 *pcVar3;
  cls_0x412e60 *this_05;
  cls_0x409da0 *this_06;
  GameActionReload *pGVar4;
  critical_section *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  void *pvVar10;
  undefined *puVar11;
  VFX_VEGInstance *pVVar12;
  dword dVar13;
  GameActionEquip *this_07;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
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
  GameActionEquip *this_18;
  GameActionEquip *this_19;
  GameActionEquip *this_20;
  GameActionEquip *this_21;
  GameActionEquip *this_22;
  GameActionAttack *this_23;
  int unaff_EDI;
  dword dVar14;
  uint unaff_retaddr;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  char *pcVar17;
  GameActionEquip *local_216c;
  GameActionEquip *local_2168;
  GameActionOperateContainer *local_2164;
  undefined4 local_2160;
  undefined4 local_215c;
  void *local_2158;
  void *local_2154;
  void *local_2150;
  undefined4 local_214c [65];
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630921;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  switch(*(undefined4 *)((int)param_2 + 0x30)) {
  case 0xb:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_07);
    if ((pcVar3 == (cls_0x616328 *)0x0) ||
       (iVar7 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,
                             &GameEntity::RTTI_Type_Descriptor,0), iVar7 == 0)) break;
    Entity::meth_0x54c440((Entity *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7));
    piVar9 = (int *)FUN_00401130();
    iVar6 = (**(code **)(*piVar9 + 0x14))(0);
    goto LAB_0046e8a0;
  default:
    ExceptionList = &local_c;
    Server::virt_meth_0x556ea0(&this->Server,param_1,param_2,unaff_EDI);
    break;
  case 0x3a:
    ExceptionList = &local_c;
    Server::virt_meth_0x556ea0(&this->Server,param_1,param_2,unaff_EDI);
    FUN_0046cf70();
    break;
  case 0x48:
  case 0x4b:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    GameActionEquip::meth_0x54be10(this_10);
    GameActionEquip::meth_0x54be10(local_2168);
    break;
  case 0x49:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    pcVar5 = (critical_section *)GameActionEquip::meth_0x54be10(local_216c);
    dVar13 = GameActionEquip::meth_0x54be10(this_09);
    iVar7 = net::client::Get_base_critical_section_field_0xc((client *)(this->Server).mbr_0x5064);
    if (((iVar7 == 0) && (pcVar5 != (critical_section *)0x0)) && (dVar13 != 0)) {
      Entity::meth_0x54c440((Entity *)pcVar5);
      local_2164 = (GameActionOperateContainer *)operator_new(0x24);
      local_4 = 1;
      if (local_2164 == (GameActionOperateContainer *)0x0) {
        pGVar2 = (GameActionInitiateDialogue *)0x0;
      }
      else {
        pGVar2 = GameActionInitiateDialogue::GameActionInitiateDialogue
                           ((GameActionInitiateDialogue *)local_2164);
      }
      local_4 = 0xffffffff;
      pGVar2->mbr_0x1c = dVar13;
      pGVar2->mbr_0x19 = 1;
      net::critical_section::meth_0x550720(pcVar5,(int)pGVar2);
    }
    break;
  case 0x4a:
  case 0x4d:
  case 0x50:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    GameActionEquip::meth_0x54be10(this_14);
    GameActionEquip::meth_0x54be10(this_15);
    break;
  case 0x4c:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    GameActionEquip::meth_0x54be10(local_216c);
    GameActionEquip::meth_0x54be10(this_11);
    break;
  case 0x4e:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    pcVar5 = (critical_section *)GameActionEquip::meth_0x54be10(this_12);
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(local_2168);
    if ((pcVar5 == (critical_section *)0x0) || (pcVar3 == (cls_0x616328 *)0x0)) break;
    dVar13 = pcVar3[0x57].mbr_0x0;
    if (dVar13 != 3) {
      if ((dVar13 != 4) && (dVar13 != 1)) break;
      local_2164 = (GameActionOperateContainer *)operator_new(0x24);
      local_4 = 3;
LAB_0046e0fe:
      if (local_2164 == (GameActionOperateContainer *)0x0) {
        this_01 = (GameActionOperateContainer *)0x0;
      }
      else {
        this_01 = GameActionOperateContainer::GameActionOperateContainer(local_2164);
      }
      local_4 = 0xffffffff;
      GameActionPickUp::meth_0x406a30((GameActionPickUp *)this_01,(int)pcVar3);
      net::critical_section::meth_0x550720(pcVar5,(int)this_01);
      break;
    }
    iVar7 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameDoor::RTTI_Type_Descriptor,0);
    local_2164 = (GameActionOperateContainer *)operator_new(0x28);
    local_4 = 2;
    goto LAB_0046e0c1;
  case 0x4f:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    pcVar5 = (critical_section *)GameActionEquip::meth_0x54be10(local_216c);
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_13);
    if ((pcVar5 == (critical_section *)0x0) || (pcVar3 == (cls_0x616328 *)0x0)) break;
    if (pcVar3[0x57].mbr_0x0 != 3) {
      if (pcVar3[0x57].mbr_0x0 != 4) break;
      local_2164 = (GameActionOperateContainer *)operator_new(0x24);
      local_4 = 5;
      goto LAB_0046e0fe;
    }
    iVar7 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameDoor::RTTI_Type_Descriptor,0);
    local_2164 = (GameActionOperateContainer *)operator_new(0x28);
    local_4 = 4;
LAB_0046e0c1:
    if (local_2164 == (GameActionOperateContainer *)0x0) {
      this_00 = (GameActionOperateDoor *)0x0;
    }
    else {
      this_00 = GameActionOperateDoor::GameActionOperateDoor((GameActionOperateDoor *)local_2164);
    }
    local_4 = 0xffffffff;
    GameActionOperateDoor::meth_0x406700(this_00,iVar7);
    net::critical_section::meth_0x550720(pcVar5,(int)this_00);
    break;
  case 0x51:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2164);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    iVar6 = 0;
    pTVar16 = &GameEntity::RTTI_Type_Descriptor;
    pTVar15 = &Entity::RTTI_Type_Descriptor;
    iVar7 = 0;
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_16);
    iVar7 = FUN_006165e0(pcVar3,iVar7,pTVar15,pTVar16,iVar6);
    if (iVar7 != 0) {
      piVar9 = (int *)Entity::GetScript((Entity *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7));
      if ((piVar9 == (int *)0x0) ||
         (cVar1 = (**(code **)(*piVar9 + 0x10))("GetInfo"), cVar1 != '\x01')) {
        local_2160 = *(GameActionEquip **)(iVar7 + 0xc);
      }
      else {
        (**(code **)(*piVar9 + 0x18))("GetInfo",&local_2160);
      }
      if (local_2160 != (GameActionEquip *)0x0) {
        meth_0x554d30(this,local_216c,local_2160,0,0x80,0x80,0x80);
      }
    }
    break;
  case 0x52:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    pcVar5 = (critical_section *)GameActionEquip::meth_0x54be10(local_216c);
    iVar7 = GameActionEquip::meth_0x54be10(this_17);
    if ((pcVar5 != (critical_section *)0x0) && (iVar7 != 0)) {
      piVar9 = (int *)FUN_00401130();
      this_02 = (GameActionPickUp *)(**(code **)(*piVar9 + 0x14))(3);
      GameActionPickUp::meth_0x406a30(this_02,iVar7);
      net::critical_section::meth_0x550720(pcVar5,(int)this_02);
    }
    break;
  case 0x53:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_215c);
    pcVar5 = (critical_section *)GameActionEquip::meth_0x54be10(this_18);
    iVar7 = GameActionEquip::meth_0x54be10(local_2168);
    if ((pcVar5 != (critical_section *)0x0) && (iVar7 != 0)) {
      local_2164 = (GameActionOperateContainer *)operator_new(0x30);
      local_4 = 6;
      if (local_2164 == (GameActionOperateContainer *)0x0) {
        this_03 = (GameActionGive *)0x0;
      }
      else {
        this_03 = GameActionGive::GameActionGive((GameActionGive *)local_2164);
      }
      local_4 = 0xffffffff;
      GameActionGive::meth_0x4052d0(this_03,iVar7);
      GameActionGive::meth_0x4052f0(this_03,local_215c);
      net::critical_section::meth_0x550720(pcVar5,(int)this_03);
    }
    break;
  case 0x54:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(local_216c);
    if ((pcVar3 == (cls_0x616328 *)0x0) ||
       (this_06 = (cls_0x409da0 *)
                  FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,
                               &GameCreature::RTTI_Type_Descriptor,0),
       this_06 == (cls_0x409da0 *)0x0)) break;
    cls_0x409da0::meth_0x409da0(this_06);
    net::packet::packet(local_2048);
    local_4 = 9;
    local_2048[0].mbr_0x30 = 0x54;
    goto LAB_0046e545;
  case 0x59:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2164);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)local_2164);
    iVar7 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0)
    ;
    if ((iVar7 == 0) || (pcVar3 == (cls_0x616328 *)0x0)) break;
    piVar9 = (int *)FUN_00401130();
    iVar6 = (**(code **)(*piVar9 + 0x14))(0xb);
    *(GameActionEquip **)(iVar6 + 0x20) = local_216c;
    *(uint *)(iVar6 + 0x1c) = (local_216c == (GameActionEquip *)0x2) + 2;
LAB_0046e8a0:
    net::critical_section::meth_0x550720
              ((critical_section *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7),iVar6);
    break;
  case 0x5a:
    dVar14 = 0;
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    pcVar5 = (critical_section *)GameActionEquip::meth_0x54be10(local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_20);
    dVar13 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameWeapon::RTTI_Type_Descriptor,0
                         );
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    if (local_216c != (GameActionEquip *)0x0) {
      pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_21);
      dVar14 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameAmmo::RTTI_Type_Descriptor,0
                           );
    }
    if ((pcVar5 != (critical_section *)0x0) && (dVar13 != 0)) {
      local_2164 = (GameActionOperateContainer *)operator_new(0x3c);
      local_4 = 10;
      if (local_2164 == (GameActionOperateContainer *)0x0) {
        pGVar4 = (GameActionReload *)0x0;
      }
      else {
        pGVar4 = GameActionReload::GameActionReload((GameActionReload *)local_2164);
      }
      local_4 = 0xffffffff;
      pGVar4->mbr_0x1c = dVar13;
      if (dVar14 != 0) {
        pGVar4->mbr_0x24 = dVar14;
      }
      net::critical_section::meth_0x550720(pcVar5,(int)pGVar4);
    }
    break;
  case 0x5b:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_215c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2160);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e460((GameActionEquip *)param_2,(undefined *)&local_2168);
    local_2158 = (void *)0x0;
    local_2154 = (void *)0x0;
    local_2150 = (void *)0x0;
    this_08 = extraout_ECX;
    if ((char)local_2168 != '\0') {
      FUN_0045e560(param_2,&local_2158);
      FUN_0045e560(param_2,&local_2154);
      FUN_0045e560(param_2,&local_2150);
      this_08 = extraout_ECX_00;
    }
    pcVar5 = (critical_section *)GameActionEquip::meth_0x54be10(this_08);
    iVar7 = GameActionEquip::meth_0x54be10(local_2160);
    this_23 = (GameActionAttack *)0x0;
    if ((pcVar5 == (critical_section *)0x0) || (((char)local_2168 == '\0' && (iVar7 == 0)))) {
      FUN_00497120((byte *)"GameServer::recv_packet() - Entities for attack action not found.\n");
    }
    else {
      local_2164 = (GameActionOperateContainer *)operator_new(200);
      local_4 = 0;
      if (local_2164 != (GameActionOperateContainer *)0x0) {
        this_23 = GameActionAttack::GameActionAttack((GameActionAttack *)local_2164);
      }
      local_4 = 0xffffffff;
      GameActionAttack::meth_0x403fa0(this_23,iVar7);
      this_23->mbr_0x78 = (dword)local_216c;
      GameActionAttack::meth_0x401100(this_23,(char)local_2168,&local_2158);
      net::critical_section::meth_0x550720(pcVar5,(int)this_23);
    }
    break;
  case 0x5d:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(local_216c);
    pvVar10 = (void *)FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,
                                   &GameCreature::RTTI_Type_Descriptor,0);
    if (pvVar10 == (void *)0x0) {
      FUN_00497120((byte *)
                   "GameNetwork::GAME_ID_ENTITY_PERK_INCREMENT - Could not find the needed entity.\n"
                  );
    }
    else {
      FUN_0040a2f0(pvVar10,(int)local_2168);
    }
    break;
  case 0x5f:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2164);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_215c);
    local_2160 = (GameActionEquip *)((uint)local_2160 & 0xffffff00);
    pcVar5 = (critical_section *)GameActionEquip::meth_0x54be10(local_216c);
    if (pcVar5 == (critical_section *)0x0) {
      local_2160 = (GameActionEquip *)CONCAT31(local_2160._1_3_,1);
    }
    iVar7 = GameActionEquip::meth_0x54be10(this_22);
    if (iVar7 == 0) {
      local_2160 = (GameActionEquip *)CONCAT31(local_2160._1_3_,1);
    }
    iVar6 = 0;
    if ((iVar7 == 0) ||
       (iVar6 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar7 + 0x168),(int)local_2164),
       iVar6 != 0)) {
      if (iVar7 != 0 && pcVar5 != (critical_section *)0x0) {
        piVar9 = (int *)FUN_00401130();
        iVar7 = (**(code **)(*piVar9 + 0x14))(9);
        *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar6 + 0x1dc);
        *(undefined4 *)(iVar7 + 0x24) = local_215c;
        *(undefined4 *)(iVar7 + 0x28) = 0x1e;
        *(undefined *)(iVar7 + 0x2c) = 1;
        net::critical_section::meth_0x550720(pcVar5,iVar7);
        break;
      }
    }
    else {
      local_2160 = (GameActionEquip *)CONCAT31(local_2160._1_3_,1);
    }
    meth_0x46d110(this,pcVar5->mbr_0x1dc,*(undefined4 *)(iVar6 + 0x1dc),local_2168,local_215c,
                  (char)local_2160);
    break;
  case 0x60:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2164);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    local_2160 = (GameActionEquip *)((uint)local_2160 & 0xffffff00);
    pcVar5 = (critical_section *)GameActionEquip::meth_0x54be10((GameActionEquip *)local_2164);
    if (pcVar5 == (critical_section *)0x0) {
      local_2160 = (GameActionEquip *)CONCAT31(local_2160._1_3_,1);
    }
    iVar7 = 0;
    if ((pcVar5 == (critical_section *)0x0) ||
       (iVar7 = cls_0x46a8e0::meth_0x55fea0((cls_0x46a8e0 *)pcVar5->mbr_0x168,(int)local_216c),
       iVar7 != 0)) {
      if (pcVar5 != (critical_section *)0x0) {
        piVar9 = (int *)FUN_00401130();
        iVar6 = (**(code **)(*piVar9 + 0x14))(10);
        *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar7 + 0x1dc);
        net::critical_section::meth_0x550720(pcVar5,iVar6);
        break;
      }
    }
    else {
      local_2160 = (GameActionEquip *)CONCAT31(local_2160._1_3_,1);
    }
    meth_0x46d260(this,pcVar5->mbr_0x1dc,*(undefined4 *)(iVar7 + 0x1dc),(char)local_2160);
    break;
  case 100:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(local_216c);
    if ((pcVar3 == (cls_0x616328 *)0x0) ||
       (this_04 = (cls_0x4134a0 *)
                  FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,
                               &GameWeapon::RTTI_Type_Descriptor,0), this_04 == (cls_0x4134a0 *)0x0)
       ) break;
    cls_0x4134a0::meth_0x4134a0(this_04);
    net::packet::packet(local_2048);
    local_4 = 7;
    local_2048[0].mbr_0x30 = 100;
    goto LAB_0046e545;
  case 0x65:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_216c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2168);
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_19);
    if ((pcVar3 == (cls_0x616328 *)0x0) ||
       (this_05 = (cls_0x412e60 *)
                  FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,
                               &GameWeapon::RTTI_Type_Descriptor,0), this_05 == (cls_0x412e60 *)0x0)
       ) break;
    cls_0x412e60::meth_0x413500(this_05,(int *)local_2168);
    net::packet::packet(local_2048);
    local_4 = 8;
    local_2048[0].mbr_0x30 = 0x65;
LAB_0046e545:
    meth_0x5a0a00(this,local_2048,1);
    net::buffer::~buffer(&local_2048[0].buffer);
    break;
  case 0x6a:
  case 0x6b:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,local_214c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2164);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_2164);
    break;
  case 0x6e:
    ExceptionList = &local_c;
    iVar7 = FUN_0041d050();
    uVar8 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x5c))();
    piVar9 = (int *)FUN_00401130();
    pvVar10 = (void *)(**(code **)(*piVar9 + 0x54))(uVar8);
    if (this->mbr_0x70f0 == 0) {
      pcVar17 = "demo_rain.veg";
      uVar8 = DAT_006ff0d8;
      puVar11 = FUN_004e1de0();
      pVVar12 = FUN_004e2ad0(puVar11,(VFX_VEGInstance *)pcVar17,uVar8);
      this->mbr_0x70f0 = (dword)pVVar12;
    }
    if ((pvVar10 != (void *)0x0) && ((VFX_VEGInstance *)this->mbr_0x70f0 != (VFX_VEGInstance *)0x0))
    {
      if (this->mbr_0x70f4 == 0) {
        dVar13 = FUN_00573270(pvVar10,(VFX_VEGInstance *)this->mbr_0x70f0,0,'\0',(int *)0x0,1);
        this->mbr_0x70f4 = dVar13;
      }
      else {
        FUN_00573430(pvVar10,this->mbr_0x70f4,(int **)0x1);
        this->mbr_0x70f4 = 0;
      }
    }
    break;
  case 0x6f:
    ExceptionList = &local_c;
    iVar7 = FUN_0041d050();
    uVar8 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x5c))();
    piVar9 = (int *)FUN_00401130();
    pvVar10 = (void *)(**(code **)(*piVar9 + 0x54))(uVar8);
    if (this->mbr_0x70f8 == 0) {
      pcVar17 = "demo_snow.veg";
      uVar8 = DAT_006ff0d8;
      puVar11 = FUN_004e1de0();
      pVVar12 = FUN_004e2ad0(puVar11,(VFX_VEGInstance *)pcVar17,uVar8);
      this->mbr_0x70f8 = (dword)pVVar12;
    }
    if ((pvVar10 != (void *)0x0) && ((VFX_VEGInstance *)this->mbr_0x70f8 != (VFX_VEGInstance *)0x0))
    {
      if (this->mbr_0x70fc == 0) {
        dVar13 = FUN_00573270(pvVar10,(VFX_VEGInstance *)this->mbr_0x70f8,0,'\0',(int *)0x0,1);
        this->mbr_0x70fc = dVar13;
      }
      else {
        FUN_00573430(pvVar10,this->mbr_0x70fc,(int **)0x1);
        this->mbr_0x70fc = 0;
      }
    }
    break;
  case 0x70:
    ExceptionList = &local_c;
    iVar7 = FUN_0041d050();
    uVar8 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x5c))();
    piVar9 = (int *)FUN_00401130();
    pvVar10 = (void *)(**(code **)(*piVar9 + 0x54))(uVar8);
    if (this->mbr_0x7100 == 0) {
      pcVar17 = "demo_wind.veg";
      uVar8 = DAT_006ff0d8;
      puVar11 = FUN_004e1de0();
      pVVar12 = FUN_004e2ad0(puVar11,(VFX_VEGInstance *)pcVar17,uVar8);
      this->mbr_0x7100 = (dword)pVVar12;
    }
    if ((pvVar10 != (void *)0x0) && ((VFX_VEGInstance *)this->mbr_0x7100 != (VFX_VEGInstance *)0x0))
    {
      if (this->mbr_0x7104 == 0) {
        dVar13 = FUN_00573270(pvVar10,(VFX_VEGInstance *)this->mbr_0x7100,0,'\0',(int *)0x0,1);
        this->mbr_0x7104 = dVar13;
      }
      else {
        FUN_00573430(pvVar10,this->mbr_0x7104,(int **)0x1);
        this->mbr_0x7104 = 0;
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



char __thiscall
GameServer::meth_0x46ebd0
          (GameServer *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  int unaff_EBP;
  undefined4 unaff_retaddr;
  
  uVar1 = *(undefined4 *)(param_2 + 0x2dc);
  cVar2 = (**(code **)(**(int **)(param_1 + 0x168) + 0x38))(param_2,param_3,param_4);
  if (cVar2 != '\0') {
    meth_0x46d110(this,*(undefined4 *)(unaff_EBP + 0x1dc),*(undefined4 *)(param_2 + 0x1dc),uVar1,
                  unaff_retaddr,0);
  }
  return cVar2;
}



void __thiscall GameServer::meth_0x46ec30(GameServer *this,int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0x168) + 0x3c))(param_2);
  meth_0x46d260(this,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_2 + 0x1dc),0);
  return;
}



void __thiscall GameServer::meth_0x46ecd0(GameServer *this,int param_1,dword param_2)

{
  cls_0x616328 *pcVar1;
  void *this_00;
  int *piVar2;
  
  if (DAT_0070bd98 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  pcVar1 = (cls_0x616328 *)(**(code **)(*piVar2 + 0x78))();
  this_00 = (void *)FUN_006165e0(pcVar1,0,&Journal::RTTI_Type_Descriptor,
                                 &GameJournal::RTTI_Type_Descriptor,0);
  if (this_00 != (void *)0x0) {
    FUN_0046c7a0(this_00,(TaskStatus *)param_1,param_2);
    meth_0x46dad0(this,param_1,param_2);
  }
  return;
}



void __thiscall GameServer::meth_0x46ed30(GameServer *this,int param_1,dword param_2)

{
  cls_0x616328 *pcVar1;
  void *this_00;
  int *piVar2;
  
  if (DAT_0070bd98 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  pcVar1 = (cls_0x616328 *)(**(code **)(*piVar2 + 0x78))();
  this_00 = (void *)FUN_006165e0(pcVar1,0,&Journal::RTTI_Type_Descriptor,
                                 &GameJournal::RTTI_Type_Descriptor,0);
  if (this_00 != (void *)0x0) {
    FUN_0046c840(this_00,(TaskStatus *)param_1,param_2);
    meth_0x46dbb0(this,param_1,param_2);
  }
  return;
}



void __thiscall GameServer::meth_0x46ed90(GameServer *this,undefined4 *param_1,undefined4 *param_2)

{
  cls_0x616328 *pcVar1;
  void *this_00;
  int *piVar2;
  
  if (DAT_0070bd98 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  pcVar1 = (cls_0x616328 *)(**(code **)(*piVar2 + 0x78))();
  this_00 = (void *)FUN_006165e0(pcVar1,0,&Journal::RTTI_Type_Descriptor,
                                 &GameJournal::RTTI_Type_Descriptor,0);
  if (this_00 != (void *)0x0) {
    FUN_0046c6c0(this_00,(TaskEntry *)param_1,(TaskEntry *)param_2);
    meth_0x46dc90(this,param_1,param_2);
  }
  return;
}



GameServer * __thiscall GameServer::GameServer(GameServer *this,u_short param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  VFX_Parameter *this_00;
  undefined4 **ppuVar4;
  char *pcVar5;
  int *piVar6;
  long lVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  GameServer *local_48;
  undefined local_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630938;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  local_48 = this;
  Server::Server(&this->Server,param_1);
  local_4 = 0;
  (this->Server).server.base.vftptr_0x0 =
       (base__vftable_6a1d1c *)&GameServer__vftable_667dd4_00667dd4;
  local_54 = (undefined4 *)0x0;
  param_1._0_1_ = 0;
  this_00 = (VFX_Parameter *)FUN_0056af40();
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar9 = "Server";
  do {
    pcVar5 = pcVar9;
    pcVar9 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"Server",(uint)(pcVar5 + -0x667fec));
  local_50 = VFX_Parameter::meth_0x4339b0(this_00,(int)local_44);
  if (local_50 == (undefined4 *)this_00->mbr_0x4) {
LAB_0046ef17:
    local_4c = (undefined4 *)this_00->mbr_0x4;
    ppuVar4 = &local_4c;
  }
  else {
    bVar3 = FUN_00433930((int)local_44,(int)(local_50 + 3));
    if (bVar3) goto LAB_0046ef17;
    ppuVar4 = &local_50;
  }
  puVar8 = *ppuVar4;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  if (puVar8 != (undefined4 *)this_00->mbr_0x4) {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar9 = "Start map";
    do {
      pcVar5 = pcVar9;
      pcVar9 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Start map",(uint)(pcVar5 + -0x667fe0));
    FUN_004df070(puVar8 + 10,&local_4c,(int)local_28);
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    if (local_4c != (undefined4 *)puVar8[0xb]) {
      if ((uint)local_4c[0x10] < 0x10) {
        local_54 = local_4c + 0xb;
      }
      else {
        local_54 = (undefined4 *)local_4c[0xb];
      }
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar9 = "Start map entry point";
    do {
      pcVar5 = pcVar9;
      pcVar9 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"Start map entry point",(uint)(pcVar5 + -0x667fc8));
    piVar6 = (int *)FUN_004df070(puVar8 + 10,&local_4c,(int)local_28);
    iVar2 = *piVar6;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    if (iVar2 != puVar8[0xb]) {
      if (*(uint *)(iVar2 + 0x40) < 0x10) {
        pcVar9 = (char *)(iVar2 + 0x2c);
      }
      else {
        pcVar9 = *(char **)(iVar2 + 0x2c);
      }
      lVar7 = _atol(pcVar9);
      param_1._0_1_ = (byte)lVar7;
    }
    if (local_54 != (undefined4 *)0x0) {
      puVar8 = local_54;
      do {
        cVar1 = *(char *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&(this->Server).field_0x70a8,(char *)local_54,
                 (int)puVar8 - (int)((int)local_54 + 1));
      (this->Server).mbr_0x70c4 = (byte)param_1;
      goto LAB_0046f08f;
    }
  }
  handle_fatal_error("No start map specified in sys.ini");
LAB_0046f08f:
  this->mbr_0x70f0 = 0;
  this->mbr_0x70f4 = 0;
  this->mbr_0x70f8 = 0;
  this->mbr_0x70fc = 0;
  this->mbr_0x7100 = 0;
  this->mbr_0x7104 = 0;
  ExceptionList = puStack_8;
  return this;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x552d40(GameServer *this,undefined4 param_1,undefined4 param_2)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x34;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x553010
          (GameServer *this,undefined4 param_1,undefined **param_2,undefined **param_3,
          undefined4 param_4,undefined **param_5,undefined param_6)

{
  uint unaff_retaddr;
  overflow__vftable_6647c4 *local_2050;
  char *local_204c;
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
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet((packet *)local_2048);
  local_4 = 0;
  local_2018 = 0x49;
  net::packet::meth_0x45f130((packet *)local_2048,param_1);
  local_2050 = (overflow__vftable_6647c4 *)param_2;
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  local_2050 = (overflow__vftable_6647c4 *)param_3;
  net::packet::meth_0x45f130((packet *)local_2048,param_3);
  net::packet::meth_0x45f130((packet *)local_2048,param_4);
  local_2050 = (overflow__vftable_6647c4 *)param_5;
  net::packet::meth_0x45f130((packet *)local_2048,param_5);
  if (local_2048._8_4_ == local_2038) {
    local_204c = "Buffer overflow.";
    local_2050 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2050,&DAT_006ddff0);
  }
  *(undefined *)(local_203c + (int)local_2034) = param_6;
  local_203c = local_203c + 1;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  meth_0x5a0a00(this,local_2048,1);
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

void __thiscall
GameServer::meth_0x553180
          (GameServer *this,undefined4 param_1,undefined **param_2,undefined **param_3,
          undefined4 param_4,undefined **param_5,undefined param_6)

{
  uint unaff_retaddr;
  overflow__vftable_6647c4 *local_2050;
  char *local_204c;
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
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet((packet *)local_2048);
  local_4 = 0;
  local_2018 = 0x4a;
  net::packet::meth_0x45f130((packet *)local_2048,param_1);
  local_2050 = (overflow__vftable_6647c4 *)param_2;
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  local_2050 = (overflow__vftable_6647c4 *)param_3;
  net::packet::meth_0x45f130((packet *)local_2048,param_3);
  net::packet::meth_0x45f130((packet *)local_2048,param_4);
  local_2050 = (overflow__vftable_6647c4 *)param_5;
  net::packet::meth_0x45f130((packet *)local_2048,param_5);
  if (local_2048._8_4_ == local_2038) {
    local_204c = "Buffer overflow.";
    local_2050 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2050,&DAT_006ddff0);
  }
  *(undefined *)(local_203c + (int)local_2034) = param_6;
  local_203c = local_203c + 1;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  meth_0x5a0a00(this,local_2048,1);
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

void __thiscall GameServer::meth_0x5532f0(GameServer *this,undefined4 param_1)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x4b;
  net::packet::meth_0x45f130(local_2048,param_1);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x5533b0(GameServer *this,undefined4 param_1)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x4c;
  net::packet::meth_0x45f130(local_2048,param_1);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x553470(GameServer *this,undefined4 param_1,undefined4 param_2)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x4d;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x553550(GameServer *this)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x4e;
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x553600
          (GameServer *this,undefined4 *param_1,undefined4 param_2,undefined param_3,
          undefined param_4)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint unaff_retaddr;
  overflow__vftable_6647c4 *local_2050;
  char *local_204c;
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
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet((packet *)local_2048);
  local_4 = 0;
  local_2018 = 9;
  puVar2 = param_1;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0
            ((packet *)local_2048,param_1,(uint)((int)puVar2 + (1 - ((int)param_1 + 1))));
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  if (local_2048._8_4_ == local_2038) {
    local_204c = "Buffer overflow.";
    local_2050 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2050,&DAT_006ddff0);
  }
  *(undefined *)(local_203c + (int)local_2034) = param_3;
  uVar3 = local_203c + 1;
  if (local_2038 < uVar3) {
    local_2038 = uVar3;
  }
  if (local_2048._8_4_ == local_2038) {
    local_204c = "Buffer overflow.";
    local_2050 = &overflow__vftable_6647c4_006647c4;
    local_203c = uVar3;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2050,&DAT_006ddff0);
  }
  *(undefined *)(uVar3 + (int)local_2034) = param_4;
  local_203c = local_203c + 2;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  meth_0x5a0a00(this,local_2048,1);
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

void __thiscall GameServer::meth_0x553790(GameServer *this,undefined4 param_1)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 10;
  net::packet::meth_0x45f130(local_2048,param_1);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x553e90
          (GameServer *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x12;
  net::packet::meth_0x45f130(local_2048,param_1);
  puVar2 = param_2;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(local_2048,param_2,(uint)((int)puVar2 + (1 - ((int)param_2 + 1))));
  net::packet::meth_0x45f130(local_2048,param_3);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x553f90(GameServer *this,undefined4 param_1,undefined4 param_2,undefined param_3)

{
  uint unaff_retaddr;
  overflow__vftable_6647c4 *local_2050;
  char *local_204c;
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
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet((packet *)local_2048);
  local_4 = 0;
  local_2018 = 0x13;
  net::packet::meth_0x45f130((packet *)local_2048,param_1);
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  if (local_2048._8_4_ == local_2038) {
    local_204c = "Buffer overflow.";
    local_2050 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2050,&DAT_006ddff0);
  }
  *(undefined *)(local_203c + (int)local_2034) = param_3;
  local_203c = local_203c + 1;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  meth_0x5a0a00(this,local_2048,1);
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

void __thiscall
GameServer::meth_0x5540c0
          (GameServer *this,undefined4 param_1,undefined4 *param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x14;
  net::packet::meth_0x45f130(local_2048,param_1);
  puVar2 = param_2;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(local_2048,param_2,(uint)((int)puVar2 + (1 - ((int)param_2 + 1))));
  net::packet::meth_0x45f0b0(local_2048,(int)(param_3 != '\0'));
  net::packet::meth_0x45f130(local_2048,param_4);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x5541d0(GameServer *this,undefined4 param_1,undefined4 param_2,undefined param_3)

{
  uint unaff_retaddr;
  overflow__vftable_6647c4 *local_2050;
  char *local_204c;
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
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet((packet *)local_2048);
  local_4 = 0;
  local_2018 = 0x15;
  net::packet::meth_0x45f130((packet *)local_2048,param_1);
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  if (local_2048._8_4_ == local_2038) {
    local_204c = "Buffer overflow.";
    local_2050 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2050,&DAT_006ddff0);
  }
  *(undefined *)(local_203c + (int)local_2034) = param_3;
  local_203c = local_203c + 1;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  meth_0x5a0a00(this,local_2048,1);
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

void __thiscall GameServer::meth_0x5543e0(GameServer *this,undefined4 param_1)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x17;
  net::packet::meth_0x45f130(local_2048,param_1);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x554580(GameServer *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x1b;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  net::packet::meth_0x45f130(local_2048,param_3);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x554670(GameServer *this)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x1c;
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x554720(GameServer *this)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x1d;
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x5547d0(GameServer *this,undefined4 param_1)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x1e;
  net::packet::meth_0x45f130(local_2048,param_1);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x554970(GameServer *this,undefined4 param_1,undefined4 param_2)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x20;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x554a50(GameServer *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x21;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  net::packet::meth_0x45f130(local_2048,param_3);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x554b40(GameServer *this,int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x2a;
  net::packet::meth_0x45f0b0(local_2048,param_2);
  puVar2 = param_3;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(local_2048,param_3,(uint)((int)puVar2 + (1 - ((int)param_3 + 1))));
  meth_0x5a09d0(this,param_1,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x554c30
          (GameServer *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x2e;
  puVar2 = param_1;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(local_2048,param_1,(uint)((int)puVar2 + (1 - ((int)param_1 + 1))));
  net::packet::meth_0x45f0b0(local_2048,param_2);
  net::packet::meth_0x45f0b0(local_2048,param_3);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x554d30
          (GameServer *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x2f;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f0b0(local_2048,param_2);
  net::packet::meth_0x45f0b0(local_2048,param_3);
  net::packet::meth_0x45f0b0(local_2048,param_4);
  net::packet::meth_0x45f0b0(local_2048,param_5);
  net::packet::meth_0x45f0b0(local_2048,param_6);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x554e50
          (GameServer *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = 0;
  local_2048[0].mbr_0x30 = 0x30;
  net::packet::meth_0x45f130(local_2048,param_1);
  puVar2 = param_2;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(local_2048,param_2,(uint)((int)puVar2 + (1 - ((int)param_2 + 1))));
  net::packet::meth_0x45f0b0(local_2048,param_3);
  net::packet::meth_0x45f0b0(local_2048,param_4);
  net::packet::meth_0x45f0b0(local_2048,param_5);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameServer::meth_0x5555a0(GameServer *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = param_1[0x77];
    (**(code **)*param_1)(1);
    meth_0x553790(this,uVar1);
  }
  return;
}



int * __thiscall GameServer::meth_0x555790(GameServer *this,void *param_1,void **param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00552a20();
  net::critical_section::meth_0x5512b0((critical_section *)param_1,param_2,piVar1,1);
  meth_0x553e90(this,*(undefined4 *)((int)param_1 + 0x1dc),param_2,piVar1);
  return piVar1;
}



void __thiscall GameServer::meth_0x5557d0(GameServer *this,void *param_1,int *param_2,char param_3)

{
  FUN_0054f270(param_1,param_2,param_3);
  meth_0x553f90(this,*(undefined4 *)((int)param_1 + 0x1dc),param_2,param_3);
  return;
}



int __thiscall
GameServer::meth_0x555810(GameServer *this,void *param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  
  iVar1 = FUN_00552a40();
  FUN_005512f0(param_1,param_2,param_3,iVar1);
  meth_0x5540c0(this,*(undefined4 *)((int)param_1 + 0x1dc),param_2,param_3,iVar1);
  return iVar1;
}



void __thiscall GameServer::meth_0x555850(GameServer *this,void *param_1,int *param_2,char param_3)

{
  FUN_0054f590(param_1,param_2,param_3);
  meth_0x5541d0(this,*(undefined4 *)((int)param_1 + 0x1dc),param_2,param_3);
  return;
}



undefined4 __thiscall GameServer::meth_0x555920(GameServer *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  GameActionEquip *this_00;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0070bd98 + 4;
  }
  piVar5 = param_1;
  this_00 = (GameActionEquip *)
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x84))();
  uVar3 = GameActionEquip::meth_0x56a1a0(this_00,piVar5);
  if ((char)uVar3 != '\0') {
    uVar4 = meth_0x5543e0(this,param_1);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



undefined4 __thiscall
GameServer::meth_0x5559f0(GameServer *this,int **param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  GameActionEquip *this_00;
  uint uVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0070bd98 + 4;
  }
  ppiVar5 = param_1;
  piVar6 = param_2;
  iVar7 = param_3;
  this_00 = (GameActionEquip *)
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x84))();
  uVar3 = GameActionEquip::SetTeamAttitude(this_00,ppiVar5,piVar6,iVar7);
  if ((char)uVar3 != '\0') {
    uVar4 = meth_0x554580(this,param_1,param_2,param_3);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



int __thiscall GameServer::meth_0x555a90(GameServer *this)

{
  bool bVar1;
  int iVar2;
  cls_0x56ae70 *this_00;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0070bd98 + 4;
  }
  this_00 = (cls_0x56ae70 *)
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x84))();
  iVar2 = cls_0x56ae70::meth_0x56ad40(this_00);
  meth_0x554670(this);
  return iVar2;
}



int __thiscall GameServer::meth_0x555b00(GameServer *this)

{
  bool bVar1;
  int iVar2;
  cls_0x569f10 *this_00;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0070bd98 + 4;
  }
  this_00 = (cls_0x569f10 *)
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x88))();
  iVar2 = cls_0x569f10::meth_0x569de0(this_00);
  meth_0x554720(this);
  return iVar2;
}



undefined4 __thiscall GameServer::meth_0x555b70(GameServer *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  GameActionEquip *this_00;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0070bd98 + 4;
  }
  piVar5 = param_1;
  this_00 = (GameActionEquip *)
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x88))();
  uVar3 = GameActionEquip::RemoveFromSquad(this_00,piVar5);
  if ((char)uVar3 != '\0') {
    uVar4 = meth_0x5547d0(this,param_1);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



undefined4 __thiscall GameServer::meth_0x555c40(GameServer *this,int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  GameActionEquip *this_00;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0070bd98 + 4;
  }
  piVar5 = param_1;
  piVar6 = param_2;
  this_00 = (GameActionEquip *)
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x88))();
  uVar3 = GameActionEquip::AddToSquad(this_00,piVar5,piVar6);
  if ((char)uVar3 != '\0') {
    uVar4 = meth_0x554970(this,param_1,param_2);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



undefined4 __thiscall
GameServer::meth_0x555cd0(GameServer *this,int **param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  GameActionEquip *this_00;
  uint uVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0070bd98 + 4;
  }
  ppiVar5 = param_1;
  piVar6 = param_2;
  iVar7 = param_3;
  this_00 = (GameActionEquip *)
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x88))();
  uVar3 = GameActionEquip::meth_0x569480(this_00,ppiVar5,piVar6,iVar7);
  if ((char)uVar3 != '\0') {
    uVar4 = meth_0x554a50(this,param_1,param_2,param_3);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x554b40(GameServer *this,int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  packet apStack_2048 [137];
  uint uStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  pvStack_c = ExceptionList;
  uStack_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  net::packet::packet(apStack_2048);
  uStack_4 = 0;
  apStack_2048[0].mbr_0x30 = 0x2a;
  net::packet::meth_0x45f0b0(apStack_2048,param_2);
  puVar2 = param_3;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(apStack_2048,param_3,(uint)((int)puVar2 + (1 - ((int)param_3 + 1))));
  meth_0x5a09d0(this,param_1,apStack_2048,1);
  apStack_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  apStack_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (apStack_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)apStack_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(uStack_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameServer::meth_0x555d80(GameServer *this,undefined4 *param_1,char param_2)

{
  cls_0x599db0 *this_00;
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  
  if (DAT_0070bd98 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  this_00 = (cls_0x599db0 *)(**(code **)(*piVar2 + 0x8c))(param_1);
  if ((this_00 != (cls_0x599db0 *)0x0) &&
     (puVar1 = (uint *)cls_0x599db0::meth_0x599db0(this_00,(int)param_1), puVar1 != (uint *)0x0)) {
    if (param_2 != '\0') {
      uVar3 = *puVar1 | 1;
      *puVar1 = uVar3;
      meth_0x554c30(this,param_1,param_1,uVar3);
      return;
    }
    uVar3 = *puVar1 & 0xfffffffe;
    *puVar1 = uVar3;
    meth_0x554c30(this,param_1,param_1,uVar3);
  }
  return;
}



void __thiscall GameServer::meth_0x555e00(GameServer *this,undefined4 *param_1,char param_2)

{
  cls_0x599db0 *this_00;
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  
  if (DAT_0070bd98 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  this_00 = (cls_0x599db0 *)(**(code **)(*piVar2 + 0x8c))(param_1);
  if ((this_00 != (cls_0x599db0 *)0x0) &&
     (puVar1 = (uint *)cls_0x599db0::meth_0x599db0(this_00,(int)param_1), puVar1 != (uint *)0x0)) {
    if (param_2 != '\0') {
      uVar3 = *puVar1 | 2;
      *puVar1 = uVar3;
      meth_0x554c30(this,param_1,param_1,uVar3);
      return;
    }
    uVar3 = *puVar1 & 0xfffffffd;
    *puVar1 = uVar3;
    meth_0x554c30(this,param_1,param_1,uVar3);
  }
  return;
}



void __thiscall GameServer::meth_0x555e80(GameServer *this,undefined4 *param_1,char param_2)

{
  cls_0x599db0 *this_00;
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  
  if (DAT_0070bd98 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  this_00 = (cls_0x599db0 *)(**(code **)(*piVar2 + 0x8c))(param_1);
  if ((this_00 != (cls_0x599db0 *)0x0) &&
     (puVar1 = (uint *)cls_0x599db0::meth_0x599db0(this_00,(int)param_1), puVar1 != (uint *)0x0)) {
    if (param_2 != '\0') {
      uVar3 = *puVar1 | 4;
      *puVar1 = uVar3;
      meth_0x554c30(this,param_1,param_1,uVar3);
      return;
    }
    uVar3 = *puVar1 & 0xfffffffb;
    *puVar1 = uVar3;
    meth_0x554c30(this,param_1,param_1,uVar3);
  }
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x554d30
          (GameServer *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  uint unaff_retaddr;
  packet apStack_2048 [137];
  uint uStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  pvStack_c = ExceptionList;
  uStack_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  net::packet::packet(apStack_2048);
  uStack_4 = 0;
  apStack_2048[0].mbr_0x30 = 0x2f;
  net::packet::meth_0x45f130(apStack_2048,param_1);
  net::packet::meth_0x45f0b0(apStack_2048,param_2);
  net::packet::meth_0x45f0b0(apStack_2048,param_3);
  net::packet::meth_0x45f0b0(apStack_2048,param_4);
  net::packet::meth_0x45f0b0(apStack_2048,param_5);
  net::packet::meth_0x45f0b0(apStack_2048,param_6);
  meth_0x5a0a00(this,apStack_2048,1);
  apStack_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  apStack_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (apStack_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)apStack_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(uStack_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameServer::meth_0x554e50
          (GameServer *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  packet apStack_2048 [137];
  uint uStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  pvStack_c = ExceptionList;
  uStack_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  net::packet::packet(apStack_2048);
  uStack_4 = 0;
  apStack_2048[0].mbr_0x30 = 0x30;
  net::packet::meth_0x45f130(apStack_2048,param_1);
  puVar2 = param_2;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(apStack_2048,param_2,(uint)((int)puVar2 + (1 - ((int)param_2 + 1))));
  net::packet::meth_0x45f0b0(apStack_2048,param_3);
  net::packet::meth_0x45f0b0(apStack_2048,param_4);
  net::packet::meth_0x45f0b0(apStack_2048,param_5);
  meth_0x5a0a00(this,apStack_2048,1);
  apStack_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  apStack_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (apStack_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)apStack_2048[0].buffer.mbr_0x14);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(uStack_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameServer::meth_0x556000(GameServer *this,undefined4 param_1)

{
  cls_0x56d380 *this_00;
  int *piVar1;
  
  if (DAT_0070bd98 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  this_00 = (cls_0x56d380 *)(**(code **)(*piVar1 + 0x54))(param_1);
  cls_0x56d380::meth_0x56d380(this_00);
  meth_0x5533b0(this,param_1);
  return;
}



void __thiscall GameServer::meth_0x556040(GameServer *this,undefined4 param_1)

{
  cls_0x56d570 *this_00;
  int *piVar1;
  
  if (DAT_0070bd98 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  this_00 = (cls_0x56d570 *)(**(code **)(*piVar1 + 0x54))(param_1);
  cls_0x56d570::meth_0x56d570(this_00);
  meth_0x5532f0(this,param_1);
  return;
}



void __thiscall GameServer::meth_0x556080(GameServer *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (DAT_0070bd98 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  (**(code **)(*piVar1 + 0xa0))(param_1,param_2);
  meth_0x553470(this,param_1,param_2);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall GameServer::meth_0x556100(GameServer *this,undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  uint unaff_retaddr;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  packet local_2048 [137];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637c23;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_4 = 0;
  ExceptionList = &local_c;
  net::packet::packet(local_2048);
  local_4 = CONCAT31(local_4._1_3_,1);
  local_2048[0].mbr_0x30 = 0x41;
  ppuVar3 = (undefined4 **)param_2;
  if (in_stack_0000001c < 0x10) {
    ppuVar3 = &param_2;
  }
  ppuVar2 = ppuVar3;
  do {
    cVar1 = *(char *)ppuVar2;
    ppuVar2 = (undefined4 **)((int)ppuVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(local_2048,ppuVar3,(uint)((int)ppuVar2 + (1 - ((int)ppuVar3 + 1))));
  net::packet::meth_0x45f0b0(local_2048,in_stack_00000020);
  meth_0x5a0a00(this,local_2048,1);
  local_2048[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  local_2048[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048[0].buffer.mbr_0x14);
  }
  local_2048[0].buffer.mbr_0x4 = 0;
  local_2048[0].buffer.mbr_0x14 = 0;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameServer::meth_0x5a09d0(GameServer *this,int param_1,void *param_2,int param_3)

{
  if ((this->Server).server.base.critical_section.field_0x54 != '\0') {
    net::connection::meth_0x5ac450
              (*(connection **)
                (*(int *)&(this->Server).server.base.critical_section.field_0x50 + param_1 * 4),
               param_2,param_3);
  }
  return;
}



void __thiscall GameServer::meth_0x5a0a00(GameServer *this,void *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)&(this->Server).server.base.critical_section.field_0x58 != 0) {
    do {
      meth_0x5a09d0(this,uVar1,param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->Server).server.base.critical_section.field_0x58);
  }
  return;
}


#include "../include/GameServer.h"
