#include "../include/GameActionInitiateDialogue.h"

GameActionInitiateDialogue * __thiscall
GameActionInitiateDialogue::GameActionInitiateDialogue(GameActionInitiateDialogue *this)

{
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionInitiateDialogue__vftable_64815c_0064815c;
  this->mbr_0x19 = 1;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  (this->Action).mbr_0x4 = 1;
  return this;
}



undefined4 __thiscall GameActionInitiateDialogue::OnCreate(GameActionInitiateDialogue *this)

{
  if (this->mbr_0x1c == 0) {
    handle_fatal_error("GameActionInitiateDialogue::OnCreate() - No target specified.");
    return 0;
  }
  this->mbr_0x20 = *(dword *)(this->mbr_0x1c + 0x1dc);
  return 0;
}



void __thiscall GameActionInitiateDialogue::OnUpdate(GameActionInitiateDialogue *this)

{
  dword dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  dword dVar6;
  GameActionMoveTo *pGVar7;
  GameActionInitiateDialogue *pGVar8;
  int *piVar9;
  undefined4 uVar10;
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b613;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &local_c;
  dVar6 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  this->mbr_0x1c = dVar6;
  if (dVar6 == 0) {
    this->mbr_0x18 = 1;
  }
  else {
    dVar1 = this->mbr_0x14;
    if (*(int *)(dVar6 + 0x1ec) == *(int *)(dVar1 + 0x1ec)) {
      fVar4 = *(float *)(dVar1 + 0xc) - *(float *)(dVar6 + 0xc);
      fVar3 = *(float *)(dVar1 + 8) - *(float *)(dVar6 + 8);
      fVar2 = *(float *)(dVar1 + 4) - *(float *)(dVar6 + 4);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < 5.0) {
        local_14 = 0xf;
        local_18 = 0;
        local_28 = (void *)((uint)local_28 & 0xffffff00);
        local_4 = 1;
        if (this->mbr_0x19 == 0) {
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)local_2c,(_String_base *)(dVar1 + 0x1fc),0,0xffffffff);
          uVar10 = *(undefined4 *)(this->mbr_0x14 + 0x1dc);
          if (DAT_0070bd98 == 0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
          }
          piVar9 = (int *)(**(code **)(*piVar9 + 0x68))();
          cVar5 = (**(code **)(*piVar9 + 0xc))(this->mbr_0x1c);
          if (cVar5 == '\0') {
            handle_fatal_error(
                              "GameActionInitiateDialogue::OnUpdate() - Target must be PC if initiator\'s DLG is being used."
                              );
          }
        }
        else {
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)local_2c,(_String_base *)(dVar6 + 0x1fc),0,0xffffffff);
          uVar10 = *(undefined4 *)(this->mbr_0x1c + 0x1dc);
          if (DAT_0070bd98 == 0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
          }
          piVar9 = (int *)(**(code **)(*piVar9 + 0x68))();
          cVar5 = (**(code **)(*piVar9 + 0xc))(this->mbr_0x14);
          if (cVar5 == '\0') {
            handle_fatal_error(
                              "GameActionInitiateDialogue::OnUpdate() - Initiator must be PC if target\'s DLG is being used."
                              );
          }
        }
        DialogueManager::BeginDialogue
                  (*(DialogueManager **)(*(int *)(DAT_0070bd90 + 0x18) + 0x5064),local_2c,uVar10);
        this->mbr_0x18 = 1;
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28);
        }
        goto LAB_00404e2a;
      }
      pGVar7 = (GameActionMoveTo *)operator_new(0x48);
      local_4 = 0;
      if (pGVar7 == (GameActionMoveTo *)0x0) {
        pGVar7 = (GameActionMoveTo *)0x0;
      }
      else {
        pGVar7 = GameActionMoveTo::GameActionMoveTo(pGVar7);
      }
      local_4 = 0xffffffff;
      GameActionMoveTo::meth_0x55b350(pGVar7,this->mbr_0x1c);
      (pGVar7->ActionMoveTo).mbr_0x30 = 5;
      net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,(int)pGVar7);
      pGVar8 = (GameActionInitiateDialogue *)operator_new(0x24);
      if (pGVar8 == (GameActionInitiateDialogue *)0x0) {
        pGVar8 = (GameActionInitiateDialogue *)0x0;
      }
      else {
        pGVar8 = GameActionInitiateDialogue(pGVar8);
      }
      pGVar8->mbr_0x1c = this->mbr_0x1c;
      pGVar8->mbr_0x19 = this->mbr_0x19;
      net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,(int)pGVar8);
    }
    this->mbr_0x18 = 1;
  }
LAB_00404e2a:
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}


#include "../include/GameActionInitiateDialogue.h"
