#include "../include/Entity.h"

undefined4 __thiscall Entity::virt_meth_0x404bb0(Entity *this)

{
  return 0;
}



void __thiscall Entity::meth_0x4056b0(Entity *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (this->DynamicObject).mbr_0x10;
  param_1[1] = (this->DynamicObject).mbr_0x14;
  param_1[2] = (this->DynamicObject).mbr_0x18;
  *param_2 = (this->DynamicObject).mbr_0x1c;
  param_2[1] = (this->DynamicObject).mbr_0x20;
  param_2[2] = (this->DynamicObject).mbr_0x24;
  return;
}



void __thiscall Entity::meth_0x4080d0(Entity *this)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this[-1].DynamicObject.mbr_0x4;
  this[-1].DynamicObject.vftptr_0x0 =
       (DynamicObject__vftable_6979fc *)&GameAmmo__vftable_64c5a8_0064c5a8;
  *(undefined ***)(*(int *)(dVar1 + 4) + -0x3d4 + (int)this) = &PTR_virt_meth_0x4082a0_0064c4bc;
  iVar2 = *(int *)(this[-1].DynamicObject.mbr_0x4 + 4);
  *(int *)((int)&this[-1].DynamicObject.vftptr_0x0 + iVar2) = iVar2 + -0x3d4;
  meth_0x410560((Entity *)&this[-1].DynamicObject.field_0x3b4);
  return;
}



void __thiscall Entity::meth_0x408640(Entity *this)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this[-1].DynamicObject.mbr_0xc;
  this[-1].DynamicObject.mbr_0x8 = (dword)&GameArmor__vftable_64caf0_0064caf0;
  *(undefined ***)(*(int *)(dVar1 + 4) + -0x3cc + (int)this) = &PTR_virt_meth_0x408750_0064ca04;
  iVar2 = *(int *)(this[-1].DynamicObject.mbr_0xc + 4);
  *(int *)(iVar2 + -0x3d0 + (int)this) = iVar2 + -0x3cc;
  meth_0x410560((Entity *)&this[-1].DynamicObject.field_0x3bc);
  return;
}



void __thiscall Entity::meth_0x408e70(Entity *this)

{
  int iVar1;
  
  iVar1 = *(int *)&this[-1].DynamicObject.field_0x2dc;
  *(GameContainer__vftable_64d098 **)&this[-1].DynamicObject.field_0x2d8 =
       &GameContainer__vftable_64d098_0064d098;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0xfc + (int)this) = &PTR_virt_meth_0x408d10_0064cfac;
  iVar1 = *(int *)(*(int *)&this[-1].DynamicObject.field_0x2dc + 4);
  *(int *)(iVar1 + -0x100 + (int)this) = iVar1 + -0xfc;
  if (0xf < this[-1].DynamicObject.mbr_0x3d0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x3bc);
  }
  this[-1].DynamicObject.mbr_0x3d0 = 0xf;
  this[-1].DynamicObject.mbr_0x3cc = 0;
  this[-1].DynamicObject.field_0x3bc = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x3b4) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x3a0);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x3b0 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x3b4 = 0xf;
  this[-1].DynamicObject.field_0x3a0 = 0;
  meth_0x4124f0((Entity *)&this[-1].DynamicObject.field_0x398);
  return;
}



void __thiscall Entity::meth_0x4097a0(Entity *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  DialogueManager::CommandAttackModeSelect
            ((DialogueManager *)&this[-2].DynamicObject.Gfx_LineSystem.Gfx_NodeAttribute.field_0x10)
  ;
  *(undefined4 *)&this[-1].DynamicObject.field_0x334 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x338 = 0;
  this[-1].DynamicObject.mbr_0x33c = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x340 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x344 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x348 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x34c = 0;
  puVar2 = (undefined4 *)&this[-1].DynamicObject.field_0x350;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x384 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x388 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x38c = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x390 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x394 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x398 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x39c = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x3a0 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x3a4 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x3a8 = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x3ac = 0;
  *(undefined4 *)&this[-1].DynamicObject.field_0x3b0 = 0;
  return;
}



void __thiscall Entity::meth_0x40d490(Entity *this)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062ba7e;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)&this[-3].DynamicObject.field_0x388;
  ExceptionList = &pvStack_c;
  *(GameCreature__vftable_64d7c8 **)&this[-3].DynamicObject.field_0x384 =
       &GameCreature__vftable_64d7c8_0064d7c8;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0x800 + (int)this) = &PTR_virt_meth_0x40d300_0064d6dc;
  iVar1 = *(int *)(*(int *)&this[-3].DynamicObject.field_0x388 + 4);
  *(int *)(iVar1 + -0x804 + (int)this) = iVar1 + -0x800;
  ppiVar2 = (int **)this[-1].DynamicObject.mbr_0x3c8;
  local_4 = 5;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this[-1].DynamicObject.mbr_0x3c4,&local_10,piVar3,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free((void *)this[-1].DynamicObject.mbr_0x3c8);
}



void __thiscall Entity::meth_0x40ea50(Entity *this)

{
  dword dVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  Entity *local_4;
  
  dVar1 = this[-1].DynamicObject.mbr_0x2ec;
  this[-1].DynamicObject.mbr_0x2e8 = (dword)&GameDoor__vftable_64ded8_0064ded8;
  *(undefined ***)(*(int *)(dVar1 + 4) + -0xec + (int)this) = &PTR_virt_meth_0x40e8e0_0064ddec;
  iVar2 = *(int *)(this[-1].DynamicObject.mbr_0x2ec + 4);
  *(int *)(iVar2 + -0xf0 + (int)this) = iVar2 + -0xec;
  ppiVar3 = (int **)this[-1].DynamicObject.mbr_0x3cc;
  if (ppiVar3 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar3;
  }
  local_4 = this;
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this[-1].DynamicObject.mbr_0x3c8,(int **)&local_4,piVar4,(int *)ppiVar3);
                    /* WARNING: Subroutine does not return */
  _free((void *)this[-1].DynamicObject.mbr_0x3cc);
}



int * __thiscall Entity::meth_0x40ec50(Entity *this,byte param_1)

{
  dword *_Memory;
  
  _Memory = &this[-1].DynamicObject.mbr_0x2e8;
  meth_0x40ea50(this);
  meth_0x54fff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return (int *)_Memory;
}



void __thiscall Entity::meth_0x410560(Entity *this)

{
  dword dVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  Entity *local_4;
  
  dVar1 = this[-1].DynamicObject.mbr_0x28;
  this[-1].DynamicObject.mbr_0x24 = (dword)&GameItem__vftable_64e3f8_0064e3f8;
  *(undefined ***)(*(int *)(dVar1 + 4) + -0x3b0 + (int)this) = &PTR_virt_meth_0x410420_0064e30c;
  iVar2 = *(int *)(this[-1].DynamicObject.mbr_0x28 + 4);
  *(int *)(iVar2 + -0x3b4 + (int)this) = iVar2 + -0x3b0;
  local_4 = this;
  if (0xf < this[-1].DynamicObject.mbr_0x3d0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x3bc);
  }
  this[-1].DynamicObject.mbr_0x3d0 = 0xf;
  this[-1].DynamicObject.mbr_0x3cc = 0;
  this[-1].DynamicObject.field_0x3bc = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x3b4) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x3a0);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x3b4 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x3b0 = 0;
  this[-1].DynamicObject.field_0x3a0 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x394) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this[-1].DynamicObject.mbr_0x380);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x394 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x390 = 0;
  *(undefined *)&this[-1].DynamicObject.mbr_0x380 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x378) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x364);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x378 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x374 = 0;
  this[-1].DynamicObject.field_0x364 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x35c) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x348);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x35c = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x358 = 0;
  this[-1].DynamicObject.field_0x348 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x340) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x32c);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x340 = 0xf;
  this[-1].DynamicObject.mbr_0x33c = 0;
  this[-1].DynamicObject.field_0x32c = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x324) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x310);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x324 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x320 = 0;
  this[-1].DynamicObject.field_0x310 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x308) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x2f4);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x308 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x304 = 0;
  this[-1].DynamicObject.field_0x2f4 = 0;
  if (0xf < this[-1].DynamicObject.mbr_0x2e8) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x2d4);
  }
  this[-1].DynamicObject.mbr_0x2e8 = 0xf;
  this[-1].DynamicObject.mbr_0x2e4 = 0;
  this[-1].DynamicObject.field_0x2d4 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x2cc) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x2b8);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x2cc = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x2c8 = 0;
  this[-1].DynamicObject.field_0x2b8 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x2b0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x29c);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x2b0 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x2ac = 0;
  this[-1].DynamicObject.field_0x29c = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x294) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x280);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x294 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x290 = 0;
  this[-1].DynamicObject.field_0x280 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x278) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x264);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x278 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x274 = 0;
  this[-1].DynamicObject.field_0x264 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x25c) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x248);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x25c = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x258 = 0;
  this[-1].DynamicObject.field_0x248 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x23c) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x228);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x23c = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x238 = 0;
  this[-1].DynamicObject.field_0x228 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x220) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x20c);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x220 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x21c = 0;
  this[-1].DynamicObject.field_0x20c = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x200) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x1ec);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x200 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x1fc = 0;
  this[-1].DynamicObject.field_0x1ec = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x1e4) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x1d0);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x1e4 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x1e0 = 0;
  this[-1].DynamicObject.field_0x1d0 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x1c4) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x1b0);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x1c4 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x1c0 = 0;
  this[-1].DynamicObject.field_0x1b0 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x1a8) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x194);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x1a8 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x1a4 = 0;
  this[-1].DynamicObject.field_0x194 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x188) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x174);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x188 = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x184 = 0;
  this[-1].DynamicObject.field_0x174 = 0;
  if (0xf < *(uint *)&this[-1].DynamicObject.field_0x16c) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.Gfx_LineSystem.mbr_0x118);
  }
  *(undefined4 *)&this[-1].DynamicObject.field_0x16c = 0xf;
  *(undefined4 *)&this[-1].DynamicObject.field_0x168 = 0;
  this[-1].DynamicObject.Gfx_LineSystem.mbr_0x118 = 0;
  if (0xf < this[-1].DynamicObject.Gfx_LineSystem.mbr_0x10c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this[-1].DynamicObject.Gfx_LineSystem.mbr_0xf8);
  }
  this[-1].DynamicObject.Gfx_LineSystem.mbr_0x10c = 0xf;
  this[-1].DynamicObject.Gfx_LineSystem.mbr_0x108 = 0;
  *(undefined *)&this[-1].DynamicObject.Gfx_LineSystem.mbr_0xf8 = 0;
  if (0xf < this[-1].DynamicObject.Gfx_LineSystem.mbr_0xf0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this[-1].DynamicObject.Gfx_LineSystem.mbr_0xdc);
  }
  this[-1].DynamicObject.Gfx_LineSystem.mbr_0xf0 = 0xf;
  this[-1].DynamicObject.Gfx_LineSystem.mbr_0xec = 0;
  *(undefined *)&this[-1].DynamicObject.Gfx_LineSystem.mbr_0xdc = 0;
  if (0xf < this[-1].DynamicObject.Gfx_LineSystem.mbr_0xcc) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this[-1].DynamicObject.Gfx_LineSystem.mbr_0xb8);
  }
  this[-1].DynamicObject.Gfx_LineSystem.mbr_0xcc = 0xf;
  this[-1].DynamicObject.Gfx_LineSystem.mbr_0xc8 = 0;
  *(undefined *)&this[-1].DynamicObject.Gfx_LineSystem.mbr_0xb8 = 0;
  if (0xf < this[-1].DynamicObject.Gfx_LineSystem.mbr_0xb0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this[-1].DynamicObject.Gfx_LineSystem.mbr_0x9c);
  }
  this[-1].DynamicObject.Gfx_LineSystem.mbr_0xb0 = 0xf;
  this[-1].DynamicObject.Gfx_LineSystem.mbr_0xac = 0;
  *(undefined *)&this[-1].DynamicObject.Gfx_LineSystem.mbr_0x9c = 0;
  ppiVar3 = (int **)this[-1].DynamicObject.Gfx_LineSystem.mbr_0x90;
  if (ppiVar3 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar3;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this[-1].DynamicObject.Gfx_LineSystem.field_0x8c,(int **)&local_4,piVar4,
             (int *)ppiVar3);
                    /* WARNING: Subroutine does not return */
  _free((void *)this[-1].DynamicObject.Gfx_LineSystem.mbr_0x90);
}



int * __thiscall Entity::meth_0x410b40(Entity *this,byte param_1)

{
  dword *_Memory;
  
  _Memory = &this[-1].DynamicObject.mbr_0x24;
  meth_0x410560(this);
  meth_0x54fff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return (int *)_Memory;
}



void __thiscall Entity::meth_0x411aa0(Entity *this)

{
  int iVar1;
  cls_0x4d8d70 *this_00;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062bd06;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)&this[-3].DynamicObject.field_0x368;
  ExceptionList = &pvStack_c;
  *(GamePlayer__vftable_64e970 **)&this[-3].DynamicObject.field_0x364 =
       &GamePlayer__vftable_64e970_0064e970;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0x820 + (int)this) = &PTR_virt_meth_0x411900_0064e884;
  iVar1 = *(int *)(*(int *)&this[-3].DynamicObject.field_0x368 + 4);
  *(int *)(iVar1 + -0x824 + (int)this) = iVar1 + -0x820;
  this_00 = *(cls_0x4d8d70 **)&this[-1].DynamicObject.field_0x3b4;
  local_4 = 1;
  if (this_00 != (cls_0x4d8d70 *)0x0) {
    cls_0x4d8d70::meth_0x470c90(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  if (0xf < this[-1].DynamicObject.mbr_0x3d0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].DynamicObject.field_0x3bc);
  }
  this[-1].DynamicObject.mbr_0x3d0 = 0xf;
  this[-1].DynamicObject.mbr_0x3cc = 0;
  this[-1].DynamicObject.field_0x3bc = 0;
  local_4 = 0xffffffff;
  meth_0x40d490((Entity *)&this[-1].DynamicObject.field_0x3b8);
  ExceptionList = pvStack_c;
  return;
}



void __thiscall Entity::meth_0x411d50(Entity *this)

{
  int iVar1;
  
  iVar1 = *(int *)&this[-1].DynamicObject.field_0x320;
  *(GameProjectile__vftable_64ee88 **)&this[-1].DynamicObject.field_0x31c =
       &GameProjectile__vftable_64ee88_0064ee88;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0xb8 + (int)this) = &PTR_virt_meth_0x411ef0_0064ed9c;
  iVar1 = *(int *)(*(int *)&this[-1].DynamicObject.field_0x320 + 4);
  *(int *)(iVar1 + -0xbc + (int)this) = iVar1 + -0xb8;
  meth_0x467af0((Entity *)&this[-1].DynamicObject.mbr_0x3c0);
  return;
}



void __thiscall Entity::meth_0x4124f0(Entity *this)

{
  int iVar1;
  
  iVar1 = *(int *)&this[-1].DynamicObject.field_0x31c;
  *(GameUsableObject__vftable_64f3f8 **)&this[-1].DynamicObject.field_0x318 =
       &GameUsableObject__vftable_64f3f8_0064f3f8;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0xbc + (int)this) = &PTR_virt_meth_0x412610_0064f30c;
  iVar1 = *(int *)(*(int *)&this[-1].DynamicObject.field_0x31c + 4);
  *(int *)(iVar1 + -0xc0 + (int)this) = iVar1 + -0xbc;
  meth_0x467af0((Entity *)&this[-1].DynamicObject.field_0x3bc);
  return;
}



void __thiscall Entity::meth_0x4147d0(Entity *this)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  Entity *local_4;
  
  iVar1 = *(int *)&this[-2].DynamicObject.field_0x384;
  this[-2].DynamicObject.mbr_0x380 = (dword)&GameWeapon__vftable_650020_00650020;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0x42c + (int)this) = &PTR_virt_meth_0x414680_0064ff34;
  iVar1 = *(int *)(*(int *)&this[-2].DynamicObject.field_0x384 + 4);
  *(int *)(iVar1 + -0x430 + (int)this) = iVar1 + -0x42c;
  ppiVar2 = (int **)this[-1].DynamicObject.mbr_0x3c4;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  local_4 = this;
  FUN_0040b5e0(&this[-1].DynamicObject.mbr_0x3c0,(int **)&local_4,piVar3,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free((void *)this[-1].DynamicObject.mbr_0x3c4);
}



int * __thiscall Entity::meth_0x4154f0(Entity *this,byte param_1)

{
  dword *_Memory;
  
  _Memory = &this[-2].DynamicObject.mbr_0x380;
  meth_0x4147d0(this);
  meth_0x54fff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return (int *)_Memory;
}



void __thiscall Entity::meth_0x467af0(Entity *this)

{
  int **ppiVar1;
  int iVar2;
  undefined4 *puVar3;
  int **_Memory;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00630486;
  local_c = ExceptionList;
  iVar4 = *(int *)&this[-1].DynamicObject.field_0x338;
  ExceptionList = &local_c;
  *(GameEntity__vftable_666130 **)&this[-1].DynamicObject.field_0x334 =
       &GameEntity__vftable_666130_00666130;
  *(undefined ***)(*(int *)(iVar4 + 4) + -0xa0 + (int)this) = &PTR_virt_meth_0x467a00_00666044;
  iVar4 = *(int *)(*(int *)&this[-1].DynamicObject.field_0x338 + 4);
  *(int *)(iVar4 + -0xa4 + (int)this) = iVar4 + -0xa0;
  local_4 = 0;
  piVar5 = (int *)&this[-1].DynamicObject.field_0x374;
  iVar4 = 5;
  do {
    iVar2 = *piVar5;
    while (iVar2 != 0) {
      puVar3 = (undefined4 *)piVar5[-1];
      if (puVar3 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)*puVar3;
      }
      ppiVar1 = (int **)piVar5[-1];
      if (ppiVar1 == (int **)0x0) {
        _Memory = (int **)0x0;
      }
      else {
        _Memory = (int **)*ppiVar1;
      }
      if (_Memory != ppiVar1) {
        *_Memory[1] = (int)*_Memory;
        (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      GameActionEquip::meth_0x55a570((GameActionEquip *)puVar3[2]);
      iVar2 = *piVar5;
    }
    piVar5 = piVar5 + 3;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      local_4 = 0xffffffff;
      _eh_vector_destructor_iterator_
                (&this[-1].DynamicObject.field_0x36c,0xc,5,GUI::Interface::meth_0x4f6d40);
      ExceptionList = local_c;
      return;
    }
  } while( true );
}



void __thiscall Entity::meth_0x467be0(Entity *this,int *param_1)

