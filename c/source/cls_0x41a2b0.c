#include "../include/cls_0x41a2b0.h"

void __thiscall cls_0x41a2b0::meth_0x416b80(cls_0x41a2b0 *this)

{
  int *piVar1;
  cls_0x441d20 *pcVar2;
  dword dVar3;
  char cVar4;
  int iVar5;
  undefined uVar6;
  
  cVar4 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)));
  if (cVar4 != '\x01') {
    iVar5 = FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x2c),0,&Client::RTTI_Type_Descriptor,
                         &GameClient::RTTI_Type_Descriptor,0);
    piVar1 = *(int **)(*(int *)(iVar5 + 0xa0) + 0xc);
    pcVar2 = *(cls_0x441d20 **)(*(int *)(iVar5 + 0xa0) + 0x48);
    dVar3 = (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4;
    if (dVar3 == 0) {
      uVar6 = 1;
    }
    else {
      if (dVar3 != 1) {
        if (dVar3 != 2) {
          return;
        }
        CLoadMapInterface::meth_0x495220
                  ((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
        CLoadMapInterface::meth_0x495220
                  ((CLoadMapInterface *)((int)&pcVar2->mbr_0x0 + *(int *)(pcVar2->mbr_0x0 + 4)),0);
        FUN_00442b30(pcVar2);
        return;
      }
      uVar6 = 0;
    }
    CLoadMapInterface::meth_0x495220
              ((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),uVar6);
    CLoadMapInterface::meth_0x495220
              ((CLoadMapInterface *)((int)&pcVar2->mbr_0x0 + *(int *)(pcVar2->mbr_0x0 + 4)),1);
  }
  return;
}



void __thiscall cls_0x41a2b0::meth_0x416cd0(cls_0x41a2b0 *this,char param_1)

{
  cls_0x616328 *pcVar1;
  GameCreature *this_00;
  uint uVar2;
  int iVar3;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  int iVar6;
  
  iVar6 = 0;
  pTVar5 = &GameCreature::RTTI_Type_Descriptor;
  pTVar4 = &Entity::RTTI_Type_Descriptor;
  iVar3 = 0;
  pcVar1 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  this_00 = (GameCreature *)FUN_006165e0(pcVar1,iVar3,pTVar4,pTVar5,iVar6);
  uVar2 = -(uint)(param_1 != '\0') & 2;
  if (this_00 != (GameCreature *)0x0) {
    CounterControl::meth_0x4313b0
              ((CounterControl *)this->mbr_0x90,(this_00->GameEntity).mbr_0x24,uVar2);
    CounterControl::meth_0x4313b0((CounterControl *)this->mbr_0x94,0,uVar2);
    iVar3 = GameCreature::GetDerivedAttribute(this_00,(int *)0x4);
    CounterControl::meth_0x4313b0((CounterControl *)this->mbr_0x98,iVar3,uVar2);
    return;
  }
  CounterControl::meth_0x4313b0((CounterControl *)this->mbr_0x90,0,uVar2);
  CounterControl::meth_0x4313b0((CounterControl *)this->mbr_0x94,0,uVar2);
  CounterControl::meth_0x4313b0((CounterControl *)this->mbr_0x98,0,uVar2);
  return;
}



void __thiscall cls_0x41a2b0::meth_0x416d80(cls_0x41a2b0 *this)

{
  cls_0x616328 *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  int iVar7;
  
  iVar7 = 0;
  pTVar6 = &GameCreature::RTTI_Type_Descriptor;
  pTVar5 = &Entity::RTTI_Type_Descriptor;
  iVar4 = 0;
  pcVar1 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  puVar2 = (undefined4 *)FUN_006165e0(pcVar1,iVar4,pTVar5,pTVar6,iVar7);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (**(code **)*puVar2)();
    if (uVar3 != 0) {
      GameActionEquip::meth_0x416c60((GameActionEquip *)this,0,(uint)(puVar2[9] * 100) / uVar3);
      return;
    }
    GameActionEquip::meth_0x416c60((GameActionEquip *)this,0,0);
  }
  return;
}



int __thiscall cls_0x41a2b0::meth_0x416df0(cls_0x41a2b0 *this)

{
  int iVar1;
  
  if (this->mbr_0x88 != 0) {
    iVar1 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
    if (iVar1 != 0) {
      iVar1 = FUN_006165e0(*(cls_0x616328 **)(iVar1 + 0x168),0,&Inventory::RTTI_Type_Descriptor,
                           &GameInventory::RTTI_Type_Descriptor,0);
      return iVar1;
    }
  }
  return 0;
}



void __thiscall cls_0x41a2b0::meth_0x416e30(cls_0x41a2b0 *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if ((-1 < param_1) && (param_1 < 2)) {
    piVar1 = (int *)(&this->mbr_0xbc)[param_1];
    if (((int *)(&this->mbr_0xb4)[param_1] != (int *)0x0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*(int *)(&this->mbr_0xb4)[param_1] + 300))(param_2);
      (**(code **)(*piVar1 + 300))(param_2);
    }
  }
  return;
}



undefined4 __thiscall cls_0x41a2b0::meth_0x416e80(cls_0x41a2b0 *this,int param_1)

{
  if (((-1 < param_1) && (param_1 < 2)) && ((int *)(&this->mbr_0xd4)[param_1] != (int *)0x0)) {
    param_1 = (**(code **)(*(int *)(&this->mbr_0xd4)[param_1] + 0x68))();
    if ((char)param_1 == '\0') {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
  }
  return param_1 & 0xffffff00;
}



void __thiscall cls_0x41a2b0::meth_0x416eb0(cls_0x41a2b0 *this,int param_1,char param_2)

{
  cls_0x4a6d90 *this_00;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((-1 < param_1) && (param_1 < 2)) {
    this_00 = (cls_0x4a6d90 *)(&this->mbr_0x9c)[param_1];
    piVar1 = (int *)(&this->mbr_0xd4)[param_1];
    piVar2 = (int *)(&this->mbr_0xc4)[param_1];
    if ((this_00 != (cls_0x4a6d90 *)0x0) &&
       ((((int *)(&this->mbr_0xb4)[param_1] != (int *)0x0 && (piVar2 != (int *)0x0)) &&
        (piVar1 != (int *)0x0)))) {
      iVar3 = *(int *)(&this->mbr_0xb4)[param_1];
      if (param_2 != '\0') {
        (**(code **)(iVar3 + 0x168))(0xb46e6e3c);
        (**(code **)(*piVar2 + 0x168))(0xb46e6e3c);
        (**(code **)(*piVar1 + 100))(0);
        (**(code **)(*piVar1 + 0x74))(0);
        cls_0x4a6d90::meth_0x4a6d90(this_00,1);
        return;
      }
      (**(code **)(iVar3 + 0x168))(0xb43c3c3c);
      (**(code **)(*piVar2 + 0x168))(0xb43c3c3c);
      (**(code **)(*piVar1 + 100))(100);
      (**(code **)(*piVar1 + 0x74))(1);
      cls_0x4a6d90::meth_0x4a6d90(this_00,0);
    }
  }
  return;
}



void __thiscall cls_0x41a2b0::meth_0x416fb0(cls_0x41a2b0 *this)

{
  dword *pdVar1;
  int iVar2;
  
  this->mbr_0x290 = 0;
  this->mbr_0x294 = 0;
  pdVar1 = &this->mbr_0x278;
  iVar2 = 6;
  do {
    (**(code **)(**(int **)(*pdVar1 + 4) + 0x54))(1);
    pdVar1 = pdVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void __thiscall cls_0x41a2b0::meth_0x416ff0(cls_0x41a2b0 *this,int param_1,char param_2)

{
  if ((-1 < param_1) && (param_1 < 2)) {
    if ((int *)(&this->mbr_0xdc)[param_1] != (int *)0x0) {
      (**(code **)(*(int *)(&this->mbr_0xdc)[param_1] + 0x54))(param_2 == '\0');
    }
    if ((int *)(&this->mbr_0xe4)[param_1] != (int *)0x0) {
      (**(code **)(*(int *)(&this->mbr_0xe4)[param_1] + 0x54))(param_2 == '\0');
    }
  }
  return;
}



void __thiscall cls_0x41a2b0::meth_0x4172d0(cls_0x41a2b0 *this,int param_1)

{
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = param_1;
  meth_0x416b80(this);
  return;
}



void __thiscall cls_0x41a2b0::meth_0x417370(cls_0x41a2b0 *this,int param_1,uint param_2)

{
  GameActionEquip *this_00;
  cls_0x616328 *pcVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_24;
  void *pvStack_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062c4b8;
  local_c = ExceptionList;
  this_00 = *(GameActionEquip **)
             (&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 + param_1 * 4);
  if (this_00 != (GameActionEquip *)0x0) {
    if (param_2 == 0) {
      ExceptionList = &local_c;
      (*(this_00->ActionEquip).Action.vftptr_0x0[3].virt_deldtor_0x4010e0_0)(this_00);
      ExceptionList = pvStack_10;
      return;
    }
    ExceptionList = &local_c;
    pcVar1 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_00);
    iVar2 = FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0)
    ;
    if (iVar2 != 0) {
      (**(code **)(**(int **)(&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 +
                             param_1 * 4) + 0x54))(0);
      uVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0xa8))
                        (&stack0xffffffd4);
      local_c = (void *)0x0;
      (**(code **)(*(int *)(&this->mbr_0x40)[param_1] + 300))(uVar3);
      if ((void *)0xf < pvStack_10) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_24);
      }
    }
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x41a2b0::meth_0x417450(cls_0x41a2b0 *this,int param_1,int param_2)

{
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c018;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0056c280(param_2,local_2c);
  meth_0x416e30(this,param_1,local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x41a2b0::meth_0x417a50(cls_0x41a2b0 *this,int param_1)

{
  char *pcVar1;
  char *pcVar2;
  dword *pdVar3;
  int local_48;
  undefined local_44 [4];
  void *local_40;
  dword local_30;
  dword local_2c;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  dword local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  puStack_8 = &LAB_0062c000;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_48 = 0;
  pdVar3 = (dword *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20;
  ExceptionList = &pVStack_c;
  do {
    local_4 = 0xffffffff;
    if (local_48 == param_1) {
      local_2c = 0xf;
      local_30 = 0;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
      pcVar1 = "f3_actionbar_PC_up.tga";
      do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_44,"f3_actionbar_PC_up.tga",(uint)(pcVar2 + -0x6505f4));
      local_4 = 0;
      (**(code **)(*(int *)*pdVar3 + 0x130))(local_44,0,0,0,0xbf800000,0xbf800000,1);
      local_4 = 0xffffffff;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        _free(local_40);
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
    }
    else {
      local_10 = 0xf;
      local_14 = 0;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
      pcVar1 = "f3_actionbar_PC_down.tga";
      do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_28,"f3_actionbar_PC_down.tga",(uint)(pcVar2 + -0x6505d8));
      local_4 = 1;
      (**(code **)(*(int *)*pdVar3 + 0x130))(local_28,0,0,0,0xbf800000,0xbf800000,1);
      local_4 = 0xffffffff;
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        _free(local_24);
      }
      local_10 = 0xf;
      local_14 = 0;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
    }
    local_48 = local_48 + 1;
    pdVar3 = pdVar3 + 1;
    if (5 < local_48) {
      ExceptionList = pVStack_c;
      return;
    }
  } while( true );
}



void __thiscall cls_0x41a2b0::meth_0x417cf0(cls_0x41a2b0 *this,int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  cls_0x616328 *pcVar5;
  dword *pdVar6;
  cls_0x4d8d70 *this_00;
  uint unaff_retaddr;
  undefined4 uStack_74;
  undefined4 uStack_70;
  cls_0x4d8d70 local_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c048;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if ((param_1 < 0) || (1 < param_1)) goto LAB_00417f23;
  piVar1 = (int *)(&this->mbr_0xa4)[param_1];
  piVar2 = (int *)(&this->mbr_0xac)[param_1];
  if ((piVar1 == (int *)0x0) || (piVar2 == (int *)0x0)) goto LAB_00417f23;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    (**(code **)(*piVar1 + 100))();
    (**(code **)(*piVar1 + 0x74))();
    (**(code **)(*piVar2 + 100))();
    (**(code **)(*piVar2 + 0x74))();
    goto LAB_00417f23;
  }
  ExceptionList = &local_c;
  iVar4 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  pcVar5 = (cls_0x616328 *)cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar4 + 0x168),param_2);
  uStack_70 = 0x417daa;
  iVar4 = FUN_006165e0(pcVar5,0,&Entity::RTTI_Type_Descriptor,&GameItem::RTTI_Type_Descriptor,0);
  if (iVar4 == 0) {
    (**(code **)(*piVar1 + 100))();
    (**(code **)(*piVar1 + 0x74))();
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xffffffb0,"icon_unknown.bmp");
    uStack_70 = 0;
    uStack_74 = 0;
    local_c = (void *)0x1;
    (**(code **)(*piVar1 + 0x130))(&stack0xffffffb0,0);
    local_48.mbr_0x20 = 0xffffffff;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&stack0xffffff94);
    (**(code **)(*piVar2 + 100))(0xff);
    (**(code **)(*piVar2 + 0x74))(0);
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xffffffa8,"icon_unknown.bmp");
    local_48.mbr_0x18 = 2;
    (**(code **)(*piVar2 + 0x130))(&stack0xffffffa8,0,0,0,0xbf800000,0xbf800000,1);
    this_00 = (cls_0x4d8d70 *)&local_48.mbr_0x1c;
  }
  else {
    local_48.mbr_0x18 = 0xf;
    local_48.mbr_0x14 = 0;
    local_48.mbr_0x4 = local_48.mbr_0x4 & 0xffffff00;
    local_4 = 0;
    FUN_00417bc0((cls_0x50db20 *)&local_48,iVar4);
    if (local_48.mbr_0x14 == 0) {
LAB_00417dfb:
      FUN_00401c70(&local_48,(undefined4 *)"icon_unknown.bmp");
    }
    else {
      pdVar6 = (dword *)local_48.mbr_0x4;
      if (local_48.mbr_0x18 < 0x10) {
        pdVar6 = &local_48.mbr_0x4;
      }
      cVar3 = cls_0x49c610::meth_0x49abd0(DAT_00707da8,pdVar6);
      if (cVar3 == '\0') goto LAB_00417dfb;
    }
    (**(code **)(*piVar1 + 100))();
    (**(code **)(*piVar1 + 0x74))();
    uStack_70 = 0;
    uStack_74 = 0;
    (**(code **)(*piVar1 + 0x130))(&stack0xffffffb0,0);
    (**(code **)(*piVar2 + 100))(0xff);
    (**(code **)(*piVar2 + 0x74))(0);
    (**(code **)(*piVar2 + 0x130))(&uStack_74,0,0,0,0xbf800000,0xbf800000,1);
    this_00 = &local_48;
  }
  cls_0x4d8d70::meth_0x4b2dd0(this_00);
