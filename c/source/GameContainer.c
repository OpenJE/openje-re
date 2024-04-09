#include "../include/GameContainer.h"

/* WARNING: Type propagation algorithm not settling */

GameContainer * __thiscall GameContainer::GameContainer(GameContainer *this,int param_1)

{
  dword dVar1;
  int iVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062b75d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 != 0) {
    ExceptionList = &pvStack_c;
    (this->GameUsableObject).GameEntity.mbr_0x4 = (dword)&DAT_0064d09c;
    Entity::Entity((Entity *)
                   &(this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.
                    Gfx_NodeAttribute.mbr_0x1c);
    uStack_4 = 0;
  }
  GameUsableObject::GameUsableObject(&this->GameUsableObject,0);
  dVar1 = (this->GameUsableObject).GameEntity.mbr_0x4;
  (this->GameUsableObject).GameEntity.vftptr_0x0 =
       (GameEntity__vftable_666130 *)&GameContainer__vftable_64d098_0064d098;
  *(undefined ***)((int)&(this->GameUsableObject).GameEntity.mbr_0x4 + *(int *)(dVar1 + 4)) =
       &PTR_virt_meth_0x408d10_0064cfac;
  iVar2 = *(int *)((this->GameUsableObject).GameEntity.mbr_0x4 + 4);
  *(int *)((int)&(this->GameUsableObject).GameEntity.vftptr_0x0 + iVar2) = iVar2 + -0xfc;
  (this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x34 = 0;
  (this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x38 = 0xf;
  *(undefined *)&(this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x24 = 0;
  *(undefined4 *)
   &(this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.Gfx_NodeAttribute.
    field_0x14 = 0xf;
  *(undefined4 *)
   &(this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.Gfx_NodeAttribute.
    field_0x10 = 0;
  *(undefined *)
   &(this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.Gfx_NodeAttribute.
    vftptr_0x0 = 0;
  *(undefined4 *)
   (&(this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.field_0x7c +
   *(int *)((this->GameUsableObject).GameEntity.mbr_0x4 + 4)) = 4;
  dVar1 = (this->GameUsableObject).GameEntity.mbr_0x4;
  *(undefined *)&(this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x18 = 0;
  *(undefined *)((int)&(this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x18 + 1) = 0;
  (this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x1c = 0;
  *(undefined *)
   ((int)&(this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.mbr_0x98 +
   *(int *)(dVar1 + 4) + 1U) = 0;
  ExceptionList = pvStack_c;
  return this;
}


#include "../include/GameContainer.h"
