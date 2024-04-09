#include "../include/VisualEffect.h"

VisualEffect * __thiscall VisualEffect::~VisualEffect(VisualEffect *this)

{
  undefined *this_00;
  VisualEffect *pVVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ab68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->DynamicObject).vftptr_0x0 =
       (DynamicObject__vftable_6979fc *)&VisualEffect__vftable_6a2a10_006a2a10;
  puVar2 = *(undefined4 **)&(this->DynamicObject).field_0x164;
  local_4 = 0;
  if ((puVar2 != (undefined4 *)0x0) && ((this->DynamicObject).field_0x168 != '\0')) {
    this_00 = FUN_004e1de0();
    FUN_004e20f0(this_00,puVar2);
  }
  local_4 = 0xffffffff;
  pVVar1 = (VisualEffect *)DynamicObject::meth_0x5682c0(&this->DynamicObject);
  ExceptionList = pvStack_c;
  return pVVar1;
}



void __thiscall VisualEffect::meth_0x59f8d0(VisualEffect *this)

{
  (this->DynamicObject).field_0x1c6 = 0;
  (this->DynamicObject).field_0x1c7 = 0;
  return;
}



int __thiscall VisualEffect::meth_0x59f8e0(VisualEffect *this)

{
  GameActionEquip *this_00;
  int iVar1;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)&(this->DynamicObject).field_0x15c != 0) {
    iVar1 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
    this_00 = extraout_ECX;
    while ((iVar1 != 0 && (iVar2 == 0))) {
      iVar2 = *(int *)(iVar1 + 0x1ec);
      iVar1 = GameActionEquip::meth_0x54be10(this_00);
      this_00 = extraout_ECX_00;
    }
    return iVar2;
  }
  return *(int *)&(this->DynamicObject).field_0x160;
}



int * __thiscall VisualEffect::virt_meth_0x59f930(VisualEffect *this,byte param_1)

