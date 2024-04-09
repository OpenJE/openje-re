#include "../include/G3D_Water.h"

void __thiscall G3D_Water::meth_0x4c8d70(G3D_Water *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (this->mbr_0x48 != 0) {
    *param_1 = this->mbr_0x4c;
    param_1[1] = this->mbr_0x50;
    param_1[2] = this->mbr_0x54;
    param_1[3] = &this->mbr_0x58;
    param_1[4] = &this->mbr_0x64;
    *(undefined *)(param_1 + 5) = *(undefined *)&this->mbr_0x70;
    param_1[6] = &this->mbr_0x74;
    param_1[7] = (this->cls_0x4d8d70).mbr_0x8;
    param_1[8] = (this->cls_0x4d8d70).mbr_0xc;
    param_1[9] = (this->cls_0x4d8d70).mbr_0x10;
    param_1[10] = (this->cls_0x4d8d70).mbr_0x14;
    param_1[0xb] = (this->cls_0x4d8d70).mbr_0x18;
    param_1[0xc] = (this->cls_0x4d8d70).mbr_0x1c;
  }
  return;
}



void * __thiscall G3D_Water::meth_0x4ce730(G3D_Water *this,void *param_1)

{
  FUN_004ce890(&(this->G3D_BaseAttribute).field_0x4,(cls_0x50db20 *)param_1);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall G3D_Water::virt_meth_0x4d24a0(G3D_Water *this)

{
  cls_0x50db20 *unaff_EDI;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  ulonglong uVar1;
  ulonglong uVar2;
  cls_0x50db20 *pcVar3;
  undefined8 local_44;
  double local_3c;
  uint local_2c;
  undefined local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633368;
  local_c = ExceptionList;
  pcVar3 = (cls_0x50db20 *)0x28;
  ExceptionList = &local_c;
  FUN_0052ba00('(');
  pcVar3 = FUN_0052ba50(&local_44,pcVar3);
  local_4 = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->G3D_BaseAttribute).field_0x4,(_String_base *)pcVar3,0,
             0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_44._4_4_);
  }
  pcVar3 = FUN_0052ba50(&local_44,unaff_EDI);
  local_4 = 1;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x38,(_String_base *)pcVar3,0,0xffffffff)
  ;
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_44._4_4_);
  }
  pcVar3 = FUN_0052ba50(local_28,unaff_EDI);
  local_4 = 2;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x58,(_String_base *)pcVar3,0,0xffffffff)
  ;
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  FUN_0052baf0((float10 *)unaff_EDI);
  local_44 = (double)extraout_ST0;
  FUN_0052baf0((float10 *)unaff_EDI);
  local_3c = (double)extraout_ST0_00;
  this->mbr_0x28 = (dword)local_44;
  this->mbr_0x2c = (dword)local_44._4_4_;
  *(double *)&this->mbr_0x30 = local_3c;
  FUN_0052baf0((float10 *)unaff_EDI);
  this->mbr_0x54 = (dword)(float)(extraout_ST0_01 * (float10)_DAT_006fb350 * (float10)_DAT_00708080)
  ;
  FUN_0052baf0((float10 *)unaff_EDI);
  uVar1 = FUN_00616e24();
  FUN_0052baf0((float10 *)unaff_EDI);
  uVar2 = FUN_00616e24();
  this->mbr_0x74 = (dword)uVar2;
  this->mbr_0x78 = (dword)uVar1;
  FUN_0052ba00(')');
  ExceptionList = local_c;
  return;
}



void __thiscall G3D_Water::virt_meth_0x4d2620(G3D_Water *this,FILE *param_1)

{
  G3D_LightmapSurfaceAttribute *this_00;
  dword local_10;
  dword local_c;
  dword local_8;
  dword local_4;
  
  local_8 = 0;
  local_4 = 0;
  local_10 = 0;
  local_c = 0;
  G3D_DirectionalLight::meth_0x4d06b0((G3D_DirectionalLight *)this,param_1);
  G3D_LightmapSurfaceAttribute::meth_0x4d0450(this_00,(FILE *)&this->mbr_0x38);
  G3D_LightmapSurfaceAttribute::meth_0x4d0450
            ((G3D_LightmapSurfaceAttribute *)&this->mbr_0x58,(FILE *)&this->mbr_0x58);
  _fread(&local_10,0x10,1,param_1);
  this->mbr_0x28 = local_10;
  this->mbr_0x2c = local_c;
  this->mbr_0x30 = local_8;
  this->mbr_0x34 = local_4;
  _fread(&this->mbr_0x54,4,1,param_1);
  _fread(&this->mbr_0x74,4,1,param_1);
  _fread(&this->mbr_0x78,4,1,param_1);
  return;
}