{
  cls_0x616328 *pcVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  int *piVar5;
  int **local_14;
  dword local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  virt_meth_0x54b540((Entity *)
                     (*(int *)(*(int *)&this[-1].DynamicObject.field_0x338 + 4) + -0xa0 + (int)this)
                     ,(char)param_1);
  pcVar1 = *(cls_0x616328 **)
            (&(this->DynamicObject).Gfx_LineSystem.field_0x88 +
            *(int *)(*(int *)&this[-1].DynamicObject.field_0x338 + 4));
  if ((pcVar1 != (cls_0x616328 *)0x0) &&
     (iVar2 = FUN_006165e0(pcVar1,0,&Inventory::RTTI_Type_Descriptor,
                           &GameInventory::RTTI_Type_Descriptor,0), iVar2 != 0)) {
    ppiVar3 = (int **)FUN_0056e0b0();
    piVar5 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    if (*(int ***)(iVar2 + 0xc) != (int **)0x0) {
      piVar5 = **(int ***)(iVar2 + 0xc);
    }
    local_14 = ppiVar3;
    if (piVar5 != *(int **)(iVar2 + 0xc)) {
      do {
        (**(code **)(*(int *)piVar5[2] + 0x44))(piVar4);
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)(iVar2 + 0xc));
    }
    if (ppiVar3 == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *ppiVar3;
    }
    GUI::Interface::meth_0x4b9d60((Interface *)&stack0xffffffe8,&param_1,piVar4,(int *)ppiVar3);
                    /* WARNING: Subroutine does not return */
    _free(local_14);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall Entity::meth_0x548d80(Entity *this,int param_1,int param_2)

{
  cls_0x4a5be0 *this_00;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  ulonglong uVar4;
  ushort unaff_retaddr;
  
  if (((((this->DynamicObject).field_0x288 != '\0') &&
       (iVar2 = *(int *)&(this->DynamicObject).field_0x160, iVar2 != 0)) &&
      (this_00 = *(cls_0x4a5be0 **)(iVar2 + 0xc), this_00 != (cls_0x4a5be0 *)0x0)) &&
     ((*(this->DynamicObject).vftptr_0x0[0x12].virt_meth_0x568400_0)
                (&this->DynamicObject,(byte)param_1), unaff_ESI != 0)) {
    if (param_1 != unaff_ESI) {
      param_1 = 0;
    }
    *(int *)&(this->DynamicObject).field_0x28c = unaff_ESI;
    *(undefined4 *)&(this->DynamicObject).field_0x290 = unaff_EBX;
    (this->DynamicObject).field_0x294 = (byte)param_1;
    if (DAT_0070bd98 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    iVar2 = (**(code **)*puVar3)();
    *(int *)&(this->DynamicObject).field_0x180 = iVar2 - param_2;
    cls_0x4a5be0::meth_0x4a5640
              (this_00,*(undefined4 *)&(this->DynamicObject).field_0x28c,
               *(uint *)&(this->DynamicObject).field_0x290,0,0x3dcccccd,1,(uint)unaff_retaddr);
    cls_0x4a5be0::meth_0x548d10(this_00,0x3f800000);
    this_00->mbr_0x90 = (byte)param_1;
    Gfx_AnimationObject::GetDuration
              (this_00->animation_object,*(float10 **)&(this->DynamicObject).field_0x28c,
               *(undefined4 *)&(this->DynamicObject).field_0x290,0,unaff_EBP);
    uVar4 = FUN_00616e24();
    if (unaff_retaddr < 2) {
      *(int *)&(this->DynamicObject).field_0x184 =
           *(int *)&(this->DynamicObject).field_0x180 - (int)uVar4;
      (this->DynamicObject).field_0x188 = unaff_retaddr == 0;
    }
    else {
      *(uint *)&(this->DynamicObject).field_0x184 =
           *(int *)&(this->DynamicObject).field_0x180 - (int)uVar4 * (uint)unaff_retaddr;
    }
    bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
    if (bVar1) {
      (*(this->DynamicObject).vftptr_0x0[0x33].virt_meth_0x568400_0)
                (&this->DynamicObject,(byte)*(undefined4 *)&(this->DynamicObject).field_0x28c);
    }
  }
  return;
}



float10 * __thiscall Entity::meth_0x548ff0(Entity *this,float10 *__return_storage_ptr__)

{
  int *piVar1;
  float10 *in_EAX;
  undefined local_18 [12];
  undefined local_c [12];
  
  piVar1 = *(int **)&(this->DynamicObject).field_0x160;
  if (piVar1 != (int *)0x0) {
    in_EAX = (float10 *)(**(code **)(*piVar1 + 8))(local_c,local_18);
  }
  return in_EAX;
}



bool __thiscall Entity::virt_meth_0x549030(Entity *this)

{
  return *(int *)&(this->DynamicObject).field_0x1e0 == 7;
}



int __thiscall Entity::meth_0x549040(Entity *this)

{
  int iVar1;
  
  if ((this->DynamicObject).field_0x297 != '\0') {
    return *(int *)&(this->DynamicObject).field_0x298;
  }
  if (DAT_0070bd98 == 0) {
    iVar1 = (**ppcRam00000000)();
    return iVar1 - *(int *)&(this->DynamicObject).field_0x180;
  }
  iVar1 = (***(code ***)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98))();
  return iVar1 - *(int *)&(this->DynamicObject).field_0x180;
}



void __thiscall Entity::virt_meth_0x549090(Entity *this,undefined4 param_1)

{
  (this->DynamicObject).field_0x319 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x300 = param_1;
  return;
}



void __thiscall Entity::ServerUpdate(Entity *this,undefined4 param_1)

{
  undefined *puVar1;
  int *piVar2;
  byte unaff_DI;
  byte bVar3;
  Exception__vftable_64787c *pEStack_10;
  char *pcStack_c;
  Exception__vftable_64787c *pEStack_8;
  char *pcStack_4;
  
  bVar3 = (byte)param_1;
  piVar2 = (*(this->DynamicObject).vftptr_0x0[0x1a].virt_meth_0x568400_0)
                     (&this->DynamicObject,bVar3);
  if (((char)piVar2 != '\0') && ((this->DynamicObject).field_0x3a0 != '\0')) {
    switch(*(undefined4 *)&(this->DynamicObject).field_0x1e0) {
    case 0:
      pEStack_10 = &Exception__vftable_64787c_0064787c;
      pcStack_c = "Trying to update entity when its state is invalid";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&pEStack_10,&DAT_006d8834);
    case 1:
      (*(this->DynamicObject).vftptr_0x0[0x2e].virt_meth_0x568400_0)(&this->DynamicObject,bVar3);
      break;
    case 2:
      (*(this->DynamicObject).vftptr_0x0[0x30].virt_meth_0x568400_0)(&this->DynamicObject,bVar3);
      break;
    case 3:
      (*(this->DynamicObject).vftptr_0x0[0x31].virt_meth_0x568400_0)(&this->DynamicObject,bVar3);
      break;
    case 4:
    case 5:
      (*(this->DynamicObject).vftptr_0x0[0x32].virt_meth_0x568400_0)(&this->DynamicObject,bVar3);
      break;
    case 6:
      (*(this->DynamicObject).vftptr_0x0[0x2f].virt_meth_0x568400_0)(&this->DynamicObject,bVar3);
      break;
    case 7:
      if ((this->DynamicObject).field_0x1bc != '\0') {
        (*(this->DynamicObject).vftptr_0x0[0x32].virt_meth_0x568400_0)(&this->DynamicObject,bVar3);
      }
      break;
    case 8:
      break;
    default:
      pEStack_8 = &Exception__vftable_64787c_0064787c;
      pcStack_4 = "Unknown state in Entity::ServerUpdate()\n";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&pEStack_8,&DAT_006d8834);
    }
    *(undefined4 *)&(this->DynamicObject).field_0x2d4 = param_1;
    piVar2 = (*(this->DynamicObject).vftptr_0x0[0xb].virt_meth_0x568400_0)
                       (&this->DynamicObject,unaff_DI);
    puVar1 = &(this->DynamicObject).field_0x2d8;
    *(int *)puVar1 = *(int *)puVar1 + (int)piVar2;
  }
  return;
}



undefined4 * __thiscall Entity::virt_meth_0x549320(Entity *this)

{
  Inventory *pIVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063799b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pIVar1 = (Inventory *)operator_new(0x14);
  local_4 = 0;
  if (pIVar1 != (Inventory *)0x0) {
    pIVar1 = Inventory::Inventory(pIVar1);
    ExceptionList = local_c;
    return &pIVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



uint __thiscall Entity::meth_0x549450(Entity *this)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float10 *this_00;
  undefined4 uVar4;
  int iVar5;
  float10 *pfVar6;
  int *piVar7;
  int unaff_ESI;
  byte unaff_DI;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  char unaff_retaddr;
  float10 *__return_storage_ptr__;
  float10 *pfStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  dword dStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  
  if (DAT_0070bd98 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
  }
  piVar7 = (int *)(**(code **)(*piVar7 + 0x68))();
  cVar3 = (**(code **)(*piVar7 + 0xc))(this);
  if ((cVar3 == '\0') && (*(int *)&(this->DynamicObject).field_0x1e4 == 0)) {
    return 0;
  }
  (*(this->DynamicObject).vftptr_0x0[0x23].virt_meth_0x568400_0)(&this->DynamicObject,unaff_DI);
  fStack_38 = (float)extraout_ST0;
  __return_storage_ptr__ = *(float10 **)&(this->DynamicObject).field_0x1ec;
  pfVar6 = __return_storage_ptr__;
  if (__return_storage_ptr__ != (float10 *)0x0) {
    piVar7 = DAT_0070bd98;
    if (DAT_0070bd98 != (int *)0x0) {
      piVar7 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
    }
    this_00 = (float10 *)(**(code **)(*piVar7 + 0x54))();
    pfVar6 = this_00;
    if ((this_00 != (float10 *)0x0) && (*(cls_0x57bc90 **)((int)this_00 + 4) != (cls_0x57bc90 *)0x0)
       ) {
      fStack_28 = (float)(this->DynamicObject).mbr_0x4;
      dStack_24 = (this->DynamicObject).mbr_0x8;
      fStack_20 = (float)(this->DynamicObject).mbr_0xc;
      cls_0x57bc90::meth_0x57bdc0
                (*(cls_0x57bc90 **)((int)this_00 + 4),fStack_28,(char)dStack_24,fStack_20,
                 &stack0xffffffbc,&pfStack_40);
      if ((unaff_retaddr != '\0') ||
         ((unaff_ESI != *(int *)&(this->DynamicObject).field_0x38c ||
          (pfVar6 = pfStack_40, pfStack_40 != *(float10 **)&(this->DynamicObject).field_0x390)))) {
        *(int *)&(this->DynamicObject).field_0x38c = unaff_ESI;
        *(float10 **)&(this->DynamicObject).field_0x390 = pfStack_40;
        FUN_0057bef0(__return_storage_ptr__);
        fVar1 = (float)extraout_ST0_00;
        fStack_10 = fStack_28;
        fStack_1c = fStack_28;
        fStack_14 = fStack_20;
        fStack_34 = fStack_20;
        for (fVar2 = fStack_3c; 0.0 < fVar2; fVar2 = fVar2 - fVar1) {
          unaff_ESI = unaff_ESI + -1;
          fStack_10 = fStack_10 - fVar1;
          pfStack_40 = (float10 *)((int)pfStack_40 + -1);
          fStack_34 = fStack_34 - fVar1;
          fStack_1c = fStack_1c + fVar1;
          fStack_14 = fStack_14 + fVar1;
        }
        uVar4 = CONCAT22((short)((uint)fStack_28 >> 0x10),
                         (ushort)(fStack_34 < fStack_14) << 8 |
                         (ushort)(NAN(fStack_34) || NAN(fStack_14)) << 10 |
                         (ushort)(fStack_34 == fStack_14) << 0xe);
        if (fStack_34 < fStack_14 != (fStack_34 == fStack_14)) {
          do {
            fStack_38 = fStack_10;
            if (fStack_10 < fStack_1c != (fStack_10 == fStack_1c)) {
              fStack_30 = (fStack_34 - fStack_20) * (fStack_34 - fStack_20);
              fStack_2c = fStack_3c * fStack_3c;
              iVar5 = unaff_ESI;
              do {
                fVar2 = (fStack_38 - fStack_28) * (fStack_38 - fStack_28) + fStack_30;
                if ((fVar2 < fStack_2c != (fVar2 == fStack_2c)) &&
                   ((*(char *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x100) == '\0' ||
                    (piVar7 = (*(this->DynamicObject).vftptr_0x0[0x26].virt_meth_0x568400_0)
                                        (&this->DynamicObject,(byte)iVar5), piVar7 != (int *)0x0))))
                {
                  FUN_0056c610(this_00,*(undefined4 *)&(this->DynamicObject).field_0x1dc,iVar5,
                               pfStack_40,1);
                  FUN_0056c590(this_00,iVar5,(int)pfStack_40,1);
                }
                fStack_38 = fStack_38 + fVar1;
                iVar5 = iVar5 + 1;
              } while (fStack_38 < fStack_1c != (fStack_38 == fStack_1c));
            }
            fStack_34 = fStack_34 + fVar1;
            pfStack_40 = (float10 *)((int)pfStack_40 + 1);
            uVar4 = CONCAT22((short)((uint)pfStack_40 >> 0x10),
                             (ushort)(fStack_34 < fStack_14) << 8 |
                             (ushort)(NAN(fStack_34) || NAN(fStack_14)) << 10 |
                             (ushort)(fStack_34 == fStack_14) << 0xe);
          } while (fStack_34 < fStack_14 != (fStack_34 == fStack_14));
        }
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
    }
  }
  return (uint)pfVar6 & 0xffffff00;
}



undefined4 __thiscall Entity::virt_meth_0x549a80(Entity *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_retaddr;
  byte abStack_8 [8];
  
  iVar1 = *(int *)&(this->DynamicObject).field_0x1ec;
  if (iVar1 != 0) {
    piVar2 = DAT_0070bd98;
    if (DAT_0070bd98 != (int *)0x0) {
      piVar2 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
    }
    iVar1 = (**(code **)(*piVar2 + 0x54))(iVar1);
    if ((iVar1 != 0) && (*(cls_0x57bc90 **)(iVar1 + 4) != (cls_0x57bc90 *)0x0)) {
      cls_0x57bc90::meth_0x57bdc0
                (*(cls_0x57bc90 **)(iVar1 + 4),unaff_retaddr,(undefined)param_1,param_2,abStack_8,
                 &stack0xfffffff4);
      piVar2 = (*(this->DynamicObject).vftptr_0x0[0x26].virt_meth_0x568400_0)
                         (&this->DynamicObject,abStack_8[0]);
      return piVar2;
    }
  }
  return 0;
}



byte __thiscall Entity::virt_meth_0x549b00(Entity *this)

{
  int iVar1;
  cls_0x57bc90 *this_00;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_retaddr;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar1 = *(int *)&(this->DynamicObject).field_0x1ec;
  if (iVar1 != 0) {
    if (DAT_0070bd98 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    iVar3 = (**(code **)(*piVar4 + 0x54))();
    if (iVar3 != 0) {
      if ((*(int *)(unaff_retaddr + 0x1ec) == iVar1) &&
         (this_00 = *(cls_0x57bc90 **)(iVar3 + 4), this_00 != (cls_0x57bc90 *)0x0)) {
        if ((*(ModelInstance **)(unaff_retaddr + 0x160) == (ModelInstance *)0x0) ||
           (iVar3 = ModelInstance::meth_0x563930(*(ModelInstance **)(unaff_retaddr + 0x160)),
           (char)iVar3 == '\0')) {
          fStack_28 = *(float *)(unaff_retaddr + 4);
          fStack_24 = *(float *)(unaff_retaddr + 8);
          fStack_20 = *(float *)(unaff_retaddr + 0xc);
        }
        else {
          ModelInstance::meth_0x563a40(*(ModelInstance **)(unaff_retaddr + 0x160),&fStack_10);
          fStack_28 = fStack_10;
          fStack_24 = fStack_c;
          fStack_20 = fStack_8;
        }
        meth_0x4056b0(this,&fStack_10,&fStack_1c);
        fStack_10 = fStack_10 + fStack_28;
        fStack_c = fStack_c + fStack_24;
        fStack_8 = fStack_8 + fStack_20;
        fStack_1c = fStack_1c + fStack_28;
        fStack_18 = fStack_18 + fStack_24;
        fStack_14 = fStack_14 + fStack_20;
        cls_0x57bc90::meth_0x57bdc0
                  (this_00,fStack_10,SUB41(fStack_c,0),fStack_8,&iStack_38,&iStack_34);
        cls_0x57bc90::meth_0x57bdc0
                  (this_00,fStack_1c,SUB41(fStack_18,0),fStack_14,&stack0xffffffc4,&iStack_30);
        bVar2 = false;
        fStack_2c = (fStack_18 + fStack_24) - fStack_c;
        if (iStack_30 <= iStack_34) {
          do {
            iVar3 = iStack_38;
            if (iStack_38 <= unaff_EBP) {
              do {
                piVar4 = (*(this->DynamicObject).vftptr_0x0[0x26].virt_meth_0x568400_0)
                                   (&this->DynamicObject,(byte)iStack_38);
                if (piVar4 == (int *)0x0) {
                  if (bVar2) {
                    return 1;
                  }
                }
                else {
                  bVar2 = true;
                }
                iStack_38 = iStack_38 + 1;
                unaff_EBP = iVar1;
                iVar3 = unaff_ESI;
              } while (iStack_38 <= iVar1);
            }
            iStack_30 = iStack_30 + 1;
            iStack_38 = iVar3;
          } while (iStack_30 <= iStack_34);
        }
        return -bVar2 & 2;
      }
      return 0;
    }
  }
  return 0;
}



void __thiscall Entity::meth_0x549d80(Entity *this)

{
  float unaff_EBX;
  int iVar1;
  float unaff_ESI;
  undefined4 ****local_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 ****local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [64];
  
  thunk_FUN_004726fd(local_40,*(float *)&(this->DynamicObject).field_0x1f0 * 0.01745329,
                     *(float *)&(this->DynamicObject).field_0x1f4 * 0.01745329,
                     *(float *)&(this->DynamicObject).field_0x1f8 * 0.01745329);
  local_a0 = *(undefined4 *)&(this->DynamicObject).field_0x3a4;
  local_98 = *(undefined4 *)&(this->DynamicObject).field_0x3ac;
  local_9c = *(undefined4 *)&(this->DynamicObject).field_0x3a8;
  local_94 = *(undefined4 *)&(this->DynamicObject).field_0x3b0;
  local_80 = *(undefined4 *)&(this->DynamicObject).field_0x3b8;
  local_7c = *(undefined4 *)&(this->DynamicObject).field_0x3a4;
  local_68 = *(undefined4 *)&(this->DynamicObject).field_0x3ac;
  local_64 = *(undefined4 *)&(this->DynamicObject).field_0x3b0;
  local_6c = *(undefined4 *)&(this->DynamicObject).field_0x3b4;
  local_50 = *(undefined4 *)&(this->DynamicObject).field_0x3b8;
  local_4c = *(undefined4 *)&(this->DynamicObject).field_0x3a4;
  local_ac = 0x7f7fffff;
  local_a8 = 0x7f7fffff;
  local_a4 = 0x7f7fffff;
  local_b8 = (undefined4 ****)0xff7fffff;
  local_b4 = -3.402823e+38;
  local_b0 = -3.402823e+38;
  iVar1 = 8;
  local_90 = local_9c;
  local_8c = local_98;
  local_88 = local_94;
  local_84 = local_9c;
  local_78 = local_9c;
  local_74 = local_80;
  local_70 = local_7c;
  local_60 = local_6c;
  local_5c = local_68;
  local_58 = local_64;
  local_54 = local_6c;
  local_48 = local_6c;
  local_44 = local_50;
  do {
    thunk_FUN_0047134a();
    if ((float)&local_c4 < (float)local_b8 != (NAN((float)&local_c4) || NAN((float)local_b8))) {
      local_b8 = &local_c4;
    }
    if (unaff_ESI < local_b4 != (NAN(unaff_ESI) || NAN(local_b4))) {
      local_b4 = unaff_ESI;
    }
    if (unaff_EBX < local_b0 != (NAN(unaff_EBX) || NAN(local_b0))) {
      local_b0 = unaff_EBX;
    }
    if ((float)local_c4 < (float)&local_c4) {
      local_c4 = &local_c4;
    }
    if (fStack_c0 < unaff_ESI) {
      fStack_c0 = unaff_ESI;
    }
    if (fStack_bc < unaff_EBX) {
      fStack_bc = unaff_EBX;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (this->DynamicObject).mbr_0x10 = (dword)local_b8;
  (this->DynamicObject).mbr_0x14 = (dword)local_b4;
  (this->DynamicObject).mbr_0x18 = (dword)local_b0;
  (this->DynamicObject).mbr_0x1c = (dword)local_c4;
  (this->DynamicObject).mbr_0x20 = (dword)fStack_c0;
  (this->DynamicObject).mbr_0x24 = (dword)fStack_bc;
  return;
}



void __thiscall Entity::meth_0x549fc0(Entity *this,int param_1)

{
  void *this_00;
  
  this_00 = *(void **)&(this->DynamicObject).field_0x160;
  if (this_00 != (void *)0x0) {
    FUN_005643a0(this_00,param_1);
    return;
  }
  return;
}



void __thiscall Entity::meth_0x54a060(Entity *this,void *param_1)

{
  int iVar1;
  
  net::packet::meth_0x45f130((packet *)param_1,(this->DynamicObject).mbr_0x4);
  net::packet::meth_0x45f130((packet *)param_1,(this->DynamicObject).mbr_0x8);
  net::packet::meth_0x45f130((packet *)param_1,(this->DynamicObject).mbr_0xc);
  net::packet::meth_0x45f130((packet *)param_1,*(undefined4 *)&(this->DynamicObject).field_0x1f0);
  net::packet::meth_0x45f130((packet *)param_1,*(undefined4 *)&(this->DynamicObject).field_0x1f4);
  net::packet::meth_0x45f130((packet *)param_1,*(undefined4 *)&(this->DynamicObject).field_0x1f8);
  net::packet::meth_0x45f130((packet *)param_1,*(undefined4 *)&(this->DynamicObject).field_0x28c);
  net::packet::meth_0x45f130((packet *)param_1,*(undefined4 *)&(this->DynamicObject).field_0x290);
  iVar1 = meth_0x549040(this);
  net::packet::meth_0x45f130((packet *)param_1,iVar1);
  return;
}



void __thiscall Entity::meth_0x54a8a0(Entity *this,float *param_1)

{
  int iVar1;
  WaterTileModelInstance *this_00;
  int **ppiVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined4 unaff_EDI;
  int *piVar9;
  byte bVar10;
  Map *local_18;
  undefined auStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  meth_0x5680d0(this,(int *)param_1);
  iVar1 = *(int *)&(this->DynamicObject).field_0x1ec;
  local_18 = (Map *)0x0;
  if (iVar1 != 0) {
    piVar9 = DAT_0070bd98;
    if (DAT_0070bd98 != (int *)0x0) {
      piVar9 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
    }
    local_18 = (Map *)(**(code **)(*piVar9 + 0x54))(iVar1);
  }
  this_00 = *(WaterTileModelInstance **)&(this->DynamicObject).field_0x160;
  if (this_00 != (WaterTileModelInstance *)0x0) {
    WaterTileModelInstance::meth_0x563e30
              (this_00,(this->DynamicObject).mbr_0x4,(this->DynamicObject).mbr_0x8,
               (this->DynamicObject).mbr_0xc);
  }
  bVar10 = (byte)unaff_EDI;
  ppiVar2 = *(int ***)&(this->DynamicObject).field_0x2f8;
  if (ppiVar2 == (int **)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *ppiVar2;
  }
  if (piVar9 != *(int **)&(this->DynamicObject).field_0x2f8) {
    do {
      FUN_005aa4e0((void *)piVar9[2],param_1);
      bVar10 = (byte)unaff_EDI;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)*(int *)&(this->DynamicObject).field_0x2f8);
  }
  if (*(int *)&(this->DynamicObject).field_0x16c != 0) {
    if (local_18 == (Map *)0x0) goto LAB_0054aa09;
    bVar5 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
    if (bVar5) {
      puVar8 = (undefined4 *)FUN_00560680(auStack_14,param_1,local_18);
      uVar3 = *(undefined4 *)&(this->DynamicObject).field_0x1f0;
      uVar4 = *puVar8;
      uStack_10 = puVar8[1];
      uStack_c = uVar3;
      cVar6 = (**(code **)(**(int **)&(this->DynamicObject).field_0x16c + 0x10))
                        (uVar4,uStack_10,uVar3);
      cVar7 = (**(code **)(**(int **)&(this->DynamicObject).field_0x16c + 0x18))(uVar3);
      if ((cVar6 == '\0') || (cVar7 == '\0')) {
        (*(this->DynamicObject).vftptr_0x0[0x1d].virt_meth_0x568400_0)
                  (&this->DynamicObject,(byte)local_18->mbr_0x88);
        if (cVar7 == '\0') {
          puVar8 = *(undefined4 **)&(this->DynamicObject).field_0x16c;
          if (puVar8 != (undefined4 *)0x0) {
            (**(code **)*puVar8)(1);
          }
          piVar9 = (*(this->DynamicObject).vftptr_0x0[0x2d].virt_meth_0x568400_0)
                             (&this->DynamicObject,bVar10);
          *(int **)&(this->DynamicObject).field_0x16c = piVar9;
        }
        (**(code **)(**(int **)&(this->DynamicObject).field_0x16c + 0xc))(uVar4,uStack_10);
        (*(this->DynamicObject).vftptr_0x0[0x1c].virt_meth_0x568400_0)
                  (&this->DynamicObject,(byte)local_18->mbr_0x88);
      }
    }
  }
  if (local_18 != (Map *)0x0) {
    cls_0x56c500::meth_0x56c500((cls_0x56c500 *)local_18);
  }
LAB_0054aa09:
  meth_0x549450(this);
  return;
}



undefined4 __thiscall Entity::virt_meth_0x54ab00(Entity *this)

{
  int iVar1;
  int *piVar2;
  byte unaff_SI;
  
  piVar2 = (*(this->DynamicObject).vftptr_0x0[0x19].virt_meth_0x568400_0)
                     (&this->DynamicObject,unaff_SI);
  if (((((char)piVar2 == '\0') && (iVar1 = *(int *)&(this->DynamicObject).field_0x1e0, iVar1 != 1))
      && (iVar1 != 3)) &&
     (((iVar1 != 2 && (iVar1 != 6)) &&
      (((this->DynamicObject).mbr_0x2f0 == 0 && (*(int *)&(this->DynamicObject).field_0x314 == 0))))
     )) {
    return 0;
  }
  return 1;
}



uint __thiscall Entity::virt_meth_0x54ab50(Entity *this,uint param_1)

{
  int *piVar1;
  byte unaff_SI;
  byte unaff_retaddr;
  int *in_stack_0000000c;
  
  piVar1 = *(int **)&(this->DynamicObject).field_0x1e0;
  if ((((piVar1 != (int *)0x1) && (piVar1 != (int *)0x2)) && (piVar1 != (int *)0x3)) &&
     (piVar1 != (int *)0x6)) {
    piVar1 = (*(this->DynamicObject).vftptr_0x0[0x19].virt_meth_0x568400_0)
                       (&this->DynamicObject,unaff_SI);
    if (((char)piVar1 != '\0') ||
       ((piVar1 = (int *)(this->DynamicObject).mbr_0x2f0, piVar1 == (int *)0x0 &&
        (piVar1 = *(int **)&(this->DynamicObject).field_0x314, piVar1 == (int *)0x0)))) {
      piVar1 = (*(this->DynamicObject).vftptr_0x0[0x19].virt_meth_0x568400_0)
                         (&this->DynamicObject,unaff_retaddr);
      if (((char)piVar1 == '\0') ||
         (piVar1 = *(int **)&(this->DynamicObject).field_0x2d8, in_stack_0000000c < piVar1)) {
        return (uint)piVar1 & 0xffffff00;
      }
    }
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



void __thiscall Entity::meth_0x54abb0(Entity *this,void *param_1)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  ulonglong uVar6;
  int local_20;
  int local_1c;
  void *local_18;
  void *local_14;
  void *local_10;
  void *local_c;
  void *local_8;
  void *local_4;
  
  pvVar2 = param_1;
  local_18 = (void *)0x0;
  local_14 = (void *)0x0;
  local_10 = (void *)0x0;
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&param_1);
  local_18 = param_1;
  GameActionEquip::meth_0x45e500((GameActionEquip *)pvVar2,&param_1);
  local_14 = param_1;
  GameActionEquip::meth_0x45e500((GameActionEquip *)pvVar2,&param_1);
  local_10 = param_1;
  local_c = (void *)0x0;
  local_8 = (void *)0x0;
  local_4 = (void *)0x0;
  GameActionEquip::meth_0x45e500((GameActionEquip *)pvVar2,&param_1);
  local_c = param_1;
  GameActionEquip::meth_0x45e500((GameActionEquip *)pvVar2,&param_1);
  local_8 = param_1;
  GameActionEquip::meth_0x45e500((GameActionEquip *)pvVar2,&param_1);
  local_4 = param_1;
  GameActionEquip::meth_0x45e500((GameActionEquip *)pvVar2,&param_1);
  GameActionEquip::meth_0x45e500((GameActionEquip *)pvVar2,&local_20);
  GameActionEquip::meth_0x45e500((GameActionEquip *)pvVar2,&local_1c);
  bVar3 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar3) {
    fVar1 = (float)(this->DynamicObject).mbr_0x4;
    if ((((NAN(fVar1) || NAN((float)local_18)) == (fVar1 == (float)local_18)) ||
        (fVar1 = (float)(this->DynamicObject).mbr_0x8,
        (NAN(fVar1) || NAN((float)local_14)) == (fVar1 == (float)local_14))) ||
       (fVar1 = (float)(this->DynamicObject).mbr_0xc,
       (NAN(fVar1) || NAN((float)local_10)) == (fVar1 == (float)local_10))) {
      meth_0x54a8a0(this,(float *)&local_18);
    }
    fVar1 = *(float *)&(this->DynamicObject).field_0x1f0;
    if ((((NAN(fVar1) || NAN((float)local_c)) == (fVar1 == (float)local_c)) ||
        (fVar1 = *(float *)&(this->DynamicObject).field_0x1f4,
        (NAN(fVar1) || NAN((float)local_8)) == (fVar1 == (float)local_8))) ||
       (fVar1 = *(float *)&(this->DynamicObject).field_0x1f8,
       (NAN(fVar1) || NAN((float)local_4)) == (fVar1 == (float)local_4))) {
      net::critical_section::meth_0x549fe0((critical_section *)this,(float *)&local_c);
    }
    pvVar2 = param_1;
    if ((param_1 != *(void **)&(this->DynamicObject).field_0x28c) ||
       (local_20 != *(int *)&(this->DynamicObject).field_0x290)) {
      meth_0x548d80(this,(int)param_1,local_20);
      if (DAT_0070bd98 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
      }
      iVar4 = (**(code **)*puVar5)();
      *(int *)&(this->DynamicObject).field_0x180 = iVar4 - local_1c;
      iVar4 = *(int *)&(this->DynamicObject).field_0x160;
      if (iVar4 != 0) {
        Gfx_AnimationObject::GetDuration
                  (*(void **)(*(int *)(iVar4 + 0xc) + 0xc),
                   *(float10 **)&(this->DynamicObject).field_0x28c,
                   *(undefined4 *)&(this->DynamicObject).field_0x290,0,unaff_EBX);
      }
      uVar6 = FUN_00616e24();
      *(int *)&(this->DynamicObject).field_0x184 =
           *(int *)&(this->DynamicObject).field_0x180 - (int)uVar6;
      (*(this->DynamicObject).vftptr_0x0[0x35].virt_meth_0x568400_0)
                (&this->DynamicObject,(byte)pvVar2);
    }
  }
  return;
}



void __thiscall Entity::meth_0x54adc0(Entity *this)

{
  Map *this_00;
  int *piVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fStack_24;
  undefined4 uStack_1c;
  dword local_18;
  float local_14;
  dword local_10;
  
  local_10 = (this->DynamicObject).mbr_0xc;
  local_18 = (this->DynamicObject).mbr_0x4;
  local_14 = ((float)(this->DynamicObject).mbr_0x20 - (float)(this->DynamicObject).mbr_0x14) +
             (float)(this->DynamicObject).mbr_0x8;
  fStack_24 = *(float *)&(this->DynamicObject).field_0x1ec;
  piVar1 = DAT_0070bd98;
  if (DAT_0070bd98 != (int *)0x0) {
    piVar1 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
  }
  this_00 = (Map *)(**(code **)(*piVar1 + 0x54))();
  piVar1 = Map::GetOctree(this_00);
  uVar4 = 0;
  fVar3 = 1.401298e-45;
  iVar2 = (**(code **)(*piVar1 + 0x5c))(&uStack_1c,&stack0xffffffe0,1,0,0);
  if (iVar2 == 1) {
    fStack_24 = fVar3;
    uStack_1c = uVar4;
    meth_0x54a8a0(this,&fStack_24);
  }
  return;
}



undefined4 __thiscall Entity::GetScript(Entity *this)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined *puVar4;
  
  if ((this->DynamicObject).field_0x2c0 != '\0') {
    return 0;
  }
  if (*(int *)&(this->DynamicObject).field_0x2bc == 0) {
    if (*(int *)&(this->DynamicObject).field_0x2b4 == 0) {
      (this->DynamicObject).field_0x2c0 = 1;
      return *(undefined4 *)&(this->DynamicObject).field_0x2bc;
    }
    piVar3 = (int *)FUN_00401150();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x24))(*(undefined4 *)&(this->DynamicObject).field_0x1dc)
    ;
    *(int **)&(this->DynamicObject).field_0x2bc = piVar3;
    if (*(uint *)&(this->DynamicObject).field_0x2b8 < 0x10) {
      puVar4 = &(this->DynamicObject).field_0x2a4;
    }
    else {
      puVar4 = *(undefined **)&(this->DynamicObject).field_0x2a4;
    }
    cVar2 = (**(code **)(*piVar3 + 4))(puVar4,1);
    if (cVar2 == '\0') {
      FUN_00497120((byte *)0x691f64);
      puVar1 = *(undefined4 **)&(this->DynamicObject).field_0x2bc;
      (this->DynamicObject).field_0x2c0 = 1;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)&(this->DynamicObject).field_0x2bc = 0;
      return *(undefined4 *)&(this->DynamicObject).field_0x2bc;
    }
    if (*(int *)&(this->DynamicObject).field_0x2cc != 0) {
      (**(code **)(**(int **)&(this->DynamicObject).field_0x2bc + 0xc))
                (&(this->DynamicObject).field_0x2c4);
    }
  }
  return *(undefined4 *)&(this->DynamicObject).field_0x2bc;
}



