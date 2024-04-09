#include "../include/GameUsableObject.h"

/* WARNING: Type propagation algorithm not settling */

GameUsableObject * __thiscall GameUsableObject::GameUsableObject(GameUsableObject *this,int param_1)

{
  int iVar1;
  Entity *pEVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062bd6d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 != 0) {
    ExceptionList = &pvStack_c;
    (this->GameEntity).mbr_0x4 = (dword)&DAT_0064f3fc;
    Entity::Entity((Entity *)&(this->GameEntity).Entity.DynamicObject.mbr_0x1c);
    local_4 = 0;
  }
  GameEntity::GameEntity(&this->GameEntity,0);
  (this->GameEntity).vftptr_0x0 =
       (GameEntity__vftable_666130 *)&GameUsableObject__vftable_64f3f8_0064f3f8;
  *(undefined ***)((int)&(this->GameEntity).mbr_0x4 + *(int *)((this->GameEntity).mbr_0x4 + 4)) =
       &PTR_virt_meth_0x412610_0064f30c;
  iVar1 = *(int *)((this->GameEntity).mbr_0x4 + 4);
  *(int *)((int)&(this->GameEntity).vftptr_0x0 + iVar1) = iVar1 + -0xbc;
  *(undefined4 *)
   (&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.field_0x7c +
   *(int *)((this->GameEntity).mbr_0x4 + 4)) = 2;
  *(undefined4 *)&(this->GameEntity).field_0xa0 = 0;
  pEVar2 = &(this->GameEntity).Entity;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pEVar2->DynamicObject).vftptr_0x0 = (DynamicObject__vftable_6979fc *)0x0;
    pEVar2 = (Entity *)&(pEVar2->DynamicObject).mbr_0x4;
  }
  *(undefined *)
   ((int)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x98 +
   *(int *)((this->GameEntity).mbr_0x4 + 4) + 1) = 0;
  ExceptionList = pvStack_c;
  return this;
}


#include "../include/GameUsableObject.h"