{
  ~VisualEffect(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall VisualEffect::meth_0x59f950(VisualEffect *this)

{
  void *this_00;
  int iVar1;
  Map *this_01;
  int *piVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  this_00 = *(void **)&(this->DynamicObject).field_0x164;
  if (this_00 != (void *)0x0) {
    FUN_0048da40(this_00,&local_30,&local_24);
    (this->DynamicObject).mbr_0x10 = (dword)local_30;
    local_18 = (local_24 - local_30) * 0.5 + local_30;
    (this->DynamicObject).mbr_0x14 = (dword)local_2c;
    (this->DynamicObject).mbr_0x18 = (dword)local_28;
    (this->DynamicObject).mbr_0x1c = (dword)local_24;
    local_14 = (local_20 - local_2c) * 0.5 + local_2c;
    (this->DynamicObject).mbr_0x20 = (dword)local_20;
    (this->DynamicObject).mbr_0x24 = (dword)local_1c;
    local_10 = (local_1c - local_28) * 0.5 + local_28;
    local_4 = local_10;
    Entity::meth_0x5680d0((Entity *)this,(int *)&local_18);
    iVar1 = meth_0x59f8e0(this);
    if (iVar1 != 0) {
      piVar2 = DAT_0070bd98;
      if (DAT_0070bd98 != (int *)0x0) {
        piVar2 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
      }
      this_01 = (Map *)(**(code **)(*piVar2 + 0x54))(iVar1);
      if (this_01 != (Map *)0x0) {
        piVar2 = Map::GetOctree(this_01);
        Entity::meth_0x568140((Entity *)this,piVar2);
        (this->DynamicObject).field_0x1c5 = 1;
      }
    }
  }
  return;
}



void __thiscall VisualEffect::meth_0x59fa40(VisualEffect *this)

{
  cls_0x57bc90 *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  GameActionEquip *this_00;
  int unaff_EBX;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined uStack_c;
  undefined4 uStack_8;
  
  if ((this->DynamicObject).field_0x1c6 == '\0') {
    (this->DynamicObject).field_0x1c6 = 1;
    (this->DynamicObject).field_0x1c7 = 1;
    bVar8 = 0;
    cVar2 = (**(code **)(*DAT_00707ce4 + 0x13c))();
    if ((cVar2 != '\0') &&
       (piVar3 = (*(this->DynamicObject).vftptr_0x0[10].virt_meth_0x568400_0)
                           (&this->DynamicObject,bVar8), (char)piVar3 == '\0')) {
      if (*(int *)&(this->DynamicObject).field_0x15c == 0) {
        iVar4 = *(int *)&(this->DynamicObject).field_0x160;
        if (iVar4 != 0) {
          piVar3 = (int *)FUN_00401130();
          iVar4 = (**(code **)(*piVar3 + 0x54))(iVar4);
          if ((iVar4 != 0) &&
             (pcVar1 = *(cls_0x57bc90 **)(iVar4 + 4), pcVar1 != (cls_0x57bc90 *)0x0)) {
            (this->DynamicObject).field_0x1c7 = 0;
            Entity::meth_0x4056b0((Entity *)this,&uStack_10,&uStack_1c);
            cls_0x57bc90::meth_0x57bdc0
                      (pcVar1,uStack_10,uStack_c,uStack_8,&iStack_28,&stack0xffffffd4);
            cls_0x57bc90::meth_0x57bdc0(pcVar1,uStack_1c,uStack_18,uStack_14,&iStack_24,&iStack_20);
            iVar4 = iStack_24;
            iVar6 = iStack_28;
            if (iStack_20 <= unaff_EBX) {
              do {
                iVar7 = iVar6;
                if (iVar6 <= iVar4) {
                  do {
                    uVar5 = cls_0x57bc90::meth_0x57bd40(pcVar1,iVar6,iStack_20);
                    if ((char)uVar5 != '\0') goto LAB_0059fc5f;
                    iVar6 = iVar6 + 1;
                    iVar4 = iStack_24;
                    iVar7 = iStack_28;
                  } while (iVar6 <= iStack_24);
                }
                iStack_20 = iStack_20 + 1;
                iVar6 = iVar7;
                if (unaff_EBX < iStack_20) {
                  return;
                }
              } while( true );
            }
          }
        }
      }
      else {
        iVar4 = GameActionEquip::meth_0x54be10(this_00);
        if (iVar4 != 0) {
          if (*(char *)(iVar4 + 0x3a0) == '\0') {
            (this->DynamicObject).field_0x1c7 = 0;
            return;
          }
          iVar4 = meth_0x59f8e0(this);
          if (iVar4 != 0) {
            piVar3 = (int *)FUN_00401130();
            iVar4 = (**(code **)(*piVar3 + 0x54))(iVar4);
            pcVar1 = *(cls_0x57bc90 **)(iVar4 + 4);
            if (pcVar1 != (cls_0x57bc90 *)0x0) {
              (this->DynamicObject).field_0x1c7 = 0;
              Entity::meth_0x4056b0((Entity *)this,&uStack_1c,&uStack_10);
              cls_0x57bc90::meth_0x57bdc0
                        (pcVar1,uStack_1c,uStack_18,uStack_14,&iStack_28,&iStack_24);
              cls_0x57bc90::meth_0x57bdc0
                        (pcVar1,uStack_10,uStack_c,uStack_8,&stack0xffffffd4,&iStack_20);
              iVar4 = iStack_28;
              iVar6 = iStack_28;
              if (iStack_20 <= iStack_24) {
                while( true ) {
                  while (unaff_EBX < iVar4) {
                    iStack_20 = iStack_20 + 1;
                    iVar4 = iVar6;
                    if (iStack_24 < iStack_20) {
                      return;
                    }
                  }
                  uVar5 = cls_0x57bc90::meth_0x57bd40(pcVar1,iVar4,iStack_20);
                  if ((char)uVar5 != '\0') break;
                  iVar4 = iVar4 + 1;
                  iVar6 = iStack_28;
                }
LAB_0059fc5f:
                (this->DynamicObject).field_0x1c7 = 1;
              }
            }
          }
        }
      }
    }
  }
  return;
}



undefined4 __thiscall VisualEffect::meth_0x59fc70(VisualEffect *this)

{
  if (((this->DynamicObject).field_0x1c6 == '\0') &&
     (meth_0x59fa40(this), (this->DynamicObject).field_0x1c6 == '\0')) {
    return 1;
  }
  if ((this->DynamicObject).field_0x1c7 != '\0') {
    return 1;
  }
  return 0;
}



VisualEffect * __thiscall
VisualEffect::VisualEffect
          (VisualEffect *this,undefined4 param_1,int param_2,undefined param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ab68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DynamicObject::DynamicObject(&this->DynamicObject);
  (this->DynamicObject).vftptr_0x0 =
       (DynamicObject__vftable_6979fc *)&VisualEffect__vftable_6a2a10_006a2a10;
  *(undefined4 *)&(this->DynamicObject).field_0x174 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x178 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x17c = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x160 = param_4;
  *(undefined4 *)&(this->DynamicObject).field_0x15c = param_1;
  (this->DynamicObject).field_0x168 = param_3;
  local_4 = 0;
  *(int *)&(this->DynamicObject).field_0x164 = param_2;
  *(undefined4 *)&(this->DynamicObject).field_0x16c = 0;
  (this->DynamicObject).mbr_0x30 = 0;
  (this->DynamicObject).field_0x170 = 1;
  (this->DynamicObject).field_0x180 = 0;
  (this->DynamicObject).field_0x1c4 = 1;
  (this->DynamicObject).field_0x1c5 = 0;
  (this->DynamicObject).field_0x1c6 = 0;
  (this->DynamicObject).field_0x1c7 = 0;
  if (param_2 != 0) {
    uVar1 = cls_0x48d970::meth_0x48d970((cls_0x48d970 *)param_2);
    (this->DynamicObject).mbr_0x30 = (byte)uVar1;
  }
  meth_0x59f950(this);
  ExceptionList = local_c;
  return this;
}



void __thiscall VisualEffect::meth_0x59ff20(VisualEffect *this,void *param_1)

{
  void *this_00;
  undefined4 uVar1;
  cls_0x616328 *pcVar2;
  int iVar3;
  int iVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  int iVar7;
  int local_8;
  
  iVar3 = 0;
  if (((*(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x104) == 0) &&
      (uVar1 = meth_0x59fc70(this), this_00 = param_1, (char)uVar1 != '\0')) &&
     (iVar4 = *(int *)&(this->DynamicObject).field_0x164, iVar4 != 0)) {
    if (*(int *)(iVar4 + 0x34) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(int *)(iVar4 + 0x38) - *(int *)(iVar4 + 0x34) >> 2;
    }
    if (0 < local_8) {
      do {
        iVar7 = 0;
        pTVar6 = &VFX_Light::RTTI_Type_Descriptor;
        pTVar5 = &VFX_EffectInstance::RTTI_Type_Descriptor;
        iVar4 = 0;
        pcVar2 = (cls_0x616328 *)
                 cls_0x48ddc0::meth_0x48ddc0
                           (*(cls_0x48ddc0 **)&(this->DynamicObject).field_0x164,iVar3);
        param_1 = (void *)FUN_006165e0(pcVar2,iVar4,pTVar5,pTVar6,iVar7);
        if (param_1 != (void *)0x0) {
          iVar4 = *(int *)((int)this_00 + 4);
          iVar7 = FUN_00433760(iVar4,*(undefined4 *)(iVar4 + 4),&param_1);
          GUI::Interface::meth_0x546560((Interface *)this_00,1);
          *(int *)(iVar4 + 4) = iVar7;
          **(int **)(iVar7 + 4) = iVar7;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_8);
    }
  }
  return;
}


#include "../include/VisualEffect.h"