LAB_00417f23:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x41a2b0::meth_0x417f50(cls_0x41a2b0 *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint unaff_retaddr;
  undefined local_68 [28];
  undefined auStack_4c [28];
  char local_30 [32];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c070;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if ((-1 < param_1) && (param_1 < 2)) {
    piVar1 = (int *)(&this->mbr_0xc4)[param_1];
    piVar2 = (int *)(&this->mbr_0xcc)[param_1];
    if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
      ExceptionList = &local_c;
      FUN_00616d8c(local_30,&DAT_00650628);
      iVar3 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_68,local_30);
      local_4 = 0;
      (**(code **)(*piVar1 + 300))(iVar3);
      puStack_8 = (undefined *)0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&stack0xffffff94);
      iVar3 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(local_68 + 0x18),auStack_4c + 0x18);
      puStack_8 = (undefined *)0x1;
      (**(code **)(*piVar2 + 300))(iVar3);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_4c);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x41a2b0::meth_0x418040(cls_0x41a2b0 *this,int param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  void *unaff_EBP;
  dword *pdVar5;
  uint local_64;
  undefined local_60 [4];
  void *local_5c;
  dword local_4c;
  uint local_48;
  undefined auStack_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  void *pvStack_24;
  dword dStack_20;
  dword dStack_14;
  uint uStack_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  puStack_8 = &LAB_0062c0a0;
  local_c = ExceptionList;
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  else if (100 < (int)param_2) {
    param_2 = 100;
  }
  uVar1 = (int)(param_2 << 4) / 100;
  if ((-1 < param_1) && (param_1 < 2)) {
    iVar4 = 0;
    ExceptionList = &local_c;
    if (0 < (int)uVar1) {
      pdVar5 = &this->mbr_0x16c + param_1 * 0x10;
      ExceptionList = &local_c;
      param_2 = uVar1;
      local_64 = uVar1;
      do {
        local_4 = 0xffffffff;
        local_48 = 0xf;
        local_4c = 0;
        local_5c = (void *)((uint)local_5c & 0xffffff00);
        pcVar2 = "f3_actionbar_ammo_on.tga";
        do {
          pcVar3 = pcVar2;
          pcVar2 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_60,"f3_actionbar_ammo_on.tga",(uint)(pcVar3 + -0x65064c));
        local_4 = 0;
        (**(code **)(*(int *)pdVar5[-0x20] + 0x130))(local_60,0,0,0,0xbf800000,0xbf800000,1);
        dStack_20 = 0xffffffff;
        if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(unaff_EBP);
        }
        local_64 = 0xf;
        local_48 = 0xf;
        unaff_EBP = (void *)((uint)unaff_EBP & 0xffffff00);
        local_4c = 0;
        local_5c = (void *)((uint)local_5c & 0xffffff00);
        pcVar2 = "f3_actionbar_ammo_on.tga";
        do {
          pcVar3 = pcVar2;
          pcVar2 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_60,"f3_actionbar_ammo_on.tga",(uint)(pcVar3 + -0x65064c));
        dStack_20 = 1;
        (**(code **)(*(int *)*pdVar5 + 0x130))(local_60,0,0,0,0xbf800000,0xbf800000,1);
        local_4 = 0xffffffff;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          _free(local_40);
        }
        pdVar5 = pdVar5 + 1;
        param_2 = param_2 - 1;
        local_2c = 0xf;
        local_30 = 0;
        local_40 = (void *)((uint)local_40 & 0xffffff00);
      } while (param_2 != 0);
      if (0xf < (int)uVar1) {
        ExceptionList = local_c;
        return;
      }
      this = (cls_0x41a2b0 *)0x0;
      iVar4 = 0xf;
    }
    pdVar5 = &this->mbr_0x16c + param_1 * 0x10 + iVar4;
    param_1 = 0x10 - iVar4;
    do {
      local_4 = 0xffffffff;
      local_2c = 0xf;
      local_30 = 0;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
      pcVar2 = "f3_actionbar_ammo_off.tga";
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)auStack_44,"f3_actionbar_ammo_off.tga",(uint)(pcVar3 + -0x650630));
      local_4 = 2;
      (**(code **)(*(int *)pdVar5[-0x20] + 0x130))(auStack_44,0,0,0,0xbf800000,0xbf800000,1);
      dStack_20 = 0xffffffff;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        _free(local_5c);
      }
      local_48 = 0xf;
      local_2c = 0xf;
      local_4c = 0;
      local_5c = (void *)((uint)local_5c & 0xffffff00);
      local_30 = 0;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
      pcVar2 = "f3_actionbar_ammo_off.tga";
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)auStack_44,"f3_actionbar_ammo_off.tga",(uint)(pcVar3 + -0x650630));
      dStack_20 = 3;
      (**(code **)(*(int *)*pdVar5 + 0x130))(auStack_44,0,0,0,0xbf800000,0xbf800000,1);
      local_4 = 0xffffffff;
      if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_24);
      }
      pdVar5 = pdVar5 + 1;
      param_1 = param_1 + -1;
      uStack_10 = 0xf;
      dStack_14 = 0;
      pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
    } while (param_1 != 0);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x41a2b0::meth_0x4186f0(cls_0x41a2b0 *this,int param_1)

{
  cls_0x434f70 *this_00;
  cls_0x616328 *pcVar1;
  int iVar2;
  uint unaff_retaddr;
  dword in_stack_fffffe9c;
  void *in_stack_fffffea0;
  dword dVar3;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  dword dVar6;
  char local_110 [256];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c0eb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  dVar6 = 0;
  pTVar5 = &GameCreature::RTTI_Type_Descriptor;
  pTVar4 = &Entity::RTTI_Type_Descriptor;
  dVar3 = 0;
  ExceptionList = &local_c;
  pcVar1 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  iVar2 = FUN_006165e0(pcVar1,dVar3,pTVar4,pTVar5,dVar6);
  if (((iVar2 != 0) && (-1 < param_1)) && (param_1 < 0x1e)) {
    iVar2 = FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x2c),0,&Client::RTTI_Type_Descriptor,
                         &GameClient::RTTI_Type_Descriptor,0);
    this_00 = *(cls_0x434f70 **)(*(int *)(iVar2 + 0xa0) + 0xc);
    FUN_00616d8c(local_110,(byte *)"Wanting to set evasion AP to %d");
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffec4,"");
    local_4 = 0;
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffe9c,local_110);
    local_4 = 0xffffffff;
    cls_0x434f70::meth_0x434b70(this_00,in_stack_fffffe9c,in_stack_fffffea0);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x41a2b0::meth_0x418820(cls_0x41a2b0 *this,char param_1)

