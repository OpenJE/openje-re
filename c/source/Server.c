#include "../include/Server.h"

int __thiscall Server::meth_0x54a5f0(Server *this)

{
  if (0xf < this->mbr_0x70e0) {
    return this->mbr_0x70cc;
  }
  return (int)&this->mbr_0x70cc;
}



void __thiscall Server::virt_meth_0x5529a0(Server *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  
  (*(this->server).base.vftptr_0x0[3].virt_meth_0x6162e5_8)(0x10);
  uVar1 = (*(this->server).base.vftptr_0x0[9].virt_meth_0x6162e5_8)();
  this->mbr_0x5064 = (dword)(undefined4 *)CONCAT31(extraout_var,uVar1);
                    /* WARNING: Could not recover jumptable at 0x005529bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (***(code ***)(undefined4 *)CONCAT31(extraout_var,uVar1))();
  return;
}



undefined4 * __thiscall Server::virt_meth_0x552a60(Server *this)

{
  DialogueManager *pDVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pDVar1 = (DialogueManager *)operator_new(0x14);
  local_4 = 0;
  if (pDVar1 != (DialogueManager *)0x0) {
    pDVar1 = DialogueManager::DialogueManager(pDVar1);
    ExceptionList = local_c;
    return &pDVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



void __thiscall Server::virt_meth_0x552ac0(Server *this)

{
  connection *this_00;
  uint uVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637bdb;
  local_c = ExceptionList;
  uVar1 = 0;
  ExceptionList = &local_c;
  if (*(int *)&(this->server).base.critical_section.field_0x58 != 0) {
    do {
      local_4 = 0xffffffff;
      this_00 = (connection *)operator_new(0x4170);
      local_4 = 0;
      if (this_00 == (connection *)0x0) {
        this_00 = (connection *)0x0;
      }
      else {
        net::connection::connection(this_00);
        *(undefined *)&this_00[1].vftptr_0x0 = 0;
        this_00->vftptr_0x0 = (connection__vftable_6a777c *)&Client__vftable_692718_00692718;
        this_00[1].mbr_0x4 = 0;
      }
      *(connection **)(*(int *)&(this->server).base.critical_section.field_0x50 + uVar1 * 4) =
           this_00;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->server).base.critical_section.field_0x58);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall Server::virt_meth_0x552c70(Server *this)

{
  DialogueManager *this_00;
  
  this_00 = (DialogueManager *)this->mbr_0x5064;
  if (this_00 != (DialogueManager *)0x0) {
    DialogueManager::~DialogueManager(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  net::server::virt_meth_0x5a1b80(&this->server);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall Server::meth_0x552e20(Server *this,int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  local_2048[0].mbr_0x30 = 0x3d;
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    puVar3 = (undefined4 *)(param_1 + 4);
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 4);
  }
  puVar2 = puVar3;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(local_2048,puVar3,(uint)((int)puVar2 + (1 - ((int)puVar3 + 1))));
  net::packet::meth_0x45f130(local_2048,param_2);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x552f20(Server *this,undefined4 param_1,char param_2,int param_3)

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
  local_2048[0].mbr_0x30 = 0x3f;
  net::packet::meth_0x45f130(local_2048,param_1);
  if (param_2 == '\0') {
    GameServer::meth_0x5a09d0((GameServer *)this,param_3,local_2048,1);
  }
  else {
    GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
  }
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
Server::meth_0x553850
          (Server *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

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
  local_2018 = 0x31;
  if (local_2048._8_4_ == local_2038) {
    local_204c = "Buffer overflow.";
    local_2050 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2050,&DAT_006ddff0);
  }
  *(undefined *)(local_203c + (int)local_2034) = param_4;
  local_203c = local_203c + 1;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  net::packet::meth_0x45f130((packet *)local_2048,param_1);
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  net::packet::meth_0x45f130((packet *)local_2048,param_3);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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
Server::meth_0x553990
          (Server *this,undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 *param_4)

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
  local_2018 = 0xc;
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
  local_2050 = (overflow__vftable_6647c4 *)*param_4;
  net::packet::meth_0x45f130((packet *)local_2048,local_2050);
  local_2050 = (overflow__vftable_6647c4 *)param_4[1];
  net::packet::meth_0x45f130((packet *)local_2048,local_2050);
  local_2050 = (overflow__vftable_6647c4 *)param_4[2];
  net::packet::meth_0x45f130((packet *)local_2048,local_2050);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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
Server::meth_0x553b00(Server *this,undefined4 param_1,undefined4 param_2,undefined param_3)

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
  local_2018 = 0x32;
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
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x553c30(Server *this,undefined4 param_1)

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
  local_2048[0].mbr_0x30 = 0xd;
  net::packet::meth_0x45f130(local_2048,param_1);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x553cf0(Server *this,undefined4 param_1,undefined4 param_2)

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
  local_2048[0].mbr_0x30 = 0xe;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x553dd0(Server *this,undefined4 param_1)

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
  local_2048[0].mbr_0x30 = 0x10;
  net::packet::meth_0x45f130(local_2048,param_1);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x554300(Server *this,undefined4 param_1,undefined4 param_2)

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
  local_2048[0].mbr_0x30 = 0x16;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x554f70(Server *this,int param_1,undefined4 *param_2)

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
  local_2048[0].mbr_0x30 = 0x44;
  puVar2 = param_2;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(local_2048,param_2,(uint)((int)puVar2 + (1 - ((int)param_2 + 1))));
  GameServer::meth_0x5a09d0((GameServer *)this,param_1,local_2048,1);
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

void __thiscall Server::meth_0x555050(Server *this,int param_1,undefined4 param_2,undefined param_3)

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
  local_2018 = 0x45;
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
  GameServer::meth_0x5a09d0((GameServer *)this,param_1,local_2048,1);
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

void __thiscall Server::meth_0x555170(Server *this,uint param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint unaff_EDI;
  uint unaff_retaddr;
  packet apStack_2044 [137];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  pvVar3 = (void *)ResourceSystem::Demand(DAT_00707da8,param_2,(int *)0x1,unaff_EDI);
  if (pvVar3 == (void *)0x0) {
    handle_fatal_error("Attempt to send non-existent creature file to client.");
  }
  uVar2 = *(uint *)((int)pvVar3 + 0x20);
  if (0x1fff < uVar2) {
    handle_fatal_error("Attempt to send over-sized creature file to client.");
  }
  net::packet::packet(apStack_2044);
  apStack_2044[0].mbr_0x30 = 0x47;
  puVar4 = param_2;
  do {
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(apStack_2044,param_2,(uint)((int)puVar4 + (1 - ((int)param_2 + 1))));
  net::packet::meth_0x45f0b0(apStack_2044,uVar2);
  net::packet::meth_0x45f1b0(apStack_2044,*(undefined4 **)((int)pvVar3 + 0x2c),uVar2);
  ResourceSystem::Release(DAT_00707da8,pvVar3);
  GameServer::meth_0x5a09d0((GameServer *)this,(int)param_2,apStack_2044,1);
  apStack_2044[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  apStack_2044[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (apStack_2044[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)apStack_2044[0].buffer.mbr_0x14);
  }
  ExceptionList = puStack_8;
  FUN_00616e15((uint)pvStack_c ^ param_1);
  return;
}



void __thiscall Server::virt_meth_0x5552c0(Server *this,int param_1,void *param_2)

{
  packet *this_00;
  int iVar1;
  Entity *this_01;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  this_00 = &this->packet;
  net::packet::meth_0x5ac5b0(this_00);
  iVar1 = *(int *)(*(int *)&(this->server).base.critical_section.field_0x50 + param_1 * 4);
  if (DAT_0070be0c == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*DAT_0070be0c;
  }
  puVar3 = DAT_0070be0c;
  if (puVar4 != DAT_0070be0c) {
    do {
      this_01 = (Entity *)puVar4[2];
      if ((*(int *)&(this_01->DynamicObject).field_0x1ec == *(int *)(iVar1 + 0x416c)) &&
         (*(int *)&(this_01->DynamicObject).field_0x160 != 0)) {
        net::packet::meth_0x45f130(this_00,*(undefined4 *)&(this_01->DynamicObject).field_0x1dc);
        Entity::meth_0x54a060(this_01,this_00);
        puVar3 = DAT_0070be0c;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != puVar3);
  }
  net::packet::meth_0x45f0b0(this_00,0);
  uVar2 = *(uint *)&(this->packet).buffer.field_0x10;
  *(undefined4 *)&(this->packet).buffer.field_0xc = 0;
  net::packet::meth_0x552bd0((packet *)param_2,(int)this_00,uVar2);
  FUN_0055e110((void *)this->mbr_0x5064,(packet *)param_2);
  return;
}



void __thiscall Server::meth_0x5553c0(Server *this)

{
  byte bVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637c62;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->server).base.vftptr_0x0 = (base__vftable_6a1d1c *)&Server__vftable_6927bc_006927bc;
  local_4 = 3;
  virt_meth_0x552c70(this);
  if (0xf < this->mbr_0x70e0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x70cc);
  }
  this->mbr_0x70e0 = 0xf;
  this->mbr_0x70dc = 0;
  *(undefined *)&this->mbr_0x70cc = 0;
  if (0xf < this->mbr_0x70c0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x70ac);
  }
  this->mbr_0x70c0 = 0xf;
  this->mbr_0x70bc = 0;
  *(undefined *)&this->mbr_0x70ac = 0;
  bVar1 = (this->packet).buffer.mbr_0x4;
  (this->packet).buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  (this->packet).buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (bVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->packet).buffer.mbr_0x14);
  }
  (this->packet).buffer.mbr_0x4 = 0;
  (this->packet).buffer.mbr_0x14 = 0;
  local_4 = 0xffffffff;
  net::server::meth_0x5a1dc0(&this->server);
  ExceptionList = pvStack_c;
  return;
}



void * __thiscall Server::meth_0x5554b0(Server *this,undefined **param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  critical_section *this_00;
  undefined4 unaff_EBX;
  GameServer *unaff_EDI;
  undefined4 in_stack_0000000c;
  Server *local_8;
  char *local_4;
  
  local_8 = this;
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = (Server *)&Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0070bd98 + 4;
  }
  cVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x30))
                    (param_1,in_stack_0000000c);
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&stack0xfffffff0,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0070bd98 + 4;
  }
  this_00 = (critical_section *)
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x18))();
  net::critical_section::meth_0x551880(this_00,param_1,local_4,0,cVar2,unaff_EBX);
  GameServer::meth_0x553600
            (unaff_EDI,param_1,this_00->mbr_0x1dc,(char)local_4,(char)in_stack_0000000c);
  return this_00;
}



void __thiscall
Server::meth_0x5555d0
          (Server *this,int *param_1,void *param_2,float *param_3,float *param_4,undefined param_5)

{
  Entity::meth_0x5680d0((Entity *)param_1,(int *)param_3);
  FUN_00573160(param_2,param_1);
  Entity::meth_0x54a8a0((Entity *)param_1,param_3);
  net::critical_section::meth_0x549fe0((critical_section *)param_1,param_4);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    Entity::meth_0x54adc0((Entity *)param_1);
  }
  meth_0x553990(this,param_1[0x77],*(undefined4 *)((int)param_2 + 0xb4),param_5,param_1 + 1);
  return;
}



void __thiscall Server::meth_0x555640(Server *this,int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0x168) + 4))(param_2);
  meth_0x553850(this,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_2 + 0x1dc),
                *(undefined4 *)(param_2 + 0x2dc),0);
  return;
}



void __thiscall Server::meth_0x555680(Server *this,int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0x168) + 8))(param_2);
  meth_0x553b00(this,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_2 + 0x1dc),0);
  return;
}



void __thiscall Server::meth_0x5556c0(Server *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  void *this_00;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  iVar1 = param_1[0x7b];
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0070bd98 + 4;
  }
  this_00 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x54))
                              (iVar1);
  if (this_00 != (void *)0x0) {
    FUN_0056e500(this_00,param_1);
    meth_0x553c30(this,param_1[0x77]);
  }
  return;
}



void __thiscall Server::meth_0x555750(Server *this,uint param_1,int param_2)

{
  int iVar1;
  critical_section *this_00;
  
  iVar1 = *(int *)(*(int *)&(this->server).base.critical_section.field_0x50 + param_2 * 4);
  this_00 = (critical_section *)GameActionEquip::meth_0x54be10((GameActionEquip *)param_2);
  net::critical_section::meth_0x551ba0(this_00,*(int *)(iVar1 + 0x4168));
  meth_0x553cf0(this,param_1,*(undefined4 *)(iVar1 + 0x4168));
  return;
}



undefined4 __thiscall Server::meth_0x555890(Server *this,int *param_1,int *param_2)

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
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x84))();
  uVar3 = GameActionEquip::AddToTeam(this_00,piVar5,piVar6);
  if ((char)uVar3 != '\0') {
    uVar4 = meth_0x554300(this,param_1,param_2);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



undefined4 * __thiscall Server::virt_meth_0x556250(Server *this,byte param_1)

{
  meth_0x5553c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall
Server::meth_0x556270
          (Server *this,int *param_1,void *param_2,undefined4 param_3,int *param_4,undefined param_5
          )

{
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0.0;
  local_8 = 0;
  local_4 = 0;
  local_18 = 0.0;
  local_14 = 0;
  local_10 = 0;
  FUN_0056f120(param_2,param_3,param_4,&local_c,&local_18);
  meth_0x5555d0(this,param_1,param_2,&local_c,&local_18,param_5);
  return;
}



void __thiscall
Server::meth_0x5562f0
          (Server *this,undefined4 param_1,float *param_2,float *param_3,undefined param_4)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int *unaff_retaddr;
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
  pvVar3 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x54))
                             (param_2);
  meth_0x5555d0(this,unaff_retaddr,pvVar3,param_2,param_3,param_4);
  return;
}



void __thiscall Server::meth_0x556370(Server *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (DAT_0070bd98 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x68))();
  cVar1 = (**(code **)*puVar2)(param_1);
  if (cVar1 != '\0') {
    meth_0x553dd0(this,*(undefined4 *)(param_1 + 0x1dc));
    meth_0x555890(this,*(int **)(param_1 + 0x1dc),(int *)0x1);
  }
  return;
}



void __thiscall
Server::meth_0x5563d0
          (Server *this,undefined4 param_1,undefined4 param_2,int *param_3,undefined param_4)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int *unaff_retaddr;
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
  pvVar3 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x58))
                             (param_2);
  meth_0x556270(this,unaff_retaddr,pvVar3,param_2,param_3,param_4);
  return;
}



void __thiscall
Server::meth_0x556450
          (Server *this,undefined4 param_1,undefined4 param_2,int *param_3,undefined param_4)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int *unaff_retaddr;
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
  pvVar3 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x54))
                             (param_2);
  meth_0x556270(this,unaff_retaddr,pvVar3,param_2,param_3,param_4);
  return;
}



Server * __thiscall Server::Server(Server *this,u_short param_1)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637c62;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::server::server(&this->server,param_1);
  local_4 = 0;
  (this->server).base.vftptr_0x0 = (base__vftable_6a1d1c *)&Server__vftable_6927bc_006927bc;
  this->mbr_0x5064 = 0;
  this->mbr_0x5068 = 0;
  net::packet::packet(&this->packet);
  this->mbr_0x70a4 = 0;
  this->mbr_0x70c0 = 0xf;
  this->mbr_0x70bc = 0;
  *(undefined *)&this->mbr_0x70ac = 0;
  this->mbr_0x70e0 = 0xf;
  this->mbr_0x70dc = 0;
  *(undefined *)&this->mbr_0x70cc = 0;
  this->mbr_0x70e4 = 1;
  this->mbr_0x70ec = 1;
  local_4 = CONCAT31(local_4._1_3_,3);
  this->mbr_0x70e5 = 0;
  this->mbr_0x70e6 = 0;
  this->mbr_0x70e8 = 0;
  this->mbr_0x70ed = 0;
  pcVar1 = "Default_PC.CRT";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0x70c8,"Default_PC.CRT",(uint)(pcVar2 + -0x652cf4));
  ExceptionList = local_c;
  return this;
}



void __thiscall
Server::meth_0x5566b0
          (Server *this,undefined4 param_1,void *param_2,undefined param_3,undefined param_4,
          undefined param_5,undefined param_6,undefined param_7,
          VFX_Parameter__vftable_673a20 *param_8)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  void *this_00;
  int iVar4;
  undefined3 in_stack_0000001d;
  dword in_stack_ffffff9c;
  uint in_stack_ffffffa0;
  undefined4 *puVar5;
  VFX_Parameter__vftable_673a20 *pVVar6;
  Exception__vftable_64787c in_stack_ffffffbc;
  Exception__vftable_64787c *local_14;
  char *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637c80;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    local_14 = &Exception__vftable_64787c_0064787c;
    local_10 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_14,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_0070bd98 + 4;
  }
  local_14 = (Exception__vftable_64787c *)&stack0xffffffbc;
  pcVar1 = "";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffbc,"",(uint)(pcVar3 + -0x64d7d8));
  local_4._0_1_ = 1;
  puVar5 = (undefined4 *)(in_stack_ffffffa0 & 0xffffff00);
  pVVar6 = param_8;
  param_8 = (VFX_Parameter__vftable_673a20 *)&stack0xffffff9c;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xffffff9c,(_String_base *)&param_1,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  this_00 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4) + 0x6c))();
  FUN_005aa070(this_00,in_stack_ffffff9c,puVar5);
  param_8 = (VFX_Parameter__vftable_673a20 *)&stack0xffffffb8;
  in_stack_ffffffbc.virt_deldtor_0x401010_0 = in_stack_ffffffbc.virt_deldtor_0x401010_0 & 0xffffff00
  ;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xffffffb8,(_String_base *)&param_1,0,0xffffffff);
  GameServer::meth_0x556100
            ((GameServer *)this,pVVar6,(undefined4 *)in_stack_ffffffbc.virt_deldtor_0x401010_0);
  if (0xf < _param_7) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = pvStack_c;
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall Server::meth_0x556b60(Server *this)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  int iVar4;
  dword *pdVar5;
  critical_section *this_00;
  char *pcVar6;
  int *unaff_EBX;
  uint uVar7;
  uint unaff_retaddr;
  Exception__vftable_64787c *local_2084;
  char *local_2080;
  int iStack_207c;
  undefined auStack_2078 [28];
  char acStack_205c [16];
  buffer__vftable_6648e8 *pbStack_204c;
  undefined local_2048 [20];
  address__vftable_6647a0 *paStack_2034;
  dword local_2018;
  uint uStack_14;
  void *local_10;
  void *pvStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_00637d06;
  pvStack_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &pvStack_c;
  net::packet::packet((packet *)local_2048);
  uVar7 = 0;
  local_4 = 0;
  local_2018 = 0x3a;
  if (this->mbr_0x70c0 < 0x10) {
    pdVar5 = &this->mbr_0x70ac;
  }
  else {
    pdVar5 = (dword *)this->mbr_0x70ac;
  }
  pdVar3 = pdVar5;
  do {
    cVar1 = *(char *)pdVar3;
    pdVar3 = (dword *)((int)pdVar3 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0
            ((packet *)local_2048,pdVar5,(uint)((int)pdVar3 + (1 - (int)((int)pdVar5 + 1))));
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    local_2084 = &Exception__vftable_64787c_0064787c;
    local_2080 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2084,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_0070bd98 + 4;
  }
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4) + 0x50))();
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    local_2084 = &Exception__vftable_64787c_0064787c;
    local_2080 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2084,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_0070bd98 + 4;
  }
  if (this->mbr_0x70c0 < 0x10) {
    pdVar5 = &this->mbr_0x70ac;
  }
  else {
    pdVar5 = (dword *)this->mbr_0x70ac;
  }
  iStack_207c = (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4) + 0x58))
                          (pdVar5);
  if (iStack_207c == 0) {
    handle_fatal_error("Invalid start map %s when trying to start a new game.");
  }
  if (*(int *)&(this->server).base.critical_section.field_0x5c != 0) {
    local_2080 = (char *)0x5;
    do {
      if (0 < *(int *)(*(int *)(*(int *)&(this->server).base.critical_section.field_0x50 + uVar7 * 4
                               ) + 0x10)) {
        if (this->mbr_0x70e0 < 0x10) {
          pdVar5 = &this->mbr_0x70cc;
        }
        else {
          pdVar5 = (dword *)this->mbr_0x70cc;
        }
        meth_0x555170(this,uVar7,pdVar5);
        if (this->mbr_0x70e0 < 0x10) {
          pdVar5 = &this->mbr_0x70cc;
        }
        else {
          pdVar5 = (dword *)this->mbr_0x70cc;
        }
        this_00 = (critical_section *)meth_0x5554b0(this,pdVar5,1);
        meth_0x555750(this,this_00->mbr_0x1dc,uVar7);
        meth_0x556370(this,(int)this_00);
        unaff_EBX = (int *)CONCAT31((int3)((uint)unaff_EBX >> 8),this->mbr_0x70c4);
        meth_0x556450(this,this_00,*(undefined4 *)(iStack_207c + 0xb4),unaff_EBX,(char)local_2080);
        FUN_00616d8c(acStack_205c,(byte *)"bob %d");
        pcVar6 = acStack_205c;
        auStack_2078._24_4_ = 0xf;
        auStack_2078._20_4_ = 0;
        auStack_2078._4_4_ = auStack_2078._4_4_ & 0xffffff00;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)auStack_2078,acStack_205c,(int)pcVar6 - (int)(acStack_205c + 1));
        uStack_8._0_1_ = 1;
        net::critical_section::meth_0x54de00(this_00,(_String_base *)auStack_2078);
        uStack_8 = (undefined *)((uint)uStack_8._1_3_ << 8);
        if (0xf < (uint)auStack_2078._24_4_) {
                    /* WARNING: Subroutine does not return */
          _free((void *)auStack_2078._4_4_);
        }
        auStack_2078._24_4_ = 0xf;
        auStack_2078._20_4_ = 0;
        auStack_2078._4_4_ = auStack_2078._4_4_ & 0xffffff00;
        meth_0x555050(this,uVar7,this_00->mbr_0x1dc,1);
      }
      uVar7 = uVar7 + 1;
      local_2080 = (char *)((int)local_2080 + -1);
    } while (uVar7 < *(uint *)&(this->server).base.critical_section.field_0x5c);
  }
  paStack_2034 = &address__vftable_6647a0_006647a0;
  pbStack_204c = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0] != '\0') {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048._16_4_);
  }
  ExceptionList = local_10;
  FUN_00616e15(uStack_14 ^ local_4);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall Server::virt_meth_0x556ea0(Server *this,int *param_1,void *param_2,int param_3)

