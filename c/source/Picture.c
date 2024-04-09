#include "../include/Picture.h"

Picture * __thiscall GUI::Picture::Picture(Picture *this,uint param_1)

{
  Window::Window(&this->Window,param_1);
  *(undefined4 *)&(this->Window).Base.field_0xd1c = 0;
  (this->Window).Base.field_0xd20 = 0;
  *(undefined4 *)&(this->Window).Base.field_0xd28 = 0;
  *(undefined4 *)&(this->Window).Base.field_0xd24 = 0;
  (this->Window).Base.vftptr_0x0 = (Base__vftable_66e41c *)&Picture__vftable_66da34_0066da34;
  *(undefined ***)&(this->Window).Base.field_0x18 = &PTR_virt_meth_0x4aaa90_0066da28;
  return this;
}



Picture * __thiscall GUI::Picture::~Picture(Picture *this)

{
  int iVar1;
  Picture *pPVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631f18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Window).Base.vftptr_0x0 = (Base__vftable_66e41c *)&Picture__vftable_66da34_0066da34;
  *(undefined ***)&(this->Window).Base.field_0x18 = &PTR_virt_meth_0x4aaa90_0066da28;
  iVar1 = *(int *)&(this->Window).Base.field_0xd1c;
  local_4 = 0;
  if ((iVar1 != 0) && ((this->Window).Base.field_0xd20 != '\0')) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(iVar1);
  }
  local_4 = 0xffffffff;
  pPVar2 = (Picture *)Label::meth_0x4b0a50((Label *)this);
  ExceptionList = pvStack_c;
  return pPVar2;
}



int * __thiscall GUI::Picture::virt_meth_0x4aaef0(Picture *this,byte param_1)

{
  ~Picture(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



void __thiscall GUI::Picture::meth_0x4aaf10(Picture *this)

{
  uint uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_EBX;
  uint unaff_retaddr;
  undefined *puVar8;
  undefined auStack_80 [3];
  undefined local_7d;
  undefined auStack_7c [4];
  undefined4 *local_78;
  undefined local_74;
  uint uStack_68;
  uint local_64;
  undefined local_60 [80];
  uint local_10;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  uStack_8 = &LAB_00631f40;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  *(undefined4 *)&(this->Window).Base.field_0xd28 = 0;
  *(undefined4 *)&(this->Window).Base.field_0xd24 = 0;
  local_7d = 0;
  local_60._0_4_ = (G3D_BaseAttribute__vftable_671ce0 *)0xf;
  local_64 = 0;
  local_74 = 0;
  puVar8 = auStack_7c + 4;
  local_4 = 0;
  (*(this->Window).Base.vftptr_0x0[7].virt_meth_0x4af060_4)(this);
  uVar4 = uStack_68;
  if ((uStack_68 != 0) && (3 < (int)uStack_68)) {
    puVar2 = local_78;
    if (local_64 < 0x10) {
      puVar2 = (undefined4 *)(auStack_7c + 4);
    }
    if (*(char *)((int)puVar2 + (uStack_68 - 4)) == '.') {
      puVar2 = local_78;
      if (local_64 < 0x10) {
        puVar2 = (undefined4 *)(auStack_7c + 4);
      }
      uVar1 = FUN_004a11e0(*(byte *)((int)puVar2 + (uStack_68 - 3)));
      if ((char)uVar1 == 'T') {
        puVar2 = local_78;
        if (local_64 < 0x10) {
          puVar2 = (undefined4 *)(auStack_7c + 4);
        }
        uVar1 = FUN_004a11e0(*(byte *)((int)puVar2 + (uVar4 - 2)));
        if ((char)uVar1 == 'G') {
          pbVar3 = (byte *)cls_0x4d8d70::meth_0x4a8140((cls_0x4d8d70 *)auStack_7c,uVar4 - 1);
          uVar4 = FUN_004a11e0(*pbVar3);
          if ((char)uVar4 == 'A') {
            if (local_64 < 0x10) {
              local_78 = (undefined4 *)(auStack_7c + 4);
            }
            pvVar5 = (void *)ResourceSystem::Demand(DAT_00707da8,local_78,(int *)0x1,(uint)puVar8);
            if (pvVar5 != (void *)0x0) {
              cls_0x442200::cls_0x442200((cls_0x442200 *)local_60);
              uStack_8._0_1_ = 1;
              G3D_LightmapSurfaceAttribute::meth_0x4ca270
                        ((G3D_LightmapSurfaceAttribute *)local_60,0xffffffff);
              uVar4 = G3D_LightmapSurfaceAttribute::meth_0x4ca2b0
                                ((G3D_LightmapSurfaceAttribute *)local_60,
                                 *(uint **)((int)pvVar5 + 0x2c),'\0');
              if (((char)uVar4 != '\0') || (0 < (int)local_60._64_4_)) {
                *(undefined4 *)&(this->Window).Base.field_0xd24 = local_60._64_4_;
                *(undefined4 *)&(this->Window).Base.field_0xd28 = local_60._68_4_;
                unaff_EBX = CONCAT13(1,(int3)unaff_EBX);
              }
              ResourceSystem::Release(DAT_00707da8,pvVar5);
              uStack_8 = (undefined *)((uint)uStack_8._1_3_ << 8);
              G3D_LightmapSurfaceAttribute::meth_0x442230((G3D_LightmapSurfaceAttribute *)local_60);
              if ((char)((uint)unaff_EBX >> 0x18) != '\0') goto LAB_004ab0f9;
            }
          }
        }
      }
    }
  }
  puVar8 = auStack_80;
  (*(this->Window).Base.vftptr_0x0[7].virt_deldtor_0x4af000_0)(this);
  if (unaff_EBX != 0) {
    iVar6 = (**(code **)(*DAT_00707ce4 + 0xd8))(unaff_EBX,puVar8);
    if (iVar6 != 0) {
      if (*(int *)(iVar6 + 0x28) < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x24) + 0x1c);
      }
      *(undefined4 *)&(this->Window).Base.field_0xd24 = uVar7;
      if (*(int *)(iVar6 + 0x28) < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x24) + 0x20);
      }
      *(undefined4 *)&(this->Window).Base.field_0xd28 = uVar7;
    }
  }
