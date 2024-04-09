#include "../include/Gfx_HeightFog.h"

Gfx_HeightFog * __thiscall Gfx_HeightFog::Gfx_HeightFog(Gfx_HeightFog *this)

{
  (this->Gfx_BaseObject).mbr_0x3c = 0;
  (this->Gfx_BaseObject).mbr_0x38 = 0;
  (this->Gfx_BaseObject).mbr_0x34 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x30 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x28 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x24 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x20 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x1c = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x14 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x10 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0xc = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x8 = 0;
  this->mbr_0x40 = 0x3f800000;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x2c = 0x3f800000;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x18 = 0x3f800000;
  (this->Gfx_BaseObject).mbr_0x4 = 0x3f800000;
  (this->Gfx_BaseObject).vftptr_0x0 =
       (Gfx_BaseObject__vftable_651b28 *)&Gfx_HeightFog__vftable_6744dc_006744dc;
  this->mbr_0x44 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0xff000000;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  return this;
}



Gfx_HeightFog * __thiscall Gfx_HeightFog::~Gfx_HeightFog(Gfx_HeightFog *this)

{
  Gfx_HeightFog *pGVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006355c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_BaseObject).vftptr_0x0 =
       (Gfx_BaseObject__vftable_651b28 *)&Gfx_HeightFog__vftable_6744dc_006744dc;
  local_4 = 0;
  pGVar1 = (Gfx_HeightFog *)(**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x44);
  (this->Gfx_BaseObject).vftptr_0x0 = &Gfx_BaseObject__vftable_651b28_00651b28;
  ExceptionList = this;
  return pGVar1;
}



undefined4 * __thiscall Gfx_HeightFog::virt_meth_0x505eb0(Gfx_HeightFog *this,byte param_1)

{
  ~Gfx_HeightFog(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall
Gfx_HeightFog::CreateFog
          (Gfx_HeightFog *this,undefined4 param_1,float param_2,float param_3,dword param_4,
          dword param_5,float param_6,dword param_7,dword param_8,float param_9)

{
  int iVar1;
  Gfx_Texture *this_00;
  int iVar2;
  dword *pdVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined auStack_30 [4];
  int iStack_2c;
  _String_base a_Stack_24 [4];
  void *pvStack_20;
  dword dStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_006355e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 < 0.0 != (param_2 == 0.0)) {
    ExceptionList = &pvStack_c;
    handle_fatal_error("Gfx_HeightFog::CreateFog() - fog base_height <= 0.0f!");
  }
  if (param_6 < param_3) {
    handle_fatal_error("Gfx_HeightFog::CreateFog() - fog base_height > total_height!");
  }
  if (param_6 < 0.0 != (param_6 == 0.0)) {
    handle_fatal_error("Gfx_HeightFog::CreateFog() - fog total_height <= 0.0f!");
  }
  if ((param_9 < 0.0 != (param_9 == 0.0)) || (1.0 < param_9)) {
    handle_fatal_error("Gfx_HeightFog::CreateFog() - invalid max_fog_density");
  }
  *(float *)&this->field_0x48 = param_3;
  this->mbr_0x4c = (dword)param_6;
  this->mbr_0x54 = param_4;
  this->mbr_0x58 = param_5;
  this->mbr_0x50 = (dword)param_2;
  this->mbr_0x5c = param_7;
  this->mbr_0x60 = param_8;
  pdVar3 = &this->mbr_0x44;
  if (this->mbr_0x44 == 0) {
    iVar1 = (**(code **)(*DAT_00707ce4 + 200))(pdVar3,0x20,0x20,1,0x15,1);
    if (iVar1 < 0) {
      handle_fatal_error("Gfx_HeightFog::CreateFog() - Failed to create fog map!");
    }
    else {
      iVar1 = (**(code **)(*DAT_00707ce4 + 0xd8))(*pdVar3);
      if (iVar1 != 0) {
        cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)a_Stack_24,"[FogMap]");
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(iVar1 + 4),a_Stack_24,0,0xffffffff);
        if ((void *)0xf < pvStack_c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_20);
        }
        pvStack_c = (void *)0xf;
        dStack_10 = 0;
        pvStack_20 = (void *)((uint)pvStack_20 & 0xffffff00);
      }
    }
  }
  this_00 = (Gfx_Texture *)(**(code **)(*DAT_00707ce4 + 0xd8))(*pdVar3);
  iVar1 = Gfx_Texture::LockRect(this_00,0,auStack_30,0,0,0);
  if (iVar1 < 0) {
    handle_fatal_error("Gfx_HeightFog::CreateFog() - Failed to lock fog map!");
  }
  else {
    uVar4 = 0;
    do {
      uVar5 = FUN_00616e24();
      iVar1 = uVar4 << 7;
      iVar2 = 0x20;
      do {
        *(uint *)(iVar1 + iStack_2c) = (int)uVar5 << 0x18 | (uint)param_2 & 0xffffff;
        iVar1 = iVar1 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x20);
    Gfx_Texture::meth_0x534bf0(this_00,0);
  }
  ExceptionList = pvStack_c;
  return;
}


#include "../include/Gfx_HeightFog.h"
