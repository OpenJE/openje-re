#include "../include/cls_0x57c610.h"

void __thiscall cls_0x57c610::meth_0x57c610(cls_0x57c610 *this)

{
  dword *this_00;
  dword dVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  dword *pdVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  VFX_Parameter__vftable_673a20 *unaff_EDI;
  uint unaff_retaddr;
  undefined auStack_bc [4];
  undefined uStack_b8;
  dword dStack_ac;
  dword dStack_9c;
  uint uStack_98;
  dword dStack_94;
  dword dStack_90;
  dword dStack_8c;
  dword local_6c;
  dword local_68;
  dword local_64;
  dword *pdStack_60;
  undefined auStack_5c [80];
  void *pvStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639648;
  pvStack_c = ExceptionList;
  auStack_5c._76_4_ = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  if (this->mbr_0x60 != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*DAT_00707ce4 + 0xd0))();
    this->mbr_0x60 = 0;
  }
  this->mbr_0x68 = 0;
  this->mbr_0x64 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  if (this->mbr_0x18 != 0) {
    this_00 = &this->mbr_0x4;
    if (this->mbr_0x1c < 0x10) {
      pdVar5 = &this->mbr_0x8;
    }
    else {
      pdVar5 = (dword *)this->mbr_0x8;
    }
    dStack_8c = 0x57c696;
    pvVar4 = (void *)ResourceSystem::Demand(DAT_00707da8,pdVar5,(int *)0x1,(uint)unaff_EDI);
    if (pvVar4 != (void *)0x0) {
      dVar1 = this->mbr_0x18;
      bVar2 = false;
      if (3 < (int)dVar1) {
        if (this->mbr_0x1c < 0x10) {
          pdVar5 = &this->mbr_0x8;
        }
        else {
          pdVar5 = (dword *)this->mbr_0x8;
        }
        if (*(char *)((int)pdVar5 + (dVar1 - 4)) == '.') {
          pbVar6 = (byte *)cls_0x4d8d70::meth_0x4a8140((cls_0x4d8d70 *)this_00,dVar1 - 3);
          uVar7 = FUN_004a11e0(*pbVar6);
          if ((char)uVar7 == 'T') {
            pbVar6 = (byte *)cls_0x4d8d70::meth_0x4a8140((cls_0x4d8d70 *)this_00,dVar1 - 2);
            uVar7 = FUN_004a11e0(*pbVar6);
            if ((char)uVar7 == 'G') {
              pbVar6 = (byte *)cls_0x4d8d70::meth_0x4a8140((cls_0x4d8d70 *)this_00,dVar1 - 1);
              uVar7 = FUN_004a11e0(*pbVar6);
              if ((char)uVar7 == 'A') {
                cls_0x442200::cls_0x442200((cls_0x442200 *)auStack_5c);
                dStack_4 = 0;
                G3D_LightmapSurfaceAttribute::meth_0x4ca270
                          ((G3D_LightmapSurfaceAttribute *)auStack_5c,0xffffffff);
                dStack_8c = 0x57c74a;
                uVar7 = G3D_LightmapSurfaceAttribute::meth_0x4ca2b0
                                  ((G3D_LightmapSurfaceAttribute *)auStack_5c,
                                   *(uint **)((int)pvVar4 + 0x2c),'\0');
                if (((char)uVar7 != '\0') || (0 < (int)auStack_5c._64_4_)) {
                  local_68 = auStack_5c._64_4_;
                  local_64 = auStack_5c._68_4_;
                  bVar2 = true;
                }
                dStack_4 = 0xffffffff;
                G3D_LightmapSurfaceAttribute::meth_0x442230
                          ((G3D_LightmapSurfaceAttribute *)auStack_5c);
              }
            }
          }
        }
      }
      pdStack_60 = &dStack_9c;
      uStack_98 = uStack_98 & 0xffffff00;
      dStack_ac = 0x57c79c;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&dStack_9c,(_String_base *)this_00,0,0xffffffff)
      ;
      cVar3 = (**(code **)(*DAT_00707ce4 + 0xdc))();
      if (cVar3 == '\0') {
        dStack_9c = *(dword *)((int)pvVar4 + 0x20);
        dStack_8c = 1;
        dStack_90 = 1;
        dStack_94 = 1;
        uStack_98 = 0;
        pdStack_60 = (dword *)auStack_bc;
        uStack_b8 = 0;
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)auStack_bc,(_String_base *)this_00,0,0xffffffff);
        iVar8 = (**(code **)(*DAT_00707ce4 + 0xc4))(&local_6c);
        if (iVar8 < 0) {
          local_6c = 0;
        }
      }
      ResourceSystem::Release(DAT_00707da8,pvVar4);
      if (((!bVar2) && (local_6c != 0)) &&
         (iVar8 = (**(code **)(*DAT_00707ce4 + 0xd8))(), iVar8 != 0)) {
        if (*(int *)(iVar8 + 0x28) < 1) {
          local_68 = 0;
          local_64 = 0;
        }
        else {
          local_68 = *(dword *)(*(int *)(iVar8 + 0x24) + 0x1c);
          local_64 = *(dword *)(*(int *)(iVar8 + 0x24) + 0x20);
        }
      }
    }
  }
  this->mbr_0x60 = local_6c;
  this->mbr_0x64 = local_68;
  this->mbr_0x68 = local_64;
  if ((int)this->mbr_0x28 < 0) {
    this->mbr_0x28 = local_68;
  }
  if ((int)this->mbr_0x2c < 0) {
    this->mbr_0x2c = local_64;
  }
  if ((int)this->mbr_0x20 < 0) {
    this->mbr_0x20 = (int)local_68 / 2;
  }
  if ((int)this->mbr_0x24 < 0) {
    this->mbr_0x24 = (int)local_64 / 2;
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(auStack_5c._76_4_ ^ unaff_retaddr);
  return;
}