{
  Entity *this_00;
  char cVar1;
  cls_0x58f2b0 *this_01;
  cls_0x599db0 *this_02;
  int iVar2;
  critical_section *pcVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  GameActionEquip *this_03;
  GameActionEquip *this_04;
  GameActionEquip *this_05;
  GameActionEquip *this_06;
  GameActionEquip *this_07;
  GameActionEquip *this_08;
  int iVar8;
  undefined unaff_DI;
  float10 fVar9;
  float10 fVar10;
  uint unaff_retaddr;
  Action__vftable_647888 *in_stack_fffffdac;
  Action__vftable_647888 *in_stack_fffffdb0;
  byte bVar11;
  void *in_stack_fffffdb4;
  undefined in_stack_fffffdb8;
  byte in_stack_fffffdbc;
  byte in_stack_fffffdc0;
  int *piVar12;
  char *pcVar13;
  byte bVar14;
  dword dVar15;
  GameActionEquip *pGVar16;
  GameActionEquip *local_224;
  GameActionEquip *local_220;
  undefined4 local_21c;
  void *local_218;
  void *local_214;
  void *local_210;
  float *local_20c;
  undefined local_205;
  float local_204;
  dword local_200;
  dword local_1fc;
  undefined auStack_1f8 [20];
  dword dStack_1e4;
  dword dStack_1e0;
  float local_1d4;
  undefined auStack_1d0 [28];
  cls_0x4d8d70 acStack_1b4 [5];
  undefined4 local_94 [17];
  char local_50 [64];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00637d31;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  switch(*(uint *)((int)param_2 + 0x30)) {
  case 9:
    local_218 = (void *)0x0;
    local_214 = (void *)0x0;
    local_210 = (void *)0x0;
    local_204 = 0.0;
    local_200 = 0;
    local_1fc = 0;
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_20c);
    FUN_0045e560(param_2,&local_218);
    FUN_0045e560(param_2,&local_214);
    FUN_0045e560(param_2,&local_210);
    GameActionEquip::meth_0x45e460((GameActionEquip *)param_2,(undefined *)&local_224);
    pvVar5 = meth_0x5554b0(this,&acStack_1b4[0].mbr_0x1c,0);
    meth_0x5562f0(this,pvVar5,local_20c,(float *)&local_218,(byte)&local_204);
    break;
  case 10:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(this_03);
    if ((pcVar3 != (critical_section *)0x0) && (pcVar3->mbr_0x1e4 == 0)) {
      net::critical_section::meth_0x551b60(pcVar3);
    }
    break;
  default:
    if (*(uint *)((int)param_2 + 0x30) < 9) break;
    ExceptionList = &local_c;
    cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_2 + 0x18),local_50,0x40,'\x01');
    pcVar13 = "Server received packet with unknown id %d from %s\r\n";
    goto LAB_00557975;
  case 0xf:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,local_94);
    pvVar5 = (void *)GameActionEquip::meth_0x54be10(this_04);
    if (pvVar5 == (void *)0x0) {
      meth_0x554f70(this,(int)param_1,(undefined4 *)"Invalid entity.");
    }
    else {
      pcVar13 = (char *)FUN_00436250((int)pvVar5);
      if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) {
        FUN_00426510(pvVar5,local_94);
      }
      else {
        meth_0x554f70(this,(int)param_1,(undefined4 *)"Entity already has a script.");
      }
    }
    break;
  case 0x1a:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_20c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    GameActionEquip::meth_0x552930((GameActionEquip *)param_2,(undefined2 *)&local_21c);
    GameActionEquip::meth_0x45e460((GameActionEquip *)param_2,&local_205);
    pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(this_05);
    if (pcVar3 == (critical_section *)0x0) {
      meth_0x554f70(this,(int)param_1,(undefined4 *)"Server could not find the specified entity.");
      break;
    }
    Entity::meth_0x54c440((Entity *)pcVar3);
    piVar12 = (int *)FUN_00401130();
    iVar7 = (**(code **)(*piVar12 + 0x14))();
    *(float **)(iVar7 + 0x18) = local_20c;
    *(GameActionEquip **)(iVar7 + 0x1c) = local_220;
    *(undefined2 *)(iVar7 + 0x20) = (undefined2)local_21c;
    *(undefined *)(iVar7 + 0x22) = local_205;
    net::critical_section::meth_0x550720(pcVar3,iVar7);
    goto LAB_0055764c;
  case 0x25:
    break;
  case 0x28:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    piVar12 = (int *)FUN_00401130();
    this_01 = (cls_0x58f2b0 *)(**(code **)(*piVar12 + 0x7c))();
    piVar12 = cls_0x58f2b0::meth_0x58f2b0(this_01,(int)local_224);
    if (piVar12 != (int *)0x0) {
      piVar12 = (int *)FUN_00401150();
      piVar12 = (int *)(**(code **)(*piVar12 + 0x24))();
      cVar1 = (**(code **)(*piVar12 + 4))();
      if (cVar1 != '\0') {
        (**(code **)(*piVar12 + 0x14))();
      }
      (**(code **)*piVar12)();
    }
    break;
  case 0x2d:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    piVar12 = (int *)FUN_00401130();
    this_02 = (cls_0x599db0 *)(**(code **)(*piVar12 + 0x8c))();
    pvVar5 = (void *)cls_0x599db0::meth_0x599db0(this_02,(int)local_224);
    if (pvVar5 != (void *)0x0) {
      dStack_1e0 = 0xf;
      dStack_1e4 = 0;
      auStack_1f8[4] = 0;
      uStack_4 = 0;
      FUN_0059a1c0(pvVar5,(cls_0x50db20 *)auStack_1f8);
      if (dStack_1e4 != 0) {
        piVar12 = (int *)FUN_00401150();
        piVar12 = (int *)(**(code **)(*piVar12 + 0x24))();
        cVar1 = (**(code **)(*piVar12 + 4))();
        if (cVar1 == '\0') {
          (**(code **)*piVar12)();
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_1f8);
          break;
        }
        (**(code **)(*piVar12 + 0x18))();
        (**(code **)*piVar12)();
      }
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_1f8);
    }
    break;
  case 0x31:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_20c);
    local_21c = (int *)((uint)local_21c & 0xffffff00);
    iVar7 = GameActionEquip::meth_0x54be10(this_06);
    if (iVar7 == 0) {
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
    }
    iVar8 = GameActionEquip::meth_0x54be10(this_07);
    pGVar16 = local_220;
    if (iVar8 == 0) {
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
LAB_00557406:
      if (iVar8 != 0 && iVar7 != 0) {
        (**(code **)(**(int **)(iVar7 + 0x168) + 4))();
      }
    }
    else {
      iVar2 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar8 + 0x168),(int)local_220);
      if (iVar2 != 0) goto LAB_00557406;
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
    }
    meth_0x553850(this,local_224,pGVar16,local_20c,(byte)local_21c);
    break;
  case 0x32:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    local_21c = (int *)((uint)local_21c & 0xffffff00);
    iVar7 = GameActionEquip::meth_0x54be10(this_08);
    pGVar16 = local_220;
    if (iVar7 == 0) {
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
LAB_0055748a:
      if (iVar7 != 0) {
        (**(code **)(**(int **)(iVar7 + 0x168) + 8))();
      }
    }
    else {
      iVar8 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar7 + 0x168),(int)local_220);
      if (iVar8 != 0) goto LAB_0055748a;
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
    }
    meth_0x553b00(this,local_224,pGVar16,(byte)local_21c);
    break;
  case 0x33:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    local_21c = (int *)((uint)local_21c & 0xffffff00);
    iVar7 = GameActionEquip::meth_0x54be10(local_224);
    pGVar16 = local_220;
    if (iVar7 == 0) {
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
    }
    iVar8 = 0;
    if ((iVar7 == 0) ||
       (iVar8 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar7 + 0x168),(int)local_220),
       iVar8 != 0)) {
      if ((char)local_21c == '\0') {
        (**(code **)(**(int **)(iVar7 + 0x168) + 8))();
      }
    }
    else {
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
    }
    meth_0x553b00(this,local_224,pGVar16,(byte)local_21c);
    if ((iVar7 != 0) && (iVar8 != 0)) {
      local_204 = *(float *)(iVar7 + 0x1f0);
      local_214 = *(void **)(iVar7 + 8);
      local_200 = *(dword *)(iVar7 + 500);
      local_1fc = *(dword *)(iVar7 + 0x1f8);
      fVar9 = (float10)fsin((float10)local_204 * (float10)0.01745329);
      fVar10 = (float10)fcos((float10)local_204 * (float10)0.01745329);
      local_1d4 = (float)fVar10 * 3.0;
      local_218 = (void *)(float)((float10)*(float *)(iVar7 + 4) + fVar9 * (float10)3.0);
      local_210 = (void *)(*(float *)(iVar7 + 0xc) + local_1d4);
      meth_0x5562f0(this,iVar8,*(float **)(iVar7 + 0x1ec),(float *)&local_218,(byte)&local_204);
    }
    break;
  case 0x35:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    local_220 = (GameActionEquip *)&stack0xfffffdb0;
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffdb0,(char *)&acStack_1b4[0].mbr_0x1c);
    FUN_00556230(in_stack_fffffdb0,in_stack_fffffdb4);
    break;
  case 0x36:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e4c0((GameActionEquip *)param_2,(undefined *)&local_21c);
    GameActionEquip::meth_0x45e4c0((GameActionEquip *)param_2,(undefined *)&local_20c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    FUN_0055f850((void *)this->mbr_0x5064,local_21c,(char)local_20c,local_224,(uint)local_220);
    break;
  case 0x38:
    ExceptionList = &local_c;
    FUN_0055f1d0(this->mbr_0x5064);
    break;
  case 0x39:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e4c0((GameActionEquip *)param_2,(undefined *)&local_220);
    cls_0x55c2d0::cls_0x55c2d0((cls_0x55c2d0 *)this->mbr_0x5064,(byte)local_220,unaff_DI);
    break;
  case 0x3a:
    ExceptionList = &local_c;
    meth_0x556b60(this);
    break;
  case 0x3b:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    local_218 = (void *)0x0;
    local_214 = (void *)0x0;
    local_210 = (void *)0x0;
    FUN_0045e560(param_2,&local_218);
    FUN_0045e560(param_2,&local_214);
    FUN_0045e560(param_2,&local_210);
    pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(local_220);
    if (pcVar3 == (critical_section *)0x0) break;
    Entity::meth_0x54c440((Entity *)pcVar3);
    Entity::meth_0x54a8a0((Entity *)pcVar3,(float *)&local_218);
LAB_0055764c:
    piVar12 = (int *)FUN_00401130();
    iVar7 = (**(code **)(*piVar12 + 0x14))();
    net::critical_section::meth_0x550720(pcVar3,iVar7);
    break;
  case 0x3c:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    local_218 = (void *)0x0;
    local_214 = (void *)0x0;
    local_210 = (void *)0x0;
    FUN_0045e560(param_2,&local_218);
    FUN_0045e560(param_2,&local_214);
    FUN_0045e560(param_2,&local_210);
    pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(local_220);
    if (pcVar3 != (critical_section *)0x0) {
      Entity::meth_0x54c440((Entity *)pcVar3);
      piVar12 = (int *)FUN_00401130();
      iVar7 = (**(code **)(*piVar12 + 0x14))();
      *(void **)(iVar7 + 0x24) = local_218;
      *(void **)(iVar7 + 0x2c) = local_210;
      *(void **)(iVar7 + 0x28) = local_214;
      *(undefined *)(iVar7 + 0x34) = 1;
      net::critical_section::meth_0x550720(pcVar3,iVar7);
    }
    break;
  case 0x3d:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    iVar7 = FUN_00401150();
    iVar7 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x58))();
    cls_0x4d8d70::meth_0x401d20
              ((cls_0x4d8d70 *)(auStack_1d0 + 0x1c),(char *)&acStack_1b4[0].mbr_0x1c);
    uStack_4 = 1;
    meth_0x552e20(this,(int)(auStack_1d0 + 0x1c),*(undefined4 *)(iVar7 + 0xb4));
    uStack_4 = 0xffffffff;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_1d0 + 0x1c));
    meth_0x552f20(this,*(undefined4 *)(iVar7 + 0xb4),'\0',(int)param_1);
    break;
  case 0x40:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500
              ((GameActionEquip *)param_2,
               (undefined4 *)
               (*(int *)(*(int *)&(this->server).base.critical_section.field_0x50 + (int)param_1 * 4
                        ) + 0x416c));
    break;
  case 0x41:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    bVar11 = (byte)in_stack_fffffdb4;
    bVar14 = 0xe;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    pGVar16 = local_220;
    local_220 = (GameActionEquip *)&stack0xfffffdac;
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffdac,(char *)&acStack_1b4[0].mbr_0x1c);
    meth_0x5566b0(this,in_stack_fffffdac,in_stack_fffffdb0,bVar11,in_stack_fffffdb8,
                  in_stack_fffffdbc,in_stack_fffffdc0,bVar14,pGVar16);
    break;
  case 0x43:
    ExceptionList = &local_c;
    puVar4 = (undefined4 *)meth_0x54a5f0(this);
    meth_0x555170(this,(uint)param_1,puVar4);
    dVar15 = 1;
    iVar7 = meth_0x54a5f0(this);
    pvVar5 = meth_0x5554b0(this,iVar7,dVar15);
    meth_0x555750(this,*(uint *)((int)pvVar5 + 0x1dc),(int)param_1);
    meth_0x556370(this,(int)pvVar5);
    iVar7 = FUN_0041d050();
    bVar11 = 5;
    piVar12 = (int *)0x0;
    uVar6 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x5c))();
    meth_0x556450(this,pvVar5,uVar6,piVar12,bVar11);
    pcVar13 = "Client %d joined the game.  Assigned entity %d.\n";