undefined4 __thiscall
Entity::RunScript(Entity *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Entity::RunScript() method may only be called by the server.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  iVar2 = GetScript(this);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = (**(code **)(**(int **)&(this->DynamicObject).field_0x2bc + 0x14))
                    (param_1,param_2,param_3,param_4);
  return uVar3;
}



void __thiscall Entity::meth_0x54b220(Entity *this,int param_1)

{
  int *piVar1;
  Map *this_00;
  int *piVar2;
  
  if (param_1 != 0) {
    if (DAT_0070bd98 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    this_00 = (Map *)(**(code **)(*piVar2 + 0x54))(param_1);
    if (this_00 != (Map *)0x0) {
      piVar2 = (int *)(this->DynamicObject).mbr_0x33c;
      piVar1 = (int *)*piVar2;
      while (piVar1 != piVar2) {
        piVar2 = Map::GetOctree(this_00);
        meth_0x568140((Entity *)piVar1[5],piVar2);
        cls_0x41d550::meth_0x56a0a0((cls_0x41d550 *)&stack0x00000000);
        piVar2 = (int *)(this->DynamicObject).mbr_0x33c;
      }
      piVar2 = *(int **)&(this->DynamicObject).field_0x354;
      piVar1 = (int *)*piVar2;
      while (piVar1 != piVar2) {
        piVar2 = Map::GetOctree(this_00);
        meth_0x568140((Entity *)piVar1[5],piVar2);
        cls_0x41d550::meth_0x56a0a0((cls_0x41d550 *)&stack0x00000000);
        piVar2 = *(int **)&(this->DynamicObject).field_0x354;
      }
    }
  }
  return;
}



void __thiscall Entity::meth_0x54b2d0(Entity *this)

{
  char cVar1;
  int *piVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  cls_0x41d550 local_4;
  
  piVar2 = (int *)(this->DynamicObject).mbr_0x33c;
  local_4.mbr_0x0 = *piVar2;
  if ((int *)local_4.mbr_0x0 != piVar2) {
    do {
      meth_0x568220(*(Entity **)(local_4.mbr_0x0 + 0x14));
      cls_0x41d550::meth_0x56a0a0(&local_4);
    } while (local_4.mbr_0x0 != (this->DynamicObject).mbr_0x33c);
  }
  ppiVar3 = *(int ***)&(this->DynamicObject).field_0x354;
  ppiVar5 = (int **)*ppiVar3;
  if (ppiVar5 != ppiVar3) {
    do {
      meth_0x568220((Entity *)ppiVar5[5]);
      if (*(char *)((int)ppiVar5 + 0x29) == '\0') {
        ppiVar3 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar3 + 0x29) == '\0') {
          cVar1 = *(char *)((int)*ppiVar3 + 0x29);
          ppiVar5 = ppiVar3;
          ppiVar3 = (int **)*ppiVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x29);
            ppiVar5 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x29);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar3 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x29);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar3 = ppiVar5;
          }
        }
      }
    } while (ppiVar5 != *(int ***)&(this->DynamicObject).field_0x354);
  }
  return;
}



void __thiscall Entity::virt_meth_0x54b4e0(Entity *this,undefined4 param_1)

{
  int *piVar1;
  cls_0x41d550 local_4;
  
  if ((*(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x104) == 0) &&
     (piVar1 = (int *)(this->DynamicObject).mbr_0x33c, local_4.mbr_0x0 = *piVar1,
     (int *)local_4.mbr_0x0 != piVar1)) {
    do {
      if (*(cls_0x48d850 **)(local_4.mbr_0x0 + 0x20) != (cls_0x48d850 *)0x0) {
        cls_0x48d850::meth_0x48d850(*(cls_0x48d850 **)(local_4.mbr_0x0 + 0x20),param_1);
      }
      cls_0x41d550::meth_0x56a0a0(&local_4);
    } while (local_4.mbr_0x0 != (this->DynamicObject).mbr_0x33c);
  }
  return;
}



void __thiscall Entity::virt_meth_0x54b540(Entity *this,char param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = param_1;
  piVar1 = (int *)(this->DynamicObject).mbr_0x33c;
  (this->DynamicObject).field_0x388 = param_1;
  _param_1 = *piVar1;
  if ((int *)_param_1 != piVar1) {
    do {
      if (*(int *)(_param_1 + 0x14) != 0) {
        *(bool *)(*(int *)(_param_1 + 0x14) + 0x170) = cVar2 != '\0';
      }
      cls_0x41d550::meth_0x56a0a0((cls_0x41d550 *)&param_1);
    } while (_param_1 != (this->DynamicObject).mbr_0x33c);
  }
  return;
}



void __thiscall Entity::virt_meth_0x54bba0(Entity *this,int param_1)

{
  int **ppiVar1;
  ModelInstance *this_00;
  bool bVar2;
  int iVar3;
  Map *this_01;
  int iVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 extraout_EDX_01;
  int *piVar7;
  int unaff_retaddr;
  
  if (param_1 == 0) {
    meth_0x568220(this);
    iVar3 = *(int *)&(this->DynamicObject).field_0x1ec;
    if (iVar3 != 0) {
      piVar7 = DAT_0070bd98;
      if (DAT_0070bd98 != (int *)0x0) {
        piVar7 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
      }
      iVar3 = (**(code **)(*piVar7 + 0x54))(iVar3);
      bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
      uVar6 = extraout_EDX;
      if (bVar2) {
        (*(this->DynamicObject).vftptr_0x0[0x1d].virt_meth_0x568400_0)
                  (&this->DynamicObject,(byte)*(undefined4 *)(iVar3 + 0x88));
        uVar6 = extraout_EDX_00;
      }
      ppiVar1 = *(int ***)&(this->DynamicObject).field_0x2f8;
      if (ppiVar1 == (int **)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = *ppiVar1;
      }
      if (piVar7 != *(int **)&(this->DynamicObject).field_0x2f8) {
        do {
          iVar4 = piVar7[2];
          FUN_0056e750(iVar3,(char)uVar6,(char)iVar4);
          *(undefined4 *)(iVar4 + 0x2c) = 0;
          piVar7 = (int *)*piVar7;
          uVar6 = extraout_EDX_01;
        } while (piVar7 != (int *)*(int *)&(this->DynamicObject).field_0x2f8);
      }
    }
    meth_0x54b2d0(this);
  }
  if (*(int *)&(this->DynamicObject).field_0x1e4 != 0) {
    iVar3 = *(int *)&(this->DynamicObject).field_0x1ec;
    if (iVar3 != 0) {
      if (DAT_0070bd98 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
      }
      iVar3 = (**(code **)(*piVar7 + 0x54))(iVar3);
      *(int *)(iVar3 + 0x118) = *(int *)(iVar3 + 0x118) + -1;
    }
    if (param_1 != 0) {
      if (DAT_0070bd98 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
      }
      iVar3 = (**(code **)(*piVar7 + 0x54))(param_1);
      *(int *)(iVar3 + 0x118) = *(int *)(iVar3 + 0x118) + 1;
    }
  }
  *(int *)&(this->DynamicObject).field_0x1ec = param_1;
  if (param_1 != 0) {
    if (DAT_0070bd98 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
    }
    iVar3 = param_1;
    this_01 = (Map *)(**(code **)(*piVar7 + 0x54))();
    if (((this->DynamicObject).field_0x178 == '\x01') &&
       ((this_00 = *(ModelInstance **)&(this->DynamicObject).field_0x160,
        this_00 == (ModelInstance *)0x0 ||
        (iVar4 = ModelInstance::meth_0x563930(this_00), (char)iVar4 == '\0')))) {
      meth_0x54adc0(this);
    }
    if (*(int *)&(this->DynamicObject).field_0x2dc == 0) {
      piVar7 = Map::GetOctree(this_01);
      meth_0x568140(this,piVar7);
      bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
      if (bVar2) {
        (*(this->DynamicObject).vftptr_0x0[0x1c].virt_meth_0x568400_0)
                  (&this->DynamicObject,(byte)this_01->mbr_0x88);
      }
      meth_0x54b220(this,param_1);
    }
    ppiVar1 = *(int ***)&(this->DynamicObject).field_0x2f8;
    if (ppiVar1 == (int **)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *ppiVar1;
    }
    if (piVar7 != *(int **)&(this->DynamicObject).field_0x2f8) {
      do {
        iVar4 = piVar7[2];
        if (*(int *)(iVar4 + 0x2c) != unaff_retaddr) {
          Map::meth_0x573230(this_01,(char)iVar4,(char)iVar3);
          *(int *)(iVar4 + 0x2c) = unaff_retaddr;
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)*(int *)&(this->DynamicObject).field_0x2f8);
    }
  }
  uVar5 = ~*(uint *)&(this->DynamicObject).field_0x390;
  *(uint *)&(this->DynamicObject).field_0x390 = uVar5;
  *(uint *)&(this->DynamicObject).field_0x38c = uVar5;
  return;
}