{
  cls_0x616328 *pcVar1;
  GameCreature *this_00;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  
  iVar5 = 0;
  pTVar4 = &GameCreature::RTTI_Type_Descriptor;
  pTVar3 = &Entity::RTTI_Type_Descriptor;
  iVar2 = 0;
  pcVar1 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  this_00 = (GameCreature *)FUN_006165e0(pcVar1,iVar2,pTVar3,pTVar4,iVar5);
  if (this_00 != (GameCreature *)0x0) {
    iVar2 = *(int *)((int)&(this_00->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x94 +
                    *(int *)((this_00->GameEntity).mbr_0x4 + 4));
    iVar5 = GameCreature::GetDerivedAttribute(this_00,(int *)0x0);
    GameActionEquip::meth_0x418360((GameActionEquip *)this,iVar2,iVar5,this_00->mbr_0x7fc,param_1);
    return;
  }
  GameActionEquip::meth_0x418360((GameActionEquip *)this,0,0,0,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0041922f) */
/* WARNING: Removing unreachable block (ram,0x00419b1d) */

void __thiscall cls_0x41a2b0::meth_0x4188a0(cls_0x41a2b0 *this)

{
  char *pcVar1;
  undefined uVar2;
  PopUpButton *pPVar3;
  char *pcVar4;
  int *unaff_ESI;
  dword *pdVar5;
  int *unaff_EDI;
  uint unaff_retaddr;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puStack_554;
  undefined4 ***pppuStack_550;
  undefined *puStack_54c;
  undefined4 *puStack_548;
  undefined4 *puStack_544;
  undefined4 uStack_540;
  dword dStack_53c;
  undefined4 uStack_538;
  undefined4 ***pppuStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 **ppuStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 **ppuStack_4fc;
  undefined4 ***pppuStack_4f8;
  undefined4 **ppuStack_4f4;
  undefined4 *puStack_4f0;
  undefined4 *puStack_4ec;
  undefined4 uStack_4e8;
  dword dStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 **ppuStack_4d8;
  undefined4 uStack_4d4;
  undefined4 **ppuStack_4d0;
  undefined4 *puStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 **ppuStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_494;
  undefined4 *puStack_48c;
  undefined4 *puStack_488;
  dword dStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 **ppuStack_478;
  undefined4 uStack_474;
  undefined4 **ppuStack_470;
  undefined4 *puStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 **ppuStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_434;
  undefined4 *puStack_428;
  dword dStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  uint **ppuStack_418;
  undefined4 uStack_414;
  dword **ppdStack_410;
  undefined4 *puStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  uint **ppuStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3d4;
  uint *puStack_3c8;
  dword dStack_3c4;
  uint uStack_3c0;
  uint uStack_3bc;
  undefined **ppuStack_3b8;
  undefined4 uStack_3b4;
  dword **ppdStack_3b0;
  dword *pdStack_3ac;
  uint uStack_3a8;
  undefined4 uStack_3a4;
  undefined **ppuStack_3a0;
  uint uStack_39c;
  uint uStack_398;
  uint uStack_394;
  VFX_Parameter__vftable_673a20 ****ppppVStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  dword *pdStack_36c;
  undefined *puStack_368;
  dword dStack_364;
  dword dStack_360;
  VFX_Parameter__vftable_673a20 *pVStack_35c;
  VFX_Parameter__vftable_673a20 **ppVStack_358;
  dword dStack_354;
  dword *pdStack_350;
  dword *pdStack_34c;
  VFX_Parameter__vftable_673a20 *pVVar9;
  VFX_Parameter__vftable_673a20 ***pppVStack_340;
  undefined ****ppppuStack_33c;
  dword *pdStack_338;
  dword *pdStack_334;
  undefined *puStack_330;
  undefined4 uStack_32c;
  dword dStack_328;
  VFX_Parameter__vftable_673a20 **ppVStack_324;
  VFX_Parameter__vftable_673a20 *pVStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  byte ***pppbStack_314;
  VFX_Parameter__vftable_673a20 **ppVVar10;
  VFX_Parameter__vftable_673a20 **ppVStack_308;
  dword *pdStack_304;
  byte ***pppbStack_300;
  byte ***pppbStack_2fc;
  VFX_Parameter__vftable_673a20 *pVStack_2f8;
  undefined4 uStack_2f4;
  undefined *puStack_2f0;
  void *pvStack_2ec;
  VFX_Parameter__vftable_673a20 VStack_2e8;
  int **ppiStack_2e4;
  dword dStack_2e0;
  dword dStack_2dc;
  VFX_Parameter__vftable_673a20 VStack_2d8;
  dword dStack_2d4;
  VFX_Parameter__vftable_673a20 *pVStack_2d0;
  dword dStack_2cc;
  uint *puStack_2c8;
  uint uStack_2c4;
  int **ppiStack_2c0;
  int **ppiStack_2bc;
  uint uVar11;
  void **ppvVar12;
  uint uStack_290;
  int *piStack_28c;
  int *piStack_288;
  int *piStack_284;
  dword dStack_280;
  VFX_Parameter__vftable_673a20 *pVStack_27c;
  uint uStack_278;
  int *piStack_274;
  void ***pppvStack_270;
  undefined4 uStack_26c;
  int **ppiStack_268;
  int **ppiStack_264;
  int *piStack_258;
  int **ppiStack_254;
  int **ppiStack_250;
  int **ppiStack_24c;
  undefined4 uStack_248;
  undefined *puVar13;
  undefined3 uVar14;
  void **ppvStack_238;
  int *piStack_234;
  int *piStack_230;
  int *piStack_22c;
  int *piStack_228;
  int *piVar15;
  int *piStack_21c;
  undefined *puStack_218;
  int *piStack_214;
  int *piStack_210;
  int local_1f8 [2];
  undefined auStack_1f0 [8];
  undefined uStack_1e8;
  byte bStack_1e4;
  PopUpButton *local_1e0;
  void *local_1d0;
  dword local_1c0;
  dword local_1bc;
  dword local_1b8;
  void *local_1b0;
  dword local_1a0;
  dword local_19c;
  void *pvStack_198;
  void *local_194;
  undefined4 uStack_188;
  undefined4 local_184;
  dword local_180;
  void *pvStack_178;
  byte bStack_174;
  dword dStack_168;
  dword dStack_164;
  dword dStack_160;
  undefined uStack_140;
  undefined uStack_13c;
  undefined uStack_108;
  undefined uStack_104;
  void *pvStack_ec;
  undefined uStack_e8;
  dword dStack_dc;
  dword dStack_d8;
  void *pvStack_d4;
  undefined uStack_d0;
  dword dStack_c4;
  dword dStack_c0;
  dword dStack_bc;
  undefined uStack_b0;
  byte bStack_ac;
  undefined4 uStack_94;
  byte bStack_90;
  dword dStack_84;
  dword dStack_80;
  dword dStack_7c;
  byte bStack_58;
  undefined uStack_54;
  byte bStack_3c;
  undefined uStack_38;
  undefined uStack_1c;
  undefined uStack_18;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  puStack_8 = &LAB_0062c1b2;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  pdVar5 = &this->mbr_0x278;
  local_1b8 = 6;
  ExceptionList = &pvStack_c;
  while( true ) {
    local_4 = 0xffffffff;
    piStack_210 = (int *)0x4188eb;
    local_1e0 = (PopUpButton *)operator_new(0x30);
    local_4 = 0;
    if (local_1e0 == (PopUpButton *)0x0) {
      pPVar3 = (PopUpButton *)0x0;
    }
    else {
      pPVar3 = PopUpButton::PopUpButton(local_1e0);
    }
    *pdVar5 = (dword)pPVar3;
    local_1bc = 0xf;
    local_1c0 = 0;
    local_1d0 = (void *)((uint)local_1d0 & 0xffffff00);
    local_19c = 0xf;
    local_1a0 = 0;
    local_1b0 = (void *)((uint)local_1b0 & 0xffffff00);
    local_180 = 0xf;
    local_184 = 0;
    local_194 = (void *)((uint)local_194 & 0xffffff00);
    piStack_210 = local_1f8;
    local_4 = 3;
    piStack_214 = (int *)0x418961;
    (**(code **)(*(int *)this->mbr_0x9c + 0x48))();
    piStack_214 = local_1f8;
    puStack_218 = auStack_1f0;
    piStack_21c = (int *)0x418976;
    (**(code **)(*(int *)this->mbr_0x9c + 0x14))();
    piStack_21c = (int *)&bStack_1e4;
    (**(code **)(*(int *)this->mbr_0x9c + 0xd0))();
    uVar2 = (**(code **)(*(int *)this->mbr_0x9c + 0x88))();
    unaff_EDI = (int *)CONCAT31((int3)((uint)unaff_EDI >> 8),uVar2);
    dStack_7c = 0xf;
    dStack_80 = 0;
    bStack_90 = 0;
    pcVar1 = "PopUpButton";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    piStack_228 = (int *)0x4189d3;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&uStack_94,"PopUpButton",(uint)(pcVar4 + -0x650748));
    ppvVar12 = (void **)&uStack_94;
    uStack_18 = 4;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x4 + 0x4c))();
    uStack_1c = 3;
    if (0xf < dStack_80) {
                    /* WARNING: Subroutine does not return */
      piStack_228 = (int *)0x418a0c;
      _free(uStack_94);
    }
    piStack_228 = piStack_210;
    dStack_80 = 0xf;
    dStack_84 = 0;
    uStack_94 = (void *)((uint)uStack_94 & 0xffffff00);
    piStack_22c = (int *)0x418a38;
    piVar15 = unaff_ESI;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x4 + 0x44))();
    piStack_22c = piStack_210;
    piStack_234 = (int *)0x418a4c;
    piStack_230 = unaff_EDI;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x4 + 0x10))();
    piStack_234 = (int *)&stack0xfffffe04;
    ppvStack_238 = (void **)0x418a5e;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x4 + 0xcc))();
    ppvStack_238 = ppvVar12;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x4 + 0x84))();
    (**(code **)(**(int **)&(this->cls_0x4395a0).field_0x4 + 0xa4))();
    pvStack_d4 = (void *)0xf;
    dStack_d8 = 0;
    uStack_e8 = 0;
    pcVar1 = "btnUp";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    uStack_248 = (int **)0x418abb;
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pvStack_ec,"btnUp",(uint)(pcVar4 + -0x650740));
    uStack_38 = 5;
    piStack_21c = (int *)(**(code **)(*(int *)this->mbr_0x9c + 0xb4))();
    bStack_3c = 3;
    if (0xf < dStack_d8) {
                    /* WARNING: Subroutine does not return */
      uStack_248 = (int **)0x418afc;
      _free(pvStack_ec);
    }
    puVar13 = &stack0xfffffddc;
    uStack_248 = &piStack_230;
    dStack_d8 = 0xf;
    dStack_dc = 0;
    pvStack_ec = (void *)((uint)pvStack_ec & 0xffffff00);
    ppiStack_24c = (int **)0x418b29;
    (**(code **)(*piStack_21c + 0x48))();
    ppiStack_24c = &piStack_230;
    ppiStack_250 = &piStack_228;
    ppiStack_254 = (int **)0x418b3c;
    (**(code **)(*piVar15 + 0x14))();
    ppiStack_254 = &piStack_21c;
    piStack_258 = (int *)0x418b4d;
    (**(code **)(*piStack_22c + 0xd0))();
    piStack_258 = (int *)&bStack_1e4;
    (**(code **)(*piStack_230 + 0x138))();
    uVar2 = (**(code **)(*piStack_234 + 0x88))();
    uVar14 = (undefined3)((uint)puVar13 >> 8);
    dStack_160 = 0xf;
    dStack_164 = 0;
    bStack_174 = 0;
    pcVar1 = "btnUp";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ppiStack_264 = (int **)0x418bab;
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pvStack_178,"btnUp",(uint)(pcVar4 + -0x650740));
    uStack_54 = 6;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x8 + 0x4c))();
    bStack_58 = 3;
    if (0xf < dStack_164) {
                    /* WARNING: Subroutine does not return */
      ppiStack_264 = (int **)0x418be4;
      _free(pvStack_178);
    }
    ppiStack_264 = ppiStack_24c;
    dStack_164 = 0xf;
    dStack_168 = 0;
    pvStack_178 = (void *)((uint)pvStack_178 & 0xffffff00);
    ppiStack_268 = (int **)0x418c10;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x8 + 0x44))();
    ppiStack_268 = ppiStack_24c;
    pppvStack_270 = (void ***)0x418c24;
    uStack_26c._0_1_ = uVar2;
    uStack_26c._1_3_ = uVar14;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x8 + 0x10))();
    pppvStack_270 = &ppvStack_238;
    piStack_274 = (int *)0x418c36;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x8 + 0xcc))();
    piStack_274 = (int *)0x1;
    uStack_278 = 0xbf800000;
    pVStack_27c = (VFX_Parameter__vftable_673a20 *)0xbf800000;
    dStack_280 = 0;
    piStack_284 = (int *)0x0;
    piStack_288 = (int *)0x0;
    piStack_28c = (int *)&stack0xfffffe00;
    uStack_290 = 0x418c5a;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x8 + 0x130))();
    uStack_290 = uStack_278;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x8 + 0x84))();
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x4 + 0xa4))();
    dStack_bc = 0xf;
    dStack_c0 = 0;
    uStack_d0 = 0;
    pcVar1 = "btnDown";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pvStack_d4,"btnDown",(uint)(pcVar4 + -0x650738));
    ppvVar12 = &pvStack_d4;
    bStack_90 = 7;
    piStack_274 = (int *)(**(code **)(*(int *)this->mbr_0x9c + 0xb4))();
    uStack_94 = (void *)CONCAT31(uStack_94._1_3_,3);
    if (0xf < dStack_c0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_d4);
    }
    ppVVar10 = &pVStack_27c;
    dStack_c0 = 0xf;
    dStack_c4 = 0;
    pvStack_d4 = (void *)((uint)pvStack_d4 & 0xffffff00);
    (**(code **)(*piStack_274 + 0x48))();
    (**(code **)(pVStack_27c->virt_meth_0x4ff950_0 + 0x14))();
    (**(code **)(*piStack_284 + 0xd0))();
    (**(code **)(*piStack_288 + 0x138))();
    uVar2 = (**(code **)(*piStack_28c + 0x88))();
    uVar11 = CONCAT31((int3)((uint)ppVVar10 >> 8),uVar2);
    local_180 = 0xf;
    local_184 = 0;
    local_194 = (void *)((uint)local_194 & 0xffffff00);
    pcVar1 = "btnSelected";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ppiStack_2bc = (int **)0x418dab;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&pvStack_198,"btnSelected",(uint)(pcVar4 + -0x65072c));
    bStack_ac = 8;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0xc + 0x4c))();
    uStack_b0 = 3;
    if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
      ppiStack_2bc = (int **)0x418de4;
      _free(pvStack_198);
    }
    local_184 = 0xf;
    uStack_188 = 0;
    pvStack_198 = (void *)((uint)pvStack_198 & 0xffffff00);
    ppiStack_2c0 = (int **)0x418e10;
    ppiStack_2bc = &piStack_288;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0xc + 0x44))();
    uStack_2c4 = uVar11;
    puStack_2c8 = (uint *)0x418e24;
    ppiStack_2c0 = &piStack_288;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0xc + 0x10))();
    puStack_2c8 = &uStack_290;
    dStack_2cc = 0x418e36;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0xc + 0xcc))();
    dStack_2cc = 1;
    pVStack_2d0 = (VFX_Parameter__vftable_673a20 *)0xbf800000;
    dStack_2d4 = 0xbf800000;
    VStack_2d8.virt_meth_0x4ff950_0 = (virt_meth_0x4ff950 *)0x0;
    dStack_2dc = 0;
    dStack_2e0 = 0;
    ppiStack_2e4 = &piStack_258;
    VStack_2e8.virt_meth_0x4ff950_0 = (virt_meth_0x4ff950 *)0x418e5a;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0xc + 0x130))();
    VStack_2e8.virt_meth_0x4ff950_0 = (virt_meth_0x4ff950 *)pVStack_2d0;
    pvStack_2ec = (void *)0x418e6c;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0xc + 0x84))();
    pvStack_2ec = (void *)((PopUpButton *)*pdVar5)->mbr_0xc;
    puStack_2f0 = (undefined *)0x418e7d;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x4 + 0xa4))();
    puStack_2f0 = &stack0xfffffd48;
    uStack_2f4 = (int ***)0x418e8f;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x4 + 0xd0))();
    uStack_2f4 = &ppiStack_2bc;
    pVStack_2f8 = (VFX_Parameter__vftable_673a20 *)0x418ea1;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x4 + 0xcc))();
    pVStack_2f8 = &VStack_2d8;
    pppbStack_2fc = (byte ***)&ppiStack_2e4;
    pppbStack_300 = (byte ***)0x418eb6;
    (**(code **)(*(int *)this->mbr_0xa4 + 0x48))();
    pppbStack_300 = (byte ***)&ppiStack_2e4;
    pdStack_304 = &dStack_2dc;
    ppVStack_308 = (VFX_Parameter__vftable_673a20 **)0x418ecb;
    (**(code **)(*(int *)this->mbr_0xa4 + 0x14))();
    ppVStack_308 = &pVStack_2d0;
    (**(code **)(*(int *)this->mbr_0xa4 + 0xd0))();
    uVar2 = (**(code **)(*(int *)this->mbr_0xa4 + 0x88))();
    uStack_2f4 = (int ***)CONCAT31(uStack_2f4._1_3_,uVar2);
    ppiStack_264 = (int **)0xf;
    ppiStack_268 = (int **)0x0;
    uStack_278 = uStack_278 & 0xffffff00;
    pcVar1 = "PopUpIcon";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    pppbStack_314 = (undefined ***)0x418f2b;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&pVStack_27c,"PopUpIcon",(uint)(pcVar4 + -0x650720));
    ppVVar10 = &pVStack_27c;
    uStack_104 = 9;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x10 + 0x4c))();
    uStack_108 = 3;
    if (0xf < ppiStack_268) {
                    /* WARNING: Subroutine does not return */
      pppbStack_314 = (undefined ***)0x418f64;
      _free(pVStack_27c);
    }
    pppbStack_314 = pppbStack_2fc;
    ppiStack_268 = (int **)0xf;
    uStack_26c = 0;
    pVStack_27c = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_27c & 0xffffff00);
    uStack_318 = (byte ***)0x418f90;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x10 + 0x44))();
    uStack_318 = pppbStack_2fc;
    uStack_31c = (dword)uStack_2f4;
    pVStack_320 = (VFX_Parameter__vftable_673a20 *)0x418fa4;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x10 + 0x10))();
    pVStack_320 = &VStack_2e8;
    ppVStack_324 = (VFX_Parameter__vftable_673a20 **)0x418fb6;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x10 + 0xcc))();
    ppVStack_324 = ppVVar10;
    dStack_328 = 0x418fc8;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x10 + 0x84))();
    dStack_328 = 1;
    uStack_32c = 0x418fd7;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x10 + 0xe8))();
    uStack_32c = ((PopUpButton *)*pdVar5)->mbr_0x10;
    puStack_330 = (undefined *)0x418fe8;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x8 + 0xa4))();
    puStack_330 = &stack0xfffffcf0;
    pdStack_334 = &uStack_31c;
    pdStack_338 = (dword *)0x418ffd;
    (**(code **)(*(int *)this->mbr_0xac + 0x48))();
    pdStack_338 = &uStack_31c;
    ppppuStack_33c = &pppbStack_314;
    pppVStack_340 = (VFX_Parameter__vftable_673a20 ***)0x419012;
    (**(code **)(*(int *)this->mbr_0xac + 0x14))();
    pppVStack_340 = &ppVStack_308;
    (**(code **)(*(int *)this->mbr_0xac + 0xd0))();
    uVar2 = (**(code **)(*(int *)this->mbr_0xac + 0x88))();
    uStack_32c = CONCAT31(uStack_32c._1_3_,uVar2);
    dStack_280 = 0xf;
    piStack_284 = (int *)0x0;
    pcVar1 = "PopUpIcon";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    pdStack_34c = (dword *)0x41906f;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xfffffd68,"PopUpIcon",(uint)(pcVar4 + -0x650720));
    pVVar9 = (VFX_Parameter__vftable_673a20 *)&stack0xfffffd68;
    uStack_13c = 10;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x14 + 0x4c))();
    uStack_140 = 3;
    if (0xf < piStack_284) {
                    /* WARNING: Subroutine does not return */
      pdStack_34c = (dword *)0x4190a8;
      _free(ppvVar12);
    }
    pdStack_34c = pdStack_334;
    piStack_284 = (int *)0xf;
    piStack_288 = (int *)0x0;
    pdStack_350 = (dword *)0x4190d4;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x14 + 0x44))();
    pdStack_350 = pdStack_334;
    dStack_354 = uStack_32c;
    ppVStack_358 = (VFX_Parameter__vftable_673a20 **)0x4190e8;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x14 + 0x10))();
    ppVStack_358 = &pVStack_320;
    pVStack_35c = (VFX_Parameter__vftable_673a20 *)0x4190fa;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x14 + 0xcc))();
    pVStack_35c = pVVar9;
    dStack_360 = 0x41910c;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x14 + 0x84))();
    dStack_360 = 1;
    dStack_364 = 0x41911b;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x14 + 0xe8))();
    dStack_364 = ((PopUpButton *)*pdVar5)->mbr_0x14;
    puStack_368 = (undefined *)0x41912c;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0xc + 0xa4))();
    puStack_368 = &stack0xfffffcb8;
    pdStack_36c = &dStack_354;
    uStack_370 = (dword *)0x419141;
    (**(code **)(*(int *)this->mbr_0xb4 + 0x48))();
    uStack_370 = &dStack_354;
    uStack_374 = &pdStack_34c;
    ppppVStack_378 = (VFX_Parameter__vftable_673a20 ****)0x419156;
    (**(code **)(*(int *)this->mbr_0xb4 + 0x14))();
    ppppVStack_378 = &pppVStack_340;
    (**(code **)(*(int *)this->mbr_0xb4 + 0xd0))();
    (**(code **)(*(int *)this->mbr_0xb4 + 0x14c))();
    (**(code **)(*(int *)this->mbr_0xb4 + 0x16c))();
    uVar2 = (**(code **)(*(int *)this->mbr_0xb4 + 0x88))();
    uStack_374 = (dword **)CONCAT31(uStack_374._1_3_,uVar2);
    dStack_364 = (**(code **)(*(int *)this->mbr_0xb4 + 0x18c))();
    dStack_360 = (**(code **)(*(int *)this->mbr_0xb4 + 0x194))();
    ppiStack_2c0 = (int **)((uint)ppiStack_2c0 & 0xffffff00);
    pcVar1 = "PopUpText";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    uStack_394 = 0x419203;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&uStack_2c4,"PopUpText",(uint)(pcVar4 + -0x650714));
    local_184 = CONCAT31(local_184._1_3_,0xb);
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x18 + 0x4c))();
    uStack_188 = CONCAT31(uStack_188._1_3_,3);
    uStack_394 = 0;
    uStack_2c4 = uStack_2c4 & 0xffffff00;
    uStack_398 = 0x419268;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x18 + 0x44))();
    uStack_398 = 0;
    uStack_39c = (uint)uStack_374;
    ppuStack_3a0 = (undefined **)0x41927c;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x18 + 0x10))();
    ppuStack_3a0 = &puStack_368;
    uStack_3a4 = 0x41928e;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x18 + 0xcc))();
    uStack_3a4 = 1;
    uStack_3a8 = (uint)uStack_374;
    pdStack_3ac = uStack_370;
    ppdStack_3b0 = &pdStack_34c;
    uStack_3b4 = 0x4192ac;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x18 + 0x148))();
    uStack_3b4 = 0xb46e6e3c;
    ppuStack_3b8 = (undefined **)0x4192be;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x18 + 0x168))();
    ppuStack_3b8 = ppuStack_3a0;
    uStack_3bc = 0x4192d0;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x18 + 0x84))();
    uStack_3bc = uStack_394;
    uStack_3c0 = 0x4192e2;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x18 + 0x188))();
    uStack_3c0 = uStack_394;
    dStack_3c4 = 0x4192f4;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x18 + 400))();
    dStack_3c4 = ((PopUpButton *)*pdVar5)->mbr_0x18;
    puStack_3c8 = (uint *)0x419305;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x10 + 0xa4))();
    puStack_3c8 = &uStack_3a8;
    (**(code **)(*(int *)this->mbr_0xbc + 0x48))();
    (**(code **)(*(int *)this->mbr_0xbc + 0x14))();
    (**(code **)(*(int *)this->mbr_0xbc + 0xd0))();
    (**(code **)(*(int *)this->mbr_0xbc + 0x14c))();
    (**(code **)(*(int *)this->mbr_0xbc + 0x16c))();
    uVar2 = (**(code **)(*(int *)this->mbr_0xbc + 0x88))();
    uStack_3d4 = CONCAT31((int3)((uint)&pdStack_3ac >> 8),uVar2);
    dStack_3c4 = (**(code **)(*(int *)this->mbr_0xbc + 0x18c))();
    uStack_3c0 = (**(code **)(*(int *)this->mbr_0xbc + 0x194))();
    dStack_2d4 = 0xf;
    VStack_2d8.virt_meth_0x4ff950_0 = (virt_meth_0x4ff950 *)0x0;
    VStack_2e8.virt_meth_0x4ff950_0 = VStack_2e8.virt_meth_0x4ff950_0 & 0xffffff00;
    pcVar1 = "PopUpText";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    uStack_3f4 = 0x4193dc;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&pvStack_2ec,"PopUpText",(uint)(pcVar4 + -0x650714));
    bStack_1e4 = 0xc;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x1c + 0x4c))();
    uStack_1e8 = 3;
    if ((virt_meth_0x4ff950 *)0xf < VStack_2d8.virt_meth_0x4ff950_0) break;
    uStack_3f4 = 0;
    VStack_2d8.virt_meth_0x4ff950_0 = (virt_meth_0x4ff950 *)0xf;
    dStack_2dc = 0;
    pvStack_2ec = (void *)((uint)pvStack_2ec & 0xffffff00);
    uStack_3f8 = 0x419441;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x1c + 0x44))();
    uStack_3f8 = 0;
    uStack_3fc = uStack_3d4;
    ppuStack_400 = (uint **)0x419455;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x1c + 0x10))();
    ppuStack_400 = &puStack_3c8;
    uStack_404 = 0x419467;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x1c + 0xcc))();
    uStack_404 = 1;
    uStack_408 = uStack_3d4;
    ppdStack_410 = &pdStack_3ac;
    uStack_414 = 0x419485;
    puStack_40c = &uStack_3b4;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x1c + 0x148))();
    uStack_414 = 0xb46e6e3c;
    ppuStack_418 = (uint **)0x419497;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x1c + 0x168))();
    ppuStack_418 = ppuStack_400;
    uStack_41c = 0x4194a9;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x1c + 0x84))();
    uStack_41c = uStack_3f4;
    uStack_420 = 0x4194bb;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x1c + 0x188))();
    uStack_420 = uStack_3f4;
    dStack_424 = 0x4194cd;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x1c + 400))();
    dStack_424 = ((PopUpButton *)*pdVar5)->mbr_0x1c;
    puStack_428 = (undefined4 *)0x4194de;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x14 + 0xa4))();
    puStack_428 = &uStack_408;
    (**(code **)(*(int *)this->mbr_0xc4 + 0x48))();
    (**(code **)(*(int *)this->mbr_0xc4 + 0x14))();
    (**(code **)(*(int *)this->mbr_0xc4 + 0xd0))();
    (**(code **)(*(int *)this->mbr_0xc4 + 0x14c))();
    (**(code **)(*(int *)this->mbr_0xc4 + 0x16c))();
    uVar2 = (**(code **)(*(int *)this->mbr_0xc4 + 0x88))();
    uStack_434 = CONCAT31((int3)((uint)&puStack_40c >> 8),uVar2);
    dStack_424 = (**(code **)(*(int *)this->mbr_0xc4 + 0x18c))();
    uStack_420 = (**(code **)(*(int *)this->mbr_0xc4 + 0x194))();
    pppbStack_2fc = (byte ***)0xf;
    pppbStack_300 = (byte ***)0x0;
    pcVar1 = "PopUpText";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    uStack_454 = 0x4195bb;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&pppbStack_314,"PopUpText",(uint)(pcVar4 + -0x650714));
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x20 + 0x4c))();
    uStack_248 = (int **)CONCAT31(uStack_248._1_3_,3);
    if (0xf < pppbStack_300) {
                    /* WARNING: Subroutine does not return */
      uStack_454 = 0x4195f4;
      _free(pppbStack_314);
    }
    uStack_454 = 0;
    pppbStack_300 = (byte ***)0xf;
    pdStack_304 = (dword *)0x0;
    pppbStack_314 = (byte ***)((uint)pppbStack_314 & 0xffffff00);
    uStack_458 = 0x419620;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x20 + 0x44))();
    uStack_458 = 0;
    uStack_45c = uStack_434;
    ppuStack_460 = (undefined4 **)0x419634;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x20 + 0x10))();
    ppuStack_460 = &puStack_428;
    uStack_464 = 0x419646;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x20 + 0xcc))();
    uStack_464 = 1;
    uStack_468 = uStack_434;
    ppuStack_470 = &puStack_40c;
    uStack_474 = 0x419664;
    puStack_46c = &uStack_414;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x20 + 0x148))();
    uStack_474 = 0xb46e6e3c;
    ppuStack_478 = (undefined4 **)0x419676;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x20 + 0x168))();
    ppuStack_478 = ppuStack_460;
    uStack_47c = 0x419688;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x20 + 0x84))();
    uStack_47c = uStack_454;
    uStack_480 = 0x41969a;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x20 + 0x188))();
    uStack_480 = uStack_454;
    dStack_484 = 0x4196ac;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x20 + 400))();
    dStack_484 = ((PopUpButton *)*pdVar5)->mbr_0x20;
    puStack_488 = (undefined4 *)0x4196bd;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x10 + 0xa4))();
    puStack_488 = &uStack_468;
    puStack_48c = &uStack_474;
    (**(code **)(*(int *)this->mbr_0xcc + 0x48))();
    (**(code **)(*(int *)this->mbr_0xcc + 0x14))();
    (**(code **)(*(int *)this->mbr_0xcc + 0xd0))();
    (**(code **)(*(int *)this->mbr_0xcc + 0x14c))();
    (**(code **)(*(int *)this->mbr_0xcc + 0x16c))();
    uVar2 = (**(code **)(*(int *)this->mbr_0xcc + 0x88))();
    uStack_494 = CONCAT31((int3)((uint)&puStack_46c >> 8),uVar2);
    dStack_484 = (**(code **)(*(int *)this->mbr_0xcc + 0x18c))();
    uStack_480 = (**(code **)(*(int *)this->mbr_0xcc + 0x194))();
    ppVStack_324 = (VFX_Parameter__vftable_673a20 **)0xf;
    dStack_328 = 0;
    pdStack_338 = (dword *)((uint)pdStack_338 & 0xffffff00);
    pcVar1 = "PopUpText";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    uStack_4b4 = 0x41979b;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&ppppuStack_33c,"PopUpText",(uint)(pcVar4 + -0x650714));
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x24 + 0x4c))();
    if (0xf < dStack_328) {
                    /* WARNING: Subroutine does not return */
      uStack_4b4 = 0x4197d4;
      _free(ppppuStack_33c);
    }
    uStack_4b4 = 0;
    dStack_328 = 0xf;
    uStack_32c = 0;
    ppppuStack_33c = (undefined ****)((uint)ppppuStack_33c & 0xffffff00);
    uStack_4b8 = 0x419800;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x24 + 0x44))();
    uStack_4b8 = 0;
    uStack_4bc = uStack_494;
    ppuStack_4c0 = (undefined4 **)0x419814;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x24 + 0x10))();
    ppuStack_4c0 = &puStack_488;
    uStack_4c4 = 0x419826;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x24 + 0xcc))();
    uStack_4c4 = 1;
    uStack_4c8 = uStack_494;
    ppuStack_4d0 = &puStack_46c;
    uStack_4d4 = 0x419844;
    puStack_4cc = &uStack_474;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x24 + 0x148))();
    uStack_4d4 = 0xb46e6e3c;
    ppuStack_4d8 = (undefined4 **)0x419856;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x24 + 0x168))();
    ppuStack_4d8 = ppuStack_4c0;
    uStack_4dc = 0x419868;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x24 + 0x84))();
    uStack_4dc = uStack_4b4;
    uStack_4e0 = 0x41987a;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x24 + 0x188))();
    uStack_4e0 = uStack_4b4;
    dStack_4e4 = 0x41988c;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x24 + 400))();
    dStack_4e4 = ((PopUpButton *)*pdVar5)->mbr_0x24;
    uStack_4e8 = (undefined4 *)0x41989d;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x14 + 0xa4))();
    piVar15 = (int *)this->mbr_0xdc;
    uStack_4e8 = &uStack_4c8;
    puStack_4ec = &uStack_4d4;
    puStack_4f0 = (undefined4 *)0x4198b5;
    (**(code **)(*piVar15 + 0x48))();
    puStack_4f0 = &uStack_4d4;
    ppuStack_4f4 = &puStack_4cc;
    pppuStack_4f8 = (undefined4 ***)0x4198c7;
    (**(code **)(*piVar15 + 0x14))();
    pppuStack_4f8 = &ppuStack_4c0;
    ppuStack_4fc = (undefined4 **)0x4198d7;
    (**(code **)(*piVar15 + 0xd0))();
    ppuStack_4fc = &puStack_488;
    uStack_500 = 0x4198e7;
    (**(code **)(*piVar15 + 0x138))();
    uStack_500 = 0x4198f2;
    uVar2 = (**(code **)(*piVar15 + 0x88))();
    uStack_500 = 1;
    uStack_504 = 0xbf800000;
    uStack_508 = 0xbf800000;
    uStack_50c = 0;
    uStack_4e8 = (undefined4 *)CONCAT31(uStack_4e8._1_3_,uVar2);
    uStack_510 = 0;
    uStack_514 = 0;
    ppuStack_518 = &puStack_48c;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x28 + 0x130))();
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x28 + 0x84))();
    dStack_360 = 0xf;
    dStack_364 = 0;
    uStack_374 = (dword **)((uint)uStack_374 & 0xffffff00);
    pcVar1 = "CalledShotIcon_up";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    uStack_528 = 0x41996b;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&ppppVStack_378,"CalledShotIcon_up",(uint)(pcVar4 + -0x650700));
    uStack_318 = (byte ***)CONCAT31(uStack_318._1_3_,0xf);
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x28 + 0x4c))();
    uStack_31c = CONCAT31(uStack_31c._1_3_,3);
    if (0xf < dStack_364) {
                    /* WARNING: Subroutine does not return */
      uStack_528 = 0x4199a4;
      _free(ppppVStack_378);
    }
    uStack_528 = uStack_510;
    dStack_364 = 0xf;
    puStack_368 = (undefined *)0x0;
    ppppVStack_378 = (VFX_Parameter__vftable_673a20 ****)((uint)ppppVStack_378 & 0xffffff00);
    uStack_52c = 0x4199d4;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x28 + 0x44))();
    uStack_52c = uStack_510;
    uStack_530 = uStack_508;
    pppuStack_534 = (undefined4 ***)0x4199e8;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x28 + 0x10))();
    pppuStack_534 = &ppuStack_4fc;
    uStack_538 = 0x4199fa;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x28 + 0xcc))();
    uStack_538 = 1;
    dStack_53c = 0x419a09;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x28 + 0xe8))();
    dStack_53c = ((PopUpButton *)*pdVar5)->mbr_0x28;
    uStack_540 = (undefined *)0x419a1a;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x10 + 0xa4))();
    piVar15 = (int *)this->mbr_0xe4;
    uStack_540 = &stack0xfffffae0;
    puStack_544 = &uStack_52c;
    puStack_548 = (undefined4 *)0x419a32;
    (**(code **)(*piVar15 + 0x48))();
    puStack_548 = &uStack_52c;
    puStack_54c = &stack0xfffffadc;
    pppuStack_550 = (undefined4 ***)0x419a44;
    (**(code **)(*piVar15 + 0x14))();
    pppuStack_550 = &ppuStack_518;
    puStack_554 = (undefined4 *)0x419a54;
    (**(code **)(*piVar15 + 0xd0))();
    puStack_554 = &uStack_4e0;
    (**(code **)(*piVar15 + 0x138))();
    uVar2 = (**(code **)(*piVar15 + 0x88))();
    uVar8 = 0xbf800000;
    uVar7 = 0xbf800000;
    uStack_540 = (undefined *)CONCAT31(uStack_540._1_3_,uVar2);
    uVar6 = 0;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x2c + 0x130))
              (&dStack_4e4,0,0,0,0xbf800000,0xbf800000,1);
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x2c + 0x84))(uVar8);
    uStack_394 = uStack_394 & 0xffffff00;
    pcVar1 = "CalledShotIcon_down";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&uStack_398,"CalledShotIcon_down",(uint)(pcVar4 + -0x6506ec));
    uStack_370 = (dword *)CONCAT31(uStack_370._1_3_,0x10);
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x2c + 0x4c))(&uStack_398);
    uStack_374 = (dword **)CONCAT31(uStack_374._1_3_,3);
    uStack_398 = uStack_398 & 0xffffff00;
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x2c + 0x44))(uVar6,uVar8);
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x2c + 0x10))(uVar7,uVar6);
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x2c + 0xcc))(&puStack_554);
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x2c + 0xe8))(1);
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x14 + 0xa4))
              (((PopUpButton *)*pdVar5)->mbr_0x2c);
    (**(code **)(*(int *)((PopUpButton *)*pdVar5)->mbr_0x4 + 0x54))(1);
    if (0xf < local_180) {
                    /* WARNING: Subroutine does not return */
      piStack_210 = (int *)0x419bbf;
      _free(local_194);
    }
    local_180 = 0xf;
    local_184 = 0;
    local_194 = (void *)((uint)local_194 & 0xffffff00);
    if (0xf < local_19c) {
                    /* WARNING: Subroutine does not return */
      piStack_210 = (int *)0x419be8;
      _free(local_1b0);
    }
    local_19c = 0xf;
    local_1a0 = 0;
    local_1b0 = (void *)((uint)local_1b0 & 0xffffff00);
    local_4 = 0xffffffff;
    if (0xf < local_1bc) {
                    /* WARNING: Subroutine does not return */
      piStack_210 = (int *)0x419c16;
      _free(local_1d0);
    }
    pdVar5 = pdVar5 + 1;
    local_1b8 = local_1b8 - 1;
    local_1bc = 0xf;
    local_1c0 = 0;
    local_1d0 = (void *)((uint)local_1d0 & 0xffffff00);
    if (local_1b8 == 0) {
      ExceptionList = pvStack_c;
      FUN_00616e15(local_10 ^ unaff_retaddr);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  uStack_3f4 = 0x419415;
  _free(pvStack_2ec);
}