LAB_00557975:
    FUN_00497120((byte *)pcVar13);
    break;
  case 0x46:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    iVar7 = FUN_00401150();
    iVar7 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x58))();
    if (iVar7 == 0) {
      meth_0x554f70(this,(int)param_1,(undefined4 *)"Unable to load map.");
    }
    else {
      meth_0x554f70(this,(int)param_1,(undefined4 *)"Warping to new map.");
      uVar6 = *(undefined4 *)(iVar7 + 0xb4);
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_1d0,(char *)&acStack_1b4[0].mbr_0x1c);
      uStack_4 = 2;
      meth_0x552e20(this,(int)auStack_1d0,uVar6);
      uStack_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_1d0);
      local_220 = *(GameActionEquip **)
                   (*(int *)&(this->server).base.critical_section.field_0x50 + (int)param_1 * 4);
      local_224 = (GameActionEquip *)0x0;
      cls_0x401b00::meth_0x4014f0((cls_0x401b00 *)&DAT_0070be08,&local_21c);
      if (local_21c != DAT_0070be0c) {
        iVar7 = 0;
        do {
          this_00 = (Entity *)local_21c[2];
          if (*(int *)&(this_00->DynamicObject).field_0x1e4 == *(int *)&local_220[8].field_0x268) {
            if (iVar7 == 0) {
              local_224 = *(GameActionEquip **)&(this_00->DynamicObject).field_0x1dc;
            }
            Entity::meth_0x54c440(this_00);
            meth_0x556450(this,this_00,uVar6,(int *)0x0,5 - (char)iVar7);
            iVar7 = iVar7 + 1;
          }
          local_21c = (int *)*local_21c;
        } while (local_21c != DAT_0070be0c);
      }
      meth_0x555050(this,(int)param_1,local_224,1);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/Server.h"

int __thiscall Server::meth_0x54a5f0(Server *this)

{
  if (0xf < this->mbr_0x70e0) {
    return this->mbr_0x70cc;
  }
  return (int)&this->mbr_0x70cc;
}