LAB_004ab0f9:
  Gregorian::meth_0x4b15a0
            ((Gregorian *)&(this->Window).Base.field_0x5f0,0,0,
             (float)*(int *)&(this->Window).Base.field_0xd24,
             (float)*(int *)&(this->Window).Base.field_0xd28);
  if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_7c);
  }
  ExceptionList = (void *)local_60._76_4_;
  FUN_00616e15(local_60._72_4_ ^ (uint)uStack_8);
  return;
}



void __thiscall
GUI::Picture::virt_meth_0x4ab1f0
          (Picture *this,_String_base *param_1,undefined4 param_2,dword param_3,dword param_4,
          dword param_5,dword param_6)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint unaff_EDI;
  uint unaff_retaddr;
  undefined auStack_bc [4];
  undefined uStack_b8;
  dword dStack_ac;
  dword dStack_9c;
  uint local_98;
  dword dStack_94;
  dword dStack_90;
  dword dStack_8c;
  FILE *local_70;
  dword local_6c;
  dword local_68;
  Base *local_64;
  dword *local_60;
  undefined local_5c [56];
  uint uStack_24;
  dword local_1c;
  dword local_18;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631f58;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_70 = (FILE *)0x0;
  local_68 = 0;
  local_6c = 0;
  ExceptionList = &pvStack_c;
  local_64 = (Base *)this;
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar8 = (undefined4 *)(param_1 + 4);
    puVar3 = puVar8;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      puVar3 = (undefined4 *)*puVar8;
    }
    dStack_8c = 0x4ab258;
    ExceptionList = &pvStack_c;
    pvVar4 = (void *)ResourceSystem::Demand(DAT_00707da8,puVar3,(int *)0x1,unaff_EDI);
    if (pvVar4 != (void *)0x0) {
      iVar7 = *(int *)(param_1 + 0x14);
      bVar1 = false;
      if (3 < iVar7) {
        if (0xf < *(uint *)(param_1 + 0x18)) {
          puVar8 = (undefined4 *)*puVar8;
        }
        if (*(char *)((int)puVar8 + iVar7 + -4) == '.') {
          pbVar5 = (byte *)cls_0x4d8d70::meth_0x4a8140((cls_0x4d8d70 *)param_1,iVar7 + -3);
          uVar6 = FUN_004a11e0(*pbVar5);
          if ((char)uVar6 == 'T') {
            pbVar5 = (byte *)cls_0x4d8d70::meth_0x4a8140((cls_0x4d8d70 *)param_1,iVar7 + -2);
            uVar6 = FUN_004a11e0(*pbVar5);
            if ((char)uVar6 == 'G') {
              pbVar5 = (byte *)cls_0x4d8d70::meth_0x4a8140((cls_0x4d8d70 *)param_1,iVar7 + -1);
              uVar6 = FUN_004a11e0(*pbVar5);
              if ((char)uVar6 == 'A') {
                cls_0x442200::cls_0x442200((cls_0x442200 *)local_5c);
                local_4 = 0;
                G3D_LightmapSurfaceAttribute::meth_0x4ca270
                          ((G3D_LightmapSurfaceAttribute *)local_5c,0xffffffff);
                dStack_8c = 0x4ab309;
                uVar6 = G3D_LightmapSurfaceAttribute::meth_0x4ca2b0
                                  ((G3D_LightmapSurfaceAttribute *)local_5c,
                                   *(uint **)((int)pvVar4 + 0x2c),'\0');
                if (((char)uVar6 != '\0') || (bVar1 = false, 0 < (int)local_1c)) {
                  local_68 = local_1c;
                  local_6c = local_18;
                  bVar1 = true;
                }
                local_4 = 0xffffffff;
                G3D_LightmapSurfaceAttribute::meth_0x442230
                          ((G3D_LightmapSurfaceAttribute *)local_5c);
              }
            }
          }
        }
      }
      local_60 = &dStack_9c;
      local_98 = local_98 & 0xffffff00;
      dStack_ac = 0x4ab35f;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&dStack_9c,param_1,0,0xffffffff);
      cVar2 = (**(code **)(*DAT_00707ce4 + 0xdc))();
      if (cVar2 == '\0') {
        dStack_9c = *(dword *)((int)pvVar4 + 0x20);
        dStack_8c = 1;
        dStack_90 = 1;
        dStack_94 = 1;
        local_98 = 0;
        local_60 = (dword *)auStack_bc;
        uStack_b8 = 0;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)auStack_bc,param_1,0,0xffffffff);
        iVar7 = (**(code **)(*DAT_00707ce4 + 0xc4))(&local_70);
        if (iVar7 < 0) {
          local_70 = (FILE *)0x0;
        }
      }
      ResourceSystem::Release(DAT_00707da8,pvVar4);
      if (((!bVar1) && (local_70 != (FILE *)0x0)) &&
         (iVar7 = (**(code **)(*DAT_00707ce4 + 0xd8))(), iVar7 != 0)) {
        if (*(int *)(iVar7 + 0x28) < 1) {
          local_68 = 0;
          local_6c = 0;
        }
        else {
          local_68 = *(dword *)(*(int *)(iVar7 + 0x24) + 0x1c);
          local_6c = *(dword *)(*(int *)(iVar7 + 0x24) + 0x20);
        }
      }
    }
  }
  dStack_8c = param_6;
  dStack_90 = param_5;
  dStack_94 = param_4;
  local_98 = param_3;
  dStack_9c = local_6c;
  dStack_ac = 0x4ab461;
  (*local_64->vftptr_0x0[6].virt_meth_0x4b2830_36)(local_64,local_70);
  ExceptionList = (void *)local_5c._44_4_;
  FUN_00616e15(local_5c._40_4_ ^ uStack_24);
  return;
}



