#include "../include/G3D_ParticleEmitter.h"

G3D_ParticleEmitter * __thiscall G3D_ParticleEmitter::G3D_ParticleEmitter(G3D_ParticleEmitter *this)

{
  dword dVar1;
  
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  this->mbr_0x20 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_ParticleEmitter__vftable_671de4_00671de4;
  this->mbr_0x3c = 0xf;
  this->mbr_0x38 = 0;
  *(undefined *)&this->mbr_0x28 = 0;
  dVar1 = DAT_006fb354;
  this->mbr_0x40 = DAT_006fb350;
  this->mbr_0x44 = dVar1;
  return this;
}



undefined4 * __thiscall
G3D_ParticleEmitter::virt_meth_0x4cbbd0(G3D_ParticleEmitter *this,byte param_1)

{
  ~G3D_ParticleEmitter(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



G3D_ParticleEmitter * __thiscall
G3D_ParticleEmitter::~G3D_ParticleEmitter(G3D_ParticleEmitter *this)

{
  G3D_ParticleEmitter *in_EAX;
  
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_ParticleEmitter__vftable_671de4_00671de4;
  if (0xf < this->mbr_0x3c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x28);
  }
  this->mbr_0x3c = 0xf;
  this->mbr_0x38 = 0;
  *(undefined *)&this->mbr_0x28 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 = &G3D_BaseAttribute__vftable_671ce0_00671ce0;
  if (0xf < (this->G3D_BaseAttribute).mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->G3D_BaseAttribute).mbr_0x8);
  }
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  return in_EAX;
}



void __thiscall G3D_ParticleEmitter::virt_meth_0x4d2260(G3D_ParticleEmitter *this)

{
  dword dVar1;
  uint unaff_retaddr;
  int local_3c [4];
  _String_base local_2c [4];
  void *local_28;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &local_c;
  FUN_0052ba00('(');
  FUN_0052b940(local_3c);
  FUN_0052afe0((cls_0x50db20 *)local_2c);
  local_4 = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x24,local_2c,0,0xffffffff);
  FUN_0052ba00(')');
  dVar1 = DAT_006fb354;
  this->mbr_0x40 = DAT_006fb350;
  this->mbr_0x44 = dVar1;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall G3D_ParticleEmitter::virt_meth_0x4d2330(G3D_ParticleEmitter *this,FILE *param_1)

{
  dword dVar1;
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  G3D_LightmapSurfaceAttribute::meth_0x4d0450
            ((G3D_LightmapSurfaceAttribute *)local_2c,
             (FILE *)(G3D_LightmapSurfaceAttribute *)local_2c);
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x24,local_2c,0,0xffffffff);
  dVar1 = DAT_006fb354;
  this->mbr_0x40 = DAT_006fb350;
  this->mbr_0x44 = dVar1;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
G3D_ParticleEmitter::virt_meth_0x4d23e0(G3D_ParticleEmitter *this,int param_1,int *param_2)

{
  dword dVar1;
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004d0510((cls_0x50db20 *)local_2c,param_1,param_2);
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x24,local_2c,0,0xffffffff);
  dVar1 = DAT_006fb354;
  this->mbr_0x40 = DAT_006fb350;
  this->mbr_0x44 = dVar1;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}


#include "../include/G3D_ParticleEmitter.h"