/* WARNING: Removing unreachable block (ram,0x00419f59) */

void __thiscall cls_0x41a2b0::meth_0x419c70(cls_0x41a2b0 *this)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  void *pvVar4;
  undefined uVar5;
  GameInventory *this_00;
  cls_0x616328 *pcVar6;
  cls_0x412e60 *this_01;
  char *pcVar7;
  int *piVar8;
  dword *pdVar9;
  bool bVar10;
  uint unaff_retaddr;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined4 uVar13;
  int iVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  dword dVar17;
  dword dVar18;
  undefined *puStack_12c;
  VFX_Parameter__vftable_673a20 *pVStack_128;
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined *puStack_11c;
  undefined *puStack_118;
  VFX_Parameter__vftable_673a20 *_Memory;
  VFX_Parameter__vftable_673a20 VStack_108;
  undefined local_104 [4];
  void *pvStack_100;
  dword dStack_fc;
  dword dStack_f8;
  void *pvStack_f0;
  uint uStack_ec;
  undefined local_e4;
  dword dStack_e0;
  dword dStack_dc;
  dword dStack_d8;
  VFX_Parameter__vftable_673a20 *local_d4;
  dword local_d0;
  char acStack_cc [4];
  char acStack_c8 [28];
  char acStack_ac [4];
  char acStack_a8 [36];
  undefined uStack_84;
  undefined uStack_80;
  undefined uStack_7c;
  undefined auStack_64 [4];
  undefined auStack_60 [4];
  undefined local_5c [48];
  uint uStack_2c;
  void *pvStack_28;
  uint uStack_1c;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  puStack_8 = &LAB_0062c1f4;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_d0 = 0xf;
  local_d4 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_e4 = 0;
  puStack_118 = local_104;
  puStack_11c = local_5c;
  local_4 = 0;
  puStack_120 = (undefined *)0x419cd1;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)&(this->cls_0x4395a0).field_0x4 + 0x48))();
  dVar17 = local_4;
  puStack_120 = auStack_60;
  uStack_124 = &VStack_108;
  pVStack_128 = (VFX_Parameter__vftable_673a20 *)0x419cf1;
  (**(code **)(*(int *)(&this->mbr_0x9c)[local_4] + 0x48))();
  pVStack_128 = &VStack_108;
  puStack_12c = auStack_64;
  (**(code **)(*(int *)(&this->mbr_0x9c)[dVar17] + 0x14))();
  (**(code **)(*(int *)(&this->mbr_0xa4)[dVar17] + 0x138))();
  uVar5 = (**(code **)(*(int *)(&this->mbr_0xa4)[dVar17] + 0x68))();
  uStack_124 = (VFX_Parameter__vftable_673a20 *)CONCAT31(uStack_124._1_3_,uVar5);
  puStack_118 = (undefined *)(**(code **)(*(int *)(&this->mbr_0xa4)[dVar17] + 0x78))();
  this_00 = (GameInventory *)meth_0x416df0(this);
  pvVar2 = ExceptionList;
  pvVar4 = pvStack_28;
  if (this_00 == (GameInventory *)0x0) goto joined_r0x00419d50;
  pcVar6 = (cls_0x616328 *)0x0;
  if (dVar17 == 0) {
    dVar17 = 2;
LAB_00419d71:
    pcVar6 = (cls_0x616328 *)GameInventory::meth_0x4693d0(this_00,dVar17);
  }
  else if (dVar17 == 1) {
    dVar17 = 3;
    goto LAB_00419d71;
  }
  this_01 = (cls_0x412e60 *)
            FUN_006165e0(pcVar6,0,&GameItem::RTTI_Type_Descriptor,&GameWeapon::RTTI_Type_Descriptor,
                         0);
  dVar18 = 0;
  pTVar16 = &GameCreature::RTTI_Type_Descriptor;
  pTVar15 = &Entity::RTTI_Type_Descriptor;
  dVar17 = 0;
  pcVar6 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x88);
  FUN_006165e0(pcVar6,dVar17,pTVar15,pTVar16,dVar18);
  piVar3 = (int *)uStack_124;
  pvVar2 = ExceptionList;
  pvVar4 = pvStack_28;
  if (this_01 != (cls_0x412e60 *)0x0) {
    pdVar9 = &this->mbr_0x278;
    _Memory = (VFX_Parameter__vftable_673a20 *)0x1;
    do {
      VStack_108.virt_meth_0x4ff950_0 = (virt_meth_0x4ff950 *)this_01->mbr_0x408;
      cls_0x412e60::meth_0x412ed0(this_01,(int **)&uStack_124,(int)_Memory);
      FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x2c),0,&Client::RTTI_Type_Descriptor,
                   &GameClient::RTTI_Type_Descriptor,0);
      pvVar2 = ExceptionList;
      pvVar4 = pvStack_28;
      if (uStack_124 == (VFX_Parameter__vftable_673a20 *)VStack_108.virt_meth_0x4ff950_0) break;
      if (uStack_124 == (VFX_Parameter__vftable_673a20 *)0x0) {
        (**(code **)(**(int **)(*pdVar9 + 4) + 0x54))();
        (**(code **)(**(int **)(*pdVar9 + 4) + 0x44))();
        (**(code **)(**(int **)(*pdVar9 + 0x10) + 0x130))
                  (&stack0xfffffef0,0,0,0,0xbf800000,0xbf800000);
        uVar13 = 0xbf800000;
        (**(code **)(**(int **)(*pdVar9 + 0x14) + 0x130))
                  (&puStack_12c,0,0,0,0xbf800000,0xbf800000,1);
        (**(code **)(**(int **)(*pdVar9 + 0x10) + 100))(piVar3);
        (**(code **)(**(int **)(*pdVar9 + 0x14) + 100))(piVar3);
        (**(code **)(**(int **)(*pdVar9 + 0x10) + 0x74))(uVar13);
        (**(code **)(**(int **)(*pdVar9 + 0x14) + 0x74))(uVar13);
        (**(code **)(**(int **)(*pdVar9 + 0x18) + 0x130))(0x185);
        (**(code **)(**(int **)(*pdVar9 + 0x1c) + 0x130))(0x185);
        FUN_00616d8c(acStack_c8,&DAT_00650628);
        pcVar7 = acStack_c8;
        puStack_12c = (undefined *)0xf;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)&stack0xfffffebc,acStack_c8,(int)pcVar7 - (int)(acStack_c8 + 1));
        uStack_7c = 1;
        (**(code **)(**(int **)(*pdVar9 + 0x20) + 300))(&stack0xfffffebc);
        uStack_80 = 0;
        pcVar7 = acStack_cc;
        puStack_118 = (undefined *)0x0;
        pVStack_128 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_128 & 0xffffff00);
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)&puStack_12c,acStack_cc,(int)pcVar7 - (int)(acStack_cc + 1));
        uStack_80 = 2;
        (**(code **)(**(int **)(*pdVar9 + 0x24) + 300))(&puStack_12c);
        uStack_84 = 0;
        if (0xf < puStack_118) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_12c);
        }
        puStack_118 = (undefined *)0xf;
        puStack_11c = (undefined *)0x0;
        puStack_12c = (undefined *)((uint)puStack_12c & 0xffffff00);
        (**(code **)(**(int **)(*pdVar9 + 0x28) + 0x54))(1);
        piVar8 = *(int **)(*pdVar9 + 0x2c);
        bVar10 = true;
      }
      else {
        (**(code **)(**(int **)(*pdVar9 + 4) + 0x54))();
        (**(code **)(**(int **)(*pdVar9 + 4) + 0x44))();
        (**(code **)(**(int **)(*pdVar9 + 0x10) + 0x130))
                  (&stack0xfffffef0,0,0,0,0xbf800000,0xbf800000);
        iVar14 = -0x40800000;
        ppuVar12 = &puStack_12c;
        (**(code **)(**(int **)(*pdVar9 + 0x14) + 0x130))(ppuVar12,0,0,0,0xbf800000,0xbf800000,1);
        piVar8 = piVar3;
        (**(code **)(**(int **)(*pdVar9 + 0x10) + 100))();
        (**(code **)(**(int **)(*pdVar9 + 0x14) + 100))();
        (**(code **)(**(int **)(*pdVar9 + 0x10) + 0x74))(iVar14);
        (**(code **)(**(int **)(*pdVar9 + 0x14) + 0x74))();
        puVar11 = ppuVar12[0x13];
        (**(code **)(**(int **)(*pdVar9 + 0x18) + 0x130))();
        (**(code **)(**(int **)(*pdVar9 + 0x1c) + 0x130))(piVar8[0x13]);
        FUN_00616d8c(acStack_a8,&DAT_00650628);
        pcVar7 = acStack_a8;
        dStack_d8 = 0xf;
        dStack_dc = 0;
        uStack_ec = uStack_ec & 0xffffff00;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)&pvStack_f0,acStack_a8,(int)pcVar7 - (int)(acStack_a8 + 1));
        uStack_7c = 3;
        (**(code **)(**(int **)(*pdVar9 + 0x20) + 300))(&pvStack_f0);
        uStack_80 = 0;
        if (0xf < dStack_dc) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_f0);
        }
        dStack_dc = 0xf;
        dStack_f8 = 0xf;
        pcVar7 = acStack_ac;
        dStack_e0 = 0;
        pvStack_f0 = (void *)((uint)pvStack_f0 & 0xffffff00);
        dStack_fc = 0;
        this_01 = (cls_0x412e60 *)((uint)this_01 & 0xffffff00);
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)&stack0xfffffef0,acStack_ac,(int)pcVar7 - (int)(acStack_ac + 1));
        uStack_80 = 4;
        (**(code **)(**(int **)(*pdVar9 + 0x24) + 300))(&stack0xfffffef0);
        uStack_84 = 0;
        if (0xf < dStack_fc) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        dStack_fc = 0xf;
        pvStack_100 = (void *)0x0;
        _Memory = (VFX_Parameter__vftable_673a20 *)((uint)_Memory & 0xffffff00);
        (**(code **)(**(int **)(*pdVar9 + 0x28) + 0x54))(*(char *)(iVar14 + 0x41) == '\0');
        bVar10 = puVar11[0x41] == '\0';
        piVar8 = *(int **)(*pdVar9 + 0x2c);
      }
      (**(code **)(*piVar8 + 0x54))(bVar10);
      pdVar9 = pdVar9 + 1;
      bVar10 = (int)_Memory < 6;
      _Memory = (VFX_Parameter__vftable_673a20 *)((int)&_Memory->virt_meth_0x4ff950_0 + 1);
      pvVar2 = ExceptionList;
      pvVar4 = pvStack_28;
    } while (bVar10);
  }