void __thiscall GUI::Picture::virt_meth_0x4ab490(Picture *this,LONG param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631f78;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "picture";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ExceptionList = &pVStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"picture",(uint)(pcVar2 + -0x66db74));
  local_4 = 0;
  (*(this->Window).Base.vftptr_0x0[4].virt_meth_0x4b27e0_24)((Base *)this,param_1,(LONG)local_28);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = pVStack_c;
  return;
}



void __thiscall GUI::Picture::virt_meth_0x4ab530(Picture *this,undefined *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined *this_00;
  undefined4 *puVar3;
  int iVar4;
  void *this_01;
  cls_0x50db20 *pcVar5;
  undefined4 *puVar6;
  void *pvStack_24;
  uint uStack_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword dStack_4;
  
  this_00 = param_1;
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_00631f78;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  puVar3 = (undefined4 *)(param_1 + 4);
  puVar6 = puVar3;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    puVar6 = (undefined4 *)*puVar3;
  }
  piVar1 = (int *)(param_1 + 0x14);
  puVar2 = (uint *)(param_1 + 0x18);
  param_1 = &stack0xffffffc0;
  if (0xf < *puVar2) {
    puVar3 = (undefined4 *)*puVar3;
  }
  ExceptionList = &local_c;
  cls_0x4d8d70::meth_0x49c7a0
            ((cls_0x4d8d70 *)this_00,(int *)&param_1,(int)puVar3,*piVar1 + (int)puVar6);
  iVar4 = Gregorian::meth_0x4b1490((Gregorian *)&(this->Window).Base.field_0x5f0);
  if ((iVar4 != 0) &&
     (this_01 = (void *)(**(code **)(*DAT_00707ce4 + 0xd8))(), this_01 != (void *)0x0)) {
    pcVar5 = FUN_004ab1c0(this_01,(cls_0x50db20 *)&stack0xffffffd8);
    dStack_4 = 0;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)this_00,(_String_base *)pcVar5,0,0xffffffff);
    if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_24);
    }
  }
  ExceptionList = local_c;
  return;
}


#include "../include/Picture.h"