void __thiscall Entity::meth_0x54be70(Entity *this)

{
  int **ppiVar1;
  undefined *this_00;
  Entity *local_4;
  
  ppiVar1 = *(int ***)&(this->DynamicObject).field_0x330;
  this_00 = &(this->DynamicObject).field_0x32c;
  local_4 = this;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60((Interface *)this_00,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)this_00,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



void __thiscall Entity::virt_meth_0x54beb0(Entity *this)

{
  (this->DynamicObject).field_0x3a2 = 0;
  meth_0x54be70(this);
  return;
}



void __thiscall Entity::meth_0x54bf00(Entity *this)

{
  Entity *local_4;
  
  if ((this->DynamicObject).field_0x1e8 != '\0') {
    (this->DynamicObject).field_0x1e8 = 0;
    local_4 = this;
    cls_0x401b00::meth_0x40e780((cls_0x401b00 *)&DAT_0070be20,(int **)&local_4);
    DAT_0070bde8 = 1;
  }
  return;
}



void __thiscall Entity::meth_0x54c440(Entity *this)

{
  undefined *this_00;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  undefined4 unaff_EDI;
  undefined *puVar8;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  bVar7 = (byte)unaff_EDI;
  this_00 = &(this->DynamicObject).field_0x304;
  iVar6 = *(int *)&(this->DynamicObject).field_0x310;
  if (iVar6 != *(int *)&(this->DynamicObject).field_0x314 + iVar6) {
    uVar3 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
    iVar2 = uVar3 * -4;
    uVar4 = *(uint *)&(this->DynamicObject).field_0x30c;
    if (uVar4 <= uVar3) {
      uVar3 = uVar3 - uVar4;
    }
    (**(code **)(**(int **)(*(int *)(*(int *)&(this->DynamicObject).field_0x308 + uVar3 * 4) +
                           (iVar6 + iVar2) * 4) + 8))();
    puVar8 = this_00;
    while( true ) {
      bVar7 = (byte)unaff_EDI;
      if ((puVar8 == this_00) &&
         (iVar6 == *(int *)&(this->DynamicObject).field_0x314 +
                   *(int *)&(this->DynamicObject).field_0x310)) break;
      uVar4 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
      iVar2 = uVar4 * -4;
      if (*(uint *)(puVar8 + 8) <= uVar4) {
        uVar4 = uVar4 - *(uint *)(puVar8 + 8);
      }
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(puVar8 + 4) + uVar4 * 4) + (iVar6 + iVar2) * 4);
      iStack_8 = iVar6;
      cls_0x54b5c0::meth_0x54b5c0
                ((cls_0x54b5c0 *)this_00,&iStack_10,iVar6,(int)puVar8,iVar6 + 1,(int)puVar8);
      puVar8 = puStack_c;
      iVar6 = iStack_10;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  piVar5 = (*(this->DynamicObject).vftptr_0x0[0x1b].virt_meth_0x568400_0)
                     (&this->DynamicObject,bVar7);
  if ((char)piVar5 == '\0') {
    meth_0x54bf00(this);
  }
  return;
}



void __thiscall Entity::meth_0x54c530(Entity *this)

{
  int **ppiVar1;
  undefined *this_00;
  Entity *local_4;
  
  ppiVar1 = *(int ***)&(this->DynamicObject).field_0x324;
  this_00 = &(this->DynamicObject).field_0x320;
  local_4 = this;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60((Interface *)this_00,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)this_00,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



void __thiscall Entity::virt_meth_0x54c570(Entity *this,int param_1)

{
  undefined *puVar1;
  GameActionEquip *this_00;
  int **ppiVar2;
  char cVar3;
  uint uVar4;
  Action *pAVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  dword *pdVar11;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  dword dVar12;
  undefined4 unaff_EDI;
  int *piVar13;
  char unaff_retaddr;
  char *pcVar14;
  undefined4 uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined auStack_34 [4];
  int iStack_30;
  undefined4 uStack_2c;
  dword dStack_28;
  dword *pdStack_24;
  dword dStack_20;
  int aiStack_14 [5];
  
  if (DAT_0070bd98 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  iStack_30 = (**(code **)(*piVar8 + 0x98))();
  dVar12 = (this->DynamicObject).mbr_0x2ec;
  pdVar11 = &(this->DynamicObject).mbr_0x2e0;
  while ((pdVar11 != &(this->DynamicObject).mbr_0x2e0 ||
         (dVar12 != (this->DynamicObject).mbr_0x2f0 + (this->DynamicObject).mbr_0x2ec))) {
    uVar4 = (int)(dVar12 + ((int)dVar12 >> 0x1f & 3U)) >> 2;
    iVar6 = uVar4 * -4;
    if (pdVar11[2] <= uVar4) {
      uVar4 = uVar4 - pdVar11[2];
    }
    this_00 = *(GameActionEquip **)(*(int *)(pdVar11[1] + uVar4 * 4) + (dVar12 + iVar6) * 4);
    GameActionEquip::meth_0x55afb0(this_00);
    pAVar5 = (*((this_00->ActionEquip).Action.vftptr_0x0)->virt_deldtor_0x4010e0_0)(this_00);
    if ((char)pAVar5 == '\0') {
      dVar12 = dVar12 + 1;
    }
    else {
      dStack_20 = dVar12;
      cls_0x54b5c0::meth_0x54b5c0
                ((cls_0x54b5c0 *)&(this->DynamicObject).mbr_0x2e0,(int *)&dStack_28,dVar12,
                 (int)pdVar11,dVar12 + 1,(int)pdVar11);
      pdVar11 = pdStack_24;
      dVar12 = dStack_28;
      GameActionEquip::meth_0x55a570(this_00);
      (this->DynamicObject).mbr_0x171 = 1;
    }
  }
  ppiVar2 = (int **)(this->DynamicObject).mbr_0x37c;
  if (ppiVar2 == (int **)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *ppiVar2;
  }
  if (piVar8 != (int *)(this->DynamicObject).mbr_0x37c) {
    iVar6 = piVar8[2];
    *(int *)&(this->DynamicObject).field_0x384 = iVar6;
    RunScript(this,"OnMessage",auStack_34,2,*(undefined4 *)(iVar6 + 4));
    if (piVar8 != (int *)(this->DynamicObject).mbr_0x37c) {
      *(int *)piVar8[1] = *piVar8;
      *(int *)(*piVar8 + 4) = piVar8[1];
                    /* WARNING: Subroutine does not return */
      _free(piVar8);
    }
    iVar6 = *(int *)&(this->DynamicObject).field_0x384;
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar6 + 4));
    }
    *(undefined4 *)&(this->DynamicObject).field_0x384 = 0;
  }
  iVar6 = iStack_30;
  if (*(char *)(*(int *)(DAT_0070bd90 + 0x18) + 0x70e4) != '\0') {
    if (iStack_30 == 0) {
      uVar15 = 1;
      iStack_30 = param_1;
      pcVar14 = "OnUpdate";
    }
    else {
      iStack_30 = param_1;
      if (DAT_0070bd98 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
      }
      uStack_2c = (**(code **)(*piVar8 + 0x9c))();
      if (iVar6 == 1) {
        uVar15 = 2;
        pcVar14 = "OnCutsceneStart";
      }
      else if (iVar6 == 2) {
        uVar15 = 2;
        pcVar14 = "OnCutscene";
      }
      else {
        if (iVar6 != 3) goto LAB_0054c77c;
        uVar15 = 2;
        pcVar14 = "OnCutsceneEnd";
      }
    }
    RunScript(this,pcVar14,auStack_34,uVar15,&iStack_30);
  }
LAB_0054c77c:
  dVar12 = *(dword *)&(this->DynamicObject).field_0x310;
  pdVar11 = (dword *)&(this->DynamicObject).field_0x304;
  while( true ) {
    bVar18 = (byte)unaff_EBP;
    bVar17 = (byte)unaff_ESI;
    bVar16 = (byte)unaff_EDI;
    piVar8 = (int *)0x0;
    if ((pdVar11 == (dword *)&(this->DynamicObject).field_0x304) &&
       (dVar12 == *(int *)&(this->DynamicObject).field_0x314 +
                  *(int *)&(this->DynamicObject).field_0x310)) goto LAB_0054c83a;
    uVar4 = (int)(dVar12 + ((int)dVar12 >> 0x1f & 3U)) >> 2;
    iVar6 = uVar4 * -4;
    if (pdVar11[2] <= uVar4) {
      uVar4 = uVar4 - pdVar11[2];
    }
    piVar8 = *(int **)(*(int *)(pdVar11[1] + uVar4 * 4) + (dVar12 + iVar6) * 4);
    iVar6 = FUN_0055a1c0(piVar8,param_1,*(undefined4 *)&(this->DynamicObject).field_0x174);
    puVar1 = &(this->DynamicObject).field_0x174;
    *(int *)puVar1 = *(int *)puVar1 - iVar6;
    cVar3 = (**(code **)(*piVar8 + 4))();
    bVar18 = (byte)unaff_EBP;
    bVar17 = (byte)unaff_ESI;
    bVar16 = (byte)unaff_EDI;
    if (cVar3 == '\0') break;
    dStack_20 = dVar12;
    cls_0x54b5c0::meth_0x54b5c0
              ((cls_0x54b5c0 *)&(this->DynamicObject).field_0x304,(int *)&dStack_28,dVar12,
               (int)pdVar11,dVar12 + 1,(int)pdVar11);
    pdVar11 = pdStack_24;
    dVar12 = dStack_28;
    (**(code **)*piVar8)(1);
  }
  if (*(uint *)&(this->DynamicObject).field_0x174 < (uint)piVar8[3]) {
    (this->DynamicObject).field_0x319 = 1;
  }
LAB_0054c83a:
  if ((((this->DynamicObject).field_0x319 == '\0') && (piVar8 == (int *)0x0)) &&
     (*(int *)&(this->DynamicObject).field_0x174 != 0)) {
    if ((this->DynamicObject).field_0x318 == '\0') {
      (this->DynamicObject).field_0x318 = 1;
    }
    else {
      (this->DynamicObject).field_0x318 = 0;
      (this->DynamicObject).field_0x319 = 1;
    }
  }
  if ((this->DynamicObject).field_0x318 == '\0') {
    piVar8 = (*(this->DynamicObject).vftptr_0x0[0x1b].virt_meth_0x568400_0)
                       (&this->DynamicObject,bVar16);
    if ((char)piVar8 == '\0') {
      meth_0x54bf00(this);
    }
  }
  if ((this->DynamicObject).field_0x188 == '\0') {
    if (DAT_0070bd98 == 0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10 = (undefined4 *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    uVar4 = *(uint *)&(this->DynamicObject).field_0x184;
    uVar7 = (**(code **)*puVar10)();
    if (uVar4 <= uVar7) {
      uVar7 = *(uint *)&(this->DynamicObject).field_0x180;
      if ((uVar7 != 0) && (uVar7 < uVar4)) {
        meth_0x549fc0(this,uVar4 - uVar7);
      }
      if (*(int *)&(this->DynamicObject).field_0x1b8 == 0) {
        if ((this->DynamicObject).field_0x295 == '\0') {
          piVar8 = (*(this->DynamicObject).vftptr_0x0[0x14].virt_meth_0x568400_0)
                             (&this->DynamicObject,bVar17);
          if ((char)piVar8 == '\0') {
            piVar8 = (*(this->DynamicObject).vftptr_0x0[0x16].virt_meth_0x568400_0)
                               (&this->DynamicObject,bVar18);
            if (piVar8 != (int *)0x0) {
              meth_0x548d80(this,(int)piVar8,0);
            }
          }
        }
      }
      else {
        uVar4 = *(uint *)&(this->DynamicObject).field_0x1b4;
        uVar7 = *(uint *)&(this->DynamicObject).field_0x1b0;
        if (uVar7 <= uVar4) {
          uVar4 = uVar4 - uVar7;
        }
        piVar8 = *(int **)(*(int *)&(this->DynamicObject).field_0x1ac + uVar4 * 4);
        piVar13 = aiStack_14;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar13 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar13 = piVar13 + 1;
        }
        cls_0x54b590::meth_0x54b590((cls_0x54b590 *)&(this->DynamicObject).field_0x1a8);
        meth_0x548d80(this,aiStack_14[0],aiStack_14[1]);
        if (unaff_retaddr != '\0') {
          (this->DynamicObject).field_0x1bc = 0;
          return;
        }
      }
    }
  }
  else if (*(int *)&(this->DynamicObject).field_0x1b8 != 0) {
    uVar4 = *(uint *)&(this->DynamicObject).field_0x1b4;
    uVar7 = *(uint *)&(this->DynamicObject).field_0x1b0;
    if (uVar7 <= uVar4) {
      uVar4 = uVar4 - uVar7;
    }
    iVar6 = *(int *)&(this->DynamicObject).field_0x1b8;
    piVar8 = *(int **)(*(int *)&(this->DynamicObject).field_0x1ac + uVar4 * 4);
    piVar13 = aiStack_14;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar13 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar13 = piVar13 + 1;
    }
    if (iVar6 != 0) {
      uVar4 = *(int *)&(this->DynamicObject).field_0x1b4 + 1;
      *(uint *)&(this->DynamicObject).field_0x1b4 = uVar4;
      if (*(uint *)&(this->DynamicObject).field_0x1b0 <= uVar4) {
        *(undefined4 *)&(this->DynamicObject).field_0x1b4 = 0;
      }
      iVar6 = iVar6 + -1;
      *(int *)&(this->DynamicObject).field_0x1b8 = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)&(this->DynamicObject).field_0x1b4 = 0;
      }
    }
    meth_0x548d80(this,aiStack_14[0],aiStack_14[1]);
    if (unaff_retaddr != '\0') {
      (this->DynamicObject).field_0x1bc = 0;
      return;
    }
  }
  return;
}



int * __thiscall Entity::meth_0x54ca40(Entity *this,undefined param_1,undefined4 param_2)

{
  byte bVar1;
  ModelInstance *this_00;
  dword in_stack_ffffffd4;
  uint in_stack_ffffffd8;
  void *pvVar2;
  
  this_00 = (ModelInstance *)0x0;
  if (*(int *)&(this->DynamicObject).field_0x22c != 0) {
    if (*(uint *)&(this->DynamicObject).field_0x24c < 0x10) {
      bVar1 = (char)this + 0x38;
    }
    else {
      bVar1 = (byte)*(undefined4 *)&(this->DynamicObject).field_0x238;
    }
    (*(this->DynamicObject).vftptr_0x0[0x13].virt_meth_0x568400_0)(&this->DynamicObject,bVar1);
    pvVar2 = (void *)(in_stack_ffffffd8 & 0xffffff00);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&stack0xffffffd4,(_String_base *)&(this->DynamicObject).field_0x218,0
               ,0xffffffff);
    this_00 = FUN_00585a50(DAT_0070c528,in_stack_ffffffd4,pvVar2);
    if (this_00 != (ModelInstance *)0x0) {
      FUN_00563f90(this_00,(uint)(byte)(this->DynamicObject).field_0x179);
    }
  }
  return (int *)this_00;
}



void __thiscall Entity::meth_0x54dc50(Entity *this,undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  _String_base *p_Var6;
  int *piVar7;
  undefined4 unaff_EDI;
  undefined local_28 [4];
  void *local_24;
  void *local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637b48;
  local_c = ExceptionList;
  puVar4 = param_1;
  do {
    cVar3 = *(char *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (cVar3 != '\0');
  puVar1 = &(this->DynamicObject).field_0x218;
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)puVar1,(char *)param_1,(int)puVar4 - ((int)param_1 + 1));
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,0x2e);
  uVar5 = cls_0x4d8d70::meth_0x458a20((cls_0x4d8d70 *)puVar1,(char *)&param_1,0xffffffff,1);
  if (uVar5 != 0xffffffff) {
    p_Var6 = (_String_base *)cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)puVar1,local_28,0,uVar5);
    local_4 = 0;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)puVar1,p_Var6,0,0xffffffff);
    local_4 = 0xffffffff;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = (void *)0x0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
  }
  piVar7 = *(int **)&(this->DynamicObject).field_0x160;
  if (piVar7 != (int *)0x0) {
    FUN_005853e0(DAT_0070c528,piVar7);
    *(undefined4 *)&(this->DynamicObject).field_0x160 = 0;
  }
  piVar7 = meth_0x54ca40(this,(char)param_2,unaff_EDI);
  *(int **)&(this->DynamicObject).field_0x160 = piVar7;
  if (piVar7 != (int *)0x0) {
    puVar1 = &(this->DynamicObject).field_0x3b0;
    puVar2 = &(this->DynamicObject).field_0x3a4;
    (**(code **)(*piVar7 + 8))(puVar2,puVar1);
    (this->DynamicObject).mbr_0x10 = *(dword *)puVar2;
    (this->DynamicObject).mbr_0x14 = *(dword *)&(this->DynamicObject).field_0x3a8;
    (this->DynamicObject).mbr_0x18 = *(dword *)&(this->DynamicObject).field_0x3ac;
    (this->DynamicObject).mbr_0x1c = *(dword *)puVar1;
    (this->DynamicObject).mbr_0x20 = *(dword *)&(this->DynamicObject).field_0x3b4;
    (this->DynamicObject).mbr_0x24 = *(dword *)&(this->DynamicObject).field_0x3b8;
    WaterTileModelInstance::meth_0x563e30
              (*(WaterTileModelInstance **)&(this->DynamicObject).field_0x160,
               (this->DynamicObject).mbr_0x4,(this->DynamicObject).mbr_0x8,
               (this->DynamicObject).mbr_0xc);
    WaterTileModelInstance::meth_0x564050
              (*(WaterTileModelInstance **)&(this->DynamicObject).field_0x160,
               (float *)&(this->DynamicObject).field_0x1f0);
    ExceptionList = local_14;
    return;
  }
  (this->DynamicObject).mbr_0x10 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x3b4 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x3b8 = 0;
  (this->DynamicObject).mbr_0x14 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x3a4 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x3a8 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x3ac = 0;
  (this->DynamicObject).mbr_0x18 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x3b0 = 0;
  (this->DynamicObject).mbr_0x1c = 0;
  (this->DynamicObject).mbr_0x20 = *(dword *)&(this->DynamicObject).field_0x3b4;
  (this->DynamicObject).mbr_0x24 = *(dword *)&(this->DynamicObject).field_0x3b8;
  ExceptionList = local_c;
  return;
}



void __thiscall Entity::virt_meth_0x54dea0(Entity *this)

