#include "../include/GameDoor.h"

/* WARNING: Type propagation algorithm not settling */

GameDoor * __thiscall GameDoor::GameDoor(GameDoor *this,int param_1)

{
  dword dVar1;
  int iVar2;
  Gfx_NodeAttribute__vftable_66b488 *pGVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062bb49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    (this->GameUsableObject).GameEntity.mbr_0x4 = (dword)&DAT_0064dedc;
    Entity::Entity((Entity *)
                   &(this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.
                    Gfx_NodeAttribute.mbr_0xc);
    local_4 = 0;
  }
  GameUsableObject::GameUsableObject(&this->GameUsableObject,0);
  dVar1 = (this->GameUsableObject).GameEntity.mbr_0x4;
  (this->GameUsableObject).GameEntity.vftptr_0x0 =
       (GameEntity__vftable_666130 *)&GameDoor__vftable_64ded8_0064ded8;
  *(undefined ***)((int)&(this->GameUsableObject).GameEntity.mbr_0x4 + *(int *)(dVar1 + 4)) =
       &PTR_virt_meth_0x40e8e0_0064ddec;
  iVar2 = *(int *)((this->GameUsableObject).GameEntity.mbr_0x4 + 4);
  *(int *)((int)&(this->GameUsableObject).GameEntity.vftptr_0x0 + iVar2) = iVar2 + -0xec;
  (this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x38 = 0xf;
  (this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x34 = 0;
  *(undefined *)&(this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x24 = 0;
  local_4 = 2;
  pGVar3 = (Gfx_NodeAttribute__vftable_66b488 *)FUN_0056e0f0();
  (this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.Gfx_NodeAttribute.
  vftptr_0x0 = pGVar3;
  *(undefined4 *)
   &(this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.Gfx_NodeAttribute.
    field_0x4 = 0;
  *(undefined4 *)
   (&(this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.field_0x7c +
   *(int *)((this->GameUsableObject).GameEntity.mbr_0x4 + 4)) = 3;
  dVar1 = (this->GameUsableObject).GameEntity.mbr_0x4;
  *(undefined *)&(this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x18 = 0;
  *(undefined *)((int)&(this->GameUsableObject).GameEntity.Entity.DynamicObject.mbr_0x18 + 1) = 0;
  *(undefined *)
   ((int)&(this->GameUsableObject).GameEntity.Entity.DynamicObject.Gfx_LineSystem.mbr_0x98 +
   *(int *)(dVar1 + 4) + 1U) = 0;
  ExceptionList = local_c;
  return this;
}


#include "../include/GameDoor.h"