joined_r0x00419d50:
  ExceptionList = pvVar4;
  if (uStack_ec < 0x10) {
    pVStack_128 = (VFX_Parameter__vftable_673a20 *)0x41a29f;
    FUN_00616e15(uStack_2c ^ uStack_1c);
    return;
  }
  ExceptionList = pvVar2;
                    /* WARNING: Subroutine does not return */
  _free(pvStack_100);
}



cls_0x41a2b0 * __thiscall
cls_0x41a2b0::cls_0x41a2b0(cls_0x41a2b0 *this,_String_base *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  VFX_Parameter__vftable_673a20 *pVVar3;
  undefined4 uVar4;
  dword dVar5;
  char *pcVar6;
  int *piVar7;
  CounterControl *pCVar8;
  char *pcVar9;
  Base *pBVar10;
  cls_0x41a2b0 *pcVar11;
  void *unaff_EBP;
  int iVar12;
  dword *pdVar13;
  uint unaff_retaddr;
  int iVar14;
  void *local_cc;
  void *local_c8;
  undefined4 *puStack_c4;
  dword dStack_c0;
  VFX_Parameter__vftable_673a20 *pVStack_bc;
  VFX_Parameter__vftable_673a20 *local_b8;
  VFX_Parameter__vftable_673a20 *local_b4;
  dword *local_b0;
  CounterControl *local_ac;
  undefined auStack_a8 [4];
  dword *local_a4;
  dword local_a0;
  undefined local_9c [8];
  undefined local_94 [4];
  void *local_90;
  Picture *pPStack_88;
  dword local_80;
  dword local_7c;
  Picture *pPStack_78;
  dword local_70;
  void *local_6c;
  undefined local_68;
  dword dStack_5c;
  dword local_58;
  void *local_54;
  undefined uStack_50;
  dword dStack_44;
  dword dStack_40;
  dword dStack_3c;
  cls_0x41a2b0 *local_34;
  char local_30 [24];
  undefined uStack_18;
  uint uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_0062c49e;
  uStack_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  local_70 = 0;
  ExceptionList = &uStack_c;
  local_34 = this;
  if (param_2 != 0) {
    ExceptionList = &uStack_c;
    (this->cls_0x4395a0).mbr_0x0 = 0x650af0;
    CEngineInterface::CEngineInterface((CEngineInterface *)&this->field_0x29c,param_1);
    local_4 = 0;
  }
  local_70 = (dword)(param_2 != 0);
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,param_1,0);
  *(CActionbarInterface__vftable_6505b8 **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &CActionbarInterface__vftable_6505b8_006505b8;
  iVar12 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar12 + -4 + (int)this) = iVar12 + -0x29c;
  local_4 = 1;
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "Actionbar.INT";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"Actionbar.INT",(uint)(pcVar9 + -0x650ae0));
  local_4._0_1_ = 2;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             (int *)&local_cc);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  this->mbr_0x26c = 0xffffffff;
  this->mbr_0x270 = 0xffffffff;
  this->mbr_0x274 = 0xffffffff;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = 1;
  this->mbr_0x290 = 0;
  this->mbr_0x294 = 0;
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "winActionbar";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_cc,"winActionbar",(uint)(pcVar9 + -0x650ad0))
  ;
  local_4._0_1_ = 3;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  *(undefined4 *)&(this->cls_0x4395a0).field_0x4 = uVar4;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  piVar7 = *(int **)&(this->cls_0x4395a0).field_0x4;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x44))(0);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "picBackground";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"picBackground",(uint)(pcVar9 + -0x650ac0));
  local_4._0_1_ = 4;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface = uVar4;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "btnSneak";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_cc,"btnSneak",(uint)(pcVar9 + -0x650ab4));
  local_4._0_1_ = 5;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "btnInventory";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_cc,"btnInventory",(uint)(pcVar9 + -0x650aa4))
  ;
  local_4._0_1_ = 6;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "btnPipBoy";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_cc,"btnPipBoy",(uint)(pcVar9 + -0x650a98));
  local_4._0_1_ = 7;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 = uVar4;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "btnUseSkill";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_cc,"btnUseSkill",(uint)(pcVar9 + -0x650a8c));
  local_4._0_1_ = 8;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14 = uVar4;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "btnCharacter";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_cc,"btnCharacter",(uint)(pcVar9 + -0x650a7c))
  ;
  local_4._0_1_ = 9;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "btnOptions";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_cc,"btnOptions",(uint)(pcVar9 + -0x650a70));
  local_4._0_1_ = 10;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b0 = (dword *)0x0;
  pdVar13 = (dword *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20;
  do {
    FUN_00616d8c(local_30,(byte *)"picPlayer%02d");
    pcVar6 = local_30;
    local_7c = 0xf;
    local_80 = 0;
    local_90 = (void *)((uint)local_90 & 0xffffff00);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_94,local_30,(int)pcVar6 - (int)(local_30 + 1));
    local_4._0_1_ = 0xb;
    piVar7 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_94);
    *pdVar13 = (dword)piVar7;
    local_4._0_1_ = 1;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90 = (void *)((uint)local_90 & 0xffffff00);
    if ((int *)*pdVar13 != (int *)0x0) {
      local_54 = (void *)0xf;
      local_58 = 0;
      local_68 = 0;
      pcVar6 = "lblName";
      do {
        pcVar9 = pcVar6;
        pcVar6 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_6c,"lblName",(uint)(pcVar9 + -0x650a58));
      local_4._0_1_ = 0xc;
      piVar7 = (int *)(**(code **)(*(int *)*pdVar13 + 0xb4))();
      pdVar13[6] = (dword)piVar7;
      uStack_8._0_1_ = 1;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_58 = 0xf;
      dStack_5c = 0;
      local_6c = (void *)((uint)local_6c & 0xffffff00);
      dStack_3c = 0xf;
      dStack_40 = 0;
      uStack_50 = 0;
      pcVar6 = "picHealth";
      do {
        pcVar9 = pcVar6;
        pcVar6 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&local_54,"picHealth",(uint)(pcVar9 + -0x650a4c));
      uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,0xd);
      piVar7 = (int *)(**(code **)(*(int *)*pdVar13 + 0xb4))(&local_54);
      pdVar13[0xc] = (dword)piVar7;
      uStack_c._0_1_ = 1;
      if (0xf < dStack_40) {
                    /* WARNING: Subroutine does not return */
        _free(local_54);
      }
      dStack_40 = 0xf;
      dStack_44 = 0;
      local_54 = (void *)((uint)local_54 & 0xffffff00);
      if ((int *)pdVar13[0xc] != (int *)0x0) {
        (**(code **)(*(int *)pdVar13[0xc] + 0xe8))(1);
      }
      pVStack_bc = (VFX_Parameter__vftable_673a20 *)0xf;
      dStack_c0 = 0;
      pcVar6 = "picFatigue";
      do {
        pcVar9 = pcVar6;
        pcVar6 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&stack0xffffff2c,"picFatigue",(uint)(pcVar9 + -0x650a40));
      uStack_c = (void *)CONCAT31(uStack_c._1_3_,0xe);
      piVar7 = (int *)(**(code **)(*(int *)*pdVar13 + 0xb4))(&stack0xffffff2c);
      pdVar13[0x12] = (dword)piVar7;
      local_10 = (void *)CONCAT31(local_10._1_3_,1);
      if (0xf < dStack_c0) {
                    /* WARNING: Subroutine does not return */
        _free(unaff_EBP);
      }
      dStack_c0 = 0xf;
      puStack_c4 = (undefined4 *)0x0;
      unaff_EBP = (void *)((uint)unaff_EBP & 0xffffff00);
      (**(code **)(*(int *)pdVar13[0x12] + 0xe8))(1);
      (**(code **)(*(int *)*pdVar13 + 0x54))(1);
    }
    local_b0 = (dword *)((int)(virt_meth_0x4ff950 **)local_b0 + 1);
    pdVar13 = pdVar13 + 1;
  } while ((int)local_b0 < 6);
  local_ac = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0xf;
  if (local_ac == (CounterControl *)0x0) {
    pCVar8 = (CounterControl *)0x0;
  }
  else {
    pCVar8 = CounterControl::CounterControl(local_ac);
  }
  local_4._0_1_ = 1;
  this->mbr_0x90 = (dword)pCVar8;
  CounterControl::meth_0x4332e0(pCVar8,3);
  CounterControl::meth_0x430850((CounterControl *)this->mbr_0x90,0);
  CounterControl::meth_0x430890((CounterControl *)this->mbr_0x90,999);
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "winHealthDigit1";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"winHealthDigit1",(uint)(pcVar9 + -0x650a30));
  local_4._0_1_ = 0x10;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x90,0,piVar7);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "winHealthDigit10";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"winHealthDigit10",(uint)(pcVar9 + -0x650a1c));
  local_4._0_1_ = 0x11;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x90,1,piVar7);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "winHealthDigit100";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"winHealthDigit100",(uint)(pcVar9 + -0x650a08));
  local_4._0_1_ = 0x12;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x90,2,piVar7);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  *(undefined4 *)(this->mbr_0x90 + 0xc4) = 0x3dcccccd;
  local_ac = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0x13;
  if (local_ac == (CounterControl *)0x0) {
    pCVar8 = (CounterControl *)0x0;
  }
  else {
    pCVar8 = CounterControl::CounterControl(local_ac);
  }
  local_4._0_1_ = 1;
  this->mbr_0x94 = (dword)pCVar8;
  CounterControl::meth_0x4332e0(pCVar8,3);
  CounterControl::meth_0x430850((CounterControl *)this->mbr_0x94,0);
  CounterControl::meth_0x430890((CounterControl *)this->mbr_0x94,999);
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "winFatigueDigit1";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"winFatigueDigit1",(uint)(pcVar9 + -0x6509f4));
  local_4._0_1_ = 0x14;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x94,0,piVar7);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "winFatigueDigit10";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"winFatigueDigit10",(uint)(pcVar9 + -0x6509e0));
  local_4._0_1_ = 0x15;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x94,1,piVar7);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "winFatigueDigit100";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"winFatigueDigit100",(uint)(pcVar9 + -0x6509cc));
  local_4._0_1_ = 0x16;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x94,2,piVar7);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  *(undefined4 *)(this->mbr_0x94 + 0xc4) = 0x3dcccccd;
  local_ac = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0x17;
  if (local_ac == (CounterControl *)0x0) {
    pCVar8 = (CounterControl *)0x0;
  }
  else {
    pCVar8 = CounterControl::CounterControl(local_ac);
  }
  local_4._0_1_ = 1;
  this->mbr_0x98 = (dword)pCVar8;
  CounterControl::meth_0x4332e0(pCVar8,3);
  CounterControl::meth_0x430850((CounterControl *)this->mbr_0x98,0);
  CounterControl::meth_0x430890((CounterControl *)this->mbr_0x98,999);
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "winEvasionDigit1";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"winEvasionDigit1",(uint)(pcVar9 + -0x6509b8));
  local_4._0_1_ = 0x18;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x98,0,piVar7);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "winEvasionDigit10";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"winEvasionDigit10",(uint)(pcVar9 + -0x6509a4));
  local_4._0_1_ = 0x19;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x98,1,piVar7);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "winEvasionDigit100";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"winEvasionDigit100",(uint)(pcVar9 + -0x650990));
  local_4._0_1_ = 0x1a;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x98,2,piVar7);
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  *(undefined4 *)(this->mbr_0x98 + 0xc4) = 0x3dcccccd;
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "btnWeapon01";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_cc,"btnWeapon01",(uint)(pcVar9 + -0x650984));
  local_4._0_1_ = 0x1b;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0x9c = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "picWeapon01Icon_up";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"picWeapon01Icon_up",(uint)(pcVar9 + -0x650970));
  local_4._0_1_ = 0x1c;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xa4 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "picWeapon01Icon_down";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"picWeapon01Icon_down",(uint)(pcVar9 + -0x650958));
  local_4._0_1_ = 0x1d;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xac = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "lblWeapon01Mode_up";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"lblWeapon01Mode_up",(uint)(pcVar9 + -0x650944));
  local_4._0_1_ = 0x1e;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xb4 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "lblWeapon01Mode_down";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"lblWeapon01Mode_down",(uint)(pcVar9 + -0x65092c));
  local_4._0_1_ = 0x1f;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xbc = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "lblWeapon01AP_up";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"lblWeapon01AP_up",(uint)(pcVar9 + -0x650918));
  local_4._0_1_ = 0x20;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xc4 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "lblWeapon01AP_down";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"lblWeapon01AP_down",(uint)(pcVar9 + -0x650904));
  local_4._0_1_ = 0x21;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xcc = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "picWeapon01Mask_up";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"picWeapon01Mask_up",(uint)(pcVar9 + -0x6508f0));
  local_4._0_1_ = 0x22;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xd4 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "picReloadIcon01_up";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"picReloadIcon01_up",(uint)(pcVar9 + -0x6508dc));
  local_4._0_1_ = 0x23;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xec = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "picReloadIcon01_down";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"picReloadIcon01_down",(uint)(pcVar9 + -0x6508c4));
  local_4._0_1_ = 0x24;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0x16c = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "picWeapon01CalledShot_up";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"picWeapon01CalledShot_up",(uint)(pcVar9 + -0x6508a8));
  local_4._0_1_ = 0x25;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xdc = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "picWeapon01CalledShot_down";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"picWeapon01CalledShot_down",(uint)(pcVar9 + -0x65088c));
  local_4._0_1_ = 0x26;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xe4 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "btnWeapon02";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_cc,"btnWeapon02",(uint)(pcVar9 + -0x650880));
  local_4._0_1_ = 0x27;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xa0 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "picWeapon02Icon_up";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"picWeapon02Icon_up",(uint)(pcVar9 + -0x65086c));
  local_4._0_1_ = 0x28;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xa8 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "picWeapon02Icon_down";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"picWeapon02Icon_down",(uint)(pcVar9 + -0x650854));
  local_4._0_1_ = 0x29;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xb0 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "lblWeapon02Mode_up";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"lblWeapon02Mode_up",(uint)(pcVar9 + -0x650840));
  local_4._0_1_ = 0x2a;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xb8 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "lblWeapon02Mode_down";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"lblWeapon02Mode_down",(uint)(pcVar9 + -0x650828));
  local_4._0_1_ = 0x2b;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xc0 = dVar5;
  local_4._0_1_ = 1;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_c8 = (void *)((uint)local_c8 & 0xffffff00);
  pcVar6 = "lblWeapon02AP_up";
  do {
    pcVar9 = pcVar6;
    pcVar6 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_cc,"lblWeapon02AP_up",(uint)(pcVar9 + -0x650814));
  local_4._0_1_ = 0x2c;
  dVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
  this->mbr_0xc8 = dVar5;
  local_4._0_1_ = 1;
  if (local_b4 < (VFX_Parameter__vftable_673a20 *)0x10) {
    local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_c8 = (void *)((uint)local_c8 & 0xffffff00);
    pcVar6 = "lblWeapon02AP_down";
    do {
      pcVar9 = pcVar6;
      pcVar6 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_cc,"lblWeapon02AP_down",(uint)(pcVar9 + -0x650800));
    local_4._0_1_ = 0x2d;
    dVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
    this->mbr_0xd0 = dVar5;
    local_4._0_1_ = 1;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_c8);
    }
    local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_c8 = (void *)((uint)local_c8 & 0xffffff00);
    pcVar6 = "picWeapon02Mask_up";
    do {
      pcVar9 = pcVar6;
      pcVar6 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_cc,"picWeapon02Mask_up",(uint)(pcVar9 + -0x6507ec));
    local_4._0_1_ = 0x2e;
    dVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
    this->mbr_0xd8 = dVar5;
    local_4._0_1_ = 1;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_c8);
    }
    local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_c8 = (void *)((uint)local_c8 & 0xffffff00);
    pcVar6 = "picReloadIcon02_up";
    do {
      pcVar9 = pcVar6;
      pcVar6 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_cc,"picReloadIcon02_up",(uint)(pcVar9 + -0x6507d8));
    local_4._0_1_ = 0x2f;
    dVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
    this->mbr_0x12c = dVar5;
    local_4._0_1_ = 1;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_c8);
    }
    local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_c8 = (void *)((uint)local_c8 & 0xffffff00);
    pcVar6 = "picReloadIcon02_down";
    do {
      pcVar9 = pcVar6;
      pcVar6 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_cc,"picReloadIcon02_down",(uint)(pcVar9 + -0x6507c0));
    local_4._0_1_ = 0x30;
    dVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
    this->mbr_0x1ac = dVar5;
    local_4._0_1_ = 1;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_c8);
    }
    local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_c8 = (void *)((uint)local_c8 & 0xffffff00);
    pcVar6 = "picWeapon02CalledShot_up";
    do {
      pcVar9 = pcVar6;
      pcVar6 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_cc,"picWeapon02CalledShot_up",(uint)(pcVar9 + -0x6507a4));
    local_4._0_1_ = 0x31;
    dVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
    this->mbr_0xe0 = dVar5;
    local_4._0_1_ = 1;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_c8);
    }
    local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_c8 = (void *)((uint)local_c8 & 0xffffff00);
    pcVar6 = "picWeapon02CalledShot_down";
    do {
      pcVar9 = pcVar6;
      pcVar6 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_cc,"picWeapon02CalledShot_down",(uint)(pcVar9 + -0x650788));
    local_4._0_1_ = 0x32;
    dVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
    this->mbr_0xe8 = dVar5;
    local_4._0_1_ = 1;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_c8);
    }
    if ((int *)this->mbr_0xa4 != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xa4 + 0xe8))();
    }
    if ((int *)this->mbr_0xac != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xac + 0xe8))();
    }
    if ((int *)this->mbr_0xec != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xec + 0xe8))();
    }
    if ((int *)this->mbr_0x16c != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0x16c + 0xe8))();
    }
    if ((int *)this->mbr_0xdc != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xdc + 0xe8))();
    }
    if ((int *)this->mbr_0xe4 != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xe4 + 0xe8))();
    }
    if ((int *)this->mbr_0xa8 != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xa8 + 0xe8))();
    }
    if ((int *)this->mbr_0xb0 != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xb0 + 0xe8))();
    }
    if ((int *)this->mbr_0x12c != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0x12c + 0xe8))();
    }
    if ((int *)this->mbr_0x1ac != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0x1ac + 0xe8))();
    }
    if ((int *)this->mbr_0xe0 != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xe0 + 0xe8))();
    }
    if ((int *)this->mbr_0xe8 != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xe8 + 0xe8))();
    }
    if ((int *)this->mbr_0xd4 != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xd4 + 0xe8))();
      (**(code **)(*(int *)this->mbr_0xd4 + 0x5c))(0xff000000);
    }
    if ((int *)this->mbr_0xd8 != (int *)0x0) {
      (**(code **)(*(int *)this->mbr_0xd8 + 0xe8))();
      (**(code **)(*(int *)this->mbr_0xd8 + 0x5c))(0xff000000);
    }
    local_a4 = &this->mbr_0xac;
    local_b0 = &this->mbr_0xec;
    local_ac = (CounterControl *)0x2;
    do {
      local_7c = 0xf;
      local_80 = 0;
      local_90 = (void *)((uint)local_90 & 0xffffff00);
      local_4._0_1_ = 0x33;
      if ((int *)*local_b0 != (int *)0x0) {
        (**(code **)(*(int *)*local_b0 + 0x48))(local_9c);
        pVVar3 = local_b8;
        (**(code **)(*(int *)local_b8->virt_meth_0x4ff950_0 + 0x14))(&local_80,&local_a0);
        (**(code **)(*(int *)pVVar3->virt_meth_0x4ff950_0 + 0xd0))(&local_a4);
        pVStack_bc = pVVar3 + 1;
        iVar12 = 1;
        do {
          pPStack_88 = (Picture *)FUN_004a7680(0xd2c);
          uStack_18 = 0x34;
          if (pPStack_88 == (Picture *)0x0) {
            pBVar10 = (Base *)0x0;
          }
          else {
            pBVar10 = (Base *)GUI::Picture::Picture(pPStack_88,2);
          }
          uStack_18 = 0x33;
          (**(code **)(*(int *)local_b8[-2].virt_meth_0x4ff950_0 + 0xa4))(pBVar10);
          (*pBVar10->vftptr_0x0[4].virt_meth_0x4b2850_28)(pBVar10,(int)auStack_a8);
          iVar14 = 0;
          (*pBVar10->vftptr_0x0[3].virt_deldtor_0x4af000_0)(pBVar10);
          (*pBVar10->vftptr_0x0->virt_meth_0x4b2790_16)(pBVar10,(int)local_90,(int)local_b0);
          (*pBVar10->vftptr_0x0[1].virt_meth_0x4b27e0_24)
                    (pBVar10,(LONG)local_b4,(int)local_b8 - iVar12 * (int)local_b0);
          (*pBVar10->vftptr_0x0[5].virt_meth_0x4b2770_12)(pBVar10,1,iVar14);
          puVar2 = puStack_c4;
          pVStack_bc->virt_meth_0x4ff950_0 = (virt_meth_0x4ff950 *)pBVar10;
          iVar12 = iVar12 + 1;
          pVStack_bc = pVStack_bc + 1;
        } while (iVar12 < 0x10);
        (**(code **)(*(int *)local_b8[-2].virt_meth_0x4ff950_0 + 0xc0))(*puStack_c4);
        if ((int *)puVar2[0x20] != (int *)0x0) {
          (**(code **)(*(int *)puVar2[0x20] + 0x48))(local_9c);
          (**(code **)(*(int *)puVar2[0x20] + 0x14))(&local_80,&local_a0);
          (**(code **)(*(int *)puVar2[0x20] + 0xd0))(&local_a4);
          pVStack_bc = (VFX_Parameter__vftable_673a20 *)(puVar2 + 0x21);
          iVar12 = 1;
          do {
            pPStack_88 = (Picture *)FUN_004a7680(0xd2c);
            uStack_18 = 0x35;
            if (pPStack_88 == (Picture *)0x0) {
              pBVar10 = (Base *)0x0;
            }
            else {
              pBVar10 = (Base *)GUI::Picture::Picture(pPStack_88,2);
            }
            uStack_18 = 0x33;
            (**(code **)(*(int *)local_b8->virt_meth_0x4ff950_0 + 0xa4))(pBVar10);
            (*pBVar10->vftptr_0x0[4].virt_meth_0x4b2850_28)(pBVar10,(int)auStack_a8);
            iVar14 = 0;
            (*pBVar10->vftptr_0x0[3].virt_deldtor_0x4af000_0)(pBVar10);
            (*pBVar10->vftptr_0x0->virt_meth_0x4b2790_16)(pBVar10,(int)local_90,(int)local_b0);
            (*pBVar10->vftptr_0x0[1].virt_meth_0x4b27e0_24)
                      (pBVar10,(LONG)local_b4,(int)local_b8 - iVar12 * (int)local_b0);
            (*pBVar10->vftptr_0x0[5].virt_meth_0x4b2770_12)(pBVar10,1,iVar14);
            pVStack_bc->virt_meth_0x4ff950_0 = (virt_meth_0x4ff950 *)pBVar10;
            iVar12 = iVar12 + 1;
            pVStack_bc = pVStack_bc + 1;
          } while (iVar12 < 0x10);
          (**(code **)(*(int *)local_b8->virt_meth_0x4ff950_0 + 0xc0))(puStack_c4[0x20]);
        }
        local_4._0_1_ = 1;
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
      }
      local_4._0_1_ = 1;
      local_7c = 0xf;
      local_a4 = local_a4 + 1;
      local_b0 = local_b0 + 0x10;
      local_ac = (CounterControl *)((int)&local_ac[-1].mbr_0xc8 + 3);
      local_80 = 0;
      local_90 = (void *)((uint)local_90 & 0xffffff00);
    } while (local_ac != (CounterControl *)0x0);
    local_b4 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
    local_c8 = (void *)((uint)local_c8 & 0xffffff00);
    pcVar6 = "lblActionPoints";
    do {
      pcVar9 = pcVar6;
      pcVar6 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_cc,"lblActionPoints",(uint)(pcVar9 + -0x650778));
    local_4._0_1_ = 0x36;
    dVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_cc);
    this->mbr_0x1ec = dVar5;
    local_4 = CONCAT31(local_4._1_3_,1);
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_c8);
    }
    (**(code **)(*(int *)this->mbr_0x1ec + 0xe8))();
    local_b8 = (VFX_Parameter__vftable_673a20 *)0xf;
    pVStack_bc = (VFX_Parameter__vftable_673a20 *)0x0;
    local_cc = (void *)((uint)local_cc & 0xffffff00);
    pcVar6 = "lblActionPointsValue";
    do {
      pcVar9 = pcVar6;
      pcVar6 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff30,"lblActionPointsValue",(uint)(pcVar9 + -0x650760));
    uStack_8._0_1_ = 0x37;
    dVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff30);
    this->mbr_0x1f0 = dVar5;
    uStack_8._0_1_ = 1;
    if (local_b8 < (VFX_Parameter__vftable_673a20 *)0x10) {
      local_b8 = (VFX_Parameter__vftable_673a20 *)0xf;
      pVStack_bc = (VFX_Parameter__vftable_673a20 *)0x0;
      local_cc = (void *)((uint)local_cc & 0xffffff00);
      pcVar6 = "picAPIcon";
      do {
        pcVar9 = pcVar6;
        pcVar6 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&stack0xffffff30,"picAPIcon",(uint)(pcVar9 + -0x650754));
      uStack_8._0_1_ = 0x38;
      dVar5 = CLoadMapInterface::meth_0x495740
                        ((CLoadMapInterface *)
                         ((int)&(this->cls_0x4395a0).mbr_0x0 +
                         *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff30);
      this->mbr_0x1f4 = dVar5;
      uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,1);
      if ((VFX_Parameter__vftable_673a20 *)0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
      if ((int *)this->mbr_0x1f4 != (int *)0x0) {
        local_b8 = (VFX_Parameter__vftable_673a20 *)0xf;
        pVStack_bc = (VFX_Parameter__vftable_673a20 *)0x0;
        local_cc = (void *)((uint)local_cc & 0xffffff00);
        uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,0x39);
        (**(code **)(*(int *)this->mbr_0x1f4 + 0x48))(&local_a0,&local_ac);
        (**(code **)(*(int *)this->mbr_0x1f4 + 0x14))(&pVStack_bc,&local_b8);
        (**(code **)(*(int *)this->mbr_0x1f4 + 0xd0))(&stack0xffffff20);
        local_a4 = &this->mbr_0x1f8;
        iVar12 = 1;
        do {
          pPStack_78 = (Picture *)FUN_004a7680(0xd2c);
          uStack_8._0_1_ = 0x3a;
          if (pPStack_78 == (Picture *)0x0) {
            pBVar10 = (Base *)0x0;
          }
          else {
            pBVar10 = (Base *)GUI::Picture::Picture(pPStack_78,2);
          }
          uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,0x39);
          (**(code **)(**(int **)&(this->cls_0x4395a0).CEngineInterface.Interface + 0xa4))(pBVar10);
          (*pBVar10->vftptr_0x0[4].virt_meth_0x4b2850_28)(pBVar10,(int)&local_cc);
          (*pBVar10->vftptr_0x0[3].virt_deldtor_0x4af000_0)(pBVar10);
          if (iVar12 % 5 == 4) {
            (*pBVar10->vftptr_0x0->virt_meth_0x4b2790_16)
                      (pBVar10,(int)local_b4,(int)((int)local_b0 + 3));
            pCVar8 = (CounterControl *)((int)&local_ac[-1].mbr_0xc8 + 1);
          }
          else {
            (*pBVar10->vftptr_0x0->virt_meth_0x4b2790_16)(pBVar10,(int)local_b4,(int)local_b0);
            pCVar8 = local_ac;
          }
          (*pBVar10->vftptr_0x0[1].virt_meth_0x4b27e0_24)
                    (pBVar10,(int)local_b4 * iVar12 + local_a0,(LONG)pCVar8);
          *local_a4 = (dword)pBVar10;
          iVar12 = iVar12 + 1;
          local_a4 = local_a4 + 1;
        } while (iVar12 < 0x1e);
        uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,1);
        if ((VFX_Parameter__vftable_673a20 *)0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc);
        }
      }
      meth_0x416eb0(this,0,'\x01');
      meth_0x416eb0(this,1,'\0');
      meth_0x4188a0(this);
      ExceptionList = local_10;
      pcVar11 = (cls_0x41a2b0 *)FUN_00616e15(uStack_14 ^ local_4);
      return pcVar11;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_c8);
}



