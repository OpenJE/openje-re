#include "../include/GameItem.h"

/* WARNING: Type propagation algorithm not settling */

GameItem * __thiscall GameItem::GameItem(GameItem *this,int param_1)

{
  int iVar1;
  dword dVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062bc3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 != 0) {
    ExceptionList = &pvStack_c;
    (this->GameEntity).mbr_0x4 = (dword)&DAT_0064e3fc;
    Entity::Entity((Entity *)&(this->GameEntity).Entity.DynamicObject.field_0x310);
    local_4 = 0;
  }
  GameEntity::GameEntity(&this->GameEntity,0);
  (this->GameEntity).vftptr_0x0 = (GameEntity__vftable_666130 *)&GameItem__vftable_64e3f8_0064e3f8;
  *(undefined ***)((int)&(this->GameEntity).mbr_0x4 + *(int *)((this->GameEntity).mbr_0x4 + 4)) =
       &PTR_virt_meth_0x410420_0064e30c;
  iVar1 = *(int *)((this->GameEntity).mbr_0x4 + 4);
  local_4 = 1;
  *(int *)((int)&(this->GameEntity).vftptr_0x0 + iVar1) = iVar1 + -0x3b0;
  dVar2 = FUN_0056e0b0();
  (this->GameEntity).Entity.DynamicObject.mbr_0x8 = dVar2;
  (this->GameEntity).Entity.DynamicObject.mbr_0xc = 0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x24 = 0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x28 = 0xf;
  *(undefined *)&(this->GameEntity).Entity.DynamicObject.mbr_0x14 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.Gfx_NodeAttribute.field_0x4
       = 0xf;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.Gfx_NodeAttribute.vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)0x0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x30 = 0;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x28 = 0xf;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x24 = 0;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.Gfx_NodeAttribute.field_0x14 = 0;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x44 = 0xf;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x40 = 0;
  *(undefined *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x30 = 0;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x64 = 0xf;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x60 = 0;
  *(undefined *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.cls_0x4abc60.mbr_0x4 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.field_0x80 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.field_0x7c = 0;
  *(undefined *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x6c = 0;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0xa0 = 0xf;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x9c = 0;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.field_0x8c = 0;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0xbc = 0xf;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0xb8 = 0;
  *(undefined *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0xa8 = 0;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0xdc = 0xf;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0xd8 = 0;
  *(undefined *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0xc8 = 0;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0xf8 = 0xf;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0xf4 = 0;
  *(undefined *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0xe4 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x118 = 0xf;
  (this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x114 = 0;
  *(undefined *)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x104 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x174 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x170 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x160 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x194 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x190 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x180 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1b0 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1ac = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x19c = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1cc = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1c8 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x1b8 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1e8 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1e4 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x1d4 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x204 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x200 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x1f0 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x220 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x21c = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x20c = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x240 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x23c = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x22c = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x25c = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x258 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x248 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x278 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x274 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x264 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x294 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x290 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x280 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x2b0 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x2ac = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x29c = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x2cc = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x2c8 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x2b8 = 0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x2ec = 0xf;
  (this->GameEntity).Entity.DynamicObject.mbr_0x2e8 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x2d8 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x308 = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x304 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x2f4 = 0;
  *(undefined4 *)
   (&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.field_0x7c +
   *(int *)((this->GameEntity).mbr_0x4 + 4)) = 5;
  *(undefined4 *)&(this->GameEntity).field_0xa0 = 0;
  ExceptionList = pvStack_c;
  return this;
}


#include "../include/GameItem.h"
