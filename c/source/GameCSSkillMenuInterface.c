#include "../include/GameCSSkillMenuInterface.h"

GameCSSkillMenuInterface * __thiscall
GameCSSkillMenuInterface::GameCSSkillMenuInterface
          (GameCSSkillMenuInterface *this,_String_base *param_1,int param_2)

{
  undefined *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d98b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    *(Alignment **)&(this->CSMenuInterface).field_0xd50 = &DAT_006561e4;
    (this->CSMenuInterface).mbr_0x4 = (dword)&DAT_00654c1c;
    CEngineInterface::CEngineInterface
              ((CEngineInterface *)&(this->CSMenuInterface).CEngineInterface.Interface.mbr_0x4,
               param_1);
    local_4 = 0;
  }
  this_00 = &(this->CSMenuInterface).field_0xd50;
  cls_0x4395a0::cls_0x4395a0((cls_0x4395a0 *)this_00,param_1,0);
  local_4 = 1;
  CSMenuInterface::CSMenuInterface(&this->CSMenuInterface,param_1,0);
  (this->CSMenuInterface).vftptr_0x0 =
       (CSMenuInterface__vftable_698020 *)&GameCSSkillMenuInterface__vftable_654c18_00654c18;
  *(GameCSSkillMenuInterface__vftable_654bfc **)
   (&(this->CSMenuInterface).field_0xd50 + *(int *)(*(int *)this_00 + 4)) =
       &GameCSSkillMenuInterface__vftable_654bfc_00654bfc;
  *(int *)((int)&(this->CSMenuInterface).mbr_0xd4c + *(int *)(*(int *)this_00 + 4)) =
       *(int *)(*(int *)this_00 + 4) + -8;
  ExceptionList = local_c;
  return this;
}



void __thiscall
GameCSSkillMenuInterface::virt_meth_0x435fa0
          (GameCSSkillMenuInterface *this,uint param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  cls_0x616328 *pcVar3;
  void *this_00;
  undefined4 uVar4;
  char *pcVar5;
  GameActionEquip *this_01;
  int *piVar6;
  int **ppiVar7;
  uint unaff_retaddr;
  _String_base *p_Var8;
  int iVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  int iVar12;
  undefined local_68 [4];
  int **local_64;
  undefined4 local_60;
  _String_base local_5c [4];
  void *local_58;
  dword local_48;
  uint local_44;
  ScrollBar__vftable_670064 *local_40;
  _String_base local_3c [4];
  undefined local_38;
  dword local_28;
  dword local_24;
  VFX_Parameter__vftable_673a20 *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062da18;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar2 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  iVar12 = 0;
  pTVar11 = &GameEntity::RTTI_Type_Descriptor;
  pTVar10 = &Entity::RTTI_Type_Descriptor;
  iVar9 = 0;
  pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_01);
  this_00 = (void *)FUN_006165e0(pcVar3,iVar9,pTVar10,pTVar11,iVar12);
  local_44 = 0xf;
  local_48 = 0;
  local_58 = (void *)((uint)local_58 & 0xffffff00);
  local_4 = 0;
  if ((iVar2 != 0) && (this_00 != (void *)0x0)) {
    local_64 = (int **)FUN_004910b0();
    local_60 = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004687c0(this_00,iVar2,local_68);
    if (local_64 == (int **)0x0) {
      ppiVar7 = (int **)0x0;
    }
    else {
      ppiVar7 = (int **)*local_64;
    }
    if (ppiVar7 != local_64) {
      do {
        local_40 = (ScrollBar__vftable_670064 *)ppiVar7[2];
        local_24 = 0xf;
        local_28 = 0;
        local_38 = 0;
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)local_3c,(_String_base *)(ppiVar7 + 3),0,0xffffffff);
        local_20 = (VFX_Parameter__vftable_673a20 *)ppiVar7[10];
        local_1c = ppiVar7[0xb];
        local_18 = ppiVar7[0xc];
        local_14 = CONCAT31(local_14._1_3_,*(undefined *)(ppiVar7 + 0xd));
        local_4._0_1_ = 2;
        if ((int)local_20 < 1) {
          p_Var8 = local_3c;
        }
        else {
          FUN_0056c280((int)local_20,local_5c);
          p_Var8 = local_5c;
        }
        meth_0x569080(this,(int)p_Var8,param_1,(int)param_2,(int)local_40);
        local_4 = CONCAT31(local_4._1_3_,1);
        GUI::ScrollBar::meth_0x52afb0((ScrollBar *)&local_40);
        ppiVar7 = (int **)*ppiVar7;
      } while (ppiVar7 != local_64);
    }
    local_4 = local_4 & 0xffffff00;
    if (local_64 == (int **)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = *local_64;
    }
    FUN_00435950(local_68,&param_2,piVar6,(int *)local_64);
                    /* WARNING: Subroutine does not return */
    _free(local_64);
  }
  uVar4 = FUN_0056c280(0x9e,local_5c);
  if ((char)uVar4 == '\0') {
    pcVar1 = "<bad cancel string>";
    do {
      pcVar5 = pcVar1;
      pcVar1 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_5c,"<bad cancel string>",(uint)(pcVar5 + -0x6547c8));
  }
  meth_0x569080(this,(int)local_5c,0,0,0);
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