void __thiscall cls_0x41a2b0::meth_0x41bfa0(cls_0x41a2b0 *this)

{
  DWORD DVar1;
  
  if (this->mbr_0x290 != 0) {
    DVar1 = timeGetTime();
    if (this->mbr_0x290 + 500 < DVar1) {
      meth_0x419c70(this);
      this->mbr_0x290 = 0;
    }
  }
  meth_0x416cd0(this,'\0');
  meth_0x416d80(this);
  meth_0x418820(this,'\0');
  return;
}



void __thiscall cls_0x41a2b0::meth_0x41c040(cls_0x41a2b0 *this,int param_1,int *param_2)

{
  dword dVar1;
  dword dVar2;
  int *piVar3;
  GameInventory *this_00;
  cls_0x412e60 *this_01;
  cls_0x616328 *pcVar4;
  cls_0x409d10 *this_02;
  dword *pdVar5;
  GameClient *pGVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  cls_0x616328 *local_2c [8];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c4b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (GameInventory *)meth_0x416df0(this);
  if (this_00 == (GameInventory *)0x0) {
    ExceptionList = local_c;
    return;
  }
  local_2c[0] = (cls_0x616328 *)0x0;
  if (param_1 == 0) {
    iVar10 = 2;
  }
  else {
    if (param_1 != 1) goto LAB_0041c091;
    iVar10 = 3;
  }
  local_2c[0] = (cls_0x616328 *)GameInventory::meth_0x4693d0(this_00,iVar10);
LAB_0041c091:
  this_01 = (cls_0x412e60 *)
            FUN_006165e0(local_2c[0],0,&GameItem::RTTI_Type_Descriptor,
                         &GameWeapon::RTTI_Type_Descriptor,0);
  iVar11 = 0;
  pTVar8 = &GameCreature::RTTI_Type_Descriptor;
  pTVar7 = &Entity::RTTI_Type_Descriptor;
  iVar10 = 0;
  pcVar4 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x88);
  this_02 = (cls_0x409d10 *)FUN_006165e0(pcVar4,iVar10,pTVar7,pTVar8,iVar11);
  if (this_01 == (cls_0x412e60 *)0x0) {
    if (local_2c[0] != (cls_0x616328 *)0x0) {
      ExceptionList = local_c;
      return;
    }
    if (this_02 == (cls_0x409d10 *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piVar3 = (int *)this_02->mbr_0x6f4;
    cls_0x409d10::meth_0x409d10(this_02,&param_2);
    if (piVar3 == param_2) {
      ExceptionList = local_c;
      return;
    }
    pGVar6 = (GameClient *)
             FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x2c),0,&Client::RTTI_Type_Descriptor,
                          &GameClient::RTTI_Type_Descriptor,0);
    GameClient::meth_0x460040
              (pGVar6,*(undefined4 *)
                       (&this_02->field_0x1e0 + *(int *)(*(int *)&this_02->field_0x4 + 4)));
    if (param_2 == (int *)0x0) {
      iVar10 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(local_2c + 1),"");
      local_4 = 0;
      meth_0x416e30(this,param_1,iVar10);
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_2c + 1));
      meth_0x417f50(this,param_1);
      meth_0x418040(this,param_1,0);
      cVar9 = '\0';
    }
    else {
      meth_0x417450(this,param_1,param_2[0x13]);
      meth_0x417f50(this,param_1);
      meth_0x418040(this,param_1,0);
      cVar9 = *(char *)((int)param_2 + 0x41);
    }
  }
  else {
    dVar1 = this_01->mbr_0x408;
    if ((int)param_2 < 2) {
      pdVar5 = (dword *)cls_0x412e60::meth_0x412e60(this_01,(int **)local_2c);
    }
    else {
      pdVar5 = (dword *)cls_0x412e60::meth_0x412ed0(this_01,(int **)local_2c,(int)param_2);
    }
    dVar2 = *pdVar5;
    if (dVar1 == dVar2) {
      ExceptionList = local_c;
      return;
    }
    pGVar6 = (GameClient *)
             FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x2c),0,&Client::RTTI_Type_Descriptor,
                          &GameClient::RTTI_Type_Descriptor,0);
    if ((int)param_2 < 2) {
      GameClient::meth_0x45ff80
                (pGVar6,*(undefined4 *)
                         (&this_01->field_0x1e0 + *(int *)(*(int *)&this_01->field_0x4 + 4)));
    }
    else {
      cls_0x412e60::meth_0x413500(this_01,param_2);
    }
    if (dVar2 == 0) {
      meth_0x417450(this,param_1,0x185);
      meth_0x417f50(this,param_1);
      FUN_0041c000(this,param_1,*(int *)&this_01->field_0x3ec,*(int *)&this_01->field_0x3f0);
      cVar9 = '\0';
    }
    else {
      meth_0x417450(this,param_1,*(int *)(dVar2 + 0x4c));
      meth_0x417f50(this,param_1);
      FUN_0041c000(this,param_1,*(int *)&this_01->field_0x3ec,*(int *)&this_01->field_0x3f0);
      cVar9 = *(char *)(dVar2 + 0x41);
    }
  }
  meth_0x416ff0(this,param_1,cVar9);
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x41a2b0::meth_0x41c2e0(cls_0x41a2b0 *this,int param_1)

