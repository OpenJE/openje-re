#include "../include/GameCSMenuInterface.h"

GameCSMenuInterface * __thiscall
GameCSMenuInterface::GameCSMenuInterface
          (GameCSMenuInterface *this,_String_base *param_1,int param_2)

{
  undefined *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d919;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    *(undefined **)&this->field_0xd50 = &DAT_006547c0;
    *(undefined **)&this->field_0x4 = &DAT_006547b8;
    CEngineInterface::CEngineInterface((CEngineInterface *)&this->field_0x1ae4,param_1);
    local_4 = 0;
  }
  this_00 = &this->field_0xd50;
  cls_0x4395a0::cls_0x4395a0((cls_0x4395a0 *)this_00,param_1,0);
  local_4 = 1;
  CSMenuInterface::CSMenuInterface((CSMenuInterface *)this,param_1,0);
  *(GameCSMenuInterface__vftable_6547a8 **)this = &GameCSMenuInterface__vftable_6547a8_006547a8;
  *(undefined ***)(&this->field_0xd50 + *(int *)(*(int *)this_00 + 4)) =
       &PTR_virt_meth_0x435800_0065478c;
  *(int *)(&this->field_0xd4c + *(int *)(*(int *)this_00 + 4)) =
       *(int *)(*(int *)this_00 + 4) + -0xd94;
  local_4 = CONCAT31(local_4._1_3_,2);
  GameCSSkillMenuInterface::GameCSSkillMenuInterface(&this->GameCSSkillMenuInterface,param_1,1);
  ExceptionList = local_c;
  return this;
}



void __thiscall
GameCSMenuInterface::virt_meth_0x4359f0(GameCSMenuInterface *this,uint param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  cls_0x616328 *pcVar4;
  uint *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  GameActionEquip *this_00;
  int *piVar8;
  GameCSSkillMenuInterface *unaff_EBP;
  GameCSMenuInterface *pGVar9;
  uint unaff_retaddr;
  int iVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  int iVar13;
  undefined local_68 [4];
  uint local_64;
  undefined4 local_60;
  _String_base local_5c [4];
  void *local_58;
  ScrollBar__vftable_670064 *local_48;
  uint local_44;
  undefined uStack_40;
  dword dStack_30;
  dword dStack_2c;
  VFX_Parameter__vftable_673a20 *pVStack_28;
  dword dStack_24;
  dword dStack_20;
  undefined4 uStack_1c;
  uint local_10;
  undefined4 local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = (cls_0x467240 *)0xffffffff;
  puStack_8 = &LAB_0062d948;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar3 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  iVar13 = 0;
  pTVar12 = &GameEntity::RTTI_Type_Descriptor;
  pTVar11 = &Entity::RTTI_Type_Descriptor;
  iVar10 = 0;
  pcVar4 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_00);
  iVar10 = FUN_006165e0(pcVar4,iVar10,pTVar11,pTVar12,iVar13);
  local_44 = 0xf;
  local_48 = (ScrollBar__vftable_670064 *)0x0;
  local_58 = (void *)((uint)local_58 & 0xffffff00);
  local_4 = (cls_0x467240 *)0x0;
  if ((iVar3 != 0) && (iVar10 != 0)) {
    local_64 = FUN_004910b0();
    local_60 = 0;
    local_4 = (cls_0x467240 *)CONCAT31(local_4._1_3_,1);
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar10 + 4) + 4) + 4 + iVar10) + 0x34))(iVar3,local_68);
    if (this == (GameCSMenuInterface *)0x0) {
      pGVar9 = (GameCSMenuInterface *)0x0;
    }
    else {
      pGVar9 = *(GameCSMenuInterface **)this;
    }
    for (; pGVar9 != this; pGVar9 = *(GameCSMenuInterface **)pGVar9) {
      local_48 = *(ScrollBar__vftable_670064 **)&pGVar9->field_0x8;
      dStack_2c = 0xf;
      dStack_30 = 0;
      uStack_40 = 0;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&local_44,(_String_base *)&pGVar9->field_0xc,0,0xffffffff);
      dStack_24 = *(dword *)&pGVar9->field_0x2c;
      pVStack_28 = *(VFX_Parameter__vftable_673a20 **)&pGVar9->field_0x28;
      dStack_20 = *(dword *)&pGVar9->field_0x30;
      uStack_1c = CONCAT31(uStack_1c._1_3_,pGVar9->field_0x34);
      local_c = (void *)CONCAT31(local_c._1_3_,2);
      if ((local_48 != (ScrollBar__vftable_670064 *)0x3) ||
         (cVar2 = cls_0x467240::meth_0x467240(local_4), cVar2 != '\0')) {
        if (pVStack_28 == (VFX_Parameter__vftable_673a20 *)0x0) {
          FUN_0056c280(*(int *)(&DAT_006f2d68 + (int)local_48 * 4),(_String_base *)&local_64);
          puVar5 = &local_64;
        }
        else {
          if (0 < (int)pVStack_28) {
            FUN_0056c280((int)pVStack_28,(_String_base *)&local_64);
          }
          puVar5 = &local_44;
        }
        GameCSSkillMenuInterface::meth_0x569080(unaff_EBP,(int)puVar5,param_1,param_2,(int)local_48)
        ;
      }
      local_c = (void *)CONCAT31(local_c._1_3_,1);
      GUI::ScrollBar::meth_0x52afb0((ScrollBar *)&local_48);
    }
    local_c = (void *)((uint)local_c & 0xffffff00);
    if (this == (GameCSMenuInterface *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)this;
    }
    FUN_00435950(&stack0xffffff90,(int **)&local_4,piVar8,(int *)this);
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  uVar6 = FUN_0056c280(DAT_006f2d78,local_5c);
  if ((char)uVar6 == '\0') {
    pcVar1 = "<bad cancel string>";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_5c,"<bad cancel string>",(uint)(pcVar7 + -0x6547c8));
  }
  GameCSSkillMenuInterface::meth_0x569080((GameCSSkillMenuInterface *)this,(int)local_5c,0,0,0);
  if (local_44 < 0x10) {
    ExceptionList = local_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_58);
}


#include "../include/GameCSMenuInterface.h"