{
  int *piVar1;
  undefined4 *puVar2;
  Map *this_00;
  byte unaff_SI;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((this->DynamicObject).field_0x3a0 == '\0') {
    return;
  }
  piVar1 = (*(this->DynamicObject).vftptr_0x0[7].virt_meth_0x568400_0)
                     (&this->DynamicObject,unaff_SI);
  if ((char)piVar1 == '\0') {
    return;
  }
  if (*(int *)&(this->DynamicObject).field_0x160 == 0) {
    if ((this->DynamicObject).field_0x164 == '\0') {
      if (*(uint *)&(this->DynamicObject).field_0x230 < 0x10) {
        puVar2 = (undefined4 *)&(this->DynamicObject).field_0x21c;
      }
      else {
        puVar2 = *(undefined4 **)&(this->DynamicObject).field_0x21c;
      }
      meth_0x54dc50(this,puVar2,0);
      bVar4 = (byte)puVar2;
      (this->DynamicObject).field_0x164 = 1;
      if (*(int *)&(this->DynamicObject).field_0x160 == 0) {
        meth_0x568220(this);
      }
      else {
        iVar5 = *(int *)&(this->DynamicObject).field_0x1ec;
        if (iVar5 == 0) {
          this_00 = (Map *)0x0;
        }
        else {
          piVar1 = (int *)FUN_00401130();
          this_00 = (Map *)(**(code **)(*piVar1 + 0x54))();
          bVar4 = (byte)iVar5;
        }
        meth_0x549d80(this);
        if (this_00 != (Map *)0x0) {
          piVar1 = Map::GetOctree(this_00);
          meth_0x568140(this,piVar1);
        }
        (*(this->DynamicObject).vftptr_0x0[0x38].virt_meth_0x568400_0)(&this->DynamicObject,bVar4);
      }
    }
    if (*(int *)&(this->DynamicObject).field_0x160 == 0) goto LAB_0054df9c;
  }
  FUN_0056af50();
  if ((*(int *)&(this->DynamicObject).field_0x1e0 == 5) &&
     (*(int *)&(this->DynamicObject).field_0x368 != 1)) {
    uVar7 = 0xffff0000;
    uVar6 = 0x3d6147ae;
    uVar3 = 1;
  }
  else {
    uVar7 = 0xff00ffff;
    uVar6 = 0x3d4ccccd;
    uVar3 = 0;
  }
  FUN_00563d30(*(void **)&(this->DynamicObject).field_0x160,(int *)0x0,uVar3,uVar6,uVar7);
LAB_0054df9c:
  DialogueManager::CommandAttackModeSelect((DialogueManager *)this);
  return;
}



void __thiscall Entity::UnpackState(Entity *this,int param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  byte unaff_SI;
  uint unaff_retaddr;
  World__vftable_691a1c *local_124;
  char *local_120;
  World__vftable_691a1c *local_11c;
  World__vftable_691a1c *local_118;
  World__vftable_691a1c *local_114;
  World__vftable_691a1c *local_110;
  World__vftable_691a1c *local_10c;
  World__vftable_691a1c *local_108;
  undefined4 local_104;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->DynamicObject).field_0x1e0 != 0) {
    local_124 = (World__vftable_691a1c *)&Exception__vftable_64787c_0064787c;
    local_120 = "UnpackState() method may only be called on invalid entities.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_124,&DAT_006d8834);
  }
  *(int *)&(this->DynamicObject).field_0x1dc = param_1;
  GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&local_104);
  puVar3 = &local_104;
  do {
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x1c0,(char *)&local_104,
             (int)puVar3 - ((int)&local_104 + 1));
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_124);
  *(World__vftable_691a1c **)&(this->DynamicObject).field_0x1e0 = local_124;
  GameActionEquip::meth_0x45e500
            ((GameActionEquip *)param_2,(undefined4 *)&(this->DynamicObject).field_0x1e4);
  GameActionEquip::meth_0x45e500
            ((GameActionEquip *)param_2,(undefined4 *)&(this->DynamicObject).field_0x1ec);
  local_11c = (World__vftable_691a1c *)0x0;
  local_118 = (World__vftable_691a1c *)0x0;
  local_114 = (World__vftable_691a1c *)0x0;
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_124);
  local_11c = local_124;
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_124);
  local_118 = local_124;
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_124);
  local_114 = local_124;
  local_110 = (World__vftable_691a1c *)0x0;
  local_10c = (World__vftable_691a1c *)0x0;
  local_108 = (World__vftable_691a1c *)0x0;
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_124);
  local_110 = local_124;
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_124);
  local_10c = local_124;
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_124);
  local_108 = local_124;
  GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&local_104);
  puVar3 = &local_104;
  do {
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x218,(char *)&local_104,
             (int)puVar3 - ((int)&local_104 + 1));
  GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&local_104);
  puVar3 = &local_104;
  do {
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x234,(char *)&local_104,
             (int)puVar3 - ((int)&local_104 + 1));
  GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&local_104);
  puVar3 = &local_104;
  do {
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x250,(char *)&local_104,
             (int)puVar3 - ((int)&local_104 + 1));
  GameActionEquip::meth_0x45e500
            ((GameActionEquip *)param_2,(undefined4 *)&(this->DynamicObject).field_0x28c);
  GameActionEquip::meth_0x45e500
            ((GameActionEquip *)param_2,(undefined4 *)&(this->DynamicObject).field_0x290);
  GameActionEquip::meth_0x45e500
            ((GameActionEquip *)param_2,(undefined4 *)&(this->DynamicObject).field_0x180);
  GameActionEquip::meth_0x45e500
            ((GameActionEquip *)param_2,(undefined4 *)&(this->DynamicObject).field_0x184);
  GameActionEquip::meth_0x45e460((GameActionEquip *)param_2,&(this->DynamicObject).field_0x296);
  GameActionEquip::meth_0x45e460((GameActionEquip *)param_2,&(this->DynamicObject).field_0x297);
  GameActionEquip::meth_0x45e500
            ((GameActionEquip *)param_2,(undefined4 *)&(this->DynamicObject).field_0x298);
  GameActionEquip::meth_0x45e500
            ((GameActionEquip *)param_2,(undefined4 *)&(this->DynamicObject).field_0x29c);
  iVar2 = *(int *)((int)param_2 + 0xc);
  if (*(int *)((int)param_2 + 0x10) == iVar2) {
    World::~World((World *)&local_124);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_124,&DAT_006ddf94);
  }
  cVar1 = *(char *)(iVar2 + *(int *)((int)param_2 + 0x14));
  *(int *)((int)param_2 + 0xc) = iVar2 + 1;
  if (cVar1 == '\x01') {
    if (*(int *)&(this->DynamicObject).field_0x168 == 0) {
      piVar4 = (*(this->DynamicObject).vftptr_0x0[0x2c].virt_meth_0x568400_0)
                         (&this->DynamicObject,unaff_SI);
      *(int **)&(this->DynamicObject).field_0x168 = piVar4;
    }
    (**(code **)(**(int **)&(this->DynamicObject).field_0x168 + 0x24))(param_2);
  }
  if (*(uint *)&(this->DynamicObject).field_0x230 < 0x10) {
    puVar3 = (undefined4 *)&(this->DynamicObject).field_0x21c;
  }
  else {
    puVar3 = *(undefined4 **)&(this->DynamicObject).field_0x21c;
  }
  meth_0x54dc50(this,puVar3,0);
  meth_0x54a8a0(this,(float *)&local_11c);
  net::critical_section::meth_0x549fe0((critical_section *)this,(float *)&local_110);
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall Entity::meth_0x54ef30(Entity *this)

{
  int iVar1;
  int iVar2;
  Entity *local_4;
  
  if ((this->DynamicObject).field_0x1e8 == '\0') {
    (this->DynamicObject).field_0x1e8 = 1;
    iVar1 = DAT_0070be24;
    local_4 = this;
    iVar2 = FUN_00433760(DAT_0070be24,*(undefined4 *)(DAT_0070be24 + 4),&local_4);
    cls_0x401b00::meth_0x401dd0((cls_0x401b00 *)&DAT_0070be20,1);
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
    DAT_0070bde8 = 1;
  }
  return;
}



undefined4 __thiscall Entity::meth_0x54f150(Entity *this,uint param_1,int **param_2)

{
  VFX_VEGInstance *this_00;
  uint uVar1;
  int **ppiVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int **ppiVar6;
  int *piVar7;
  int **local_8;
  GameActionEquip *local_4;
  
  uVar1 = param_1;
  if ((param_1 == 0) || (uVar1 = *(uint *)(param_1 + 0x164), uVar1 == 0)) {
LAB_0054f264:
    return uVar1 & 0xffffff00;
  }
  local_4 = (GameActionEquip *)&(this->DynamicObject).field_0x338;
  param_1 = uVar1;
  uVar1 = GameActionEquip::meth_0x5691d0(local_4,(int *)&local_8,&param_1);
  if (local_8 == (int **)(this->DynamicObject).mbr_0x33c) goto LAB_0054f264;
  ppiVar6 = local_8 + 4;
  if ((char)param_2 == '\0') {
    if ((VFX_VEGInstance *)local_8[8] != (VFX_VEGInstance *)0x0) {
      VFX_VEGInstance::meth_0x48dcc0((VFX_VEGInstance *)local_8[8]);
      ppiVar2 = (int **)GameActionEquip::meth_0x54ea80
                                  ((GameActionEquip *)&(this->DynamicObject).field_0x350,local_8 + 8
                                  );
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppiVar2 = *ppiVar6;
        ppiVar6 = ppiVar6 + 1;
        ppiVar2 = ppiVar2 + 1;
      }
      goto LAB_0054f249;
    }
  }
  if (local_8[5] != (int *)0x0) {
    this_00 = (VFX_VEGInstance *)local_8[5][0x59];
    if (this_00 != (VFX_VEGInstance *)0x0) {
      VFX_VEGInstance::meth_0x48dbe0(this_00);
    }
    if ((*(char *)(local_8 + 6) != '\0') && (local_8[5] != (int *)0x0)) {
      (**(code **)*local_8[5])(1);
    }
  }
  piVar7 = local_8[8];
  if ((piVar7 != (int *)0x0) && (*(char *)(local_8 + 9) != '\0')) {
    puVar3 = FUN_004e1de0();
    FUN_004e20f0(puVar3,piVar7);
  }
  if (*ppiVar6 != (int *)0x0) {
    puVar3 = &(this->DynamicObject).field_0x344;
    cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)puVar3,(int *)&param_2,(uint *)ppiVar6);
    if (param_2 != *(int ***)&(this->DynamicObject).field_0x348) {
      cls_0x50dbb0::meth_0x54cda0((cls_0x50dbb0 *)puVar3,&param_2,param_2);
    }
  }
LAB_0054f249:
  uVar4 = GameActionEquip::meth_0x54cad0(local_4,&param_2,local_8);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}



undefined4 __thiscall Entity::meth_0x54f4d0(Entity *this,uint param_1,char param_2)

{
  uint *puVar1;
  dword *this_00;
  Gregorian *pGVar2;
  Entity *pEVar3;
  bool bVar4;
  uint uVar5;
  undefined3 extraout_var;
  dword *pdVar6;
  undefined4 uVar7;
  Entity *local_4;
  
  if (param_1 == 0) {
    return 0;
  }
  this_00 = &(this->DynamicObject).mbr_0x3c0;
  local_4 = this;
  uVar5 = cls_0x4542d0::meth_0x4a2630((cls_0x4542d0 *)this_00,(int *)&local_4,&param_1);
  pEVar3 = local_4;
  if (local_4 == (Entity *)(this->DynamicObject).mbr_0x3c4) {
    return uVar5 & 0xffffff00;
  }
  if (param_2 == '\0') {
    pGVar2 = (Gregorian *)(local_4->DynamicObject).mbr_0x14;
    pdVar6 = &(local_4->DynamicObject).mbr_0x14;
    if (pGVar2 != (Gregorian *)0x0) {
      bVar4 = Gregorian::meth_0x52cc40(pGVar2);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        puVar1 = (uint *)(*pdVar6 + 0x30);
        *puVar1 = *puVar1 & 0xfffffffe;
        pdVar6 = (dword *)FUN_0054eaf0(&(this->DynamicObject).mbr_0x3cc,(int **)pdVar6);
        *pdVar6 = (pEVar3->DynamicObject).mbr_0x10;
        pdVar6[1] = (pEVar3->DynamicObject).mbr_0x14;
        pdVar6[2] = (pEVar3->DynamicObject).mbr_0x18;
        pdVar6[3] = (pEVar3->DynamicObject).mbr_0x1c;
        goto LAB_0054f56d;
      }
    }
  }
  pGVar2 = (Gregorian *)(pEVar3->DynamicObject).mbr_0x14;
  if ((pGVar2 != (Gregorian *)0x0) && (*(char *)&(pEVar3->DynamicObject).mbr_0x18 != '\0')) {
    Gregorian::meth_0x52d100(pGVar2);
                    /* WARNING: Subroutine does not return */
    _free(pGVar2);
  }
LAB_0054f56d:
  uVar7 = cls_0x4542d0::meth_0x54d070((cls_0x4542d0 *)this_00,&param_2,(int **)pEVar3);
  return CONCAT31((int3)((uint)uVar7 >> 8),1);
}



void __thiscall Entity::virt_meth_0x54f6a0(Entity *this,uint *param_1)