{
  GameInventory *this_00;
  cls_0x616328 *pcVar1;
  GameActionEquip *this_01;
  cls_0x4d8d70 *this_02;
  cls_0x616328 *pcVar2;
  int iVar3;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  cls_0x4d8d70 local_44;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c000;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (GameInventory *)meth_0x416df0(this);
  if (this_00 == (GameInventory *)0x0) {
    ExceptionList = local_c;
    return;
  }
  pcVar2 = (cls_0x616328 *)0x0;
  if (param_1 == 0) {
    iVar7 = 2;
LAB_0041c320:
    pcVar2 = (cls_0x616328 *)GameInventory::meth_0x4693d0(this_00,iVar7);
  }
  else if (param_1 == 1) {
    iVar7 = 3;
    goto LAB_0041c320;
  }
  iVar7 = FUN_006165e0(pcVar2,0,&GameItem::RTTI_Type_Descriptor,&GameWeapon::RTTI_Type_Descriptor,0)
  ;
  iVar8 = 0;
  pTVar5 = &GameCreature::RTTI_Type_Descriptor;
  pTVar4 = &Entity::RTTI_Type_Descriptor;
  iVar3 = 0;
  pcVar1 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_01);
  iVar3 = FUN_006165e0(pcVar1,iVar3,pTVar4,pTVar5,iVar8);
  if (iVar7 == 0) {
    if (pcVar2 == (cls_0x616328 *)0x0) {
      if (iVar3 == 0) {
        iVar7 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&local_44.mbr_0x1c,"");
        local_4 = 1;
        meth_0x416e30(this,param_1,iVar7);
        this_02 = (cls_0x4d8d70 *)&local_44.mbr_0x1c;
      }
      else {
        iVar7 = *(int *)(iVar3 + 0x6f4);
        if (iVar7 != 0) {
          meth_0x417450(this,param_1,*(int *)(iVar7 + 0x4c));
          meth_0x417f50(this,param_1);
          meth_0x418040(this,param_1,0);
          cVar6 = *(char *)(iVar7 + 0x41);
          goto LAB_0041c49a;
        }
        iVar7 = cls_0x4d8d70::meth_0x401d20(&local_44,"");
        local_4 = 0;
        meth_0x416e30(this,param_1,iVar7);
        this_02 = &local_44;
      }
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0(this_02);
    }
    else {
      meth_0x417450(this,param_1,0x17a);
    }
    meth_0x417f50(this,param_1);
    meth_0x418040(this,param_1,0);
  }
  else {
    iVar3 = *(int *)(iVar7 + 0x408);
    if (iVar3 != 0) {
      meth_0x417450(this,param_1,*(int *)(iVar3 + 0x4c));
      meth_0x417f50(this,param_1);
      FUN_0041c000(this,param_1,*(int *)(iVar7 + 0x3ec),*(int *)(iVar7 + 0x3f0));
      cVar6 = *(char *)(iVar3 + 0x41);
      goto LAB_0041c49a;
    }
    meth_0x417450(this,param_1,0x185);
    meth_0x417f50(this,param_1);
    FUN_0041c000(this,param_1,*(int *)(iVar7 + 0x3ec),*(int *)(iVar7 + 0x3f0));
  }
  cVar6 = '\0';
