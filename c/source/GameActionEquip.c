#include "../include/GameActionEquip.h"

GameActionEquip * __thiscall GameActionEquip::GameActionEquip(GameActionEquip *this)

{
  ActionEquip::ActionEquip(&this->ActionEquip);
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  *(undefined *)&this->mbr_0x2c = 0;
  *(undefined *)((int)&this->mbr_0x2c + 1) = 0;
  (this->ActionEquip).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionEquip__vftable_648acc_00648acc;
  return this;
}



GameActionEquip * __thiscall GameActionEquip::~GameActionEquip(GameActionEquip *this)

{
  GameActionEquip *pGVar1;
  
  (this->ActionEquip).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionEquip__vftable_648acc_00648acc;
  pGVar1 = (GameActionEquip *)Action::~Action((Action *)this);
  return pGVar1;
}



void __thiscall GameActionEquip::meth_0x405160(GameActionEquip *this)

{
  cls_0x616328 *pcVar1;
  int iVar2;
  
  if (*(char *)((int)&this->mbr_0x2c + 1) == '\0') {
    pcVar1 = (cls_0x616328 *)meth_0x54be10(this);
    if (pcVar1 != (cls_0x616328 *)0x0) {
      iVar2 = FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,&GameItem::RTTI_Type_Descriptor,0)
      ;
      if (iVar2 != 0) {
        GameServer::meth_0x46ebd0
                  (*(GameServer **)(DAT_0070bd90 + 0x18),*(int *)&(this->ActionEquip).field_0x14,
                   *(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2,this->mbr_0x24,1);
      }
    }
    *(undefined *)((int)&this->mbr_0x2c + 1) = 1;
  }
  return;
}



void __thiscall GameActionEquip::virt_meth_0x4051c0(GameActionEquip *this)

{
  meth_0x405160(this);
  DialogueManager::CommandAttackModeSelect((DialogueManager *)this);
  return;
}



undefined4 * __thiscall GameActionEquip::virt_meth_0x4051d0(GameActionEquip *this,byte param_1)

{
  ~GameActionEquip(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall GameActionEquip::virt_meth_0x4051f0(GameActionEquip *this,uint param_1)

{
  undefined4 uVar1;
  
  if (this->mbr_0x20 == 0) {
    (this->ActionEquip).mbr_0x18 = 1;
    return 0;
  }
  if ((this->mbr_0x1c != 0) && (this->mbr_0x1c <= param_1)) {
    meth_0x405160(this);
    (this->ActionEquip).mbr_0x18 = 1;
  }
  uVar1 = ActionDie::virt_meth_0x5638d0((ActionDie *)this);
  return uVar1;
}



void __thiscall GameActionEquip::meth_0x40a670(GameActionEquip *this)

{
  cls_0x616328 *pcVar1;
  int **_Memory;
  char cVar2;
  int iVar3;
  int *piVar4;
  dword *pdVar5;
  undefined4 *puVar6;
  int *local_50;
  int *local_4c;
  undefined local_48 [20];
  int local_34;
  dword local_30;
  dword local_2c;
  int local_28;
  dword local_24 [4];
  int local_14;
  int local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b7d8;
  local_c = ExceptionList;
  pdVar5 = local_24;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar5 = 0;
    pdVar5 = pdVar5 + 1;
  }
  puVar6 = (undefined4 *)(local_48 + 0xc);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  piVar4 = *(int **)((int)&this->mbr_0x16c +
                    *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4));
  if (piVar4 == (int *)0x0) {
    this->mbr_0x7b4 = this->mbr_0x734 + local_48._16_4_;
    this->mbr_0x7c8 = this->mbr_0x748 + local_24[0];
    this->mbr_0x7d0 = this->mbr_0x750 + local_24[2];
    this->mbr_0x7b8 = this->mbr_0x738 + local_34;
    this->mbr_0x7b0 = this->mbr_0x730 + local_48._12_4_;
    this->mbr_0x7cc = this->mbr_0x74c + local_24[1];
    this->mbr_0x7c0 = this->mbr_0x740 + local_2c;
    this->mbr_0x7d4 = this->mbr_0x754 + local_24[3];
    this->mbr_0x7bc = this->mbr_0x73c + local_30;
    this->mbr_0x7c4 = this->mbr_0x744 + local_28;
    this->mbr_0x7dc = this->mbr_0x75c + local_10;
    this->mbr_0x7d8 = this->mbr_0x758 + local_14;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  local_4c = piVar4;
  local_48._4_4_ = FUN_0056e0b0();
  local_48._8_4_ = 0;
  local_4 = 0;
  if ((int **)piVar4[3] == (int **)0x0) {
    local_50 = (int *)0x0;
  }
  else {
    local_50 = *(int **)piVar4[3];
  }
  if (local_50 != (int *)piVar4[3]) {
    do {
      pcVar1 = (cls_0x616328 *)local_50[2];
      iVar3 = FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,&GameArmor::RTTI_Type_Descriptor,0
                          );
      if ((iVar3 != 0) && (cVar2 = (**(code **)(*local_4c + 0x28))(pcVar1,local_48), cVar2 != '\0'))
      {
        while (local_48._8_4_ != 0) {
          if ((int **)local_48._4_4_ == (int **)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = *(int **)local_48._4_4_;
          }
          if (piVar4[2] == 0) {
            local_48._12_4_ = local_48._12_4_ + *(int *)(iVar3 + 0x3b0);
            local_48._16_4_ = local_48._16_4_ + *(int *)(iVar3 + 0x3b4);
            local_34 = local_34 + *(int *)(iVar3 + 0x3b8);
            local_30 = local_30 + *(int *)(iVar3 + 0x3bc);
            local_28 = local_28 + *(int *)(iVar3 + 0x3c4);
          }
          else if (piVar4[2] == 1) {
            local_24[0] = local_24[0] + *(int *)(iVar3 + 0x3b0);
            local_24[1] = local_24[1] + *(int *)(iVar3 + 0x3b4);
            local_24[2] = local_24[2] + *(int *)(iVar3 + 0x3b8);
            local_24[3] = local_24[3] + *(int *)(iVar3 + 0x3bc);
            local_14 = local_14 + *(int *)(iVar3 + 0x3c0);
            local_10 = local_10 + *(int *)(iVar3 + 0x3c4);
          }
          if (((int **)local_48._4_4_ != (int **)0x0) &&
             (_Memory = *(int ***)local_48._4_4_, _Memory != (int **)local_48._4_4_)) {
            *_Memory[1] = (int)*_Memory;
            *(int **)((int)*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
        }
      }
      local_50 = (int *)*local_50;
    } while (local_50 != (int *)local_4c[3]);
  }
  if ((int **)local_48._4_4_ == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)local_48._4_4_;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)local_48,&local_4c,piVar4,(int *)local_48._4_4_);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_48._4_4_);
}



uint __thiscall
GameActionEquip::meth_0x40b380(GameActionEquip *this,int *param_1,int *param_2,char *param_3)

{
  cls_0x558740 *this_00;
  int iVar1;
  GameInventory *this_01;
  _String_base local_28 [28];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b878;
  local_c = ExceptionList;
  this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  ExceptionList = &local_c;
  iVar1 = Get_mbr_0x98(this);
  this_01 = (GameInventory *)
            FUN_006165e0(*(cls_0x616328 **)
                          ((int)&this->mbr_0x16c +
                          *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4)),0,
                         &Inventory::RTTI_Type_Descriptor,&GameInventory::RTTI_Type_Descriptor,0);
  if (this_01 == (GameInventory *)0x0) {
LAB_0040b43f:
    ExceptionList = local_c;
    return (uint)this_01 & 0xffffff00;
  }
  this_01 = (GameInventory *)GameInventory::meth_0x4693d0(this_01,iVar1);
  *param_3 = '\0';
  if (this_01 == (GameInventory *)0x0) {
    *param_3 = '\x01';
    *param_2 = this->mbr_0x6f4;
  }
  else {
    if (*(int *)((int)&this_01[4].mbr_0x30 + *(int *)((this_01->Inventory).mbr_0x4 + 4)) != 6) {
      if (this_00 != (cls_0x558740 *)0x0) {
        cls_0x4d8d70::meth_0x401d20
                  ((cls_0x4d8d70 *)local_28,
                   "GameEntity::ResolveWeaponAndAttackMode() - Attack was attempted with non-weapon in hand."
                  );
        local_4 = 0;
        cls_0x558740::meth_0x5583e0(this_00,local_28,0x80,0x80,(void *)0x80);
        this_01 = (GameInventory *)cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_28);
      }
      goto LAB_0040b43f;
    }
    iVar1 = FUN_006165e0((cls_0x616328 *)this_01,0,&GameItem::RTTI_Type_Descriptor,
                         &GameWeapon::RTTI_Type_Descriptor,0);
    *param_1 = iVar1;
    *param_2 = *(int *)(iVar1 + 0x408);
  }
  if ((*(int *)(*param_2 + 8) == 3) && (*param_3 == '\0')) {
    *param_3 = '\x01';
    *param_2 = this->mbr_0x6f4;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}



void __thiscall GameActionEquip::meth_0x416c60(GameActionEquip *this,int param_1,int param_2)

{
  if ((-1 < param_1) && (param_1 < 6)) {
    if (0 < param_2) {
      (**(code **)(*(int *)(&this->mbr_0x58)[param_1] + 0x54))(0);
                    /* WARNING: Could not recover jumptable at 0x00416cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(&this->mbr_0x58)[param_1] + 0x10))();
      return;
    }
    (**(code **)(*(int *)(&this->mbr_0x58)[param_1] + 0x54))(1);
  }
  return;
}



void __thiscall
GameActionEquip::meth_0x418360
          (GameActionEquip *this,int param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  dword *pdVar5;
  uint unaff_retaddr;
  void *pvVar6;
  GameActionEquip *local_6c;
  undefined local_68 [4];
  undefined local_64;
  dword local_54;
  dword local_50;
  undefined auStack_4c [4];
  void *pvStack_48;
  dword dStack_38;
  uint uStack_34;
  char acStack_30 [16];
  dword dStack_20;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c0d0;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if ((((param_4 != '\0') || (param_1 != this->mbr_0x26c)) || (param_2 != this->mbr_0x270)) ||
     (param_3 != this->mbr_0x274)) {
    ExceptionList = &local_c;
    this->mbr_0x270 = param_2;
    iVar4 = 0;
    this->mbr_0x26c = param_1;
    this->mbr_0x274 = param_3;
    local_6c = this;
    if (0 < param_3) {
      pdVar5 = &this->mbr_0x1f4;
      do {
        if (0x1d < iVar4) break;
        local_50 = 0xf;
        local_54 = 0;
        local_64 = 0;
        pcVar3 = "f3_actionbar_apfine_blue.tga";
        do {
          pcVar2 = pcVar3;
          pcVar3 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_68,"f3_actionbar_apfine_blue.tga",
                   (uint)(pcVar2 + -0x6506ac));
        pvVar6 = (void *)0x1;
        local_4 = 0;
        (**(code **)(*(int *)*pdVar5 + 0x130))(local_68,0,0,0,0xbf800000,0xbf800000);
        dStack_20 = 0xffffffff;
        if ((GameActionEquip *)0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar6);
        }
        local_6c = (GameActionEquip *)0xf;
        (**(code **)(*(int *)*pdVar5 + 0x54))(0);
        iVar4 = iVar4 + 1;
        pdVar5 = pdVar5 + 1;
      } while (iVar4 < param_3);
    }
    if (iVar4 < param_1) {
      pdVar5 = &local_6c->mbr_0x1f4 + iVar4;
      do {
        if (0x1d < iVar4) break;
        local_50 = 0xf;
        local_54 = 0;
        local_64 = 0;
        pcVar3 = "f3_actionbar_apfine_green.tga";
        do {
          pcVar2 = pcVar3;
          pcVar3 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_68,"f3_actionbar_apfine_green.tga",
                   (uint)(pcVar2 + -0x65068c));
        pvVar6 = (void *)0x1;
        local_4 = 1;
        (**(code **)(*(int *)*pdVar5 + 0x130))(local_68,0,0,0,0xbf800000,0xbf800000);
        dStack_20 = 0xffffffff;
        if ((GameActionEquip *)0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar6);
        }
        local_6c = (GameActionEquip *)0xf;
        (**(code **)(*(int *)*pdVar5 + 0x54))(0);
        iVar4 = iVar4 + 1;
        pdVar5 = pdVar5 + 1;
      } while (iVar4 < param_1);
    }
    if (iVar4 < param_2) {
      pdVar5 = &local_6c->mbr_0x1f4 + iVar4;
      do {
        if (0x1d < iVar4) goto LAB_00418644;
        local_50 = 0xf;
        local_54 = 0;
        local_64 = 0;
        pcVar3 = "f3_actionbar_apfine_grey.tga";
        do {
          pcVar2 = pcVar3;
          pcVar3 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_68,"f3_actionbar_apfine_grey.tga",
                   (uint)(pcVar2 + -0x65066c));
        pvVar6 = (void *)0x1;
        local_4 = 2;
        (**(code **)(*(int *)*pdVar5 + 0x130))(local_68,0,0,0,0xbf800000,0xbf800000);
        dStack_20 = 0xffffffff;
        if ((GameActionEquip *)0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar6);
        }
        local_6c = (GameActionEquip *)0xf;
        (**(code **)(*(int *)*pdVar5 + 0x54))(0);
        iVar4 = iVar4 + 1;
        pdVar5 = pdVar5 + 1;
      } while (iVar4 < param_2);
    }
    if (iVar4 < 0x1e) {
      pdVar5 = &local_6c->mbr_0x1f4 + iVar4;
      iVar4 = 0x1e - iVar4;
      do {
        (**(code **)(*(int *)*pdVar5 + 0x54))(1);
        pdVar5 = pdVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
LAB_00418644:
    if (*(int *)&local_6c->field_0x1f0 != 0) {
      FUN_00616d8c(acStack_30,&DAT_00650668);
      pcVar3 = acStack_30;
      uStack_34 = 0xf;
      dStack_38 = 0;
      pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)auStack_4c,acStack_30,(int)pcVar3 - (int)(acStack_30 + 1));
      local_4 = 3;
      (**(code **)(**(int **)&local_6c->field_0x1f0 + 300))(auStack_4c);
      if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_48);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



undefined __thiscall GameActionEquip::meth_0x436b40(GameActionEquip *this,int param_1)

{
  GameClient *this_00;
  uint uVar1;
  uint uVar2;
  cls_0x434f70 *pcVar3;
  cls_0x616328 *pcVar4;
  cls_0x616328 *pcVar5;
  dword dVar6;
  GameActionEquip *this_01;
  undefined4 uVar7;
  GameActionEquip *this_02;
  dword in_stack_ffffff48;
  void *in_stack_ffffff4c;
  dword dStack_90;
  uint uStack_8c;
  undefined local_61;
  undefined local_5c [28];
  undefined auStack_40 [52];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062db00;
  pvStack_c = ExceptionList;
  this_00 = *(GameClient **)(DAT_0070bd90 + 0x2c);
  uVar1 = *(uint *)&(this_00->Client).client.base.critical_section.field_0xdc;
  uVar2 = *(uint *)&(this_00->Client).client.base.critical_section.field_0xd8;
  local_61 = 1;
  ExceptionList = &((cls_0x4d8d70 *)auStack_40)->mbr_0x34;
  local_5c._0_4_ = this;
  pcVar4 = (cls_0x616328 *)meth_0x54be10(this);
  pcVar5 = (cls_0x616328 *)meth_0x54be10(this_02);
  dVar6 = *(dword *)(local_5c._0_4_ + 0x30);
  if (dVar6 == 1) {
    dVar6 = *(dword *)(local_5c._0_4_ + 0x34);
  }
  switch(dVar6) {
  default:
    local_61 = 0;
    break;
  case 3:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45f4f0(this_00,uVar1,uVar2);
    }
    break;
  case 4:
    if (((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) &&
       (GameClient::meth_0x45f5d0(this_00,uVar1,uVar2), pcVar4 == pcVar5)) {
      cls_0x4d8d70::meth_0x401d20
                ((cls_0x4d8d70 *)(local_5c + 0x18),"You talk to yourself, but recieve no answer.");
      local_4 = 0;
      dStack_90 = 0x436c2f;
      uStack_8c = uVar1;
      GameClient::meth_0x587a60(this_00);
      auStack_40._36_4_ = 0xffffffff;
      dStack_90 = 0x436c40;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_5c);
    }
    break;
  case 5:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45f6b0(this_00,uVar1,uVar2);
    }
    break;
  case 6:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45f790(this_00,uVar1,uVar2);
    }
    break;
  case 7:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45f870(this_00,uVar1,uVar2);
    }
    break;
  case 8:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45f950(this_00,uVar1,uVar2);
    }
    break;
  case 9:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45fa30(this_00,uVar1,uVar2);
    }
    break;
  case 10:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45fb10(this_00,uVar1,uVar2);
    }
    break;
  case 0xb:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45fbf0(this_00,uVar1,uVar2);
    }
    break;
  case 0xc:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45fcd0(this_00,uVar1,uVar2);
    }
    break;
  case 0xd:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45fdb0(this_00,uVar1,uVar2);
    }
    break;
  case 0xe:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      uVar7 = AreaMapIcon::Get_mbr_0x38((AreaMapIcon *)local_5c._0_4_);
      GameClient::meth_0x45fe90(this_00,uVar1,uVar2,uVar7);
    }
    break;
  case 0xf:
    uStack_8c = 0x436c7b;
    this_01 = (GameActionEquip *)
              FUN_006165e0(pcVar4,0,&Entity::RTTI_Type_Descriptor,
                           &GameCreature::RTTI_Type_Descriptor,0);
    if (this_01 != (GameActionEquip *)0x0) {
      local_5c._4_4_ = 0;
      param_1 = 0;
      uVar7 = meth_0x40b380(this_01,(int *)(local_5c + 4),&param_1,&stack0x00000008);
      if ((char)uVar7 != '\0') {
        if (pcVar5 == (cls_0x616328 *)0x0) {
          if (*(char *)(param_1 + 0x6d) != '\0') {
            local_5c._12_4_ = 0;
            local_5c._16_4_ = 0;
            local_5c._20_4_ = 0;
            uVar7 = GameClient::meth_0x587ac0(this_00,(undefined4 *)(local_5c + 0xc));
            if ((char)uVar7 != '\0') {
              pcVar3 = *(cls_0x434f70 **)
                        (*(int *)&(this_00->Client).client.base.critical_section.field_0x9c + 0xc);
              local_5c._8_4_ = &dStack_90;
              cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&dStack_90,"");
              local_4 = 3;
              cls_0x4d8d70::meth_0x401d20
                        ((cls_0x4d8d70 *)&stack0xffffff48,"Targeted attack on floor.");
              local_4 = 0xffffffff;
              cls_0x434f70::meth_0x434b70(pcVar3,in_stack_ffffff48,in_stack_ffffff4c);
              GameClient::meth_0x45f370
                        (this_00,pcVar4[0x77].mbr_0x0,0,9,(undefined4 *)(local_5c + 0xc));
            }
          }
        }
        else if (pcVar4 == pcVar5) {
          cls_0x4d8d70::meth_0x401d20
                    ((cls_0x4d8d70 *)&((cls_0x4d8d70 *)auStack_40)->mbr_0x18,
                     "You start to attack yourself, but think better of it.");
          local_4 = 1;
          dStack_90 = 0x436cf0;
          uStack_8c = uVar1;
          GameClient::meth_0x587a60(this_00);
          auStack_40._36_4_ = 0xffffffff;
          dStack_90 = 0x436d01;
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_40);
        }
        else {
          pcVar3 = *(cls_0x434f70 **)
                    (*(int *)&(this_00->Client).client.base.critical_section.field_0x9c + 0xc);
          cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&dStack_90,"");
          local_5c._8_4_ = &stack0xffffff48;
          local_4 = 2;
          cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xffffff48,"Targeted attack on entity.")
          ;
          local_4 = 0xffffffff;
          cls_0x434f70::meth_0x434b70(pcVar3,in_stack_ffffff48,in_stack_ffffff4c);
          GameClient::meth_0x45f370
                    (this_00,pcVar4[0x77].mbr_0x0,pcVar5[0x77].mbr_0x0,9,(undefined4 *)0x0);
        }
      }
    }
    break;
  case 0x10:
    if ((pcVar4 != (cls_0x616328 *)0x0) && (pcVar5 != (cls_0x616328 *)0x0)) {
      GameClient::meth_0x45ef70(this_00,uVar1,uVar2);
    }
  }
  AreaMapIcon::meth_0x436ad0((AreaMapIcon *)local_5c._0_4_,1);
  ExceptionList = pvStack_c;
  return local_61;
}



undefined4 __thiscall
GameActionEquip::meth_0x436fc0
          (GameActionEquip *this,undefined param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  GameActionEquip *this_00;
  
  uVar4 = *(undefined4 *)(*(int *)(DAT_0070bd90 + 0x2c) + 0xe0);
  uVar1 = *(undefined4 *)(*(int *)(DAT_0070bd90 + 0x2c) + 0xdc);
  iVar2 = meth_0x54be10(this);
  uVar3 = meth_0x54be10(this_00);
  if ((iVar2 != 0) && (uVar3 != 0)) {
    FUN_00587a80(*(void **)(DAT_0070bd90 + 0x2c),uVar4,uVar1);
    uVar4 = AreaMapIcon::meth_0x436ad0((AreaMapIcon *)this,1);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



int __thiscall GameActionEquip::meth_0x43a550(GameActionEquip *this,int param_1)

{
  int iVar1;
  dword *pdVar2;
  
  iVar1 = 0;
  pdVar2 = &this->mbr_0xec;
  while( true ) {
    if (*(int *)*pdVar2 == param_1) {
      return iVar1;
    }
    if (((int *)*pdVar2)[1] == param_1) break;
    iVar1 = iVar1 + 1;
    pdVar2 = pdVar2 + 1;
    if (5 < iVar1) {
      return -1;
    }
  }
  return iVar1;
}



void __thiscall
GameActionEquip::meth_0x43a580(GameActionEquip *this,int param_1,int *param_2,int *param_3)

{
  int iVar1;
  dword *pdVar2;
  int iVar3;
  dword *pdVar4;
  
  iVar3 = 0;
  pdVar4 = &this->mbr_0x104;
  do {
    iVar1 = 0;
    pdVar2 = pdVar4;
    do {
      if ((*(int *)*pdVar2 == param_1) || (((int *)*pdVar2)[1] == param_1)) {
        *param_2 = iVar3;
        *param_3 = iVar1;
        return;
      }
      iVar1 = iVar1 + 1;
      pdVar2 = pdVar2 + 1;
    } while (iVar1 < 3);
    iVar3 = iVar3 + 1;
    pdVar4 = pdVar4 + 3;
    if (0x20 < iVar3) {
      *param_2 = -1;
      *param_3 = -1;
      return;
    }
  } while( true );
}



int __thiscall GameActionEquip::meth_0x43a5e0(GameActionEquip *this)

{
  int iVar1;
  
  if (this->mbr_0x2a8 != 0) {
    iVar1 = meth_0x54be10(this);
    if (iVar1 != 0) {
      iVar1 = FUN_006165e0(*(cls_0x616328 **)(iVar1 + 0x168),0,&Inventory::RTTI_Type_Descriptor,
                           &GameInventory::RTTI_Type_Descriptor,0);
      return iVar1;
    }
  }
  return 0;
}



void __thiscall GameActionEquip::meth_0x43a7a0(GameActionEquip *this,undefined4 param_1)

{
  GameClient *this_00;
  World *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  
  this_00 = *(GameClient **)(DAT_0070bd90 + 0x2c);
  this_01 = *(World **)&(this_00->Client).client.base.critical_section.field_0xa0;
  uVar1 = AreaMapIcon::Get_mbr_0x38((AreaMapIcon *)this_01);
  uVar2 = World::Get_mbr_0x3c(this_01);
  this->mbr_0x2ac = 1;
  GameClient::meth_0x460400(this_00,this->mbr_0x2a8,uVar1,uVar2,param_1);
  return;
}



void __thiscall GameActionEquip::meth_0x43a7f0(GameActionEquip *this,int param_1,undefined4 param_2)

{
  GameClient *this_00;
  cls_0x46a8e0 *this_01;
  cls_0x616328 *pcVar1;
  int iVar2;
  
  this_01 = (cls_0x46a8e0 *)meth_0x43a5e0(this);
  this_00 = *(GameClient **)(DAT_0070bd90 + 0x2c);
  pcVar1 = (cls_0x616328 *)cls_0x46a8e0::meth_0x55fea0(this_01,param_1);
  iVar2 = FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0);
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  GameClient::meth_0x460500(this_00,this->mbr_0x2a8,param_1);
  this->mbr_0x2ad = 1;
  return;
}



void __thiscall GameActionEquip::meth_0x43a850(GameActionEquip *this)

{
  if ((int *)this->mbr_0xe4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043a85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this->mbr_0xe4 + 300))();
    return;
  }
  return;
}



void __thiscall GameActionEquip::meth_0x43a870(GameActionEquip *this)

{
  if ((int *)this->mbr_0xbc != (int *)0x0) {
    (**(code **)(*(int *)this->mbr_0xbc + 0x54))(0);
    if ((int *)this->mbr_0xc4 != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xc4 + 0x5c))(0xb45c4e14);
    }
    if ((int *)this->mbr_0xc8 != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xc8 + 0x5c))(0xb45c4e14);
    }
    if ((int *)this->mbr_0xcc != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xcc + 0x5c))(0xb45c4e14);
    }
  }
  return;
}



void __thiscall GameActionEquip::meth_0x43a8d0(GameActionEquip *this)

{
  if ((int *)this->mbr_0xbc != (int *)0x0) {
    (**(code **)(*(int *)this->mbr_0xbc + 0x54))(1);
  }
  return;
}



void __thiscall GameActionEquip::meth_0x43aa60(GameActionEquip *this)

{
  int **ppiVar1;
  int iVar2;
  dword *pdVar3;
  int iVar4;
  GameActionEquip *local_4;
  
  pdVar3 = &this->mbr_0x104;
  iVar2 = 0x21;
  local_4 = this;
  do {
    iVar4 = 3;
    do {
      cls_0x43a490::meth_0x43a490((cls_0x43a490 *)*pdVar3,0);
      pdVar3 = pdVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  ppiVar1 = (int **)this->mbr_0x2b4;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x2b0,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x2b0,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



void __thiscall GameActionEquip::meth_0x43b270(GameActionEquip *this)

{
  dword *pdVar1;
  int iVar2;
  int iVar3;
  
  pdVar1 = &this->mbr_0xec;
  iVar2 = 6;
  do {
    if ((cls_0x43a420 *)*pdVar1 != (cls_0x43a420 *)0x0) {
      FUN_0043aff0((cls_0x43a420 *)*pdVar1);
    }
    pdVar1 = pdVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pdVar1 = &this->mbr_0x104;
  iVar2 = 0x21;
  do {
    iVar3 = 3;
    do {
      if ((cls_0x43a420 *)*pdVar1 != (cls_0x43a420 *)0x0) {
        FUN_0043aff0((cls_0x43a420 *)*pdVar1);
      }
      pdVar1 = pdVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void __thiscall GameActionEquip::meth_0x43b2c0(GameActionEquip *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  dword *pdVar6;
  uint unaff_retaddr;
  int local_24c;
  undefined local_248 [32];
  void *local_228;
  undefined4 local_218;
  dword local_214;
  char local_210 [256];
  char local_110 [256];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e116;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar2 = Gregorian::Get_mbr_0x28((Gregorian *)this->mbr_0xe0);
  local_24c = 0;
  pdVar6 = &this->mbr_0x104;
  do {
    iVar5 = 0;
    do {
      if ((local_24c < iVar2) || (iVar2 + 6 <= local_24c)) {
        *(undefined4 *)*pdVar6 = 0;
        *(undefined4 *)(*pdVar6 + 4) = 0;
      }
      else {
        FUN_00616d8c(local_210,(byte *)"picSlot%02d%02d");
        FUN_00616d8c(local_110,(byte *)"picSlot%02d%02dHighlight");
        pcVar3 = local_210;
        local_248._24_4_ = 0xf;
        local_248._20_4_ = 0;
        local_248._4_4_ = local_248._4_4_ & 0xffffff00;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_248,local_210,(int)pcVar3 - (int)(local_210 + 1));
        local_4 = 0;
        uVar4 = CLoadMapInterface::meth_0x495740
                          ((CLoadMapInterface *)
                           ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                           (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                           (int)local_248);
        *(undefined4 *)*pdVar6 = uVar4;
        local_4 = 0xffffffff;
        if (0xf < (uint)local_248._24_4_) {
                    /* WARNING: Subroutine does not return */
          _free((void *)local_248._4_4_);
        }
        local_248._24_4_ = 0xf;
        local_214 = 0xf;
        pcVar3 = local_110;
        local_248._20_4_ = 0;
        local_248._4_4_ = local_248._4_4_ & 0xffffff00;
        local_218 = 0;
        local_228 = (void *)((uint)local_228 & 0xffffff00);
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)(local_248 + 0x1c),local_110,(int)pcVar3 - (int)(local_110 + 1));
        local_4 = 1;
        uVar4 = CLoadMapInterface::meth_0x495740
                          ((CLoadMapInterface *)
                           ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                           (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                           (int)(local_248 + 0x1c));
        *(undefined4 *)(*pdVar6 + 4) = uVar4;
        local_4 = 0xffffffff;
        if (0xf < local_214) {
                    /* WARNING: Subroutine does not return */
          _free(local_228);
        }
        local_214 = 0xf;
        local_218 = 0;
        local_228 = (void *)((uint)local_228 & 0xffffff00);
      }
      iVar5 = iVar5 + 1;
      pdVar6 = pdVar6 + 1;
    } while (iVar5 < 3);
    local_24c = local_24c + 1;
    if (0x20 < local_24c) {
      ExceptionList = local_c;
      FUN_00616e15(local_10 ^ unaff_retaddr);
      return;
    }
  } while( true );
}



void __thiscall GameActionEquip::meth_0x43b4c0(GameActionEquip *this,int param_1)

{
  AreaMapIcon *this_00;
  cls_0x43a420 *this_01;
  int *piVar1;
  int iVar2;
  dword *pdVar3;
  int iVar4;
  dword dVar5;
  
  this_00 = *(AreaMapIcon **)(*(int *)(DAT_0070bd90 + 0x2c) + 0xa4);
  if (*(int *)((&this->mbr_0xec)[param_1] + 0x2c) == 1) {
    dVar5 = this->mbr_0x2a8;
    piVar1 = (int *)AreaMapIcon::Get_mbr_0x38(this_00);
    cls_0x43a420::meth_0x43ae90((cls_0x43a420 *)(&this->mbr_0xec)[param_1],piVar1,dVar5);
    AreaMapIcon::meth_0x437940(this_00,0,0);
    return;
  }
  pdVar3 = &this->mbr_0x104;
  iVar2 = 0x21;
  do {
    iVar4 = 3;
    do {
      this_01 = (cls_0x43a420 *)*pdVar3;
      if ((this_01 != (cls_0x43a420 *)0x0) && (this_01->mbr_0x28 == 1)) {
        cls_0x43a420::meth_0x43a420(this_01,(int *)0x2);
      }
      pdVar3 = pdVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  AreaMapIcon::meth_0x437940(this_00,0,0);
  return;
}



void __thiscall GameActionEquip::meth_0x43b570(GameActionEquip *this,int param_1)

{
  AreaMapIcon *this_00;
  int *piVar1;
  dword dVar2;
  
  this_00 = *(AreaMapIcon **)(*(int *)(DAT_0070bd90 + 0x2c) + 0xa4);
  dVar2 = this->mbr_0x2a8;
  piVar1 = (int *)AreaMapIcon::Get_mbr_0x38(this_00);
  cls_0x43a420::meth_0x43ae90
            ((cls_0x43a420 *)(&this->mbr_0x104)[param_1 % 3 + (param_1 / 3) * 3],piVar1,dVar2);
  AreaMapIcon::meth_0x437940(this_00,0,0);
  return;
}



void __thiscall GameActionEquip::meth_0x43b5d0(GameActionEquip *this,int param_1)

{
  int iVar1;
  cls_0x616328 *pcVar2;
  cls_0x50db20 *pcVar3;
  uint unaff_retaddr;
  void *local_b4;
  dword local_a4;
  dword local_a0;
  _String_base local_9c [4];
  void *local_98;
  undefined4 local_88;
  dword local_84;
  _String_base local_80 [4];
  void *local_7c;
  dword local_6c;
  uint local_68;
  void *local_60;
  dword local_50;
  uint local_4c;
  void *local_44;
  dword local_34;
  uint local_30;
  void *local_28;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e156;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  if (this->mbr_0xe4 != 0) {
    ExceptionList = &local_c;
    iVar1 = meth_0x54be10(this);
    pcVar2 = (cls_0x616328 *)cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar1 + 0x168),param_1);
    iVar1 = FUN_006165e0(pcVar2,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0)
    ;
    local_68 = 0xf;
    local_6c = 0;
    local_7c = (void *)((uint)local_7c & 0xffffff00);
    local_84 = 0xf;
    local_88 = 0;
    local_98 = (void *)((uint)local_98 & 0xffffff00);
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = (void *)((uint)local_b4 & 0xffffff00);
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    FUN_0056c280(*(int *)(iVar1 + 8),local_80);
    FUN_0056c280(*(int *)(iVar1 + 0xc),local_9c);
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_80,&lpOutputString_00656c9c);
    local_4._0_1_ = 3;
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffff9c,(_String_base *)pcVar3,
                          &lpOutputString_00656c9c);
    local_4._0_1_ = 4;
    pcVar3 = FUN_00425d70((cls_0x50db20 *)&stack0xffffffb8,(_String_base *)pcVar3,(int)local_9c);
    local_4._0_1_ = 5;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&stack0xffffff48,(_String_base *)pcVar3,0,0xffffffff);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (void *)((uint)local_60 & 0xffffff00);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    meth_0x43a850(this);
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      _free(local_b4);
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = (void *)((uint)local_b4 & 0xffffff00);
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_98);
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = (void *)((uint)local_98 & 0xffffff00);
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_7c);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameActionEquip::meth_0x43b810(GameActionEquip *this)

{
  char cVar1;
  GameCreature *this_00;
  char *pcVar2;
  GameActionEquip *this_01;
  cls_0x616328 *pcVar3;
  uint unaff_retaddr;
  void *local_4c;
  undefined local_48;
  uint local_38;
  dword local_34;
  char local_30 [28];
  uint uStack_14;
  void *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e168;
  pvStack_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  pcVar3 = (cls_0x616328 *)0x0;
  ExceptionList = &pvStack_c;
  meth_0x43a5e0(this);
  if (this->mbr_0x2a8 != 0) {
    pcVar3 = (cls_0x616328 *)meth_0x54be10(this_01);
  }
  this_00 = (GameCreature *)
            FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameCreature::RTTI_Type_Descriptor,
                         0);
  if (this_00 != (GameCreature *)0x0) {
    GameCreature::GetDerivedAttribute(this_00,(int *)0x1);
  }
  FUN_00616d8c(local_30,(byte *)"%d / %d");
  pcVar2 = local_30;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_4c,local_30,(int)pcVar2 - (int)(local_30 + 1));
  local_4 = 0;
  (**(code **)(*(int *)this->mbr_0x60 + 300))(&local_4c);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_10;
  FUN_00616e15(uStack_14 ^ local_4);
  return;
}



void __thiscall GameActionEquip::meth_0x43b920(GameActionEquip *this)

{
  char *pcVar1;
  int *piVar2;
  cls_0x616328 *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  GameActionEquip *this_00;
  undefined local_60 [4];
  void *local_5c;
  dword local_4c;
  uint local_48;
  undefined local_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  undefined local_28 [4];
  void *pvStack_24;
  uint uStack_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e198;
  local_c = ExceptionList;
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  pcVar1 = "lblCharName";
  do {
    pcVar6 = pcVar1;
    pcVar1 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_60,"lblCharName",(uint)(pcVar6 + -0x656ca8));
  local_4 = 0;
  piVar2 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)local_60);
  local_4 = 0xffffffff;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  if (piVar2 != (int *)0x0) {
    if (this->mbr_0x2a8 != 0) {
      pcVar3 = (cls_0x616328 *)meth_0x54be10(this_00);
      iVar4 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,
                           0);
      if (iVar4 != 0) {
        uVar5 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4) + 0xa8))
                          (local_28);
        puStack_8 = (undefined *)0x1;
        (**(code **)(*piVar2 + 300))(uVar5);
        if (uStack_10 < 0x10) {
          ExceptionList = local_c;
          return;
        }
        goto LAB_0043ba6e;
      }
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar6 = pcVar1;
      pcVar1 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"",(uint)(pcVar6 + -0x64d7d8));
    local_4 = 2;
    (**(code **)(*piVar2 + 300))(local_44);
    pvStack_24 = local_40;
    if (0xf < local_2c) {
LAB_0043ba6e:
                    /* WARNING: Subroutine does not return */
      _free(pvStack_24);
    }
  }
  ExceptionList = local_c;
  return;
}



void __thiscall GameActionEquip::meth_0x43ba90(GameActionEquip *this)

{
  char cVar1;
  cls_0x616328 *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  void *unaff_EBX;
  uint unaff_retaddr;
  undefined4 local_58;
  void *pvStack_54;
  void *pvStack_50;
  void *pvStack_4c;
  void *local_48;
  uint local_44;
  VFX_Parameter__vftable_673a20 *pVStack_40;
  VFX_Parameter__vftable_673a20 *pVStack_3c;
  VFX_Parameter__vftable_673a20 *pVStack_38;
  VFX_Parameter__vftable_673a20 *local_34;
  VFX_Parameter__vftable_673a20 *local_30;
  VFX_Parameter__vftable_673a20 *pVStack_2c;
  VFX_Parameter__vftable_673a20 *pVStack_28;
  dword dStack_1c;
  dword dStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e1e8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  pcVar2 = (cls_0x616328 *)0x0;
  ExceptionList = &local_c;
  if ((GameActionEquip *)this->mbr_0x2a8 != (GameActionEquip *)0x0) {
    ExceptionList = &local_c;
    pcVar2 = (cls_0x616328 *)meth_0x54be10((GameActionEquip *)this->mbr_0x2a8);
  }
  iVar3 = FUN_006165e0(pcVar2,0,&Entity::RTTI_Type_Descriptor,&GameCreature::RTTI_Type_Descriptor,0)
  ;
  if (iVar3 != 0) {
    FUN_00616d8c((char *)&local_58,&DAT_00650668);
    puVar4 = &local_58;
    local_30 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_34 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_44 = local_44 & 0xffffff00;
    do {
      cVar1 = *(char *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_48,(char *)&local_58,(int)puVar4 - ((int)&local_58 + 1));
    local_4 = 0;
    (**(code **)(**(int **)&(this->ActionEquip).mbr_0x10 + 300))();
    puStack_8 = (undefined *)0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      _free(local_48);
    }
    FUN_00616d8c(&stack0xffffffa4,&DAT_00650668);
    pcVar5 = &stack0xffffffa4;
    local_34 = (VFX_Parameter__vftable_673a20 *)0xf;
    pVStack_38 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_48 = (void *)((uint)local_48 & 0xffffff00);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&pvStack_4c,&stack0xffffffa4,(int)pcVar5 - (int)&stack0xffffffa5);
    puStack_8 = (undefined *)0x1;
    (**(code **)(**(int **)&(this->ActionEquip).field_0x14 + 300))();
    local_c = (void *)0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_38) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_4c);
    }
    FUN_00616d8c(&stack0xffffffa0,&DAT_00650668);
    pcVar5 = &stack0xffffffa0;
    pVStack_38 = (VFX_Parameter__vftable_673a20 *)0xf;
    pVStack_3c = (VFX_Parameter__vftable_673a20 *)0x0;
    pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&pvStack_50,&stack0xffffffa0,(int)pcVar5 - (int)&stack0xffffffa1);
    local_c = (void *)0x2;
    (**(code **)(**(int **)&(this->ActionEquip).mbr_0x18 + 300))(&pvStack_50);
    local_10 = 0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_3c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_50);
    }
    FUN_00616d8c(&stack0xffffff9c,&DAT_00650668);
    pcVar5 = &stack0xffffff9c;
    pVStack_3c = (VFX_Parameter__vftable_673a20 *)0xf;
    pVStack_40 = (VFX_Parameter__vftable_673a20 *)0x0;
    pvStack_50 = (void *)((uint)pvStack_50 & 0xffffff00);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&pvStack_54,&stack0xffffff9c,(int)pcVar5 - (int)&stack0xffffff9d);
    local_10 = 3;
    (**(code **)(*(int *)this->mbr_0x1c + 300))(&pvStack_54);
    uStack_14 = 0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_40) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_54);
    }
    FUN_00616d8c(&stack0xffffff98,&DAT_00650668);
    pcVar5 = &stack0xffffff98;
    pVStack_40 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_44 = 0;
    pvStack_54 = (void *)((uint)pvStack_54 & 0xffffff00);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_58,&stack0xffffff98,(int)pcVar5 - (int)&stack0xffffff99);
    uStack_14 = 4;
    (**(code **)(*(int *)this->mbr_0x20 + 300))(&local_58);
    dStack_18 = 0xffffffff;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_58);
    }
    FUN_00616d8c(&stack0xffffff94,&DAT_00650668);
    pcVar5 = &stack0xffffff94;
    local_44 = 0xf;
    local_48 = (void *)0x0;
    local_58 = (void *)((uint)local_58 & 0xffffff00);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffffa4,&stack0xffffff94,(int)pcVar5 - (int)&stack0xffffff95
              );
    dStack_18 = 5;
    (**(code **)(*(int *)this->mbr_0x24 + 300))(&stack0xffffffa4);
    dStack_1c = 0xffffffff;
    if ((void *)0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    FUN_00616d8c(&stack0xffffff90,&DAT_00650668);
    pcVar5 = &stack0xffffff90;
    pVStack_2c = (VFX_Parameter__vftable_673a20 *)0xf;
    local_30 = (VFX_Parameter__vftable_673a20 *)0x0;
    pVStack_40 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_40 & 0xffffff00);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_44,&stack0xffffff90,(int)pcVar5 - (int)&stack0xffffff91);
    dStack_1c = 6;
    (**(code **)(*(int *)this->mbr_0x28 + 300))(&local_44);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pVStack_28);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0043c4c1) */
/* WARNING: Removing unreachable block (ram,0x0043c43b) */

void __thiscall GameActionEquip::meth_0x43be70(GameActionEquip *this)

{
  char cVar1;
  cls_0x616328 *pcVar2;
  GameCreature *this_00;
  undefined4 *puVar3;
  char *pcVar4;
  void *unaff_EBX;
  void *unaff_EBP;
  void *unaff_ESI;
  void *unaff_EDI;
  uint unaff_retaddr;
  VFX_Parameter__vftable_673a20 **_Memory;
  undefined4 local_58;
  VFX_Parameter__vftable_673a20 *pVStack_54;
  VFX_Parameter__vftable_673a20 *pVStack_50;
  VFX_Parameter__vftable_673a20 *pVStack_4c;
  VFX_Parameter__vftable_673a20 *local_48;
  VFX_Parameter__vftable_673a20 *local_44;
  VFX_Parameter__vftable_673a20 *pVStack_40;
  VFX_Parameter__vftable_673a20 *pVStack_3c;
  VFX_Parameter__vftable_673a20 *pVStack_38;
  VFX_Parameter__vftable_673a20 *local_34;
  VFX_Parameter__vftable_673a20 *local_30;
  VFX_Parameter__vftable_673a20 *pVStack_2c;
  void *pvStack_28;
  dword dStack_24;
  dword dStack_20;
  dword dStack_1c;
  dword dStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e268;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  pcVar2 = (cls_0x616328 *)0x0;
  ExceptionList = &local_c;
  if ((GameActionEquip *)this->mbr_0x2a8 != (GameActionEquip *)0x0) {
    ExceptionList = &local_c;
    pcVar2 = (cls_0x616328 *)meth_0x54be10((GameActionEquip *)this->mbr_0x2a8);
  }
  this_00 = (GameCreature *)
            FUN_006165e0(pcVar2,0,&Entity::RTTI_Type_Descriptor,&GameCreature::RTTI_Type_Descriptor,
                         0);
  if (this_00 != (GameCreature *)0x0) {
    GameCreature::GetTotalSkill(this_00,3);
    FUN_00616d8c((char *)&local_58,&DAT_00650668);
    puVar3 = &local_58;
    local_30 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_34 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_44 = (VFX_Parameter__vftable_673a20 *)((uint)local_44 & 0xffffff00);
    do {
      cVar1 = *(char *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_48,(char *)&local_58,(int)puVar3 - ((int)&local_58 + 1));
    _Memory = &local_48;
    local_4 = 0;
    (**(code **)(*(int *)this->mbr_0x2c + 300))();
    puStack_8 = (undefined *)0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      _free(local_48);
    }
    GameCreature::GetTotalSkill(this_00,5);
    FUN_00616d8c(&stack0xffffffa4,&DAT_00650668);
    pcVar4 = &stack0xffffffa4;
    local_34 = (VFX_Parameter__vftable_673a20 *)0xf;
    pVStack_38 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_48 = (VFX_Parameter__vftable_673a20 *)((uint)local_48 & 0xffffff00);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&pVStack_4c,&stack0xffffffa4,(int)pcVar4 - (int)&stack0xffffffa5);
    puStack_8 = (undefined *)0x1;
    (**(code **)(*(int *)this->mbr_0x30 + 300))();
    local_c = (void *)0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_38) {
                    /* WARNING: Subroutine does not return */
      _free(pVStack_4c);
    }
    GameCreature::GetTotalSkill(this_00,0);
    FUN_00616d8c(&stack0xffffffa0,&DAT_00650668);
    pcVar4 = &stack0xffffffa0;
    pVStack_38 = (VFX_Parameter__vftable_673a20 *)0xf;
    pVStack_3c = (VFX_Parameter__vftable_673a20 *)0x0;
    pVStack_4c = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_4c & 0xffffff00);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&pVStack_50,&stack0xffffffa0,(int)pcVar4 - (int)&stack0xffffffa1);
    local_c = (void *)0x2;
    (**(code **)(*(int *)this->mbr_0x34 + 300))();
    local_10 = 0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_3c) {
                    /* WARNING: Subroutine does not return */
      _free(pVStack_50);
    }
    GameCreature::GetTotalSkill(this_00,6);
    FUN_00616d8c(&stack0xffffff9c,&DAT_00650668);
    pcVar4 = &stack0xffffff9c;
    pVStack_3c = (VFX_Parameter__vftable_673a20 *)0xf;
    pVStack_40 = (VFX_Parameter__vftable_673a20 *)0x0;
    pVStack_50 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_50 & 0xffffff00);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&pVStack_54,&stack0xffffff9c,(int)pcVar4 - (int)&stack0xffffff9d);
    local_10 = 3;
    (**(code **)(*(int *)this->mbr_0x38 + 300))();
    uStack_14 = 0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_40) {
                    /* WARNING: Subroutine does not return */
      _free(pVStack_54);
    }
    GameCreature::GetTotalSkill(this_00,7);
    FUN_00616d8c(&stack0xffffff98,&DAT_00650668);
    pcVar4 = &stack0xffffff98;
    pVStack_40 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_44 = (VFX_Parameter__vftable_673a20 *)0x0;
    pVStack_54 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_54 & 0xffffff00);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_58,&stack0xffffff98,(int)pcVar4 - (int)&stack0xffffff99);
    uStack_14 = 4;
    (**(code **)(*(int *)this->mbr_0x3c + 300))();
    dStack_18 = 0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_58);
    }
    GameCreature::GetTotalSkill(this_00,1);
    FUN_00616d8c(&stack0xffffff94,&DAT_00650668);
    pcVar4 = &stack0xffffff94;
    local_44 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_48 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_58 = (VFX_Parameter__vftable_673a20 *)((uint)local_58 & 0xffffff00);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffffa4,&stack0xffffff94,(int)pcVar4 - (int)&stack0xffffff95
              );
    dStack_18 = 5;
    (**(code **)(*(int *)this->mbr_0x40 + 300))();
    dStack_1c = 0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    GameCreature::GetTotalSkill(this_00,8);
    FUN_00616d8c(&stack0xffffff90,&DAT_00650668);
    pcVar4 = &stack0xffffff90;
    local_48 = (VFX_Parameter__vftable_673a20 *)0xf;
    pVStack_4c = (VFX_Parameter__vftable_673a20 *)0x0;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffffa0,&stack0xffffff90,(int)pcVar4 - (int)&stack0xffffff91
              );
    dStack_1c = 6;
    (**(code **)(*(int *)this->mbr_0x44 + 300))();
    dStack_20 = 0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_ESI);
    }
    GameCreature::GetTotalSkill(this_00,4);
    FUN_00616d8c(&stack0xffffff8c,&DAT_00650668);
    pcVar4 = &stack0xffffff8c;
    pVStack_4c = (VFX_Parameter__vftable_673a20 *)0xf;
    pVStack_50 = (VFX_Parameter__vftable_673a20 *)0x0;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff9c,&stack0xffffff8c,(int)pcVar4 - (int)&stack0xffffff8d
              );
    dStack_20 = 7;
    (**(code **)(*(int *)this->mbr_0x48 + 300))();
    dStack_24 = 0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_50) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EDI);
    }
    GameCreature::GetTotalSkill(this_00,9);
    FUN_00616d8c(&stack0xffffff88,&DAT_00650668);
    pcVar4 = &stack0xffffff88;
    pVStack_50 = (VFX_Parameter__vftable_673a20 *)0xf;
    pVStack_54 = (VFX_Parameter__vftable_673a20 *)0x0;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff98,&stack0xffffff88,(int)pcVar4 - (int)&stack0xffffff89
              );
    dStack_24 = 8;
    (**(code **)(*(int *)this->mbr_0x4c + 300))(&stack0xffffff98);
    pvStack_28 = (void *)0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_54) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBP);
    }
    GameCreature::GetTotalSkill(this_00,10);
    FUN_00616d8c(&stack0xffffff84,&DAT_00650668);
    pcVar4 = &stack0xffffff84;
    pVStack_54 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_58 = (VFX_Parameter__vftable_673a20 *)0x0;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff94,&stack0xffffff84,(int)pcVar4 - (int)&stack0xffffff85
              );
    pvStack_28 = (void *)0x9;
    (**(code **)(*(int *)this->mbr_0x50 + 300))(&stack0xffffff94);
    pVStack_2c = (VFX_Parameter__vftable_673a20 *)0xffffffff;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    GameCreature::GetTotalSkill(this_00,0xb);
    FUN_00616d8c(&stack0xffffff80,&DAT_00650668);
    pcVar4 = &stack0xffffff80;
    local_58 = (VFX_Parameter__vftable_673a20 *)0xf;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff90,&stack0xffffff80,(int)pcVar4 - (int)&stack0xffffff81
              );
    pVStack_2c = (VFX_Parameter__vftable_673a20 *)&DAT_0000000a;
    (**(code **)(*(int *)this->mbr_0x54 + 300))(&stack0xffffff90);
    local_30 = (VFX_Parameter__vftable_673a20 *)0xffffffff;
    GameCreature::GetTotalSkill(this_00,0xc);
    FUN_00616d8c(&stack0xffffff7c,&DAT_00650668);
    pcVar4 = &stack0xffffff7c;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff8c,&stack0xffffff7c,(int)pcVar4 - (int)&stack0xffffff7d
              );
    local_30 = (VFX_Parameter__vftable_673a20 *)0xb;
    (**(code **)(*(int *)this->mbr_0x58 + 300))(&stack0xffffff8c);
    local_34 = (VFX_Parameter__vftable_673a20 *)0xffffffff;
    GameCreature::GetTotalSkill(this_00,2);
    FUN_00616d8c(&stack0xffffff78,&DAT_00650668);
    pcVar4 = &stack0xffffff78;
    local_44 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_48 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_58 = (VFX_Parameter__vftable_673a20 *)((uint)local_58 & 0xffffff00);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffffa4,&stack0xffffff78,(int)pcVar4 - (int)&stack0xffffff79
              );
    local_34 = (VFX_Parameter__vftable_673a20 *)0xc;
    (**(code **)(*(int *)this->mbr_0x5c + 300))(&stack0xffffffa4);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
GameActionEquip::meth_0x43c570(GameActionEquip *this,int *param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  cls_0x616328 *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint unaff_retaddr;
  _String_base local_12c [4];
  void *local_128;
  dword local_118;
  uint local_114;
  char local_110 [256];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e28b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  pcVar2 = (cls_0x616328 *)meth_0x54be10(this);
  iVar3 = FUN_006165e0(pcVar2,0,&Entity::RTTI_Type_Descriptor,&GameCreature::RTTI_Type_Descriptor,0)
  ;
  FUN_006165e0((cls_0x616328 *)param_1,0,&Entity::RTTI_Type_Descriptor,
               &GameArmor::RTTI_Type_Descriptor,0);
  if (iVar3 == 0) {
    pcVar4 = "-/-";
    do {
      pcVar5 = pcVar4;
      pcVar4 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)param_3,"-/-",(uint)(pcVar5 + -0x656cb4));
  }
  else {
    FUN_00616d8c(local_110,(byte *)"%d-%d");
    pcVar4 = local_110;
    local_114 = 0xf;
    local_118 = 0;
    local_128 = (void *)((uint)local_128 & 0xffffff00);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_12c,local_110,(int)pcVar4 - (int)(local_110 + 1));
    local_4 = 0;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)param_3,local_12c,0,0xffffffff);
    if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
GameActionEquip::meth_0x43c6f0(GameActionEquip *this,int *param_1,_String_base *param_2)

{
  char *pcVar1;
  int iVar2;
  cls_0x616328 *pcVar3;
  char *pcVar4;
  GameActionEquip *this_00;
  
  iVar2 = FUN_006165e0((cls_0x616328 *)param_1,0,&Entity::RTTI_Type_Descriptor,
                       &GameEntity::RTTI_Type_Descriptor,0);
  FUN_006165e0((cls_0x616328 *)param_1,0,&Entity::RTTI_Type_Descriptor,
               &GameWeapon::RTTI_Type_Descriptor,0);
  if (iVar2 != 0) {
    FUN_0056c280(*(int *)(iVar2 + 8),param_2);
    return;
  }
  pcVar3 = (cls_0x616328 *)meth_0x54be10(this_00);
  iVar2 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameCreature::RTTI_Type_Descriptor,0)
  ;
  if (iVar2 == 0) {
    pcVar1 = "---";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)param_2,"---",(uint)(pcVar4 + -0x656cc0));
    return;
  }
  FUN_0056c280(0x55,param_2);
  return;
}



void __thiscall GameActionEquip::meth_0x43ca70(GameActionEquip *this,int *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  cls_0x616328 *pcVar5;
  uint unaff_retaddr;
  char *pcVar6;
  void *local_128;
  dword local_118;
  uint local_114;
  char local_110 [256];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e28b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar2 = FUN_006165e0((cls_0x616328 *)param_1,0,&Entity::RTTI_Type_Descriptor,
                       &GameEntity::RTTI_Type_Descriptor,0);
  iVar3 = FUN_006165e0((cls_0x616328 *)param_1,0,&Entity::RTTI_Type_Descriptor,
                       &GameWeapon::RTTI_Type_Descriptor,0);
  if (iVar3 == 0) {
    if (iVar2 == 0) {
      pcVar5 = (cls_0x616328 *)meth_0x54be10((GameActionEquip *)0x0);
      iVar2 = FUN_006165e0(pcVar5,0,&Entity::RTTI_Type_Descriptor,
                           &GameCreature::RTTI_Type_Descriptor,0);
      if (iVar2 == 0) {
        pcVar6 = "-/-";
        do {
          pcVar4 = pcVar6;
          pcVar6 = pcVar4 + 1;
        } while (*pcVar4 != '\0');
        pcVar4 = pcVar4 + -0x656cb4;
        pcVar6 = "-/-";
      }
      else {
        if (*(int *)(iVar2 + 0x6f4) == 0) {
          FUN_00401c70(param_2,(undefined4 *)&DAT_00656cb4);
        }
        FUN_00616d8c(local_110,(byte *)"%d-%d");
        pcVar4 = local_110;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = pcVar4 + -(int)(local_110 + 1);
        pcVar6 = local_110;
      }
    }
    else {
      pcVar6 = "-/-";
      do {
        pcVar4 = pcVar6;
        pcVar6 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      pcVar4 = pcVar4 + -0x656cb4;
      pcVar6 = "-/-";
    }
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)param_2,pcVar6,(uint)pcVar4);
  }
  else {
    local_114 = 0xf;
    local_118 = 0;
    local_128 = (void *)((uint)local_128 & 0xffffff00);
    iVar2 = *(int *)(iVar3 + 0x408);
    local_4 = 0;
    if (iVar2 == 0) {
      pcVar6 = "-/-";
      do {
        pcVar4 = pcVar6;
        pcVar6 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      pcVar4 = pcVar4 + -0x656cb4;
      pcVar6 = "-/-";
    }
    else {
      if (*(int *)(iVar2 + 0x1c) != 0) {
        FUN_00408110(*(int *)(iVar3 + 0x3b4),*(int *)(iVar3 + 0x3b8));
      }
      FUN_0043c990(*(undefined4 *)(iVar2 + 0x10),(cls_0x50db20 *)&stack0xfffffed4);
      FUN_00616d8c(local_110,(byte *)"%d-%d %s");
      pcVar4 = local_110;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -(int)(local_110 + 1);
      pcVar6 = local_110;
    }
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)param_2,pcVar6,(uint)pcVar4);
    if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameActionEquip::meth_0x43e6d0(GameActionEquip *this,int param_1,int param_2)

{
  cls_0x43a490 *this_00;
  dword dVar1;
  int iVar2;
  
  iVar2 = param_2 + param_1 * 3;
  this_00 = (cls_0x43a490 *)(&this->mbr_0x104)[iVar2];
  if (this_00->mbr_0x2c == 3) {
    cls_0x43a490::meth_0x43a490(this_00,0);
    cls_0x401b00::meth_0x40e780
              ((cls_0x401b00 *)&this->mbr_0x2b0,(int **)((&this->mbr_0x104)[iVar2] + 8));
    return;
  }
  cls_0x43a490::meth_0x43a490(this_00,3);
  dVar1 = this->mbr_0x2b4;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),
                       (undefined4 *)((&this->mbr_0x104)[iVar2] + 8));
  cls_0x401b00::meth_0x436410((cls_0x401b00 *)&this->mbr_0x2b0,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}



/* WARNING: Switch with 1 destination removed at 0x0043e88d */
/* WARNING: Exceeded maximum restarts with more pending */

void __thiscall GameActionEquip::meth_0x43e760(GameActionEquip *this,int *param_1,int param_2)

{
  cls_0x616328 *pcVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  undefined4 unaff_EBX;
  undefined local_44 [4];
  int *local_40;
  GameActionEquip *local_3c;
  int *piStack_30;
  cls_0x401b00 cStack_2c;
  int **local_1c;
  undefined local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e560;
  local_c = ExceptionList;
  local_3c = this;
  if (param_1 == (int *)0x1) {
    piVar3 = (int *)this->mbr_0xc4;
  }
  else if (param_1 == (int *)0x2) {
    piVar3 = (int *)this->mbr_0xc8;
  }
  else {
    ExceptionList = &local_c;
    if (param_1 != (int *)0x3) goto LAB_0043e7c4;
    piVar3 = (int *)this->mbr_0xcc;
  }
  ExceptionList = &local_c;
  (**(code **)(*piVar3 + 0x140))(local_44);
  (**(code **)(*(int *)this->mbr_0xc0 + 0x130))(unaff_EBX);
LAB_0043e7c4:
  piVar3 = (int *)meth_0x43a5e0(this);
  if (piVar3 == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  cStack_2c.mbr_0xc = FUN_0056e0b0();
  local_1c = (int **)0x0;
  local_4 = 0;
  if ((int **)cStack_2c.mbr_0xc == (int **)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)cStack_2c.mbr_0xc;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&cStack_2c.mbr_0x8,&local_40,piVar8,(int *)cStack_2c.mbr_0xc);
  if ((int **)piVar3[3] == (int **)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)piVar3[3];
  }
  if (piVar8 != (int *)piVar3[3]) {
    do {
      pcVar1 = (cls_0x616328 *)piVar8[2];
      piVar4 = (int *)FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,
                                   &GameEntity::RTTI_Type_Descriptor,0);
      local_40 = piVar4;
      if ((pcVar1 != (cls_0x616328 *)0x0) && (piVar4 != (int *)0x0)) {
        local_14 = FUN_0056e0b0();
        local_10 = 0;
        local_4 = CONCAT31(local_4._1_3_,1);
        cVar2 = (**(code **)(*piVar3 + 0x28))(pcVar1,local_18);
        if ((cVar2 != '\0') || (3 < local_4 - 1U)) goto switchD_0043e88d_caseD_4;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                    /* WARNING: This code block may not be properly labeled as switch case */
        ppiVar5 = (int **)cls_0x401b00::meth_0x4014f0(&cStack_2c,&local_40);
        piVar3 = *ppiVar5;
        if (piVar3 == (int *)cStack_2c.mbr_0x4) goto LAB_0043e94d;
        goto LAB_0043e8c0;
      }
      piVar8 = (int *)*piVar8;
      this = local_3c;
    } while (piVar8 != (int *)piVar3[3]);
  }
  ppiVar5 = (int **)cStack_2c.mbr_0xc;
  iVar6 = param_2;
  if ((int **)cStack_2c.mbr_0xc == (int **)0x0) {
    ppiVar7 = (int **)0x0;
  }
  else {
    ppiVar7 = *(int ***)cStack_2c.mbr_0xc;
  }
  for (; ppiVar7 != (int **)cStack_2c.mbr_0xc; ppiVar7 = (int **)*ppiVar7) {
    *(int *)((int)ppiVar7[2] + 0x8c) = iVar6;
    iVar6 = iVar6 + 1;
  }
  if (param_1 == (int *)0x4) {
    GUI::ScrollBar::meth_0x4b8aa0((ScrollBar *)this->mbr_0xe0,((int)local_1c + -1) / 3 + 1);
  }
  meth_0x43b2c0(this);
  meth_0x43ee60(this);
  if (ppiVar5 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar5;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&cStack_2c.mbr_0x8,&param_1,piVar3,(int *)ppiVar5);
                    /* WARNING: Subroutine does not return */
  _free((void *)cStack_2c.mbr_0xc);
  while (piVar3 = (int *)*piVar3, piVar3 != (int *)cStack_2c.mbr_0x4) {
LAB_0043e8c0:
    if (*(int *)(*(int *)(piVar4[1] + 4) + 0x160 + (int)piVar4) ==
        *(int *)(*(int *)(*(int *)(piVar3[2] + 4) + 4) + 0x160 + piVar3[2])) break;
  }
LAB_0043e94d:
  iVar6 = FUN_00433760(piVar3,piVar3[1],(undefined4 *)&stack0xffffffb8);
  cls_0x401b00::meth_0x43ad60(&cStack_2c,1);
  piVar3[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
switchD_0043e88d_caseD_4:
  local_c = (void *)((uint)local_c & 0xffffff00);
  if (local_1c == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *local_1c;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&cStack_2c.mbr_0xc,&piStack_30,piVar3,(int *)local_1c);
                    /* WARNING: Subroutine does not return */
  _free(local_1c);
}



void __thiscall GameActionEquip::meth_0x43eae0(GameActionEquip *this)

{
  cls_0x616328 *pcVar1;
  uint unaff_retaddr;
  undefined *_Memory;
  undefined *puVar2;
  undefined *puVar3;
  VFX_Parameter__vftable_673a20 *pVVar4;
  undefined *puVar5;
  _String_base local_2c [4];
  undefined local_28;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062e578;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  pcVar1 = (cls_0x616328 *)FUN_0043aac0(this);
  FUN_0043a8f0(pcVar1,local_2c);
  (**(code **)(*(int *)this->mbr_0x80 + 300))();
  meth_0x43c570(this,(int *)pcVar1,0,&stack0xffffffd0);
  (**(code **)(*(int *)this->mbr_0x84 + 300))();
  meth_0x43c570(this,(int *)pcVar1,1,&stack0xffffffcc);
  (**(code **)(*(int *)this->mbr_0x88 + 300))();
  meth_0x43c570(this,(int *)pcVar1,2,&stack0xffffffc8);
  (**(code **)(*(int *)this->mbr_0x8c + 300))();
  meth_0x43c570(this,(int *)pcVar1,3,&stack0xffffffc4);
  (**(code **)(*(int *)this->mbr_0x90 + 300))();
  meth_0x43c570(this,(int *)pcVar1,5,&stack0xffffffc0);
  (**(code **)(*(int *)this->mbr_0x94 + 300))();
  meth_0x43c570(this,(int *)pcVar1,4,&stack0xffffffbc);
  (**(code **)(*(int *)this->mbr_0x98 + 300))();
  pcVar1 = (cls_0x616328 *)FUN_0043aac0(this);
  FUN_0043a8f0(pcVar1,(_String_base *)&stack0xffffffb8);
  (**(code **)(*(int *)this->mbr_0x64 + 300))();
  meth_0x43c570(this,(int *)pcVar1,0,&stack0xffffffb4);
  puVar5 = &stack0xffffffb4;
  (**(code **)(*(int *)this->mbr_0x68 + 300))();
  meth_0x43c570(this,(int *)pcVar1,1,&stack0xffffffb0);
  (**(code **)(*(int *)this->mbr_0x6c + 300))();
  meth_0x43c570(this,(int *)pcVar1,2,&stack0xffffffac);
  (**(code **)(*(int *)this->mbr_0x70 + 300))();
  meth_0x43c570(this,(int *)pcVar1,3,&stack0xffffffa8);
  pVVar4 = (VFX_Parameter__vftable_673a20 *)&stack0xffffffa8;
  (**(code **)(*(int *)this->mbr_0x74 + 300))();
  meth_0x43c570(this,(int *)pcVar1,5,&stack0xffffffa4);
  puVar3 = &stack0xffffffa4;
  (**(code **)(*(int *)this->mbr_0x78 + 300))();
  meth_0x43c570(this,(int *)pcVar1,4,&stack0xffffffa0);
  puVar2 = &stack0xffffffa0;
  (**(code **)(*(int *)this->mbr_0x7c + 300))();
  pcVar1 = (cls_0x616328 *)FUN_0043aac0(this);
  meth_0x43c6f0(this,(int *)pcVar1,(_String_base *)&stack0xffffff9c);
  (**(code **)(*(int *)this->mbr_0x9c + 300))();
  meth_0x43ca70(this,(int *)pcVar1,&stack0xffffff98);
  (**(code **)(*(int *)this->mbr_0xa0 + 300))();
  FUN_0043c7b0(pcVar1,(cls_0x50db20 *)&stack0xffffff94);
  (**(code **)(*(int *)this->mbr_0xa4 + 300))();
  FUN_0043c8a0(pcVar1,(cls_0x50db20 *)&stack0xffffff90);
  (**(code **)(*(int *)this->mbr_0xa8 + 300))();
  pcVar1 = (cls_0x616328 *)FUN_0043aac0(this);
  meth_0x43c6f0(this,(int *)pcVar1,(_String_base *)&stack0xffffff8c);
  _Memory = &stack0xffffff8c;
  (**(code **)(*(int *)this->mbr_0xac + 300))();
  meth_0x43ca70(this,(int *)pcVar1,&stack0xffffff88);
  (**(code **)(*(int *)this->mbr_0xb0 + 300))(&stack0xffffff88);
  FUN_0043c7b0(pcVar1,(cls_0x50db20 *)&stack0xffffff84);
  (**(code **)(*(int *)this->mbr_0xb4 + 300))(&stack0xffffff84);
  FUN_0043c8a0(pcVar1,(cls_0x50db20 *)&stack0xffffff80);
  (**(code **)(*(int *)this->mbr_0xb8 + 300))(&stack0xffffff80);
  if ((undefined *)0xf < puVar2) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pVVar4;
  FUN_00616e15((uint)puVar3 ^ (uint)puVar5);
  return;
}



void __thiscall GameActionEquip::meth_0x43ee60(GameActionEquip *this)

{
  AreaMapIcon *this_00;
  int **_Memory;
  cls_0x616328 *pcVar1;
  cls_0x43a420 *this_01;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  GameActionEquip *unaff_EBX;
  GameActionEquip *local_30;
  undefined4 local_2c;
  int **ppiStack_28;
  dword local_24;
  undefined4 local_20;
  int **local_1c;
  undefined local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e5a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_30 = this;
  meth_0x43b270(this);
  piVar3 = (int *)meth_0x43a5e0(this);
  if (piVar3 != (int *)0x0) {
    this_00 = *(AreaMapIcon **)(*(int *)(DAT_0070bd90 + 0x2c) + 0xa4);
    local_2c = 0;
    if (this_00->mbr_0x30 == 0xe) {
      local_2c = AreaMapIcon::Get_mbr_0x38(this_00);
    }
    if ((int **)piVar3[3] == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)piVar3[3];
    }
    if (piVar4 != (int *)piVar3[3]) {
      do {
        iVar5 = piVar4[2];
        if (iVar5 != 0) {
          local_20 = FUN_0056e0b0();
          local_1c = (int **)0x0;
          local_4 = 0;
          cVar2 = (**(code **)(*piVar3 + 0x28))(iVar5,&local_24);
          ppiVar7 = ppiStack_28;
          if (cVar2 != '\0') {
            while (local_24 != 0) {
              if (ppiVar7 == (int **)0x0) {
                piVar3 = (int *)0x0;
              }
              else {
                piVar3 = *ppiVar7;
              }
              if ((cls_0x43a420 *)(&unaff_EBX->mbr_0xec)[piVar3[2]] != (cls_0x43a420 *)0x0) {
                cls_0x43a420::meth_0x43ae90
                          ((cls_0x43a420 *)(&unaff_EBX->mbr_0xec)[piVar3[2]],
                           *(int **)(iVar5 + 0x1dc),*(uint *)(iVar5 + 0x2dc));
                ppiVar7 = ppiStack_28;
              }
              if ((ppiVar7 != (int **)0x0) && (_Memory = (int **)*ppiVar7, _Memory != ppiVar7)) {
                *_Memory[1] = (int)*_Memory;
                *(int **)((int)*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
                _free(_Memory);
              }
            }
          }
          local_c = (void *)0xffffffff;
          if (ppiVar7 == (int **)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = *ppiVar7;
          }
          GUI::Interface::meth_0x4b9d60
                    ((Interface *)(&local_30 + 1),(int **)&local_30,piVar3,(int *)ppiVar7);
                    /* WARNING: Subroutine does not return */
          _free(ppiStack_28);
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)piVar3[3]);
    }
    if ((int **)piVar3[3] == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)piVar3[3];
    }
    if (piVar4 != (int *)piVar3[3]) {
      do {
        pcVar1 = (cls_0x616328 *)piVar4[2];
        iVar5 = FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,
                             &GameEntity::RTTI_Type_Descriptor,0);
        if ((pcVar1 != (cls_0x616328 *)0x0) && (iVar5 != 0)) {
          local_20 = FUN_0056e0b0();
          local_1c = (int **)0x0;
          local_4 = 1;
          cVar2 = (**(code **)(*piVar3 + 0x28))(pcVar1,&local_24);
          if ((cVar2 == '\0') && (iVar5 = *(int *)(iVar5 + 0x8c), iVar5 != -1)) {
            cls_0x43a420::meth_0x43ae90
                      ((cls_0x43a420 *)(&unaff_EBX->mbr_0x104)[(iVar5 / 3) * 3 + iVar5 % 3],
                       (int *)pcVar1[0x77].mbr_0x0,pcVar1[0xb7].mbr_0x0);
            if (((int *)pcVar1[0x77].mbr_0x0 == piVar3) &&
               (this_01 = (cls_0x43a420 *)(&unaff_EBX->mbr_0x104)[(iVar5 / 3) * 3 + iVar5 % 3],
               this_01->mbr_0x0 != 0)) {
              cls_0x43a420::meth_0x43a420(this_01,(int *)0x1);
            }
          }
          local_c = (void *)0xffffffff;
          if (ppiStack_28 == (int **)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = *ppiStack_28;
          }
          GUI::Interface::meth_0x4b9d60
                    ((Interface *)(&local_30 + 1),(int **)&local_30,piVar3,(int *)ppiStack_28);
                    /* WARNING: Subroutine does not return */
          _free(ppiStack_28);
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)piVar3[3]);
    }
    if ((int **)piVar3[3] == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)piVar3[3];
    }
    if (piVar4 != (int *)piVar3[3]) {
      do {
        pcVar1 = (cls_0x616328 *)piVar4[2];
        iVar5 = FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,
                             &GameEntity::RTTI_Type_Descriptor,0);
        if ((pcVar1 != (cls_0x616328 *)0x0) && (iVar5 != 0)) {
          local_14 = FUN_0056e0b0();
          local_10 = 0;
          local_4 = 2;
          cVar2 = (**(code **)(*piVar3 + 0x28))(pcVar1,local_18);
          if ((cVar2 == '\0') && (*(int *)(iVar5 + 0x8c) == -1)) {
            iVar6 = FUN_0043ac40(unaff_EBX);
            *(int *)(iVar5 + 0x8c) = iVar6 + 1;
            meth_0x43e760(unaff_EBX,(int *)0x4,0);
          }
          local_c = (void *)0xffffffff;
          if (local_1c == (int **)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = *local_1c;
          }
          GUI::Interface::meth_0x4b9d60
                    ((Interface *)(&local_24 + 1),(int **)&local_30,piVar3,(int *)local_1c);
                    /* WARNING: Subroutine does not return */
          _free(local_1c);
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)piVar3[3]);
    }
  }
  ExceptionList = local_c;
  return;
}



void __thiscall GameActionEquip::meth_0x43f280(GameActionEquip *this)

{
  int **ppiVar1;
  AreaMapIcon *this_00;
  int **ppiVar2;
  cls_0x46a8e0 *this_01;
  int iVar3;
  cls_0x616328 *pcVar4;
  int **ppiVar5;
  int *piVar6;
  dword *pdVar7;
  int *local_2c;
  GameActionEquip *local_28;
  undefined local_24 [16];
  int **local_14;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4._0_1_ = 0xff;
  local_4._1_3_ = 0xffffff;
  puStack_8 = &LAB_0062e560;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_28 = this;
  this_01 = (cls_0x46a8e0 *)meth_0x43a5e0(this);
  this_00 = *(AreaMapIcon **)(*(int *)(DAT_0070bd90 + 0x2c) + 0xa4);
  local_24._4_4_ = FUN_0056e0b0();
  local_24._8_4_ = 0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if ((int **)local_24._4_4_ == (int **)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)local_24._4_4_;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)local_24,&local_2c,piVar6,(int *)local_24._4_4_);
  iVar3 = AreaMapIcon::Get_mbr_0x38(this_00);
  if (iVar3 == 0) {
    pdVar7 = &this->mbr_0xec;
    iVar3 = 6;
    do {
      cls_0x43a490::meth_0x43a490((cls_0x43a490 *)*pdVar7,0);
      ppiVar2 = (int **)local_24._4_4_;
      pdVar7 = pdVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((int **)local_24._4_4_ == (int **)0x0) {
      ppiVar5 = (int **)0x0;
    }
    else {
      ppiVar5 = *(int ***)local_24._4_4_;
    }
    for (; ppiVar5 != ppiVar2; ppiVar5 = (int **)*ppiVar5) {
      cls_0x43a490::meth_0x43a490((cls_0x43a490 *)(&this->mbr_0xec)[(int)ppiVar5[2]],1);
    }
    if (ppiVar2 == (int **)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = *ppiVar2;
    }
    GUI::Interface::meth_0x4b9d60((Interface *)local_24,(int **)&local_28,piVar6,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
    _free((void *)local_24._4_4_);
  }
  iVar3 = AreaMapIcon::Get_mbr_0x38(this_00);
  pcVar4 = (cls_0x616328 *)cls_0x46a8e0::meth_0x55fea0(this_01,iVar3);
  pcVar4 = (cls_0x616328 *)
           FUN_006165e0(pcVar4,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0);
  iVar3 = FUN_006165e0(pcVar4,0,&GameEntity::RTTI_Type_Descriptor,&GameItem::RTTI_Type_Descriptor,0)
  ;
  cls_0x4112c0::cls_0x4112c0((cls_0x4112c0 *)(local_24 + 0xc),iVar3 + 0xa8);
  ppiVar2 = local_14;
  local_4._0_1_ = 1;
  if (local_14 == (int **)0x0) {
    ppiVar5 = (int **)0x0;
  }
  else {
    ppiVar5 = (int **)*local_14;
  }
  do {
    if (ppiVar5 == ppiVar2) {
      local_4 = (uint)local_4._1_3_ << 8;
      if (ppiVar2 == (int **)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = *ppiVar2;
      }
      GUI::Interface::meth_0x4b9d60((Interface *)(local_24 + 0xc),&local_2c,piVar6,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
      _free(local_14);
    }
    iVar3 = (int)ppiVar5[2];
    if (iVar3 == 0) {
      local_2c = (int *)0x0;
LAB_0043f3c4:
      ppiVar1 = (int **)(local_24._4_4_ + 4);
      piVar6 = (int *)FUN_00433760(local_24._4_4_,*(int **)(local_24._4_4_ + 4),&local_2c);
      cls_0x401b00::meth_0x43ad60((cls_0x401b00 *)local_24,1);
      *ppiVar1 = piVar6;
      *(int **)piVar6[1] = piVar6;
    }
    else {
      if (iVar3 == 1) {
        local_2c = (int *)0x1;
        goto LAB_0043f3c4;
      }
      if (iVar3 == 2) {
        ppiVar1 = (int **)(local_24._4_4_ + 4);
        local_2c = (int *)0x2;
        piVar6 = (int *)FUN_00433760(local_24._4_4_,*(int **)(local_24._4_4_ + 4),&local_2c);
        cls_0x401b00::meth_0x43ad60((cls_0x401b00 *)local_24,1);
        *ppiVar1 = piVar6;
        *(int **)piVar6[1] = piVar6;
        local_2c = (int *)0x3;
        goto LAB_0043f3c4;
      }
    }
    ppiVar5 = (int **)*ppiVar5;
  } while( true );
}



void __thiscall GameActionEquip::meth_0x43f4c0(GameActionEquip *this,int param_1)

{
  char *pcVar1;
  char *pcVar2;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e0e8;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  this->mbr_0x2a8 = param_1;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffd8,"",(uint)(pcVar2 + -0x64d7d8));
  local_4 = 0;
  meth_0x43a850(this);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  GUI::ScrollBar::meth_0x4b8ae0((ScrollBar *)this->mbr_0xe0,0,'\x01');
  meth_0x43b2c0(this);
  meth_0x43aa60(this);
  meth_0x43a8d0(this);
  if ((int *)this->mbr_0xc0 != (int *)0x0) {
    (**(code **)(*(int *)this->mbr_0xc0 + 0x130))(0x96);
  }
  meth_0x43b920(this);
  meth_0x43ba90(this);
  meth_0x43be70(this);
  meth_0x43f280(this);
  meth_0x43ee60(this);
  meth_0x43eae0(this);
  meth_0x43b810(this);
  meth_0x43e760(this,(int *)0x4,0);
  ExceptionList = pVStack_c;
  return;
}



void __thiscall GameActionEquip::meth_0x43f5e0(GameActionEquip *this)

{
  char cVar1;
  
  cVar1 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)
                     ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                     (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4));
  if (cVar1 == '\0') {
    meth_0x43ee60(this);
    meth_0x43eae0(this);
    meth_0x43b810(this);
    meth_0x43e760(this,(int *)0x4,0);
  }
  return;
}



void __thiscall GameActionEquip::meth_0x44a3b0(GameActionEquip *this)

{
  int iVar1;
  CounterControl *local_10;
  dword local_c;
  dword local_8;
  dword local_4;
  
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),1);
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0xc0 + 4) + (int)(int *)this->mbr_0xc0),1);
  local_10 = (CounterControl *)this->mbr_0x1cc;
  local_c = this->mbr_0x1d0;
  local_8 = this->mbr_0x1d4;
  local_4 = this->mbr_0x1d8;
  iVar1 = 0;
  do {
    CounterControl::meth_0x431d70((&local_10)[iVar1]);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



int __thiscall GameActionEquip::meth_0x44a420(GameActionEquip *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this->mbr_0xb4 + 7;
  iVar2 = this->mbr_0xb8 + 1;
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



int __thiscall GameActionEquip::meth_0x44a440(GameActionEquip *this)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x1b4;
  if ((int)dVar1 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = dVar1 + 3;
  }
  iVar2 = this->mbr_0x1b8 + 1;
  if (iVar2 <= iVar3) {
    if (0 < (int)dVar1) {
      return dVar1 + 3;
    }
    iVar2 = 0;
  }
  return iVar2;
}



uint __thiscall GameActionEquip::meth_0x44a470(GameActionEquip *this,int *param_1)

{
  uint uVar1;
  
  if ((AreaMapWindow *)this->mbr_0xc8 == (AreaMapWindow *)0x0) {
    return (uint)this & 0xffffff00;
  }
  uVar1 = AreaMapWindow::meth_0x41d360((AreaMapWindow *)this->mbr_0xc8,param_1);
  return uVar1;
}



void __thiscall GameActionEquip::meth_0x44a590(GameActionEquip *this,char param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
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
  piVar3 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x74))();
  iVar2 = (**(code **)(*piVar3 + 0x14))();
  iVar4 = (**(code **)(*piVar3 + 0x18))();
  iVar5 = (**(code **)(*piVar3 + 0x1c))();
  uVar6 = (**(code **)(*piVar3 + 0x20))();
  local_8 = (Exception__vftable_64787c *)(**(code **)(*piVar3 + 0x24))();
  uVar7 = -(uint)(param_1 != '\0') & 2;
  CounterControl::meth_0x4313b0((CounterControl *)this->mbr_0x1cc,iVar5,uVar7);
  CounterControl::meth_0x4313b0((CounterControl *)this->mbr_0x1d0,iVar4 + -1,uVar7);
  CounterControl::meth_0x4313b0((CounterControl *)this->mbr_0x1d4,iVar2,uVar7);
  CounterControl::meth_0x4313b0
            ((CounterControl *)this->mbr_0x1d8,(int)(local_8 + uVar6 * 0x19),uVar7);
  if ((uVar6 < 0x15) && (uVar6 != 0)) {
    uVar8 = 9;
  }
  else {
    uVar8 = 3;
  }
  CounterControl::meth_0x430a30((CounterControl *)this->mbr_0x1d8,2,0,uVar8);
  return;
}



int __thiscall GameActionEquip::meth_0x44a6c0(GameActionEquip *this)

{
  dword dVar1;
  dword dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  dVar1 = this->mbr_0x98;
  if (((int)dVar1 < 1) || ((int)this->mbr_0x9c < 1)) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
  }
  dVar2 = this->mbr_0x9c;
  iVar3 = this->mbr_0x94 + 1;
  iVar4 = (uint)(0 < (int)dVar1) + dVar2 + (0 < (int)dVar2) + dVar1;
  if (((iVar3 <= iVar4 + iVar5) && (iVar3 = iVar4, 0 < (int)dVar1)) && (0 < (int)dVar2)) {
    return iVar4 + 1;
  }
  return iVar3;
}



void __thiscall GameActionEquip::meth_0x44a730(GameActionEquip *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  GameActionEquip *pGStack_18;
  int iStack_14;
  GameActionEquip *pGStack_10;
  int iStack_c;
  
  piVar1 = (int *)this->mbr_0xc8;
  if (piVar1 != (int *)0x0) {
    iVar4 = piVar1[0x34a];
    iVar2 = piVar1[0x349];
    (**(code **)(*piVar1 + 0x14))(&local_28,&local_2c);
    uVar3 = meth_0x44a470(this,(int *)&pGStack_18);
    if ((char)uVar3 == '\0') {
      iStack_14 = iVar4 / 2;
      pGStack_18 = (GameActionEquip *)(iVar2 / 2);
      if ((*(int *)&(this->ActionEquip).Action.mbr_0x4 != 0) &&
         (pGStack_10 = pGStack_18, iStack_c = iStack_14, iVar4 = meth_0x54be10(pGStack_18),
         iVar4 != 0)) {
        uStack_24 = *(undefined4 *)(iVar4 + 4);
        uStack_1c = *(undefined4 *)(iVar4 + 0xc);
        AreaMapWindow::meth_0x41d250
                  ((AreaMapWindow *)this->mbr_0xc8,uStack_24,uStack_1c,&local_28,&local_2c);
      }
    }
  }
  return;
}



void __thiscall GameActionEquip::meth_0x44aac0(GameActionEquip *this)

{
  FUN_0044a840();
  return;
}



undefined4 __thiscall GameActionEquip::meth_0x44ab40(GameActionEquip *this)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0xa8;
  if (-1 < (int)dVar1) {
    if (this->mbr_0x170 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(this->mbr_0x174 - this->mbr_0x170) >> 2;
    }
    if ((int)dVar1 < iVar2) {
      return *(undefined4 *)(this->mbr_0x170 + dVar1 * 4);
    }
  }
  return 0;
}



void __thiscall GameActionEquip::meth_0x44ab80(GameActionEquip *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  dword dVar6;
  undefined4 *puVar7;
  
  if (this->mbr_0x17c != 0) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x17c);
    this->mbr_0x17c = 0;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x74) + 0x14);
  if (DAT_0070bd98 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_0070bd98 + 0xc;
  }
  iVar4 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4) + 0x60))();
  iVar5 = meth_0x44ab40(this);
  puVar7 = (undefined4 *)0x0;
  if (iVar5 != 0) {
    if ((iVar4 == 0) || (*(int *)(iVar4 + 4) != iVar5)) {
      uVar2 = *(undefined4 *)(iVar5 + 0x58);
      uVar3 = *(undefined4 *)(iVar5 + 0x5c);
      dVar6 = MapMaskManager::FindExploredMaskFormat();
      this->mbr_0x180 = dVar6;
      puVar7 = FUN_005978c0(uVar2,uVar3,dVar6);
      this->mbr_0x17c = (dword)puVar7;
    }
    else {
      puVar7 = *(undefined4 **)(iVar1 + 0x34);
    }
  }
  dVar6 = this->mbr_0xc4;
  if (dVar6 != 0) {
    *(undefined4 **)(dVar6 + 0xf80) = puVar7;
    *(undefined *)(dVar6 + 0xf0d) = 1;
  }
  dVar6 = this->mbr_0xc8;
  if (dVar6 != 0) {
    *(undefined4 **)(dVar6 + 0xf80) = puVar7;
    *(undefined *)(dVar6 + 0xf0d) = 1;
  }
  return;
}



undefined4 __thiscall GameActionEquip::meth_0x44ac50(GameActionEquip *this)

{
  MapMaskManager *this_00;
  dword dVar1;
  dword dVar2;
  int iVar3;
  cls_0x57bc90 *pcVar4;
  cls_0x57bc90 *pcVar5;
  
  this_00 = *(MapMaskManager **)(*(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x74) + 0x14);
  if (DAT_0070bd98 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0070bd98 + 0xc;
  }
  iVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x60))();
  pcVar4 = (cls_0x57bc90 *)meth_0x44ab40(this);
  pcVar5 = pcVar4;
  if (pcVar4 != (cls_0x57bc90 *)0x0) {
    if ((iVar3 == 0) || (*(cls_0x57bc90 **)(iVar3 + 4) != pcVar4)) {
      pcVar5 = (cls_0x57bc90 *)(**(code **)(*DAT_00707ce4 + 0xd8))(this->mbr_0x17c);
      if (pcVar5 != (cls_0x57bc90 *)0x0) {
        pcVar5 = (cls_0x57bc90 *)FUN_00597920((Gfx_Texture *)pcVar5,pcVar4);
        if ((char)pcVar5 != '\0') {
          dVar1 = this->mbr_0xc4;
          *(dword *)(dVar1 + 0xf80) = this->mbr_0x17c;
          *(undefined *)(dVar1 + 0xf0d) = 1;
          dVar1 = this->mbr_0xc8;
          *(dword *)(dVar1 + 0xf80) = this->mbr_0x17c;
          *(undefined *)(dVar1 + 0xf0d) = 1;
          return CONCAT31((int3)((uint)pcVar5 >> 8),1);
        }
      }
    }
    else {
      iVar3 = FUN_0044a4b0();
      pcVar5 = (cls_0x57bc90 *)MapMaskManager::UpdateExploredMask(this_00,iVar3);
      if ((char)pcVar5 != '\0') {
        dVar1 = this->mbr_0xc4;
        dVar2 = this_00->mbr_0x34;
        *(dword *)(dVar1 + 0xf80) = dVar2;
        *(undefined *)(dVar1 + 0xf0d) = 1;
        dVar1 = this->mbr_0xc8;
        *(dword *)(dVar1 + 0xf80) = dVar2;
        *(undefined *)(dVar1 + 0xf0d) = 1;
        return CONCAT31((int3)((uint)pcVar5 >> 8),1);
      }
    }
  }
  return (uint)pcVar5 & 0xffffff00;
}



void __thiscall GameActionEquip::meth_0x44ae30(GameActionEquip *this,int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  cls_0x41f2b0 *this_00;
  int iVar5;
  undefined4 *puVar6;
  dword dVar7;
  float unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  float fVar8;
  int local_20;
  int local_1c;
  int iStack_18;
  float afStack_14 [4];
  int iStack_4;
  
  dVar7 = this->mbr_0xe4;
  if ((int)dVar7 < 0) {
    return;
  }
  if (this->mbr_0xbc != 1) {
    return;
  }
  this_00 = (cls_0x41f2b0 *)meth_0x44ab40(this);
  if (this_00 == (cls_0x41f2b0 *)0x0) {
    return;
  }
  iVar5 = cls_0x41f2b0::meth_0x41f2b0(this_00,dVar7);
  if (iVar5 == 0) {
    return;
  }
  cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_1c,&local_20);
  cVar4 = (**(code **)(*(int *)this->mbr_0xc8 + 0x18))(param_1,param_2);
  if (cVar4 == '\0') {
    if ((*(char *)&this->mbr_0xa0 == '\0') ||
       (cVar4 = (**(code **)(*(int *)this->mbr_0xc4 + 0x18))(param_1,param_2), cVar4 == '\0')) {
      if (*(char *)(iVar5 + 0x5d) != '\0') {
        return;
      }
      *(undefined *)(iVar5 + 0x5d) = 1;
      goto LAB_0044afe4;
    }
    piVar2 = (int *)this->mbr_0xc4;
    iStack_18 = piVar2[0x34d];
    local_20 = piVar2[0x34c];
    (**(code **)(*piVar2 + 0x48))(&local_1c,&stack0x00000000);
    fVar1 = *(float *)(&DAT_0065bb5c + this->mbr_0x158 * 4);
    iStack_4 = param_1 - local_1c;
    dVar7 = this->mbr_0xc4;
    fVar8 = ((float)(param_2 - unaff_retaddr) * unaff_ESI + (float)iStack_18) * fVar1;
    fVar3 = (float)iStack_4 * (float)this_00 + (float)local_20;
  }
  else {
    piVar2 = (int *)this->mbr_0xc8;
    local_20 = piVar2[0x34d];
    iStack_18 = piVar2[0x34c];
    (**(code **)(*piVar2 + 0x48))(&local_1c,&stack0x00000000);
    fVar1 = *(float *)(&DAT_0065bb5c + this->mbr_0x158 * 4);
    iStack_4 = param_1 - local_1c;
    dVar7 = this->mbr_0xc8;
    fVar8 = ((float)(param_2 - unaff_retaddr) * unaff_ESI + (float)local_20) * fVar1;
    fVar3 = (float)iStack_4 * (float)this_00 + (float)iStack_18;
  }
  puVar6 = (undefined4 *)FUN_0044a4d0(afStack_14,dVar7,fVar3 * fVar1,fVar8);
  *(undefined4 *)(iVar5 + 0x50) = *puVar6;
  *(undefined4 *)(iVar5 + 0x54) = puVar6[1];
  *(undefined4 *)(iVar5 + 0x58) = puVar6[2];
  *(undefined *)(iVar5 + 0x5d) = 0;
LAB_0044afe4:
  *(uint *)(unaff_EDI + 0x78) = *(uint *)(unaff_EDI + 0x78) | 2;
  return;
}



void __thiscall GameActionEquip::meth_0x44b960(GameActionEquip *this)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  dword *_Str2;
  int iVar7;
  cls_0x50db20 *pcVar8;
  int *unaff_EBX;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  undefined *puVar9;
  undefined *puStack_c0;
  int local_a0;
  undefined local_94 [4];
  undefined local_90 [4];
  undefined local_8c [4];
  void *local_88;
  void *local_78;
  dword local_74;
  undefined local_70 [4];
  void *local_6c;
  dword dStack_68;
  uint uStack_64;
  undefined uStack_60;
  dword local_5c;
  void *local_58;
  undefined uStack_54;
  dword dStack_50;
  dword dStack_4c;
  VFX_Parameter__vftable_673a20 *pVStack_48;
  uint uStack_44;
  dword dStack_40;
  VFX_Parameter__vftable_673a20 *pVStack_3c;
  char *local_38;
  void *pvStack_34;
  dword dStack_2c;
  uint uStack_28;
  uint uStack_20;
  uint uStack_18;
  undefined4 uStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f58e;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_a0 = 0;
  ExceptionList = &pvStack_c;
  do {
    pcVar3 = FUN_0044a280(local_a0);
    local_38 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      local_74 = 0xf;
      local_78 = (void *)0x0;
      local_88 = (void *)((uint)local_88 & 0xffffff00);
      pcVar4 = pcVar3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_8c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1))
      ;
      local_4 = 0;
      piVar5 = (int *)CLoadMapInterface::meth_0x495740
                                ((CLoadMapInterface *)
                                 ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                                 (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4)
                                 ,(int)local_8c);
      local_4 = 0xffffffff;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        _free(local_88);
      }
      local_74 = 0xf;
      local_78 = (void *)0x0;
      local_88 = (void *)((uint)local_88 & 0xffffff00);
      if (piVar5 != (int *)0x0) {
        local_58 = (void *)0xf;
        local_5c = 0;
        local_6c = (void *)((uint)local_6c & 0xffffff00);
        pcVar4 = pcVar3;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_70,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
        iVar6 = FUN_0044a840();
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        puVar9 = local_94;
        puStack_c0 = local_90;
        local_58 = (void *)0xf;
        local_5c = 0;
        local_6c = (void *)((uint)local_6c & 0xffffff00);
        (**(code **)(*piVar5 + 0x174))();
        if (this->mbr_0x68 == 0) {
LAB_0044bbd2:
          (**(code **)(*piVar5 + 0x168))();
          (**(code **)(*piVar5 + 0x130))();
          (**(code **)(*piVar5 + 0x170))(this->mbr_0x50,unaff_EDI,puVar9);
        }
        else {
          if (this->mbr_0x6c < 0x10) {
            _Str2 = &this->mbr_0x58;
          }
          else {
            _Str2 = (dword *)this->mbr_0x58;
          }
          iVar7 = __stricmp((char *)pVStack_48,(char *)_Str2);
          if (iVar7 != 0) goto LAB_0044bbd2;
          dStack_4c = 0xf;
          dStack_50 = 0;
          uStack_60 = 0;
          uStack_14 = (void *)0x1;
          FUN_0056c280(*(int *)(this->mbr_0x74 + iVar6 * 4),(_String_base *)&uStack_64);
          pcVar8 = FUN_00425d70((cls_0x50db20 *)&dStack_40,(_String_base *)&DAT_006f34fc,
                                (int)&uStack_64);
          uStack_14._0_1_ = 2;
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)&uStack_64,(_String_base *)pcVar8,0,0xffffffff);
          uStack_14 = (void *)CONCAT31(uStack_14._1_3_,1);
          if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
            _free(pVStack_3c);
          }
          uStack_28 = 0xf;
          dStack_2c = 0;
          pVStack_3c = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_3c & 0xffffff00);
          (**(code **)(*piVar5 + 0x168))();
          (**(code **)(*piVar5 + 300))();
          (**(code **)(*piVar5 + 0x170))(0,unaff_EDI,puVar9);
          dStack_2c = 0xffffffff;
          if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_78);
          }
          uStack_64 = 0xf;
          dStack_68 = 0;
          local_78 = (void *)((uint)local_78 & 0xffffff00);
        }
        (**(code **)(*piVar5 + 0x14))(&pVStack_3c,&local_5c);
        (**(code **)(*piVar5 + 0x174))
                  (&puStack_c0,&stack0xffffff38,&stack0xffffff34,&stack0xffffff3c);
        iVar6 = *piVar5;
        iVar7 = (**(code **)(iVar6 + 0x164))(local_74);
        (**(code **)(iVar6 + 0x10))(puVar9 + iVar7);
      }
    }
    local_a0 = local_a0 + 1;
    if (0xd < local_a0) {
      local_58 = (void *)0xf;
      local_5c = 0;
      local_6c = (void *)((uint)local_6c & 0xffffff00);
      pcVar3 = "lblRest";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_70,"lblRest",(uint)(pcVar4 + -0x65bba4));
      local_4 = 3;
      piVar5 = (int *)CLoadMapInterface::meth_0x495740
                                ((CLoadMapInterface *)
                                 ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                                 (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4)
                                 ,(int)local_70);
      local_4 = 0xffffffff;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_58 = (void *)0xf;
      local_74 = 0xf;
      local_5c = 0;
      local_6c = (void *)((uint)local_6c & 0xffffff00);
      local_78 = (void *)0x0;
      local_88 = (void *)((uint)local_88 & 0xffffff00);
      pcVar3 = "lblUntil";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_8c,"lblUntil",(uint)(pcVar4 + -0x65bb98));
      local_4 = 4;
      CLoadMapInterface::meth_0x495740
                ((CLoadMapInterface *)
                 ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                 (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),(int)local_8c);
      local_4 = 0xffffffff;
      if (local_74 < 0x10) {
        local_74 = 0xf;
        local_78 = (void *)0x0;
        local_88 = (void *)((uint)local_88 & 0xffffff00);
        iVar6 = FUN_0044a840();
        if (iVar6 == -1) {
          (**(code **)(*piVar5 + 0x54))();
          dStack_40 = 0xf;
          uStack_44 = 0;
          uStack_54 = 0;
          pcVar3 = "";
          do {
            pcVar4 = pcVar3;
            pcVar3 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          puStack_c0 = (undefined *)0x44bdfa;
          ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_58,"",(uint)(pcVar4 + -0x64d7d8));
          puStack_8 = (undefined *)0x6;
          (**(code **)(*unaff_EBX + 300))();
          pvVar2 = ExceptionList;
          pvStack_34 = local_58;
          ExceptionList = uStack_14;
          uStack_20 = uStack_44;
        }
        else {
          (**(code **)(*piVar5 + 0x54))();
          FUN_0044b000(iVar6);
          puStack_8 = (undefined *)0x5;
          (**(code **)(*unaff_EBX + 300))();
          pvVar2 = ExceptionList;
          ExceptionList = uStack_14;
        }
        uStack_14 = ExceptionList;
        if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
          puStack_c0 = (undefined *)0x44be27;
          ExceptionList = pvVar2;
          _free(pvStack_34);
        }
        FUN_00616e15(uStack_18 ^ (uint)puStack_8);
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_88);
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x0044c1ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall GameActionEquip::meth_0x44be60(GameActionEquip *this)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  cls_0x50db20 *pcVar5;
  char *pcVar6;
  uint uVar7;
  cls_0x41d550 *unaff_EBP;
  dword dVar8;
  int iVar9;
  void *unaff_EDI;
  uint unaff_retaddr;
  cls_0x41d550 *pcStack_120;
  cls_0x41d550 *in_stack_fffffee4;
  cls_0x41d550 *pcVar10;
  cls_0x41d550 *pcVar11;
  cls_0x41d550 *pcVar12;
  cls_0x41d550 cStack_f4;
  VFX_Parameter__vftable_673a20 *local_d4;
  dword local_d0;
  dword local_cc;
  uint local_c8;
  dword local_c4;
  uint local_c0;
  VFX_Parameter__vftable_673a20 *local_b8;
  dword local_b4;
  dword local_b0;
  VFX_Parameter__vftable_673a20 *pVStack_ac;
  dword dStack_a8;
  dword dStack_a4;
  dword dStack_9c;
  uint auStack_98 [2];
  _String_base local_90 [4];
  undefined local_8c [4];
  void *local_88;
  VFX_Parameter__vftable_673a20 *pVStack_7c;
  cls_0x41d550 local_78;
  uint local_74;
  void *pvStack_6c;
  cls_0x41d550 cStack_60;
  dword dStack_5c;
  uint uStack_58;
  void *pvStack_50;
  dword dStack_44;
  dword dStack_40;
  uint uStack_3c;
  dword dStack_30;
  undefined uStack_2c;
  dword dStack_24;
  undefined uStack_20;
  dword dStack_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f5ec;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  this->mbr_0x98 = 0;
  this->mbr_0x9c = 0;
  local_c8 = *(uint *)this->mbr_0x90;
  local_d4 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_cc = 0;
  do {
    dVar8 = this->mbr_0x84 + local_cc;
    local_c4 = dVar8;
    pcVar2 = FUN_0044a350(0);
    local_74 = 0xf;
    local_78.mbr_0x0 = 0;
    local_88 = (void *)((uint)local_88 & 0xffffff00);
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    cStack_f4.mbr_0x0 = 0x44bf04;
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_8c,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
    local_4 = 0;
    piVar3 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_8c);
    local_4 = 0xffffffff;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      _free(local_88);
    }
    local_74 = 0xf;
    local_78.mbr_0x0 = 0;
    local_88 = (void *)((uint)local_88 & 0xffffff00);
    if (piVar3 != (int *)0x0) {
      cStack_f4.mbr_0x0 = (dword)&local_b8;
      (**(code **)(*piVar3 + 0x174))();
      if (dVar8 == 0) {
        (**(code **)(*piVar3 + 0x130))();
        (**(code **)(*piVar3 + 0xe8))();
        (**(code **)(*piVar3 + 0x54))();
        (**(code **)(*piVar3 + 0x170))();
      }
      else if ((int)this->mbr_0x94 < (int)dVar8) {
        (**(code **)(*piVar3 + 0x54))();
      }
      else {
        local_d4 = (VFX_Parameter__vftable_673a20 *)((int)&local_d4[-1].virt_meth_0x4ff950_0 + 3);
        dStack_a4 = 0xf;
        dStack_a8 = 0;
        local_b8 = (VFX_Parameter__vftable_673a20 *)((uint)local_b8 & 0xffffff00);
        dStack_14 = 1;
        FUN_004a1a30((cls_0x50db20 *)&stack0xffffff44,(byte *)"Area %d",(char)uRam0000000c);
        (**(code **)(*piVar3 + 300))();
        (**(code **)(*piVar3 + 0xe8))();
        (**(code **)(*piVar3 + 0x54))();
        if ((cls_0x41d550 *)this->mbr_0x78 == unaff_EBP) {
          this->mbr_0x98 = dRam00000018;
          cStack_f4.mbr_0x0 = 0x1c;
          this->mbr_0x9c = _DAT_00000024;
          pcVar5 = FUN_00425d70((cls_0x50db20 *)local_8c,(_String_base *)&DAT_006f34fc,
                                (int)&local_c8);
          uStack_20 = 2;
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)&local_c8,(_String_base *)pcVar5,0,0xffffffff);
          uStack_20 = 1;
          if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
            _free(local_88);
          }
          local_74 = 0xf;
          local_78.mbr_0x0 = 0;
          local_88 = (void *)((uint)local_88 & 0xffffff00);
          (**(code **)(*piVar3 + 0x168))();
          (**(code **)(*piVar3 + 300))();
        }
        else {
          (**(code **)(*piVar3 + 0x168))();
          (**(code **)(*piVar3 + 300))();
        }
        pcStack_120 = (cls_0x41d550 *)0x44c130;
        (**(code **)(*piVar3 + 0x170))();
        cls_0x41d550::meth_0x56a0a0(&cStack_f4);
        dStack_30 = 0xffffffff;
        if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
          _free(local_d4);
        }
        local_c0 = 0xf;
        local_c4 = 0;
        local_d4 = (VFX_Parameter__vftable_673a20 *)((uint)local_d4 & 0xffffff00);
      }
      in_stack_fffffee4 = &local_78;
      pcStack_120 = (cls_0x41d550 *)0x44c17f;
      (**(code **)(*piVar3 + 0x14))();
      pcStack_120 = &cStack_f4;
      (**(code **)(*piVar3 + 0x174))(&local_c4,&stack0xffffff14,&stack0xffffff10);
      iVar9 = *piVar3;
      iVar4 = (**(code **)(iVar9 + 0x164))(auStack_98[0]);
      (**(code **)(iVar9 + 0x10))((int)&local_d4->virt_meth_0x4ff950_0 + iVar4);
    }
    local_cc = local_cc + 1;
  } while ((int)local_cc < 0xe);
  local_b4 = 0;
  if (local_d4 != (VFX_Parameter__vftable_673a20 *)0x0) {
    local_b4 = *(dword *)local_d4[1].virt_meth_0x4ff950_0;
  }
  local_b0 = 0;
  local_cc = 0;
  do {
    iVar9 = this->mbr_0x84 + local_cc;
    pcVar2 = FUN_0044a350(1);
    local_74 = 0xf;
    local_78.mbr_0x0 = 0;
    local_88 = (void *)((uint)local_88 & 0xffffff00);
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    cStack_f4.mbr_0x0 = 0x44c244;
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_8c,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
    local_4 = 3;
    piVar3 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_8c);
    local_4 = 0xffffffff;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      _free(local_88);
    }
    local_74 = 0xf;
    local_78.mbr_0x0 = 0;
    local_88 = (void *)((uint)local_88 & 0xffffff00);
    if (piVar3 != (int *)0x0) {
      cStack_f4.mbr_0x0 = (dword)&local_d4;
      (**(code **)(*piVar3 + 0x174))();
      pcVar12 = &cStack_60;
      (**(code **)(*piVar3 + 0x14))();
      pcVar10 = (cls_0x41d550 *)0x400;
      pcVar11 = unaff_EBP;
      (**(code **)(*piVar3 + 0x10))();
      dVar8 = this->mbr_0x98;
      if (iVar9 == 0) {
        if (0 < (int)dVar8) {
          (**(code **)(*piVar3 + 0x130))();
          (**(code **)(*piVar3 + 0xe8))();
          in_stack_fffffee4 = pcVar11;
          (**(code **)(*piVar3 + 0x54))();
          pcStack_120 = pcVar12;
          (**(code **)(*piVar3 + 0x170))(this->mbr_0x50);
          (**(code **)(*piVar3 + 0x168))(this->mbr_0x80);
          goto LAB_0044c6fa;
        }
LAB_0044c4e2:
        if ((int)this->mbr_0x9c < 1) goto LAB_0044c6f1;
        uVar7 = ((int)dVar8 < 1) - 1 & 2;
        if (iVar9 == uVar7 + dVar8) {
          (**(code **)(*piVar3 + 0x130))();
          (**(code **)(*piVar3 + 0xe8))();
          in_stack_fffffee4 = pcVar11;
          (**(code **)(*piVar3 + 0x54))();
          pcStack_120 = pcVar12;
          (**(code **)(*piVar3 + 0x170))(this->mbr_0x50);
          (**(code **)(*piVar3 + 0x168))(this->mbr_0x80);
        }
        else {
          if ((iVar9 < (int)(uVar7 + dVar8 + 1)) ||
             ((int)(this->mbr_0x9c + uVar7 + 1 + dVar8) <= iVar9)) goto LAB_0044c6f1;
          local_78.mbr_0x0 = 0xf;
          pVStack_7c = (VFX_Parameter__vftable_673a20 *)0x0;
          local_8c[0] = 0;
          dStack_24 = 6;
          FUN_0056c280(*(int *)(local_d0 + 0xc),local_90);
          (**(code **)(*piVar3 + 0xe8))();
          (**(code **)(*piVar3 + 0x54))();
          if (this->mbr_0x7c == this->mbr_0x98 + ((iVar9 - uVar7) - dVar8) + -1) {
            pcStack_120 = (cls_0x41d550 *)0x44c5eb;
            pcVar5 = FUN_00425d70((cls_0x50db20 *)&stack0xffffffac,(_String_base *)&DAT_006f34fc,
                                  (int)auStack_98);
            uStack_2c = 7;
            pcStack_120 = (cls_0x41d550 *)0x44c606;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)auStack_98,(_String_base *)pcVar5,0,0xffffffff);
            uStack_2c = 6;
            if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_50);
            }
            uStack_3c = 0xf;
            dStack_40 = 0;
            pvStack_50 = (void *)((uint)pvStack_50 & 0xffffff00);
            (**(code **)(*piVar3 + 0x168))();
            (**(code **)(*piVar3 + 300))();
            dVar8 = 0;
            pcStack_120 = pcVar10;
            in_stack_fffffee4 = pcVar12;
          }
          else {
            (**(code **)(*piVar3 + 0x168))();
            (**(code **)(*piVar3 + 300))();
            dVar8 = this->mbr_0x50;
            pcStack_120 = pcVar10;
            in_stack_fffffee4 = pcVar12;
          }
          (**(code **)(*piVar3 + 0x170))(dVar8,pcVar11);
          cls_0x41d550::meth_0x41d550((cls_0x41d550 *)&stack0xffffff10);
          dStack_44 = 0xffffffff;
          if (0xf < auStack_98[0]) {
                    /* WARNING: Subroutine does not return */
            _free(pVStack_ac);
          }
          auStack_98[0] = 0xf;
          dStack_9c = 0;
          pVStack_ac = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_ac & 0xffffff00);
        }
      }
      else {
        if ((int)dVar8 < 1) goto LAB_0044c4e2;
        if ((0 < iVar9) && (iVar9 < (int)(dVar8 + 1))) {
          local_b4 = 0xf;
          local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
          local_c8 = local_c8 & 0xffffff00;
          dStack_24 = 4;
          FUN_0056c280((int)local_d4[3].virt_meth_0x4ff950_0,(_String_base *)&local_cc);
          (**(code **)(*piVar3 + 0xe8))();
          (**(code **)(*piVar3 + 0x54))();
          if (this->mbr_0x7c == iVar9 - 1U) {
            pcStack_120 = (cls_0x41d550 *)0x44c3c4;
            pcVar5 = FUN_00425d70((cls_0x50db20 *)&stack0xffffff90,(_String_base *)&DAT_006f34fc,
                                  (int)&local_d4);
            uStack_2c = 5;
            pcStack_120 = (cls_0x41d550 *)0x44c3dc;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&local_d4,(_String_base *)pcVar5,0,0xffffffff);
            uStack_2c = 4;
            if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_6c);
            }
            uStack_58 = 0xf;
            dStack_5c = 0;
            pvStack_6c = (void *)((uint)pvStack_6c & 0xffffff00);
            (**(code **)(*piVar3 + 0x168))();
            (**(code **)(*piVar3 + 300))();
            dVar8 = 0;
            pcStack_120 = pcVar10;
            in_stack_fffffee4 = pcVar12;
          }
          else {
            (**(code **)(*piVar3 + 0x168))();
            (**(code **)(*piVar3 + 300))();
            dVar8 = this->mbr_0x50;
            pcStack_120 = pcVar10;
            in_stack_fffffee4 = pcVar12;
          }
          (**(code **)(*piVar3 + 0x170))(dVar8,pcVar11);
          cls_0x41d550::meth_0x41d550(&cStack_f4);
          dStack_44 = 0xffffffff;
          if ((VFX_Parameter__vftable_673a20 *)0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
            _free(unaff_EDI);
          }
          local_d4 = (VFX_Parameter__vftable_673a20 *)0xf;
          unaff_EDI = (void *)((uint)unaff_EDI & 0xffffff00);
          goto LAB_0044c6fa;
        }
        if (0 < (int)this->mbr_0x9c) {
          if (iVar9 != dVar8 + 1) goto LAB_0044c4e2;
          (**(code **)(*piVar3 + 0x54))();
          goto LAB_0044c6fa;
        }
LAB_0044c6f1:
        (**(code **)(*piVar3 + 0x54))();
      }
LAB_0044c6fa:
      (**(code **)(*piVar3 + 0x14))(local_90,&stack0xfffffef8);
      (**(code **)(*piVar3 + 0x174))
                (&stack0xfffffef4,&stack0xfffffee4,&pcStack_120,&stack0xfffffee8);
      iVar9 = *piVar3;
      iVar4 = (**(code **)(iVar9 + 0x164))(pcStack_120);
      (**(code **)(iVar9 + 0x10))((int)&in_stack_fffffee4->mbr_0x0 + iVar4);
    }
    local_cc = local_cc + 1;
    if (0xd < (int)local_cc) {
      ExceptionList = local_c;
      FUN_00616e15(local_10 ^ unaff_retaddr);
      return;
    }
  } while( true );
}



void __thiscall GameActionEquip::meth_0x44c790(GameActionEquip *this)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  cls_0x50db20 *pcVar5;
  char *pcVar6;
  void *unaff_EBX;
  int iVar7;
  dword unaff_ESI;
  uint unaff_retaddr;
  dword dVar8;
  dword in_stack_ffffff2c;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  void **ppvVar12;
  void **ppvStack_b8;
  undefined *puStack_b4;
  dword *_Memory;
  dword local_98;
  undefined local_94 [4];
  uint local_90;
  dword local_8c;
  uint local_88;
  undefined local_84 [4];
  uint local_80;
  void *local_7c;
  VFX_Parameter__vftable_673a20 *apVStack_78 [2];
  dword dStack_70;
  dword dStack_6c;
  void *local_58;
  undefined local_54 [4];
  void *local_50;
  void *pvStack_48;
  uint uStack_44;
  VFX_Parameter__vftable_673a20 *local_40;
  dword local_3c;
  VFX_Parameter__vftable_673a20 *pVStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  dword dStack_24;
  undefined uStack_20;
  dword dStack_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f630;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  this->mbr_0x1b8 = 5;
  this->mbr_0x1b4 = 0;
  if (-1 < (int)this->mbr_0x1a4) {
    this->mbr_0x1b4 = this->mbr_0x1a4 + 0xd;
  }
  local_98 = 0;
  do {
    iVar7 = this->mbr_0x1b0 + local_98;
    pcVar2 = FUN_0044a390(0);
    local_3c = 0xf;
    local_40 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_50 = (void *)((uint)local_50 & 0xffffff00);
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    puStack_b4 = (undefined *)0x44c834;
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_54,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
    local_4 = 0;
    piVar3 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_54);
    local_4 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
    local_3c = 0xf;
    local_40 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_50 = (void *)((uint)local_50 & 0xffffff00);
    if (piVar3 != (int *)0x0) {
      puStack_b4 = local_84;
      ppvStack_b8 = &local_58;
      (**(code **)(*piVar3 + 0x174))();
      if (iVar7 == 0) {
        (**(code **)(*piVar3 + 0x130))();
        (**(code **)(*piVar3 + 0xe8))();
        (**(code **)(*piVar3 + 0x54))();
        in_stack_ffffff2c = this->mbr_0x50;
        (**(code **)(*piVar3 + 0x170))();
      }
      else if ((int)this->mbr_0x1b8 < iVar7) {
        (**(code **)(*piVar3 + 0x54))();
      }
      else {
        local_8c = iVar7 - 1;
        dStack_6c = 0xf;
        dStack_70 = 0;
        local_80 = local_80 & 0xffffff00;
        dStack_14 = 1;
        FUN_004a1a30((cls_0x50db20 *)local_84,(byte *)"Holodisc %d",(char)iVar7);
        (**(code **)(*piVar3 + 300))();
        (**(code **)(*piVar3 + 0xe8))();
        (**(code **)(*piVar3 + 0x54))();
        if (this->mbr_0x1a4 == local_98) {
          pcVar5 = FUN_00425d70((cls_0x50db20 *)&stack0xffffffb4,(_String_base *)&DAT_006f34fc,
                                (int)&local_90);
          uStack_20 = 2;
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)&local_90,(_String_base *)pcVar5,0,0xffffffff);
          uStack_20 = 1;
          if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_48);
          }
          uStack_34 = 0xf;
          pVStack_38 = (VFX_Parameter__vftable_673a20 *)0x0;
          pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
          (**(code **)(*piVar3 + 0x168))();
          (**(code **)(*piVar3 + 300))();
        }
        else {
          (**(code **)(*piVar3 + 0x168))();
          (**(code **)(*piVar3 + 300))();
        }
        in_stack_ffffff2c = unaff_ESI;
        (**(code **)(*piVar3 + 0x170))();
        uStack_30 = (VFX_Parameter__vftable_673a20 *)0xffffffff;
        if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(unaff_EBX);
        }
        local_88 = 0xf;
        local_8c = 0;
        unaff_EBX = (void *)((uint)unaff_EBX & 0xffffff00);
      }
      (**(code **)(*piVar3 + 0x14))();
      (**(code **)(*piVar3 + 0x174))(&local_8c,&ppvStack_b8,&puStack_b4,&stack0xffffff44);
      iVar7 = *piVar3;
      iVar4 = (**(code **)(iVar7 + 0x164))(apVStack_78[0]);
      (**(code **)(iVar7 + 0x10))(iVar4 + (int)unaff_EBX);
    }
    local_98 = local_98 + 1;
  } while ((int)local_98 < 0xe);
  local_98 = 0;
  do {
    iVar7 = this->mbr_0x1b0 + local_98;
    pcVar2 = FUN_0044a390(1);
    local_3c = 0xf;
    local_40 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_50 = (void *)((uint)local_50 & 0xffffff00);
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    puStack_b4 = (undefined *)0x44cb14;
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_54,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
    local_4 = 3;
    piVar3 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_54);
    local_4 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
    local_3c = 0xf;
    local_40 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_50 = (void *)((uint)local_50 & 0xffffff00);
    if (piVar3 != (int *)0x0) {
      _Memory = &local_8c;
      puStack_b4 = local_94;
      ppvStack_b8 = &local_7c;
      (**(code **)(*piVar3 + 0x174))();
      ppvVar12 = &pvStack_48;
      (**(code **)(*piVar3 + 0x14))();
      uVar10 = 0x400;
      uVar11 = local_90;
      (**(code **)(*piVar3 + 0x10))();
      dVar8 = this->mbr_0x1b4;
      if ((int)dVar8 < 1) goto LAB_0044ce03;
      if (iVar7 == 0) {
        (**(code **)(*piVar3 + 0x130))();
        uVar9 = 1;
        (**(code **)(*piVar3 + 0xe8))();
        in_stack_ffffff2c = 0;
        (**(code **)(*piVar3 + 0x54))();
        (**(code **)(*piVar3 + 0x170))(this->mbr_0x50,ppvVar12);
        (**(code **)(*piVar3 + 0x168))(this->mbr_0xac);
      }
      else if ((iVar7 < 1) || ((int)(dVar8 + 1) <= iVar7)) {
        if ((int)this->mbr_0x1a8 < 0) {
LAB_0044ce03:
          uVar9 = 0x44ce0c;
          (**(code **)(*piVar3 + 0x54))();
        }
        else if (iVar7 == dVar8 + 1) {
          uVar9 = 0x44cda4;
          (**(code **)(*piVar3 + 0x54))();
        }
        else {
          if (((int)this->mbr_0x1a8 < 0) || (iVar7 != dVar8 + 2)) goto LAB_0044ce03;
          (**(code **)(*piVar3 + 0x130))();
          uVar9 = 0;
          (**(code **)(*piVar3 + 0xe8))();
          in_stack_ffffff2c = 0;
          (**(code **)(*piVar3 + 0x54))();
          (**(code **)(*piVar3 + 0x170))(this->mbr_0x50,ppvVar12);
          (**(code **)(*piVar3 + 0x168))(this->mbr_0x1ac);
        }
      }
      else {
        local_7c = (void *)0xf;
        local_80 = 0;
        local_90 = local_90 & 0xffffff00;
        dStack_24 = 4;
        FUN_004a1a30((cls_0x50db20 *)local_94,(byte *)"Video #%d",(char)iVar7);
        (**(code **)(*piVar3 + 300))();
        uVar9 = 0;
        (**(code **)(*piVar3 + 0xe8))();
        in_stack_ffffff2c = 0;
        (**(code **)(*piVar3 + 0x54))();
        if (this->mbr_0x1a8 == iVar7 - 1U) {
          pcVar5 = FUN_00425d70((cls_0x50db20 *)&stack0xffffffa4,(_String_base *)&DAT_006f34fc,
                                (int)&stack0xffffff60);
          uStack_30._0_1_ = 5;
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)&stack0xffffff60,(_String_base *)pcVar5,0,0xffffffff);
          uStack_30 = (VFX_Parameter__vftable_673a20 *)CONCAT31(uStack_30._1_3_,4);
          if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_58);
          }
          uStack_44 = 0xf;
          pvStack_48 = (void *)0x0;
          local_58 = (void *)((uint)local_58 & 0xffffff00);
          (**(code **)(*piVar3 + 0x168))();
          (**(code **)(*piVar3 + 300))();
          dVar8 = 0;
        }
        else {
          (**(code **)(*piVar3 + 0x168))();
          (**(code **)(*piVar3 + 300))();
          dVar8 = this->mbr_0x50;
        }
        (**(code **)(*piVar3 + 0x170))(dVar8,uVar10,ppvVar12,uVar11);
        uStack_44 = 0xffffffff;
        if ((void *)0xf < unaff_EBX) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        unaff_EBX = (void *)0xf;
      }
      (**(code **)(*piVar3 + 0x14))(apVStack_78,&ppvStack_b8);
      (**(code **)(*piVar3 + 0x174))
                (&stack0xffffff3c,&stack0xffffff24,&stack0xffffff2c,&stack0xffffff28);
      iVar7 = *piVar3;
      iVar4 = (**(code **)(iVar7 + 0x164))(uVar9);
      (**(code **)(iVar7 + 0x10))(iVar4 + in_stack_ffffff2c);
    }
    local_98 = local_98 + 1;
    if (0xd < (int)local_98) {
      ExceptionList = local_c;
      FUN_00616e15(local_10 ^ unaff_retaddr);
      return;
    }
  } while( true );
}



void __thiscall GameActionEquip::meth_0x44cea0(GameActionEquip *this)

{
  dword dVar1;
  char *pcVar2;
  char cVar3;
  cls_0x4a6ce0 *this_00;
  cls_0x4a6ce0 *this_01;
  cls_0x4a6ce0 *this_02;
  cls_0x4a6ce0 *this_03;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  bool bVar7;
  cls_0x4a6ce0 *local_64;
  cls_0x4a6ce0 *local_60;
  undefined auStack_5c [4];
  cls_0x4a6ce0 *local_58;
  undefined auStack_54 [4];
  undefined auStack_50 [12];
  undefined auStack_44 [4];
  void *pvStack_40;
  dword dStack_30;
  dword dStack_2c;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f678;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "btnLeft";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ExceptionList = &pVStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"btnLeft",(uint)(pcVar5 + -0x65bc0c));
  local_4 = 0;
  local_64 = (cls_0x4a6ce0 *)
             CLoadMapInterface::meth_0x495740
                       ((CLoadMapInterface *)
                        ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                        (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                        (int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "btnRight";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"btnRight",(uint)(pcVar5 + -0x65bc00));
  local_4 = 1;
  local_60 = (cls_0x4a6ce0 *)
             CLoadMapInterface::meth_0x495740
                       ((CLoadMapInterface *)
                        ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                        (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                        (int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "btnUp1";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"btnUp1",(uint)(pcVar5 + -0x65bbf8));
  local_4 = 2;
  this_00 = (cls_0x4a6ce0 *)
            CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                       (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                       (int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  bVar7 = false;
  pcVar2 = "btnDown1";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"btnDown1",(uint)(pcVar5 + -0x65bbec));
  local_4 = 3;
  this_01 = (cls_0x4a6ce0 *)
            CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                       (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                       (int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "btnUp2";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"btnUp2",(uint)(pcVar5 + -0x65bbe4));
  local_4 = 4;
  this_02 = (cls_0x4a6ce0 *)
            CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                       (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                       (int)local_28);
  local_4 = 0xffffffff;
  local_58 = this_02;
  if (local_10 < 0x10) {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "btnDown2";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"btnDown2",(uint)(pcVar5 + -0x65bbd8));
    local_4 = 5;
    this_03 = (cls_0x4a6ce0 *)
              CLoadMapInterface::meth_0x495740
                        ((CLoadMapInterface *)
                         ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                         (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                         (int)local_28);
    local_4 = 0xffffffff;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    dVar1 = this->mbr_0x4c;
    if (dVar1 == 2) {
      cls_0x4a6ce0::meth_0x4a6ce0(local_64,'\0');
      cls_0x4a6ce0::meth_0x4a6ce0(local_60,'\0');
      iVar4 = meth_0x44a6c0(this);
      cls_0x4a6ce0::meth_0x4a6ce0(this_00,0 < (int)this->mbr_0x84);
      if ((iVar4 < 0xf) || (iVar4 + -0xe <= (int)this->mbr_0x84)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      cls_0x4a6ce0::meth_0x4a6ce0(this_01,cVar3);
      dStack_2c = 0xf;
      dStack_30 = 0;
      pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
      pcVar2 = "lblTasks2";
      do {
        pcVar5 = pcVar2;
        pcVar2 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)auStack_44,"lblTasks2",(uint)(pcVar5 + -0x65bbcc));
      local_4 = 6;
      piVar6 = (int *)CLoadMapInterface::meth_0x495740
                                ((CLoadMapInterface *)
                                 ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                                 (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4)
                                 ,(int)auStack_44);
      local_4 = 0xffffffff;
      if (0xf < dStack_2c) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_40);
      }
      dStack_2c = 0xf;
      dStack_30 = 0;
      pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
      (**(code **)(*piVar6 + 0x14))(auStack_5c,&local_64);
      (**(code **)(*piVar6 + 0x174))(&local_58,auStack_5c,auStack_50,auStack_54);
      iVar4 = (**(code **)(*piVar6 + 0x160))();
      local_60 = local_64;
      if ((int)local_64 < iVar4) {
        cls_0x4a6ce0::meth_0x4a6ce0(local_58,0 < (int)this->mbr_0x88);
        bVar7 = (int)this->mbr_0x88 < (iVar4 - (int)local_60) + -1;
        this_01 = this_03;
      }
      else {
        cls_0x4a6ce0::meth_0x4a6ce0(local_58,'\0');
        bVar7 = false;
        this_01 = this_03;
      }
    }
    else if (dVar1 == 3) {
      cls_0x4a6ce0::meth_0x4a6ce0(local_64,(int)this->mbr_0xd4 < (int)this->mbr_0xcc);
      cls_0x4a6ce0::meth_0x4a6ce0(local_60,(int)this->mbr_0xcc < (int)this->mbr_0xd8);
      cls_0x4a6ce0::meth_0x4a6ce0(this_02,(int)this->mbr_0xdc < (int)this->mbr_0xd0);
      cls_0x4a6ce0::meth_0x4a6ce0(this_03,(int)this->mbr_0xd0 < (int)this->mbr_0xe0);
      if (*(char *)&this->mbr_0xa0 == '\0') {
        iVar4 = meth_0x44a420(this);
        cls_0x4a6ce0::meth_0x4a6ce0(this_00,0 < (int)this->mbr_0xb0);
        if ((0xe < iVar4) && ((int)this->mbr_0xb0 < iVar4 + -0xe)) {
          bVar7 = true;
        }
      }
      else {
        cls_0x4a6ce0::meth_0x4a6ce0(this_00,(int)this->mbr_0xdc < (int)this->mbr_0xd0);
        bVar7 = (int)this->mbr_0xd0 < (int)this->mbr_0xe0;
      }
    }
    else if (dVar1 == 4) {
      cls_0x4a6ce0::meth_0x4a6ce0(local_64,'\0');
      cls_0x4a6ce0::meth_0x4a6ce0(local_60,'\0');
      cls_0x4a6ce0::meth_0x4a6ce0(this_02,'\0');
      cls_0x4a6ce0::meth_0x4a6ce0(this_03,'\0');
      iVar4 = meth_0x44a440(this);
      cls_0x4a6ce0::meth_0x4a6ce0(this_00,0 < (int)this->mbr_0x1b0);
      if ((0xe < iVar4) && ((int)this->mbr_0x1b0 < iVar4 + -0xe)) {
        bVar7 = true;
      }
    }
    else {
      cls_0x4a6ce0::meth_0x4a6ce0(local_64,'\0');
      cls_0x4a6ce0::meth_0x4a6ce0(local_60,'\0');
      cls_0x4a6ce0::meth_0x4a6ce0(this_00,'\0');
      cls_0x4a6ce0::meth_0x4a6ce0(this_01,'\0');
      cls_0x4a6ce0::meth_0x4a6ce0(this_02,'\0');
      bVar7 = false;
      this_01 = this_03;
    }
    cls_0x4a6ce0::meth_0x4a6ce0(this_01,bVar7);
    ExceptionList = pVStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_24);
}



void __thiscall GameActionEquip::meth_0x44d460(GameActionEquip *this,int param_1)

{
  int iVar1;
  uint uVar2;
  dword dVar3;
  dword dVar4;
  dword dVar5;
  dword dVar6;
  GameActionEquip *this_00;
  ulonglong uVar7;
  int unaff_retaddr;
  undefined4 local_38;
  int local_34;
  undefined auStack_30 [4];
  GameActionEquip *local_2c;
  int local_28 [3];
  undefined4 local_1c;
  undefined4 local_14;
  GameActionEquip *local_10;
  int local_c;
  GameActionEquip *local_8;
  int local_4;
  
  this->mbr_0xd8 = 0x80000000;
  this->mbr_0xe0 = 0x80000000;
  this->mbr_0xd4 = 0x7fffffff;
  this->mbr_0xdc = 0x7fffffff;
  if (this->mbr_0xc8 == 0) {
    return;
  }
  iVar1 = meth_0x44ab40(this);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = meth_0x44a470(this_00,(int *)&local_10);
  if ((char)uVar2 == '\0') {
    local_c = *(int *)(this->mbr_0xc8 + 0xd28) / 2;
    local_10 = (GameActionEquip *)(*(int *)(this->mbr_0xc8 + 0xd24) / 2);
    local_8 = local_10;
    local_4 = local_c;
    if ((*(int *)&(this->ActionEquip).Action.mbr_0x4 != 0) &&
       (iVar1 = meth_0x54be10(local_10), iVar1 != 0)) {
      local_1c = *(undefined4 *)(iVar1 + 4);
      local_14 = *(undefined4 *)(iVar1 + 0xc);
      AreaMapWindow::meth_0x41d250
                ((AreaMapWindow *)this->mbr_0xc8,local_1c,local_14,&local_2c,local_28);
      local_10 = local_2c;
      local_c = local_28[0];
      local_8 = local_2c;
      local_4 = local_28[0];
    }
  }
  (**(code **)(*(int *)this->mbr_0xc8 + 0x14))(&local_34,&local_38);
  cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_2c,&local_38);
  FUN_00616e24();
  uVar7 = FUN_00616e24();
  local_34 = (int)uVar7;
  if (*(char *)&this->mbr_0xa0 != '\0') {
    (**(code **)(*(int *)this->mbr_0xc4 + 0x14))(local_28,auStack_30);
    FUN_00616e24();
  }
  uVar7 = FUN_00616e24();
  dVar3 = (dword)uVar7;
  this->mbr_0xd4 = dVar3;
  uVar7 = FUN_00616e24();
  dVar4 = (dword)uVar7;
  this->mbr_0xd8 = dVar4;
  uVar7 = FUN_00616e24();
  dVar5 = (dword)uVar7;
  this->mbr_0xdc = dVar5;
  uVar7 = FUN_00616e24();
  dVar6 = (dword)uVar7;
  this->mbr_0xe0 = dVar6;
  if ((char)local_4 == '\0') goto LAB_0044d6bb;
  if ((int)this->mbr_0xcc < (int)dVar3) {
    if (unaff_retaddr == 0) {
      if (param_1 == 0) {
LAB_0044d667:
        this->mbr_0xcc = dVar3;
      }
    }
    else if (unaff_retaddr < 0) goto LAB_0044d667;
  }
  if ((int)dVar4 < (int)this->mbr_0xcc) {
    if (unaff_retaddr == 0) {
      if (param_1 == 0) {
LAB_0044d681:
        this->mbr_0xcc = dVar4;
      }
    }
    else if (0 < unaff_retaddr) goto LAB_0044d681;
  }
  if (((int)this->mbr_0xd0 < (int)dVar5) &&
     (((unaff_retaddr == 0 && (param_1 == 0)) || (param_1 < 0)))) {
    this->mbr_0xd0 = dVar5;
  }
  if (((int)dVar6 < (int)this->mbr_0xd0) &&
     (((unaff_retaddr == 0 && (param_1 == 0)) || (0 < param_1)))) {
    this->mbr_0xd0 = dVar6;
  }
LAB_0044d6bb:
  AreaMapWindow::meth_0x41d220((AreaMapWindow *)this->mbr_0xc8,this->mbr_0xcc,this->mbr_0xd0);
  if (*(char *)&this->mbr_0xa0 != '\0') {
    AreaMapWindow::meth_0x41d220
              ((AreaMapWindow *)this->mbr_0xc4,this->mbr_0xcc,this->mbr_0xd0 + local_34);
  }
  meth_0x44cea0(this);
  return;
}



void __thiscall GameActionEquip::meth_0x44d710(GameActionEquip *this)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_38;
  undefined local_34 [4];
  undefined auStack_30 [4];
  GameActionEquip *local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_1c;
  int iStack_18;
  int local_14;
  GameActionEquip *local_10;
  int local_c;
  GameActionEquip *local_8;
  int local_4;
  
  dVar1 = this->mbr_0xc8;
  if ((dVar1 != 0) && (iVar3 = meth_0x44ab40(this), iVar3 != 0)) {
    iVar3 = *(int *)(dVar1 + 0xd24);
    iVar2 = *(int *)(dVar1 + 0xd28);
    if ((0 < iVar3) && (0 < iVar2)) {
      local_24 = *(undefined4 *)(&DAT_0065bb5c + this->mbr_0x158 * 4);
      uVar4 = meth_0x44a470(this,(int *)&local_10);
      if ((char)uVar4 == '\0') {
        local_c = iVar2 / 2;
        local_10 = (GameActionEquip *)(iVar3 / 2);
        local_8 = local_10;
        local_4 = local_c;
        if ((*(int *)&(this->ActionEquip).Action.mbr_0x4 != 0) &&
           (iVar3 = meth_0x54be10(local_10), iVar3 != 0)) {
          local_1c = *(undefined4 *)(iVar3 + 4);
          local_14 = *(int *)(iVar3 + 0xc);
          AreaMapWindow::meth_0x41d250
                    ((AreaMapWindow *)this->mbr_0xc8,local_1c,local_14,&local_2c,&local_28);
          local_10 = local_2c;
          local_c = local_28;
          local_8 = local_2c;
          local_4 = local_28;
        }
      }
      uVar5 = FUN_00616e24();
      local_10 = (GameActionEquip *)uVar5;
      uVar5 = FUN_00616e24();
      local_c = (int)uVar5;
      uVar5 = FUN_00616e24();
      local_8 = (GameActionEquip *)uVar5;
      uVar5 = FUN_00616e24();
      local_4 = (int)uVar5;
      (**(code **)(*(int *)this->mbr_0xc8 + 0x14))(local_34,&local_38);
      cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_28,&local_38);
      uVar5 = FUN_00616e24();
      uVar6 = FUN_00616e24();
      iVar3 = (int)uVar6;
      if (*(char *)&this->mbr_0xa0 != '\0') {
        (**(code **)(*(int *)this->mbr_0xc4 + 0x14))(auStack_30,&local_2c);
        uVar6 = FUN_00616e24();
        iVar3 = iVar3 + (int)uVar6;
      }
      this->mbr_0xcc = ((int)local_10 + (-iStack_18 - (int)uVar5)) / 2 + iStack_18;
      this->mbr_0xd0 = ((local_c - iVar3) - local_14) / 2 + local_14;
      meth_0x44d460(this,1);
    }
  }
  return;
}



void __thiscall GameActionEquip::meth_0x44d900(GameActionEquip *this,_String_base *param_1)

{
  cls_0x41f2b0 *this_00;
  _String_base *p_Var1;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (cls_0x41f2b0 *)meth_0x44ab40(this);
  if (this_00 != (cls_0x41f2b0 *)0x0) {
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      p_Var1 = param_1 + 4;
    }
    else {
      p_Var1 = *(_String_base **)(param_1 + 4);
    }
    uVar2 = FUN_004a1170((char *)p_Var1," \n\t\r");
    if ((((char)uVar2 == '\0') && (-1 < (int)this->mbr_0xe4)) &&
       (iVar3 = cls_0x41f2b0::meth_0x41f2b0(this_00,this->mbr_0xe4), iVar3 != 0)) {
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(iVar3 + 0x34),param_1,0,0xffffffff);
    }
  }
  return;
}



void __thiscall GameActionEquip::meth_0x44dec0(GameActionEquip *this,char param_1,char param_2)

{
  dword dVar1;
  dword dVar2;
  char *pcVar3;
  dword *pdVar4;
  char *pcVar5;
  void **ppvVar6;
  dword dVar7;
  void *unaff_EBX;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int local_5c;
  int local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  undefined local_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  VFX_Parameter__vftable_673a20 *local_28;
  void *local_24;
  dword dStack_20;
  dword dStack_1c;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f9f0;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar3 = "picLilPip1";
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ExceptionList = &pVStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"picLilPip1",(uint)(pcVar5 + -0x65bc54));
  local_4 = 0;
  pdVar4 = (dword *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_44);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picLilPip2";
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"picLilPip2",(uint)(pcVar5 + -0x65bc48));
  local_4 = 1;
  ppvVar6 = (void **)CLoadMapInterface::meth_0x495740
                               ((CLoadMapInterface *)
                                ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                                (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                                (int)&local_28);
  local_4 = 0xffffffff;
  if (local_10 < 0x10) {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    if (param_1 == '\0') {
      (**(code **)(*pdVar4 + 0x54))(1);
      uVar11 = 1;
    }
    else {
      cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_54,&local_50);
      local_58 = *(int *)&(this->ActionEquip).field_0x8;
      fVar13 = (float)local_58;
      uVar8 = FUN_00616e24();
      dVar7 = (dword)uVar8;
      local_5c = *(int *)&(this->ActionEquip).field_0xc;
      uVar8 = FUN_00616e24();
      if (param_2 == '\0') {
        dVar1 = this->mbr_0x28;
        dVar2 = this->mbr_0x2c;
        local_48 = 0;
        local_4c = 0;
        if ((int)dVar1 < (int)dVar7) {
          local_48 = (int)(dVar7 - dVar1) / 2;
          dVar7 = dVar1;
        }
        if ((int)dVar2 < (int)uVar8) {
          local_4c = (int)((int)uVar8 - dVar2) / 2;
        }
        if ((float)dVar1 * local_54 < (float)local_58) {
          uVar8 = FUN_00616e24();
          local_58 = (int)uVar8;
        }
        if ((float)dVar2 * local_50 < (float)local_5c) {
          uVar8 = FUN_00616e24();
          local_5c = (int)uVar8;
        }
        iVar14 = 1;
        fVar13 = (float)local_4c;
        fVar12 = (float)local_48;
        (**(code **)((int)*ppvVar6 + 0x130))
                  (&this->mbr_0x30,0,fVar12,fVar13,(float)local_58,(float)local_5c,1);
        (**(code **)((int)*ppvVar6 + 0x10))(dVar7,iVar14);
        unaff_EBX = *ppvVar6;
        (**(code **)((int)unaff_EBX + 0x44))
                  ((int)(dStack_1c - dVar7) / 2 + (int)fVar13,
                   (int)(dStack_20 - iVar14) / 2 + (int)fVar12);
        (**(code **)(*pdVar4 + 0x54))(1);
        uVar11 = 0;
      }
      else {
        local_4c = local_5c / 2;
        local_48 = local_5c - local_4c;
        iVar14 = 1;
        fVar12 = (float)local_4c;
        uVar11 = 0;
        (**(code **)(*pdVar4 + 0x130))(&this->mbr_0x30,0,0,fVar12,fVar13,(float)local_48,1);
        (**(code **)(*pdVar4 + 0x10))(dVar7,iVar14 - iVar14 / 2);
        dStack_20 = *pdVar4;
        iVar14 = (int)(dStack_1c - dVar7) / 2 + (int)fVar12;
        (**(code **)(dStack_20 + 0x44))(iVar14,uVar11);
        local_24 = (void *)this->mbr_0x28;
        local_28 = (VFX_Parameter__vftable_673a20 *)this->mbr_0x2c;
        iVar10 = 0;
        iVar9 = 0;
        (**(code **)((int)*ppvVar6 + 0x130))
                  (fVar13,0,0,0,(float)*(int *)&(this->ActionEquip).field_0x8,
                   (float)(*(int *)&(this->ActionEquip).field_0xc / 2),1);
        (**(code **)((int)*ppvVar6 + 0x10))(dVar7,iVar14);
        (**(code **)((int)*ppvVar6 + 0x44))
                  ((int)(local_48 - dVar7) / 2 + iVar10,(local_4c - iVar14) + iVar9);
        (**(code **)(*pdVar4 + 0x54))(0);
        uVar11 = 0;
      }
    }
    (**(code **)((int)*ppvVar6 + 0x54))(uVar11);
    ExceptionList = unaff_EBX;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_24);
}



void __thiscall GameActionEquip::meth_0x44e7d0(GameActionEquip *this)

{
  char cVar1;
  char *pcVar2;
  undefined uVar3;
  cls_0x616328 *pcVar4;
  undefined4 *puVar5;
  undefined4 ******ppppppuVar6;
  int *piVar7;
  undefined4 ******ppppppuVar8;
  char *pcVar9;
  void *unaff_ESI;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  dword dVar10;
  undefined *puVar11;
  VFX_Parameter__vftable_673a20 **ppVVar12;
  undefined auStack_90 [8];
  void *pvStack_88;
  void *pvStack_84;
  _String_base local_80 [4];
  undefined4 ******local_7c [2];
  dword dStack_74;
  uint uStack_70;
  VFX_Parameter__vftable_673a20 *local_6c;
  uint local_68;
  void *pvStack_64;
  void *pvStack_60;
  dword dStack_54;
  void *pvStack_50;
  VFX_Parameter__vftable_673a20 *pVStack_4c;
  undefined4 ******local_44 [4];
  dword local_34;
  uint local_30;
  VFX_Parameter__vftable_673a20 *pVStack_2c;
  undefined uStack_28;
  uint uStack_18;
  dword dStack_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_0062f760;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &pvStack_c;
  if (*(int *)&(this->ActionEquip).Action.mbr_0x4 != 0) {
    ExceptionList = &pvStack_c;
    pcVar4 = (cls_0x616328 *)meth_0x54be10(this);
    if (pcVar4 != (cls_0x616328 *)0x0) {
      puVar5 = (undefined4 *)
               FUN_006165e0(pcVar4,0,&Entity::RTTI_Type_Descriptor,
                            &GameCreature::RTTI_Type_Descriptor,0);
      if (puVar5 != (undefined4 *)0x0) {
        uVar3 = (**(code **)*puVar5)();
        (**(code **)*puVar5)();
        goto LAB_0044e84b;
      }
    }
  }
  uVar3 = 0;
LAB_0044e84b:
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (undefined4 ******)((uint)local_44[0] & 0xffffff00);
  local_68 = 0xf;
  local_6c = (VFX_Parameter__vftable_673a20 *)0x0;
  local_7c[0] = (undefined4 ******)((uint)local_7c[0] & 0xffffff00);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0056c280(0x187,local_80);
  ppppppuVar6 = local_7c[0];
  if (local_68 < 0x10) {
    ppppppuVar6 = local_7c;
  }
  FUN_004a1a30((cls_0x50db20 *)&stack0xffffffb8,(byte *)ppppppuVar6,uVar3);
  pVStack_4c = (VFX_Parameter__vftable_673a20 *)0xf;
  pvStack_50 = (void *)0x0;
  pvStack_60 = (void *)((uint)pvStack_60 & 0xffffff00);
  pcVar2 = "lblHealth";
  do {
    pcVar9 = pcVar2;
    pcVar2 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pvStack_64,"lblHealth",(uint)(pcVar9 + -0x65bc60));
  local_4._0_1_ = 2;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&pvStack_64);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_60);
  }
  pVStack_4c = (VFX_Parameter__vftable_673a20 *)0xf;
  pvStack_50 = (void *)0x0;
  pvStack_60 = (void *)((uint)pvStack_60 & 0xffffff00);
  ppppppuVar6 = local_44[0];
  if (local_30 < 0x10) {
    ppppppuVar6 = local_44;
  }
  dStack_14 = 0xf;
  uStack_18 = 0;
  uStack_28 = 0;
  ppppppuVar8 = ppppppuVar6;
  do {
    cVar1 = *(char *)ppppppuVar8;
    ppppppuVar8 = (undefined4 ******)((int)ppppppuVar8 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&pVStack_2c,(char *)ppppppuVar6,
             (int)ppppppuVar8 - (int)((int)ppppppuVar6 + 1));
  ppVVar12 = &pVStack_2c;
  local_4 = CONCAT31(local_4._1_3_,3);
  (**(code **)(*piVar7 + 300))();
  uStack_8._0_1_ = 1;
  if (0xf < uStack_18) {
                    /* WARNING: Subroutine does not return */
    _free(pVStack_2c);
  }
  pvStack_50 = (void *)0xf;
  dStack_54 = 0;
  pvStack_64 = (void *)((uint)pvStack_64 & 0xffffff00);
  pcVar2 = "lblRest";
  do {
    pcVar9 = pcVar2;
    pcVar2 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_68,"lblRest",(uint)(pcVar9 + -0x65bba4));
  uStack_8._0_1_ = 4;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&local_68);
  uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,1);
  if (0xf < pvStack_50) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_64);
  }
  puVar11 = auStack_90;
  pvStack_50 = (void *)0xf;
  dStack_54 = 0;
  pvStack_64 = (void *)((uint)pvStack_64 & 0xffffff00);
  (**(code **)(*piVar7 + 0x174))();
  dVar10 = this->mbr_0x50;
  (**(code **)(*piVar7 + 0x170))(dVar10,unaff_ESI,unaff_EDI,ppVVar12);
  uStack_70 = 0xf;
  dStack_74 = 0;
  pvStack_84 = (void *)((uint)pvStack_84 & 0xffffff00);
  pcVar2 = "lblUntil";
  do {
    pcVar9 = pcVar2;
    pcVar2 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pvStack_88,"lblUntil",(uint)(pcVar9 + -0x65bb98));
  uStack_28 = 5;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&pvStack_88);
  uStack_28 = 1;
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_84);
  }
  uStack_70 = 0xf;
  dStack_74 = 0;
  pvStack_84 = (void *)((uint)pvStack_84 & 0xffffff00);
  (**(code **)(*piVar7 + 0x174))
            (&stack0xffffff58,&stack0xffffff54,&stack0xffffff50,&stack0xffffff4c);
  (**(code **)(*piVar7 + 0x170))(this->mbr_0x50,unaff_EDI,unaff_ESI,dVar10);
  meth_0x44b960(this);
  meth_0x44dec0(this,'\x01','\0');
  if ((undefined *)0xf < puVar11) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  if (0xf < dStack_74) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_88);
  }
  ExceptionList = pvStack_50;
  FUN_00616e15(dStack_54 ^ (uint)local_44[0]);
  return;
}



void __thiscall GameActionEquip::meth_0x44eb80(GameActionEquip *this)

{
  cls_0x41d550 cVar1;
  char *pcVar2;
  void **ppvVar3;
  char *pcVar4;
  int *piVar5;
  dword dVar6;
  dword dVar7;
  int iVar8;
  uint unaff_retaddr;
  cls_0x41d550 local_4c;
  _String_base local_48 [4];
  void *local_44;
  void *local_34;
  uint local_30;
  undefined local_2c [4];
  undefined local_28;
  dword dStack_24;
  uint uStack_20;
  uint uStack_1c;
  void *local_18;
  dword local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062f788;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = 0xf;
  local_18 = (void *)0x0;
  local_28 = 0;
  dVar6 = this->mbr_0x7c;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (((-1 < (int)dVar6) && (dVar7 = this->mbr_0x78, ExceptionList = &pvStack_c, -1 < (int)dVar7))
     && (ExceptionList = &pvStack_c, (int)dVar7 < (int)this->mbr_0x94)) {
    local_4c.mbr_0x0 = *(dword *)this->mbr_0x90;
    ExceptionList = &pvStack_c;
    ppvVar3 = &pvStack_c;
    if (0 < (int)dVar7) {
      do {
        cls_0x41d550::meth_0x56a0a0(&local_4c);
        dVar7 = dVar7 - 1;
        ppvVar3 = (void **)ExceptionList;
      } while (dVar7 != 0);
    }
    ExceptionList = ppvVar3;
    dVar7 = *(dword *)(local_4c.mbr_0x0 + 0x18);
    if ((int)dVar6 < (int)(*(int *)(local_4c.mbr_0x0 + 0x24) + dVar7)) {
      if ((int)dVar6 < (int)dVar7) {
        local_4c.mbr_0x0 = **(dword **)(local_4c.mbr_0x0 + 0x14);
        if (0 < (int)dVar6) {
          do {
            cls_0x41d550::meth_0x41d550(&local_4c);
            dVar6 = dVar6 - 1;
          } while (dVar6 != 0);
        }
      }
      else {
        local_4c.mbr_0x0 = **(dword **)(local_4c.mbr_0x0 + 0x20);
        iVar8 = 0;
        if (dVar6 != dVar7 && -1 < (int)(dVar6 - dVar7)) {
          do {
            cls_0x41d550::meth_0x41d550(&local_4c);
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(dVar6 - dVar7));
        }
      }
      cVar1.mbr_0x0 = local_4c.mbr_0x0;
      piVar5 = *(int **)(local_4c.mbr_0x0 + 0x14);
      if (piVar5 != *(int **)(local_4c.mbr_0x0 + 0x18)) {
        do {
          local_30 = 0xf;
          local_34 = (void *)0x0;
          local_44 = (void *)((uint)local_44 & 0xffffff00);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_0056c280(*(int *)(*piVar5 + 8),local_48);
          if (piVar5 != *(int **)(cVar1.mbr_0x0 + 0x14)) {
            pcVar2 = "\n\n";
            do {
              pcVar4 = pcVar2;
              pcVar2 = pcVar4 + 1;
            } while (*pcVar4 != '\0');
            cls_0x4d8d70::meth_0x4257d0
                      ((cls_0x4d8d70 *)local_2c,(undefined4 *)&DAT_0065bc6c,
                       (uint)(pcVar4 + -0x65bc6c));
          }
          cls_0x4d8d70::meth_0x4256e0((cls_0x4d8d70 *)local_2c,(int)local_48,0,0xffffffff);
          local_4._0_1_ = 0;
          if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
            _free(local_44);
          }
          piVar5 = piVar5 + 1;
          local_44 = (void *)((uint)local_44 & 0xffffff00);
        } while (piVar5 != *(int **)(cVar1.mbr_0x0 + 0x18));
      }
    }
  }
  local_30 = 0xf;
  local_34 = (void *)0x0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  pcVar2 = "lblTasks2";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,"lblTasks2",(uint)(pcVar4 + -0x65bbcc));
  local_4._0_1_ = 2;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)local_48);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_30 < 0x10) {
    local_30 = 0xf;
    local_34 = (void *)0x0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    (**(code **)(*piVar5 + 300))(local_2c);
    (**(code **)(*piVar5 + 0x198))(0,this->mbr_0x88);
    meth_0x44dec0(this,dStack_24 == 0,'\0');
    meth_0x44cea0(this);
    if (uStack_20 < 0x10) {
      ExceptionList = local_18;
      FUN_00616e15(uStack_1c ^ (uint)pvStack_c);
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_44);
}



void __thiscall GameActionEquip::meth_0x44ee00(GameActionEquip *this)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  uint unaff_retaddr;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  VFX_Parameter__vftable_673a20 *local_2c;
  undefined local_28;
  dword dStack_1c;
  uint local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062fa10;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (-1 < (int)this->mbr_0x1a4) {
    ExceptionList = &pvStack_c;
    FUN_004a1a30((cls_0x50db20 *)&local_2c,(byte *)"Holodisc #%d",(char)this->mbr_0x1a4 + '\x01');
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  pcVar1 = "lblDownloads2";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,"lblDownloads2",(uint)(pcVar2 + -0x65bc70))
  ;
  local_4._0_1_ = 1;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)local_48);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  (**(code **)(*piVar3 + 300))(&local_2c);
  meth_0x44dec0(this,dStack_1c == 0,'\0');
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_10;
  FUN_00616e15(local_14 ^ local_4);
  return;
}



void __thiscall GameActionEquip::meth_0x44ef20(GameActionEquip *this)

{
  char cVar1;
  dword dVar2;
  AreaMapWindow *pAVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  void *unaff_EBX;
  dword dVar9;
  uint unaff_ESI;
  char *pcVar10;
  uint unaff_retaddr;
  dword dStack_154;
  void *pvStack_150;
  dword dStack_14c;
  dword dStack_148;
  dword dStack_134;
  VFX_Parameter__vftable_673a20 *pVStack_124;
  undefined4 ******ppppppuStack_120;
  VFX_Parameter__vftable_673a20 *pVStack_11c;
  VFX_Parameter__vftable_673a20 *pVStack_118;
  dword dVar11;
  VFX_Parameter__vftable_673a20 *pVVar12;
  void **ppvVar13;
  void *local_ec;
  uint local_e8;
  dword dStack_e4;
  VFX_Parameter__vftable_673a20 *pVStack_e0;
  VFX_Parameter__vftable_673a20 *pVStack_dc;
  VFX_Parameter__vftable_673a20 *local_d8;
  AreaMapWindow *local_d4;
  AreaMapWindow *local_d0;
  dword local_cc;
  uint uStack_c8;
  undefined uStack_c4;
  VFX_Parameter__vftable_673a20 VStack_c0;
  undefined4 ******ppppppuStack_bc;
  dword dStack_b4;
  dword dStack_b0;
  VFX_Parameter__vftable_673a20 *pVStack_ac;
  dword dStack_a8;
  undefined4 local_98;
  undefined4 ******appppppuStack_84 [3];
  uint uStack_78;
  void *pvStack_74;
  uint uStack_70;
  undefined uStack_6c;
  uint uStack_68;
  dword dStack_58;
  dword dStack_54;
  byte bStack_4c;
  undefined uStack_44;
  undefined uStack_40;
  undefined4 uStack_3c;
  dword dStack_38;
  VFX_Parameter__vftable_673a20 *pVStack_2c;
  VFX_Parameter__vftable_673a20 *pVStack_28;
  dword dStack_24;
  undefined4 uStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f87c;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  dVar2 = meth_0x44ab40(this);
  local_98 = *(undefined4 *)(&DAT_0065bb5c + this->mbr_0x158 * 4);
  local_cc = dVar2;
  if ((int *)this->mbr_0xc4 != (int *)0x0) {
    FUN_004954a0((virt_meth_0x6162e5 *)
                 ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                 (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                 (int *)this->mbr_0xc4);
    if ((undefined4 *)this->mbr_0xc4 != (undefined4 *)0x0) {
      (***(code ***)(undefined4 *)this->mbr_0xc4)();
    }
  }
  local_d0 = (AreaMapWindow *)FUN_004a7680(0xfa4);
  local_4 = 0;
  if (local_d0 == (AreaMapWindow *)0x0) {
    pAVar3 = (AreaMapWindow *)0x0;
  }
  else {
    pAVar3 = AreaMapWindow::AreaMapWindow(local_d0,dVar2);
  }
  this->mbr_0xc4 = (dword)pAVar3;
  local_4 = 0xffffffff;
  local_d4 = (AreaMapWindow *)0xf;
  local_d8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_e8 = local_e8 & 0xffffff00;
  pcVar10 = "AreaMap.ini";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_ec,"AreaMap.ini",(uint)(pcVar8 + -0x658ba0));
  ppvVar13 = &local_ec;
  local_4 = 1;
  (**(code **)(*(int *)this->mbr_0xc4 + 0xcc))();
  puStack_8 = (undefined *)0xffffffff;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  if ((int *)this->mbr_0xc8 != (int *)0x0) {
    FUN_004954a0((virt_meth_0x6162e5 *)
                 ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                 (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                 (int *)this->mbr_0xc8);
    if ((undefined4 *)this->mbr_0xc8 != (undefined4 *)0x0) {
      (***(code ***)(undefined4 *)this->mbr_0xc8)();
    }
  }
  local_d4 = (AreaMapWindow *)FUN_004a7680(0xfa4);
  puStack_8 = (undefined *)0x2;
  if (local_d4 == (AreaMapWindow *)0x0) {
    pAVar3 = (AreaMapWindow *)0x0;
  }
  else {
    pAVar3 = AreaMapWindow::AreaMapWindow(local_d4,local_d0);
  }
  this->mbr_0xc8 = (dword)pAVar3;
  puStack_8 = (undefined *)0xffffffff;
  local_d8 = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_dc = (VFX_Parameter__vftable_673a20 *)0x0;
  local_ec = (void *)((uint)local_ec & 0xffffff00);
  pcVar10 = "AreaMap.ini";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffff10,"AreaMap.ini",(uint)(pcVar8 + -0x658ba0));
  puStack_8 = (undefined *)0x3;
  (**(code **)(*(int *)this->mbr_0xc8 + 0xcc))();
  pvStack_c = (void *)0xffffffff;
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  pVStack_dc = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_e0 = (VFX_Parameter__vftable_673a20 *)0x0;
  pcVar10 = "winMap1";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffff0c,"winMap1",(uint)(pcVar8 + -0x65bd04));
  pvStack_c = (void *)0x4;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&stack0xffffff0c);
  pvStack_c = (void *)0xffffffff;
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free((void *)((uint)unaff_EBX & 0xffffff00));
  }
  pVStack_dc = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_e0 = (VFX_Parameter__vftable_673a20 *)0x0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x48))();
    pVStack_118 = (VFX_Parameter__vftable_673a20 *)0x44f1b7;
    (**(code **)(*piVar4 + 0x14))();
    pVStack_118 = pVStack_dc;
    pVStack_11c = pVStack_e0;
    ppppppuStack_120 = (undefined4 ******)0x44f1cc;
    (**(code **)(*(int *)this->mbr_0xc4 + 0x44))();
    ppppppuStack_120 = ppppppuStack_bc;
    pVStack_124 = pVStack_dc;
    (**(code **)(*(int *)this->mbr_0xc4 + 0x10))();
  }
  dStack_a8 = 0xf;
  pVStack_ac = (VFX_Parameter__vftable_673a20 *)0x0;
  ppppppuStack_bc = (undefined4 ******)((uint)ppppppuStack_bc & 0xffffff00);
  pcVar10 = "AreaMapWindow1";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&VStack_c0,"AreaMapWindow1",(uint)(pcVar8 + -0x65bcf4));
  pVVar12 = &VStack_c0;
  pvStack_c = (void *)0x5;
  (**(code **)(*(int *)this->mbr_0xc4 + 0x4c))();
  local_10 = 0xffffffff;
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_ac) {
                    /* WARNING: Subroutine does not return */
    _free(VStack_c0.virt_meth_0x4ff950_0);
  }
  dVar2 = this->mbr_0xc4;
  (**(code **)(*piVar4 + 0xa4))();
  AreaMapWindow::meth_0x4231b0((AreaMapWindow *)this->mbr_0xc4);
  dVar9 = this->mbr_0xc4;
  *(dword *)(dVar9 + 0xf84) = dStack_a8;
  *(undefined *)(dVar9 + 0xf0d) = 1;
  FUN_0044d960(this,(cls_0x50db20 *)&stack0xffffff78);
  dVar9 = 0;
  uStack_14 = 6;
  if (pvStack_74 != (void *)0x0) {
    ppppppuStack_120 = appppppuStack_84[0];
    if (uStack_70 < 0x10) {
      ppppppuStack_120 = appppppuStack_84;
    }
    pVStack_118 = (VFX_Parameter__vftable_673a20 *)0x1;
    pVStack_11c = (VFX_Parameter__vftable_673a20 *)0x1;
    pVStack_124 = (VFX_Parameter__vftable_673a20 *)0x44f2cd;
    dVar9 = FUN_004b8180();
  }
  pVStack_e0 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_d0 = (AreaMapWindow *)0x0;
  if (dVar9 == 0) {
    dStack_b0 = 0xf;
    dStack_b4 = 0;
    uStack_c4 = 0;
    pcVar10 = "AreaMap-middle.bmp";
    do {
      pcVar8 = pcVar10;
      pcVar10 = pcVar8 + 1;
    } while (*pcVar8 != '\0');
    pVStack_118 = (VFX_Parameter__vftable_673a20 *)0x44f428;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&uStack_c8,"AreaMap-middle.bmp",(uint)(pcVar8 + -0x658b80));
    pVStack_118 = (VFX_Parameter__vftable_673a20 *)0xbf800000;
    pVStack_11c = (VFX_Parameter__vftable_673a20 *)0x0;
    ppppppuStack_120 = (undefined4 ******)0x0;
    pVStack_124 = (VFX_Parameter__vftable_673a20 *)0x0;
    uStack_14 = CONCAT31(uStack_14._1_3_,8);
    (**(code **)(*(int *)this->mbr_0xc4 + 0x130))();
    uStack_3c = CONCAT31(uStack_3c._1_3_,6);
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      _free(local_ec);
    }
  }
  else {
    if (uStack_70 < 0x10) {
      appppppuStack_84[0] = appppppuStack_84;
    }
    pVStack_118 = (VFX_Parameter__vftable_673a20 *)0x44f308;
    pvVar5 = (void *)ResourceSystem::Demand(DAT_00707da8,appppppuStack_84[0],(int *)0x1,dVar2);
    if (pvVar5 != (void *)0x0) {
      dStack_54 = 0xf;
      dStack_58 = 0;
      uStack_68 = uStack_68 & 0xffffff00;
      dStack_38 = 0xf;
      uStack_3c = 0;
      bStack_4c = 0;
      pVStack_2c = (VFX_Parameter__vftable_673a20 *)0x0;
      pVStack_28 = (VFX_Parameter__vftable_673a20 *)0x0;
      dStack_24 = 0;
      uStack_14._0_1_ = 7;
      G3D_LightmapSurfaceAttribute::meth_0x4ca270
                ((G3D_LightmapSurfaceAttribute *)&uStack_6c,0xffffffff);
      pVStack_118 = (VFX_Parameter__vftable_673a20 *)0x44f37d;
      uVar6 = G3D_LightmapSurfaceAttribute::meth_0x4ca2b0
                        ((G3D_LightmapSurfaceAttribute *)&uStack_6c,*(uint **)((int)pvVar5 + 0x2c),
                         '\0');
      if (((char)uVar6 != '\0') || (0 < (int)pVStack_2c)) {
        pVStack_e0 = pVStack_2c;
        local_d0 = (AreaMapWindow *)pVStack_28;
      }
      ResourceSystem::Release(DAT_00707da8,pvVar5);
      uStack_14 = CONCAT31(uStack_14._1_3_,6);
      G3D_LightmapSurfaceAttribute::meth_0x442230((G3D_LightmapSurfaceAttribute *)&uStack_6c);
    }
    pVStack_118 = (VFX_Parameter__vftable_673a20 *)0xbf800000;
    pVStack_11c = (VFX_Parameter__vftable_673a20 *)0xbf800000;
    ppppppuStack_120 = (undefined4 ******)0x0;
    pVStack_124 = (VFX_Parameter__vftable_673a20 *)0x0;
    (**(code **)(*(int *)this->mbr_0xc4 + 300))();
    AreaMapWindow::meth_0x4aa910((AreaMapWindow *)this->mbr_0xc4,4);
    dStack_134 = dVar9;
  }
  dVar2 = this->mbr_0xc4;
  *(undefined *)(dVar2 + 0xf8d) = 0;
  *(undefined *)(dVar2 + 0xf0d) = 1;
  uVar6 = 0xf;
  ppppppuStack_120 = (undefined4 ******)((uint)ppppppuStack_120 & 0xffffff00);
  pcVar10 = "winMap2";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pVStack_124,"winMap2",(uint)(pcVar8 + -0x65bcec));
  uStack_3c._0_1_ = 9;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&pVStack_124);
  uStack_3c._0_1_ = 6;
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(ppppppuStack_120);
  }
  dVar11 = 0xf;
  dVar2 = 0;
  ppppppuStack_120 = (undefined4 ******)((uint)ppppppuStack_120 & 0xffffff00);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x48))();
    dStack_148 = 0x44f525;
    dStack_14c = dVar2;
    (**(code **)(*piVar4 + 0x14))();
    dStack_148 = dVar11;
    pvStack_150 = (void *)0x44f53a;
    dVar2 = dStack_14c;
    dStack_154 = dStack_148;
    (**(code **)(*(int *)this->mbr_0xc8 + 0x44))();
    pvStack_150 = local_ec;
    (**(code **)(*(int *)this->mbr_0xc8 + 0x10))();
  }
  local_d8 = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_dc = (VFX_Parameter__vftable_673a20 *)0x0;
  local_ec = (void *)((uint)local_ec & 0xffffff00);
  pcVar10 = "AreaMapWindow2";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffff10,"AreaMapWindow2",(uint)(pcVar8 + -0x65bcdc));
  uStack_3c = CONCAT31(uStack_3c._1_3_,10);
  (**(code **)(*(int *)this->mbr_0xc8 + 0x4c))();
  uStack_40 = 6;
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free((void *)((uint)unaff_EBX & 0xffffff00));
  }
  (**(code **)(*piVar4 + 0xa4))();
  AreaMapWindow::meth_0x4231b0((AreaMapWindow *)this->mbr_0xc8);
  dVar11 = this->mbr_0xc8;
  *(VFX_Parameter__vftable_673a20 **)(dVar11 + 0xf84) = local_d8;
  *(undefined *)(dVar11 + 0xf0d) = 1;
  if (dVar9 == 0) {
    pVStack_e0 = (VFX_Parameter__vftable_673a20 *)0xf;
    dStack_e4 = 0;
    pcVar10 = "AreaMap-middle.bmp";
    do {
      pcVar8 = pcVar10;
      pcVar10 = pcVar8 + 1;
    } while (*pcVar8 != '\0');
    dStack_148 = 0x44f659;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff08,"AreaMap-middle.bmp",(uint)(pcVar8 + -0x658b80));
    dStack_148 = 0xbf800000;
    dStack_14c = 0;
    pvStack_150 = (void *)0x0;
    dStack_154 = 0;
    uStack_44 = 0xb;
    (**(code **)(*(int *)this->mbr_0xc8 + 0x130))(&stack0xffffff08);
    uStack_6c = 6;
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVVar12) {
                    /* WARNING: Subroutine does not return */
      _free(pVStack_11c);
    }
  }
  else {
    dStack_148 = 0xbf800000;
    dStack_14c = 0xbf800000;
    pvStack_150 = (void *)0x0;
    dStack_154 = 0;
    (**(code **)(*(int *)this->mbr_0xc8 + 300))(dVar9,0,dVar2,ppvVar13);
    AreaMapWindow::meth_0x4aa910((AreaMapWindow *)this->mbr_0xc8,4);
  }
  dVar2 = this->mbr_0xc8;
  *(undefined *)(dVar2 + 0xf8d) = 0;
  *(undefined *)(dVar2 + 0xf0d) = 1;
  meth_0x44ab80(this);
  meth_0x44ac50(this);
  meth_0x44d710(this);
  meth_0x44d460(this,1);
  uVar6 = 0xf;
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  pcVar10 = "lblMapMode";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&dStack_154,"lblMapMode",(uint)(pcVar8 + -0x65bcd0))
  ;
  uStack_6c = 0xc;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&dStack_154);
  uStack_6c = 6;
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_150);
  }
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  (**(code **)(*piVar4 + 0xc4))();
  uVar6 = 0xf;
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  pcVar10 = "lblAddNote";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&dStack_154,"lblAddNote",(uint)(pcVar8 + -0x65bcc4))
  ;
  uStack_6c = 0xd;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&dStack_154);
  uStack_6c = 6;
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_150);
  }
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  (**(code **)(*piVar4 + 0xc4))();
  uVar6 = 0xf;
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  pcVar10 = "lblEditNote";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&dStack_154,"lblEditNote",(uint)(pcVar8 + -0x65bcb8));
  uStack_6c = 0xe;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&dStack_154);
  uStack_6c = 6;
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_150);
  }
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  (**(code **)(*piVar4 + 0xc4))();
  uVar6 = 0xf;
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  pcVar10 = "lblDeleteNote";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&dStack_154,"lblDeleteNote",(uint)(pcVar8 + -0x65bca8));
  uStack_6c = 0xf;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&dStack_154);
  uStack_6c = 6;
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_150);
  }
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  (**(code **)(*piVar4 + 0xc4))();
  uVar6 = 0xf;
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  pcVar10 = "lblZoomIn";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&dStack_154,"lblZoomIn",(uint)(pcVar8 + -0x65bc9c));
  uStack_6c = 0x10;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&dStack_154);
  uStack_6c = 6;
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_150);
  }
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  (**(code **)(*piVar4 + 0xc4))();
  uVar6 = 0xf;
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  pcVar10 = "lblZoomOut";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&dStack_154,"lblZoomOut",(uint)(pcVar8 + -0x65bc90))
  ;
  uStack_6c = 0x11;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&dStack_154);
  uStack_6c = 6;
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_150);
  }
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  (**(code **)(*piVar4 + 0xc4))();
  uVar6 = 0xf;
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  pcVar10 = "btnLeft";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&dStack_154,"btnLeft",(uint)(pcVar8 + -0x65bc0c));
  uStack_6c = 0x12;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&dStack_154);
  uStack_6c = 6;
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_150);
  }
  pvStack_150 = (void *)((uint)pvStack_150 & 0xffffff00);
  (**(code **)(*piVar4 + 0xc4))();
  dStack_e4 = 0xf;
  local_e8 = 0;
  pcVar10 = "btnRight";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffff04,"btnRight",(uint)(pcVar8 + -0x65bc00));
  uStack_6c = 0x13;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)&stack0xffffff04);
  uStack_6c = 6;
  if (0xf < dStack_e4) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(unaff_ESI & 0xffffff00));
  }
  dStack_e4 = 0xf;
  local_e8 = 0;
  (**(code **)(*piVar4 + 0xc4))();
  AreaMapWindow::meth_0x41f480((AreaMapWindow *)this->mbr_0xc4,'\x01');
  AreaMapWindow::meth_0x41f480((AreaMapWindow *)this->mbr_0xc8,'\x01');
  AreaMapWindow::meth_0x41f4d0((AreaMapWindow *)this->mbr_0xc4,'\x01');
  AreaMapWindow::meth_0x41f4d0((AreaMapWindow *)this->mbr_0xc8,'\x01');
  if (DAT_0070bd98 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = DAT_0070bd98 + 0xc;
  }
  iVar7 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 4) + 4 + iVar7) + 0x60))();
  if (((iVar7 == 0) || (dStack_134 == 0)) || (*(dword *)(iVar7 + 4) != dStack_134)) {
    dVar2 = this->mbr_0xc4;
    *(undefined *)(dVar2 + 4000) = 0;
    *(undefined *)(dVar2 + 0xf0d) = 1;
    dVar2 = this->mbr_0xc8;
    *(undefined *)(dVar2 + 4000) = 0;
    *(undefined *)(dVar2 + 0xf0d) = 1;
    dVar2 = this->mbr_0xc4;
    *(undefined *)(dVar2 + 0xfa1) = 0;
    *(undefined *)(dVar2 + 0xf0d) = 1;
    dVar2 = this->mbr_0xc8;
    *(undefined *)(dVar2 + 0xfa1) = 0;
  }
  else {
    dVar2 = this->mbr_0xc4;
    *(undefined *)(dVar2 + 4000) = 1;
    *(undefined *)(dVar2 + 0xf0d) = 1;
    dVar2 = this->mbr_0xc8;
    *(undefined *)(dVar2 + 4000) = 1;
    *(undefined *)(dVar2 + 0xf0d) = 1;
    dVar2 = this->mbr_0xc4;
    *(undefined *)(dVar2 + 0xfa1) = 1;
    *(undefined *)(dVar2 + 0xf0d) = 1;
    dVar2 = this->mbr_0xc8;
    *(undefined *)(dVar2 + 0xfa1) = 1;
  }
  *(undefined *)(dVar2 + 0xf0d) = 1;
  if (iVar7 == 0) {
    dVar2 = 0;
  }
  else {
    dVar2 = *(dword *)(iVar7 + 0xb4);
  }
  this->mbr_0x184 = dVar2;
  if (iVar7 == 0) {
    pcVar10 = "";
  }
  else if (*(uint *)(iVar7 + 0x44) < 0x10) {
    pcVar10 = (char *)(iVar7 + 0x30);
  }
  else {
    pcVar10 = *(char **)(iVar7 + 0x30);
  }
  pcVar8 = pcVar10;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0x188,pcVar10,(int)pcVar8 - (int)(pcVar10 + 1));
  meth_0x44dec0(this,dStack_134 == 0,*(char *)&this->mbr_0xa0);
  if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
    _free(pVStack_dc);
  }
  ExceptionList = pvStack_74;
  FUN_00616e15(uStack_78 ^ uStack_68);
  return;
}



uint __thiscall GameActionEquip::meth_0x450080(GameActionEquip *this,int param_1)

{
  uint **ppuVar1;
  Gregorian *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint **ppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iStack0000000c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_4,&local_10);
  uVar6 = FUN_00616e24();
  uVar7 = FUN_00616e24();
  iStack0000000c = (int)uVar7;
  ppuVar1 = *(uint ***)(param_1 + 0xee8);
  if (ppuVar1 == (uint **)0x0) {
    ppuVar5 = (uint **)0x0;
  }
  else {
    ppuVar5 = (uint **)*ppuVar1;
  }
  if (ppuVar5 == ppuVar1) {
    return (uint)ppuVar1 & 0xffffff00;
  }
  while( true ) {
    this_00 = (Gregorian *)ppuVar5[2];
    AreaMapIcon::Get_mbrs_0xc_0x10_0x14_0x18
              ((AreaMapIcon *)this_00,&local_8,&local_14,&local_c,&local_18);
    if ((((local_8 <= (int)uVar6) && ((int)uVar6 < local_8 + local_c)) &&
        (local_14 <= iStack0000000c)) && (iStack0000000c < local_14 + local_18)) break;
    ppuVar5 = (uint **)*ppuVar5;
    if (ppuVar5 == (uint **)*(uint **)(param_1 + 0xee8)) {
      return param_1 & 0xffffff00;
    }
  }
  iVar2 = meth_0x44ab40(this);
  iVar3 = Gregorian::Get_mbr_0x34(this_00);
  iStack0000000c = local_14 + local_18;
  uVar6 = FUN_00616e24();
  uVar4 = (undefined4)uVar6;
  iStack0000000c = local_8 + local_c;
  uVar6 = FUN_00616e24();
  cls_0x44ad50::meth_0x44dcb0((cls_0x44ad50 *)this->mbr_0xc0,(int)uVar6,uVar4);
  uVar4 = cls_0x44ad50::meth_0x44fc70((cls_0x44ad50 *)this->mbr_0xc0,(int)this,iVar2,iVar3,'\x01');
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}



void __thiscall GameActionEquip::meth_0x450230(GameActionEquip *this)

{
  char cVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  cls_0x616328 *pcVar5;
  int iVar6;
  dword dVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  cls_0x50db20 *pcVar11;
  char *pcVar12;
  uint unaff_EBX;
  undefined4 unaff_EBP;
  uint unaff_ESI;
  int **ppiVar13;
  uint unaff_retaddr;
  undefined *puVar14;
  VFX_Parameter__vftable_673a20 **ppVStack_19c;
  VFX_Parameter__vftable_673a20 **ppVVar15;
  VFX_Parameter__vftable_673a20 **_Memory;
  undefined *puVar16;
  VFX_Parameter__vftable_673a20 **ppVVar17;
  undefined local_154 [4];
  cls_0x41d550 local_150;
  dword local_14c;
  VFX_Parameter__vftable_673a20 *local_148;
  dword local_144;
  VFX_Parameter__vftable_673a20 *local_140;
  dword dStack_13c;
  VFX_Parameter__vftable_673a20 *pVStack_138;
  dword dStack_134;
  VFX_Parameter__vftable_673a20 *local_130;
  void *local_12c;
  VFX_Parameter__vftable_673a20 *local_128;
  dword local_124;
  int *local_120;
  int *local_11c;
  int *local_118;
  dword local_114;
  undefined local_110 [20];
  void *pvStack_fc;
  undefined auStack_f8 [4];
  void *pvStack_f4;
  dword dStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  void *local_e0;
  undefined local_dc [4];
  void *local_d8;
  dword dStack_d0;
  uint uStack_cc;
  dword local_c8;
  VFX_Parameter__vftable_673a20 *local_c4;
  undefined uStack_c0;
  dword dStack_b0;
  dword dStack_ac;
  void *pvStack_9c;
  dword dStack_8c;
  uint local_88 [2];
  void *pvStack_80;
  dword dStack_70;
  uint uStack_6c;
  void *pvStack_64;
  dword dStack_54;
  void *pvStack_50;
  dword dStack_44;
  dword dStack_40;
  uint uStack_3c;
  dword dStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined uStack_20;
  dword dStack_1c;
  dword dStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f99a;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  this->mbr_0xb8 = 0;
  this->mbr_0xb4 = 0;
  if ((void *)this->mbr_0x160 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x160);
  }
  this->mbr_0x160 = 0;
  this->mbr_0x164 = 0;
  this->mbr_0x168 = 0;
  if ((void *)this->mbr_0x170 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x170);
  }
  this->mbr_0x170 = 0;
  this->mbr_0x174 = 0;
  this->mbr_0x178 = 0;
  pcVar5 = (cls_0x616328 *)meth_0x54be10(this);
  iVar6 = FUN_006165e0(pcVar5,0,&Entity::RTTI_Type_Descriptor,&GamePlayer::RTTI_Type_Descriptor,0);
  if (iVar6 != 0) {
    dVar7 = *(dword *)(iVar6 + 0x800);
    local_110[0] = uStack_e4._3_1_;
    local_124 = dVar7;
    local_110._4_4_ = FUN_0056e2b0();
    *(undefined *)(local_110._4_4_ + 0x11) = 1;
    *(undefined4 *)(local_110._4_4_ + 4) = local_110._4_4_;
    *(undefined4 *)local_110._4_4_ = local_110._4_4_;
    *(undefined4 *)(local_110._4_4_ + 8) = local_110._4_4_;
    local_110._8_4_ = 0;
    local_150.mbr_0x0 = **(int **)(dVar7 + 4);
    local_4 = 0;
    if ((int *)local_150.mbr_0x0 != *(int **)(dVar7 + 4)) {
      do {
        local_11c = *(int **)(*(int *)(local_150.mbr_0x0 + 0x28) + 4);
        GUI::Interface::meth_0x44e2f0((Interface *)local_110,local_88,&local_11c);
        cls_0x41d550::meth_0x4c8eb0(&local_150);
      } while (local_150.mbr_0x0 != *(dword *)(dVar7 + 4));
    }
    ppiVar13 = *(int ***)local_110._4_4_;
    if (ppiVar13 != (int **)local_110._4_4_) {
      do {
        local_150.mbr_0x0 = (dword)ppiVar13[3];
        dVar7 = this->mbr_0x160;
        if ((dVar7 == 0) ||
           ((uint)((int)(this->mbr_0x168 - dVar7) >> 2) <=
            (uint)((int)(this->mbr_0x164 - dVar7) >> 2))) {
          cls_0x40cc80::meth_0x41fea0
                    ((cls_0x40cc80 *)&this->mbr_0x15c,(undefined4 *)this->mbr_0x164,
                     (undefined4 *)0x1,&local_150);
        }
        else {
          local_11c = (int *)this->mbr_0x164;
          FUN_005457b0(local_11c,1,&local_150);
          this->mbr_0x164 = (dword)(local_11c + 1);
        }
        if (*(char *)((int)ppiVar13 + 0x11) == '\0') {
          ppiVar2 = (int **)ppiVar13[2];
          if (*(char *)((int)ppiVar2 + 0x11) == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x11);
            ppiVar13 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*ppiVar2 + 0x11);
              ppiVar13 = ppiVar2;
              ppiVar2 = (int **)*ppiVar2;
            }
          }
          else {
            cVar1 = *(char *)((int)ppiVar13[1] + 0x11);
            ppiVar4 = (int **)ppiVar13[1];
            ppiVar2 = ppiVar13;
            while ((ppiVar13 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar13[2]))) {
              cVar1 = *(char *)((int)ppiVar13[1] + 0x11);
              ppiVar4 = (int **)ppiVar13[1];
              ppiVar2 = ppiVar13;
            }
          }
        }
      } while (ppiVar13 != (int **)local_110._4_4_);
    }
    dVar7 = this->mbr_0xa4;
    local_150.mbr_0x0 = 0xffffffff;
    if (-1 < (int)dVar7) {
      if (this->mbr_0x160 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)(this->mbr_0x164 - this->mbr_0x160) >> 2;
      }
      if ((int)dVar7 < iVar6) {
        local_150.mbr_0x0 = *(dword *)(this->mbr_0x160 + dVar7 * 4);
      }
    }
    ppiVar13 = (int **)**(int ***)(local_124 + 4);
    if (ppiVar13 != *(int ***)(local_124 + 4)) {
      do {
        local_120 = ppiVar13[10];
        if (local_120[1] == local_150.mbr_0x0) {
          dVar7 = this->mbr_0x170;
          if ((dVar7 == 0) ||
             ((uint)((int)(this->mbr_0x178 - dVar7) >> 2) <=
              (uint)((int)(this->mbr_0x174 - dVar7) >> 2))) {
            cls_0x44e500::meth_0x44e500
                      ((cls_0x44e500 *)&this->mbr_0x16c,(undefined4 *)this->mbr_0x174,
                       (undefined4 *)0x1,&local_120);
          }
          else {
            puVar3 = (undefined4 *)this->mbr_0x174;
            FUN_005457b0(puVar3,1,&local_120);
            this->mbr_0x174 = (dword)(puVar3 + 1);
          }
        }
        if (*(char *)((int)ppiVar13 + 0x2d) == '\0') {
          ppiVar2 = (int **)ppiVar13[2];
          if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar13 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
              ppiVar13 = ppiVar2;
              ppiVar2 = (int **)*ppiVar2;
            }
          }
          else {
            cVar1 = *(char *)((int)ppiVar13[1] + 0x2d);
            ppiVar4 = (int **)ppiVar13[1];
            ppiVar2 = ppiVar13;
            while ((ppiVar13 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar13[2]))) {
              cVar1 = *(char *)((int)ppiVar13[1] + 0x2d);
              ppiVar4 = (int **)ppiVar13[1];
              ppiVar2 = ppiVar13;
            }
          }
        }
      } while (ppiVar13 != *(int ***)(local_124 + 4));
    }
    if (this->mbr_0x160 == 0) {
      dVar7 = 0;
    }
    else {
      dVar7 = (int)(this->mbr_0x164 - this->mbr_0x160) >> 2;
    }
    this->mbr_0xb8 = dVar7;
    if (this->mbr_0x170 == 0) {
      dVar7 = 0;
    }
    else {
      dVar7 = (int)(this->mbr_0x174 - this->mbr_0x170) >> 2;
    }
    this->mbr_0xb4 = dVar7;
    local_4 = 0xffffffff;
    GUI::Interface::meth_0x44e3e0
              ((Interface *)local_110,&local_118,*(int ***)local_110._4_4_,(int **)local_110._4_4_);
                    /* WARNING: Subroutine does not return */
    _free((void *)local_110._4_4_);
  }
  if (*(char *)&this->mbr_0xa0 == '\0') {
    local_128 = (VFX_Parameter__vftable_673a20 *)0x0;
    do {
      iVar6 = (int)&local_128->virt_meth_0x4ff950_0 + this->mbr_0xb0;
      pcVar9 = FUN_0044a370(0);
      local_12c = (void *)0xf;
      local_130 = (VFX_Parameter__vftable_673a20 *)0x0;
      local_140 = (VFX_Parameter__vftable_673a20 *)((uint)local_140 & 0xffffff00);
      pcVar12 = pcVar9;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&local_144,pcVar9,(int)pcVar12 - (int)(pcVar9 + 1));
      local_4 = 6;
      piVar8 = (int *)CLoadMapInterface::meth_0x495740
                                ((CLoadMapInterface *)
                                 ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                                 (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4)
                                 ,(int)&local_144);
      local_4 = 0xffffffff;
      if ((void *)0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
        _free(local_140);
      }
      local_12c = (void *)0xf;
      local_130 = (VFX_Parameter__vftable_673a20 *)0x0;
      local_140 = (VFX_Parameter__vftable_673a20 *)((uint)local_140 & 0xffffff00);
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0x174))();
        if (iVar6 == 0) {
          (**(code **)(*piVar8 + 0x130))();
          (**(code **)(*piVar8 + 0xe8))();
          (**(code **)(*piVar8 + 0x54))();
          (**(code **)(*piVar8 + 0x170))();
        }
        else if ((int)this->mbr_0xb8 < iVar6) {
          (**(code **)(*piVar8 + 0x54))();
        }
        else {
          pvStack_fc = (void *)0xf;
          local_110._16_4_ = 0;
          local_110[0] = (HeapTracker)0x0;
          dStack_14 = 7;
          FUN_004a1a30((cls_0x50db20 *)&local_114,(byte *)"Area %d",
                       (char)*(undefined4 *)((this->mbr_0x160 - 4) + iVar6 * 4));
          (**(code **)(*piVar8 + 300))();
          (**(code **)(*piVar8 + 0xe8))();
          (**(code **)(*piVar8 + 0x54))();
          if (this->mbr_0xa4 == iVar6 - 1U) {
            pcVar11 = FUN_00425d70((cls_0x50db20 *)auStack_f8,(_String_base *)&DAT_006f34fc,
                                   (int)&local_120);
            uStack_20 = 8;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&local_120,(_String_base *)pcVar11,0,0xffffffff);
            uStack_20 = 7;
            if ((void *)0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_f4);
            }
            local_e0 = (void *)0xf;
            uStack_e4 = 0;
            pvStack_f4 = (void *)((uint)pvStack_f4 & 0xffffff00);
            (**(code **)(*piVar8 + 0x168))();
            (**(code **)(*piVar8 + 300))();
          }
          else {
            (**(code **)(*piVar8 + 0x168))();
            (**(code **)(*piVar8 + 300))();
          }
          ppVStack_19c = (VFX_Parameter__vftable_673a20 **)0x450c27;
          (**(code **)(*piVar8 + 0x170))();
          dStack_30 = 0xffffffff;
          if ((int *)0xf < local_118) {
                    /* WARNING: Subroutine does not return */
            _free(local_12c);
          }
          local_118 = (int *)0xf;
          local_11c = (int *)0x0;
          local_12c = (void *)((uint)local_12c & 0xffffff00);
        }
        ppVStack_19c = (VFX_Parameter__vftable_673a20 **)0x450c6a;
        (**(code **)(*piVar8 + 0x14))();
        ppVStack_19c = &local_148;
        (**(code **)(*piVar8 + 0x174))(&local_114,local_154,&stack0xfffffea8);
        iVar6 = *piVar8;
        iVar10 = (**(code **)(iVar6 + 0x164))(unaff_EBP);
        (**(code **)(iVar6 + 0x10))(iVar10 + local_124);
      }
      local_128 = (VFX_Parameter__vftable_673a20 *)((int)&local_128->virt_meth_0x4ff950_0 + 1);
    } while ((int)local_128 < 0xe);
    local_128 = (VFX_Parameter__vftable_673a20 *)0x0;
    do {
      iVar6 = (int)&local_128->virt_meth_0x4ff950_0 + this->mbr_0xb0;
      pcVar9 = FUN_0044a370(1);
      local_c4 = (VFX_Parameter__vftable_673a20 *)0xf;
      local_c8 = 0;
      local_d8 = (void *)((uint)local_d8 & 0xffffff00);
      pcVar12 = pcVar9;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_dc,pcVar9,(int)pcVar12 - (int)(pcVar9 + 1));
      local_4 = 9;
      piVar8 = (int *)CLoadMapInterface::meth_0x495740
                                ((CLoadMapInterface *)
                                 ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                                 (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4)
                                 ,(int)local_dc);
      local_4 = 0xffffffff;
      if ((VFX_Parameter__vftable_673a20 *)0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_d8);
      }
      local_c4 = (VFX_Parameter__vftable_673a20 *)0xf;
      local_c8 = 0;
      local_d8 = (void *)((uint)local_d8 & 0xffffff00);
      if (piVar8 != (int *)0x0) {
        _Memory = &local_148;
        puVar14 = local_154;
        ppiVar13 = &local_11c;
        (**(code **)(*piVar8 + 0x174))();
        ppVVar17 = (VFX_Parameter__vftable_673a20 **)&stack0xfffffea0;
        puVar16 = auStack_f8;
        (**(code **)(*piVar8 + 0x14))();
        ppVVar15 = (VFX_Parameter__vftable_673a20 **)0x400;
        (**(code **)(*piVar8 + 0x10))();
        if (iVar6 == 0) {
          local_c8 = 0xf;
          uStack_cc = 0;
          local_dc[0] = 0;
          uStack_24 = 10;
          FUN_0056c280(0x199,(_String_base *)&local_e0);
          if (this->mbr_0xbc == 1) {
            pcVar11 = FUN_00425d70((cls_0x50db20 *)&stack0xffffff60,(_String_base *)&DAT_006f34fc,
                                   (int)&local_e0);
            uStack_24._0_1_ = 0xb;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&local_e0,(_String_base *)pcVar11,0,0xffffffff);
            uStack_24 = CONCAT31(uStack_24._1_3_,10);
            if (0xf < local_88[0]) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_9c);
            }
            local_88[0] = 0xf;
            dStack_8c = 0;
            pvStack_9c = (void *)((uint)pvStack_9c & 0xffffff00);
            (**(code **)(*piVar8 + 0x168))();
            (**(code **)(*piVar8 + 300))();
            ppVStack_19c = (VFX_Parameter__vftable_673a20 **)0x0;
            (**(code **)(*piVar8 + 0x170))();
            (**(code **)(*piVar8 + 0xe8))(0);
          }
          else {
            if ((int)this->mbr_0xa8 < 0) {
              (**(code **)(*piVar8 + 0x168))();
            }
            else {
              (**(code **)(*piVar8 + 0x168))();
            }
            (**(code **)(*piVar8 + 0xe8))();
            (**(code **)(*piVar8 + 300))();
            ppVStack_19c = ppVVar17;
            (**(code **)(*piVar8 + 0x170))(this->mbr_0x50);
          }
          (**(code **)(*piVar8 + 0x54))(0);
          dStack_44 = 0xffffffff;
          if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_fc);
          }
          local_e8 = 0xf;
          dStack_ec = 0;
          pvStack_fc = (void *)((uint)pvStack_fc & 0xffffff00);
        }
        else if (iVar6 == 1) {
          dStack_ac = 0xf;
          dStack_b0 = 0;
          uStack_c0 = 0;
          uStack_24 = 0xc;
          FUN_0056c280(0x19a,(_String_base *)&local_c4);
          if (this->mbr_0xbc == 2) {
            pcVar11 = FUN_00425d70((cls_0x50db20 *)&stack0xffffff98,(_String_base *)&DAT_006f34fc,
                                   (int)&local_c4);
            uStack_24._0_1_ = 0xd;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&local_c4,(_String_base *)pcVar11,0,0xffffffff);
            uStack_24 = CONCAT31(uStack_24._1_3_,0xc);
            if ((void *)0xf < pvStack_50) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_64);
            }
            pvStack_50 = (void *)0xf;
            dStack_54 = 0;
            pvStack_64 = (void *)((uint)pvStack_64 & 0xffffff00);
            (**(code **)(*piVar8 + 0x168))();
            (**(code **)(*piVar8 + 300))();
            ppVStack_19c = (VFX_Parameter__vftable_673a20 **)0x0;
            (**(code **)(*piVar8 + 0x170))();
            (**(code **)(*piVar8 + 0xe8))(0);
          }
          else {
            if ((int)this->mbr_0xa8 < 0) {
              (**(code **)(*piVar8 + 0x168))();
            }
            else {
              (**(code **)(*piVar8 + 0x168))();
            }
            (**(code **)(*piVar8 + 0xe8))();
            (**(code **)(*piVar8 + 300))();
            ppVStack_19c = ppVVar17;
            (**(code **)(*piVar8 + 0x170))(this->mbr_0x50);
          }
          (**(code **)(*piVar8 + 0x54))(0);
          dStack_44 = 0xffffffff;
          if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
            _free(local_e0);
          }
          uStack_cc = 0xf;
          dStack_d0 = 0;
          local_e0 = (void *)((uint)local_e0 & 0xffffff00);
        }
        else if (iVar6 == 2) {
          local_14c = 0xf;
          local_150.mbr_0x0 = 0;
          uStack_24 = 0xe;
          FUN_0056c280(0x19b,(_String_base *)&stack0xfffffe9c);
          if (this->mbr_0xbc == 3) {
            pcVar11 = FUN_00425d70((cls_0x50db20 *)(local_88 + 1),(_String_base *)&DAT_006f34fc,
                                   (int)&stack0xfffffe9c);
            uStack_24._0_1_ = 0xf;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&stack0xfffffe9c,(_String_base *)pcVar11,0,0xffffffff);
            uStack_24 = CONCAT31(uStack_24._1_3_,0xe);
            if (0xf < uStack_6c) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_80);
            }
            uStack_6c = 0xf;
            dStack_70 = 0;
            pvStack_80 = (void *)((uint)pvStack_80 & 0xffffff00);
            (**(code **)(*piVar8 + 0x168))();
            (**(code **)(*piVar8 + 300))();
            ppVStack_19c = (VFX_Parameter__vftable_673a20 **)0x0;
            (**(code **)(*piVar8 + 0x170))();
            (**(code **)(*piVar8 + 0xe8))(0);
          }
          else {
            if ((int)this->mbr_0xa8 < 0) {
              (**(code **)(*piVar8 + 0x168))();
            }
            else {
              (**(code **)(*piVar8 + 0x168))();
            }
            (**(code **)(*piVar8 + 0xe8))();
            (**(code **)(*piVar8 + 300))();
            ppVStack_19c = ppVVar17;
            (**(code **)(*piVar8 + 0x170))(this->mbr_0x50);
          }
          (**(code **)(*piVar8 + 0x54))(0);
          dStack_44 = 0xffffffff;
          if ((undefined *)0xf < puVar14) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
        }
        else if (iVar6 == 3) {
          (**(code **)(*piVar8 + 0x130))();
          (**(code **)(*piVar8 + 0x54))();
          ppVStack_19c = (VFX_Parameter__vftable_673a20 **)this->mbr_0x50;
          (**(code **)(*piVar8 + 0x170))();
          if (((int)this->mbr_0xa8 < 0) || ((int)this->mbr_0x158 < 1)) {
LAB_0045131c:
            (**(code **)(*piVar8 + 0x168))(0x40808080);
            (**(code **)(*piVar8 + 0xe8))(1);
          }
          else {
            (**(code **)(*piVar8 + 0x168))(this->mbr_0xac);
            (**(code **)(*piVar8 + 0xe8))(0);
          }
        }
        else if (iVar6 == 4) {
          (**(code **)(*piVar8 + 0x130))();
          (**(code **)(*piVar8 + 0x54))();
          ppVStack_19c = (VFX_Parameter__vftable_673a20 **)this->mbr_0x50;
          (**(code **)(*piVar8 + 0x170))();
          if (((int)this->mbr_0xa8 < 0) || (3 < (int)this->mbr_0x158)) goto LAB_0045131c;
          (**(code **)(*piVar8 + 0x168))(this->mbr_0xac);
          (**(code **)(*piVar8 + 0xe8))(0);
        }
        else if ((iVar6 == 5) || ((int)this->mbr_0xb4 < 1)) {
LAB_004515b2:
          (**(code **)(*piVar8 + 0x54))();
        }
        else if (iVar6 == 6) {
          (**(code **)(*piVar8 + 0x130))();
          (**(code **)(*piVar8 + 0xe8))();
          (**(code **)(*piVar8 + 0x54))();
          ppVStack_19c = ppVVar17;
          (**(code **)(*piVar8 + 0x170))(this->mbr_0x50);
          (**(code **)(*piVar8 + 0x168))(this->mbr_0xac);
        }
        else {
          if ((iVar6 < 7) || ((int)(this->mbr_0xb4 + 7) <= iVar6)) goto LAB_004515b2;
          pVStack_138 = *(VFX_Parameter__vftable_673a20 **)((this->mbr_0x170 - 0x1c) + iVar6 * 4);
          (**(code **)(*piVar8 + 0xe8))();
          (**(code **)(*piVar8 + 0x54))();
          local_114 = 0xf;
          local_118 = (int *)0x0;
          local_128 = (VFX_Parameter__vftable_673a20 *)((uint)local_128 & 0xffffff00);
          uStack_2c = 0x10;
          FUN_0056c280((int)local_140[2].virt_meth_0x4ff950_0,(_String_base *)&local_12c);
          if (local_118 == (int *)0x0) {
            ppVStack_19c = (VFX_Parameter__vftable_673a20 **)0x45149b;
            FUN_004a1a30((cls_0x50db20 *)&local_12c,(byte *)"<unnamed map %d>",(char)iVar6 + -6);
          }
          if (this->mbr_0xa8 == iVar6 - 7U) {
            ppVStack_19c = (VFX_Parameter__vftable_673a20 **)0x4514c1;
            pcVar11 = FUN_00425d70((cls_0x50db20 *)&dStack_54,(_String_base *)&DAT_006f34fc,
                                   (int)&local_12c);
            uStack_2c._0_1_ = 0x11;
            ppVStack_19c = (VFX_Parameter__vftable_673a20 **)0x4514d9;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&local_12c,(_String_base *)pcVar11,0,0xffffffff);
            uStack_2c = CONCAT31(uStack_2c._1_3_,0x10);
            if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_50);
            }
            uStack_3c = 0xf;
            dStack_40 = 0;
            pvStack_50 = (void *)((uint)pvStack_50 & 0xffffff00);
            (**(code **)(*piVar8 + 0x168))();
            (**(code **)(*piVar8 + 300))();
            dVar7 = 0;
            ppVStack_19c = ppVVar15;
          }
          else {
            (**(code **)(*piVar8 + 0x168))();
            (**(code **)(*piVar8 + 300))();
            dVar7 = this->mbr_0x50;
            ppVStack_19c = ppVVar15;
          }
          (**(code **)(*piVar8 + 0x170))(dVar7,puVar16);
          dStack_44 = 0xffffffff;
          if ((void *)0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
            _free(local_140);
          }
          local_12c = (void *)0xf;
          local_130 = (VFX_Parameter__vftable_673a20 *)0x0;
          local_140 = (VFX_Parameter__vftable_673a20 *)((uint)local_140 & 0xffffff00);
        }
        puVar14 = &stack0xfffffe70;
        (**(code **)(*piVar8 + 0x14))(&local_128,puVar14);
        (**(code **)(*piVar8 + 0x174))
                  (&stack0xfffffe9c,&stack0xfffffe6c,&ppVStack_19c,&stack0xfffffe70);
        iVar6 = *piVar8;
        iVar10 = (**(code **)(iVar6 + 0x164))(puVar14);
        (**(code **)(iVar6 + 0x10))(iVar10 + (int)ppiVar13);
      }
      local_128 = (VFX_Parameter__vftable_673a20 *)((int)&local_128->virt_meth_0x4ff950_0 + 1);
    } while ((int)local_128 < 0xe);
  }
  else {
    local_12c = (void *)0xf;
    local_130 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_140 = (VFX_Parameter__vftable_673a20 *)((uint)local_140 & 0xffffff00);
    pcVar12 = "lblAddNote";
    do {
      pcVar9 = pcVar12;
      pcVar12 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_144,"lblAddNote",(uint)(pcVar9 + -0x65bcc4));
    local_4 = 1;
    piVar8 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)&local_144);
    local_4 = 0xffffffff;
    if ((void *)0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
      _free(local_140);
    }
    local_12c = (void *)0xf;
    local_130 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_140 = (VFX_Parameter__vftable_673a20 *)((uint)local_140 & 0xffffff00);
    if (this->mbr_0xbc == 1) {
      (**(code **)(*piVar8 + 0x168))();
      (**(code **)(*piVar8 + 0xe8))();
    }
    else {
      if ((int)this->mbr_0xa8 < 0) {
        (**(code **)(*piVar8 + 0x168))();
      }
      else {
        (**(code **)(*piVar8 + 0x168))();
      }
      (**(code **)(*piVar8 + 0xe8))();
    }
    dStack_134 = 0xf;
    pVStack_138 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_148 = (VFX_Parameter__vftable_673a20 *)((uint)local_148 & 0xffffff00);
    pcVar12 = "lblEditNote";
    do {
      pcVar9 = pcVar12;
      pcVar12 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_14c,"lblEditNote",(uint)(pcVar9 + -0x65bcb8));
    pvStack_c = (void *)0x2;
    piVar8 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)&local_14c);
    pvStack_c = (void *)0xffffffff;
    if (0xf < dStack_134) {
                    /* WARNING: Subroutine does not return */
      _free(local_148);
    }
    dStack_134 = 0xf;
    pVStack_138 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_148 = (VFX_Parameter__vftable_673a20 *)((uint)local_148 & 0xffffff00);
    if (this->mbr_0xbc == 2) {
      (**(code **)(*piVar8 + 0x168))();
    }
    else if ((int)this->mbr_0xa8 < 0) {
      (**(code **)(*piVar8 + 0x168))();
    }
    else {
      (**(code **)(*piVar8 + 0x168))();
    }
    (**(code **)(*piVar8 + 0xe8))();
    dStack_13c = 0xf;
    local_140 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_150.mbr_0x0 = local_150.mbr_0x0 & 0xffffff00;
    pcVar12 = "lblDeleteNote";
    do {
      pcVar9 = pcVar12;
      pcVar12 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_154,"lblDeleteNote",(uint)(pcVar9 + -0x65bca8));
    dStack_14 = 3;
    piVar8 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_154);
    dStack_14 = 0xffffffff;
    if (0xf < dStack_13c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_150.mbr_0x0);
    }
    dStack_13c = 0xf;
    local_140 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_150.mbr_0x0 = local_150.mbr_0x0 & 0xffffff00;
    if (this->mbr_0xbc == 3) {
      (**(code **)(*piVar8 + 0x168))();
    }
    else if ((int)this->mbr_0xa8 < 0) {
      (**(code **)(*piVar8 + 0x168))();
    }
    else {
      (**(code **)(*piVar8 + 0x168))();
    }
    (**(code **)(*piVar8 + 0xe8))();
    local_144 = 0xf;
    local_148 = (VFX_Parameter__vftable_673a20 *)0x0;
    pcVar12 = "lblZoomIn";
    do {
      pcVar9 = pcVar12;
      pcVar12 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xfffffea4,"lblZoomIn",(uint)(pcVar9 + -0x65bc9c));
    dStack_1c = 4;
    piVar8 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)&stack0xfffffea4);
    dStack_1c = 0xffffffff;
    if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
      _free((void *)(unaff_EBX & 0xffffff00));
    }
    local_144 = 0xf;
    local_148 = (VFX_Parameter__vftable_673a20 *)0x0;
    if (((int)this->mbr_0xa8 < 0) || ((int)this->mbr_0x158 < 1)) {
      (**(code **)(*piVar8 + 0x168))();
    }
    else {
      (**(code **)(*piVar8 + 0x168))();
    }
    (**(code **)(*piVar8 + 0xe8))();
    local_14c = 0xf;
    local_150.mbr_0x0 = 0;
    pcVar12 = "lblZoomOut";
    do {
      pcVar9 = pcVar12;
      pcVar12 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xfffffe9c,"lblZoomOut",(uint)(pcVar9 + -0x65bc90));
    uStack_24 = 5;
    piVar8 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)&stack0xfffffe9c);
    uStack_24 = 0xffffffff;
    if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
      _free((VFX_Parameter__vftable_673a20 *)(unaff_ESI & 0xffffff00));
    }
    local_14c = 0xf;
    local_150.mbr_0x0 = 0;
    if (((int)this->mbr_0xa8 < 0) || (3 < (int)this->mbr_0x158)) {
      (**(code **)(*piVar8 + 0x168))();
      (**(code **)(*piVar8 + 0xe8))();
    }
    else {
      (**(code **)(*piVar8 + 0x168))();
      (**(code **)(*piVar8 + 0xe8))();
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameActionEquip::meth_0x451650(GameActionEquip *this)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  GameActionEquip *this_00;
  char cVar7;
  undefined local_60 [4];
  void *local_5c;
  dword local_4c;
  uint local_48;
  undefined local_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  undefined local_28 [4];
  void *local_24;
  void *pvStack_1c;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f9c8;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  *(bool *)&this->mbr_0xa0 = *(char *)&this->mbr_0xa0 == '\0';
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  pcVar1 = "winMaps1a";
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_60,"winMaps1a",(uint)(pcVar4 + -0x65bd2c));
  local_4 = 0;
  piVar2 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)local_60);
  local_4 = 0xffffffff;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar1 = "winMaps1b";
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"winMaps1b",(uint)(pcVar4 + -0x65bd20));
  local_4 = 1;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)local_44);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_10 = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "lblMapMode";
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"lblMapMode",(uint)(pcVar4 + -0x65bcd0));
  local_4 = 2;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                             (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                             (int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  (**(code **)(*piVar2 + 0x54))(*(undefined *)&this->mbr_0xa0);
  (**(code **)(*piVar3 + 0x54))(*(char *)&this->mbr_0xa0 == '\0');
  (**(code **)(*(int *)this->mbr_0xc4 + 0x54))(*(char *)&this->mbr_0xa0 == '\0');
  if (*(char *)&this->mbr_0xa0 == '\0') {
    (**(code **)(*piVar5 + 0x130))(0x1a0);
  }
  else {
    (**(code **)(*piVar5 + 0x130))(0x19f);
  }
  meth_0x450230(this);
  meth_0x44a730(this);
  meth_0x44d460(this,0);
  meth_0x44cea0(this);
  cVar7 = *(char *)&this->mbr_0xa0;
  iVar6 = meth_0x44ab40(this);
  meth_0x44dec0(this_00,'\x01' - (iVar6 != 0),cVar7);
  ExceptionList = pvStack_1c;
  return;
}



void __thiscall GameActionEquip::meth_0x451b80(GameActionEquip *this,int *param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  char *pcVar3;
  dword dVar4;
  int *piVar5;
  dword extraout_EDX;
  int unaff_ESI;
  int unaff_EDI;
  dword dVar6;
  ulonglong uVar7;
  char *pcVar8;
  dword dStack_74;
  undefined auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 auStack_68 [5];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined auStack_44 [44];
  int iStack_18;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  piVar5 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062f9f0;
  local_c = ExceptionList;
  if (param_1[0x346] != 1) {
    return;
  }
  ExceptionList = &local_c;
  iVar1 = GUI::Button::meth_0x4a6d70((Button *)param_1);
  if ((char)iVar1 == '\0') {
    ExceptionList = local_c;
    return;
  }
  if (param_2 == 0) {
    iVar1 = (**(code **)(*piVar5 + 300))();
    if (iVar1 != 2) {
      ExceptionList = local_c;
      return;
    }
    DVar2 = timeGetTime();
    if (this->mbr_0x1bc == 0) {
      ExceptionList = local_c;
      return;
    }
    if (DVar2 <= this->mbr_0x1c4 + this->mbr_0x1bc) {
      ExceptionList = local_c;
      return;
    }
    if (this->mbr_0x1c0 == 0) {
      ExceptionList = local_c;
      return;
    }
    if (DVar2 <= this->mbr_0x1c8 + this->mbr_0x1c0) {
      ExceptionList = local_c;
      return;
    }
  }
  else {
    if ((param_2 != 4) && (param_2 != 7)) {
      ExceptionList = local_c;
      return;
    }
    DVar2 = timeGetTime();
    this->mbr_0x1bc = DVar2;
  }
  this->mbr_0x1c0 = DVar2;
  dVar6 = this->mbr_0x4c;
  if (dVar6 == 2) {
    pcVar8 = "btnUp1";
    pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
    iVar1 = __stricmp(pcVar3,pcVar8);
    if (iVar1 == 0) {
      if ((int)this->mbr_0x84 < 1) {
        ExceptionList = local_c;
        return;
      }
      dVar6 = this->mbr_0x84 - 1;
      this->mbr_0x84 = dVar6;
      dVar4 = meth_0x44a6c0(this);
      if (dVar4 == dVar6 || (int)(dVar4 - dVar6) < 0) {
        do {
          dVar6 = dVar6 - 1;
        } while (dVar4 == dVar6 || (int)(dVar4 - dVar6) < 0);
        this->mbr_0x84 = dVar6;
      }
      meth_0x44be60(this);
    }
    else {
      pcVar8 = "btnDown1";
      pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
      iVar1 = __stricmp(pcVar3,pcVar8);
      if (iVar1 == 0) {
        iVar1 = meth_0x44a6c0(this);
        if (iVar1 < 0xf) {
          ExceptionList = local_c;
          return;
        }
        if (iVar1 + -0xe <= (int)this->mbr_0x84) {
          ExceptionList = local_c;
          return;
        }
        this->mbr_0x84 = this->mbr_0x84 + 1;
        meth_0x44be60(this);
      }
      else {
        pcVar8 = "btnUp2";
        pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
        iVar1 = __stricmp(pcVar3,pcVar8);
        if (iVar1 == 0) {
          cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_44,"lblTasks2");
          uStack_4 = 0;
          piVar5 = (int *)CLoadMapInterface::meth_0x495740
                                    ((CLoadMapInterface *)
                                     ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                                     (int)((this->ActionEquip).Action.vftptr_0x0)->
                                          virt_meth_0x6162e5_4),(int)auStack_44);
          uStack_4 = 0xffffffff;
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_44);
          (**(code **)(*piVar5 + 0x19c))(auStack_68,&param_1);
          if ((int)param_1 < 1) {
            ExceptionList = local_c;
            return;
          }
          cls_0x4b28a0::meth_0x4b28c0
                    ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&uStack_4c,&uStack_6c);
          param_2 = (**(code **)(*piVar5 + 0x154))();
          uVar7 = FUN_00616e24();
          param_1 = (int *)((int)param_1 - (int)uVar7);
          if ((int)param_1 < 0) {
            param_1 = (int *)0x0;
          }
          (**(code **)(*piVar5 + 0x198))(auStack_68[0],param_1);
          this->mbr_0x88 = (dword)param_1;
        }
        else {
          pcVar8 = "btnDown2";
          pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
          iVar1 = __stricmp(pcVar3,pcVar8);
          if (iVar1 != 0) {
            ExceptionList = local_c;
            return;
          }
          cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_44 + 0x1c),"lblTasks2");
          uStack_4 = 1;
          piVar5 = (int *)CLoadMapInterface::meth_0x495740
                                    ((CLoadMapInterface *)
                                     ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                                     (int)((this->ActionEquip).Action.vftptr_0x0)->
                                          virt_meth_0x6162e5_4),(int)(auStack_44 + 0x1c));
          uStack_4 = 0xffffffff;
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_44 + 0x1c));
          (**(code **)(*piVar5 + 0x19c))(&uStack_50);
          (**(code **)(*piVar5 + 0x14))(&stack0xffffff88,&stack0x00000000);
          (**(code **)(*piVar5 + 0x174))(auStack_70,&dStack_74,auStack_68,&uStack_6c);
          iStack_18 = iStack_18 - (unaff_ESI + unaff_EDI);
          if (iStack_18 < 0) {
            iStack_18 = 0;
          }
          iVar1 = (**(code **)(*piVar5 + 0x160))();
          iVar1 = iVar1 - param_2;
          if (iVar1 <= (int)dStack_74) {
            ExceptionList = local_c;
            return;
          }
          cls_0x4b28a0::meth_0x4b28c0
                    ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&uStack_48,&uStack_54);
          param_1 = (int *)(**(code **)(*piVar5 + 0x154))();
          uVar7 = FUN_00616e24();
          dStack_74 = dStack_74 + (int)uVar7;
          if (iVar1 <= (int)dStack_74) {
            dStack_74 = iVar1 - 1;
          }
          (**(code **)(*piVar5 + 0x198))(uStack_50,dStack_74);
          this->mbr_0x88 = dStack_74;
        }
      }
    }
  }
  else if (dVar6 == 3) {
    pcVar8 = "btnUp1";
    pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
    iVar1 = __stricmp(pcVar3,pcVar8);
    if (iVar1 == 0) {
      if (*(char *)&this->mbr_0xa0 != '\0') {
LAB_00451d30:
        this->mbr_0xd0 = this->mbr_0xd0 - 8;
        meth_0x44d460(this,1);
        ExceptionList = local_c;
        return;
      }
      if ((int)this->mbr_0xb0 < 1) {
        ExceptionList = local_c;
        return;
      }
      this->mbr_0xb0 = this->mbr_0xb0 - 1;
      dVar4 = meth_0x44a420(this);
      dVar6 = extraout_EDX;
      if (dVar4 == extraout_EDX || (int)(dVar4 - extraout_EDX) < 0) {
        do {
          dVar6 = dVar6 - 1;
        } while (dVar4 == dVar6 || (int)(dVar4 - dVar6) < 0);
        this->mbr_0xb0 = dVar6;
      }
      meth_0x450230(this);
    }
    else {
      pcVar8 = "btnDown1";
      pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
      iVar1 = __stricmp(pcVar3,pcVar8);
      if (iVar1 != 0) {
        pcVar8 = "btnUp2";
        pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
        iVar1 = __stricmp(pcVar3,pcVar8);
        if (iVar1 != 0) {
          pcVar8 = "btnDown2";
          pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
          iVar1 = __stricmp(pcVar3,pcVar8);
          if (iVar1 == 0) {
            this->mbr_0xd0 = this->mbr_0xd0 + 8;
            meth_0x44d460(this,1);
            ExceptionList = local_c;
            return;
          }
          pcVar8 = "btnLeft";
          pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
          iVar1 = __stricmp(pcVar3,pcVar8);
          if (iVar1 != 0) {
            pcVar8 = "btnRight";
            pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
            iVar1 = __stricmp(pcVar3,pcVar8);
            if (iVar1 != 0) {
              ExceptionList = local_c;
              return;
            }
            this->mbr_0xcc = this->mbr_0xcc + 8;
            meth_0x44d460(this,1);
            ExceptionList = local_c;
            return;
          }
          this->mbr_0xcc = this->mbr_0xcc - 8;
          meth_0x44d460(this,1);
          ExceptionList = local_c;
          return;
        }
        goto LAB_00451d30;
      }
      if (*(char *)&this->mbr_0xa0 != '\0') {
        this->mbr_0xd0 = this->mbr_0xd0 + 8;
        meth_0x44d460(this,1);
        ExceptionList = local_c;
        return;
      }
      iVar1 = meth_0x44a420(this);
      if (iVar1 < 0xf) {
        ExceptionList = local_c;
        return;
      }
      if (iVar1 + -0xe <= (int)this->mbr_0xb0) {
        ExceptionList = local_c;
        return;
      }
      this->mbr_0xb0 = this->mbr_0xb0 + 1;
      meth_0x450230(this);
    }
  }
  else {
    if (dVar6 != 4) {
      ExceptionList = local_c;
      return;
    }
    pcVar8 = "btnUp1";
    pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
    iVar1 = __stricmp(pcVar3,pcVar8);
    if (iVar1 == 0) {
      if ((int)this->mbr_0x1b0 < 1) {
        ExceptionList = local_c;
        return;
      }
      dVar6 = this->mbr_0x1b0 - 1;
      this->mbr_0x1b0 = dVar6;
      dVar4 = meth_0x44a440(this);
      if (dVar4 == dVar6 || (int)(dVar4 - dVar6) < 0) {
        do {
          dVar6 = dVar6 - 1;
        } while (dVar4 == dVar6 || (int)(dVar4 - dVar6) < 0);
        this->mbr_0x1b0 = dVar6;
      }
      meth_0x44c790(this);
    }
    else {
      pcVar8 = "btnDown1";
      pcVar3 = (char *)(**(code **)(*piVar5 + 0x50))();
      iVar1 = __stricmp(pcVar3,pcVar8);
      if (iVar1 != 0) {
        ExceptionList = local_c;
        return;
      }
      iVar1 = meth_0x44a440(this);
      if (iVar1 < 0xf) {
        ExceptionList = local_c;
        return;
      }
      if (iVar1 + -0xe <= (int)this->mbr_0x1b0) {
        ExceptionList = local_c;
        return;
      }
      this->mbr_0x1b0 = this->mbr_0x1b0 + 1;
      meth_0x44c790(this);
    }
  }
  meth_0x44cea0(this);
  ExceptionList = local_c;
  return;
}



void __thiscall GameActionEquip::meth_0x452240(GameActionEquip *this,int param_1)

{
  AreaMapNote *pAVar1;
  void *this_00;
  cls_0x41f2b0 *this_01;
  int iVar2;
  dword dVar3;
  int iVar4;
  uint unaff_retaddr;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined auStack_48 [56];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062fa10;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  if ((this->mbr_0xbc == 1) &&
     (pAVar1 = (AreaMapNote *)this->mbr_0xe4, ExceptionList = &local_c, -1 < (int)pAVar1)) {
    ExceptionList = &local_c;
    this_00 = (void *)meth_0x44ab40(this);
    if (this_00 != (void *)0x0) {
      FUN_0057e3f0(this_00,pAVar1);
    }
    this->mbr_0xe4 = 0xffffffff;
  }
  this->mbr_0xbc = param_1;
  if (param_1 == 1) {
    this_01 = (cls_0x41f2b0 *)meth_0x44ab40(this);
    if (this_01 == (cls_0x41f2b0 *)0x0) goto LAB_00452460;
    AreaMapWindow::meth_0x41f480((AreaMapWindow *)this->mbr_0xc4,'\0');
    AreaMapWindow::meth_0x41f480((AreaMapWindow *)this->mbr_0xc8,'\0');
    AreaMapWindow::meth_0x41f4d0((AreaMapWindow *)this->mbr_0xc4,'\0');
    AreaMapWindow::meth_0x41f4d0((AreaMapWindow *)this->mbr_0xc8,'\0');
    iVar2 = cls_0x44ad50::meth_0x44ad50((cls_0x44ad50 *)this->mbr_0xc0,this->mbr_0x154);
    if ((iVar2 != 0) && (iVar2 = (**(code **)(*DAT_00707ce4 + 0xd8))(iVar2), iVar2 != 0)) {
      if (*(int *)(iVar2 + 0x28) < 1) {
        iVar4 = 0;
        iVar2 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar2 + 0x24) + 0x1c);
        iVar2 = *(int *)(*(int *)(iVar2 + 0x24) + 0x20);
      }
      cls_0x44ad50::meth_0x44b2a0((cls_0x44ad50 *)this->mbr_0xc0,auStack_48 + 0x1c);
      uStack_4 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_48,"");
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      dVar3 = cls_0x41f2b0::meth_0x57fcf0
                        (this_01,(_String_base *)(auStack_48 + 0x1c),iVar4 / 2,iVar2 / 2,iVar4,iVar2
                         ,(_String_base *)auStack_48,&uStack_54,0);
      this->mbr_0xe4 = dVar3;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_48);
      iVar2 = cls_0x41f2b0::meth_0x41f2b0(this_01,this->mbr_0xe4);
      if (iVar2 != 0) {
        *(undefined *)(iVar2 + 0x5d) = 1;
      }
      uStack_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_48 + 0x1c));
    }
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    AreaMapWindow::meth_0x41f480((AreaMapWindow *)this->mbr_0xc4,'\x01');
    AreaMapWindow::meth_0x41f480((AreaMapWindow *)this->mbr_0xc8,'\x01');
    AreaMapWindow::meth_0x41f4d0((AreaMapWindow *)this->mbr_0xc4,'\0');
    AreaMapWindow::meth_0x41f4d0((AreaMapWindow *)this->mbr_0xc8,'\0');
  }
  else {
    AreaMapWindow::meth_0x41f480((AreaMapWindow *)this->mbr_0xc4,'\x01');
    AreaMapWindow::meth_0x41f480((AreaMapWindow *)this->mbr_0xc8,'\x01');
    AreaMapWindow::meth_0x41f4d0((AreaMapWindow *)this->mbr_0xc4,'\x01');
    AreaMapWindow::meth_0x41f4d0((AreaMapWindow *)this->mbr_0xc8,'\x01');
  }
  meth_0x450230(this);
LAB_00452460:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameActionEquip::meth_0x452490(GameActionEquip *this,int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1;
  bVar2 = this->mbr_0xbc != param_1;
  param_1 = 0;
  if (bVar2) {
    param_1 = iVar1;
  }
  meth_0x452240(this,param_1);
  return;
}



char __thiscall
GameActionEquip::meth_0x4524b0(GameActionEquip *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  if (this->mbr_0xbc != 1) {
    cVar4 = '\0';
    if (((int *)this->mbr_0xc8 != (int *)0x0) &&
       (cVar2 = (**(code **)(*(int *)this->mbr_0xc8 + 0x18))(param_1,param_2), cVar2 != '\0')) {
      uVar3 = meth_0x450080(this,this->mbr_0xc8);
      cVar4 = (char)uVar3;
      if (cVar4 != '\0') {
        return cVar4;
      }
    }
    if ((((this->mbr_0xbc != 1) && (*(char *)&this->mbr_0xa0 != '\0')) &&
        ((int *)this->mbr_0xc4 != (int *)0x0)) &&
       (cVar2 = (**(code **)(*(int *)this->mbr_0xc4 + 0x18))(param_1,param_2), cVar2 != '\0')) {
      uVar3 = meth_0x450080(this,this->mbr_0xc4);
      cVar4 = (char)uVar3;
      if (cVar4 != '\0') {
        return cVar4;
      }
    }
  }
  piVar1 = (int *)this->mbr_0xc0;
  if (piVar1 != (int *)0x0) {
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
  }
  return cVar4;
}



void __thiscall GameActionEquip::meth_0x452560(GameActionEquip *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  dword dVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  ulonglong uVar4;
  char unaff_retaddr;
  undefined *puVar5;
  undefined local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined auStack_28 [12];
  int local_1c;
  int local_18;
  int iStack_14;
  int iStack_4;
  
  if (((-1 < param_1) && (param_1 < 5)) && (param_1 != this->mbr_0x158)) {
    local_2c = *(undefined4 *)(&DAT_0065bb5c + this->mbr_0x158 * 4);
    piVar1 = (int *)this->mbr_0xc8;
    local_30 = *(undefined4 *)(&DAT_0065bb5c + param_1 * 4);
    this->mbr_0x158 = param_1;
    local_18 = piVar1[0x34d];
    local_1c = piVar1[0x34c];
    puVar5 = local_34;
    (**(code **)(*piVar1 + 0x14))(puVar5,&param_1);
    cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_2c,&local_30);
    uVar4 = FUN_00616e24();
    uVar3 = (undefined4)uVar4;
    uVar4 = FUN_00616e24();
    iStack_4 = (int)uVar4;
    if (*(char *)&this->mbr_0xa0 != '\0') {
      (**(code **)(*(int *)this->mbr_0xc4 + 0x14))(&local_1c,auStack_28,puVar5,uVar3);
      uVar4 = FUN_00616e24();
      iStack_4 = iStack_4 + (int)uVar4;
    }
    dVar2 = this->mbr_0xc4;
    *(undefined4 *)(dVar2 + 0xf84) = unaff_ESI;
    *(undefined *)(dVar2 + 0xf0d) = 1;
    dVar2 = this->mbr_0xc8;
    *(undefined4 *)(dVar2 + 0xf84) = unaff_ESI;
    *(undefined *)(dVar2 + 0xf0d) = 1;
    if (unaff_retaddr == '\0') {
      uVar4 = FUN_00616e24();
      param_1 = (int)uVar4;
      uVar4 = FUN_00616e24();
      param_2 = (undefined4)uVar4;
    }
    FUN_00616e24();
    uVar4 = FUN_00616e24();
    this->mbr_0xcc = (dword)uVar4;
    FUN_00616e24();
    uVar4 = FUN_00616e24();
    this->mbr_0xd0 = (dword)uVar4;
    meth_0x44d460(this,1);
    meth_0x450230(this);
    cls_0x4b28a0::meth_0x4b28e0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_18);
    meth_0x44ae30(this,local_18,iStack_14);
    if ((AreaMapWindow *)this->mbr_0xc8 != (AreaMapWindow *)0x0) {
      AreaMapWindow::meth_0x4235a0((AreaMapWindow *)this->mbr_0xc8);
      AreaMapWindow::meth_0x41f080((AreaMapWindow *)this->mbr_0xc8,(char)local_18,iStack_14,puVar5);
      AreaMapWindow::meth_0x41ef80((AreaMapWindow *)this->mbr_0xc8,(char)local_18,iStack_14,puVar5);
    }
    if ((*(char *)&this->mbr_0xa0 != '\0') &&
       ((AreaMapWindow *)this->mbr_0xc4 != (AreaMapWindow *)0x0)) {
      AreaMapWindow::meth_0x4235a0((AreaMapWindow *)this->mbr_0xc4);
      AreaMapWindow::meth_0x41f080((AreaMapWindow *)this->mbr_0xc4,(char)local_18,iStack_14,puVar5);
      AreaMapWindow::meth_0x41ef80((AreaMapWindow *)this->mbr_0xc4,(char)local_18,iStack_14,puVar5);
    }
    meth_0x4524b0(this,local_18,iStack_14);
  }
  return;
}



void __thiscall GameActionEquip::meth_0x452910(GameActionEquip *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  dword dVar4;
  char *pcVar5;
  undefined auStack_e0 [32];
  void *pvStack_c0;
  dword dStack_b0;
  uint uStack_ac;
  undefined auStack_a8 [32];
  void *pvStack_88;
  dword dStack_78;
  uint uStack_74;
  undefined auStack_70 [56];
  cls_0x4d8d70 cStack_38;
  
  switch(this->mbr_0x4c) {
  case 1:
    pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_a8 + 0x1c),pcVar3);
    iVar2 = FUN_0044a840();
    if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_88);
    }
    uStack_74 = 0xf;
    dStack_78 = 0;
    pvStack_88 = (void *)((uint)pvStack_88 & 0xffffff00);
    if (iVar2 != -1) {
      puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x50))();
      FUN_00401c70(&this->mbr_0x54,puVar1);
      meth_0x44b960(this);
      return;
    }
    pcVar5 = "lblRest";
    pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
    iVar2 = __stricmp(pcVar3,pcVar5);
    if (iVar2 == 0) {
      meth_0x44aac0(this);
      return;
    }
    break;
  case 2:
    pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_a8,pcVar3);
    dVar4 = FUN_0044a880(this->mbr_0x84);
    if (0xf < (uint)auStack_a8._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_a8._4_4_);
    }
    auStack_a8._24_4_ = 0xf;
    auStack_a8._20_4_ = 0;
    auStack_a8._4_4_ = auStack_a8._4_4_ & 0xffffff00;
    if ((-1 < (int)dVar4) && (this->mbr_0x78 != dVar4)) {
      this->mbr_0x78 = dVar4;
      this->mbr_0x7c = 0xffffffff;
      this->mbr_0x88 = 0;
      meth_0x44be60(this);
      meth_0x44eb80(this);
      meth_0x44cea0(this);
      return;
    }
    pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_70,pcVar3);
    dVar4 = FUN_0044a8c0(this->mbr_0x84,this->mbr_0x9c);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_70);
    if (-1 < (int)dVar4) {
      this->mbr_0x7c = dVar4;
      this->mbr_0x88 = 0;
      meth_0x44be60(this);
      meth_0x44eb80(this);
      return;
    }
    break;
  case 3:
    pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_e0 + 0x1c),pcVar3);
    dVar4 = FUN_0044a940(this->mbr_0xb0);
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c0);
    }
    uStack_ac = 0xf;
    dStack_b0 = 0;
    pvStack_c0 = (void *)((uint)pvStack_c0 & 0xffffff00);
    if ((-1 < (int)dVar4) && (this->mbr_0xa4 != dVar4)) {
      this->mbr_0xa4 = dVar4;
      this->mbr_0xa8 = 0xffffffff;
      meth_0x452240(this,0);
      meth_0x450230(this);
      meth_0x44cea0(this);
      meth_0x44ef20(this);
      return;
    }
    pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
    cls_0x4d8d70::meth_0x401d20(&cStack_38,pcVar3);
    dVar4 = FUN_0044a980(this->mbr_0xb0);
    cls_0x4d8d70::meth_0x4b2dd0(&cStack_38);
    if ((int)dVar4 < 0) {
      pcVar5 = "lblMapMode";
      pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
      iVar2 = __stricmp(pcVar3,pcVar5);
      if (iVar2 == 0) {
        meth_0x451650(this);
        return;
      }
      pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_70 + 0x1c),pcVar3);
      iVar2 = FUN_0044a9e0(this->mbr_0xb0);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_70 + 0x1c));
      if ((iVar2 == 0) || ((int)this->mbr_0xa8 < 0)) {
        pcVar5 = "lblAddNote";
        pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
        iVar2 = __stricmp(pcVar3,pcVar5);
        if (iVar2 == 0) {
          meth_0x452490(this,1);
          return;
        }
        pcVar5 = "lblEditNote";
        pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
        iVar2 = __stricmp(pcVar3,pcVar5);
        if (iVar2 == 0) {
          meth_0x452490(this,2);
          return;
        }
        pcVar5 = "lblDeleteNote";
        pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
        iVar2 = __stricmp(pcVar3,pcVar5);
        if (iVar2 == 0) {
          meth_0x452490(this,3);
          return;
        }
        pcVar5 = "lblZoomIn";
        pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
        iVar2 = __stricmp(pcVar3,pcVar5);
        if (iVar2 == 0) {
          meth_0x452560(this,this->mbr_0x158 - 1,0);
          return;
        }
        pcVar5 = "lblZoomOut";
        pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
        iVar2 = __stricmp(pcVar3,pcVar5);
        if (iVar2 == 0) goto switchD_00452c69_caseD_5;
      }
      else {
        switch(iVar2) {
        case 1:
        case 2:
        case 3:
          meth_0x452490(this,iVar2);
          return;
        case 4:
          meth_0x452560(this,this->mbr_0x158 - 1,0);
          return;
        case 5:
switchD_00452c69_caseD_5:
          meth_0x452560(this,this->mbr_0x158 + 1,0);
          return;
        }
      }
    }
    else if (this->mbr_0xa8 != dVar4) {
      meth_0x452240(this,0);
      this->mbr_0xa8 = dVar4;
      meth_0x450230(this);
      meth_0x44ef20(this);
      return;
    }
    break;
  case 4:
    pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_e0,pcVar3);
    dVar4 = FUN_0044aa30(this->mbr_0x1b0);
    if (0xf < (uint)auStack_e0._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_e0._4_4_);
    }
    auStack_e0._24_4_ = 0xf;
    auStack_e0._20_4_ = 0;
    auStack_e0._4_4_ = auStack_e0._4_4_ & 0xffffff00;
    if (((int)dVar4 < 0) || (this->mbr_0x1a4 == dVar4)) {
      pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&cStack_38.mbr_0x1c,pcVar3);
      dVar4 = FUN_0044aa70(this->mbr_0x1b0);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&cStack_38.mbr_0x1c);
      if ((int)dVar4 < 0) {
        return;
      }
      this->mbr_0x1a8 = dVar4;
    }
    else {
      this->mbr_0x1a4 = dVar4;
      this->mbr_0x1a8 = 0xffffffff;
    }
    meth_0x44c790(this);
    meth_0x44ee00(this);
    meth_0x44cea0(this);
  }
  return;
}



void __thiscall GameActionEquip::meth_0x452eb0(GameActionEquip *this,int *param_1)

{
  dword dVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  void *this_00;
  Gregorian *this_01;
  int *piVar6;
  cls_0x41f2b0 *this_02;
  undefined4 uVar7;
  int unaff_EBX;
  int unaff_EBP;
  float unaff_ESI;
  float unaff_EDI;
  ulonglong uVar8;
  ulonglong uVar9;
  int unaff_retaddr;
  float *pfVar10;
  Map *pMStack_68;
  int iStack_64;
  cls_0x57bc90 *pcStack_60;
  int iStack_5c;
  int iStack_58;
  Map *pMStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  int iStack_48;
  AreaMapNote *pAStack_44;
  GameClient *pGStack_40;
  undefined4 uStack_3c;
  AreaMapNote *local_38;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined auStack_28 [12];
  GameClient *pGStack_1c;
  int iStack_8;
  AreaMapNote *pAStack_4;
  
  piVar4 = param_1;
  pfVar10 = &local_34;
  (**(code **)(*param_1 + 0x48))(pfVar10,&local_38);
  dVar1 = this->mbr_0xbc;
  if (dVar1 == 1) {
    this_02 = (cls_0x41f2b0 *)meth_0x44ab40(this);
    if (this_02 == (cls_0x41f2b0 *)0x0) {
      return;
    }
    piVar6 = (int *)cls_0x41f2b0::meth_0x41f2b0(this_02,this->mbr_0xe4);
    if (piVar6 == (int *)0x0) {
      return;
    }
    uVar7 = AreaMapWindow::meth_0x41dbd0((AreaMapWindow *)piVar4,piVar6,&uStack_4c,(uint *)&param_1)
    ;
    if ((char)uVar7 == '\0') {
      return;
    }
    cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&uStack_50,&pAStack_44);
    pAStack_4 = (AreaMapNote *)((int)param_1 + unaff_retaddr);
    uVar8 = FUN_00616e24();
    uVar7 = (undefined4)uVar8;
    pAStack_4 = (AreaMapNote *)(uStack_4c + iStack_48);
    uVar8 = FUN_00616e24();
    cls_0x44ad50::meth_0x44dcb0((cls_0x44ad50 *)this->mbr_0xc0,(int)uVar8,uVar7);
  }
  else {
    if (dVar1 != 2) {
      if (dVar1 == 3) {
        cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&pAStack_44,&iStack_48)
        ;
        uVar8 = FUN_00616e24();
        uVar9 = FUN_00616e24();
        iVar2 = (int)uVar9;
        pAStack_4 = (AreaMapNote *)0xffffffff;
        iVar5 = FUN_0041e8d0(piVar4,(int)uVar8,iVar2,(int)&pAStack_4);
        this_00 = (void *)meth_0x44ab40(this);
        if (this_00 == (void *)0x0) {
          return;
        }
        if (iVar5 == 0) {
          return;
        }
        if (*(char *)(iVar5 + 0x5c) != '\0') {
          return;
        }
        FUN_0057e3f0(this_00,pAStack_4);
        meth_0x452240(this,0);
        AreaMapWindow::meth_0x4235a0((AreaMapWindow *)piVar4);
        AreaMapWindow::meth_0x41f080((AreaMapWindow *)piVar4,(char)uVar8,iVar2,pfVar10);
        AreaMapWindow::meth_0x41ef80((AreaMapWindow *)piVar4,(char)uVar8,iVar2,pfVar10);
        meth_0x4524b0(this,(int)uVar8,iVar2);
        return;
      }
      if (DAT_0070bd98 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = DAT_0070bd98 + 0xc;
      }
      uVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x60))();
      uStack_4c = uVar3;
      iVar2 = meth_0x44ab40(this);
      if (uVar3 == 0) {
        return;
      }
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(uVar3 + 4) != iVar2) {
        return;
      }
      cls_0x4b28a0::meth_0x4b28c0
                ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(undefined4 *)&stack0xffffff94,
                 (undefined4 *)&stack0xffffff90);
      piVar6 = param_1;
      uVar8 = FUN_00616e24();
      uVar9 = FUN_00616e24();
      param_1 = *(int **)(DAT_0070bd90 + 0x2c);
      pAStack_4 = (AreaMapNote *)0x0;
      iVar2 = AreaMapWindow::meth_0x41e900
                        ((AreaMapWindow *)piVar4,(int)uVar8,(int)uVar9,(int)&pAStack_4);
      iStack_58 = meth_0x44ab40(this);
      pAStack_44 = (AreaMapNote *)param_1[0x38];
      if (((iVar2 != 0) && (iStack_58 != 0)) && (pAStack_44 != pAStack_4)) {
        param_1[0x38] = (int)pAStack_4;
        return;
      }
      iStack_5c = piVar4[0x34c];
      iStack_64 = piVar4[0x34d];
      (**(code **)(*piVar4 + 0x48))(&pcStack_60,&pMStack_68);
      iStack_8 = unaff_retaddr - (int)pMStack_68;
      FUN_0044a4d0(&local_34,(int)piVar4,
                   ((float)iStack_8 * unaff_ESI + (float)iStack_64) *
                   *(float *)(&DAT_0065bb5c + this->mbr_0x158 * 4),
                   ((float)((int)piVar6 - unaff_EBP) * unaff_EDI + (float)unaff_EBX) *
                   *(float *)(&DAT_0065bb5c + this->mbr_0x158 * 4));
      cls_0x57bc90::meth_0x57bdc0
                (pcStack_60,local_34,(char)uStack_30,uStack_2c,&iStack_58,&iStack_5c);
      uVar3 = cls_0x57bc90::meth_0x57bc90(pcStack_60,iStack_58,iStack_5c);
      if ((char)uVar3 == '\0') {
        return;
      }
      piVar4 = Map::GetOctree(pMStack_54);
      (**(code **)(*piVar4 + 0x14))(auStack_28);
      uStack_3c = uStack_30;
      pAStack_44 = local_38;
      pGStack_40 = pGStack_1c;
      iVar2 = (**(code **)(*piVar4 + 0x5c))(&pAStack_44,&pMStack_54,1,0,0);
      if (iVar2 == 1) {
        pMStack_54 = pMStack_68;
      }
      GameClient::meth_0x58a0e0(pGStack_1c,iStack_64,iStack_58,pMStack_54,uStack_50);
      return;
    }
    cls_0x4b28a0::meth_0x4b28c0
              ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(undefined4 *)&stack0xffffff94,&pAStack_4);
    uVar8 = FUN_00616e24();
    uVar9 = FUN_00616e24();
    this_01 = (Gregorian *)
              AreaMapWindow::meth_0x41e820
                        ((AreaMapWindow *)piVar4,(int)uVar8,(int)uVar9,(int)&this->mbr_0xe4);
    if (this_01 == (Gregorian *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)Gregorian::Get_mbr_0x34(this_01);
    }
    this_02 = (cls_0x41f2b0 *)meth_0x44ab40(this);
    if (this_02 == (cls_0x41f2b0 *)0x0) {
      return;
    }
    if (piVar6 == (int *)0x0) {
      return;
    }
    if (*(char *)(piVar6 + 0x17) != '\0') {
      return;
    }
    AreaMapNote::meth_0x57d3a0((AreaMapNote *)&this->mbr_0xe8,(int)piVar6);
    AreaMapIcon::Get_mbrs_0xc_0x10_0x14_0x18
              ((AreaMapIcon *)this_01,&uStack_4c,&param_1,&iStack_48,(undefined4 *)&stack0x00000000)
    ;
    pAStack_44 = (AreaMapNote *)((int)param_1 + unaff_retaddr);
    uVar8 = FUN_00616e24();
    uVar7 = (undefined4)uVar8;
    pAStack_44 = (AreaMapNote *)(uStack_4c + iStack_48);
    uVar8 = FUN_00616e24();
    cls_0x44ad50::meth_0x44dcb0((cls_0x44ad50 *)this->mbr_0xc0,(int)uVar8,uVar7);
  }
  cls_0x44ad50::meth_0x44fc70
            ((cls_0x44ad50 *)this->mbr_0xc0,(int)this,(int)this_02,(int)piVar6,'\0');
  piVar4 = (int *)this->mbr_0xc0;
  if (piVar4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*piVar4 + 4) + (int)piVar4;
  }
  cls_0x4b28a0::meth_0x4b4f00((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,iVar2);
  return;
}



void __thiscall GameActionEquip::meth_0x4533f0(GameActionEquip *this,char param_1,char param_2)

{
  cls_0x41f2b0 *this_00;
  int iVar1;
  AreaMapNote *pAVar2;
  void *this_01;
  undefined4 unaff_ESI;
  bool bVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  pAVar2 = (AreaMapNote *)this->mbr_0xe4;
  if (-1 < (int)pAVar2) {
    bVar3 = true;
    this_00 = (cls_0x41f2b0 *)meth_0x44ab40(this);
    if ((this_00 != (cls_0x41f2b0 *)0x0) &&
       (iVar1 = cls_0x41f2b0::meth_0x41f2b0(this_00,(int)pAVar2), iVar1 != 0)) {
      bVar3 = *(int *)(iVar1 + 0x48) == 0;
    }
    if (param_1 == '\0') {
      if ((bVar3) || (param_2 != '\0')) {
        this_01 = (void *)meth_0x44ab40(this);
        if (this_01 != (void *)0x0) {
          FUN_0057e3f0(this_01,pAVar2);
        }
      }
      else if ((this_00 != (cls_0x41f2b0 *)0x0) &&
              (pAVar2 = (AreaMapNote *)cls_0x41f2b0::meth_0x41f2b0(this_00,(int)pAVar2),
              pAVar2 != (AreaMapNote *)0x0)) {
        AreaMapNote::meth_0x57d3a0(pAVar2,(int)&this->mbr_0xe8);
        this_00->mbr_0x78 = this_00->mbr_0x78 | 2;
      }
    }
  }
  this->mbr_0xe4 = 0xffffffff;
  if (param_1 != '\0') {
    this->mbr_0x154 = *(dword *)(this->mbr_0xc0 + 0x10);
  }
  meth_0x452240(this,0);
  cls_0x4b28a0::meth_0x4b28e0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_10);
  if ((AreaMapWindow *)this->mbr_0xc8 != (AreaMapWindow *)0x0) {
    AreaMapWindow::meth_0x4235a0((AreaMapWindow *)this->mbr_0xc8);
    AreaMapWindow::meth_0x41f080((AreaMapWindow *)this->mbr_0xc8,(char)local_10,uStack_c,unaff_ESI);
    AreaMapWindow::meth_0x41ef80((AreaMapWindow *)this->mbr_0xc8,(char)local_10,uStack_c,unaff_ESI);
  }
  if ((*(char *)&this->mbr_0xa0 != '\0') &&
     ((AreaMapWindow *)this->mbr_0xc4 != (AreaMapWindow *)0x0)) {
    AreaMapWindow::meth_0x4235a0((AreaMapWindow *)this->mbr_0xc4);
    AreaMapWindow::meth_0x41f080((AreaMapWindow *)this->mbr_0xc4,(char)local_10,uStack_c,unaff_ESI);
    AreaMapWindow::meth_0x41ef80((AreaMapWindow *)this->mbr_0xc4,(char)local_10,uStack_c,unaff_ESI);
  }
  meth_0x4524b0(this,local_10,uStack_c);
  return;
}



void __thiscall
GameActionEquip::meth_0x454520
          (GameActionEquip *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int **ppiVar8;
  int **ppiVar9;
  int **ppiVar10;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f538;
  local_c = ExceptionList;
  if (0x9249247 < *(uint *)&(this->ActionEquip).field_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar6 = "map/set<T> too long";
    do {
      pcVar7 = pcVar6;
      pcVar6 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar7 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  uVar2 = *(undefined4 *)&(this->ActionEquip).Action.mbr_0x4;
  ExceptionList = &local_c;
  ppiVar8 = (int **)FUN_00454480(uVar2,param_3,uVar2,param_4,0);
  ppiVar10 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
  *(int *)&(this->ActionEquip).field_0x8 = *(int *)&(this->ActionEquip).field_0x8 + 1;
  if (param_3 == ppiVar10) {
    ppiVar10[1] = (int *)ppiVar8;
    **(int ***)&(this->ActionEquip).Action.mbr_0x4 = (int *)ppiVar8;
    *(int ***)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 8) = ppiVar8;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar8;
    iVar3 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (param_3 == *(int ***)(iVar3 + 8)) {
      *(int ***)(iVar3 + 8) = ppiVar8;
    }
  }
  else {
    *param_3 = (int *)ppiVar8;
    ppiVar10 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
    if (param_3 == (int **)*ppiVar10) {
      *ppiVar10 = (int *)ppiVar8;
    }
  }
  cVar1 = *(char *)(ppiVar8[1] + 10);
  ppiVar10 = ppiVar8;
  while (cVar1 == '\0') {
    ppiVar9 = ppiVar10 + 1;
    ppiVar4 = (int **)*ppiVar9;
    piVar5 = (int *)*ppiVar4[1];
    if (ppiVar4 == (int **)piVar5) {
      piVar5 = (int *)ppiVar4[1][2];
      if (*(char *)(piVar5 + 10) == '\0') {
        *(undefined *)(ppiVar4 + 10) = 1;
        *(undefined *)(piVar5 + 10) = 1;
        *(undefined *)((*ppiVar9)[1] + 0x28) = 0;
        ppiVar10 = (int **)(*ppiVar9)[1];
      }
      else {
        if (ppiVar10 == (int **)ppiVar4[2]) {
          meth_0x569fa0(this,(int *)ppiVar4);
          ppiVar10 = ppiVar4;
        }
        *(undefined *)(ppiVar10[1] + 10) = 1;
        *(undefined *)(ppiVar10[1][1] + 0x28) = 0;
        meth_0x56a000(this,(int *)ppiVar10[1][1]);
      }
    }
    else if (*(char *)(piVar5 + 10) == '\0') {
      *(undefined *)(ppiVar4 + 10) = 1;
      *(undefined *)(piVar5 + 10) = 1;
      *(undefined *)((*ppiVar9)[1] + 0x28) = 0;
      ppiVar10 = (int **)(*ppiVar9)[1];
    }
    else {
      if (ppiVar10 == (int **)*ppiVar4) {
        meth_0x56a000(this,(int *)ppiVar4);
        ppiVar10 = ppiVar4;
      }
      *(undefined *)(ppiVar10[1] + 10) = 1;
      *(undefined *)(ppiVar10[1][1] + 0x28) = 0;
      meth_0x569fa0(this,(int *)ppiVar10[1][1]);
    }
    cVar1 = *(char *)(ppiVar10[1] + 10);
  }
  *(undefined *)(*(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4) + 0x28) = 1;
  *param_1 = (int *)ppiVar8;
  ExceptionList = local_c;
  return;
}



void __thiscall
GameActionEquip::meth_0x454700(GameActionEquip *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  int iVar2;
  int **_Memory;
  char *pcVar3;
  int **ppiVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  bool bVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f538;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x29) != '\0') {
    pcVar3 = "@invalid map/set<T> iterator";
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ExceptionList = &pvStack_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"invalid map/set<T> iterator",(uint)(pcVar3 + -0x647b7c));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&out_of_range__vftable_647940_00647940;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8b84);
  }
  ExceptionList = &pvStack_c;
  cls_0x41d550::meth_0x56a0a0((cls_0x41d550 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x29) != '\0') goto LAB_004547b6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_004547b6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 4) == _Memory) {
      *(int ***)(iVar2 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar4 = (int **)FUN_0056a080(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        uVar5 = FUN_0056a060((int)ppiVar7);
        *(undefined4 *)(iVar2 + 8) = uVar5;
      }
      else {
        *(int ***)(iVar2 + 8) = ppiVar8;
      }
    }
  }
  else {
    (*_Memory)[1] = (int)ppiVar4;
    *ppiVar4 = *_Memory;
    ppiVar8 = ppiVar4;
    if (ppiVar4 != (int **)_Memory[2]) {
      ppiVar8 = (int **)ppiVar4[1];
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 4) == _Memory) {
      *(int ***)(iVar2 + 4) = ppiVar4;
    }
    else {
      ppiVar6 = (int **)_Memory[1];
      if ((int **)*ppiVar6 == _Memory) {
        *ppiVar6 = (int *)ppiVar4;
      }
      else {
        ppiVar6[2] = (int *)ppiVar4;
      }
    }
    ppiVar4[1] = _Memory[1];
    uVar1 = *(undefined *)(ppiVar4 + 10);
    *(undefined *)(ppiVar4 + 10) = *(undefined *)(_Memory + 10);
    *(undefined *)(_Memory + 10) = uVar1;
  }
  if (*(char *)(_Memory + 10) == '\x01') {
    if (ppiVar7 != *(int ***)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 10) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 10) == '\0') {
            *(undefined *)(ppiVar6 + 10) = 1;
            *(undefined *)(ppiVar8 + 10) = 0;
            meth_0x569fa0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x29) == '\0') {
            if ((*(char *)(*ppiVar6 + 10) != '\x01') || (*(char *)(ppiVar6[2] + 10) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 10) == '\x01') {
                *(undefined *)(*ppiVar6 + 10) = 1;
                *(undefined *)(ppiVar6 + 10) = 0;
                meth_0x56a000(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 10) = *(undefined *)(ppiVar8 + 10);
              *(undefined *)(ppiVar8 + 10) = 1;
              *(undefined *)(ppiVar6[2] + 10) = 1;
              meth_0x569fa0(this,(int *)ppiVar8);
              break;
            }
LAB_0045494a:
            *(undefined *)(ppiVar6 + 10) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 10) == '\0') {
            *(undefined *)(ppiVar6 + 10) = 1;
            *(undefined *)(ppiVar8 + 10) = 0;
            meth_0x56a000(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x29) == '\0') {
            if ((*(char *)(ppiVar6[2] + 10) == '\x01') && (*(char *)(*ppiVar6 + 10) == '\x01'))
            goto LAB_0045494a;
            if (*(char *)(*ppiVar6 + 10) == '\x01') {
              *(undefined *)(ppiVar6[2] + 10) = 1;
              *(undefined *)(ppiVar6 + 10) = 0;
              meth_0x569fa0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 10) = *(undefined *)(ppiVar8 + 10);
            *(undefined *)(ppiVar8 + 10) = 1;
            *(undefined *)(*ppiVar6 + 10) = 1;
            meth_0x56a000(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 10) = 1;
  }
  cls_0x4542d0::meth_0x454370((cls_0x4542d0 *)(_Memory + 4));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
GameActionEquip::meth_0x4549e0(GameActionEquip *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x29) == '\0') {
    ppiVar3 = (int **)ppiVar1[1];
    do {
      ppiVar5 = ppiVar3;
      local_4 = (int)*param_2 < (int)ppiVar5[3];
      if (local_4) {
        ppiVar3 = (int **)*ppiVar5;
      }
      else {
        ppiVar3 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar3 + 0x29) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x454520(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56a100::meth_0x56a100((cls_0x56a100 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x454520(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall GameActionEquip::meth_0x454aa0(GameActionEquip *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x29) == '\0') {
    meth_0x454aa0(this);
    FUN_00454470((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



int __thiscall GameActionEquip::meth_0x454ae0(GameActionEquip *this,int **param_1)

{
  int iVar1;
  cls_0x4542d0 *pcVar2;
  int *piVar3;
  undefined4 local_48 [2];
  cls_0x4542d0 local_40;
  int *local_28;
  cls_0x4542d0 local_24;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fb30;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pcVar2 = cls_0x4542d0::cls_0x4542d0(&local_40);
  local_28 = *param_1;
  local_4 = 0;
  cls_0x4542d0::cls_0x4542d0(&local_24,(undefined *)pcVar2);
  local_4._0_1_ = 1;
  piVar3 = (int *)meth_0x4549e0(this,local_48,&local_28);
  iVar1 = *piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  cls_0x4542d0::meth_0x454370(&local_24);
  local_4 = 0xffffffff;
  cls_0x4542d0::meth_0x454370(&local_40);
  ExceptionList = pvStack_c;
  return iVar1 + 0x10;
}



void __thiscall
GameActionEquip::meth_0x454b70(GameActionEquip *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  
  ppiVar5 = param_3;
  ppiVar8 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
  if ((param_2 == (int **)*ppiVar8) && (param_3 == ppiVar8)) {
    meth_0x454aa0(this);
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    *(int *)(iVar2 + 4) = iVar2;
    uVar3 = *(undefined4 *)&(this->ActionEquip).Action.mbr_0x4;
    *(undefined4 *)&(this->ActionEquip).field_0x8 = 0;
    *(undefined4 *)uVar3 = uVar3;
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    *(int *)(iVar2 + 8) = iVar2;
    *param_1 = **(int ***)&(this->ActionEquip).Action.mbr_0x4;
    return;
  }
  ppiVar7 = param_2;
  ppiVar8 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar8 = ppiVar7;
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar8 = (int **)ppiVar7[2];
        if (*(char *)((int)ppiVar8 + 0x29) == '\0') {
          cVar1 = *(char *)((int)*ppiVar8 + 0x29);
          ppiVar4 = (int **)*ppiVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar4 + 0x29);
            ppiVar8 = ppiVar4;
            ppiVar4 = (int **)*ppiVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar7[1] + 0x29);
          ppiVar6 = (int **)ppiVar7[1];
          ppiVar4 = ppiVar7;
          while ((ppiVar8 = ppiVar6, cVar1 == '\0' && (ppiVar4 == (int **)ppiVar8[2]))) {
            cVar1 = *(char *)((int)ppiVar8[1] + 0x29);
            ppiVar6 = (int **)ppiVar8[1];
            ppiVar4 = ppiVar8;
          }
        }
      }
      meth_0x454700(this,&param_2,ppiVar7);
      ppiVar7 = ppiVar8;
    } while (ppiVar8 != ppiVar5);
  }
  *param_1 = (int *)ppiVar8;
  return;
}



void __thiscall GameActionEquip::meth_0x454c30(GameActionEquip *this)

{
  int *piVar1;
  cls_0x616328 *pcVar2;
  cls_0x46c350 *this_00;
  uint uVar3;
  cls_0x44e500 *this_01;
  int *piVar4;
  int **ppiVar5;
  int iVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  int **ppiStack_28;
  int *piStack_24;
  cls_0x4542d0 *pcStack_20;
  int *piStack_1c;
  cls_0x4527e0 cStack_18;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062fb48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  meth_0x454aa0((GameActionEquip *)&this->mbr_0x8c);
  *(dword *)(this->mbr_0x90 + 4) = this->mbr_0x90;
  this->mbr_0x94 = 0;
  *(dword *)this->mbr_0x90 = this->mbr_0x90;
  *(dword *)(this->mbr_0x90 + 8) = this->mbr_0x90;
  if (DAT_0070bd98 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  iVar9 = 0;
  pTVar8 = &GameJournal::RTTI_Type_Descriptor;
  pTVar7 = &Journal::RTTI_Type_Descriptor;
  iVar6 = 0;
  pcVar2 = (cls_0x616328 *)(**(code **)(*piVar4 + 0x78))();
  this_00 = (cls_0x46c350 *)FUN_006165e0(pcVar2,iVar6,pTVar7,pTVar8,iVar9);
  cls_0x4527e0::cls_0x4527e0(&cStack_18,(int)&this_00->field_0x4);
  uStack_4 = 0;
  if ((int **)cStack_18.mbr_0x4 == (int **)0x0) {
    ppiStack_28 = (int **)0x0;
  }
  else {
    ppiStack_28 = *(int ***)cStack_18.mbr_0x4;
  }
  ppiVar5 = (int **)cStack_18.mbr_0x4;
  if (ppiStack_28 != (int **)cStack_18.mbr_0x4) {
    do {
      piVar4 = (int *)FUN_006165e0((cls_0x616328 *)ppiStack_28[2],0,
                                   &JournalEntry::RTTI_Type_Descriptor,
                                   &TaskEntry::RTTI_Type_Descriptor,0);
      piStack_1c = piVar4;
      if (piVar4 != (int *)0x0) {
        piVar1 = (int *)piVar4[1];
        piStack_24 = piVar1;
        pcStack_20 = (cls_0x4542d0 *)cls_0x46c350::meth_0x46c3d0(this_00,(int)piVar1);
        pcStack_20 = (cls_0x4542d0 *)
                     meth_0x454ae0((GameActionEquip *)&this->mbr_0x8c,(int **)&pcStack_20);
        uVar3 = cls_0x46c350::meth_0x46c350(this_00,(int)piVar1);
        if ((char)uVar3 == '\0') {
          uVar3 = cls_0x46c350::meth_0x46c390(this_00,piVar4[1]);
          ppiVar5 = (int **)cStack_18.mbr_0x4;
          if ((char)uVar3 == '\0') goto LAB_00454d73;
          this_01 = (cls_0x44e500 *)
                    cls_0x4542d0::meth_0x454030
                              ((cls_0x4542d0 *)&pcStack_20->cls_0x454210,&piStack_24);
        }
        else {
          this_01 = (cls_0x44e500 *)cls_0x4542d0::meth_0x454030(pcStack_20,&piStack_24);
        }
        cls_0x44e500::meth_0x4501c0(this_01,&piStack_1c);
        ppiVar5 = (int **)cStack_18.mbr_0x4;
      }
LAB_00454d73:
      ppiStack_28 = (int **)*ppiStack_28;
    } while (ppiStack_28 != ppiVar5);
  }
  if (ppiVar5 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar5;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&cStack_18,&piStack_1c,piVar4,(int *)ppiVar5);
                    /* WARNING: Subroutine does not return */
  _free((void *)cStack_18.mbr_0x4);
}



void __thiscall GameActionEquip::meth_0x454dc0(GameActionEquip *this,int param_1)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *unaff_EBX;
  int *unaff_ESI;
  undefined local_ec [4];
  void *local_e8;
  dword local_d8;
  uint local_d4;
  undefined local_d0 [4];
  void *local_cc;
  dword local_bc;
  uint local_b8;
  undefined local_b4 [4];
  void *local_b0;
  dword local_a0;
  uint local_9c;
  undefined local_98 [4];
  void *local_94;
  dword local_84;
  uint local_80;
  undefined local_7c [4];
  void *local_78;
  dword local_68;
  uint local_64;
  undefined local_60 [4];
  void *local_5c;
  dword local_4c;
  uint local_48;
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
  puStack_8 = &LAB_0062fbac;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  if (this->mbr_0x4c != param_1) {
    ExceptionList = &local_c;
    this->mbr_0x4c = param_1;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = (void *)((uint)local_b0 & 0xffffff00);
    pcVar1 = "winAlarm";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_b4,"winAlarm",(uint)(pcVar7 + -0x65bd8c));
    local_4 = 0;
    piVar2 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_b4);
    local_4 = 0xffffffff;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      _free(local_b0);
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = (void *)((uint)local_b0 & 0xffffff00);
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8 = (void *)((uint)local_e8 & 0xffffff00);
    pcVar1 = "winTasks1";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_ec,"winTasks1",(uint)(pcVar7 + -0x65bd80));
    local_4 = 1;
    CLoadMapInterface::meth_0x495740
              ((CLoadMapInterface *)
               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),(int)local_ec);
    local_4 = 0xffffffff;
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      _free(local_e8);
    }
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8 = (void *)((uint)local_e8 & 0xffffff00);
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    pcVar1 = "winTasks2";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"winTasks2",(uint)(pcVar7 + -0x65bd74));
    local_4 = 2;
    piVar3 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_44);
    local_4 = 0xffffffff;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    local_64 = 0xf;
    local_68 = 0;
    local_78 = (void *)((uint)local_78 & 0xffffff00);
    pcVar1 = "winMaps1a";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_7c,"winMaps1a",(uint)(pcVar7 + -0x65bd2c));
    local_4 = 3;
    piVar4 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_7c);
    local_4 = 0xffffffff;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78 = (void *)((uint)local_78 & 0xffffff00);
    local_b8 = 0xf;
    local_bc = 0;
    local_cc = (void *)((uint)local_cc & 0xffffff00);
    pcVar1 = "winMaps1b";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_d0,"winMaps1b",(uint)(pcVar7 + -0x65bd20));
    local_4 = 4;
    CLoadMapInterface::meth_0x495740
              ((CLoadMapInterface *)
               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),(int)local_d0);
    local_4 = 0xffffffff;
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
    local_b8 = 0xf;
    local_bc = 0;
    local_cc = (void *)((uint)local_cc & 0xffffff00);
    local_80 = 0xf;
    local_84 = 0;
    local_94 = (void *)((uint)local_94 & 0xffffff00);
    pcVar1 = "winMaps2";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_98,"winMaps2",(uint)(pcVar7 + -0x65bd68));
    local_4 = 5;
    piVar5 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_98);
    local_4 = 0xffffffff;
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      _free(local_94);
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94 = (void *)((uint)local_94 & 0xffffff00);
    local_48 = 0xf;
    local_4c = 0;
    local_5c = (void *)((uint)local_5c & 0xffffff00);
    pcVar1 = "winDownloads1";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_60,"winDownloads1",(uint)(pcVar7 + -0x65bd58));
    local_4 = 6;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_60);
    local_4 = 0xffffffff;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_5c);
    }
    local_48 = 0xf;
    local_10 = 0xf;
    local_4c = 0;
    local_5c = (void *)((uint)local_5c & 0xffffff00);
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "winDownloads2";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"winDownloads2",(uint)(pcVar7 + -0x65bd48));
    local_4 = 7;
    piVar8 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->ActionEquip).Action.vftptr_0x0 +
                               (int)((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4),
                               (int)local_28);
    local_4 = 0xffffffff;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    switch(param_1) {
    case 1:
      (**(code **)(*piVar2 + 0x54))(0);
      (**(code **)(*piVar4 + 0x54))(1);
      (**(code **)(*unaff_EBX + 0x54))(1);
      (**(code **)(*unaff_ESI + 0x54))(1);
      (**(code **)(*piVar3 + 0x54))(1);
      (**(code **)(*piVar5 + 0x54))(1);
      (**(code **)(*piVar6 + 0x54))(1);
      (**(code **)(*piVar8 + 0x54))(1);
      meth_0x44e7d0(this);
      break;
    case 2:
      (**(code **)(*piVar2 + 0x54))(1);
      (**(code **)(*piVar4 + 0x54))(0);
      (**(code **)(*unaff_EBX + 0x54))(0);
      (**(code **)(*unaff_ESI + 0x54))(1);
      (**(code **)(*piVar3 + 0x54))(1);
      (**(code **)(*piVar5 + 0x54))(1);
      (**(code **)(*piVar6 + 0x54))(1);
      (**(code **)(*piVar8 + 0x54))(1);
      meth_0x454c30(this);
      meth_0x44be60(this);
      meth_0x44eb80(this);
      break;
    case 3:
      (**(code **)(*piVar2 + 0x54))(1);
      (**(code **)(*piVar4 + 0x54))(1);
      (**(code **)(*unaff_EBX + 0x54))(1);
      (**(code **)(*unaff_ESI + 0x54))(*(undefined *)&this->mbr_0xa0);
      (**(code **)(*piVar3 + 0x54))(*(char *)&this->mbr_0xa0 == '\0');
      (**(code **)(*piVar5 + 0x54))(0);
      (**(code **)(*piVar6 + 0x54))(1);
      (**(code **)(*piVar8 + 0x54))(1);
      meth_0x450230(this);
      meth_0x44ef20(this);
      break;
    case 4:
      (**(code **)(*piVar2 + 0x54))(1);
      (**(code **)(*piVar4 + 0x54))(1);
      (**(code **)(*unaff_EBX + 0x54))(1);
      (**(code **)(*unaff_ESI + 0x54))(1);
      (**(code **)(*piVar3 + 0x54))(1);
      (**(code **)(*piVar5 + 0x54))(1);
      (**(code **)(*piVar6 + 0x54))(0);
      (**(code **)(*piVar8 + 0x54))(0);
      meth_0x44c790(this);
      meth_0x44ee00(this);
      break;
    default:
      (**(code **)(*piVar2 + 0x54))(1);
      (**(code **)(*piVar4 + 0x54))(1);
      (**(code **)(*unaff_EBX + 0x54))(1);
      (**(code **)(*unaff_ESI + 0x54))(1);
      (**(code **)(*piVar3 + 0x54))(1);
      (**(code **)(*piVar5 + 0x54))(1);
      (**(code **)(*piVar6 + 0x54))(1);
      (**(code **)(*piVar8 + 0x54))(1);
      meth_0x44dec0(this,'\x01','\x01');
    }
    meth_0x44cea0(this);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall GameActionEquip::meth_0x455b60(GameActionEquip *this)

{
  int **ppiVar1;
  GameActionEquip *local_4;
  
  ppiVar1 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
  local_4 = this;
  meth_0x454b70(this,(int **)&local_4,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&(this->ActionEquip).Action.mbr_0x4);
}



void __thiscall GameActionEquip::meth_0x455dc0(GameActionEquip *this,undefined4 param_1)

{
  *(undefined4 *)&(this->ActionEquip).Action.mbr_0x4 = param_1;
  this->mbr_0xb8 = 0;
  this->mbr_0xb4 = 0;
  if ((void *)this->mbr_0x160 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x160);
  }
  this->mbr_0x160 = 0;
  this->mbr_0x164 = 0;
  this->mbr_0x168 = 0;
  if ((void *)this->mbr_0x170 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x170);
  }
  this->mbr_0x170 = 0;
  this->mbr_0x174 = 0;
  this->mbr_0x178 = 0;
  this->mbr_0x4c = 0xffffffff;
  meth_0x454dc0(this,0);
  meth_0x44a590(this,'\x01');
  return;
}



void __thiscall GameActionEquip::meth_0x45e460(GameActionEquip *this,undefined *param_1)

{
  char cVar1;
  int iVar2;
  undefined local_8 [8];
  
  iVar2 = *(int *)&(this->ActionEquip).field_0xc;
  if (*(int *)&(this->ActionEquip).mbr_0x10 == iVar2) {
    World::~World((World *)local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_8,&DAT_006ddf94);
  }
  cVar1 = *(char *)(iVar2 + *(int *)&(this->ActionEquip).field_0x14);
  *(int *)&(this->ActionEquip).field_0xc = iVar2 + 1;
  if (cVar1 != '\0') {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void __thiscall GameActionEquip::meth_0x45e4c0(GameActionEquip *this,undefined *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined local_8 [8];
  
  iVar2 = *(int *)&(this->ActionEquip).field_0xc;
  if (*(int *)&(this->ActionEquip).mbr_0x10 == iVar2) {
    World::~World((World *)local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_8,&DAT_006ddf94);
  }
  *param_1 = *(undefined *)(iVar2 + *(int *)&(this->ActionEquip).field_0x14);
  puVar1 = &(this->ActionEquip).field_0xc;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return;
}



void __thiscall GameActionEquip::meth_0x45e500(GameActionEquip *this,undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined local_8 [8];
  
  iVar2 = *(int *)&(this->ActionEquip).field_0xc;
  if ((uint)(*(int *)&(this->ActionEquip).mbr_0x10 - iVar2) < 4) {
    World::~World((World *)local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_8,&DAT_006ddf94);
  }
  *param_1 = *(undefined4 *)(iVar2 + *(int *)&(this->ActionEquip).field_0x14);
  puVar1 = &(this->ActionEquip).field_0xc;
  *(int *)puVar1 = *(int *)puVar1 + 4;
  return;
}



void __thiscall
GameActionEquip::meth_0x45e580(GameActionEquip *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined local_8 [8];
  
  iVar1 = *(int *)&(this->ActionEquip).field_0xc;
  if ((uint)(*(int *)&(this->ActionEquip).mbr_0x10 - iVar1) < param_2) {
    World::~World((World *)local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_8,&DAT_006ddf94);
  }
  puVar3 = (undefined4 *)(*(int *)&(this->ActionEquip).field_0x14 + iVar1);
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)param_1 = *(undefined *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  *(uint *)&(this->ActionEquip).field_0xc = *(int *)&(this->ActionEquip).field_0xc + param_2;
  return;
}



void __thiscall GameActionEquip::meth_0x45e5e0(GameActionEquip *this,undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined local_8 [8];
  
  iVar3 = *(int *)&(this->ActionEquip).field_0xc;
  pcVar4 = (char *)(*(int *)&(this->ActionEquip).field_0x14 + iVar3);
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if ((char *)(*(int *)&(this->ActionEquip).mbr_0x10 - iVar3) < pcVar4 + (1 - (int)pcVar1)) {
    World::~World((World *)local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_8,&DAT_006ddf94);
  }
  meth_0x45e580(this,param_1,(uint)(pcVar4 + (1 - (int)pcVar1)));
  return;
}



void __thiscall GameActionEquip::meth_0x4629c0(GameActionEquip *this,int param_1)

{
  this->mbr_0x24 = param_1;
  if ((int)this->mbr_0x20 < param_1) {
    this->mbr_0x24 = this->mbr_0x20;
  }
  return;
}



void __thiscall GameActionEquip::meth_0x463000(GameActionEquip *this,undefined4 param_1)

{
  if ((this->mbr_0x2c == 2) && (this->mbr_0x30 == 7)) {
    FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                 *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xfe,(float10 *)0x0,0,0,
                 param_1,0);
    return;
  }
  GameEntity::Queue_Idle((GameEntity *)this,param_1);
  return;
}



void __thiscall GameActionEquip::meth_0x463040(GameActionEquip *this,undefined4 param_1)

{
  if ((this->mbr_0x2c == 2) && (this->mbr_0x30 == 7)) {
    FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                 *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xff,(float10 *)0x0,0,0,
                 param_1,0);
    return;
  }
  GameEntity::Queue_Idle((GameEntity *)this,param_1);
  return;
}



void __thiscall GameActionEquip::meth_0x463080(GameActionEquip *this,undefined4 param_1)

{
  if ((this->mbr_0x2c == 2) && (this->mbr_0x30 == 7)) {
    FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                 *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x100,(float10 *)0x0,0,0,
                 param_1,0);
    return;
  }
  GameEntity::Queue_Idle((GameEntity *)this,param_1);
  return;
}



void __thiscall GameActionEquip::meth_0x4630c0(GameActionEquip *this,undefined4 param_1)

{
  if ((this->mbr_0x2c == 2) && (this->mbr_0x30 == 7)) {
    FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                 *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x101,(float10 *)0x0,0,0,
                 param_1,0);
    return;
  }
  GameEntity::Queue_Idle((GameEntity *)this,param_1);
  return;
}



void __thiscall GameActionEquip::meth_0x463100(GameActionEquip *this,undefined4 param_1)

{
  if ((this->mbr_0x2c == 2) && (this->mbr_0x30 == 7)) {
    FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                 *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x102,(float10 *)0x0,0,0,
                 param_1,0);
    return;
  }
  GameEntity::Queue_Idle((GameEntity *)this,param_1);
  return;
}



int __thiscall GameActionEquip::meth_0x463960(GameActionEquip *this,int param_1)

{
  return (int)(&this->mbr_0x38 + param_1 * 3);
}



dword __thiscall GameActionEquip::Get_mbr_0x98(GameActionEquip *this)

{
  return this->mbr_0x98;
}



void __thiscall GameActionEquip::meth_0x463b70(GameActionEquip *this,dword param_1)

{
  this->mbr_0x98 = param_1;
  return;
}



undefined4 __thiscall GameActionEquip::meth_0x463c80(GameActionEquip *this,undefined4 param_1)

{
  byte *pbVar1;
  dword dVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (this->mbr_0x2c == 2) {
    switch(param_1) {
    case 0x35:
      pbVar1 = &(this->ActionEquip).Action.mbr_0x4 +
               *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
      if (this->mbr_0x30 != 7) {
        uVar3 = FUN_005505f0(pbVar1,7,(float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      uVar3 = FUN_005505f0(pbVar1,0xe5,(float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x36:
      pbVar1 = &(this->ActionEquip).Action.mbr_0x4 +
               *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
      if (this->mbr_0x30 != 7) {
        uVar3 = FUN_005505f0(pbVar1,8,(float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      uVar3 = FUN_005505f0(pbVar1,0xe6,(float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x37:
      pbVar1 = &(this->ActionEquip).Action.mbr_0x4 +
               *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
      if (this->mbr_0x30 != 7) {
        uVar3 = FUN_005505f0(pbVar1,9,(float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      uVar3 = FUN_005505f0(pbVar1,0xe7,(float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x38:
      dVar2 = this->mbr_0x30;
      if (dVar2 == 1) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xb,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      if (dVar2 == 3) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x61,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      if (dVar2 == 5) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xa0,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      break;
    case 0x39:
      switch(this->mbr_0x30) {
      case 1:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x16,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 2:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x48,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 3:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x67,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 4:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x86,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 5:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xa6,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 6:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xca,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 7:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf7,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      break;
    case 0x3a:
      switch(this->mbr_0x30) {
      case 1:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x21,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 3:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x70,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 5:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xb3,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 6:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xd3,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      break;
    case 0x3b:
      switch(this->mbr_0x30) {
      case 1:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x2b,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 3:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x74,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 5:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xb7,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      case 6:
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xd7,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      break;
    case 0x3c:
      dVar2 = this->mbr_0x30;
      if (dVar2 == 1) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x32,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      if (dVar2 == 2) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x54,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      if (dVar2 == 4) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x92,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      break;
    case 0x3d:
    case 0x3e:
      dVar2 = this->mbr_0x30;
      if (dVar2 == 1) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x34,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      if (dVar2 == 3) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x76,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      if (dVar2 == 5) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xb9,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      break;
    case 0x3f:
      if (this->mbr_0x30 == 1) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x35,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      if (this->mbr_0x30 == 4) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x94,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      break;
    case 0x40:
      dVar2 = this->mbr_0x30;
      if (dVar2 == 1) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x36,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      if (dVar2 == 2) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x56,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      if (dVar2 == 4) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x95,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      break;
    case 0x41:
      if (this->mbr_0x30 == 1) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x40,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      if (this->mbr_0x30 == 5) {
        uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xc2,
                             (float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      break;
    case 0x42:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xd,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x43:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x44:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xe,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x45:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x10,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x46:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x22,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x47:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x23,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x48:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x24,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x49:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x26,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x4a:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x25,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x4b:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x27,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x4c:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x2c,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x4d:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x2d,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x4e:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x2e,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x4f:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x30,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x50:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x2f,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x51:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x31,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x52:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf2,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x53:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf8,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x54:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf9,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x55:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x103,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x56:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x104,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x57:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x105,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x58:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x106,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x59:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x107,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x5a:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x108,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x5b:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x109,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x5c:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x10a,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x5d:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x10b,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x5e:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x10c,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x5f:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x114,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x60:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x115,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x61:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x116,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x62:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x117,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 99:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x118,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 100:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x119,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x65:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x11a,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x66:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x11b,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x67:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x11c,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x68:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x11d,
                           (float10 *)0x0,1,0,0,0);
    }
  }
  else if (this->mbr_0x2c == 3) {
    switch(param_1) {
    case 0x35:
      pbVar1 = &(this->ActionEquip).Action.mbr_0x4 +
               *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
      if (this->mbr_0x30 != 7) {
        uVar3 = FUN_005505f0(pbVar1,0x131,(float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      uVar3 = FUN_005505f0(pbVar1,0x14d,(float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x36:
      pbVar1 = &(this->ActionEquip).Action.mbr_0x4 +
               *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
      if (this->mbr_0x30 != 7) {
        uVar3 = FUN_005505f0(pbVar1,0x132,(float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      uVar3 = FUN_005505f0(pbVar1,0x14e,(float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x38:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x133,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x39:
      pbVar1 = &(this->ActionEquip).Action.mbr_0x4 +
               *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
      if (this->mbr_0x30 != 7) {
        uVar3 = FUN_005505f0(pbVar1,0x139,(float10 *)0x0,1,0,0,0);
        return uVar3;
      }
      uVar3 = FUN_005505f0(pbVar1,0x154,(float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x3a:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x142,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x3b:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x143,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x3d:
    case 0x3e:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x145,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    case 0x3f:
      uVar3 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x146,
                           (float10 *)0x0,1,0,0,0);
      return uVar3;
    }
  }
  return uVar3;
}



undefined4 __thiscall GameActionEquip::meth_0x464940(GameActionEquip *this,undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  switch(this->mbr_0x2c) {
  case 2:
    switch(param_1) {
    case 0x2c:
      iVar2 = 0xe9;
      break;
    case 0x2d:
      uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xea,
                           (float10 *)0x0,1,0,0,1);
      this->mbr_0x2c = 10;
      return uVar1;
    case 0x2e:
      uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xeb,
                           (float10 *)0x0,1,0,0,1);
      this->mbr_0x2c = 10;
      return uVar1;
    case 0x2f:
      iVar2 = 0xec;
      break;
    case 0x30:
      uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xed,
                           (float10 *)0x0,1,0,0,1);
      this->mbr_0x2c = 10;
      return uVar1;
    case 0x31:
      uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xee,
                           (float10 *)0x0,1,0,0,1);
      this->mbr_0x2c = 10;
      return uVar1;
    case 0x32:
      iVar2 = 0xef;
      break;
    case 0x33:
      uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf0,
                           (float10 *)0x0,1,0,0,1);
      this->mbr_0x2c = 10;
      return uVar1;
    case 0x34:
      uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf1,
                           (float10 *)0x0,1,0,0,1);
      this->mbr_0x2c = 10;
      return uVar1;
    default:
      iVar2 = 0x15;
    }
    uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),iVar2,
                         (float10 *)0x0,1,0,0,1);
    this->mbr_0x2c = 10;
    return uVar1;
  default:
    this->mbr_0x2c = 2;
    uVar1 = meth_0x464940(this,param_1);
switchD_00464954_caseD_a:
    return uVar1;
  case 7:
    uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x1e4,
                         (float10 *)0x0,1,0,0,1);
    this->mbr_0x2c = 10;
    return uVar1;
  case 8:
    uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),499,
                         (float10 *)0x0,1,0,0,1);
    this->mbr_0x2c = 10;
    return uVar1;
  case 10:
    goto switchD_00464954_caseD_a;
  }
}



undefined4 __thiscall GameActionEquip::meth_0x464b80(GameActionEquip *this,undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  switch(this->mbr_0x2c) {
  case 2:
    iVar2 = (uint)((char)param_1 == '\0') * 2 + 0x10d;
    break;
  case 3:
    iVar2 = (uint)((char)param_1 == '\0') * 2 + 0x158;
    break;
  case 4:
    uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x164,
                         (float10 *)0x0,1,0,0,0);
    this->mbr_0x2c = 7;
    return uVar1;
  case 5:
    this->mbr_0x2c = 2;
    uVar1 = meth_0x464b80(this,param_1);
    return uVar1;
  default:
    this->mbr_0x2c = 2;
    uVar1 = meth_0x464b80(this,param_1);
  case 7:
  case 8:
  case 10:
    return uVar1;
  }
  uVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                       *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),iVar2,
                       (float10 *)0x0,1,0,0,0);
  this->mbr_0x2c = 7;
  return uVar1;
}



int __thiscall GameActionEquip::meth_0x464c70(GameActionEquip *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(this->mbr_0x2c) {
  case 2:
    iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),
                         (uint)((char)param_1 == '\0') * 2 + 0x10e,(float10 *)0x0,1,0,0,0);
    this->mbr_0x2c = 8;
    return iVar2;
  case 3:
    iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),
                         (uint)((char)param_1 == '\0') * 2 + 0x159,(float10 *)0x0,1,0,0,0);
    this->mbr_0x2c = 8;
  case 4:
    iVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x165,
                         (float10 *)0x0,1,0,0,0);
    this->mbr_0x2c = 8;
    return iVar2 + iVar1;
  default:
    this->mbr_0x2c = 2;
    iVar2 = meth_0x464c70(this,param_1);
  case 7:
  case 8:
  case 10:
    return iVar2;
  }
}



int __thiscall GameActionEquip::meth_0x464d70(GameActionEquip *this,int param_1)

{
  int iVar1;
  byte *this_00;
  int iVar2;
  
  iVar2 = 0;
  switch(this->mbr_0x2c) {
  case 1:
    switch(param_1) {
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x28:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),1,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    case 0x26:
    case 0x29:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),2,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    }
    break;
  case 2:
  case 5:
    switch(this->mbr_0x30) {
    case 1:
      switch(param_1) {
      case 0x21:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x3f,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x22:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x3e,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x25:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x13,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x26:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x14,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x28:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x11,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x29:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x12,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      }
      break;
    case 2:
      switch(param_1) {
      case 0x21:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x5e,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x22:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x5d,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x25:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x46,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x26:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x47,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x28:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x44,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x29:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x45,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      }
      break;
    case 3:
      switch(param_1) {
      case 0x21:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x7e,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x22:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x7d,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x25:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x65,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x26:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x66,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x28:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),99,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x29:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),100,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      }
      break;
    case 4:
      switch(param_1) {
      case 0x21:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x9d,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x22:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x9c,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x25:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x84,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x26:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x85,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x28:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x82,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x29:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x83,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      }
      break;
    case 5:
      switch(param_1) {
      case 0x21:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xc1,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x22:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xc0,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x25:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xa4,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x26:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xa5,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x28:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xa2,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x29:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xa3,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      }
      break;
    case 6:
      switch(param_1) {
      case 0x21:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xe0,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x22:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xdf,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x25:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),200,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x26:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xc9,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x28:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xc6,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x29:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),199,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      }
      break;
    default:
      switch(param_1) {
      case 0x21:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x12d,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x22:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),300,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x25:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf5,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x26:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf6,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x28:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf3,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      case 0x29:
        iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                             *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xf4,
                             (float10 *)0x0,1,0,0,0);
        return iVar2;
      }
    }
    break;
  case 3:
  case 6:
    if (this->mbr_0x30 == 1) {
      switch(param_1 + -0x21) {
      case 0:
        iVar2 = 0x13d;
        this_00 = &(this->ActionEquip).Action.mbr_0x4 +
                  *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
        break;
      case 1:
        iVar2 = 0x13c;
        goto LAB_004655c7;
      default:
        goto switchD_00464d88_caseD_4;
      case 4:
        iVar2 = 0x137;
        this_00 = &(this->ActionEquip).Action.mbr_0x4 +
                  *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
        break;
      case 5:
        iVar2 = 0x138;
        this_00 = &(this->ActionEquip).Action.mbr_0x4 +
                  *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
        break;
      case 7:
        iVar2 = 0x135;
        goto LAB_004655c7;
      case 8:
        iVar2 = 0x136;
        this_00 = &(this->ActionEquip).Action.mbr_0x4 +
                  *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
      }
      goto LAB_004655d1;
    }
    switch(param_1 + -0x21) {
    case 0:
    case 4:
      iVar2 = 0x152;
      goto LAB_004655c7;
    case 1:
    case 7:
      iVar2 = 0x150;
      this_00 = &(this->ActionEquip).Action.mbr_0x4 +
                *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
      break;
    default:
      goto switchD_00464d88_caseD_4;
    case 5:
      iVar2 = 0x153;
      this_00 = &(this->ActionEquip).Action.mbr_0x4 +
                *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
      break;
    case 8:
      iVar2 = 0x151;
LAB_004655c7:
      this_00 = &(this->ActionEquip).Action.mbr_0x4 +
                *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
    }
LAB_004655d1:
    iVar2 = FUN_005505f0(this_00,iVar2,(float10 *)0x0,1,0,0,0);
switchD_00464d88_caseD_4:
    switch(param_1) {
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x28:
      iVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x161,
                           (float10 *)0x0,1,0,0,0);
      return iVar2 + iVar1;
    case 0x26:
    case 0x29:
      iVar1 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x162,
                           (float10 *)0x0,1,0,0,0);
      return iVar2 + iVar1;
    }
    break;
  case 4:
    goto switchD_00464d88_caseD_4;
  case 7:
    switch(param_1) {
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x28:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x1e5,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    case 0x26:
    case 0x29:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x1e6,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    }
    break;
  case 8:
    switch(param_1) {
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x28:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),500,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    case 0x26:
    case 0x29:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x1f5,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    }
    break;
  case 9:
    switch(param_1) {
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x28:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x1f9,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    case 0x26:
    case 0x29:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x1fa,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    }
    break;
  case 10:
    break;
  default:
    this->mbr_0x2c = 2;
    iVar2 = meth_0x464d70(this,param_1);
  }
  return iVar2;
}



int __thiscall GameActionEquip::meth_0x4659a0(GameActionEquip *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(this->mbr_0x2c) {
  case 2:
  case 5:
    switch(this->mbr_0x30) {
    case 1:
      iVar2 = 0x20;
      break;
    case 2:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x50,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    case 3:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x6f,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    case 4:
      iVar2 = 0x8e;
      break;
    case 5:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xb2,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    case 6:
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0xd2,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    default:
      goto switchD_004659bc_caseD_3;
    }
    iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),iVar2,
                         (float10 *)0x0,1,0,0,0);
    return iVar2;
  case 3:
  case 6:
  case 10:
    break;
  default:
    iVar2 = GameEntity::QueueToCombat((GameEntity *)this);
    this->mbr_0x2c = 2;
    iVar1 = meth_0x4659a0(this);
    iVar2 = iVar2 + iVar1;
  }
switchD_004659bc_caseD_3:
  return iVar2;
}



int __thiscall GameActionEquip::meth_0x4667a0(GameActionEquip *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(this->mbr_0x2c) {
  case 4:
    iVar2 = 0x167;
    break;
  case 5:
    iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x1af,
                         (float10 *)0x0,1,0,0,0);
    return iVar2;
  case 6:
    if ((0 < (int)this->mbr_0x30) && ((int)this->mbr_0x30 < 7)) {
      iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                           *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x1ba,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    }
    iVar2 = 0x1c1;
    break;
  default:
    iVar2 = GameEntity::QueueToDefault((GameEntity *)this);
    this->mbr_0x2c = 5;
    iVar1 = meth_0x4667a0(this);
    iVar2 = iVar2 + iVar1;
  case 10:
    return iVar2;
  }
  iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                       *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),iVar2,
                       (float10 *)0x0,1,0,0,0);
  return iVar2;
}



int __thiscall GameActionEquip::meth_0x466880(GameActionEquip *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(this->mbr_0x2c) {
  case 2:
    iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x12e,
                         (float10 *)0x0,1,0,0,0);
    return iVar2;
  default:
    iVar2 = GameEntity::QueueToDefault((GameEntity *)this);
    this->mbr_0x2c = 5;
    iVar1 = meth_0x466880(this);
    iVar2 = iVar2 + iVar1;
switchD_00466898_caseD_4:
    return iVar2;
  case 4:
  case 6:
  case 10:
    goto switchD_00466898_caseD_4;
  case 5:
    iVar2 = FUN_005505f0(&(this->ActionEquip).Action.mbr_0x4 +
                         *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4),0x1b3,
                         (float10 *)0x0,1,0,0,0);
    return iVar2;
  }
}



void __thiscall GameActionEquip::ApplyOnCreateEffects(GameActionEquip *this)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined uVar4;
  undefined4 *puVar5;
  GameActionEquip *this_00;
  undefined3 extraout_var;
  int *piVar6;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  local_8 = (Exception__vftable_64787c *)meth_0x463960(this,3);
  if (local_8[2].virt_deldtor_0x401010_0 != (virt_deldtor_0x401010 *)0x0) {
    puVar1 = (undefined4 *)local_8[1].virt_deldtor_0x401010_0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar1;
    }
    if (puVar5 != puVar1) {
      do {
        iVar2 = puVar5[2];
        bVar3 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
        if (!bVar3) {
          local_8 = &Exception__vftable_64787c_0064787c;
          local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(&local_8,&DAT_006d8834);
        }
        if (DAT_0070bd98 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)(DAT_0070bd98 + 4);
        }
        this_00 = (GameActionEquip *)(**(code **)(*piVar6 + 0x28))(*(undefined4 *)(iVar2 + 0xc));
        (*((this_00->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_8)(iVar2);
        meth_0x55a360(this_00,*(undefined4 *)
                               (&this->field_0x1e0 +
                               *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4)));
        meth_0x55a3e0(this_00,1,
                      *(undefined4 *)
                       (&this->field_0x1e0 +
                       *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4)));
        meth_0x55a3e0(this_00,2,
                      *(undefined4 *)
                       (&this->field_0x1e0 +
                       *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4)));
        meth_0x55a3e0(this_00,0,0);
        meth_0x55a3e0(this_00,3,0);
        uVar4 = (*((this_00->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4)();
        switch(CONCAT31(extraout_var,uVar4)) {
        case 0:
        case 3:
          FUN_00497120((byte *)
                       "ApplyOnCreateEffects() - All OnCreate effects must target Myself (or Subject, which is considered Myself in this case).\n"
                      );
          break;
        case 1:
        case 2:
          Entity::meth_0x5506c0
                    ((Entity *)
                     (&(this->ActionEquip).Action.mbr_0x4 +
                     *(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4)),(int *)this_00);
          break;
        default:
          handle_fatal_error("ApplyOnCreateEffects() - Unknown target type.");
        }
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)local_8[1].virt_deldtor_0x401010_0);
    }
  }
  return;
}



void __thiscall
GameActionEquip::meth_0x469cf0(GameActionEquip *this,void *param_1,int param_2,int param_3)

{
  ModelInstance *this_00;
  cls_0x616328 *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 *****pppppuVar4;
  int iVar5;
  uint unaff_retaddr;
  void *pvVar6;
  undefined4 *****local_f8 [4];
  dword local_e8;
  uint local_e4;
  int local_e0 [13];
  int local_ac [13];
  uint local_78 [13];
  undefined4 local_44 [13];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006305eb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  pcVar1 = (cls_0x616328 *)meth_0x54be10(this);
  this_00 = (ModelInstance *)pcVar1[0x58].mbr_0x0;
  if (this_00 != (ModelInstance *)0x0) {
    pvVar2 = (void *)FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,
                                  &GameCreature::RTTI_Type_Descriptor,0);
    if (param_3 == 0) {
      pvVar3 = (void *)GameInventory::meth_0x4693d0((GameInventory *)this,1);
      pvVar6 = (void *)GameInventory::meth_0x4693d0((GameInventory *)this,2);
      FUN_00469900(local_78,param_1,this_00);
      FUN_00469900(local_e0,pvVar3,this_00);
    }
    else {
      FUN_00469900(local_78,param_1,this_00);
      FUN_00469900(local_e0,(void *)0x0,this_00);
      pvVar6 = (void *)0x0;
    }
    FUN_00469900(local_ac,pvVar6,this_00);
    FUN_00469a90(local_44,pvVar2,this_00);
    if (*(char *)((int)param_1 + 0xec) != '\0') {
      ModelInstance::meth_0x563cb0(this_00,2);
    }
    if (*(char *)((int)param_1 + 0xed) != '\0') {
      ModelInstance::meth_0x563cb0(this_00,5);
    }
    if (*(char *)((int)param_1 + 0xee) != '\0') {
      ModelInstance::meth_0x563cb0(this_00,4);
    }
    if (*(char *)((int)param_1 + 0xef) != '\0') {
      ModelInstance::meth_0x563cb0(this_00,6);
    }
    if (*(char *)((int)param_1 + 0xf0) != '\0') {
      ModelInstance::meth_0x563cb0(this_00,3);
    }
    if (*(char *)((int)param_1 + 0x2c8) != '\0') {
      ModelInstance::meth_0x563cb0(this_00,0xc);
    }
    iVar5 = 0;
    do {
      if (((local_78[iVar5] != 0xffffffff) && (local_e0[iVar5] == -1)) && (local_ac[iVar5] == -1)) {
        (*this_00->vftptr_0x0->virt_meth_0x565810_4)
                  (this_00,iVar5,local_78[iVar5],(undefined4 *)0x0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xd);
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = (undefined4 *****)((uint)local_f8[0] & 0xffffff00);
    local_4 = 0;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&stack0xffffff04,(_String_base *)((int)param_1 + 0x378),0,0xffffffff)
    ;
    if ((local_e8 != 0) && (param_2 != 0)) {
      pppppuVar4 = local_f8[0];
      if (local_e4 < 0x10) {
        pppppuVar4 = local_f8;
      }
      Entity::meth_0x54dc50
                ((Entity *)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 4 + (int)param_1),pppppuVar4,
                 0);
      (**(code **)(*(int *)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 4 + (int)param_1) + 0x3c))
                (pcVar1[0x7b].mbr_0x0);
      pvVar2 = *(void **)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 0x164 + (int)param_1);
      if (pvVar2 != (void *)0x0) {
        ModelInstance::meth_0x565b00(this_00,pvVar2,param_2);
      }
    }
    Entity::meth_0x54b220
              ((Entity *)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 4 + (int)param_1),
               pcVar1[0x7b].mbr_0x0);
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_f8[0]);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameActionEquip::meth_0x46a970(GameActionEquip *this)

{
  void *pvVar1;
  uint uVar2;
  cls_0x616328 **ppcVar3;
  
  uVar2 = 0;
  ppcVar3 = (cls_0x616328 **)&(this->ActionEquip).field_0x14;
  do {
    if (*ppcVar3 != (cls_0x616328 *)0x0) {
      pvVar1 = (void *)FUN_006165e0(*ppcVar3,0,&Entity::RTTI_Type_Descriptor,
                                    &GameItem::RTTI_Type_Descriptor,0);
      if (pvVar1 != (void *)0x0) {
        meth_0x469cf0(this,pvVar1,0,uVar2);
      }
    }
    uVar2 = uVar2 + 1;
    ppcVar3 = ppcVar3 + 1;
  } while (uVar2 < 6);
  return;
}



undefined4 * __thiscall GameActionEquip::ApplyEquipEffects(GameActionEquip *this,int *param_1)

{
  int **ppiVar1;
  int iVar2;
  bool bVar3;
  undefined uVar4;
  GameActionEquip *this_00;
  Entity *this_01;
  undefined3 extraout_var;
  dword *pdVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  GameActionEquip *this_02;
  int *piVar11;
  uint uVar12;
  dword *this_03;
  undefined4 *local_44;
  uint uStack_3c;
  undefined4 *local_38;
  Exception__vftable_64787c *local_34;
  char *local_30;
  uint uStack_2c;
  cls_0x401b00 cStack_28;
  cls_0x401b00 cStack_18;
  undefined *puStack_8;
  dword dStack_4;
  
  piVar11 = param_1;
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_00630750;
  cStack_18.mbr_0xc = (dword)ExceptionList;
  ExceptionList = &cStack_18.mbr_0xc;
  local_38 = (undefined4 *)meth_0x463960((GameActionEquip *)param_1,0);
  local_44 = local_38;
  if (local_38[2] != 0) {
    puVar7 = (undefined4 *)local_38[1];
    if (puVar7 == (undefined4 *)0x0) {
      local_44 = (undefined4 *)0x0;
    }
    else {
      local_44 = (undefined4 *)*puVar7;
    }
    if (local_44 != puVar7) {
      do {
        iVar2 = local_44[2];
        bVar3 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
        if (!bVar3) {
          local_34 = &Exception__vftable_64787c_0064787c;
          local_30 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(&local_34,&DAT_006d8834);
        }
        if (DAT_0070bd98 == 0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)(DAT_0070bd98 + 4);
        }
        this_00 = (GameActionEquip *)(**(code **)(*piVar10 + 0x28))(*(undefined4 *)(iVar2 + 0xc));
        (*((this_00->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_8)(iVar2);
        meth_0x55a360(this_00,*(undefined4 *)(*(int *)(piVar11[1] + 4) + 0x1e0 + (int)piVar11));
        this_01 = (Entity *)meth_0x54be10(this_02);
        meth_0x55a3e0(this_00,1,*(undefined4 *)(*(int *)(piVar11[1] + 4) + 0x1e0 + (int)piVar11));
        meth_0x55a3e0(this_00,2,*(undefined4 *)&(this_01->DynamicObject).field_0x1dc);
        meth_0x55a3e0(this_00,0,*(undefined4 *)&(this_01->DynamicObject).field_0x1dc);
        meth_0x55a3e0(this_00,3,0);
        dStack_4 = meth_0x55a240(this_00);
        uVar4 = (*((this_00->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4)();
        switch(CONCAT31(extraout_var,uVar4)) {
        case 0:
        case 2:
          uStack_3c = *(uint *)&(this_01->DynamicObject).field_0x1dc;
          Entity::meth_0x5506c0(this_01,(int *)this_00);
          uVar12 = uStack_3c;
          goto LAB_0046bb6e;
        case 1:
          uVar12 = *(uint *)(*(int *)(piVar11[1] + 4) + 0x1e0 + (int)piVar11);
          Entity::meth_0x5506c0
                    ((Entity *)((int)piVar11 + *(int *)(piVar11[1] + 4) + 4),(int *)this_00);
LAB_0046bb6e:
          if (uVar12 != 0) {
            uStack_3c = *(uint *)(*(int *)(piVar11[1] + 4) + 0x1e0 + (int)piVar11);
            this_03 = &this->mbr_0x34;
            pdVar5 = (dword *)cls_0x55dc80::meth_0x51f080
                                        ((cls_0x55dc80 *)this_03,(int *)&local_34,&uStack_3c);
            if (*pdVar5 == this->mbr_0x38) {
              cStack_28.mbr_0x4 = FUN_0056e0b0();
              cStack_28.mbr_0x8 = 0;
              dStack_4 = 0;
              ppiVar1 = (int **)(cStack_28.mbr_0x4 + 4);
              uStack_2c = uVar12;
              piVar10 = (int *)FUN_00433760(cStack_28.mbr_0x4,*(int **)(cStack_28.mbr_0x4 + 4),
                                            &param_1);
              cls_0x401b00::meth_0x436410(&cStack_28,1);
              *ppiVar1 = piVar10;
              *(int **)piVar10[1] = piVar10;
              param_1 = *(int **)(*(int *)(piVar11[1] + 4) + 0x1e0 + (int)piVar11);
              pvVar6 = (void *)cls_0x55dc80::meth_0x46b890((cls_0x55dc80 *)this_03,&param_1);
              iVar2 = *(int *)((int)pvVar6 + 4);
              puVar7 = FUN_0046ab80(iVar2,*(undefined4 *)(iVar2 + 4),&uStack_2c);
              FUN_00469850(pvVar6,1);
              *(undefined4 **)(iVar2 + 4) = puVar7;
              *(undefined4 **)puVar7[1] = puVar7;
              dStack_4 = 0xffffffff;
              if ((int **)cStack_28.mbr_0x4 == (int **)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                piVar11 = *(int **)cStack_28.mbr_0x4;
              }
              GUI::Interface::meth_0x4b9d60
                        ((Interface *)&cStack_28,&param_1,piVar11,(int *)cStack_28.mbr_0x4);
                    /* WARNING: Subroutine does not return */
              _free((void *)cStack_28.mbr_0x4);
            }
            puVar7 = *(undefined4 **)(*pdVar5 + 0x14);
            if (puVar7 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              puVar8 = (undefined4 *)*puVar7;
            }
            while( true ) {
              if (puVar8 == puVar7) {
                cStack_18.mbr_0x4 = FUN_0056e0b0();
                cStack_18.mbr_0x8 = 0;
                ppiVar1 = (int **)(cStack_18.mbr_0x4 + 4);
                dStack_4 = 1;
                cStack_28.mbr_0xc = uVar12;
                piVar10 = (int *)FUN_00433760(cStack_18.mbr_0x4,*(int **)(cStack_18.mbr_0x4 + 4),
                                              &param_1);
                cls_0x401b00::meth_0x436410(&cStack_18,1);
                *ppiVar1 = piVar10;
                *(int **)piVar10[1] = piVar10;
                param_1 = *(int **)(*(int *)(piVar11[1] + 4) + 0x1e0 + (int)piVar11);
                pvVar6 = (void *)cls_0x55dc80::meth_0x46b890((cls_0x55dc80 *)this_03,&param_1);
                iVar2 = *(int *)((int)pvVar6 + 4);
                puVar7 = FUN_0046ab80(iVar2,*(undefined4 *)(iVar2 + 4),&cStack_28.mbr_0xc);
                FUN_00469850(pvVar6,1);
                *(undefined4 **)(iVar2 + 4) = puVar7;
                *(undefined4 **)puVar7[1] = puVar7;
                dStack_4 = 0xffffffff;
                if ((int **)cStack_18.mbr_0x4 == (int **)0x0) {
                  piVar11 = (int *)0x0;
                }
                else {
                  piVar11 = *(int **)cStack_18.mbr_0x4;
                }
                GUI::Interface::meth_0x4b9d60
                          ((Interface *)&cStack_18,&param_1,piVar11,(int *)cStack_18.mbr_0x4);
                    /* WARNING: Subroutine does not return */
                _free((void *)cStack_18.mbr_0x4);
              }
              if (puVar8[2] == uVar12) break;
              puVar8 = (undefined4 *)*puVar8;
            }
            iVar2 = puVar8[4];
            iVar9 = FUN_00433760(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
            cls_0x401b00::meth_0x436410((cls_0x401b00 *)(puVar8 + 3),1);
            *(int *)(iVar2 + 4) = iVar9;
            **(int **)(iVar9 + 4) = iVar9;
          }
          break;
        case 3:
          FUN_00497120((byte *)"ApplyEquipEffects() - An equip effect had target of WORLD.\n");
          meth_0x55a570(this_00);
          break;
        default:
          handle_fatal_error("ApplyEquipEffects() - Unknown target type.");
        }
        local_44 = (undefined4 *)*local_44;
      } while (local_44 != (undefined4 *)local_38[1]);
    }
  }
  ExceptionList = (void *)cStack_18.mbr_0xc;
  return local_44;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameActionEquip::meth_0x46d470
          (GameActionEquip *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  local_2048[0].mbr_0x30 = 0x56;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  net::packet::meth_0x45f130(local_2048,param_3);
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

void __thiscall
GameActionEquip::meth_0x46d620(GameActionEquip *this,undefined4 param_1,uint param_2)

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
  local_2048[0].mbr_0x30 = 0x58;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f130(local_2048,param_2);
  GameServer::meth_0x5a0a00((GameServer *)this,local_2048,1);
  FUN_00497120((byte *)"Server - Sending GAME_ID_ENTITY_SETCURRENTHP");
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



void __thiscall
GameActionEquip::meth_0x46ec70
          (GameActionEquip *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  cls_0x616328 *pcVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  
  iVar5 = 0;
  pTVar4 = &GameEntity::RTTI_Type_Descriptor;
  pTVar3 = &Entity::RTTI_Type_Descriptor;
  iVar2 = 0;
  pcVar1 = (cls_0x616328 *)meth_0x54be10(this);
  iVar2 = FUN_006165e0(pcVar1,iVar2,pTVar3,pTVar4,iVar5);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x90) = param_2;
    *(undefined4 *)(iVar2 + 0x94) = param_3;
    meth_0x46d470(this,param_1,param_2,param_3);
  }
  return;
}



undefined4 __thiscall
GameActionEquip::meth_0x46ee10(GameActionEquip *this,uint param_1,uint param_2)

{
  cls_0x616328 *pcVar1;
  GameActionEquip *this_00;
  
  pcVar1 = (cls_0x616328 *)meth_0x54be10(this);
  if (pcVar1 != (cls_0x616328 *)0x0) {
    this_00 = (GameActionEquip *)
              FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,
                           0);
    if (this_00 != (GameActionEquip *)0x0) {
      meth_0x4629c0(this_00,param_2);
      meth_0x46d620(this,param_1,param_2);
      return 1;
    }
  }
  return 0;
}



int __thiscall GameActionEquip::meth_0x46fac0(GameActionEquip *this,int param_1,int param_2)

{
  cls_0x616328 *pcVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  
  if ((((param_1 < 0x15) && (-1 < param_1)) && (param_2 < 8)) && (-1 < param_2)) {
    iVar5 = 0;
    pTVar4 = &GameAmmo::RTTI_Type_Descriptor;
    pTVar3 = &Entity::RTTI_Type_Descriptor;
    iVar2 = 0;
    pcVar1 = (cls_0x616328 *)meth_0x54be10(this);
    iVar2 = FUN_006165e0(pcVar1,iVar2,pTVar3,pTVar4,iVar5);
    return iVar2;
  }
  return 0;
}



void __thiscall GameActionEquip::meth_0x54b090(GameActionEquip *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x29) == '\0') {
    meth_0x54b090(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



int __thiscall GameActionEquip::meth_0x54be10(GameActionEquip *this)

{
  undefined4 *puVar1;
  uint in_stack_00000004;
  GameActionEquip *local_4;
  
  if (DAT_0070be0c == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)*DAT_0070be0c;
  }
  for (; puVar1 != DAT_0070be0c; puVar1 = (undefined4 *)*puVar1) {
    if (*(uint *)(puVar1[2] + 0x1dc) == in_stack_00000004) {
      return puVar1[2];
    }
  }
  local_4 = this;
  cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)&DAT_0070be14,(int *)&local_4,&stack0x00000004);
  if (local_4 == DAT_0070be18) {
    return 0;
  }
  return *(int *)&(local_4->ActionEquip).mbr_0x10;
}



void __thiscall
GameActionEquip::meth_0x54cad0(GameActionEquip *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  int iVar2;
  int **_Memory;
  char *pcVar3;
  int **ppiVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  bool bVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006378e8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x29) != '\0') {
    pcVar3 = "@invalid map/set<T> iterator";
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ExceptionList = &pvStack_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"invalid map/set<T> iterator",(uint)(pcVar3 + -0x647b7c));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&out_of_range__vftable_647940_00647940;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8b84);
  }
  ExceptionList = &pvStack_c;
  cls_0x41d550::meth_0x56a0a0((cls_0x41d550 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x29) != '\0') goto LAB_0054cb86;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0054cb86:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 4) == _Memory) {
      *(int ***)(iVar2 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar4 = (int **)FUN_0056a080(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        uVar5 = FUN_0056a060((int)ppiVar7);
        *(undefined4 *)(iVar2 + 8) = uVar5;
      }
      else {
        *(int ***)(iVar2 + 8) = ppiVar8;
      }
    }
  }
  else {
    (*_Memory)[1] = (int)ppiVar4;
    *ppiVar4 = *_Memory;
    ppiVar8 = ppiVar4;
    if (ppiVar4 != (int **)_Memory[2]) {
      ppiVar8 = (int **)ppiVar4[1];
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 4) == _Memory) {
      *(int ***)(iVar2 + 4) = ppiVar4;
    }
    else {
      ppiVar6 = (int **)_Memory[1];
      if ((int **)*ppiVar6 == _Memory) {
        *ppiVar6 = (int *)ppiVar4;
      }
      else {
        ppiVar6[2] = (int *)ppiVar4;
      }
    }
    ppiVar4[1] = _Memory[1];
    uVar1 = *(undefined *)(ppiVar4 + 10);
    *(undefined *)(ppiVar4 + 10) = *(undefined *)(_Memory + 10);
    *(undefined *)(_Memory + 10) = uVar1;
  }
  if (*(char *)(_Memory + 10) == '\x01') {
    if (ppiVar7 != *(int ***)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 10) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 10) == '\0') {
            *(undefined *)(ppiVar6 + 10) = 1;
            *(undefined *)(ppiVar8 + 10) = 0;
            meth_0x569fa0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x29) == '\0') {
            if ((*(char *)(*ppiVar6 + 10) != '\x01') || (*(char *)(ppiVar6[2] + 10) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 10) == '\x01') {
                *(undefined *)(*ppiVar6 + 10) = 1;
                *(undefined *)(ppiVar6 + 10) = 0;
                meth_0x56a000(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 10) = *(undefined *)(ppiVar8 + 10);
              *(undefined *)(ppiVar8 + 10) = 1;
              *(undefined *)(ppiVar6[2] + 10) = 1;
              meth_0x569fa0(this,(int *)ppiVar8);
              break;
            }
LAB_0054cd1a:
            *(undefined *)(ppiVar6 + 10) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 10) == '\0') {
            *(undefined *)(ppiVar6 + 10) = 1;
            *(undefined *)(ppiVar8 + 10) = 0;
            meth_0x56a000(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x29) == '\0') {
            if ((*(char *)(ppiVar6[2] + 10) == '\x01') && (*(char *)(*ppiVar6 + 10) == '\x01'))
            goto LAB_0054cd1a;
            if (*(char *)(*ppiVar6 + 10) == '\x01') {
              *(undefined *)(ppiVar6[2] + 10) = 1;
              *(undefined *)(ppiVar6 + 10) = 0;
              meth_0x569fa0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 10) = *(undefined *)(ppiVar8 + 10);
            *(undefined *)(ppiVar8 + 10) = 1;
            *(undefined *)(*ppiVar6 + 10) = 1;
            meth_0x56a000(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 10) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
GameActionEquip::meth_0x54d3c0(GameActionEquip *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  
  ppiVar5 = param_3;
  ppiVar8 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
  if ((param_2 == (int **)*ppiVar8) && (param_3 == ppiVar8)) {
    meth_0x54b090(this);
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    *(int *)(iVar2 + 4) = iVar2;
    uVar3 = *(undefined4 *)&(this->ActionEquip).Action.mbr_0x4;
    *(undefined4 *)&(this->ActionEquip).field_0x8 = 0;
    *(undefined4 *)uVar3 = uVar3;
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    *(int *)(iVar2 + 8) = iVar2;
    *param_1 = **(int ***)&(this->ActionEquip).Action.mbr_0x4;
    return;
  }
  ppiVar7 = param_2;
  ppiVar8 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar8 = ppiVar7;
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar8 = (int **)ppiVar7[2];
        if (*(char *)((int)ppiVar8 + 0x29) == '\0') {
          cVar1 = *(char *)((int)*ppiVar8 + 0x29);
          ppiVar4 = (int **)*ppiVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar4 + 0x29);
            ppiVar8 = ppiVar4;
            ppiVar4 = (int **)*ppiVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar7[1] + 0x29);
          ppiVar6 = (int **)ppiVar7[1];
          ppiVar4 = ppiVar7;
          while ((ppiVar8 = ppiVar6, cVar1 == '\0' && (ppiVar4 == (int **)ppiVar8[2]))) {
            cVar1 = *(char *)((int)ppiVar8[1] + 0x29);
            ppiVar6 = (int **)ppiVar8[1];
            ppiVar4 = ppiVar8;
          }
        }
      }
      meth_0x54cad0(this,&param_2,ppiVar7);
      ppiVar7 = ppiVar8;
    } while (ppiVar8 != ppiVar5);
  }
  *param_1 = (int *)ppiVar8;
  return;
}



void __thiscall
GameActionEquip::meth_0x54d480
          (GameActionEquip *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int **ppiVar8;
  int **ppiVar9;
  int **ppiVar10;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006378e8;
  local_c = ExceptionList;
  if (0x9249247 < *(uint *)&(this->ActionEquip).field_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar6 = "map/set<T> too long";
    do {
      pcVar7 = pcVar6;
      pcVar6 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar7 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  uVar2 = *(undefined4 *)&(this->ActionEquip).Action.mbr_0x4;
  ExceptionList = &local_c;
  ppiVar8 = (int **)FUN_0054b190(uVar2,param_3,uVar2,param_4,0);
  ppiVar10 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
  *(int *)&(this->ActionEquip).field_0x8 = *(int *)&(this->ActionEquip).field_0x8 + 1;
  if (param_3 == ppiVar10) {
    ppiVar10[1] = (int *)ppiVar8;
    **(int ***)&(this->ActionEquip).Action.mbr_0x4 = (int *)ppiVar8;
    *(int ***)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 8) = ppiVar8;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar8;
    iVar3 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (param_3 == *(int ***)(iVar3 + 8)) {
      *(int ***)(iVar3 + 8) = ppiVar8;
    }
  }
  else {
    *param_3 = (int *)ppiVar8;
    ppiVar10 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
    if (param_3 == (int **)*ppiVar10) {
      *ppiVar10 = (int *)ppiVar8;
    }
  }
  cVar1 = *(char *)(ppiVar8[1] + 10);
  ppiVar10 = ppiVar8;
  while (cVar1 == '\0') {
    ppiVar9 = ppiVar10 + 1;
    ppiVar4 = (int **)*ppiVar9;
    piVar5 = (int *)*ppiVar4[1];
    if (ppiVar4 == (int **)piVar5) {
      piVar5 = (int *)ppiVar4[1][2];
      if (*(char *)(piVar5 + 10) == '\0') {
        *(undefined *)(ppiVar4 + 10) = 1;
        *(undefined *)(piVar5 + 10) = 1;
        *(undefined *)((*ppiVar9)[1] + 0x28) = 0;
        ppiVar10 = (int **)(*ppiVar9)[1];
      }
      else {
        if (ppiVar10 == (int **)ppiVar4[2]) {
          meth_0x569fa0(this,(int *)ppiVar4);
          ppiVar10 = ppiVar4;
        }
        *(undefined *)(ppiVar10[1] + 10) = 1;
        *(undefined *)(ppiVar10[1][1] + 0x28) = 0;
        meth_0x56a000(this,(int *)ppiVar10[1][1]);
      }
    }
    else if (*(char *)(piVar5 + 10) == '\0') {
      *(undefined *)(ppiVar4 + 10) = 1;
      *(undefined *)(piVar5 + 10) = 1;
      *(undefined *)((*ppiVar9)[1] + 0x28) = 0;
      ppiVar10 = (int **)(*ppiVar9)[1];
    }
    else {
      if (ppiVar10 == (int **)*ppiVar4) {
        meth_0x56a000(this,(int *)ppiVar4);
        ppiVar10 = ppiVar4;
      }
      *(undefined *)(ppiVar10[1] + 10) = 1;
      *(undefined *)(ppiVar10[1][1] + 0x28) = 0;
      meth_0x569fa0(this,(int *)ppiVar10[1][1]);
    }
    cVar1 = *(char *)(ppiVar10[1] + 10);
  }
  *(undefined *)(*(int *)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4) + 0x28) = 1;
  *param_1 = (int *)ppiVar8;
  ExceptionList = local_c;
  return;
}



void __thiscall
GameActionEquip::meth_0x54e1a0(GameActionEquip *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x29) == '\0') {
    ppiVar3 = (int **)ppiVar1[1];
    do {
      ppiVar5 = ppiVar3;
      local_4 = *param_2 < ppiVar5[3];
      if (local_4) {
        ppiVar3 = (int **)*ppiVar5;
      }
      else {
        ppiVar3 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar3 + 0x29) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x54d480(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56a100::meth_0x56a100((cls_0x56a100 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x54d480(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



int __thiscall GameActionEquip::meth_0x54ea80(GameActionEquip *this,int **param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_3c [2];
  undefined4 local_34 [6];
  int *local_1c;
  undefined4 local_18 [6];
  
  local_1c = *param_1;
  puVar3 = local_34;
  puVar4 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  piVar1 = (int *)meth_0x54e1a0(this,local_3c,&local_1c);
  return *piVar1 + 0x10;
}



void __thiscall GameActionEquip::meth_0x54ec90(GameActionEquip *this)

{
  int **ppiVar1;
  GameActionEquip *local_4;
  
  ppiVar1 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
  local_4 = this;
  meth_0x54d3c0(this,(int **)&local_4,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&(this->ActionEquip).Action.mbr_0x4);
}



void __thiscall GameActionEquip::meth_0x552930(GameActionEquip *this,undefined2 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined local_8 [8];
  
  iVar2 = *(int *)&(this->ActionEquip).field_0xc;
  if ((uint)(*(int *)&(this->ActionEquip).mbr_0x10 - iVar2) < 2) {
    World::~World((World *)local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_8,&DAT_006ddf94);
  }
  *param_1 = *(undefined2 *)(iVar2 + *(int *)&(this->ActionEquip).field_0x14);
  puVar1 = &(this->ActionEquip).field_0xc;
  *(int *)puVar1 = *(int *)puVar1 + 2;
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
GameActionEquip::meth_0x5544a0(GameActionEquip *this,undefined4 param_1,undefined4 param_2)

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
  local_2048[0].mbr_0x30 = 0x18;
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

void __thiscall
GameActionEquip::meth_0x554890(GameActionEquip *this,undefined4 param_1,undefined4 param_2)

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
  local_2048[0].mbr_0x30 = 0x1f;
  net::packet::meth_0x45f130(local_2048,param_1);
  net::packet::meth_0x45f0b0(local_2048,param_2);
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



void __thiscall
GameActionEquip::meth_0x5559b0(GameActionEquip *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = meth_0x54be10(this);
  if (iVar1 == 0) {
    FUN_00497120((byte *)"EntitySetTeamRank() - Invalid Entity ID %d.\n");
    return;
  }
  *(undefined4 *)(iVar1 + 0x36c) = param_2;
  meth_0x5544a0(this,param_1,param_2);
  return;
}



void __thiscall
GameActionEquip::meth_0x555c00(GameActionEquip *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = meth_0x54be10(this);
  if (iVar1 == 0) {
    FUN_00497120((byte *)"EntitySetSquadRank() - Invalid Entity ID %d\n");
    return;
  }
  *(undefined4 *)(iVar1 + 0x374) = param_2;
  meth_0x554890(this,param_1,param_2);
  return;
}



undefined4 __thiscall GameActionEquip::meth_0x55a240(GameActionEquip *this)

{
  undefined4 uVar1;
  
  if (*(int *)&(this->ActionEquip).Action.mbr_0x4 == 0) {
    if (DAT_0070bd98 == 0) {
      uVar1 = (**(code **)(iRam00000000 + 0x20))();
      *(undefined4 *)&(this->ActionEquip).Action.mbr_0x4 = uVar1;
      return uVar1;
    }
    uVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98) +
                        0x20))();
    *(undefined4 *)&(this->ActionEquip).Action.mbr_0x4 = uVar1;
  }
  return *(undefined4 *)&(this->ActionEquip).Action.mbr_0x4;
}



void __thiscall GameActionEquip::meth_0x55a360(GameActionEquip *this,undefined4 param_1)

{
  int *piVar1;
  
  *(undefined4 *)&(this->ActionEquip).mbr_0x10 = param_1;
  if ((int **)this->mbr_0x1c == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)this->mbr_0x1c;
  }
  if (piVar1 != (int *)this->mbr_0x1c) {
    do {
      meth_0x55a360((GameActionEquip *)piVar1[2],param_1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)this->mbr_0x1c);
  }
  return;
}



void __thiscall GameActionEquip::meth_0x55a3a0(GameActionEquip *this,undefined4 param_1)

{
  int *piVar1;
  
  *(undefined4 *)&(this->ActionEquip).field_0x14 = param_1;
  if ((int **)this->mbr_0x1c == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)this->mbr_0x1c;
  }
  if (piVar1 != (int *)this->mbr_0x1c) {
    do {
      meth_0x55a3a0((GameActionEquip *)piVar1[2],param_1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)this->mbr_0x1c);
  }
  return;
}



void __thiscall GameActionEquip::meth_0x55a3e0(GameActionEquip *this,int param_1,dword param_2)

{
  undefined4 *puVar1;
  
  (&this->mbr_0x28)[param_1] = param_2;
  puVar1 = (undefined4 *)this->mbr_0x1c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
  }
  if (puVar1 != (undefined4 *)this->mbr_0x1c) {
    do {
      meth_0x55a3e0((GameActionEquip *)puVar1[2],param_1,param_2);
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)this->mbr_0x1c);
  }
  return;
}



void __thiscall GameActionEquip::meth_0x55a420(GameActionEquip *this,undefined4 param_1)

{
  int *piVar1;
  
  *(char *)&this->mbr_0x38 = (char)param_1;
  if ((int **)this->mbr_0x1c == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)this->mbr_0x1c;
  }
  if (piVar1 != (int *)this->mbr_0x1c) {
    do {
      meth_0x55a420((GameActionEquip *)piVar1[2],param_1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)this->mbr_0x1c);
  }
  return;
}



void __thiscall GameActionEquip::meth_0x55a460(GameActionEquip *this)

{
  char cVar1;
  int *piVar2;
  
  if ((this->ActionEquip).field_0x8 == '\0') {
    cVar1 = (*(this->ActionEquip).Action.vftptr_0x0[1].virt_meth_0x6162e5_4)();
    if (cVar1 == '\0') {
      (this->ActionEquip).field_0xb = 1;
    }
    else {
      (this->ActionEquip).field_0x8 = 1;
      if ((int **)this->mbr_0x1c == (int **)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)this->mbr_0x1c;
      }
      if (piVar2 != (int *)this->mbr_0x1c) {
        do {
          meth_0x55a460((GameActionEquip *)piVar2[2]);
          piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)this->mbr_0x1c);
        return;
      }
    }
  }
  return;
}



void __thiscall GameActionEquip::meth_0x55a4b0(GameActionEquip *this)

{
  int *piVar1;
  
  if ((this->ActionEquip).field_0x9 == '\0') {
    (*(this->ActionEquip).Action.vftptr_0x0[1].virt_meth_0x6162e5_8)();
    (this->ActionEquip).field_0x9 = 1;
    if ((int **)this->mbr_0x1c == (int **)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = *(int **)this->mbr_0x1c;
    }
    if (piVar1 != (int *)this->mbr_0x1c) {
      do {
        meth_0x55a4b0((GameActionEquip *)piVar1[2]);
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)this->mbr_0x1c);
    }
  }
  return;
}



void __thiscall GameActionEquip::meth_0x55a4f0(GameActionEquip *this)

{
  Action__vftable_647888 *pAVar1;
  int *piVar2;
  
  if ((this->ActionEquip).field_0xa != '\0') {
    pAVar1 = (this->ActionEquip).Action.vftptr_0x0;
    (this->ActionEquip).field_0xa = 0;
    (*pAVar1[1].virt_meth_0x6162e5_16)();
    if ((int **)this->mbr_0x1c == (int **)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)this->mbr_0x1c;
    }
    if (piVar2 != (int *)this->mbr_0x1c) {
      do {
        meth_0x55a4f0((GameActionEquip *)piVar2[2]);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)this->mbr_0x1c);
    }
  }
  return;
}



void __thiscall GameActionEquip::meth_0x55a570(GameActionEquip *this)

{
  meth_0x55a4f0(this);
  if (this != (GameActionEquip *)0x0) {
    (*((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x4010d0_12)(this);
  }
  return;
}



void __thiscall GameActionEquip::meth_0x55af80(GameActionEquip *this)

{
  Action *pAVar1;
  
  if ((this->ActionEquip).field_0xa != '\0') {
    pAVar1 = (*(this->ActionEquip).Action.vftptr_0x0[1].virt_deldtor_0x4010e0_0)(this);
    if ((char)pAVar1 != '\0') {
      (this->ActionEquip).field_0xa = 0;
      GameEffect::meth_0x55ae10((GameEffect *)this);
      return;
    }
  }
  return;
}



void __thiscall GameActionEquip::meth_0x55afb0(GameActionEquip *this)

{
  GameActionEquip *pGVar1;
  char cVar2;
  int **ppiVar3;
  Action *pAVar4;
  int *piVar5;
  int iVar6;
  GameActionEquip *this_00;
  int *piVar7;
  int **ppiVar8;
  GameActionEquip *local_1c;
  undefined local_18 [4];
  int **local_14;
  dword local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637f68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ppiVar3 = (int **)FUN_0056e0b0();
  piVar7 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  local_14 = ppiVar3;
  if ((this->ActionEquip).field_0xb == '\0') {
    cVar2 = (*(this->ActionEquip).Action.vftptr_0x0[1].virt_meth_0x6162e5_20)();
    if (cVar2 != '\0') {
      if ((int **)this->mbr_0x1c != (int **)0x0) {
        piVar7 = *(int **)this->mbr_0x1c;
      }
      if (piVar7 != (int *)this->mbr_0x1c) {
        do {
          pGVar1 = (GameActionEquip *)piVar7[2];
          local_1c = pGVar1;
          meth_0x55afb0(pGVar1);
          pAVar4 = (*((pGVar1->ActionEquip).Action.vftptr_0x0)->virt_deldtor_0x4010e0_0)(pGVar1);
          if ((char)pAVar4 != '\0') {
            piVar5 = (int *)FUN_00433760(ppiVar3,ppiVar3[1],&local_1c);
            FUN_00467d80(local_18,1);
            ppiVar3[1] = piVar5;
            *(int **)piVar5[1] = piVar5;
            iVar6 = meth_0x54be10(this_00);
            *(undefined *)(iVar6 + 0x171) = 1;
            ppiVar3 = local_14;
          }
          piVar7 = (int *)*piVar7;
        } while (piVar7 != (int *)this->mbr_0x1c);
      }
    }
    if (ppiVar3 == (int **)0x0) {
      ppiVar8 = (int **)0x0;
    }
    else {
      ppiVar8 = (int **)*ppiVar3;
    }
    for (; ppiVar8 != ppiVar3; ppiVar8 = (int **)*ppiVar8) {
      pGVar1 = (GameActionEquip *)ppiVar8[2];
      FUN_0055a590(this,(int *)pGVar1);
      meth_0x55a570(pGVar1);
    }
    if (ppiVar3 == (int **)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *ppiVar3;
    }
    GUI::Interface::meth_0x4b9d60((Interface *)local_18,(int **)&local_1c,piVar7,(int *)ppiVar3);
  }
  else {
    if (ppiVar3 == (int **)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *ppiVar3;
    }
    GUI::Interface::meth_0x4b9d60((Interface *)local_18,(int **)&local_1c,piVar7,(int *)ppiVar3);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}



undefined4 __thiscall GameActionEquip::meth_0x55c1c0(GameActionEquip *this)

{
  int *piVar1;
  GameActionEquip *local_4;
  
  local_4 = this;
  piVar1 = (int *)cls_0x55c050::meth_0x55c050
                            ((cls_0x55c050 *)&(this->ActionEquip).field_0x8,(int *)&local_4,
                             &(this->ActionEquip).Action.mbr_0x4);
  return *(undefined4 *)(*piVar1 + 0x1c);
}



void __thiscall GameActionEquip::meth_0x55c1e0(GameActionEquip *this,undefined4 param_1)

{
  int *piVar1;
  GameActionEquip *local_4;
  
  local_4 = this;
  piVar1 = (int *)cls_0x55c050::meth_0x55c050
                            ((cls_0x55c050 *)&(this->ActionEquip).field_0x8,(int *)&local_4,
                             &(this->ActionEquip).Action.mbr_0x4);
  *(undefined4 *)(*piVar1 + 0x1c) = param_1;
  return;
}



void __thiscall GameActionEquip::meth_0x55c200(GameActionEquip *this,undefined4 param_1)

{
  int *piVar1;
  GameActionEquip *local_4;
  
  local_4 = this;
  piVar1 = (int *)cls_0x55c050::meth_0x55c050
                            ((cls_0x55c050 *)&(this->ActionEquip).field_0x8,(int *)&local_4,
                             &(this->ActionEquip).Action.mbr_0x4);
  *(undefined4 *)(*piVar1 + 0x20) = param_1;
  return;
}



void __thiscall GameActionEquip::meth_0x5691d0(GameActionEquip *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)&(this->ActionEquip).Action.mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x29) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x29) == '\0');
  }
  if ((puVar4 != puVar1) && ((uint)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



uint __thiscall GameActionEquip::RemoveFromSquad(GameActionEquip *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_8;
  int local_4;
  
  uVar1 = meth_0x54be10(this);
  if (uVar1 == 0) {
    uVar1 = FUN_00497120((byte *)"RemoveFromSquad() - Invalid entity ID %d.\n");
    return uVar1 & 0xffffff00;
  }
  local_8 = *(uint *)(uVar1 + 0x370);
  if (local_8 != 0) {
    meth_0x5691d0(this,&local_4,&local_8);
    if (local_4 != *(int *)&(this->ActionEquip).Action.mbr_0x4) {
      uVar2 = cls_0x401b00::meth_0x40e780((cls_0x401b00 *)(local_4 + 0x10),&param_1);
      *(undefined4 *)(uVar1 + 0x370) = 0;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = FUN_00497120((byte *)0x698450);
  }
  return uVar1 & 0xffffff00;
}



int __thiscall GameActionEquip::GetSquadAttitude(GameActionEquip *this,int *param_1,int *param_2)

{
  GameActionEquip *pGVar1;
  GameActionEquip *pGVar2;
  GameActionEquip *local_4;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    local_4 = this;
    meth_0x5691d0(this,(int *)&local_4,(uint *)&param_1);
    pGVar2 = local_4;
    pGVar1 = *(GameActionEquip **)&(this->ActionEquip).Action.mbr_0x4;
    if (local_4 == pGVar1) {
      FUN_00497120((byte *)"GetSquadAttitude() - Invalid source squad ID %d.\n");
    }
    else {
      meth_0x5691d0(this,(int *)&param_1,(uint *)&param_2);
      if ((GameActionEquip *)param_1 == pGVar1) {
        FUN_00497120((byte *)"GetSquadAttitude() - Invalid target squad ID %n");
        return 0;
      }
      cls_0x50dbb0::meth_0x51f0f0
                ((cls_0x50dbb0 *)&pGVar2->mbr_0x1c,(int *)&param_1,(uint *)&param_2);
      if (param_1 != (int *)pGVar2->mbr_0x20) {
        return param_1[4];
      }
    }
  }
  return 0;
}



int __thiscall GameActionEquip::GetSquadMemberList(GameActionEquip *this,int *param_1)

{
  GameActionEquip *local_4;
  
  local_4 = this;
  meth_0x5691d0(this,(int *)&local_4,(uint *)&param_1);
  if (local_4 == *(GameActionEquip **)&(this->ActionEquip).Action.mbr_0x4) {
    FUN_00497120((byte *)"GetSquadMemberList() - Invalid squad ID %d.\n");
    return 0;
  }
  return (int)&(local_4->ActionEquip).mbr_0x10;
}



uint __thiscall GameActionEquip::AddToSquad(GameActionEquip *this,int *param_1,int *param_2)

{
  int *piVar1;
  ActionEquip *pAVar2;
  uint uVar3;
  undefined4 uVar4;
  GameActionEquip *local_4;
  
  local_4 = this;
  uVar3 = meth_0x54be10(this);
  if (uVar3 == 0) {
    uVar3 = FUN_00497120((byte *)"AddToTeam() - Invalid entity ID %d.\n");
    return uVar3 & 0xffffff00;
  }
  piVar1 = *(int **)(uVar3 + 0x370);
  if (piVar1 != param_2) {
    meth_0x5691d0(this,(int *)&local_4,(uint *)&param_2);
    if (local_4 != *(GameActionEquip **)&(this->ActionEquip).Action.mbr_0x4) {
      pAVar2 = &local_4->ActionEquip;
      if (piVar1 != (int *)0x0) {
        RemoveFromSquad(this,param_1);
      }
      uVar4 = cls_0x401b00::meth_0x437e30((cls_0x401b00 *)&pAVar2->mbr_0x10,&param_1);
      *(int **)(uVar3 + 0x370) = param_2;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    uVar3 = FUN_00497120((byte *)"AddToSquad() - Invalid squad ID %d.\n");
  }
  return uVar3 & 0xffffff00;
}



uint __thiscall
GameActionEquip::meth_0x569480(GameActionEquip *this,int **param_1,int *param_2,int param_3)

{
  dword *this_00;
  GameActionEquip *pGVar1;
  int iVar2;
  GameActionEquip *pGVar3;
  uint uVar4;
  int *piVar5;
  GameActionEquip *local_4;
  
  local_4 = this;
  meth_0x5691d0(this,(int *)&local_4,(uint *)&param_1);
  pGVar3 = local_4;
  pGVar1 = *(GameActionEquip **)&(this->ActionEquip).Action.mbr_0x4;
  if (local_4 == pGVar1) {
    uVar4 = FUN_00497120((byte *)"SetSquadAttitude() - Invalid source squad ID %d.\n");
    return uVar4 & 0xffffff00;
  }
  meth_0x5691d0(this,(int *)&param_1,(uint *)&param_2);
  if ((GameActionEquip *)param_1 == pGVar1) {
    uVar4 = FUN_00497120((byte *)"SetSquadAttitude() - Invalid target squad ID %d.\n");
    return uVar4 & 0xffffff00;
  }
  this_00 = &pGVar3->mbr_0x1c;
  cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)this_00,(int *)&param_1,(uint *)&param_2);
  iVar2 = param_3;
  if (param_1 == (int **)pGVar3->mbr_0x20) {
    if (param_3 != 0) {
      piVar5 = (int *)FUN_0055abe0(this_00,&param_2);
      *piVar5 = iVar2;
      return CONCAT31((int3)((uint)piVar5 >> 8),1);
    }
  }
  else {
    if (param_3 != 0) {
      piVar5 = (int *)FUN_0055abe0(this_00,&param_2);
      *piVar5 = iVar2;
      return CONCAT31((int3)((uint)piVar5 >> 8),1);
    }
    param_1 = (int **)cls_0x50dbb0::meth_0x55a790((cls_0x50dbb0 *)this_00,&param_2,param_1);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}



void __thiscall
GameActionEquip::meth_0x569a30(GameActionEquip *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  int iVar2;
  int **_Memory;
  char *pcVar3;
  int **ppiVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  bool bVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638a08;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x29) != '\0') {
    pcVar3 = "@invalid map/set<T> iterator";
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ExceptionList = &pvStack_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"invalid map/set<T> iterator",(uint)(pcVar3 + -0x647b7c));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&out_of_range__vftable_647940_00647940;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8b84);
  }
  ExceptionList = &pvStack_c;
  cls_0x41d550::meth_0x56a0a0((cls_0x41d550 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x29) != '\0') goto LAB_00569ae6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_00569ae6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 4) == _Memory) {
      *(int ***)(iVar2 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar4 = (int **)FUN_0056a080(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        uVar5 = FUN_0056a060((int)ppiVar7);
        *(undefined4 *)(iVar2 + 8) = uVar5;
      }
      else {
        *(int ***)(iVar2 + 8) = ppiVar8;
      }
    }
  }
  else {
    (*_Memory)[1] = (int)ppiVar4;
    *ppiVar4 = *_Memory;
    ppiVar8 = ppiVar4;
    if (ppiVar4 != (int **)_Memory[2]) {
      ppiVar8 = (int **)ppiVar4[1];
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 4) == _Memory) {
      *(int ***)(iVar2 + 4) = ppiVar4;
    }
    else {
      ppiVar6 = (int **)_Memory[1];
      if ((int **)*ppiVar6 == _Memory) {
        *ppiVar6 = (int *)ppiVar4;
      }
      else {
        ppiVar6[2] = (int *)ppiVar4;
      }
    }
    ppiVar4[1] = _Memory[1];
    uVar1 = *(undefined *)(ppiVar4 + 10);
    *(undefined *)(ppiVar4 + 10) = *(undefined *)(_Memory + 10);
    *(undefined *)(_Memory + 10) = uVar1;
  }
  if (*(char *)(_Memory + 10) == '\x01') {
    if (ppiVar7 != *(int ***)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 10) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 10) == '\0') {
            *(undefined *)(ppiVar6 + 10) = 1;
            *(undefined *)(ppiVar8 + 10) = 0;
            meth_0x569fa0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x29) == '\0') {
            if ((*(char *)(*ppiVar6 + 10) != '\x01') || (*(char *)(ppiVar6[2] + 10) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 10) == '\x01') {
                *(undefined *)(*ppiVar6 + 10) = 1;
                *(undefined *)(ppiVar6 + 10) = 0;
                meth_0x56a000(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 10) = *(undefined *)(ppiVar8 + 10);
              *(undefined *)(ppiVar8 + 10) = 1;
              *(undefined *)(ppiVar6[2] + 10) = 1;
              meth_0x569fa0(this,(int *)ppiVar8);
              break;
            }
LAB_00569c7a:
            *(undefined *)(ppiVar6 + 10) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 10) == '\0') {
            *(undefined *)(ppiVar6 + 10) = 1;
            *(undefined *)(ppiVar8 + 10) = 0;
            meth_0x56a000(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x29) == '\0') {
            if ((*(char *)(ppiVar6[2] + 10) == '\x01') && (*(char *)(*ppiVar6 + 10) == '\x01'))
            goto LAB_00569c7a;
            if (*(char *)(*ppiVar6 + 10) == '\x01') {
              *(undefined *)(ppiVar6[2] + 10) = 1;
              *(undefined *)(ppiVar6 + 10) = 0;
              meth_0x569fa0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 10) = *(undefined *)(ppiVar8 + 10);
            *(undefined *)(ppiVar8 + 10) = 1;
            *(undefined *)(*ppiVar6 + 10) = 1;
            meth_0x56a000(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 10) = 1;
  }
  cls_0x569560::meth_0x5695e0((cls_0x569560 *)(_Memory + 4));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall GameActionEquip::meth_0x569d10(GameActionEquip *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x29) == '\0') {
    meth_0x569d10(this);
    FUN_005696e0((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
GameActionEquip::meth_0x569e20(GameActionEquip *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  
  ppiVar5 = param_3;
  ppiVar8 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
  if ((param_2 == (int **)*ppiVar8) && (param_3 == ppiVar8)) {
    meth_0x569d10(this);
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    *(int *)(iVar2 + 4) = iVar2;
    uVar3 = *(undefined4 *)&(this->ActionEquip).Action.mbr_0x4;
    *(undefined4 *)&(this->ActionEquip).field_0x8 = 0;
    *(undefined4 *)uVar3 = uVar3;
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    *(int *)(iVar2 + 8) = iVar2;
    *param_1 = **(int ***)&(this->ActionEquip).Action.mbr_0x4;
    return;
  }
  ppiVar7 = param_2;
  ppiVar8 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar8 = ppiVar7;
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar8 = (int **)ppiVar7[2];
        if (*(char *)((int)ppiVar8 + 0x29) == '\0') {
          cVar1 = *(char *)((int)*ppiVar8 + 0x29);
          ppiVar4 = (int **)*ppiVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar4 + 0x29);
            ppiVar8 = ppiVar4;
            ppiVar4 = (int **)*ppiVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar7[1] + 0x29);
          ppiVar6 = (int **)ppiVar7[1];
          ppiVar4 = ppiVar7;
          while ((ppiVar8 = ppiVar6, cVar1 == '\0' && (ppiVar4 == (int **)ppiVar8[2]))) {
            cVar1 = *(char *)((int)ppiVar8[1] + 0x29);
            ppiVar6 = (int **)ppiVar8[1];
            ppiVar4 = ppiVar8;
          }
        }
      }
      meth_0x569a30(this,&param_2,ppiVar7);
      ppiVar7 = ppiVar8;
    } while (ppiVar8 != ppiVar5);
  }
  *param_1 = (int *)ppiVar8;
  return;
}



void __thiscall GameActionEquip::meth_0x569fa0(GameActionEquip *this,int *param_1)

{
  int **ppiVar1;
  int iVar2;
  int **ppiVar3;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x29) == '\0') {
    (*ppiVar1)[1] = (int)param_1;
  }
  ppiVar1[1] = (int *)param_1[1];
  iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
  if (param_1 == *(int **)(iVar2 + 4)) {
    *(int ***)(iVar2 + 4) = ppiVar1;
    *ppiVar1 = param_1;
    param_1[1] = (int)ppiVar1;
    return;
  }
  ppiVar3 = (int **)param_1[1];
  if (param_1 == *ppiVar3) {
    *ppiVar3 = (int *)ppiVar1;
    *ppiVar1 = param_1;
    param_1[1] = (int)ppiVar1;
    return;
  }
  ppiVar3[2] = (int *)ppiVar1;
  *ppiVar1 = param_1;
  param_1[1] = (int)ppiVar1;
  return;
}



void __thiscall GameActionEquip::meth_0x56a000(GameActionEquip *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x29) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
  if (param_1 == *(int **)(iVar2 + 4)) {
    *(int *)(iVar2 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar3 = (int *)param_1[1];
  if (param_1 == (int *)piVar3[2]) {
    piVar3[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar3 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}



uint __thiscall GameActionEquip::meth_0x56a1a0(GameActionEquip *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_8;
  int local_4;
  
  uVar1 = meth_0x54be10(this);
  if (uVar1 == 0) {
    uVar1 = FUN_00497120((byte *)"RemoveFromTeam() - Invalid entity ID %d.\n");
    return uVar1 & 0xffffff00;
  }
  local_8 = *(uint *)(uVar1 + 0x368);
  if (local_8 != 0) {
    meth_0x5691d0(this,&local_4,&local_8);
    if (local_4 != *(int *)&(this->ActionEquip).Action.mbr_0x4) {
      uVar2 = cls_0x401b00::meth_0x40e780((cls_0x401b00 *)(local_4 + 0x10),&param_1);
      *(undefined4 *)(uVar1 + 0x368) = 0;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = FUN_00497120((byte *)0x698a70);
  }
  return uVar1 & 0xffffff00;
}



int __thiscall GameActionEquip::GetTeamAttitude(GameActionEquip *this,int *param_1,int *param_2)

{
  GameActionEquip *pGVar1;
  GameActionEquip *pGVar2;
  GameActionEquip *local_4;
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_1 != param_2)) {
    local_4 = this;
    meth_0x5691d0(this,(int *)&local_4,(uint *)&param_1);
    pGVar2 = local_4;
    pGVar1 = *(GameActionEquip **)&(this->ActionEquip).Action.mbr_0x4;
    if (local_4 == pGVar1) {
      FUN_00497120((byte *)"GetTeamAttitude() - Invalid source team ID %d.\n");
    }
    else {
      meth_0x5691d0(this,(int *)&param_1,(uint *)&param_2);
      if ((GameActionEquip *)param_1 == pGVar1) {
        FUN_00497120((byte *)"GetTeamAttitude() - Invalid target team ID %d.\n");
        return 0;
      }
      cls_0x50dbb0::meth_0x51f0f0
                ((cls_0x50dbb0 *)&pGVar2->mbr_0x1c,(int *)&param_1,(uint *)&param_2);
      if (param_1 != (int *)pGVar2->mbr_0x20) {
        return param_1[4];
      }
    }
  }
  return 0;
}



int __thiscall GameActionEquip::GetTeamMemberList(GameActionEquip *this,int *param_1)

{
  GameActionEquip *local_4;
  
  local_4 = this;
  meth_0x5691d0(this,(int *)&local_4,(uint *)&param_1);
  if (local_4 == *(GameActionEquip **)&(this->ActionEquip).Action.mbr_0x4) {
    FUN_00497120((byte *)"GetTeamMemberList() - Invalid team ID %d.\n");
    return 0;
  }
  return (int)&(local_4->ActionEquip).mbr_0x10;
}



uint __thiscall GameActionEquip::AddToTeam(GameActionEquip *this,int *param_1,int *param_2)

{
  int *piVar1;
  ActionEquip *pAVar2;
  uint uVar3;
  undefined4 uVar4;
  GameActionEquip *local_4;
  
  local_4 = this;
  uVar3 = meth_0x54be10(this);
  if (uVar3 == 0) {
    uVar3 = FUN_00497120((byte *)"AddToTeam() - Invalid entity ID %d.\n");
    return uVar3 & 0xffffff00;
  }
  piVar1 = *(int **)(uVar3 + 0x368);
  if (piVar1 != param_2) {
    meth_0x5691d0(this,(int *)&local_4,(uint *)&param_2);
    if (local_4 != *(GameActionEquip **)&(this->ActionEquip).Action.mbr_0x4) {
      pAVar2 = &local_4->ActionEquip;
      if (piVar1 != (int *)0x0) {
        meth_0x56a1a0(this,param_1);
      }
      uVar4 = cls_0x401b00::meth_0x437e30((cls_0x401b00 *)&pAVar2->mbr_0x10,&param_1);
      *(int **)(uVar3 + 0x368) = param_2;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    uVar3 = FUN_00497120((byte *)"AddToTeam() - Invalid team ID %d.\n");
  }
  return uVar3 & 0xffffff00;
}



uint __thiscall
GameActionEquip::SetTeamAttitude(GameActionEquip *this,int **param_1,int *param_2,int param_3)

{
  dword *this_00;
  GameActionEquip *pGVar1;
  int iVar2;
  GameActionEquip *pGVar3;
  uint uVar4;
  int *piVar5;
  GameActionEquip *local_4;
  
  local_4 = this;
  meth_0x5691d0(this,(int *)&local_4,(uint *)&param_1);
  pGVar3 = local_4;
  pGVar1 = *(GameActionEquip **)&(this->ActionEquip).Action.mbr_0x4;
  if (local_4 == pGVar1) {
    uVar4 = FUN_00497120((byte *)"SetTeamAttitude() - Invalid source team ID %d.\n");
    return uVar4 & 0xffffff00;
  }
  meth_0x5691d0(this,(int *)&param_1,(uint *)&param_2);
  if ((GameActionEquip *)param_1 == pGVar1) {
    uVar4 = FUN_00497120((byte *)"SetTeamAttitude() - Invalid target team ID %d.\n");
    return uVar4 & 0xffffff00;
  }
  this_00 = &pGVar3->mbr_0x1c;
  cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)this_00,(int *)&param_1,(uint *)&param_2);
  iVar2 = param_3;
  if (param_1 == (int **)pGVar3->mbr_0x20) {
    if (param_3 != 0) {
      piVar5 = (int *)FUN_0055abe0(this_00,&param_2);
      *piVar5 = iVar2;
      return CONCAT31((int3)((uint)piVar5 >> 8),1);
    }
  }
  else {
    if (param_3 != 0) {
      piVar5 = (int *)FUN_0055abe0(this_00,&param_2);
      *piVar5 = iVar2;
      return CONCAT31((int3)((uint)piVar5 >> 8),1);
    }
    param_1 = (int **)cls_0x50dbb0::meth_0x55a790((cls_0x50dbb0 *)this_00,&param_2,param_1);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}



void __thiscall
GameActionEquip::meth_0x56a990(GameActionEquip *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  int iVar2;
  int **_Memory;
  char *pcVar3;
  int **ppiVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  bool bVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638ac8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x29) != '\0') {
    pcVar3 = "@invalid map/set<T> iterator";
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ExceptionList = &pvStack_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"invalid map/set<T> iterator",(uint)(pcVar3 + -0x647b7c));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&out_of_range__vftable_647940_00647940;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8b84);
  }
  ExceptionList = &pvStack_c;
  cls_0x41d550::meth_0x56a0a0((cls_0x41d550 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x29) != '\0') goto LAB_0056aa46;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0056aa46:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 4) == _Memory) {
      *(int ***)(iVar2 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar4 = (int **)FUN_0056a080(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        uVar5 = FUN_0056a060((int)ppiVar7);
        *(undefined4 *)(iVar2 + 8) = uVar5;
      }
      else {
        *(int ***)(iVar2 + 8) = ppiVar8;
      }
    }
  }
  else {
    (*_Memory)[1] = (int)ppiVar4;
    *ppiVar4 = *_Memory;
    ppiVar8 = ppiVar4;
    if (ppiVar4 != (int **)_Memory[2]) {
      ppiVar8 = (int **)ppiVar4[1];
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    if (*(int ***)(iVar2 + 4) == _Memory) {
      *(int ***)(iVar2 + 4) = ppiVar4;
    }
    else {
      ppiVar6 = (int **)_Memory[1];
      if ((int **)*ppiVar6 == _Memory) {
        *ppiVar6 = (int *)ppiVar4;
      }
      else {
        ppiVar6[2] = (int *)ppiVar4;
      }
    }
    ppiVar4[1] = _Memory[1];
    uVar1 = *(undefined *)(ppiVar4 + 10);
    *(undefined *)(ppiVar4 + 10) = *(undefined *)(_Memory + 10);
    *(undefined *)(_Memory + 10) = uVar1;
  }
  if (*(char *)(_Memory + 10) == '\x01') {
    if (ppiVar7 != *(int ***)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 10) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 10) == '\0') {
            *(undefined *)(ppiVar6 + 10) = 1;
            *(undefined *)(ppiVar8 + 10) = 0;
            meth_0x569fa0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x29) == '\0') {
            if ((*(char *)(*ppiVar6 + 10) != '\x01') || (*(char *)(ppiVar6[2] + 10) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 10) == '\x01') {
                *(undefined *)(*ppiVar6 + 10) = 1;
                *(undefined *)(ppiVar6 + 10) = 0;
                meth_0x56a000(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 10) = *(undefined *)(ppiVar8 + 10);
              *(undefined *)(ppiVar8 + 10) = 1;
              *(undefined *)(ppiVar6[2] + 10) = 1;
              meth_0x569fa0(this,(int *)ppiVar8);
              break;
            }
LAB_0056abda:
            *(undefined *)(ppiVar6 + 10) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 10) == '\0') {
            *(undefined *)(ppiVar6 + 10) = 1;
            *(undefined *)(ppiVar8 + 10) = 0;
            meth_0x56a000(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x29) == '\0') {
            if ((*(char *)(ppiVar6[2] + 10) == '\x01') && (*(char *)(*ppiVar6 + 10) == '\x01'))
            goto LAB_0056abda;
            if (*(char *)(*ppiVar6 + 10) == '\x01') {
              *(undefined *)(ppiVar6[2] + 10) = 1;
              *(undefined *)(ppiVar6 + 10) = 0;
              meth_0x569fa0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 10) = *(undefined *)(ppiVar8 + 10);
            *(undefined *)(ppiVar8 + 10) = 1;
            *(undefined *)(*ppiVar6 + 10) = 1;
            meth_0x56a000(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(*(int *)&(this->ActionEquip).Action.mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 10) = 1;
  }
  cls_0x56a4c0::meth_0x56a540((cls_0x56a4c0 *)(_Memory + 4));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall GameActionEquip::meth_0x56ac70(GameActionEquip *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x29) == '\0') {
    meth_0x56ac70(this);
    FUN_0056a640((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
GameActionEquip::meth_0x56ad80(GameActionEquip *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  
  ppiVar5 = param_3;
  ppiVar8 = *(int ***)&(this->ActionEquip).Action.mbr_0x4;
  if ((param_2 == (int **)*ppiVar8) && (param_3 == ppiVar8)) {
    meth_0x56ac70(this);
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    *(int *)(iVar2 + 4) = iVar2;
    uVar3 = *(undefined4 *)&(this->ActionEquip).Action.mbr_0x4;
    *(undefined4 *)&(this->ActionEquip).field_0x8 = 0;
    *(undefined4 *)uVar3 = uVar3;
    iVar2 = *(int *)&(this->ActionEquip).Action.mbr_0x4;
    *(int *)(iVar2 + 8) = iVar2;
    *param_1 = **(int ***)&(this->ActionEquip).Action.mbr_0x4;
    return;
  }
  ppiVar7 = param_2;
  ppiVar8 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar8 = ppiVar7;
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar8 = (int **)ppiVar7[2];
        if (*(char *)((int)ppiVar8 + 0x29) == '\0') {
          cVar1 = *(char *)((int)*ppiVar8 + 0x29);
          ppiVar4 = (int **)*ppiVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar4 + 0x29);
            ppiVar8 = ppiVar4;
            ppiVar4 = (int **)*ppiVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar7[1] + 0x29);
          ppiVar6 = (int **)ppiVar7[1];
          ppiVar4 = ppiVar7;
          while ((ppiVar8 = ppiVar6, cVar1 == '\0' && (ppiVar4 == (int **)ppiVar8[2]))) {
            cVar1 = *(char *)((int)ppiVar8[1] + 0x29);
            ppiVar6 = (int **)ppiVar8[1];
            ppiVar4 = ppiVar8;
          }
        }
      }
      meth_0x56a990(this,&param_2,ppiVar7);
      ppiVar7 = ppiVar8;
    } while (ppiVar8 != ppiVar5);
  }
  *param_1 = (int *)ppiVar8;
  return;
}



bool __thiscall GameActionEquip::GetAreaRestStatus(GameActionEquip *this,uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  GameActionEquip *pGVar4;
  int *piVar5;
  uint *in_stack_00000008;
  GameActionEquip *local_4;
  
  local_4 = this;
  uVar1 = FUN_0059af40((int)param_1,in_stack_00000008,0);
  if ((char)uVar1 == '\0') {
    return false;
  }
  iVar2 = FUN_005cccc0((int)param_1,0x464c534d,&local_4);
  if (iVar2 != 0) {
    FUN_0059ad20((int)param_1,(byte *)"GetAreaRestStatus() was unable to retrieve \'myself\' id.");
    return false;
  }
  uVar3 = (uint)local_4 >> 0x1d;
  if (uVar3 == 0) {
    iVar2 = meth_0x54be10(local_4);
    if (iVar2 == 0) goto LAB_005c7a0a;
    pGVar4 = *(GameActionEquip **)(iVar2 + 0x1ec);
  }
  else {
    pGVar4 = local_4;
    if (uVar3 != 1) {
      if ((uVar3 != 2) || (iVar2 = FUN_005b1570((int)local_4), iVar2 == 0)) goto LAB_005c7a0a;
      pGVar4 = *(GameActionEquip **)(iVar2 + 0x2c);
    }
  }
  if (pGVar4 != (GameActionEquip *)0x0) {
    piVar5 = DAT_0070bd98;
    if (DAT_0070bd98 != (int *)0x0) {
      piVar5 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
    }
    iVar2 = (**(code **)(*piVar5 + 0x54))(pGVar4);
    return *(char *)(iVar2 + 0x1d8) == '\x01';
  }
LAB_005c7a0a:
  FUN_0059ad20((int)param_1,(byte *)"GetAreaRestStatus() was unable to resolve the map.");
  return false;
}


#include "../include/GameActionEquip.h"