{
  int *piVar1;
  cls_0x41d550 cVar2;
  char cVar3;
  undefined4 uVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  uint unaff_retaddr;
  undefined local_a0;
  undefined local_9f;
  undefined local_9e;
  undefined local_9d;
  int local_9c;
  cls_0x41d550 local_98;
  int local_94;
  undefined4 local_90;
  undefined local_8a;
  undefined local_89;
  int local_88;
  undefined local_82;
  undefined local_81;
  undefined4 local_80;
  undefined local_7a;
  undefined local_79;
  undefined local_78 [20];
  int local_64;
  dword local_60;
  dword local_5c;
  undefined local_58 [20];
  dword local_44;
  dword local_40;
  undefined local_3c [4];
  undefined local_38 [40];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4._0_1_ = 0xff;
  local_4._1_3_ = 0xffffff;
  puStack_8 = &LAB_00637958;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_80 = 0x324e4545;
  local_90 = 0;
  local_9c = 0;
  ExceptionList = &local_c;
  local_64 = FUN_004989c0((int *)param_1);
  uVar4 = ResourceSystem::FileStreamWrite(&local_80,4,(int)param_1);
  if (((char)uVar4 != '\0') &&
     (uVar4 = ResourceSystem::FileStreamWrite(&local_90,4,(int)param_1), (char)uVar4 != '\0')) {
    local_78._16_4_ = FUN_004989c0((int *)param_1);
    uVar4 = ResourceSystem::FileStreamWrite(&local_9c,4,(int)param_1);
    if (((char)uVar4 != '\0') &&
       (((uVar4 = FUN_0049c730((uint)&(this->DynamicObject).field_0x218,(int)param_1),
         (char)uVar4 != '\0' &&
         (uVar4 = FUN_0049c730((uint)&(this->DynamicObject).field_0x250,(int)param_1),
         (char)uVar4 != '\0')) &&
        (uVar4 = FUN_0049c730((uint)&(this->DynamicObject).field_0x26c,(int)param_1),
        (char)uVar4 != '\0')))) {
      local_a0 = (this->DynamicObject).field_0x296;
      uVar4 = ResourceSystem::FileStreamWrite(&local_a0,1,(int)param_1);
      if ((char)uVar4 != '\0') {
        local_a0 = (this->DynamicObject).field_0x388;
        uVar4 = ResourceSystem::FileStreamWrite(&local_a0,1,(int)param_1);
        if ((((char)uVar4 != '\0') &&
            (uVar4 = ResourceSystem::FileStreamWrite(&local_82,1,(int)param_1), (char)uVar4 != '\0')
            ) && ((uVar4 = ResourceSystem::FileStreamWrite(&local_89,1,(int)param_1),
                  (char)uVar4 != '\0' &&
                  (uVar4 = ResourceSystem::FileStreamWrite(&local_81,1,(int)param_1),
                  (char)uVar4 != '\0')))) {
          local_78._12_4_ = FUN_004989c0((int *)param_1);
          local_80 = 0x564f4545;
          local_90 = 2;
          uVar4 = ResourceSystem::FileStreamWrite(&local_80,4,(int)param_1);
          if (((char)uVar4 != '\0') &&
             (uVar4 = ResourceSystem::FileStreamWrite(&local_90,4,(int)param_1), (char)uVar4 != '\0'
             )) {
            local_5c = FUN_004989c0((int *)param_1);
            uVar4 = ResourceSystem::FileStreamWrite(&local_9c,4,(int)param_1);
            if ((((char)uVar4 != '\0') &&
                (((uVar4 = FUN_0049c730((uint)&(this->DynamicObject).field_0x1c0,(int)param_1),
                  (char)uVar4 != '\0' &&
                  (uVar4 = ResourceSystem::FileStreamWrite(&local_8a,1,(int)param_1),
                  (char)uVar4 != '\0')) &&
                 (uVar4 = ResourceSystem::FileStreamWrite(&local_79,1,(int)param_1),
                 (char)uVar4 != '\0')))) &&
               (((uVar4 = ResourceSystem::FileStreamWrite(&local_7a,1,(int)param_1),
                 (char)uVar4 != '\0' &&
                 (uVar4 = ResourceSystem::FileStreamWrite
                                    (&(this->DynamicObject).field_0x17c,4,(int)param_1),
                 (char)uVar4 != '\0')) &&
                ((uVar4 = ResourceSystem::FileStreamWrite
                                    (&(this->DynamicObject).field_0x36c,4,(int)param_1),
                 (char)uVar4 != '\0' &&
                 ((uVar4 = FUN_0049c730((uint)&(this->DynamicObject).field_0x1fc,(int)param_1),
                  (char)uVar4 != '\0' &&
                  (uVar4 = FUN_0049c730((uint)&(this->DynamicObject).field_0x2a0,(int)param_1),
                  (char)uVar4 != '\0')))))))) {
              local_60 = *(dword *)&(this->DynamicObject).field_0x2cc;
              uVar4 = ResourceSystem::FileStreamWrite(&local_60,4,(int)param_1);
              if ((char)uVar4 != '\0') {
                piVar1 = *(int **)&(this->DynamicObject).field_0x2c8;
                local_98.mbr_0x0 = *piVar1;
                if ((int *)local_98.mbr_0x0 != piVar1) {
                  do {
                    cVar2.mbr_0x0 = local_98.mbr_0x0;
                    ::cls_0x50db20::cls_0x50db20
                              ((cls_0x50db20 *)local_58,(_String_base *)(local_98.mbr_0x0 + 0xc));
                    local_94 = *(int *)(cVar2.mbr_0x0 + 0x28);
                    local_4._0_1_ = 0;
                    local_4._1_3_ = 0;
                    uVar4 = FUN_0049c730((uint)local_58,(int)param_1);
                    if ((char)uVar4 == '\0') goto LAB_0054fd68;
                    uVar4 = ResourceSystem::FileStreamWrite(&local_94,4,(int)param_1);
                    if ((char)uVar4 == '\0') goto LAB_0054fd68;
                    local_4._0_1_ = 0xff;
                    local_4._1_3_ = 0xffffff;
                    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_58);
                    cls_0x41d550::meth_0x4c8eb0(&local_98);
                  } while (local_98.mbr_0x0 != *(dword *)&(this->DynamicObject).field_0x2c8);
                }
                local_9e = (this->DynamicObject).field_0x179;
                uVar4 = ResourceSystem::FileStreamWrite(&local_9e,1,(int)param_1);
                if ((((char)uVar4 != '\0') &&
                    (uVar4 = ResourceSystem::FileStreamWrite(local_3c,4,(int)param_1),
                    (char)uVar4 != '\0')) &&
                   (uVar4 = FUN_0049c730((uint)&(this->DynamicObject).field_0x234,(int)param_1),
                   (char)uVar4 != '\0')) {
                  local_a0 = (undefined)*(undefined4 *)&(this->DynamicObject).field_0x340;
                  uVar4 = ResourceSystem::FileStreamWrite(&local_a0,1,(int)param_1);
                  if ((char)uVar4 != '\0') {
                    piVar1 = (int *)(this->DynamicObject).mbr_0x33c;
                    local_98.mbr_0x0 = *piVar1;
                    if ((int *)local_98.mbr_0x0 != piVar1) {
                      do {
                        local_40 = 0xf;
                        local_44 = 0;
                        local_58[4] = 0;
                        local_4._0_1_ = 1;
                        local_4._1_3_ = 0;
                        if (*(int *)(local_98.mbr_0x0 + 0x20) != 0) {
                          ::cls_0x50db20::meth_0x401b20
                                    ((cls_0x50db20 *)local_58,
                                     (_String_base *)(*(int *)(local_98.mbr_0x0 + 0x20) + 0x10),0,
                                     0xffffffff);
                        }
                        uVar4 = FUN_0049c730((uint)local_58,(int)param_1);
                        if ((char)uVar4 == '\0') goto LAB_0054fd68;
                        local_4._0_1_ = 0xff;
                        local_4._1_3_ = 0xffffff;
                        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_58);
                        cls_0x41d550::meth_0x56a0a0(&local_98);
                      } while (local_98.mbr_0x0 != (this->DynamicObject).mbr_0x33c);
                    }
                    local_9d = (this->DynamicObject).field_0x178;
                    uVar4 = ResourceSystem::FileStreamWrite(&local_9d,1,(int)param_1);
                    if ((char)uVar4 != '\0') {
                      local_9f = (this->DynamicObject).field_0x17a;
                      uVar4 = ResourceSystem::FileStreamWrite(&local_9f,1,(int)param_1);
                      if ((char)uVar4 != '\0') {
                        piVar1 = *(int **)&(this->DynamicObject).field_0x168;
                        local_88 = 0;
                        cls_0x401b00::cls_0x401b00((cls_0x401b00 *)local_78);
                        local_4._0_1_ = 2;
                        local_4._1_3_ = 0;
                        if (piVar1 != (int *)0x0) {
                          cls_0x401b00::cls_0x401b00((cls_0x401b00 *)local_38);
                          local_4._0_1_ = 3;
                          ppiVar5 = (int **)cls_0x401b00::meth_0x4014f0
                                                      ((cls_0x401b00 *)(piVar1 + 2),&local_98);
                          piVar8 = *ppiVar5;
                          if (piVar8 != (int *)piVar1[3]) {
                            do {
                              local_94 = piVar8[2];
                              cVar3 = (**(code **)(*piVar1 + 0x28))(local_94,local_38);
                              if (cVar3 == '\0') {
                                local_88 = local_88 + 1;
                                cls_0x401b00::meth_0x402b30((cls_0x401b00 *)local_78,&local_94);
                              }
                              piVar8 = (int *)*piVar8;
                            } while (piVar8 != (int *)piVar1[3]);
                          }
                          local_4._0_1_ = 2;
                          GUI::Interface::meth_0x4f6d40((Interface *)local_38);
                        }
                        uVar4 = ResourceSystem::FileStreamWrite(&local_88,4,(int)param_1);
                        if ((char)uVar4 != '\0') {
                          puVar6 = cls_0x401b00::meth_0x4014f0((cls_0x401b00 *)local_78,&local_94);
                          for (puVar6 = (undefined4 *)*puVar6;
                              puVar6 != (undefined4 *)local_78._4_4_; puVar6 = (undefined4 *)*puVar6
                              ) {
                            ::cls_0x50db20::cls_0x50db20
                                      ((cls_0x50db20 *)(local_38 + 0xc),
                                       (_String_base *)(puVar6[2] + 0x18c));
                            local_4._0_1_ = 4;
                            uVar4 = FUN_0049c730((uint)(local_38 + 0xc),(int)param_1);
                            if ((char)uVar4 == '\0') {
                              cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_38 + 0xc));
                              goto LAB_0054fd76;
                            }
                            local_4._0_1_ = 2;
                            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_38 + 0xc));
                          }
                          iVar7 = FUN_004989c0((int *)param_1);
                          local_9c = iVar7 - local_78._12_4_;
                          ResourceSystem::FileStreamSeek(DAT_00707da8,param_1,local_5c,0);
                          uVar4 = ResourceSystem::FileStreamWrite(&local_9c,4,(int)param_1);
                          if ((char)uVar4 != '\0') {
                            local_9c = iVar7 - local_64;
                            ResourceSystem::FileStreamSeek(DAT_00707da8,param_1,local_78._16_4_,0);
                            uVar4 = ResourceSystem::FileStreamWrite(&local_9c,4,(int)param_1);
                            if ((char)uVar4 != '\0') {
                              ResourceSystem::FileStreamSeek(DAT_00707da8,param_1,iVar7,0);
                              GUI::Interface::meth_0x4f6d40((Interface *)local_78);
                              goto LAB_0054fd38;
                            }
                          }
                        }
LAB_0054fd76:
                        GUI::Interface::meth_0x4f6d40((Interface *)local_78);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0054fd38:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
LAB_0054fd68:
  cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_58);
  goto LAB_0054fd38;
}



void __thiscall Entity::virt_meth_0x54fd90(Entity *this,void *param_1)

{
  cls_0x563900 *this_00;
  int iVar1;
  int iVar2;
  void *this_01;
  int iVar3;
  int iVar4;
  
  this_01 = param_1;
  this_00 = *(cls_0x563900 **)&(this->DynamicObject).field_0x160;
  if (this_00 != (cls_0x563900 *)0x0) {
    iVar1 = *(int *)(DAT_0070c528 + 0x1c);
    iVar4 = 1;
    if (1 < iVar1) {
      do {
        param_1 = (void *)cls_0x563900::meth_0x563900(this_00,iVar4);
        if (param_1 != (void *)0x0) {
          iVar2 = *(int *)((int)this_01 + 4);
          iVar3 = FUN_00433760(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
          FUN_00467d80(this_01,1);
          *(int *)(iVar2 + 4) = iVar3;
          **(int **)(iVar3 + 4) = iVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return;
}



void __thiscall Entity::meth_0x54fff0(Entity *this)

{
  int **ppiVar1;
  undefined4 *puVar2;
  DynamicObject *pDVar3;
  bool bVar4;
  int *piVar5;
  void *this_00;
  int iVar6;
  int **_Memory;
  GameActionEquip *extraout_ECX;
  GameActionEquip *this_01;
  Entity *pEVar7;
  int *piStack_18;
  Entity *pEStack_14;
  Entity *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637b2c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->DynamicObject).vftptr_0x0 =
       (DynamicObject__vftable_6979fc *)&Entity__vftable_692084_00692084;
  local_4 = 0x16;
  local_10 = this;
  bVar4 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (bVar4) {
    piVar5 = (int *)FUN_00401150();
    pEVar7 = this;
    this_00 = (void *)(**(code **)(*piVar5 + 0x20))();
    FUN_005a93c0(this_00,(int *)pEVar7);
  }
  this_01 = *(GameActionEquip **)&(this->DynamicObject).field_0x168;
  if (this_01 != (GameActionEquip *)0x0) {
    (*((this_01->ActionEquip).Action.vftptr_0x0)->virt_deldtor_0x4010e0_0)(this_01);
    this_01 = extraout_ECX;
  }
  if (*(int *)&(this->DynamicObject).field_0x2dc != 0) {
    iVar6 = GameActionEquip::meth_0x54be10(this_01);
    (**(code **)(**(int **)(iVar6 + 0x168) + 8))(this);
  }
  DynamicObject::meth_0x54c180(&this->DynamicObject);
  DynamicObject::meth_0x54bf30(&this->DynamicObject);
  iVar6 = *(int *)&(this->DynamicObject).field_0x1ec;
  if (iVar6 != 0) {
    if (DAT_0070bd98 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    pEStack_14 = (Entity *)(**(code **)(*piVar5 + 0x54))(iVar6);
    pDVar3 = &pEStack_14->DynamicObject;
    ppiVar1 = *(int ***)&(this->DynamicObject).field_0x2f8;
    if (ppiVar1 == (int **)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *ppiVar1;
    }
    if (piVar5 != *(int **)&(this->DynamicObject).field_0x2f8) {
      do {
        piStack_18 = (int *)piVar5[2];
        cls_0x401b00::meth_0x40e780
                  ((cls_0x401b00 *)&(pDVar3->Gfx_LineSystem).field_0x88,&piStack_18);
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)&(this->DynamicObject).field_0x2f8);
    }
    iVar6 = *(int *)&(this->DynamicObject).field_0x2fc;
    while (iVar6 != 0) {
      piVar5 = *(int **)&(this->DynamicObject).field_0x2f8;
      if (piVar5 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar5;
      }
      ppiVar1 = *(int ***)&(this->DynamicObject).field_0x2f8;
      if (ppiVar1 == (int **)0x0) {
        _Memory = (int **)0x0;
      }
      else {
        _Memory = (int **)*ppiVar1;
      }
      if (_Memory != ppiVar1) {
        *_Memory[1] = (int)*_Memory;
        (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      if (*(undefined4 **)(iVar6 + 8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar6 + 8))(1);
      }
      iVar6 = *(int *)&(this->DynamicObject).field_0x2fc;
    }
    FUN_0056e500(pEStack_14,(int *)this);
  }
  puVar2 = *(undefined4 **)&(this->DynamicObject).field_0x2bc;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  piVar5 = *(int **)&(this->DynamicObject).field_0x160;
  if (piVar5 != (int *)0x0) {
    FUN_005853e0(DAT_0070c528,piVar5);
  }
  puVar2 = *(undefined4 **)&(this->DynamicObject).field_0x16c;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  DynamicObject::meth_0x54c390(&this->DynamicObject);
  meth_0x54c440(this);
  DynamicObject::meth_0x54b3f0(&this->DynamicObject);
  meth_0x54bf00(this);
  pEStack_14 = this;
  cls_0x401b00::meth_0x40e780((cls_0x401b00 *)&DAT_0070be08,(int **)&pEStack_14);
  ppiVar1 = (int **)(this->DynamicObject).mbr_0x3d0;
  local_4 = CONCAT31(local_4._1_3_,0x15);
  cls_0x4542d0::meth_0x54d900
            ((cls_0x4542d0 *)&(this->DynamicObject).mbr_0x3cc,(int **)&pEStack_14,(int **)*ppiVar1,
             ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->DynamicObject).mbr_0x3d0);
}



void __thiscall Entity::meth_0x5506c0(Entity *this,int *param_1)

{
  int *this_00;
  char cVar1;
  
  this_00 = param_1;
  GameActionEquip::meth_0x55a3a0
            ((GameActionEquip *)param_1,*(undefined4 *)&(this->DynamicObject).field_0x1dc);
  GameActionEquip::meth_0x55a460((GameActionEquip *)this_00);
  GameActionEquip::meth_0x55a4b0((GameActionEquip *)this_00);
  GameEffect::meth_0x55ae10((GameEffect *)this_00);
  cVar1 = (**(code **)*this_00)();
  if (cVar1 != '\0') {
    GameActionEquip::meth_0x55a570((GameActionEquip *)this_00);
    return;
  }
  cls_0x54e070::meth_0x54ea00((cls_0x54e070 *)&(this->DynamicObject).mbr_0x2e0,&param_1);
  meth_0x54ef30(this);
  return;
}



void __thiscall Entity::virt_meth_0x550750(Entity *this,int param_1)

{
  int *piVar1;
  byte unaff_SI;
  
  *(int *)&(this->DynamicObject).field_0x2d0 = param_1;
  piVar1 = (*(this->DynamicObject).vftptr_0x0[0x1b].virt_meth_0x568400_0)
                     (&this->DynamicObject,unaff_SI);
  if ((char)piVar1 != '\0') {
    meth_0x54ef30(this);
    return;
  }
  meth_0x54bf00(this);
  return;
}



int * __thiscall Entity::virt_meth_0x550780(Entity *this)

{
  RLECircle<near_struct_Entity_*> *pRVar1;
  Entity *local_14;
  RLECircle<near_struct_Entity_*> *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063799b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = (RLECircle<near_struct_Entity_*> *)operator_new(0x28);
  local_4 = 0;
  if (local_10 != (RLECircle<near_struct_Entity_*> *)0x0) {
    local_14 = this;
    pRVar1 = RLECircle<near_struct_Entity_*>::RLECircle<near_struct_Entity_*>
                       (local_10,1,0,0,&local_14);
    ExceptionList = local_c;
    return (int *)pRVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}



void __thiscall Entity::ChangeState(Entity *this,int param_1)

{
  int iVar1;
  int *piVar2;
  byte unaff_SI;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  iVar1 = *(int *)&(this->DynamicObject).field_0x1e0;
  if (((iVar1 == 0) && (param_1 != 1)) && (param_1 != 3)) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid state change in Entity::ChangeState().";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (((iVar1 == 1) || (iVar1 == 3)) && (param_1 != 4)) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid state change in Entity::ChangeState().";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if ((iVar1 == 2) && (param_1 != 8)) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid state change in Entity::ChangeState().";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if ((iVar1 == 4) && (((param_1 != 5 && (param_1 != 6)) && (param_1 != 2)))) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid state change in Entity::ChangeState().";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (((iVar1 == 5) && (param_1 != 4)) && ((param_1 != 6 && (param_1 != 2)))) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid state change in Entity::ChangeState().";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (((iVar1 == 6) && (param_1 != 7)) && (param_1 != 2)) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid state change in Entity::ChangeState().";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if ((iVar1 == 7) && (param_1 != 2)) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid state change in Entity::ChangeState().";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  *(int *)&(this->DynamicObject).field_0x1e0 = param_1;
  piVar2 = (*(this->DynamicObject).vftptr_0x0[0x1b].virt_meth_0x568400_0)
                     (&this->DynamicObject,unaff_SI);
  if ((char)piVar2 != '\0') {
    meth_0x54ef30(this);
    return;
  }
  meth_0x54bf00(this);
  return;
}



void __thiscall Entity::virt_meth_0x550970(Entity *this,undefined4 param_1)

{
  Entity *local_4;
  
  local_4 = this;
  RunScript(this,"OnCreate",&local_4,1,&param_1);
  ChangeState(this,4);
  return;
}



void __thiscall Entity::virt_meth_0x5509b0(Entity *this,undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  GameActionEquip *this_00;
  int *piVar3;
  undefined local_c [4];
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  RunScript(this,"OnDeath",local_c,1,&param_1);
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
  piVar3 = *(int **)&(this->DynamicObject).field_0x1dc;
  this_00 = (GameActionEquip *)
            (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x84))();
  GameActionEquip::meth_0x56a1a0(this_00,piVar3);
  ChangeState(this,7);
  return;
}



void __thiscall Entity::virt_meth_0x550a50(Entity *this,undefined4 param_1)

{
  Entity *local_4;
  
  local_4 = this;
  RunScript(this,"OnDestroy",&local_4,1,&param_1);
  ChangeState(this,8);
  return;
}



void __thiscall Entity::virt_meth_0x550a90(Entity *this,undefined4 param_1)

{
  Entity *local_4;
  
  local_4 = this;
  RunScript(this,"OnLoad",&local_4,1,&param_1);
  ChangeState(this,4);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall Entity::virt_meth_0x550ad0(Entity *this,int param_1)

{
  float *pfVar1;
  Gregorian **ppGVar2;
  char cVar3;
  Gregorian *this_00;
  ModelInstance *this_01;
  float fVar4;
  int **ppiVar5;
  bool bVar6;
  int iVar7;
  int **ppiVar8;
  undefined4 uVar9;
  Map *this_02;
  void *pvVar10;
  undefined4 *puVar11;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int **ppiVar12;
  uint uVar13;
  undefined *puVar14;
  int *piVar15;
  float *pfVar16;
  undefined4 *puVar17;
  void *pvStack_36c;
  int **local_368;
  cls_0x52d410 cStack_364;
  undefined auStack_354 [12];
  int *piStack_348;
  float fStack_344;
  float fStack_340;
  dword dStack_33c;
  float fStack_338;
  float fStack_334;
  dword dStack_330;
  cls_0x4f4c00 cStack_32c;
  float afStack_30c [5];
  int iStack_2f8;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006379c6;
  local_c = ExceptionList;
  if ((this->DynamicObject).field_0x3a0 == '\0') {
    return;
  }
  ExceptionList = &local_c;
  if (*(int *)&(this->DynamicObject).field_0x160 != 0) {
    ExceptionList = &local_c;
    iVar7 = meth_0x549040(this);
    ModelInstance::meth_0x563eb0(*(ModelInstance **)&(this->DynamicObject).field_0x160,iVar7);
    iVar7 = *(int *)(*(int *)&(this->DynamicObject).field_0x160 + 0xc);
    if (((iVar7 != 0) && ((cls_0x401b00 *)(iVar7 + 0xb0) != (cls_0x401b00 *)0x0)) &&
       (*(int *)(iVar7 + 0xb8) != 0)) {
      ppiVar8 = (int **)cls_0x401b00::meth_0x4014f0((cls_0x401b00 *)(iVar7 + 0xb0),&local_368);
      piVar15 = *ppiVar8;
      if (piVar15 != *(int **)(iVar7 + 0xb4)) {
        do {
          (*(this->DynamicObject).vftptr_0x0[0x29].virt_meth_0x568400_0)
                    (&this->DynamicObject,(char)piVar15 + 8);
          piVar15 = (int *)*piVar15;
        } while (piVar15 != (int *)*(int *)(iVar7 + 0xb4));
      }
    }
  }
  if (*(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x10c) != 2) {
    cStack_364._0_4_ = (this->DynamicObject).mbr_0x4;
    cStack_364.mbr_0x4 = (this->DynamicObject).mbr_0x8;
    cStack_364.mbr_0x8 = (this->DynamicObject).mbr_0xc;
    iVar7 = FUN_006165e0((cls_0x616328 *)this,0,&RTTI_Type_Descriptor,&Water::RTTI_Type_Descriptor,0
                        );
    if ((iVar7 == 0) &&
       (uVar9 = FUN_00501150(&cStack_364,(float *)&(this->DynamicObject).field_0x35c),
       (char)uVar9 != '\0')) {
      if (DAT_0070bd98 == 0) {
        piVar15 = (int *)0x0;
      }
      else {
        piVar15 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
      }
      this_02 = (Map *)(**(code **)(*piVar15 + 0x54))();
      if ((this_02 != (Map *)0x0) && (piVar15 = Map::GetOctree(this_02), piVar15 != (int *)0x0)) {
        piVar15 = Map::GetOctree(this_02);
        (**(code **)(*piVar15 + 0x88))();
        auStack_354._4_4_ = (float)cStack_364.mbr_0x4 + (float)(this->DynamicObject).mbr_0x20;
        auStack_354._0_4_ = cStack_364._0_4_;
        fStack_340 = (float)(this->DynamicObject).mbr_0x14 - (float)(this->DynamicObject).mbr_0x20;
        pvStack_36c = (void *)0x0;
        auStack_354._8_4_ = cStack_364.mbr_0x8;
        fStack_344 = 0.0;
        dStack_33c = 0;
        cls_0x4f4c00::cls_0x4f4c00(&cStack_32c,(undefined4 *)auStack_354,&fStack_344);
        iVar7 = (**(code **)(*piVar15 + 100))();
        if ((iVar7 == 1) && (cStack_364.mbr_0xc = 0x7f7fffff, iStack_2f8 != 0)) {
          pfVar16 = afStack_30c;
          do {
            pvVar10 = (void *)FUN_006165e0((cls_0x616328 *)pfVar16[4],0,
                                           &DynamicObject::RTTI_Type_Descriptor,
                                           &Water::RTTI_Type_Descriptor,0);
            if ((pvVar10 != (void *)0x0) &&
               (*pfVar16 < (float)cStack_364.mbr_0xc !=
                (NAN(*pfVar16) || NAN((float)cStack_364.mbr_0xc)))) {
              auStack_354._4_4_ = (float)cStack_364.mbr_0x4 + 0.001;
              auStack_354._8_4_ = cStack_364.mbr_0x8;
              auStack_354._0_4_ = cStack_364._0_4_;
              iVar7 = (**(code **)(*piVar15 + 0x5c))(auStack_354,&local_368);
              if ((iVar7 == 0) || ((float)local_368 <= *(float *)((int)pvVar10 + 8))) {
                cStack_364.mbr_0xc = (dword)*pfVar16;
                pvStack_36c = pvVar10;
              }
            }
            pfVar1 = pfVar16 + 0xb;
            pfVar16 = pfVar16 + 6;
          } while (*pfVar1 != 0.0);
          if ((pvStack_36c != (void *)0x0) && (*(char *)((int)pvStack_36c + 0x1b3) != '\0')) {
            FUN_005ab100(pvStack_36c,(float)cStack_364._0_4_,(float)cStack_364.mbr_0x8,0.01);
          }
        }
      }
      *(undefined4 *)&(this->DynamicObject).field_0x35c = cStack_364._0_4_;
      *(dword *)&(this->DynamicObject).field_0x360 = cStack_364.mbr_0x4;
      *(dword *)&(this->DynamicObject).field_0x364 = cStack_364.mbr_0x8;
    }
  }
  puVar11 = (undefined4 *)FUN_0056e0b0();
  cStack_364.mbr_0x8 = 0;
  piVar15 = (int *)(this->DynamicObject).mbr_0x3c4;
  uStack_4 = 0;
  cStack_364.mbr_0xc = *piVar15;
  cStack_364.mbr_0x4 = (dword)puVar11;
  if ((int *)cStack_364.mbr_0xc != piVar15) {
    fVar4 = (float)param_1;
    if (param_1 < 0) {
      fVar4 = fVar4 + 4.294967e+09;
    }
    do {
      local_368 = (int **)&stack0xfffffc78;
      ppGVar2 = (Gregorian **)(cStack_364.mbr_0xc + 0x14);
      *(float *)(cStack_364.mbr_0xc + 0x1c) = fVar4 * 0.001 + *(float *)(cStack_364.mbr_0xc + 0x1c);
      dStack_330 = (this->DynamicObject).mbr_0xc;
      Gregorian::meth_0x52c350
                (*ppGVar2,(this->DynamicObject).mbr_0x4,(this->DynamicObject).mbr_0x8,dStack_330);
      if (((*(byte *)&(*ppGVar2)->mbr_0x30 & 1) == 0) &&
         (bVar6 = Gregorian::meth_0x52cc40(*ppGVar2), CONCAT31(extraout_var,bVar6) == 0)) {
        iVar7 = FUN_00433760(puVar11,puVar11[1],ppGVar2);
        cls_0x52d410::meth_0x52d410(&cStack_364,1);
        puVar11[1] = iVar7;
        **(int **)(iVar7 + 4) = iVar7;
        puVar11 = (undefined4 *)cStack_364.mbr_0x4;
      }
      cls_0x41d550::meth_0x41d550((cls_0x41d550 *)((int)&cStack_364 + 0xc));
    } while (cStack_364.mbr_0xc != (this->DynamicObject).mbr_0x3c4);
  }
  puVar11 = (undefined4 *)cStack_364.mbr_0x4;
  if ((undefined4 *)cStack_364.mbr_0x4 == (undefined4 *)0x0) {
    puVar17 = (undefined4 *)0x0;
  }
  else {
    puVar17 = *(undefined4 **)cStack_364.mbr_0x4;
  }
  for (; puVar17 != puVar11; puVar17 = (undefined4 *)*puVar17) {
    meth_0x54f4d0(this,puVar17[2],'\x01');
  }
  ppiVar8 = (int **)(this->DynamicObject).mbr_0x3d0;
  ppiVar12 = (int **)*ppiVar8;
  if (ppiVar12 != ppiVar8) {
    fVar4 = (float)param_1;
    if (param_1 < 0) {
      fVar4 = fVar4 + 4.294967e+09;
    }
    do {
      local_368 = (int **)&stack0xfffffc78;
      ppiVar12[7] = (int *)(fVar4 * 0.001 + (float)ppiVar12[7]);
      dStack_330 = (this->DynamicObject).mbr_0xc;
      Gregorian::meth_0x52c350
                ((Gregorian *)ppiVar12[5],(this->DynamicObject).mbr_0x4,
                 (this->DynamicObject).mbr_0x8,dStack_330);
      bVar6 = Gregorian::meth_0x52cc40((Gregorian *)ppiVar12[5]);
      if (CONCAT31(extraout_var_00,bVar6) == 0) {
        if ((*(char *)(ppiVar12 + 6) != '\0') &&
           (this_00 = (Gregorian *)ppiVar12[5], this_00 != (Gregorian *)0x0)) {
          Gregorian::meth_0x52d100(this_00);
                    /* WARNING: Subroutine does not return */
          _free(this_00);
        }
        ppiVar12 = (int **)cls_0x4542d0::meth_0x54d070
                                     ((cls_0x4542d0 *)&(this->DynamicObject).mbr_0x3cc,
                                      (int)&cStack_364 + 0xc,ppiVar12);
        ppiVar12 = (int **)*ppiVar12;
      }
      else if (*(char *)((int)ppiVar12 + 0x21) == '\0') {
        ppiVar8 = (int **)ppiVar12[2];
        if (*(char *)((int)ppiVar8 + 0x21) == '\0') {
          cVar3 = *(char *)((int)*ppiVar8 + 0x21);
          ppiVar12 = ppiVar8;
          ppiVar8 = (int **)*ppiVar8;
          while (cVar3 == '\0') {
            cVar3 = *(char *)((int)*ppiVar8 + 0x21);
            ppiVar12 = ppiVar8;
            ppiVar8 = (int **)*ppiVar8;
          }
        }
        else {
          cVar3 = *(char *)((int)ppiVar12[1] + 0x21);
          ppiVar5 = (int **)ppiVar12[1];
          ppiVar8 = ppiVar12;
          while ((ppiVar12 = ppiVar5, cVar3 == '\0' && (ppiVar8 == (int **)ppiVar12[2]))) {
            cVar3 = *(char *)((int)ppiVar12[1] + 0x21);
            ppiVar5 = (int **)ppiVar12[1];
            ppiVar8 = ppiVar12;
          }
        }
      }
    } while (ppiVar12 != (int **)(this->DynamicObject).mbr_0x3d0);
  }
  auStack_354._4_4_ = FUN_0056e0b0();
  auStack_354._8_4_ = 0;
  ppiVar8 = (int **)(this->DynamicObject).mbr_0x33c;
  ppiVar12 = (int **)*ppiVar8;
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  if (ppiVar12 != ppiVar8) {
    fVar4 = (float)param_1;
    if (param_1 < 0) {
      fVar4 = fVar4 + 4.294967e+09;
    }
    do {
      ppiVar12[7] = (int *)(fVar4 * 0.001 + (float)ppiVar12[7]);
      (**(code **)(*ppiVar12[5] + 8))();
      if ((*(char *)((int)ppiVar12 + 0x25) != '\0') &&
         (uVar13 = cls_0x59f7d0::meth_0x59f7d0((cls_0x59f7d0 *)ppiVar12[5]), (char)uVar13 != '\0'))
      {
        ppiVar8 = (int **)(auStack_354._4_4_ + 4);
        piVar15 = (int *)FUN_00433760(auStack_354._4_4_,*(int **)(auStack_354._4_4_ + 4),
                                      ppiVar12 + 5);
        FUN_0054dba0(auStack_354,1);
        *ppiVar8 = piVar15;
        *(int **)piVar15[1] = piVar15;
      }
      if (*(char *)((int)ppiVar12 + 0x29) == '\0') {
        ppiVar8 = (int **)ppiVar12[2];
        if (*(char *)((int)ppiVar8 + 0x29) == '\0') {
          cVar3 = *(char *)((int)*ppiVar8 + 0x29);
          ppiVar12 = ppiVar8;
          ppiVar8 = (int **)*ppiVar8;
          while (cVar3 == '\0') {
            cVar3 = *(char *)((int)*ppiVar8 + 0x29);
            ppiVar12 = ppiVar8;
            ppiVar8 = (int **)*ppiVar8;
          }
        }
        else {
          cVar3 = *(char *)((int)ppiVar12[1] + 0x29);
          ppiVar5 = (int **)ppiVar12[1];
          ppiVar8 = ppiVar12;
          while ((ppiVar12 = ppiVar5, cVar3 == '\0' && (ppiVar8 == (int **)ppiVar12[2]))) {
            cVar3 = *(char *)((int)ppiVar12[1] + 0x29);
            ppiVar5 = (int **)ppiVar12[1];
            ppiVar8 = ppiVar12;
          }
        }
      }
    } while (ppiVar12 != (int **)(this->DynamicObject).mbr_0x33c);
  }
  ppiVar8 = (int **)auStack_354._4_4_;
  if ((int **)auStack_354._4_4_ == (int **)0x0) {
    ppiVar12 = (int **)0x0;
  }
  else {
    ppiVar12 = *(int ***)auStack_354._4_4_;
  }
  for (; ppiVar12 != ppiVar8; ppiVar12 = (int **)*ppiVar12) {
    meth_0x54f150(this,(uint)ppiVar12[2],(int **)0x1);
  }
  ppiVar8 = *(int ***)&(this->DynamicObject).field_0x354;
  ppiVar12 = (int **)*ppiVar8;
  if (ppiVar12 != ppiVar8) {
    fVar4 = (float)param_1;
    if (param_1 < 0) {
      fVar4 = fVar4 + 4.294967e+09;
    }
    do {
      ppiVar12[7] = (int *)(fVar4 * 0.001 + (float)ppiVar12[7]);
      (**(code **)(*ppiVar12[5] + 8))();
      uVar13 = cls_0x59f7d0::meth_0x59f7d0((cls_0x59f7d0 *)ppiVar12[5]);
      if ((char)uVar13 == '\0') {
        if (*(char *)((int)ppiVar12 + 0x29) == '\0') {
          ppiVar8 = (int **)ppiVar12[2];
          if (*(char *)((int)ppiVar8 + 0x29) == '\0') {
            cVar3 = *(char *)((int)*ppiVar8 + 0x29);
            ppiVar12 = ppiVar8;
            ppiVar8 = (int **)*ppiVar8;
            while (cVar3 == '\0') {
              cVar3 = *(char *)((int)*ppiVar8 + 0x29);
              ppiVar12 = ppiVar8;
              ppiVar8 = (int **)*ppiVar8;
            }
          }
          else {
            cVar3 = *(char *)((int)ppiVar12[1] + 0x29);
            ppiVar5 = (int **)ppiVar12[1];
            ppiVar8 = ppiVar12;
            while ((ppiVar12 = ppiVar5, cVar3 == '\0' && (ppiVar8 == (int **)ppiVar12[2]))) {
              cVar3 = *(char *)((int)ppiVar12[1] + 0x29);
              ppiVar5 = (int **)ppiVar12[1];
              ppiVar8 = ppiVar12;
            }
          }
        }
      }
      else {
        if ((*(char *)(ppiVar12 + 6) != '\0') && (ppiVar12[5] != (int *)0x0)) {
          (**(code **)*ppiVar12[5])();
        }
        piVar15 = ppiVar12[8];
        if ((piVar15 != (int *)0x0) && (*(char *)(ppiVar12 + 9) != '\0')) {
          puVar14 = FUN_004e1de0();
          FUN_004e20f0(puVar14,piVar15);
        }
        if (ppiVar12[4] != (int *)0x0) {
          puVar14 = &(this->DynamicObject).field_0x344;
          cls_0x50dbb0::meth_0x51f0f0
                    ((cls_0x50dbb0 *)puVar14,(int *)&local_368,(uint *)(ppiVar12 + 4));
          if (local_368 != *(int ***)&(this->DynamicObject).field_0x348) {
            cls_0x50dbb0::meth_0x54cda0((cls_0x50dbb0 *)puVar14,(int)&cStack_364 + 0xc,local_368);
          }
        }
        ppiVar12 = (int **)GameActionEquip::meth_0x54cad0
                                     ((GameActionEquip *)&(this->DynamicObject).field_0x350,
                                      auStack_354 + 0xc,ppiVar12);
        ppiVar12 = (int **)*ppiVar12;
      }
    } while (ppiVar12 != *(int ***)&(this->DynamicObject).field_0x354);
  }
  this_01 = *(ModelInstance **)&(this->DynamicObject).field_0x160;
  if (this_01 != (ModelInstance *)0x0) {
    ModelInstance::meth_0x563f10(this_01,param_1);
    iVar7 = ModelInstance::meth_0x563930(*(ModelInstance **)&(this->DynamicObject).field_0x160);
    if ((char)iVar7 != '\0') {
      ModelInstance::meth_0x563980
                (*(ModelInstance **)&(this->DynamicObject).field_0x160,&fStack_344);
      uVar9 = *(undefined4 *)&(this->DynamicObject).field_0x160;
      fStack_338 = fStack_344;
      dStack_330 = dStack_33c;
      *(undefined4 *)&(this->DynamicObject).field_0x160 = 0;
      fStack_334 = fStack_340;
      meth_0x54a8a0(this,&fStack_338);
      *(undefined4 *)&(this->DynamicObject).field_0x160 = uVar9;
    }
  }
  if ((int **)auStack_354._4_4_ == (int **)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    piVar15 = *(int **)auStack_354._4_4_;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)auStack_354,(int **)(auStack_354 + 0xc),piVar15,(int *)auStack_354._4_4_);
                    /* WARNING: Subroutine does not return */
  _free((void *)auStack_354._4_4_);
}



Entity * __thiscall Entity::Entity(Entity *this)

{
  int iVar1;
  undefined4 uVar2;
  dword dVar3;
  int iVar4;
  undefined local_15;
  Entity *local_14;
  Entity *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637b2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  DynamicObject::DynamicObject(&this->DynamicObject);
  (this->DynamicObject).vftptr_0x0 =
       (DynamicObject__vftable_6979fc *)&Entity__vftable_692084_00692084;
  *(undefined4 *)&(this->DynamicObject).field_0x160 = 0;
  (this->DynamicObject).field_0x164 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x168 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x16c = 0;
  (this->DynamicObject).field_0x170 = 0;
  (this->DynamicObject).mbr_0x171 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x174 = 0;
  (this->DynamicObject).field_0x178 = 1;
  (this->DynamicObject).field_0x179 = 1;
  (this->DynamicObject).field_0x17a = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x17c = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x180 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x184 = 0;
  (this->DynamicObject).field_0x188 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1a4 = 0xf;
  *(undefined4 *)&(this->DynamicObject).field_0x1a0 = 0;
  (this->DynamicObject).field_0x190 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1ac = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1b0 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1b4 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1b8 = 0;
  (this->DynamicObject).field_0x1bc = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1d8 = 0xf;
  *(undefined4 *)&(this->DynamicObject).field_0x1d4 = 0;
  (this->DynamicObject).field_0x1c4 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1dc = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1e0 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1e4 = 0;
  (this->DynamicObject).field_0x1e8 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1ec = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1f0 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1f4 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1f8 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x214 = 0xf;
  *(undefined4 *)&(this->DynamicObject).field_0x210 = 0;
  (this->DynamicObject).field_0x200 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x230 = 0xf;
  *(undefined4 *)&(this->DynamicObject).field_0x22c = 0;
  (this->DynamicObject).field_0x21c = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x24c = 0xf;
  *(undefined4 *)&(this->DynamicObject).field_0x248 = 0;
  (this->DynamicObject).field_0x238 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x268 = 0xf;
  *(undefined4 *)&(this->DynamicObject).field_0x264 = 0;
  (this->DynamicObject).field_0x254 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x284 = 0xf;
  *(undefined4 *)&(this->DynamicObject).field_0x280 = 0;
  (this->DynamicObject).field_0x270 = 0;
  (this->DynamicObject).field_0x288 = 1;
  *(undefined4 *)&(this->DynamicObject).field_0x28c = 0xffffffff;
  *(undefined4 *)&(this->DynamicObject).field_0x290 = 0;
  (this->DynamicObject).field_0x294 = 0;
  (this->DynamicObject).field_0x295 = 0;
  (this->DynamicObject).field_0x296 = 1;
  (this->DynamicObject).field_0x297 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x298 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x29c = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x2b8 = 0xf;
  *(undefined4 *)&(this->DynamicObject).field_0x2b4 = 0;
  (this->DynamicObject).field_0x2a4 = 0;
  local_4._0_1_ = 9;
  local_4._1_3_ = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x2bc = 0;
  (this->DynamicObject).field_0x2c0 = 0;
  (this->DynamicObject).field_0x2c4 = local_15;
  iVar1 = FUN_0059ec40();
  *(int *)&(this->DynamicObject).field_0x2c8 = iVar1;
  *(undefined *)(iVar1 + 0x2d) = 1;
  iVar1 = *(int *)&(this->DynamicObject).field_0x2c8;
  *(int *)(iVar1 + 4) = iVar1;
  uVar2 = *(undefined4 *)&(this->DynamicObject).field_0x2c8;
  *(undefined4 *)uVar2 = uVar2;
  iVar1 = *(int *)&(this->DynamicObject).field_0x2c8;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined4 *)&(this->DynamicObject).field_0x2cc = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x2d0 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x2d4 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x2d8 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x2dc = 0;
  (this->DynamicObject).mbr_0x2e4 = 0;
  (this->DynamicObject).mbr_0x2e8 = 0;
  (this->DynamicObject).mbr_0x2ec = 0;
  (this->DynamicObject).mbr_0x2f0 = 0;
  local_4._0_1_ = 0xb;
  uVar2 = FUN_0056e0b0();
  *(undefined4 *)&(this->DynamicObject).field_0x2f8 = uVar2;
  *(undefined4 *)&(this->DynamicObject).field_0x2fc = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x300 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x308 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x30c = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x310 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x314 = 0;
  local_4._0_1_ = 0xd;
  (this->DynamicObject).field_0x318 = 0;
  (this->DynamicObject).field_0x319 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x31c = 0;
  uVar2 = FUN_00413540();
  *(undefined4 *)&(this->DynamicObject).field_0x324 = uVar2;
  *(undefined4 *)&(this->DynamicObject).field_0x328 = 0;
  local_4._0_1_ = 0xe;
  uVar2 = FUN_0056e0b0();
  *(undefined4 *)&(this->DynamicObject).field_0x330 = uVar2;
  *(undefined4 *)&(this->DynamicObject).field_0x334 = 0;
  (this->DynamicObject).field_0x338 = local_15;
  local_4._0_1_ = 0xf;
  dVar3 = FUN_0056a160();
  (this->DynamicObject).mbr_0x33c = dVar3;
  *(undefined *)(dVar3 + 0x29) = 1;
  dVar3 = (this->DynamicObject).mbr_0x33c;
  *(dword *)(dVar3 + 4) = dVar3;
  dVar3 = (this->DynamicObject).mbr_0x33c;
  *(dword *)dVar3 = dVar3;
  dVar3 = (this->DynamicObject).mbr_0x33c;
  *(dword *)(dVar3 + 8) = dVar3;
  *(undefined4 *)&(this->DynamicObject).field_0x340 = 0;
  local_4._0_1_ = 0x10;
  (this->DynamicObject).field_0x344 = local_15;
  iVar1 = FUN_004c6640();
  *(int *)&(this->DynamicObject).field_0x348 = iVar1;
  *(undefined *)(iVar1 + 0x15) = 1;
  iVar1 = *(int *)&(this->DynamicObject).field_0x348;
  *(int *)(iVar1 + 4) = iVar1;
  uVar2 = *(undefined4 *)&(this->DynamicObject).field_0x348;
  *(undefined4 *)uVar2 = uVar2;
  iVar1 = *(int *)&(this->DynamicObject).field_0x348;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined4 *)&(this->DynamicObject).field_0x34c = 0;
  local_4._0_1_ = 0x11;
  (this->DynamicObject).field_0x350 = local_15;
  iVar1 = FUN_0056a160();
  *(int *)&(this->DynamicObject).field_0x354 = iVar1;
  *(undefined *)(iVar1 + 0x29) = 1;
  iVar1 = *(int *)&(this->DynamicObject).field_0x354;
  *(int *)(iVar1 + 4) = iVar1;
  uVar2 = *(undefined4 *)&(this->DynamicObject).field_0x354;
  *(undefined4 *)uVar2 = uVar2;
  iVar1 = *(int *)&(this->DynamicObject).field_0x354;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined4 *)&(this->DynamicObject).field_0x358 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x35c = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x360 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x364 = 0;
  local_4._0_1_ = 0x12;
  *(undefined4 *)&(this->DynamicObject).field_0x368 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x36c = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x370 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x374 = 0;
  dVar3 = FUN_0056e0b0();
  (this->DynamicObject).mbr_0x37c = dVar3;
  (this->DynamicObject).mbr_0x380 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x384 = 0;
  (this->DynamicObject).field_0x388 = 1;
  *(undefined4 *)&(this->DynamicObject).field_0x38c = 0xffffffff;
  *(undefined4 *)&(this->DynamicObject).field_0x390 = 0xffffffff;
  (this->DynamicObject).field_0x394 = local_15;
  local_4._0_1_ = 0x13;
  iVar1 = FUN_004c6640();
  *(int *)&(this->DynamicObject).field_0x398 = iVar1;
  *(undefined *)(iVar1 + 0x15) = 1;
  iVar1 = *(int *)&(this->DynamicObject).field_0x398;
  *(int *)(iVar1 + 4) = iVar1;
  uVar2 = *(undefined4 *)&(this->DynamicObject).field_0x398;
  *(undefined4 *)uVar2 = uVar2;
  iVar1 = *(int *)&(this->DynamicObject).field_0x398;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined4 *)&(this->DynamicObject).field_0x39c = 0;
  *(dword *)&(this->DynamicObject).field_0x3a4 = (this->DynamicObject).mbr_0x10;
  *(dword *)&(this->DynamicObject).field_0x3a8 = (this->DynamicObject).mbr_0x14;
  *(dword *)&(this->DynamicObject).field_0x3ac = (this->DynamicObject).mbr_0x18;
  *(dword *)&(this->DynamicObject).field_0x3b0 = (this->DynamicObject).mbr_0x1c;
  *(dword *)&(this->DynamicObject).field_0x3b4 = (this->DynamicObject).mbr_0x20;
  *(dword *)&(this->DynamicObject).field_0x3b8 = (this->DynamicObject).mbr_0x24;
  (this->DynamicObject).field_0x3a0 = 1;
  (this->DynamicObject).field_0x3a1 = 1;
  (this->DynamicObject).field_0x3a2 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x3bc = 1;
  local_4._0_1_ = 0x14;
  *(undefined *)&(this->DynamicObject).mbr_0x3c0 = local_15;
  dVar3 = FUN_0057c360();
  (this->DynamicObject).mbr_0x3c4 = dVar3;
  *(undefined *)(dVar3 + 0x21) = 1;
  dVar3 = (this->DynamicObject).mbr_0x3c4;
  *(dword *)(dVar3 + 4) = dVar3;
  dVar3 = (this->DynamicObject).mbr_0x3c4;
  *(dword *)dVar3 = dVar3;
  dVar3 = (this->DynamicObject).mbr_0x3c4;
  *(dword *)(dVar3 + 8) = dVar3;
  (this->DynamicObject).mbr_0x3c8 = 0;
  local_4._0_1_ = 0x15;
  *(undefined *)&(this->DynamicObject).mbr_0x3cc = local_15;
  dVar3 = FUN_0057c360();
  (this->DynamicObject).mbr_0x3d0 = dVar3;
  *(undefined *)(dVar3 + 0x21) = 1;
  dVar3 = (this->DynamicObject).mbr_0x3d0;
  *(dword *)(dVar3 + 4) = dVar3;
  dVar3 = (this->DynamicObject).mbr_0x3d0;
  *(dword *)dVar3 = dVar3;
  dVar3 = (this->DynamicObject).mbr_0x3d0;
  *(dword *)(dVar3 + 8) = dVar3;
  (this->DynamicObject).mbr_0x3d4 = 0;
  iVar1 = DAT_0070be0c;
  local_4 = CONCAT31(local_4._1_3_,0x16);
  local_14 = this;
  iVar4 = FUN_00433760(DAT_0070be0c,*(undefined4 *)(DAT_0070be0c + 4),&local_14);
  cls_0x401b00::meth_0x401dd0((cls_0x401b00 *)&DAT_0070be08,1);
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  ExceptionList = local_c;
  return this;
}



int * __thiscall Entity::virt_meth_0x551860(Entity *this,byte param_1)

{
  meth_0x54fff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall Entity::meth_0x551ca0(Entity *this)

{
  bool bVar1;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (bVar1) {
    ChangeState(this,6);
  }
  return;
}



void __thiscall Entity::virt_meth_0x551cc0(Entity *this,void *param_1)

{
  if ((this->DynamicObject).field_0x170 == '\0') {
    FUN_0040ff50(param_1,*(int *)&(this->DynamicObject).field_0x16c);
    (this->DynamicObject).field_0x170 = 1;
  }
  return;
}



void __thiscall Entity::virt_meth_0x552420(Entity *this,int *param_1)

{
  undefined *puVar1;
  int **ppiVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  uint uVar7;
  GameActionEquip *this_00;
  int *piVar8;
  int iVar9;
  undefined4 unaff_retaddr;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  piVar5 = param_1;
  virt_meth_0x568280(this,(int)param_1);
  (this->DynamicObject).field_0x178 = *(undefined *)(piVar5 + 0x5e);
  (this->DynamicObject).field_0x179 = *(undefined *)((int)piVar5 + 0x179);
  (this->DynamicObject).field_0x17a = *(undefined *)((int)piVar5 + 0x17a);
  *(int *)&(this->DynamicObject).field_0x17c = piVar5[0x5f];
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x1c0,(_String_base *)(piVar5 + 0x70),0,
             0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x18c,(_String_base *)(piVar5 + 99),0,
             0xffffffff);
  if (*(char *)(piVar5 + 0x7a) != '\0') {
    meth_0x54ef30(this);
  }
  *(int *)&(this->DynamicObject).field_0x1f0 = piVar5[0x7c];
  *(int *)&(this->DynamicObject).field_0x1f4 = piVar5[0x7d];
  *(int *)&(this->DynamicObject).field_0x1f8 = piVar5[0x7e];
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x1fc,(_String_base *)(piVar5 + 0x7f),0,
             0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x218,(_String_base *)(piVar5 + 0x86),0,
             0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x234,(_String_base *)(piVar5 + 0x8d),0,
             0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x250,(_String_base *)(piVar5 + 0x94),0,
             0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x26c,(_String_base *)(piVar5 + 0x9b),0,
             0xffffffff);
  (this->DynamicObject).field_0x288 = *(undefined *)(piVar5 + 0xa2);
  (this->DynamicObject).field_0x296 = *(undefined *)((int)piVar5 + 0x296);
  (this->DynamicObject).field_0x297 = *(undefined *)((int)piVar5 + 0x297);
  *(int *)&(this->DynamicObject).field_0x298 = piVar5[0xa6];
  *(int *)&(this->DynamicObject).field_0x29c = piVar5[0xa7];
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->DynamicObject).field_0x2a0,(_String_base *)(piVar5 + 0xa8),0,
             0xffffffff);
  piVar3 = piVar5 + 0xb1;
  puVar1 = &(this->DynamicObject).field_0x2c4;
  if ((int *)puVar1 != piVar3) {
    ppiVar2 = *(int ***)&(this->DynamicObject).field_0x2c8;
    cls_0x4d8d70::meth_0x4213f0((cls_0x4d8d70 *)puVar1,&param_1,(int **)*ppiVar2,ppiVar2);
    *puVar1 = *(undefined *)piVar3;
    cls_0x4d8d70::meth_0x54fe10((cls_0x4d8d70 *)puVar1,(int)piVar3);
  }
  *(int *)&(this->DynamicObject).field_0x2d0 = piVar5[0xb4];
  bVar6 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if ((bVar6) && (piVar5[0xbc] != 0)) {
    for (iVar9 = piVar5[0xbb]; iVar9 != piVar5[0xbc] + piVar5[0xbb]; iVar9 = iVar9 + 1) {
      uVar7 = (int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2;
      iVar4 = uVar7 * -4;
      if ((uint)piVar5[0xba] <= uVar7) {
        uVar7 = uVar7 - piVar5[0xba];
      }
      piVar3 = *(int **)(*(int *)(piVar5[0xb9] + uVar7 * 4) + (iVar9 + iVar4) * 4);
      param_1 = piVar3;
      bVar6 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
      if (!bVar6) {
        local_8 = &Exception__vftable_64787c_0064787c;
        local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_8,&DAT_006d8834);
      }
      if (DAT_0070bd98 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)(DAT_0070bd98 + 4);
      }
      this_00 = (GameActionEquip *)(**(code **)(*piVar8 + 0x28))(piVar3[3]);
      (*((this_00->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_8)(unaff_retaddr);
      GameActionEquip::meth_0x55a3a0(this_00,*(undefined4 *)&(this->DynamicObject).field_0x1dc);
      cls_0x54e070::meth_0x54ea00((cls_0x54e070 *)&(this->DynamicObject).mbr_0x2e0,&local_8);
      meth_0x54ef30(this);
      GameActionEquip::meth_0x55af80(this_00);
    }
  }
  *(int *)&(this->DynamicObject).field_0x368 = piVar5[0xda];
  *(int *)&(this->DynamicObject).field_0x36c = piVar5[0xdb];
  piVar3 = piVar5 + 0xe5;
  puVar1 = &(this->DynamicObject).field_0x394;
  (this->DynamicObject).field_0x388 = *(undefined *)(piVar5 + 0xe2);
  if ((int *)puVar1 != piVar3) {
    ppiVar2 = *(int ***)&(this->DynamicObject).field_0x398;
    cls_0x50dbb0::meth_0x54e3e0((cls_0x50dbb0 *)puVar1,&param_1,(int **)*ppiVar2,ppiVar2);
    *puVar1 = *(undefined *)piVar3;
    cls_0x50dbb0::meth_0x54c300((cls_0x50dbb0 *)puVar1,(int)piVar3);
  }
  (this->DynamicObject).field_0x3a0 = *(undefined *)(piVar5 + 0xe8);
  (this->DynamicObject).field_0x3a1 = *(undefined *)((int)piVar5 + 0x3a1);
  *(int *)&(this->DynamicObject).field_0x3bc = piVar5[0xef];
  (*(this->DynamicObject).vftptr_0x0[0x11].virt_meth_0x568400_0)
            (&this->DynamicObject,(this->DynamicObject).field_0x388);
  return;
}



uint __thiscall Entity::virt_meth_0x5528d0(Entity *this,int param_1,void **param_2,char param_3)

{
  uint uVar1;
  int unaff_ESI;
  int unaff_retaddr;
  
  if (*(int *)(param_1 + 8) == 0x324e4545) {
    param_1 = net::critical_section::meth_0x552760
                        ((critical_section *)this,param_1,(int)param_2,param_3);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x544e4545) goto LAB_00552928;
    param_1 = net::critical_section::meth_0x551cf0
                        ((critical_section *)this,param_1,(uint)param_2,unaff_ESI,unaff_retaddr);
  }
  if ((char)param_1 == '\0') {
    FUN_00497120((byte *)"Error reading entity engine data from entity file.");
    uVar1 = FUN_00498f30(DAT_00707da8,param_2);
    return uVar1 & 0xffffff00;
  }
LAB_00552928:
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}



void __thiscall Entity::meth_0x5680d0(Entity *this,int *param_1)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  (this->DynamicObject).mbr_0x4 = *param_1;
  (this->DynamicObject).mbr_0x8 = param_1[1];
  (this->DynamicObject).mbr_0xc = param_1[2];
  if (((this->DynamicObject).mbr_0x28 != 0) && ((this->DynamicObject).mbr_0x2c != 0xffffffff)) {
    (*(this->DynamicObject).vftptr_0x0[9].virt_meth_0x568400_0)
              (&this->DynamicObject,(byte)&local_18);
    fStack_c = local_18 + (float)(this->DynamicObject).mbr_0x4;
    fStack_8 = fStack_14 + (float)(this->DynamicObject).mbr_0x8;
    fStack_4 = fStack_10 + (float)(this->DynamicObject).mbr_0xc;
    (**(code **)(*(int *)(this->DynamicObject).mbr_0x28 + 0x80))
              ((this->DynamicObject).mbr_0x2c,&fStack_c);
  }
  return;
}