LAB_0041c49a:
  meth_0x416ff0(this,param_1,cVar6);
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x41a2b0::meth_0x41c4c0(cls_0x41a2b0 *this)

{
  int **_Memory;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  dword dVar11;
  int *piStack_40;
  int *local_3c;
  int **ppiStack_38;
  dword local_34;
  dword local_30;
  undefined4 local_2c;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c4e8;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  meth_0x417cf0(this,0,0,0);
  meth_0x417cf0(this,1,0,0);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar5 = "";
  do {
    pcVar7 = pcVar5;
    pcVar5 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"",(uint)(pcVar7 + -0x64d7d8));
  local_4 = 0;
  meth_0x416e30(this,0,local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar5 = "";
  do {
    pcVar7 = pcVar5;
    pcVar5 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"",(uint)(pcVar7 + -0x64d7d8));
  local_4 = 1;
  meth_0x416e30(this,0,local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  meth_0x417f50(this,0);
  meth_0x417f50(this,1);
  meth_0x418040(this,0,0);
  meth_0x418040(this,1,0);
  meth_0x416ff0(this,0,'\0');
  meth_0x416ff0(this,1,'\0');
  piVar8 = (int *)meth_0x416df0(this);
  if (piVar8 != (int *)0x0) {
    if ((int **)piVar8[3] == (int **)0x0) {
      local_3c = (int *)0x0;
    }
    else {
      local_3c = *(int **)piVar8[3];
    }
    if (local_3c != (int *)piVar8[3]) {
      do {
        iVar10 = local_3c[2];
        if (iVar10 != 0) {
          local_30 = FUN_0056e0b0();
          local_2c = 0;
          local_4 = 2;
          cVar6 = (**(code **)(*piVar8 + 0x28))(iVar10,&local_34);
          if (cVar6 == '\0') goto LAB_0041c71f;
          bVar3 = false;
          bVar1 = false;
          bVar2 = false;
          if (local_34 != 0) goto LAB_0041c678;
          goto LAB_0041c71f;
        }
        local_3c = (int *)*local_3c;
      } while (local_3c != (int *)piVar8[3]);
    }
    meth_0x41c2e0(this,0);
    meth_0x41c2e0(this,1);
  }
  ExceptionList = local_c;
  return;
LAB_0041c678:
  do {
    if (ppiStack_38 == (int **)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *ppiStack_38;
    }
    if (piVar8[2] == 2) {
      bVar3 = bVar2;
      bVar4 = true;
LAB_0041c6a0:
      if (bVar3) {
        bVar1 = true;
      }
    }
    else {
      bVar4 = bVar3;
      if (piVar8[2] == 3) {
        bVar2 = true;
        goto LAB_0041c6a0;
      }
    }
    bVar3 = bVar4;
    if ((ppiStack_38 != (int **)0x0) && (_Memory = (int **)*ppiStack_38, _Memory != ppiStack_38)) {
      *_Memory[1] = (int)*_Memory;
      *(int **)((int)*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  } while (local_34 != 0);
  if (!bVar1) {
    if (bVar3) {
      dVar11 = this->mbr_0x88;
      iVar10 = *(int *)(iVar10 + 0x1dc);
      iVar9 = 0;
    }
    else {
      if (!bVar2) goto LAB_0041c71f;
      dVar11 = this->mbr_0x88;
      iVar10 = *(int *)(iVar10 + 0x1dc);
      iVar9 = 1;
    }
    meth_0x417cf0(this,iVar9,iVar10,dVar11);
  }
LAB_0041c71f:
  local_c = (VFX_Parameter__vftable_673a20 *)0xffffffff;
  if (ppiStack_38 == (int **)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *ppiStack_38;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&local_3c,&piStack_40,piVar8,(int *)ppiStack_38);
                    /* WARNING: Subroutine does not return */
  _free(ppiStack_38);
}



void __thiscall cls_0x41a2b0::meth_0x41c790(cls_0x41a2b0 *this,int param_1)

{
  cls_0x434f70 *this_00;
  GameInventory *this_01;
  int iVar1;
  GameClient *this_02;
  cls_0x616328 *pcVar2;
  int iVar3;
  cls_0x616328 *pcVar4;
  dword in_stack_ffffff98;
  void *in_stack_ffffff9c;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  dword dVar7;
  dword dVar8;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_01 = (GameInventory *)meth_0x416df0(this);
  if (this_01 == (GameInventory *)0x0) {
    ExceptionList = local_c;
    return;
  }
  pcVar4 = (cls_0x616328 *)0x0;
  if (param_1 == 0) {
    dVar7 = 2;
LAB_0041c7d0:
    pcVar4 = (cls_0x616328 *)GameInventory::meth_0x4693d0(this_01,dVar7);
  }
  else if (param_1 == 1) {
    dVar7 = 3;
    goto LAB_0041c7d0;
  }
  iVar1 = FUN_006165e0(pcVar4,0,&GameItem::RTTI_Type_Descriptor,&GameWeapon::RTTI_Type_Descriptor,0)
  ;
  this_02 = (GameClient *)
            FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x2c),0,&Client::RTTI_Type_Descriptor,
                         &GameClient::RTTI_Type_Descriptor,0);
  dVar8 = 0;
  pTVar6 = &GameCreature::RTTI_Type_Descriptor;
  pTVar5 = &Entity::RTTI_Type_Descriptor;
  dVar7 = 0;
  pcVar2 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x88);
  iVar3 = FUN_006165e0(pcVar2,dVar7,pTVar5,pTVar6,dVar8);
  if (iVar1 == 0) {
    if (pcVar4 != (cls_0x616328 *)0x0) {
      dVar7 = 0x10;
      goto LAB_0041c8ef;
    }
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    if (*(int *)(iVar3 + 0x6f4) == 0) {
      ExceptionList = local_c;
      return;
    }
  }
  else if (*(int *)(iVar1 + 0x408) == 0) {
    if (this->mbr_0x88 == 0) {
      ExceptionList = local_c;
      return;
    }
    this_00 = *(cls_0x434f70 **)
               (*(int *)&(this_02->Client).client.base.critical_section.field_0x9c + 0xc);
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xffffffc0,"");
    local_4 = 0;
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xffffff98,"Reload!");
    local_4 = 0xffffffff;
    cls_0x434f70::meth_0x434b70(this_00,in_stack_ffffff98,in_stack_ffffff9c);
    GameClient::meth_0x460100
              (this_02,this->mbr_0x88,
               *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 0x1e0 + iVar1),0);
    meth_0x41c040(this,param_1,(int *)0x1);
    ExceptionList = local_c;
    return;
  }
  dVar7 = 0xf;
LAB_0041c8ef:
  AreaMapIcon::meth_0x436ad0
            (*(AreaMapIcon **)&(this_02->Client).client.base.critical_section.field_0xa0,dVar7);
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x41a2b0::meth_0x41c910(cls_0x41a2b0 *this,int param_1)

{
  cls_0x616328 *pcVar1;
  GameActionEquip *this_00;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  char cVar5;
  int iVar6;
  
  this->mbr_0x88 = param_1;
  meth_0x416b80(this);
  iVar6 = 0;
  pTVar4 = &GameEntity::RTTI_Type_Descriptor;
  pTVar3 = &Entity::RTTI_Type_Descriptor;
  iVar2 = 0;
  pcVar1 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x88);
  this_00 = (GameActionEquip *)FUN_006165e0(pcVar1,iVar2,pTVar3,pTVar4,iVar6);
  if (this_00 == (GameActionEquip *)0x0) goto LAB_0041c97e;
  iVar2 = GameActionEquip::Get_mbr_0x98(this_00);
  if (iVar2 == 2) {
    cVar5 = '\x01';
LAB_0041c96e:
    meth_0x416eb0(this,0,cVar5);
    cVar5 = '\0';
  }
  else {
    cVar5 = '\0';
    if (iVar2 != 3) goto LAB_0041c96e;
    meth_0x416eb0(this,0,'\0');
    cVar5 = '\x01';
  }
  meth_0x416eb0(this,1,cVar5);
LAB_0041c97e:
  if (this->mbr_0x88 != 0) {
    meth_0x417370(this,0,this->mbr_0x88);
    meth_0x417a50(this,0);
  }
  meth_0x416cd0(this,'\x01');
  meth_0x416d80(this);
  meth_0x418820(this,'\x01');
  meth_0x416fb0(this);
  meth_0x41c4c0(this);
  return;
}



void __thiscall cls_0x41a2b0::meth_0x41c9d0(cls_0x41a2b0 *this,int param_1)

{
  char cVar1;
  
  if (param_1 != this->mbr_0x88) {
    cVar1 = GameActionOperateContainer::Get_mbr_0x20
                      ((GameActionOperateContainer *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)));
    if (cVar1 == '\0') {
      meth_0x41c910(this,param_1);
    }
  }
  return;
}