void __thiscall Server::virt_meth_0x5529a0(Server *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  
  (*(this->server).base.vftptr_0x0[3].virt_meth_0x6162e5_8)(0x10);
  uVar1 = (*(this->server).base.vftptr_0x0[9].virt_meth_0x6162e5_8)();
  this->mbr_0x5064 = (dword)(undefined4 *)CONCAT31(extraout_var,uVar1);
                    /* WARNING: Could not recover jumptable at 0x005529bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (***(code ***)(undefined4 *)CONCAT31(extraout_var,uVar1))();
  return;
}



undefined4 * __thiscall Server::virt_meth_0x552a60(Server *this)

{
  DialogueManager *pDVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637bdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pDVar1 = (DialogueManager *)operator_new(0x14);
  local_4 = 0;
  if (pDVar1 != (DialogueManager *)0x0) {
    pDVar1 = DialogueManager::DialogueManager(pDVar1);
    ExceptionList = local_c;
    return &pDVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



void __thiscall Server::virt_meth_0x552ac0(Server *this)

{
  connection *this_00;
  uint uVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637bdb;
  local_c = ExceptionList;
  uVar1 = 0;
  ExceptionList = &local_c;
  if (*(int *)&(this->server).base.critical_section.field_0x58 != 0) {
    do {
      local_4 = 0xffffffff;
      this_00 = (connection *)operator_new(0x4170);
      local_4 = 0;
      if (this_00 == (connection *)0x0) {
        this_00 = (connection *)0x0;
      }
      else {
        net::connection::connection(this_00);
        *(undefined *)&this_00[1].vftptr_0x0 = 0;
        this_00->vftptr_0x0 = (connection__vftable_6a777c *)&Client__vftable_692718_00692718;
        this_00[1].mbr_0x4 = 0;
      }
      *(connection **)(*(int *)&(this->server).base.critical_section.field_0x50 + uVar1 * 4) =
           this_00;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->server).base.critical_section.field_0x58);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall Server::virt_meth_0x552c70(Server *this)

{
  DialogueManager *this_00;
  
  this_00 = (DialogueManager *)this->mbr_0x5064;
  if (this_00 != (DialogueManager *)0x0) {
    DialogueManager::~DialogueManager(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  net::server::virt_meth_0x5a1b80(&this->server);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall Server::meth_0x552e20(Server *this,int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  local_2048[0].mbr_0x30 = 0x3d;
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    puVar3 = (undefined4 *)(param_1 + 4);
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 4);
  }
  puVar2 = puVar3;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(local_2048,puVar3,(uint)((int)puVar2 + (1 - ((int)puVar3 + 1))));
  net::packet::meth_0x45f130(local_2048,param_2);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x552f20(Server *this,undefined4 param_1,char param_2,int param_3)

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
  local_2048[0].mbr_0x30 = 0x3f;
  net::packet::meth_0x45f130(local_2048,param_1);
  if (param_2 == '\0') {
    GameServer::meth_0x5a09d0((GameServer *)this,param_3,local_2048,1);
  }
  else {
    GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
  }
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
Server::meth_0x553850
          (Server *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

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
  local_2018 = 0x31;
  if (local_2048._8_4_ == local_2038) {
    local_204c = "Buffer overflow.";
    local_2050 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2050,&DAT_006ddff0);
  }
  *(undefined *)(local_203c + (int)local_2034) = param_4;
  local_203c = local_203c + 1;
  if (local_2038 < local_203c) {
    local_2038 = local_203c;
  }
  net::packet::meth_0x45f130((packet *)local_2048,param_1);
  net::packet::meth_0x45f130((packet *)local_2048,param_2);
  net::packet::meth_0x45f130((packet *)local_2048,param_3);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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
Server::meth_0x553990
          (Server *this,undefined4 param_1,undefined4 param_2,undefined param_3,undefined4 *param_4)

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
  local_2018 = 0xc;
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
  local_2050 = (overflow__vftable_6647c4 *)*param_4;
  net::packet::meth_0x45f130((packet *)local_2048,local_2050);
  local_2050 = (overflow__vftable_6647c4 *)param_4[1];
  net::packet::meth_0x45f130((packet *)local_2048,local_2050);
  local_2050 = (overflow__vftable_6647c4 *)param_4[2];
  net::packet::meth_0x45f130((packet *)local_2048,local_2050);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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
Server::meth_0x553b00(Server *this,undefined4 param_1,undefined4 param_2,undefined param_3)

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
  local_2018 = 0x32;
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
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x553c30(Server *this,undefined4 param_1)

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
  local_2048[0].mbr_0x30 = 0xd;
  net::packet::meth_0x45f130(local_2048,param_1);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x553cf0(Server *this,undefined4 param_1,undefined4 param_2)

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
  local_2048[0].mbr_0x30 = 0xe;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x553dd0(Server *this,undefined4 param_1)

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
  local_2048[0].mbr_0x30 = 0x10;
  net::packet::meth_0x45f130(local_2048,param_1);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x554300(Server *this,undefined4 param_1,undefined4 param_2)

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
  local_2048[0].mbr_0x30 = 0x16;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
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

void __thiscall Server::meth_0x554f70(Server *this,int param_1,undefined4 *param_2)

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
  local_2048[0].mbr_0x30 = 0x44;
  puVar2 = param_2;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(local_2048,param_2,(uint)((int)puVar2 + (1 - ((int)param_2 + 1))));
  GameServer::meth_0x5a09d0((GameServer *)this,param_1,local_2048,1);
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

void __thiscall Server::meth_0x555050(Server *this,int param_1,undefined4 param_2,undefined param_3)

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
  local_2018 = 0x45;
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
  GameServer::meth_0x5a09d0((GameServer *)this,param_1,local_2048,1);
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

void __thiscall Server::meth_0x555170(Server *this,uint param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint unaff_EDI;
  uint unaff_retaddr;
  packet apStack_2044 [137];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00637bfb;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  pvVar3 = (void *)ResourceSystem::Demand(DAT_00707da8,param_2,(int *)0x1,unaff_EDI);
  if (pvVar3 == (void *)0x0) {
    handle_fatal_error("Attempt to send non-existent creature file to client.");
  }
  uVar2 = *(uint *)((int)pvVar3 + 0x20);
  if (0x1fff < uVar2) {
    handle_fatal_error("Attempt to send over-sized creature file to client.");
  }
  net::packet::packet(apStack_2044);
  apStack_2044[0].mbr_0x30 = 0x47;
  puVar4 = param_2;
  do {
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0(apStack_2044,param_2,(uint)((int)puVar4 + (1 - ((int)param_2 + 1))));
  net::packet::meth_0x45f0b0(apStack_2044,uVar2);
  net::packet::meth_0x45f1b0(apStack_2044,*(undefined4 **)((int)pvVar3 + 0x2c),uVar2);
  ResourceSystem::Release(DAT_00707da8,pvVar3);
  GameServer::meth_0x5a09d0((GameServer *)this,(int)param_2,apStack_2044,1);
  apStack_2044[0].buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  apStack_2044[0].buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (apStack_2044[0].buffer.mbr_0x4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)apStack_2044[0].buffer.mbr_0x14);
  }
  ExceptionList = puStack_8;
  FUN_00616e15((uint)pvStack_c ^ param_1);
  return;
}



void __thiscall Server::virt_meth_0x5552c0(Server *this,int param_1,void *param_2)

{
  packet *this_00;
  int iVar1;
  Entity *this_01;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  this_00 = &this->packet;
  net::packet::meth_0x5ac5b0(this_00);
  iVar1 = *(int *)(*(int *)&(this->server).base.critical_section.field_0x50 + param_1 * 4);
  if (DAT_0070be0c == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*DAT_0070be0c;
  }
  puVar3 = DAT_0070be0c;
  if (puVar4 != DAT_0070be0c) {
    do {
      this_01 = (Entity *)puVar4[2];
      if ((*(int *)&(this_01->DynamicObject).field_0x1ec == *(int *)(iVar1 + 0x416c)) &&
         (*(int *)&(this_01->DynamicObject).field_0x160 != 0)) {
        net::packet::meth_0x45f130(this_00,*(undefined4 *)&(this_01->DynamicObject).field_0x1dc);
        Entity::meth_0x54a060(this_01,this_00);
        puVar3 = DAT_0070be0c;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != puVar3);
  }
  net::packet::meth_0x45f0b0(this_00,0);
  uVar2 = *(uint *)&(this->packet).buffer.field_0x10;
  *(undefined4 *)&(this->packet).buffer.field_0xc = 0;
  net::packet::meth_0x552bd0((packet *)param_2,(int)this_00,uVar2);
  FUN_0055e110((void *)this->mbr_0x5064,(packet *)param_2);
  return;
}



void __thiscall Server::meth_0x5553c0(Server *this)

{
  byte bVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637c62;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->server).base.vftptr_0x0 = (base__vftable_6a1d1c *)&Server__vftable_6927bc_006927bc;
  local_4 = 3;
  virt_meth_0x552c70(this);
  if (0xf < this->mbr_0x70e0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x70cc);
  }
  this->mbr_0x70e0 = 0xf;
  this->mbr_0x70dc = 0;
  *(undefined *)&this->mbr_0x70cc = 0;
  if (0xf < this->mbr_0x70c0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x70ac);
  }
  this->mbr_0x70c0 = 0xf;
  this->mbr_0x70bc = 0;
  *(undefined *)&this->mbr_0x70ac = 0;
  bVar1 = (this->packet).buffer.mbr_0x4;
  (this->packet).buffer.mbr_0x18 = (dword)&address__vftable_6647a0_006647a0;
  (this->packet).buffer.vftptr_0x0 = &buffer__vftable_6648e8_006648e8;
  if (bVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->packet).buffer.mbr_0x14);
  }
  (this->packet).buffer.mbr_0x4 = 0;
  (this->packet).buffer.mbr_0x14 = 0;
  local_4 = 0xffffffff;
  net::server::meth_0x5a1dc0(&this->server);
  ExceptionList = pvStack_c;
  return;
}



void * __thiscall Server::meth_0x5554b0(Server *this,undefined **param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  critical_section *this_00;
  undefined4 unaff_EBX;
  GameServer *unaff_EDI;
  undefined4 in_stack_0000000c;
  Server *local_8;
  char *local_4;
  
  local_8 = this;
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = (Server *)&Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0070bd98 + 4;
  }
  cVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x30))
                    (param_1,in_stack_0000000c);
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&stack0xfffffff0,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0070bd98 + 4;
  }
  this_00 = (critical_section *)
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x18))();
  net::critical_section::meth_0x551880(this_00,param_1,local_4,0,cVar2,unaff_EBX);
  GameServer::meth_0x553600
            (unaff_EDI,param_1,this_00->mbr_0x1dc,(char)local_4,(char)in_stack_0000000c);
  return this_00;
}



void __thiscall
Server::meth_0x5555d0
          (Server *this,int *param_1,void *param_2,float *param_3,float *param_4,undefined param_5)

{
  Entity::meth_0x5680d0((Entity *)param_1,(int *)param_3);
  FUN_00573160(param_2,param_1);
  Entity::meth_0x54a8a0((Entity *)param_1,param_3);
  net::critical_section::meth_0x549fe0((critical_section *)param_1,param_4);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    Entity::meth_0x54adc0((Entity *)param_1);
  }
  meth_0x553990(this,param_1[0x77],*(undefined4 *)((int)param_2 + 0xb4),param_5,param_1 + 1);
  return;
}



void __thiscall Server::meth_0x555640(Server *this,int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0x168) + 4))(param_2);
  meth_0x553850(this,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_2 + 0x1dc),
                *(undefined4 *)(param_2 + 0x2dc),0);
  return;
}



void __thiscall Server::meth_0x555680(Server *this,int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0x168) + 8))(param_2);
  meth_0x553b00(this,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_2 + 0x1dc),0);
  return;
}



void __thiscall Server::meth_0x5556c0(Server *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  void *this_00;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  iVar1 = param_1[0x7b];
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0070bd98 + 4;
  }
  this_00 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x54))
                              (iVar1);
  if (this_00 != (void *)0x0) {
    FUN_0056e500(this_00,param_1);
    meth_0x553c30(this,param_1[0x77]);
  }
  return;
}



void __thiscall Server::meth_0x555750(Server *this,uint param_1,int param_2)

{
  int iVar1;
  critical_section *this_00;
  
  iVar1 = *(int *)(*(int *)&(this->server).base.critical_section.field_0x50 + param_2 * 4);
  this_00 = (critical_section *)GameActionEquip::meth_0x54be10((GameActionEquip *)param_2);
  net::critical_section::meth_0x551ba0(this_00,*(int *)(iVar1 + 0x4168));
  meth_0x553cf0(this,param_1,*(undefined4 *)(iVar1 + 0x4168));
  return;
}



undefined4 __thiscall Server::meth_0x555890(Server *this,int *param_1,int *param_2)

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
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x84))();
  uVar3 = GameActionEquip::AddToTeam(this_00,piVar5,piVar6);
  if ((char)uVar3 != '\0') {
    uVar4 = meth_0x554300(this,param_1,param_2);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



undefined4 * __thiscall Server::virt_meth_0x556250(Server *this,byte param_1)

{
  meth_0x5553c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall
Server::meth_0x556270
          (Server *this,int *param_1,void *param_2,undefined4 param_3,int *param_4,undefined param_5
          )

{
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0.0;
  local_8 = 0;
  local_4 = 0;
  local_18 = 0.0;
  local_14 = 0;
  local_10 = 0;
  FUN_0056f120(param_2,param_3,param_4,&local_c,&local_18);
  meth_0x5555d0(this,param_1,param_2,&local_c,&local_18,param_5);
  return;
}



void __thiscall
Server::meth_0x5562f0
          (Server *this,undefined4 param_1,float *param_2,float *param_3,undefined param_4)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int *unaff_retaddr;
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
  pvVar3 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x54))
                             (param_2);
  meth_0x5555d0(this,unaff_retaddr,pvVar3,param_2,param_3,param_4);
  return;
}



void __thiscall Server::meth_0x556370(Server *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (DAT_0070bd98 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x68))();
  cVar1 = (**(code **)*puVar2)(param_1);
  if (cVar1 != '\0') {
    meth_0x553dd0(this,*(undefined4 *)(param_1 + 0x1dc));
    meth_0x555890(this,*(int **)(param_1 + 0x1dc),(int *)0x1);
  }
  return;
}



void __thiscall
Server::meth_0x5563d0
          (Server *this,undefined4 param_1,undefined4 param_2,int *param_3,undefined param_4)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int *unaff_retaddr;
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
  pvVar3 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x58))
                             (param_2);
  meth_0x556270(this,unaff_retaddr,pvVar3,param_2,param_3,param_4);
  return;
}



void __thiscall
Server::meth_0x556450
          (Server *this,undefined4 param_1,undefined4 param_2,int *param_3,undefined param_4)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int *unaff_retaddr;
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
  pvVar3 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x54))
                             (param_2);
  meth_0x556270(this,unaff_retaddr,pvVar3,param_2,param_3,param_4);
  return;
}



Server * __thiscall Server::Server(Server *this,u_short param_1)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637c62;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  net::server::server(&this->server,param_1);
  local_4 = 0;
  (this->server).base.vftptr_0x0 = (base__vftable_6a1d1c *)&Server__vftable_6927bc_006927bc;
  this->mbr_0x5064 = 0;
  this->mbr_0x5068 = 0;
  net::packet::packet(&this->packet);
  this->mbr_0x70a4 = 0;
  this->mbr_0x70c0 = 0xf;
  this->mbr_0x70bc = 0;
  *(undefined *)&this->mbr_0x70ac = 0;
  this->mbr_0x70e0 = 0xf;
  this->mbr_0x70dc = 0;
  *(undefined *)&this->mbr_0x70cc = 0;
  this->mbr_0x70e4 = 1;
  this->mbr_0x70ec = 1;
  local_4 = CONCAT31(local_4._1_3_,3);
  this->mbr_0x70e5 = 0;
  this->mbr_0x70e6 = 0;
  this->mbr_0x70e8 = 0;
  this->mbr_0x70ed = 0;
  pcVar1 = "Default_PC.CRT";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0x70c8,"Default_PC.CRT",(uint)(pcVar2 + -0x652cf4));
  ExceptionList = local_c;
  return this;
}



void __thiscall
Server::meth_0x5566b0
          (Server *this,undefined4 param_1,void *param_2,undefined param_3,undefined param_4,
          undefined param_5,undefined param_6,undefined param_7,
          VFX_Parameter__vftable_673a20 *param_8)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  void *this_00;
  int iVar4;
  undefined3 in_stack_0000001d;
  dword in_stack_ffffff9c;
  uint in_stack_ffffffa0;
  undefined4 *puVar5;
  VFX_Parameter__vftable_673a20 *pVVar6;
  Exception__vftable_64787c in_stack_ffffffbc;
  Exception__vftable_64787c *local_14;
  char *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637c80;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    local_14 = &Exception__vftable_64787c_0064787c;
    local_10 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_14,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_0070bd98 + 4;
  }
  local_14 = (Exception__vftable_64787c *)&stack0xffffffbc;
  pcVar1 = "";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffbc,"",(uint)(pcVar3 + -0x64d7d8));
  local_4._0_1_ = 1;
  puVar5 = (undefined4 *)(in_stack_ffffffa0 & 0xffffff00);
  pVVar6 = param_8;
  param_8 = (VFX_Parameter__vftable_673a20 *)&stack0xffffff9c;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xffffff9c,(_String_base *)&param_1,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  this_00 = (void *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4) + 0x6c))();
  FUN_005aa070(this_00,in_stack_ffffff9c,puVar5);
  param_8 = (VFX_Parameter__vftable_673a20 *)&stack0xffffffb8;
  in_stack_ffffffbc.virt_deldtor_0x401010_0 = in_stack_ffffffbc.virt_deldtor_0x401010_0 & 0xffffff00
  ;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xffffffb8,(_String_base *)&param_1,0,0xffffffff);
  GameServer::meth_0x556100
            ((GameServer *)this,pVVar6,(undefined4 *)in_stack_ffffffbc.virt_deldtor_0x401010_0);
  if (0xf < _param_7) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = pvStack_c;
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall Server::meth_0x556b60(Server *this)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  int iVar4;
  dword *pdVar5;
  critical_section *this_00;
  char *pcVar6;
  int *unaff_EBX;
  uint uVar7;
  uint unaff_retaddr;
  Exception__vftable_64787c *local_2084;
  char *local_2080;
  int iStack_207c;
  undefined auStack_2078 [28];
  char acStack_205c [16];
  buffer__vftable_6648e8 *pbStack_204c;
  undefined local_2048 [20];
  address__vftable_6647a0 *paStack_2034;
  dword local_2018;
  uint uStack_14;
  void *local_10;
  void *pvStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_00637d06;
  pvStack_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &pvStack_c;
  net::packet::packet((packet *)local_2048);
  uVar7 = 0;
  local_4 = 0;
  local_2018 = 0x3a;
  if (this->mbr_0x70c0 < 0x10) {
    pdVar5 = &this->mbr_0x70ac;
  }
  else {
    pdVar5 = (dword *)this->mbr_0x70ac;
  }
  pdVar3 = pdVar5;
  do {
    cVar1 = *(char *)pdVar3;
    pdVar3 = (dword *)((int)pdVar3 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0
            ((packet *)local_2048,pdVar5,(uint)((int)pdVar3 + (1 - (int)((int)pdVar5 + 1))));
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    local_2084 = &Exception__vftable_64787c_0064787c;
    local_2080 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2084,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_0070bd98 + 4;
  }
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4) + 0x50))();
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    local_2084 = &Exception__vftable_64787c_0064787c;
    local_2080 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2084,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_0070bd98 + 4;
  }
  if (this->mbr_0x70c0 < 0x10) {
    pdVar5 = &this->mbr_0x70ac;
  }
  else {
    pdVar5 = (dword *)this->mbr_0x70ac;
  }
  iStack_207c = (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4) + 0x58))
                          (pdVar5);
  if (iStack_207c == 0) {
    handle_fatal_error("Invalid start map %s when trying to start a new game.");
  }
  if (*(int *)&(this->server).base.critical_section.field_0x5c != 0) {
    local_2080 = (char *)0x5;
    do {
      if (0 < *(int *)(*(int *)(*(int *)&(this->server).base.critical_section.field_0x50 + uVar7 * 4
                               ) + 0x10)) {
        if (this->mbr_0x70e0 < 0x10) {
          pdVar5 = &this->mbr_0x70cc;
        }
        else {
          pdVar5 = (dword *)this->mbr_0x70cc;
        }
        meth_0x555170(this,uVar7,pdVar5);
        if (this->mbr_0x70e0 < 0x10) {
          pdVar5 = &this->mbr_0x70cc;
        }
        else {
          pdVar5 = (dword *)this->mbr_0x70cc;
        }
        this_00 = (critical_section *)meth_0x5554b0(this,pdVar5,1);
        meth_0x555750(this,this_00->mbr_0x1dc,uVar7);
        meth_0x556370(this,(int)this_00);
        unaff_EBX = (int *)CONCAT31((int3)((uint)unaff_EBX >> 8),this->mbr_0x70c4);
        meth_0x556450(this,this_00,*(undefined4 *)(iStack_207c + 0xb4),unaff_EBX,(char)local_2080);
        FUN_00616d8c(acStack_205c,(byte *)"bob %d");
        pcVar6 = acStack_205c;
        auStack_2078._24_4_ = 0xf;
        auStack_2078._20_4_ = 0;
        auStack_2078._4_4_ = auStack_2078._4_4_ & 0xffffff00;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)auStack_2078,acStack_205c,(int)pcVar6 - (int)(acStack_205c + 1));
        uStack_8._0_1_ = 1;
        net::critical_section::meth_0x54de00(this_00,(_String_base *)auStack_2078);
        uStack_8 = (undefined *)((uint)uStack_8._1_3_ << 8);
        if (0xf < (uint)auStack_2078._24_4_) {
                    /* WARNING: Subroutine does not return */
          _free((void *)auStack_2078._4_4_);
        }
        auStack_2078._24_4_ = 0xf;
        auStack_2078._20_4_ = 0;
        auStack_2078._4_4_ = auStack_2078._4_4_ & 0xffffff00;
        meth_0x555050(this,uVar7,this_00->mbr_0x1dc,1);
      }
      uVar7 = uVar7 + 1;
      local_2080 = (char *)((int)local_2080 + -1);
    } while (uVar7 < *(uint *)&(this->server).base.critical_section.field_0x5c);
  }
  paStack_2034 = &address__vftable_6647a0_006647a0;
  pbStack_204c = &buffer__vftable_6648e8_006648e8;
  if (local_2048[0] != '\0') {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048._16_4_);
  }
  ExceptionList = local_10;
  FUN_00616e15(uStack_14 ^ local_4);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall Server::virt_meth_0x556ea0(Server *this,int *param_1,void *param_2,int param_3)

