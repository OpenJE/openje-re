#include "../include/Gfx_ParticleInfo.h"

void __thiscall Gfx_ParticleInfo::meth_0x513af0(Gfx_ParticleInfo *this,int param_1)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  
  (this->Gfx_ParticleInfoBase).mbr_0x4 = *(dword *)(param_1 + 4);
  (this->Gfx_ParticleInfoBase).mbr_0x8 = *(dword *)(param_1 + 8);
  (this->Gfx_ParticleInfoBase).mbr_0xc = *(dword *)(param_1 + 0xc);
  (this->Gfx_ParticleInfoBase).mbr_0x10 = *(dword *)(param_1 + 0x10);
  (this->Gfx_ParticleInfoBase).mbr_0x14 = *(dword *)(param_1 + 0x14);
  (this->Gfx_ParticleInfoBase).mbr_0x18 = *(dword *)(param_1 + 0x18);
  (this->Gfx_ParticleInfoBase).mbr_0x1c = *(dword *)(param_1 + 0x1c);
  (this->Gfx_ParticleInfoBase).mbr_0x20 = *(dword *)(param_1 + 0x20);
  (this->Gfx_ParticleInfoBase).mbr_0x24 = *(dword *)(param_1 + 0x24);
  (this->Gfx_ParticleInfoBase).mbr_0x28 = *(dword *)(param_1 + 0x28);
  (this->Gfx_ParticleInfoBase).mbr_0x2c = *(dword *)(param_1 + 0x2c);
  (this->Gfx_ParticleInfoBase).mbr_0x30 = *(dword *)(param_1 + 0x30);
  (this->Gfx_ParticleInfoBase).mbr_0x34 = *(dword *)(param_1 + 0x34);
  (this->Gfx_ParticleInfoBase).mbr_0x38 = *(dword *)(param_1 + 0x38);
  (this->Gfx_ParticleInfoBase).mbr_0x3c = *(dword *)(param_1 + 0x3c);
  (this->Gfx_ParticleInfoBase).mbr_0x40 = *(dword *)(param_1 + 0x40);
  (this->Gfx_ParticleInfoBase).mbr_0x44 = *(dword *)(param_1 + 0x44);
  (this->Gfx_ParticleInfoBase).mbr_0x48 = *(dword *)(param_1 + 0x48);
  (this->Gfx_ParticleInfoBase).mbr_0x4c = *(dword *)(param_1 + 0x4c);
  (this->Gfx_ParticleInfoBase).mbr_0x50 = *(dword *)(param_1 + 0x50);
  (this->Gfx_ParticleInfoBase).mbr_0x54 = *(dword *)(param_1 + 0x54);
  (this->Gfx_ParticleInfoBase).mbr_0x58 = *(dword *)(param_1 + 0x58);
  (this->Gfx_ParticleInfoBase).mbr_0x5c = *(dword *)(param_1 + 0x5c);
  (this->Gfx_ParticleInfoBase).mbr_0x60 = *(dword *)(param_1 + 0x60);
  (this->Gfx_ParticleInfoBase).mbr_0x64 = *(dword *)(param_1 + 100);
  (this->Gfx_ParticleInfoBase).mbr_0x68 = *(dword *)(param_1 + 0x68);
  (this->Gfx_ParticleInfoBase).mbr_0x6c = *(dword *)(param_1 + 0x6c);
  (this->Gfx_ParticleInfoBase).mbr_0x70 = *(dword *)(param_1 + 0x70);
  (this->Gfx_ParticleInfoBase).mbr_0x74 = *(dword *)(param_1 + 0x74);
  (this->Gfx_ParticleInfoBase).mbr_0x78 = *(dword *)(param_1 + 0x78);
  (this->Gfx_ParticleInfoBase).mbr_0x7c = *(dword *)(param_1 + 0x7c);
  (this->Gfx_ParticleInfoBase).mbr_0x80 = *(byte *)(param_1 + 0x80);
  (this->Gfx_ParticleInfoBase).mbr_0x81 = *(byte *)(param_1 + 0x81);
  pdVar2 = (dword *)(param_1 + 0x84);
  pdVar3 = &(this->Gfx_ParticleInfoBase).mbr_0x84;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  return;
}



Gfx_ParticleInfo * __thiscall Gfx_ParticleInfo::Gfx_ParticleInfo(Gfx_ParticleInfo *this)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_ParticleInfoBase).mbr_0x38 = 0;
  (this->Gfx_ParticleInfoBase).mbr_0x34 = 0;
  (this->Gfx_ParticleInfoBase).mbr_0x30 = 0;
  (this->Gfx_ParticleInfoBase).mbr_0x48 = 0;
  (this->Gfx_ParticleInfoBase).mbr_0x44 = 0;
  (this->Gfx_ParticleInfoBase).mbr_0x40 = 0;
  local_4 = 0;
  (this->Gfx_ParticleInfoBase).vftptr_0x0 =
       (Gfx_ParticleInfoBase__vftable_675d88 *)&Gfx_ParticleInfo__vftable_675da0_00675da0;
  dVar1 = FUN_005147c0();
  (this->cls_0x515ed0).mbr_0x4 = dVar1;
  (this->cls_0x515ed0).mbr_0x8 = 0;
  ExceptionList = local_c;
  return this;
}



Gfx_ParticleInfo * __thiscall Gfx_ParticleInfo::~Gfx_ParticleInfo(Gfx_ParticleInfo *this)

{
  int **ppiVar1;
  int *piVar2;
  Gfx_ParticleInfo *local_4;
  
  (this->Gfx_ParticleInfoBase).vftptr_0x0 =
       (Gfx_ParticleInfoBase__vftable_675d88 *)&Gfx_ParticleInfo__vftable_675da0_00675da0;
  ppiVar1 = (int **)(this->cls_0x515ed0).mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  cls_0x515ed0::meth_0x5149d0(&this->cls_0x515ed0,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x515ed0).mbr_0x4);
}



int * __thiscall Gfx_ParticleInfo::virt_meth_0x514c80(Gfx_ParticleInfo *this,byte param_1)

{
  ~Gfx_ParticleInfo(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



Gfx_ParticleInfo * __thiscall Gfx_ParticleInfo::Gfx_ParticleInfo(Gfx_ParticleInfo *this,int param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Gfx_ParticleInfoBase::Gfx_ParticleInfoBase(&this->Gfx_ParticleInfoBase,param_1);
  local_4 = 0;
  (this->Gfx_ParticleInfoBase).vftptr_0x0 =
       (Gfx_ParticleInfoBase__vftable_675d88 *)&Gfx_ParticleInfo__vftable_675da0_00675da0;
  cls_0x515ed0::cls_0x515ed0(&this->cls_0x515ed0,param_1 + 0xc4);
  this->mbr_0xd0 = *(byte *)(param_1 + 0xd0);
  ExceptionList = local_c;
  return this;
}


#include "../include/Gfx_ParticleInfo.h"