void __thiscall Entity::meth_0x568140(Entity *this,int *param_1)

{
  dword *pdVar1;
  dword dVar2;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  dVar2 = (this->DynamicObject).mbr_0x2c;
  local_c = ((float)(this->DynamicObject).mbr_0x1c - (float)(this->DynamicObject).mbr_0x10) * 0.5;
  pdVar1 = &(this->DynamicObject).mbr_0x2c;
  (this->DynamicObject).mbr_0x28 = (dword)param_1;
  local_8 = ((float)(this->DynamicObject).mbr_0x20 - (float)(this->DynamicObject).mbr_0x14) * 0.5;
  local_4 = ((float)(this->DynamicObject).mbr_0x24 - (float)(this->DynamicObject).mbr_0x18) * 0.5;
  local_18 = -local_c;
  local_14 = -local_8;
  local_10 = -local_4;
  if (dVar2 != 0xffffffff) {
    (**(code **)(*param_1 + 0x84))(dVar2,&local_18);
    return;
  }
  (*(this->DynamicObject).vftptr_0x0[9].virt_meth_0x568400_0)(&this->DynamicObject,(byte)&local_30);
  fStack_24 = local_30 + (float)(this->DynamicObject).mbr_0x4;
  fStack_20 = fStack_2c + (float)(this->DynamicObject).mbr_0x8;
  fStack_1c = fStack_28 + (float)(this->DynamicObject).mbr_0xc;
  (**(code **)(*(int *)(this->DynamicObject).mbr_0x28 + 0x70))(&fStack_24,&local_18,this,pdVar1);
  (**(code **)(*(int *)(this->DynamicObject).mbr_0x28 + 0x74))(*pdVar1);
  return;
}