{
  Entity *this_00;
  char cVar1;
  cls_0x58f2b0 *this_01;
  cls_0x599db0 *this_02;
  int iVar2;
  critical_section *pcVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  GameActionEquip *this_03;
  GameActionEquip *this_04;
  GameActionEquip *this_05;
  GameActionEquip *this_06;
  GameActionEquip *this_07;
  GameActionEquip *this_08;
  int iVar8;
  undefined unaff_DI;
  float10 fVar9;
  float10 fVar10;
  uint unaff_retaddr;
  Action__vftable_647888 *in_stack_fffffdac;
  Action__vftable_647888 *in_stack_fffffdb0;
  byte bVar11;
  void *in_stack_fffffdb4;
  undefined in_stack_fffffdb8;
  byte in_stack_fffffdbc;
  byte in_stack_fffffdc0;
  int *piVar12;
  char *pcVar13;
  byte bVar14;
  dword dVar15;
  GameActionEquip *pGVar16;
  GameActionEquip *local_224;
  GameActionEquip *local_220;
  undefined4 local_21c;
  void *local_218;
  void *local_214;
  void *local_210;
  float *local_20c;
  undefined local_205;
  float local_204;
  dword local_200;
  dword local_1fc;
  undefined auStack_1f8 [20];
  dword dStack_1e4;
  dword dStack_1e0;
  float local_1d4;
  undefined auStack_1d0 [28];
  cls_0x4d8d70 acStack_1b4 [5];
  undefined4 local_94 [17];
  char local_50 [64];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00637d31;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  switch(*(uint *)((int)param_2 + 0x30)) {
  case 9:
    local_218 = (void *)0x0;
    local_214 = (void *)0x0;
    local_210 = (void *)0x0;
    local_204 = 0.0;
    local_200 = 0;
    local_1fc = 0;
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_20c);
    FUN_0045e560(param_2,&local_218);
    FUN_0045e560(param_2,&local_214);
    FUN_0045e560(param_2,&local_210);
    GameActionEquip::meth_0x45e460((GameActionEquip *)param_2,(undefined *)&local_224);
    pvVar5 = meth_0x5554b0(this,&acStack_1b4[0].mbr_0x1c,0);
    meth_0x5562f0(this,pvVar5,local_20c,(float *)&local_218,(byte)&local_204);
    break;
  case 10:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(this_03);
    if ((pcVar3 != (critical_section *)0x0) && (pcVar3->mbr_0x1e4 == 0)) {
      net::critical_section::meth_0x551b60(pcVar3);
    }
    break;
  default:
    if (*(uint *)((int)param_2 + 0x30) < 9) break;
    ExceptionList = &local_c;
    cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_2 + 0x18),local_50,0x40,'\x01');
    pcVar13 = "Server received packet with unknown id %d from %s\r\n";
    goto LAB_00557975;
  case 0xf:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,local_94);
    pvVar5 = (void *)GameActionEquip::meth_0x54be10(this_04);
    if (pvVar5 == (void *)0x0) {
      meth_0x554f70(this,(int)param_1,(undefined4 *)"Invalid entity.");
    }
    else {
      pcVar13 = (char *)FUN_00436250((int)pvVar5);
      if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) {
        FUN_00426510(pvVar5,local_94);
      }
      else {
        meth_0x554f70(this,(int)param_1,(undefined4 *)"Entity already has a script.");
      }
    }
    break;
  case 0x1a:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_20c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    GameActionEquip::meth_0x552930((GameActionEquip *)param_2,(undefined2 *)&local_21c);
    GameActionEquip::meth_0x45e460((GameActionEquip *)param_2,&local_205);
    pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(this_05);
    if (pcVar3 == (critical_section *)0x0) {
      meth_0x554f70(this,(int)param_1,(undefined4 *)"Server could not find the specified entity.");
      break;
    }
    Entity::meth_0x54c440((Entity *)pcVar3);
    piVar12 = (int *)FUN_00401130();
    iVar7 = (**(code **)(*piVar12 + 0x14))();
    *(float **)(iVar7 + 0x18) = local_20c;
    *(GameActionEquip **)(iVar7 + 0x1c) = local_220;
    *(undefined2 *)(iVar7 + 0x20) = (undefined2)local_21c;
    *(undefined *)(iVar7 + 0x22) = local_205;
    net::critical_section::meth_0x550720(pcVar3,iVar7);
    goto LAB_0055764c;
  case 0x25:
    break;
  case 0x28:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    piVar12 = (int *)FUN_00401130();
    this_01 = (cls_0x58f2b0 *)(**(code **)(*piVar12 + 0x7c))();
    piVar12 = cls_0x58f2b0::meth_0x58f2b0(this_01,(int)local_224);
    if (piVar12 != (int *)0x0) {
      piVar12 = (int *)FUN_00401150();
      piVar12 = (int *)(**(code **)(*piVar12 + 0x24))();
      cVar1 = (**(code **)(*piVar12 + 4))();
      if (cVar1 != '\0') {
        (**(code **)(*piVar12 + 0x14))();
      }
      (**(code **)*piVar12)();
    }
    break;
  case 0x2d:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    piVar12 = (int *)FUN_00401130();
    this_02 = (cls_0x599db0 *)(**(code **)(*piVar12 + 0x8c))();
    pvVar5 = (void *)cls_0x599db0::meth_0x599db0(this_02,(int)local_224);
    if (pvVar5 != (void *)0x0) {
      dStack_1e0 = 0xf;
      dStack_1e4 = 0;
      auStack_1f8[4] = 0;
      uStack_4 = 0;
      FUN_0059a1c0(pvVar5,(cls_0x50db20 *)auStack_1f8);
      if (dStack_1e4 != 0) {
        piVar12 = (int *)FUN_00401150();
        piVar12 = (int *)(**(code **)(*piVar12 + 0x24))();
        cVar1 = (**(code **)(*piVar12 + 4))();
        if (cVar1 == '\0') {
          (**(code **)*piVar12)();
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_1f8);
          break;
        }
        (**(code **)(*piVar12 + 0x18))();
        (**(code **)*piVar12)();
      }
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_1f8);
    }
    break;
  case 0x31:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_20c);
    local_21c = (int *)((uint)local_21c & 0xffffff00);
    iVar7 = GameActionEquip::meth_0x54be10(this_06);
    if (iVar7 == 0) {
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
    }
    iVar8 = GameActionEquip::meth_0x54be10(this_07);
    pGVar16 = local_220;
    if (iVar8 == 0) {
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
LAB_00557406:
      if (iVar8 != 0 && iVar7 != 0) {
        (**(code **)(**(int **)(iVar7 + 0x168) + 4))();
      }
    }
    else {
      iVar2 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar8 + 0x168),(int)local_220);
      if (iVar2 != 0) goto LAB_00557406;
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
    }
    meth_0x553850(this,local_224,pGVar16,local_20c,(byte)local_21c);
    break;
  case 0x32:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    local_21c = (int *)((uint)local_21c & 0xffffff00);
    iVar7 = GameActionEquip::meth_0x54be10(this_08);
    pGVar16 = local_220;
    if (iVar7 == 0) {
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
LAB_0055748a:
      if (iVar7 != 0) {
        (**(code **)(**(int **)(iVar7 + 0x168) + 8))();
      }
    }
    else {
      iVar8 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar7 + 0x168),(int)local_220);
      if (iVar8 != 0) goto LAB_0055748a;
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
    }
    meth_0x553b00(this,local_224,pGVar16,(byte)local_21c);
    break;
  case 0x33:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    local_21c = (int *)((uint)local_21c & 0xffffff00);
    iVar7 = GameActionEquip::meth_0x54be10(local_224);
    pGVar16 = local_220;
    if (iVar7 == 0) {
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
    }
    iVar8 = 0;
    if ((iVar7 == 0) ||
       (iVar8 = cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar7 + 0x168),(int)local_220),
       iVar8 != 0)) {
      if ((char)local_21c == '\0') {
        (**(code **)(**(int **)(iVar7 + 0x168) + 8))();
      }
    }
    else {
      local_21c = (int *)CONCAT31(local_21c._1_3_,1);
    }
    meth_0x553b00(this,local_224,pGVar16,(byte)local_21c);
    if ((iVar7 != 0) && (iVar8 != 0)) {
      local_204 = *(float *)(iVar7 + 0x1f0);
      local_214 = *(void **)(iVar7 + 8);
      local_200 = *(dword *)(iVar7 + 500);
      local_1fc = *(dword *)(iVar7 + 0x1f8);
      fVar9 = (float10)fsin((float10)local_204 * (float10)0.01745329);
      fVar10 = (float10)fcos((float10)local_204 * (float10)0.01745329);
      local_1d4 = (float)fVar10 * 3.0;
      local_218 = (void *)(float)((float10)*(float *)(iVar7 + 4) + fVar9 * (float10)3.0);
      local_210 = (void *)(*(float *)(iVar7 + 0xc) + local_1d4);
      meth_0x5562f0(this,iVar8,*(float **)(iVar7 + 0x1ec),(float *)&local_218,(byte)&local_204);
    }
    break;
  case 0x35:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    local_220 = (GameActionEquip *)&stack0xfffffdb0;
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffdb0,(char *)&acStack_1b4[0].mbr_0x1c);
    FUN_00556230(in_stack_fffffdb0,in_stack_fffffdb4);
    break;
  case 0x36:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e4c0((GameActionEquip *)param_2,(undefined *)&local_21c);
    GameActionEquip::meth_0x45e4c0((GameActionEquip *)param_2,(undefined *)&local_20c);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_224);
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    FUN_0055f850((void *)this->mbr_0x5064,local_21c,(char)local_20c,local_224,(uint)local_220);
    break;
  case 0x38:
    ExceptionList = &local_c;
    FUN_0055f1d0(this->mbr_0x5064);
    break;
  case 0x39:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e4c0((GameActionEquip *)param_2,(undefined *)&local_220);
    cls_0x55c2d0::cls_0x55c2d0((cls_0x55c2d0 *)this->mbr_0x5064,(byte)local_220,unaff_DI);
    break;
  case 0x3a:
    ExceptionList = &local_c;
    meth_0x556b60(this);
    break;
  case 0x3b:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    local_218 = (void *)0x0;
    local_214 = (void *)0x0;
    local_210 = (void *)0x0;
    FUN_0045e560(param_2,&local_218);
    FUN_0045e560(param_2,&local_214);
    FUN_0045e560(param_2,&local_210);
    pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(local_220);
    if (pcVar3 == (critical_section *)0x0) break;
    Entity::meth_0x54c440((Entity *)pcVar3);
    Entity::meth_0x54a8a0((Entity *)pcVar3,(float *)&local_218);
LAB_0055764c:
    piVar12 = (int *)FUN_00401130();
    iVar7 = (**(code **)(*piVar12 + 0x14))();
    net::critical_section::meth_0x550720(pcVar3,iVar7);
    break;
  case 0x3c:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    local_218 = (void *)0x0;
    local_214 = (void *)0x0;
    local_210 = (void *)0x0;
    FUN_0045e560(param_2,&local_218);
    FUN_0045e560(param_2,&local_214);
    FUN_0045e560(param_2,&local_210);
    pcVar3 = (critical_section *)GameActionEquip::meth_0x54be10(local_220);
    if (pcVar3 != (critical_section *)0x0) {
      Entity::meth_0x54c440((Entity *)pcVar3);
      piVar12 = (int *)FUN_00401130();
      iVar7 = (**(code **)(*piVar12 + 0x14))();
      *(void **)(iVar7 + 0x24) = local_218;
      *(void **)(iVar7 + 0x2c) = local_210;
      *(void **)(iVar7 + 0x28) = local_214;
      *(undefined *)(iVar7 + 0x34) = 1;
      net::critical_section::meth_0x550720(pcVar3,iVar7);
    }
    break;
  case 0x3d:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    iVar7 = FUN_00401150();
    iVar7 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x58))();
    cls_0x4d8d70::meth_0x401d20
              ((cls_0x4d8d70 *)(auStack_1d0 + 0x1c),(char *)&acStack_1b4[0].mbr_0x1c);
    uStack_4 = 1;
    meth_0x552e20(this,(int)(auStack_1d0 + 0x1c),*(undefined4 *)(iVar7 + 0xb4));
    uStack_4 = 0xffffffff;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_1d0 + 0x1c));
    meth_0x552f20(this,*(undefined4 *)(iVar7 + 0xb4),'\0',(int)param_1);
    break;
  case 0x40:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e500
              ((GameActionEquip *)param_2,
               (undefined4 *)
               (*(int *)(*(int *)&(this->server).base.critical_section.field_0x50 + (int)param_1 * 4
                        ) + 0x416c));
    break;
  case 0x41:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    bVar11 = (byte)in_stack_fffffdb4;
    bVar14 = 0xe;
    GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_220);
    pGVar16 = local_220;
    local_220 = (GameActionEquip *)&stack0xfffffdac;
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffdac,(char *)&acStack_1b4[0].mbr_0x1c);
    meth_0x5566b0(this,in_stack_fffffdac,in_stack_fffffdb0,bVar11,in_stack_fffffdb8,
                  in_stack_fffffdbc,in_stack_fffffdc0,bVar14,pGVar16);
    break;
  case 0x43:
    ExceptionList = &local_c;
    puVar4 = (undefined4 *)meth_0x54a5f0(this);
    meth_0x555170(this,(uint)param_1,puVar4);
    dVar15 = 1;
    iVar7 = meth_0x54a5f0(this);
    pvVar5 = meth_0x5554b0(this,iVar7,dVar15);
    meth_0x555750(this,*(uint *)((int)pvVar5 + 0x1dc),(int)param_1);
    meth_0x556370(this,(int)pvVar5);
    iVar7 = FUN_0041d050();
    bVar11 = 5;
    piVar12 = (int *)0x0;
    uVar6 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x5c))();
    meth_0x556450(this,pvVar5,uVar6,piVar12,bVar11);
    pcVar13 = "Client %d joined the game.  Assigned entity %d.\n";
LAB_00557975:
    FUN_00497120((byte *)pcVar13);
    break;
  case 0x46:
    ExceptionList = &local_c;
    GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&acStack_1b4[0].mbr_0x1c);
    iVar7 = FUN_00401150();
    iVar7 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x58))();
    if (iVar7 == 0) {
      meth_0x554f70(this,(int)param_1,(undefined4 *)"Unable to load map.");
    }
    else {
      meth_0x554f70(this,(int)param_1,(undefined4 *)"Warping to new map.");
      uVar6 = *(undefined4 *)(iVar7 + 0xb4);
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_1d0,(char *)&acStack_1b4[0].mbr_0x1c);
      uStack_4 = 2;
      meth_0x552e20(this,(int)auStack_1d0,uVar6);
      uStack_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_1d0);
      local_220 = *(GameActionEquip **)
                   (*(int *)&(this->server).base.critical_section.field_0x50 + (int)param_1 * 4);
      local_224 = (GameActionEquip *)0x0;
      cls_0x401b00::meth_0x4014f0((cls_0x401b00 *)&DAT_0070be08,&local_21c);
      if (local_21c != DAT_0070be0c) {
        iVar7 = 0;
        do {
          this_00 = (Entity *)local_21c[2];
          if (*(int *)&(this_00->DynamicObject).field_0x1e4 == *(int *)&local_220[8].field_0x268) {
            if (iVar7 == 0) {
              local_224 = *(GameActionEquip **)&(this_00->DynamicObject).field_0x1dc;
            }
            Entity::meth_0x54c440(this_00);
            meth_0x556450(this,this_00,uVar6,(int *)0x0,5 - (char)iVar7);
            iVar7 = iVar7 + 1;
          }
          local_21c = (int *)*local_21c;
        } while (local_21c != DAT_0070be0c);
      }
      meth_0x555050(this,(int)param_1,local_224,1);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/Server.h"
#include "../include/Server.h"
#include "../include/server.h"

undefined4 * __thiscall net::client::server::virt_meth_0x588fc0(server *this,byte param_1)

{
  connection::~connection(&this->connection);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall net::server::meth_0x5a0830(server *this,int param_1)

{
  undefined4 *puVar1;
  base__vftable_6a1d1c *pbVar2;
  void *pvVar3;
  byte unaff_SI;
  uint uVar4;
  
  if ((this->base).critical_section.field_0x54 == '\0') {
    if (*(int *)&(this->base).critical_section.field_0x50 != 0) {
      uVar4 = 0;
      if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
        do {
          puVar1 = *(undefined4 **)(*(int *)&(this->base).critical_section.field_0x50 + uVar4 * 4);
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)&(this->base).critical_section.field_0x58);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)&(this->base).critical_section.field_0x50);
    }
    *(int *)&(this->base).critical_section.field_0x58 = param_1;
    pvVar3 = operator_new(param_1 * 4);
    pbVar2 = (this->base).vftptr_0x0;
    *(void **)&(this->base).critical_section.field_0x50 = pvVar3;
    (*pbVar2[4].virt_meth_0x59d650_0)(&this->base,unaff_SI);
    uVar4 = 0;
    if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
      do {
        *(dword *)(*(int *)(*(int *)&(this->base).critical_section.field_0x50 + uVar4 * 4) + 0xc) =
             (this->base).critical_section.mbr_0x10;
        *(undefined4 *)(*(int *)(*(int *)&(this->base).critical_section.field_0x50 + uVar4 * 4) + 8)
             = *(undefined4 *)&(this->base).critical_section.field_0xc;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)&(this->base).critical_section.field_0x58);
    }
  }
  return;
}



void __thiscall net::server::virt_meth_0x5a0900(server *this)

{
  connection *this_00;
  uint uVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ac0b;
  local_c = ExceptionList;
  uVar1 = 0;
  ExceptionList = &local_c;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      local_4 = 0xffffffff;
      this_00 = (connection *)operator_new(0x4168);
      local_4 = 0;
      if (this_00 == (connection *)0x0) {
        this_00 = (connection *)0x0;
      }
      else {
        connection::connection(this_00);
        this_00->vftptr_0x0 = (connection__vftable_6a777c *)&client__vftable_692710_00692710;
        *(undefined *)&this_00[1].vftptr_0x0 = 0;
      }
      *(connection **)(*(int *)&(this->base).critical_section.field_0x50 + uVar1 * 4) = this_00;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall net::server::virt_meth_0x5a0990(server *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  net::client::meth_0x59d5d0((client *)this);
  if ((this->base).critical_section.field_0x54 != '\0') {
    uVar1 = *(undefined4 *)&(this->base).critical_section.field_0x30;
    uVar2 = *(undefined4 *)&(this->base).critical_section.field_0x40;
    uVar3 = 0;
    if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
      do {
        cls_0x5ab770::meth_0x5ab770
                  (*(cls_0x5ab770 **)(*(int *)&(this->base).critical_section.field_0x50 + uVar3 * 4)
                   ,uVar1,uVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)&(this->base).critical_section.field_0x58);
    }
  }
  return;
}