void __thiscall G3D_Water::virt_meth_0x4d26d0(G3D_Water *this,int param_1,int *param_2)

{
  dword *pdVar1;
  dword dVar2;
  dword dVar3;
  dword dVar4;
  dword dVar5;
  int iVar6;
  
  G3D_DirectionalLight::meth_0x4d0750((G3D_DirectionalLight *)this,param_1,param_2);
  FUN_004d0510((cls_0x50db20 *)&this->mbr_0x38,param_1,param_2);
  FUN_004d0510((cls_0x50db20 *)&this->mbr_0x58,param_1,param_2);
  pdVar1 = (dword *)(*param_2 + param_1);
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  dVar4 = pdVar1[2];
  dVar5 = pdVar1[3];
  *param_2 = *param_2 + 0x10;
  this->mbr_0x28 = dVar2;
  this->mbr_0x2c = dVar3;
  this->mbr_0x30 = dVar4;
  this->mbr_0x34 = dVar5;
  this->mbr_0x54 = *(dword *)(param_1 + *param_2);
  iVar6 = *param_2;
  *param_2 = iVar6 + 4;
  this->mbr_0x74 = *(dword *)(iVar6 + 4 + param_1);
  iVar6 = *param_2;
  *param_2 = iVar6 + 4;
  this->mbr_0x78 = *(dword *)(iVar6 + 4 + param_1);
  *param_2 = *param_2 + 4;
  return;
}



G3D_Water * __thiscall G3D_Water::G3D_Water(G3D_Water *this)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006336ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  this->mbr_0x20 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_Water__vftable_671fd4_00671fd4;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x50 = 0xf;
  this->mbr_0x4c = 0;
  *(undefined *)&this->mbr_0x3c = 0;
  this->mbr_0x70 = 0xf;
  this->mbr_0x6c = 0;
  *(undefined *)&this->mbr_0x5c = 0;
  local_4 = 2;
  dVar1 = FUN_0051da20();
  (this->cls_0x4d8d70).mbr_0x4 = dVar1;
  (this->cls_0x4d8d70).mbr_0x8 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  ExceptionList = local_c;
  return this;
}



G3D_Water * __thiscall G3D_Water::~G3D_Water(G3D_Water *this)

{
  int **ppiVar1;
  int *piVar2;
  G3D_Water *local_4;
  
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_Water__vftable_671fd4_00671fd4;
  ppiVar1 = (int **)(this->cls_0x4d8d70).mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  cls_0x4d8d70::meth_0x51e0b0(&this->cls_0x4d8d70,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x4d8d70).mbr_0x4);
}



int * __thiscall G3D_Water::virt_meth_0x4d9110(G3D_Water *this,byte param_1)

{
  ~G3D_Water(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



G3D_Water * __thiscall G3D_Water::G3D_Water(G3D_Water *this,int param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006336ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->G3D_BaseAttribute).vftptr_0x0 = &G3D_BaseAttribute__vftable_671ce0_00671ce0;
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->G3D_BaseAttribute).field_0x4,(_String_base *)(param_1 + 4),0,
             0xffffffff);
  this->mbr_0x20 = *(dword *)(param_1 + 0x20);
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_Water__vftable_671fd4_00671fd4;
  this->mbr_0x28 = *(dword *)(param_1 + 0x28);
  this->mbr_0x2c = *(dword *)(param_1 + 0x2c);
  this->mbr_0x30 = *(dword *)(param_1 + 0x30);
  this->mbr_0x34 = *(dword *)(param_1 + 0x34);
  this->mbr_0x50 = 0xf;
  this->mbr_0x4c = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x3c = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x38,(_String_base *)(param_1 + 0x38),0,0xffffffff);
  this->mbr_0x54 = *(dword *)(param_1 + 0x54);
  this->mbr_0x70 = 0xf;
  this->mbr_0x6c = 0;
  local_4._0_1_ = 1;
  *(undefined *)&this->mbr_0x5c = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x58,(_String_base *)(param_1 + 0x58),0,0xffffffff);
  this->mbr_0x74 = *(dword *)(param_1 + 0x74);
  this->mbr_0x78 = *(dword *)(param_1 + 0x78);
  local_4 = CONCAT31(local_4._1_3_,2);
  cls_0x4d8d70::cls_0x4d8d70(&this->cls_0x4d8d70,param_1 + 0x7c);
  ExceptionList = local_c;
  return this;
}


#include "../include/G3D_Water.h"