void __thiscall Entity::meth_0x568220(Entity *this)

{
  int *piVar1;
  dword dVar2;
  
  piVar1 = (int *)(this->DynamicObject).mbr_0x28;
  if ((piVar1 != (int *)0x0) && (dVar2 = (this->DynamicObject).mbr_0x2c, dVar2 != 0xffffffff)) {
    (**(code **)(*piVar1 + 0x7c))(dVar2);
  }
  (this->DynamicObject).mbr_0x28 = 0;
  (this->DynamicObject).mbr_0x2c = 0xffffffff;
  return;
}



uint __thiscall Entity::virt_meth_0x568250(Entity *this)

{
  int *piVar1;
  dword dVar2;
  int iVar3;
  
  piVar1 = (int *)(this->DynamicObject).mbr_0x28;
  if ((piVar1 != (int *)0x0) && (dVar2 = (this->DynamicObject).mbr_0x2c, dVar2 != 0xffffffff)) {
    iVar3 = (**(code **)(*piVar1 + 0x8c))(dVar2);
    return (uint)(iVar3 != 0);
  }
  return (uint)piVar1 & 0xffffff00;
}



void __thiscall Entity::virt_meth_0x568280(Entity *this,int param_1)

{
  (this->DynamicObject).mbr_0x4 = *(dword *)(param_1 + 4);
  (this->DynamicObject).mbr_0x8 = *(dword *)(param_1 + 8);
  (this->DynamicObject).mbr_0xc = *(dword *)(param_1 + 0xc);
  (this->DynamicObject).mbr_0x30 = *(byte *)(param_1 + 0x30);
  return;
}



void __thiscall
Entity::meth_0x5ab3a0
          (Entity *this,float *param_1,_String_base *param_2,float param_3,dword param_4,
          undefined4 param_5,float param_6,_String_base *param_7)

{
  dword dVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char *pcVar7;
  G3D_Node *this_00;
  G3D_WaterTile *pGVar8;
  char *pcVar9;
  WaterTileModelInstance *pWVar10;
  cls_0x50db20 *this_01;
  float *unaff_EDI;
  ulonglong uVar11;
  uint unaff_retaddr;
  G3D_Node *local_12c;
  undefined local_118 [8];
  void *pvStack_110;
  dword local_104;
  dword local_100;
  VFX_Parameter__vftable_673a20 *pVStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  dword dStack_ec;
  dword dStack_e8;
  float local_e4;
  dword dStack_e0;
  dword dStack_dc;
  dword local_d8;
  undefined auStack_d4 [112];
  G3D_Node *local_64;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b330;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  if (param_2 != (_String_base *)0x0) {
    ExceptionList = &pvStack_c;
    ::cls_0x50db20::meth_0x571110((cls_0x50db20 *)&(this->DynamicObject).field_0x174,param_2);
  }
  FUN_004ded60(&local_d8,(char *)0x0);
  local_4 = 0;
  this_00 = (G3D_Node *)operator_new(0x130);
  local_4._0_1_ = 1;
  if (this_00 == (G3D_Node *)0x0) {
    local_12c = (G3D_Node *)0x0;
  }
  else {
    local_12c = G3D_Node::G3D_Node(this_00);
  }
  local_4._0_1_ = 0;
  pGVar8 = (G3D_WaterTile *)operator_new(0xb0);
  local_4._0_1_ = 2;
  if (pGVar8 == (G3D_WaterTile *)0x0) {
    pGVar8 = (G3D_WaterTile *)0x0;
  }
  else {
    pGVar8 = G3D_WaterTile::G3D_WaterTile(pGVar8);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  G3D_WaterTile::meth_0x4d9dd0(pGVar8,(int)(param_1 + 0x1c));
  pGVar8->mbr_0xac = (dword)param_1[0x43];
  if (param_1[0x43] == 0.0) {
    piVar2 = (int *)(pGVar8->G3D_Mesh).mbr_0x3c;
    if ((piVar2 == (int *)0x0) || ((int)((pGVar8->G3D_Mesh).mbr_0x40 - (int)piVar2) >> 2 < 1))
    goto LAB_005ab4de;
    iVar3 = *piVar2;
    *(undefined4 *)(iVar3 + 4) = 2;
    this_01 = (cls_0x50db20 *)(iVar3 + 0x24);
  }
  else {
    if ((pGVar8->G3D_Mesh).mbr_0x84 == 0) goto LAB_005ab4de;
    dVar1 = (pGVar8->G3D_Mesh).mbr_0x88;
    *(undefined4 *)(dVar1 + 0x100) = 2;
    this_01 = (cls_0x50db20 *)(dVar1 + 0x120);
  }
  ::cls_0x50db20::meth_0x401b20(this_01,(_String_base *)(param_1 + 0x11),0,0xffffffff);
LAB_005ab4de:
  pGVar8->mbr_0x9c = (dword)param_3;
  pGVar8->mbr_0xa0 = param_4;
  uVar11 = FUN_00616e24();
  pGVar8->mbr_0xa4 = (dword)uVar11;
  pGVar8->mbr_0xa8 = (dword)uVar11;
  local_100 = 0xf;
  local_104 = 0;
  local_118[4] = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_118,param_7,0,0xffffffff);
  local_4._0_1_ = 3;
  pcVar7 = "_";
  do {
    pcVar9 = pcVar7;
    pcVar7 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  cls_0x4d8d70::meth_0x4257d0
            ((cls_0x4d8d70 *)local_118,(undefined4 *)&DAT_00661164,(uint)(pcVar9 + -0x661164));
  cls_0x4d8d70::meth_0x4256e0((cls_0x4d8d70 *)local_118,(int)(param_1 + 3),0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&local_12c->mbr_0x8,(_String_base *)local_118,0,0xffffffff);
  G3D_Node::meth_0x4d9400(local_12c,pGVar8);
  G3D_Node::meth_0x4d80f0(local_64,(int)local_12c);
  pWVar10 = (WaterTileModelInstance *)operator_new(0x74);
  local_4._0_1_ = 4;
  if (pWVar10 == (WaterTileModelInstance *)0x0) {
    pWVar10 = (WaterTileModelInstance *)0x0;
  }
  else {
    pWVar10 = WaterTileModelInstance::WaterTileModelInstance(pWVar10,0x41200000);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  WaterTileModelInstance::meth_0x565f50(pWVar10,(int)&local_d8,(int)param_1,param_2,param_5);
  (*((pWVar10->ModelInstance).vftptr_0x0)->virt_meth_0x563950_8)
            (&pWVar10->ModelInstance,&local_f0,&local_e4,unaff_EDI);
  fVar4 = param_1[1];
  fVar5 = param_6 * 0.5 + *param_1;
  fVar6 = param_6 * 0.5 + param_1[2];
  WaterTileModelInstance::meth_0x563e30(pWVar10,fVar5,fVar4,fVar6);
  *(WaterTileModelInstance **)&(this->DynamicObject).field_0x15c = pWVar10;
  fStack_f8 = fVar5;
  fStack_f4 = fVar4;
  local_f0 = fVar6;
  meth_0x5680d0(this,(int *)&fStack_f8);
  (this->DynamicObject).mbr_0x10 = dStack_ec;
  (this->DynamicObject).mbr_0x14 = dStack_e8;
  (this->DynamicObject).mbr_0x18 = (dword)local_e4;
  (this->DynamicObject).mbr_0x1c = dStack_e0;
  (this->DynamicObject).mbr_0x20 = dStack_dc;
  (this->DynamicObject).mbr_0x24 = local_d8;
  *(dword *)&(this->DynamicObject).field_0x160 = param_4;
  *(undefined4 *)&(this->DynamicObject).field_0x164 = param_5;
  *(float *)&(this->DynamicObject).field_0x168 = param_6;
  *(_String_base **)&(this->DynamicObject).field_0x16c = param_7;
  *(dword *)&(this->DynamicObject).field_0x170 = pWVar10->mbr_0x60;
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_fc) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_110);
  }
  pVStack_fc = (VFX_Parameter__vftable_673a20 *)0xf;
  local_100 = 0;
  pvStack_110 = (void *)((uint)pvStack_110 & 0xffffff00);
  FUN_004f3de0((int)auStack_d4);
  ExceptionList = puStack_8;
  FUN_00616e15((uint)pvStack_c ^ (uint)param_1);
  return;
}


#include "../include/Entity.h"