int * __thiscall
GameCSSkillMenuInterface::meth_0x569080
          (GameCSSkillMenuInterface *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined uVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  CSMenuLabel *this_00;
  undefined4 *unaff_EDI;
  dword in_stack_00000014;
  dword in_stack_00000018;
  char cStack0000001c;
  CSMenuLabel *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063898b;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)&(this->CSMenuInterface).field_0xd30;
  ExceptionList = &pvStack_c;
  local_10 = (CSMenuLabel *)this;
  local_10 = (CSMenuLabel *)FUN_004a7680(0xe7c);
  this_00 = (CSMenuLabel *)0x0;
  local_4 = 0;
  if (local_10 != (CSMenuLabel *)0x0) {
    this_00 = CSMenuLabel::CSMenuLabel(local_10);
  }
  local_4 = 0xffffffff;
  local_10 = this_00;
  (*(this_00->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
            ((Base *)this_00,(FILE *)param_1);
  (*(this_00->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
            ((Base *)this_00,(undefined4 *)0xff808080,unaff_EDI);
  this_00->mbr_0xe70 = param_3;
  this_00->mbr_0xe74 = param_4;
  this_00->mbr_0xe64 = in_stack_00000014;
  this_00->mbr_0xe68 = in_stack_00000018;
  this_00->mbr_0xe6c = _cStack0000001c;
  (**(code **)(*(int *)&(this->CSMenuInterface).field_0x8 + 0xa4))(this_00);
  (*((this_00->Label).Window.Base.vftptr_0x0)->virt_meth_0x4b2790_16)((Base *)this_00,400,0x10);
  (*(this_00->Label).Window.Base.vftptr_0x0[1].virt_meth_0x4b2790_16)
            ((Base *)this_00,8,iVar1 * 0x10 + 6);
  if (cStack0000001c != '\0') {
    (*(this_00->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2850_28)((Base *)this_00,1);
  }
  iVar1 = *(int *)&(this->CSMenuInterface).field_0xd2c;
  iVar3 = FUN_00433760(iVar1,*(undefined4 *)(iVar1 + 4),&local_10);
  cls_0x568b70::meth_0x568b70((cls_0x568b70 *)&(this->CSMenuInterface).field_0xd28,1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar2 = (*(this_00->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2880_40)((Base *)this_00);
  if (*(int *)&(this->CSMenuInterface).field_0xd24 < CONCAT31(extraout_var,uVar2)) {
    uVar2 = (*(this_00->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2880_40)((Base *)this_00);
    *(uint *)&(this->CSMenuInterface).field_0xd24 = CONCAT31(extraout_var_00,uVar2);
  }
  ExceptionList = pvStack_c;
  return (int *)this_00;
}


#include "../include/GameCSSkillMenuInterface.h"
#include "../include/GameCSSkillMenuInterface.h"