void __thiscall net::server::meth_0x5a0a30(server *this,int param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  undefined4 uVar3;
  char local_44 [60];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  iVar1 = *(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4);
  if (0 < *(int *)(iVar1 + 0x10)) {
    uVar3 = *(undefined4 *)(iVar1 + 0x40dc);
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_2 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x20000,
               "[server] Receiving update from client %u at %s [%u]\n",param_1,uVar2,uVar3);
    cls_0x5ab960::meth_0x5ab960
              (*(cls_0x5ab960 **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4),
               param_2);
    (*(this->base).vftptr_0x0[8].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
    *(undefined *)
     (*(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x4164) = 1;
  }
  FUN_00616e15(uStack_8 ^ local_4);
  return;
}



uint __thiscall net::server::meth_0x5a0ad0(server *this,int param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      uVar1 = connection::meth_0x5ab8e0
                        (*(connection **)
                          (*(int *)&(this->base).critical_section.field_0x50 + uVar2 * 4),param_1,
                         param_2);
      if ((char)uVar1 != '\0') {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  return 0xffffffff;
}



void __thiscall net::server::meth_0x5a0b20(server *this,int param_1)

{
  cls_0x5aba20 *this_00;
  
  this_00 = *(cls_0x5aba20 **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4);
  if (0 < *(int *)&this_00->field_0x10) {
    cls_0x5aba20::meth_0x5aba20(this_00);
  }
  return;
}



server * __thiscall net::server::server(server *this,u_short param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  base::base(&this->base,param_1);
  local_4 = 0;
  (this->base).vftptr_0x0 = (base__vftable_6a1d1c *)&server__vftable_6a2ec4_006a2ec4;
  *(undefined4 *)&(this->base).critical_section.field_0x50 = 0;
  (this->base).critical_section.field_0x54 = 0;
  (this->base).critical_section.field_0x55 = 0;
  *(undefined4 *)&(this->base).critical_section.field_0x58 = 0;
  *(undefined4 *)&(this->base).critical_section.field_0x5c = 0;
  _eh_vector_constructor_iterator_
            (&(this->base).critical_section.field_0x60,0x14,0x400,address::address,address::~address
            );
  ExceptionList = local_c;
  return this;
}



undefined __thiscall net::server::virt_meth_0x5a0bb0(server *this)

{
  return 1;
}



void __thiscall net::server::virt_meth_0x5a0bc0(server *this,int param_1)

{
  (*((this->base).vftptr_0x0)->virt_meth_0x6162e5_8)();
  *(undefined4 *)&(this->base).critical_section.field_0x3c = 100;
  *(undefined4 *)&(this->base).critical_section.field_0x2c = 3000;
  meth_0x5a0830(this,param_1);
  return;
}



void __thiscall net::server::meth_0x5a0bf0(server *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      meth_0x5a0b20(this,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::meth_0x5a0c20(server *this,void *param_1)

{
  cls_0x5ac9e0 *this_00;
  undefined *_Format;
  char cVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  char local_2088 [64];
  undefined auStack_2048 [48];
  dword dStack_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if ((this->base).critical_section.field_0x55 != '\0') {
    this_00 = (cls_0x5ac9e0 *)((int)param_1 + 0x18);
    ExceptionList = &local_c;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    _Format = &(this->base).critical_section.field_0x8;
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
    ::debug_stream::printf(_Format,0x2000,"[server] Receiving a request for info from %s\n",uVar2);
    cVar1 = (*(this->base).vftptr_0x0[6].virt_meth_0x6162e5_8)(param_1);
    if (cVar1 != '\0') {
      packet::packet((packet *)auStack_2048);
      uStack_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(auStack_2048 + 0x18),(int)this_00);
      dStack_2018 = 2;
      uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
      ::debug_stream::printf(_Format,4,"[server] Sending requested info to %s\n",uVar2);
      (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_4)(param_1);
      net::client::meth_0x59d630((client *)this,param_1);
      auStack_2048._24_4_ = &address__vftable_6647a0_006647a0;
      auStack_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
      if (auStack_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)auStack_2048._20_4_);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::meth_0x5a0d60(server *this,int param_1,uint param_2)

{
  cls_0x5ac9e0 *this_00;
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_retaddr;
  uint *puStack_2090;
  uint uStack_208c;
  char local_2088 [64];
  undefined auStack_2048 [48];
  dword dStack_2018;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_00 = (cls_0x5ac9e0 *)(param_1 + 0x18);
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
  ::debug_stream::printf
            (&(this->base).critical_section.field_0x8,0x4000,
             "[server] Receiving a challenge request from %s\n",uVar2);
  puVar3 = (*(this->base).vftptr_0x0[7].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
  if ((char)puVar3 != '\0') {
    puStack_2090 = (uint *)&(this->base).critical_section.field_0x70;
    uVar4 = 0;
    uStack_208c = 0x7fffffff;
    uVar5 = 0;
    do {
      cVar1 = cls_0x5ac9e0::meth_0x5aca90((cls_0x5ac9e0 *)(puStack_2090 + -4),(int)this_00,'\0');
      if (cVar1 != '\0') break;
      if (*puStack_2090 < uStack_208c) {
        uVar4 = uVar5;
        uStack_208c = *puStack_2090;
      }
      uVar5 = uVar5 + 1;
      puStack_2090 = puStack_2090 + 5;
    } while (uVar5 < 0x400);
    if (uVar5 == 0x400) {
      cls_0x5ac9e0::meth_0x5ac9e0
                ((cls_0x5ac9e0 *)(&(this->base).critical_section.field_0x60 + uVar4 * 0x14),
                 (int)this_00);
      uVar5 = _rand();
      *(uint *)(&(this->base).critical_section.field_0x6c + uVar4 * 0x14) = uVar5 & 0x7fff;
      *(undefined4 *)(&(this->base).critical_section.field_0x70 + uVar4 * 0x14) =
           *(undefined4 *)&(this->base).critical_section.field_0x30;
      uVar5 = uVar4;
    }
    packet::packet((packet *)auStack_2048);
    uStack_4 = 0;
    cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(auStack_2048 + 0x18),(int)this_00);
    dStack_2018 = 3;
    packet::meth_0x45f130
              ((packet *)auStack_2048,
               *(undefined4 *)(&(this->base).critical_section.field_0x6c + uVar5 * 0x14));
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,8,
               "[server] Sending requested challenge to client at %s\n",uVar2);
    (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_8)(auStack_2048);
    net::client::meth_0x59d630((client *)this,auStack_2048);
    auStack_2048._24_4_ = &address__vftable_6647a0_006647a0;
    auStack_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
    if (auStack_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_2048._20_4_);
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::meth_0x5a0f30(server *this,void *param_1,uint param_2)

{
  cls_0x5ac9e0 *this_00;
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  void *pvVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint unaff_retaddr;
  char *pcVar12;
  uint local_2098;
  uint local_2094;
  int local_2090 [2];
  char local_2088 [64];
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  packet::packet((packet *)local_2048);
  this_00 = (cls_0x5ac9e0 *)((int)param_1 + 0x18);
  local_4 = 0;
  cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(local_2048 + 0x18),(int)this_00);
  uVar4 = *(uint *)&(this->base).critical_section.field_0x58;
  uVar9 = 0;
  local_2018 = 4;
  local_2094 = 0;
  if (uVar4 != 0) {
    piVar11 = *(int **)&(this->base).critical_section.field_0x50;
    do {
      local_2094 = uVar9;
      if (*(int *)(*piVar11 + 0x10) == 0) break;
      uVar9 = uVar9 + 1;
      piVar11 = piVar11 + 1;
      local_2094 = uVar9;
    } while (uVar9 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  if (local_2094 < uVar4) {
    iVar5 = *(int *)((int)param_1 + 0xc);
    if ((uint)(*(int *)((int)param_1 + 0x10) - iVar5) < 4) {
      packet::meth_0x45f130((packet *)local_2048,1);
      uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
      pcVar12 = "[server] Denying connection from client at %s. Malformed packet.\n";
    }
    else {
      uVar2 = *(undefined *)(*(int *)((int)param_1 + 0x14) + 1 + iVar5);
      puVar1 = (undefined *)(*(int *)((int)param_1 + 0x14) + iVar5);
      uVar6 = *(undefined2 *)(puVar1 + 2);
      uVar3 = *puVar1;
      *(int *)((int)param_1 + 0xc) = iVar5 + 4;
      if (CONCAT31(CONCAT21(uVar6,uVar2),uVar3) != 1) {
        packet::meth_0x45f130((packet *)local_2048,1);
        uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
        ::debug_stream::printf
                  (&(this->base).critical_section.field_0x8,0x10,
                   "[server] Denying connection from client at %s. Invalid protocol.\n",uVar10);
        (*(this->base).vftptr_0x0[5].virt_meth_0x59d650_0)(&this->base,(byte)local_2048);
        net::client::meth_0x59d630((client *)this,local_2048);
        pvVar7 = ExceptionList;
        ExceptionList = pvStack_c;
        goto joined_r0x005a1134;
      }
      if ((uint)(*(int *)((int)param_1 + 0x10) - (iVar5 + 4)) < 4) {
        packet::meth_0x45f130((packet *)local_2048,1);
        uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
        ::debug_stream::printf
                  (&(this->base).critical_section.field_0x8,0x10,
                   "[server] Denying connection from client at %s. Malformed packet.\n",uVar10);
        (*(this->base).vftptr_0x0[5].virt_meth_0x59d650_0)(&this->base,(byte)local_2048);
        net::client::meth_0x59d630((client *)this,local_2048);
        pvVar7 = ExceptionList;
        ExceptionList = pvStack_c;
        goto joined_r0x005a1134;
      }
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,local_2090);
      local_2098 = 0;
      piVar11 = (int *)&(this->base).critical_section.field_0x6c;
      do {
        cVar8 = cls_0x5ac9e0::meth_0x5aca90((cls_0x5ac9e0 *)(piVar11 + -3),(int)this_00,'\0');
        if ((cVar8 != '\0') && (*piVar11 == local_2090[0])) {
          if (local_2098 < 0x400) {
            uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
            ::debug_stream::printf
                      (&(this->base).critical_section.field_0x8,0x8000,
                       "[server] Receiving a connect request from %s\n",uVar10);
            cVar8 = (*(this->base).vftptr_0x0[7].virt_meth_0x6162e5_4)(param_1);
            if (cVar8 == '\0') {
              packet::meth_0x45f130((packet *)local_2048,1);
              uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
              pcVar12 = "[server] Denying connection from client at %s\n";
            }
            else {
              connection::meth_0x5abc00
                        (*(connection **)
                          (*(int *)&(this->base).critical_section.field_0x50 + local_2094 * 4),
                         &(this->base).critical_section.mbr_0x14,
                         *(undefined2 *)&(this->base).critical_section.field_0x28,(int)this_00,
                         *(undefined2 *)((int)param_1 + 0x24),
                         *(undefined4 *)&(this->base).critical_section.field_0x40);
              *(undefined *)
               (*(int *)(*(int *)&(this->base).critical_section.field_0x50 + local_2094 * 4) +
               0x4164) = 0;
              *(int *)&(this->base).critical_section.field_0x5c =
                   *(int *)&(this->base).critical_section.field_0x5c + 1;
              packet::meth_0x45f130((packet *)local_2048,0);
              uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
              pcVar12 = "[server] Accepting connection from client at %s\n";
            }
            goto LAB_005a1276;
          }
          break;
        }
        local_2098 = local_2098 + 1;
        piVar11 = piVar11 + 5;
      } while (local_2098 < 0x400);
      packet::meth_0x45f130((packet *)local_2048,1);
      uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
      pcVar12 = "[server] Denying connection from client at %s. Invalid challenge.\n";
    }
  }
  else {
    packet::meth_0x45f130((packet *)local_2048,1);
    uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
    pcVar12 = "[server] Denying connection from client at %s. Server full.\n";
  }
LAB_005a1276:
  ::debug_stream::printf(&(this->base).critical_section.field_0x8,0x10,pcVar12,uVar10);
  (*(this->base).vftptr_0x0[5].virt_meth_0x59d650_0)(&this->base,(byte)local_2048);
  net::client::meth_0x59d630((client *)this,local_2048);
  pvVar7 = ExceptionList;
  ExceptionList = pvStack_c;
joined_r0x005a1134:
  pvStack_c = ExceptionList;
  if (local_2048[4] != 0) {
    local_2048._24_4_ = &address__vftable_6647a0_006647a0;
    local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
    ExceptionList = pvVar7;
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048._20_4_);
  }
  local_2048._24_4_ = &address__vftable_6647a0_006647a0;
  local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::meth_0x5a1410(server *this,int param_1)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 uVar4;
  uint unaff_retaddr;
  char local_2088 [60];
  buffer__vftable_6648e8 *pbStack_204c;
  char local_2048;
  void *pvStack_2038;
  address__vftable_6647a0 *paStack_2034;
  cls_0x5ac9e0 local_2030 [2];
  dword local_2018;
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  iVar1 = *(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4);
  if (0 < *(int *)(iVar1 + 0x10)) {
    uVar3 = *(uint *)(iVar1 + 0x54);
    ExceptionList = &local_c;
    DVar2 = timeGetTime();
    uVar3 = FUN_005b8d00(uVar3,DVar2);
    if (100 < uVar3) {
      packet::packet((packet *)&local_2048);
      local_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0
                (local_2030,
                 *(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x1c);
      local_2018 = 7;
      uVar4 = cls_0x5ac9e0::meth_0x5acaf0(local_2030,local_2088,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x80,
                 "[server] Sending keepalive to client %u at %s\n",param_1,uVar4);
      (*(this->base).vftptr_0x0[6].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
      connection::meth_0x5ac450
                (*(connection **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4),
                 &pbStack_204c,0);
      paStack_2034 = &address__vftable_6647a0_006647a0;
      pbStack_204c = &buffer__vftable_6648e8_006648e8;
      if (local_2048 != '\0') {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_2038);
      }
    }
  }
  ExceptionList = local_10;
  FUN_00616e15(uStack_14 ^ local_4);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::meth_0x5a1550(server *this,int param_1,char param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  char local_2088 [64];
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (0 < *(int *)(*(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x10)
     ) {
    ExceptionList = &local_c;
    if (param_2 != '\0') {
      ExceptionList = &local_c;
      packet::packet((packet *)local_2048);
      local_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0
                ((cls_0x5ac9e0 *)(local_2048 + 0x18),
                 *(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x1c);
      local_2018 = 8;
      uVar2 = cls_0x5ac9e0::meth_0x5acaf0
                        ((cls_0x5ac9e0 *)(local_2048 + 0x18),local_2088,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x10,
                 "[server] Sending disconnect to client %u at %s\n",param_1,uVar2);
      (*(this->base).vftptr_0x0[6].virt_meth_0x6162e5_4)(param_1,local_2048);
      connection::meth_0x5ac450
                (*(connection **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4),
                 local_2048,2);
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
    connection::Set_mbr_0x10_to_0
              (*(connection **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4));
    puVar1 = &(this->base).critical_section.field_0x5c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
net::server::meth_0x5a16a0
          (server *this,uint param_1,int param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined *_Format;
  char cVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  char local_2088 [56];
  undefined auStack_2050 [48];
  dword dStack_2020;
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  _Format = &(this->base).critical_section.field_0x8;
  ExceptionList = &pvStack_c;
  uVar2 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_2 + 0x18),local_2088,0x40,'\x01');
  ::debug_stream::printf
            (_Format,0x10000,"[server] Receiving a start request from client %u at %s\n",param_1,
             uVar2);
  cVar1 = (*(this->base).vftptr_0x0[7].virt_meth_0x6162e5_8)(param_1,param_2);
  if (cVar1 == '\0') {
    meth_0x5a1550(this,param_1,'\x01');
  }
  else {
    packet::packet((packet *)auStack_2050);
    pvStack_c = (void *)0x0;
    cls_0x5ac9e0::meth_0x5ac9e0
              ((cls_0x5ac9e0 *)(auStack_2050 + 0x18),
               *(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x1c);
    dStack_2020 = 5;
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0
                      ((cls_0x5ac9e0 *)(param_2 + 0x18),&stack0xffffdf70,0x40,'\x01');
    ::debug_stream::printf(_Format,0x20,"[server] Sending start to client %u at %s\n",param_1,uVar2)
    ;
    (*(this->base).vftptr_0x0[5].virt_meth_0x6162e5_4)(param_1,auStack_2050);
    connection::meth_0x5ac450
              (*(connection **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4),
               auStack_2050,1);
    auStack_2050._24_4_ = &address__vftable_6647a0_006647a0;
    auStack_2050._0_4_ = &buffer__vftable_6648e8_006648e8;
    if (auStack_2050[4] != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_2050._20_4_);
    }
  }
  ExceptionList = pvStack_14;
  FUN_00616e15(uStack_18 ^ (uint)puStack_8);
  return;
}



void __thiscall net::server::meth_0x5a1800(server *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  uVar1 = meth_0x5a0ad0(this,(int)(cls_0x5ac9e0 *)(param_1 + 0x18),*(short *)(param_1 + 0x24));
  if (uVar1 != 0xffffffff) {
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x80000,
               "[server] Receiving disconnect request from client %u at %s\n",uVar1,uVar2);
    (*(this->base).vftptr_0x0[8].virt_meth_0x6162e5_4)(uVar1,param_1);
    meth_0x5a1550(this,uVar1,'\0');
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::server::meth_0x5a18c0(server *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      meth_0x5a1410(this,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  return;
}



void __thiscall net::server::meth_0x5a18f0(server *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      meth_0x5a1550(this,uVar1,'\x01');
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  return;
}



void __thiscall net::server::meth_0x5a1920(server *this,int param_1)

{
  cls_0x5ab930 *this_00;
  char cVar1;
  int iVar2;
  
  this_00 = *(cls_0x5ab930 **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4);
  if (0 < *(int *)&this_00->field_0x10) {
    iVar2 = cls_0x5ab930::meth_0x5ab930
                      (this_00,*(int *)&(this->base).critical_section.field_0x40,
                       *(uint *)&(this->base).critical_section.field_0x2c,
                       *(int *)&(this->base).critical_section.field_0x3c);
    if ((char)iVar2 != '\0') {
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x1000000,
                 "[server] Client %u timed out after %u milliseconds\n",param_1,
                 *(undefined4 *)
                  (*(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x44)
                );
      cVar1 = (*(this->base).vftptr_0x0[9].virt_meth_0x6162e5_4)
                        (param_1,*(undefined4 *)
                                  (*(int *)(*(int *)&(this->base).critical_section.field_0x50 +
                                           param_1 * 4) + 0x44));
      if (cVar1 != '\0') {
        meth_0x5a1550(this,param_1,'\x01');
      }
    }
  }
  return;
}



void __thiscall net::server::meth_0x5a19a0(server *this,char param_1)

{
  char cVar1;
  
  cVar1 = (this->base).critical_section.field_0x54;
  if (cVar1 != param_1) {
    if (cVar1 != '\0') {
      meth_0x5a18f0(this);
    }
    (this->base).critical_section.field_0x54 = param_1;
  }
  return;
}



uint __thiscall net::server::virt_meth_0x5a19c0(server *this)

{
  uint in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((this->base).critical_section.field_0x54 == '\0') {
    return in_EAX & 0xffffff00;
  }
  uVar1 = net::client::meth_0x59d930((client *)this);
  uVar2 = meth_0x5a18c0(this);
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}



void __thiscall net::server::meth_0x5a19f0(server *this,void *param_1)

{
  undefined4 uVar1;
  uint unaff_EDI;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  switch(*(undefined4 *)((int)param_1 + 0x30)) {
  case 2:
    meth_0x5a0c20(this,param_1);
    break;
  case 3:
    meth_0x5a0d60(this,(int)param_1,unaff_EDI);
    break;
  case 4:
    meth_0x5a0f30(this,param_1,unaff_EDI);
    break;
  default:
    uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x1000,
               "[server] Receiving out-of-band user packet %u from %s\n",
               *(undefined4 *)((int)param_1 + 0x30),uVar1);
    (*(this->base).vftptr_0x0[9].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
    break;
  case 8:
    meth_0x5a1800(this,(int)param_1);
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::server::meth_0x5a1ab0(server *this,uint param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 in_stack_ffffffbc;
  
  iVar1 = DAT_007062c0;
  if (*(int *)((int)param_2 + 0x30) == 5) {
    meth_0x5a16a0(this,param_1,(int)param_2,unaff_EDI,unaff_ESI,in_stack_ffffffbc);
  }
  else if (*(int *)((int)param_2 + 0x30) == 6) {
    meth_0x5a0a30(this,param_1,param_2);
  }
  else {
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0
                      ((cls_0x5ac9e0 *)((int)param_2 + 0x18),&stack0xffffffbc,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x1000,
               "[server] Receiving sequenced user packet %u from client %u at %s\n",
               *(undefined4 *)((int)param_2 + 0x30),param_1,uVar2);
    (*(this->base).vftptr_0x0[8].virt_meth_0x6162e5_8)(param_1,param_2);
  }
  FUN_00616e15(iVar1);
  return;
}



void __thiscall net::server::meth_0x5a1b50(server *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      meth_0x5a1920(this,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  return;
}



void __thiscall net::server::virt_meth_0x5a1b80(server *this)

{
  undefined4 *puVar1;
  uint uVar2;
  
  meth_0x5a19a0(this,'\0');
  if (*(int *)&(this->base).critical_section.field_0x50 == 0) {
    return;
  }
  uVar2 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      puVar1 = *(undefined4 **)(*(int *)&(this->base).critical_section.field_0x50 + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)&(this->base).critical_section.field_0x58);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&(this->base).critical_section.field_0x50);
}



void __thiscall net::server::virt_meth_0x5a1bd0(server *this)

{
  if ((this->base).critical_section.field_0x54 != '\0') {
    net::client::meth_0x59d5f0((client *)this);
    meth_0x5a1b50(this);
    meth_0x5a0bf0(this);
    FUN_005a1890(this);
    return;
  }
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::virt_meth_0x5a1c00(server *this,void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  void *unaff_EBP;
  undefined4 unaff_ESI;
  uint unaff_retaddr;
  undefined local_2048 [24];
  cls_0x5ac9e0 local_2030;
  word local_2024;
  dword local_2014;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac76;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if ((this->base).critical_section.field_0x54 != '\0') {
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
            meth_0x5a19f0(this,local_2048);
          } while (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc));
        }
        buffer::~buffer((buffer *)local_2048);
      }
      else {
        meth_0x5a19f0(this,param_1);
      }
    }
    else {
      uVar1 = meth_0x5a0ad0(this,(int)param_1 + 0x18,*(short *)((int)param_1 + 0x24));
      if ((uVar1 != 0xffffffff) &&
         (uVar2 = connection::meth_0x5ab7a0
                            (*(connection **)
                              (*(int *)&(this->base).critical_section.field_0x50 + uVar1 * 4),
                             param_1,*(uint *)&(this->base).critical_section.field_0x40,unaff_ESI,
                             unaff_EBP,unaff_EBX), (char)uVar2 != '\0')) {
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
              meth_0x5a1ab0(this,uVar1,local_2048);
            } while (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc));
          }
          buffer::~buffer((buffer *)local_2048);
        }
        else {
          meth_0x5a1ab0(this,uVar1,param_1);
        }
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall net::server::meth_0x5a1dc0(server *this)

{
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063aca1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->base).vftptr_0x0 = (base__vftable_6a1d1c *)&server__vftable_6a2ec4_006a2ec4;
  local_4 = 1;
  virt_meth_0x5a1b80(this);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_
            (&(this->base).critical_section.field_0x60,0x14,0x400,address::~address);
  local_4 = 0xffffffff;
  base::meth_0x59d530(&this->base);
  ExceptionList = local_c;
  return;
}



undefined4 * __thiscall net::server::virt_meth_0x5a1e30(server *this,byte param_1)

{
  meth_0x5a1dc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/server.h"

undefined4 * __thiscall net::client::server::virt_meth_0x588fc0(server *this,byte param_1)

{
  connection::~connection(&this->connection);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall net::server::meth_0x5a0830(server *this,int param_1)

{
  undefined4 *puVar1;
  base__vftable_6a1d1c *pbVar2;
  void *pvVar3;
  byte unaff_SI;
  uint uVar4;
  
  if ((this->base).critical_section.field_0x54 == '\0') {
    if (*(int *)&(this->base).critical_section.field_0x50 != 0) {
      uVar4 = 0;
      if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
        do {
          puVar1 = *(undefined4 **)(*(int *)&(this->base).critical_section.field_0x50 + uVar4 * 4);
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)&(this->base).critical_section.field_0x58);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)&(this->base).critical_section.field_0x50);
    }
    *(int *)&(this->base).critical_section.field_0x58 = param_1;
    pvVar3 = operator_new(param_1 * 4);
    pbVar2 = (this->base).vftptr_0x0;
    *(void **)&(this->base).critical_section.field_0x50 = pvVar3;
    (*pbVar2[4].virt_meth_0x59d650_0)(&this->base,unaff_SI);
    uVar4 = 0;
    if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
      do {
        *(dword *)(*(int *)(*(int *)&(this->base).critical_section.field_0x50 + uVar4 * 4) + 0xc) =
             (this->base).critical_section.mbr_0x10;
        *(undefined4 *)(*(int *)(*(int *)&(this->base).critical_section.field_0x50 + uVar4 * 4) + 8)
             = *(undefined4 *)&(this->base).critical_section.field_0xc;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)&(this->base).critical_section.field_0x58);
    }
  }
  return;
}



void __thiscall net::server::virt_meth_0x5a0900(server *this)

{
  connection *this_00;
  uint uVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ac0b;
  local_c = ExceptionList;
  uVar1 = 0;
  ExceptionList = &local_c;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      local_4 = 0xffffffff;
      this_00 = (connection *)operator_new(0x4168);
      local_4 = 0;
      if (this_00 == (connection *)0x0) {
        this_00 = (connection *)0x0;
      }
      else {
        connection::connection(this_00);
        this_00->vftptr_0x0 = (connection__vftable_6a777c *)&client__vftable_692710_00692710;
        *(undefined *)&this_00[1].vftptr_0x0 = 0;
      }
      *(connection **)(*(int *)&(this->base).critical_section.field_0x50 + uVar1 * 4) = this_00;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall net::server::virt_meth_0x5a0990(server *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  net::client::meth_0x59d5d0((client *)this);
  if ((this->base).critical_section.field_0x54 != '\0') {
    uVar1 = *(undefined4 *)&(this->base).critical_section.field_0x30;
    uVar2 = *(undefined4 *)&(this->base).critical_section.field_0x40;
    uVar3 = 0;
    if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
      do {
        cls_0x5ab770::meth_0x5ab770
                  (*(cls_0x5ab770 **)(*(int *)&(this->base).critical_section.field_0x50 + uVar3 * 4)
                   ,uVar1,uVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)&(this->base).critical_section.field_0x58);
    }
  }
  return;
}



void __thiscall net::server::meth_0x5a0a30(server *this,int param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  undefined4 uVar3;
  char local_44 [60];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  iVar1 = *(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4);
  if (0 < *(int *)(iVar1 + 0x10)) {
    uVar3 = *(undefined4 *)(iVar1 + 0x40dc);
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_2 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x20000,
               "[server] Receiving update from client %u at %s [%u]\n",param_1,uVar2,uVar3);
    cls_0x5ab960::meth_0x5ab960
              (*(cls_0x5ab960 **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4),
               param_2);
    (*(this->base).vftptr_0x0[8].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
    *(undefined *)
     (*(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x4164) = 1;
  }
  FUN_00616e15(uStack_8 ^ local_4);
  return;
}



uint __thiscall net::server::meth_0x5a0ad0(server *this,int param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      uVar1 = connection::meth_0x5ab8e0
                        (*(connection **)
                          (*(int *)&(this->base).critical_section.field_0x50 + uVar2 * 4),param_1,
                         param_2);
      if ((char)uVar1 != '\0') {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  return 0xffffffff;
}



void __thiscall net::server::meth_0x5a0b20(server *this,int param_1)

{
  cls_0x5aba20 *this_00;
  
  this_00 = *(cls_0x5aba20 **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4);
  if (0 < *(int *)&this_00->field_0x10) {
    cls_0x5aba20::meth_0x5aba20(this_00);
  }
  return;
}



server * __thiscall net::server::server(server *this,u_short param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  base::base(&this->base,param_1);
  local_4 = 0;
  (this->base).vftptr_0x0 = (base__vftable_6a1d1c *)&server__vftable_6a2ec4_006a2ec4;
  *(undefined4 *)&(this->base).critical_section.field_0x50 = 0;
  (this->base).critical_section.field_0x54 = 0;
  (this->base).critical_section.field_0x55 = 0;
  *(undefined4 *)&(this->base).critical_section.field_0x58 = 0;
  *(undefined4 *)&(this->base).critical_section.field_0x5c = 0;
  _eh_vector_constructor_iterator_
            (&(this->base).critical_section.field_0x60,0x14,0x400,address::address,address::~address
            );
  ExceptionList = local_c;
  return this;
}



undefined __thiscall net::server::virt_meth_0x5a0bb0(server *this)

{
  return 1;
}



void __thiscall net::server::virt_meth_0x5a0bc0(server *this,int param_1)

{
  (*((this->base).vftptr_0x0)->virt_meth_0x6162e5_8)();
  *(undefined4 *)&(this->base).critical_section.field_0x3c = 100;
  *(undefined4 *)&(this->base).critical_section.field_0x2c = 3000;
  meth_0x5a0830(this,param_1);
  return;
}



void __thiscall net::server::meth_0x5a0bf0(server *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      meth_0x5a0b20(this,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::meth_0x5a0c20(server *this,void *param_1)

{
  cls_0x5ac9e0 *this_00;
  undefined *_Format;
  char cVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  char local_2088 [64];
  undefined auStack_2048 [48];
  dword dStack_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if ((this->base).critical_section.field_0x55 != '\0') {
    this_00 = (cls_0x5ac9e0 *)((int)param_1 + 0x18);
    ExceptionList = &local_c;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    _Format = &(this->base).critical_section.field_0x8;
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
    ::debug_stream::printf(_Format,0x2000,"[server] Receiving a request for info from %s\n",uVar2);
    cVar1 = (*(this->base).vftptr_0x0[6].virt_meth_0x6162e5_8)(param_1);
    if (cVar1 != '\0') {
      packet::packet((packet *)auStack_2048);
      uStack_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(auStack_2048 + 0x18),(int)this_00);
      dStack_2018 = 2;
      uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
      ::debug_stream::printf(_Format,4,"[server] Sending requested info to %s\n",uVar2);
      (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_4)(param_1);
      net::client::meth_0x59d630((client *)this,param_1);
      auStack_2048._24_4_ = &address__vftable_6647a0_006647a0;
      auStack_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
      if (auStack_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)auStack_2048._20_4_);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::meth_0x5a0d60(server *this,int param_1,uint param_2)

{
  cls_0x5ac9e0 *this_00;
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_retaddr;
  uint *puStack_2090;
  uint uStack_208c;
  char local_2088 [64];
  undefined auStack_2048 [48];
  dword dStack_2018;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_00 = (cls_0x5ac9e0 *)(param_1 + 0x18);
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
  ::debug_stream::printf
            (&(this->base).critical_section.field_0x8,0x4000,
             "[server] Receiving a challenge request from %s\n",uVar2);
  puVar3 = (*(this->base).vftptr_0x0[7].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
  if ((char)puVar3 != '\0') {
    puStack_2090 = (uint *)&(this->base).critical_section.field_0x70;
    uVar4 = 0;
    uStack_208c = 0x7fffffff;
    uVar5 = 0;
    do {
      cVar1 = cls_0x5ac9e0::meth_0x5aca90((cls_0x5ac9e0 *)(puStack_2090 + -4),(int)this_00,'\0');
      if (cVar1 != '\0') break;
      if (*puStack_2090 < uStack_208c) {
        uVar4 = uVar5;
        uStack_208c = *puStack_2090;
      }
      uVar5 = uVar5 + 1;
      puStack_2090 = puStack_2090 + 5;
    } while (uVar5 < 0x400);
    if (uVar5 == 0x400) {
      cls_0x5ac9e0::meth_0x5ac9e0
                ((cls_0x5ac9e0 *)(&(this->base).critical_section.field_0x60 + uVar4 * 0x14),
                 (int)this_00);
      uVar5 = _rand();
      *(uint *)(&(this->base).critical_section.field_0x6c + uVar4 * 0x14) = uVar5 & 0x7fff;
      *(undefined4 *)(&(this->base).critical_section.field_0x70 + uVar4 * 0x14) =
           *(undefined4 *)&(this->base).critical_section.field_0x30;
      uVar5 = uVar4;
    }
    packet::packet((packet *)auStack_2048);
    uStack_4 = 0;
    cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(auStack_2048 + 0x18),(int)this_00);
    dStack_2018 = 3;
    packet::meth_0x45f130
              ((packet *)auStack_2048,
               *(undefined4 *)(&(this->base).critical_section.field_0x6c + uVar5 * 0x14));
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,8,
               "[server] Sending requested challenge to client at %s\n",uVar2);
    (*(this->base).vftptr_0x0[4].virt_meth_0x6162e5_8)(auStack_2048);
    net::client::meth_0x59d630((client *)this,auStack_2048);
    auStack_2048._24_4_ = &address__vftable_6647a0_006647a0;
    auStack_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
    if (auStack_2048[4] != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_2048._20_4_);
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::meth_0x5a0f30(server *this,void *param_1,uint param_2)

{
  cls_0x5ac9e0 *this_00;
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  void *pvVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint unaff_retaddr;
  char *pcVar12;
  uint local_2098;
  uint local_2094;
  int local_2090 [2];
  char local_2088 [64];
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  packet::packet((packet *)local_2048);
  this_00 = (cls_0x5ac9e0 *)((int)param_1 + 0x18);
  local_4 = 0;
  cls_0x5ac9e0::meth_0x5ac9e0((cls_0x5ac9e0 *)(local_2048 + 0x18),(int)this_00);
  uVar4 = *(uint *)&(this->base).critical_section.field_0x58;
  uVar9 = 0;
  local_2018 = 4;
  local_2094 = 0;
  if (uVar4 != 0) {
    piVar11 = *(int **)&(this->base).critical_section.field_0x50;
    do {
      local_2094 = uVar9;
      if (*(int *)(*piVar11 + 0x10) == 0) break;
      uVar9 = uVar9 + 1;
      piVar11 = piVar11 + 1;
      local_2094 = uVar9;
    } while (uVar9 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  if (local_2094 < uVar4) {
    iVar5 = *(int *)((int)param_1 + 0xc);
    if ((uint)(*(int *)((int)param_1 + 0x10) - iVar5) < 4) {
      packet::meth_0x45f130((packet *)local_2048,1);
      uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
      pcVar12 = "[server] Denying connection from client at %s. Malformed packet.\n";
    }
    else {
      uVar2 = *(undefined *)(*(int *)((int)param_1 + 0x14) + 1 + iVar5);
      puVar1 = (undefined *)(*(int *)((int)param_1 + 0x14) + iVar5);
      uVar6 = *(undefined2 *)(puVar1 + 2);
      uVar3 = *puVar1;
      *(int *)((int)param_1 + 0xc) = iVar5 + 4;
      if (CONCAT31(CONCAT21(uVar6,uVar2),uVar3) != 1) {
        packet::meth_0x45f130((packet *)local_2048,1);
        uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
        ::debug_stream::printf
                  (&(this->base).critical_section.field_0x8,0x10,
                   "[server] Denying connection from client at %s. Invalid protocol.\n",uVar10);
        (*(this->base).vftptr_0x0[5].virt_meth_0x59d650_0)(&this->base,(byte)local_2048);
        net::client::meth_0x59d630((client *)this,local_2048);
        pvVar7 = ExceptionList;
        ExceptionList = pvStack_c;
        goto joined_r0x005a1134;
      }
      if ((uint)(*(int *)((int)param_1 + 0x10) - (iVar5 + 4)) < 4) {
        packet::meth_0x45f130((packet *)local_2048,1);
        uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
        ::debug_stream::printf
                  (&(this->base).critical_section.field_0x8,0x10,
                   "[server] Denying connection from client at %s. Malformed packet.\n",uVar10);
        (*(this->base).vftptr_0x0[5].virt_meth_0x59d650_0)(&this->base,(byte)local_2048);
        net::client::meth_0x59d630((client *)this,local_2048);
        pvVar7 = ExceptionList;
        ExceptionList = pvStack_c;
        goto joined_r0x005a1134;
      }
      GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,local_2090);
      local_2098 = 0;
      piVar11 = (int *)&(this->base).critical_section.field_0x6c;
      do {
        cVar8 = cls_0x5ac9e0::meth_0x5aca90((cls_0x5ac9e0 *)(piVar11 + -3),(int)this_00,'\0');
        if ((cVar8 != '\0') && (*piVar11 == local_2090[0])) {
          if (local_2098 < 0x400) {
            uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
            ::debug_stream::printf
                      (&(this->base).critical_section.field_0x8,0x8000,
                       "[server] Receiving a connect request from %s\n",uVar10);
            cVar8 = (*(this->base).vftptr_0x0[7].virt_meth_0x6162e5_4)(param_1);
            if (cVar8 == '\0') {
              packet::meth_0x45f130((packet *)local_2048,1);
              uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
              pcVar12 = "[server] Denying connection from client at %s\n";
            }
            else {
              connection::meth_0x5abc00
                        (*(connection **)
                          (*(int *)&(this->base).critical_section.field_0x50 + local_2094 * 4),
                         &(this->base).critical_section.mbr_0x14,
                         *(undefined2 *)&(this->base).critical_section.field_0x28,(int)this_00,
                         *(undefined2 *)((int)param_1 + 0x24),
                         *(undefined4 *)&(this->base).critical_section.field_0x40);
              *(undefined *)
               (*(int *)(*(int *)&(this->base).critical_section.field_0x50 + local_2094 * 4) +
               0x4164) = 0;
              *(int *)&(this->base).critical_section.field_0x5c =
                   *(int *)&(this->base).critical_section.field_0x5c + 1;
              packet::meth_0x45f130((packet *)local_2048,0);
              uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
              pcVar12 = "[server] Accepting connection from client at %s\n";
            }
            goto LAB_005a1276;
          }
          break;
        }
        local_2098 = local_2098 + 1;
        piVar11 = piVar11 + 5;
      } while (local_2098 < 0x400);
      packet::meth_0x45f130((packet *)local_2048,1);
      uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
      pcVar12 = "[server] Denying connection from client at %s. Invalid challenge.\n";
    }
  }
  else {
    packet::meth_0x45f130((packet *)local_2048,1);
    uVar10 = cls_0x5ac9e0::meth_0x5acaf0(this_00,local_2088,0x40,'\x01');
    pcVar12 = "[server] Denying connection from client at %s. Server full.\n";
  }
LAB_005a1276:
  ::debug_stream::printf(&(this->base).critical_section.field_0x8,0x10,pcVar12,uVar10);
  (*(this->base).vftptr_0x0[5].virt_meth_0x59d650_0)(&this->base,(byte)local_2048);
  net::client::meth_0x59d630((client *)this,local_2048);
  pvVar7 = ExceptionList;
  ExceptionList = pvStack_c;
joined_r0x005a1134:
  pvStack_c = ExceptionList;
  if (local_2048[4] != 0) {
    local_2048._24_4_ = &address__vftable_6647a0_006647a0;
    local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
    ExceptionList = pvVar7;
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2048._20_4_);
  }
  local_2048._24_4_ = &address__vftable_6647a0_006647a0;
  local_2048._0_4_ = &buffer__vftable_6648e8_006648e8;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::meth_0x5a1410(server *this,int param_1)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 uVar4;
  uint unaff_retaddr;
  char local_2088 [60];
  buffer__vftable_6648e8 *pbStack_204c;
  char local_2048;
  void *pvStack_2038;
  address__vftable_6647a0 *paStack_2034;
  cls_0x5ac9e0 local_2030 [2];
  dword local_2018;
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  iVar1 = *(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4);
  if (0 < *(int *)(iVar1 + 0x10)) {
    uVar3 = *(uint *)(iVar1 + 0x54);
    ExceptionList = &local_c;
    DVar2 = timeGetTime();
    uVar3 = FUN_005b8d00(uVar3,DVar2);
    if (100 < uVar3) {
      packet::packet((packet *)&local_2048);
      local_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0
                (local_2030,
                 *(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x1c);
      local_2018 = 7;
      uVar4 = cls_0x5ac9e0::meth_0x5acaf0(local_2030,local_2088,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x80,
                 "[server] Sending keepalive to client %u at %s\n",param_1,uVar4);
      (*(this->base).vftptr_0x0[6].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
      connection::meth_0x5ac450
                (*(connection **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4),
                 &pbStack_204c,0);
      paStack_2034 = &address__vftable_6647a0_006647a0;
      pbStack_204c = &buffer__vftable_6648e8_006648e8;
      if (local_2048 != '\0') {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_2038);
      }
    }
  }
  ExceptionList = local_10;
  FUN_00616e15(uStack_14 ^ local_4);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::meth_0x5a1550(server *this,int param_1,char param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  char local_2088 [64];
  undefined local_2048 [48];
  dword local_2018;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (0 < *(int *)(*(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x10)
     ) {
    ExceptionList = &local_c;
    if (param_2 != '\0') {
      ExceptionList = &local_c;
      packet::packet((packet *)local_2048);
      local_4 = 0;
      cls_0x5ac9e0::meth_0x5ac9e0
                ((cls_0x5ac9e0 *)(local_2048 + 0x18),
                 *(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x1c);
      local_2018 = 8;
      uVar2 = cls_0x5ac9e0::meth_0x5acaf0
                        ((cls_0x5ac9e0 *)(local_2048 + 0x18),local_2088,0x40,'\x01');
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x10,
                 "[server] Sending disconnect to client %u at %s\n",param_1,uVar2);
      (*(this->base).vftptr_0x0[6].virt_meth_0x6162e5_4)(param_1,local_2048);
      connection::meth_0x5ac450
                (*(connection **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4),
                 local_2048,2);
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
    connection::Set_mbr_0x10_to_0
              (*(connection **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4));
    puVar1 = &(this->base).critical_section.field_0x5c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
net::server::meth_0x5a16a0
          (server *this,uint param_1,int param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined *_Format;
  char cVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  char local_2088 [56];
  undefined auStack_2050 [48];
  dword dStack_2020;
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac4b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  _Format = &(this->base).critical_section.field_0x8;
  ExceptionList = &pvStack_c;
  uVar2 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_2 + 0x18),local_2088,0x40,'\x01');
  ::debug_stream::printf
            (_Format,0x10000,"[server] Receiving a start request from client %u at %s\n",param_1,
             uVar2);
  cVar1 = (*(this->base).vftptr_0x0[7].virt_meth_0x6162e5_8)(param_1,param_2);
  if (cVar1 == '\0') {
    meth_0x5a1550(this,param_1,'\x01');
  }
  else {
    packet::packet((packet *)auStack_2050);
    pvStack_c = (void *)0x0;
    cls_0x5ac9e0::meth_0x5ac9e0
              ((cls_0x5ac9e0 *)(auStack_2050 + 0x18),
               *(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x1c);
    dStack_2020 = 5;
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0
                      ((cls_0x5ac9e0 *)(param_2 + 0x18),&stack0xffffdf70,0x40,'\x01');
    ::debug_stream::printf(_Format,0x20,"[server] Sending start to client %u at %s\n",param_1,uVar2)
    ;
    (*(this->base).vftptr_0x0[5].virt_meth_0x6162e5_4)(param_1,auStack_2050);
    connection::meth_0x5ac450
              (*(connection **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4),
               auStack_2050,1);
    auStack_2050._24_4_ = &address__vftable_6647a0_006647a0;
    auStack_2050._0_4_ = &buffer__vftable_6648e8_006648e8;
    if (auStack_2050[4] != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_2050._20_4_);
    }
  }
  ExceptionList = pvStack_14;
  FUN_00616e15(uStack_18 ^ (uint)puStack_8);
  return;
}



void __thiscall net::server::meth_0x5a1800(server *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  uVar1 = meth_0x5a0ad0(this,(int)(cls_0x5ac9e0 *)(param_1 + 0x18),*(short *)(param_1 + 0x24));
  if (uVar1 != 0xffffffff) {
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)(param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x80000,
               "[server] Receiving disconnect request from client %u at %s\n",uVar1,uVar2);
    (*(this->base).vftptr_0x0[8].virt_meth_0x6162e5_4)(uVar1,param_1);
    meth_0x5a1550(this,uVar1,'\0');
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::server::meth_0x5a18c0(server *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      meth_0x5a1410(this,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  return;
}



void __thiscall net::server::meth_0x5a18f0(server *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      meth_0x5a1550(this,uVar1,'\x01');
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  return;
}



void __thiscall net::server::meth_0x5a1920(server *this,int param_1)

{
  cls_0x5ab930 *this_00;
  char cVar1;
  int iVar2;
  
  this_00 = *(cls_0x5ab930 **)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4);
  if (0 < *(int *)&this_00->field_0x10) {
    iVar2 = cls_0x5ab930::meth_0x5ab930
                      (this_00,*(int *)&(this->base).critical_section.field_0x40,
                       *(uint *)&(this->base).critical_section.field_0x2c,
                       *(int *)&(this->base).critical_section.field_0x3c);
    if ((char)iVar2 != '\0') {
      ::debug_stream::printf
                (&(this->base).critical_section.field_0x8,0x1000000,
                 "[server] Client %u timed out after %u milliseconds\n",param_1,
                 *(undefined4 *)
                  (*(int *)(*(int *)&(this->base).critical_section.field_0x50 + param_1 * 4) + 0x44)
                );
      cVar1 = (*(this->base).vftptr_0x0[9].virt_meth_0x6162e5_4)
                        (param_1,*(undefined4 *)
                                  (*(int *)(*(int *)&(this->base).critical_section.field_0x50 +
                                           param_1 * 4) + 0x44));
      if (cVar1 != '\0') {
        meth_0x5a1550(this,param_1,'\x01');
      }
    }
  }
  return;
}



void __thiscall net::server::meth_0x5a19a0(server *this,char param_1)

{
  char cVar1;
  
  cVar1 = (this->base).critical_section.field_0x54;
  if (cVar1 != param_1) {
    if (cVar1 != '\0') {
      meth_0x5a18f0(this);
    }
    (this->base).critical_section.field_0x54 = param_1;
  }
  return;
}



uint __thiscall net::server::virt_meth_0x5a19c0(server *this)

{
  uint in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((this->base).critical_section.field_0x54 == '\0') {
    return in_EAX & 0xffffff00;
  }
  uVar1 = net::client::meth_0x59d930((client *)this);
  uVar2 = meth_0x5a18c0(this);
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}



void __thiscall net::server::meth_0x5a19f0(server *this,void *param_1)

{
  undefined4 uVar1;
  uint unaff_EDI;
  uint unaff_retaddr;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  switch(*(undefined4 *)((int)param_1 + 0x30)) {
  case 2:
    meth_0x5a0c20(this,param_1);
    break;
  case 3:
    meth_0x5a0d60(this,(int)param_1,unaff_EDI);
    break;
  case 4:
    meth_0x5a0f30(this,param_1,unaff_EDI);
    break;
  default:
    uVar1 = cls_0x5ac9e0::meth_0x5acaf0((cls_0x5ac9e0 *)((int)param_1 + 0x18),local_44,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x1000,
               "[server] Receiving out-of-band user packet %u from %s\n",
               *(undefined4 *)((int)param_1 + 0x30),uVar1);
    (*(this->base).vftptr_0x0[9].virt_meth_0x59d650_0)(&this->base,(byte)param_1);
    break;
  case 8:
    meth_0x5a1800(this,(int)param_1);
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall net::server::meth_0x5a1ab0(server *this,uint param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 in_stack_ffffffbc;
  
  iVar1 = DAT_007062c0;
  if (*(int *)((int)param_2 + 0x30) == 5) {
    meth_0x5a16a0(this,param_1,(int)param_2,unaff_EDI,unaff_ESI,in_stack_ffffffbc);
  }
  else if (*(int *)((int)param_2 + 0x30) == 6) {
    meth_0x5a0a30(this,param_1,param_2);
  }
  else {
    uVar2 = cls_0x5ac9e0::meth_0x5acaf0
                      ((cls_0x5ac9e0 *)((int)param_2 + 0x18),&stack0xffffffbc,0x40,'\x01');
    ::debug_stream::printf
              (&(this->base).critical_section.field_0x8,0x1000,
               "[server] Receiving sequenced user packet %u from client %u at %s\n",
               *(undefined4 *)((int)param_2 + 0x30),param_1,uVar2);
    (*(this->base).vftptr_0x0[8].virt_meth_0x6162e5_8)(param_1,param_2);
  }
  FUN_00616e15(iVar1);
  return;
}



void __thiscall net::server::meth_0x5a1b50(server *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      meth_0x5a1920(this,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)&(this->base).critical_section.field_0x58);
  }
  return;
}



void __thiscall net::server::virt_meth_0x5a1b80(server *this)

{
  undefined4 *puVar1;
  uint uVar2;
  
  meth_0x5a19a0(this,'\0');
  if (*(int *)&(this->base).critical_section.field_0x50 == 0) {
    return;
  }
  uVar2 = 0;
  if (*(int *)&(this->base).critical_section.field_0x58 != 0) {
    do {
      puVar1 = *(undefined4 **)(*(int *)&(this->base).critical_section.field_0x50 + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)&(this->base).critical_section.field_0x58);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&(this->base).critical_section.field_0x50);
}



void __thiscall net::server::virt_meth_0x5a1bd0(server *this)

{
  if ((this->base).critical_section.field_0x54 != '\0') {
    net::client::meth_0x59d5f0((client *)this);
    meth_0x5a1b50(this);
    meth_0x5a0bf0(this);
    FUN_005a1890(this);
    return;
  }
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall net::server::virt_meth_0x5a1c00(server *this,void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  void *unaff_EBP;
  undefined4 unaff_ESI;
  uint unaff_retaddr;
  undefined local_2048 [24];
  cls_0x5ac9e0 local_2030;
  word local_2024;
  dword local_2014;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ac76;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if ((this->base).critical_section.field_0x54 != '\0') {
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
            meth_0x5a19f0(this,local_2048);
          } while (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc));
        }
        buffer::~buffer((buffer *)local_2048);
      }
      else {
        meth_0x5a19f0(this,param_1);
      }
    }
    else {
      uVar1 = meth_0x5a0ad0(this,(int)param_1 + 0x18,*(short *)((int)param_1 + 0x24));
      if ((uVar1 != 0xffffffff) &&
         (uVar2 = connection::meth_0x5ab7a0
                            (*(connection **)
                              (*(int *)&(this->base).critical_section.field_0x50 + uVar1 * 4),
                             param_1,*(uint *)&(this->base).critical_section.field_0x40,unaff_ESI,
                             unaff_EBP,unaff_EBX), (char)uVar2 != '\0')) {
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
              meth_0x5a1ab0(this,uVar1,local_2048);
            } while (*(int *)((int)param_1 + 0x10) != *(int *)((int)param_1 + 0xc));
          }
          buffer::~buffer((buffer *)local_2048);
        }
        else {
          meth_0x5a1ab0(this,uVar1,param_1);
        }
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall net::server::meth_0x5a1dc0(server *this)

{
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063aca1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->base).vftptr_0x0 = (base__vftable_6a1d1c *)&server__vftable_6a2ec4_006a2ec4;
  local_4 = 1;
  virt_meth_0x5a1b80(this);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_
            (&(this->base).critical_section.field_0x60,0x14,0x400,address::~address);
  local_4 = 0xffffffff;
  base::meth_0x59d530(&this->base);
  ExceptionList = local_c;
  return;
}



undefined4 * __thiscall net::server::virt_meth_0x5a1e30(server *this,byte param_1)

{
  meth_0x5a1dc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/server.h"
#include "../include/server.h"
