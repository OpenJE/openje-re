#include "../include/cls_0x441d20.h"

int __thiscall cls_0x441d20::meth_0x441d20(cls_0x441d20 *this)

{
  MapMaskManager *this_00;
  dword dVar1;
  int iVar2;
  uint uVar3;
  uint3 uVar4;
  
  this_00 = *(MapMaskManager **)(*(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x74) + 0x14);
  if (DAT_0070bd98 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0070bd98 + 0xc;
  }
  iVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x5c))();
  uVar3 = MapMaskManager::UpdateExploredMask(this_00,iVar2);
  dVar1 = this->mbr_0x4;
  uVar4 = (uint3)(dVar1 >> 8);
  if ((char)uVar3 != '\0') {
    *(dword *)(dVar1 + 0xf80) = this_00->mbr_0x34;
    *(undefined *)(dVar1 + 0xf0d) = 1;
    return (uint)uVar4 << 8;
  }
  *(undefined4 *)(dVar1 + 0xf80) = 0;
  *(undefined *)(dVar1 + 0xf0d) = 1;
  return (uint)uVar4 << 8;
}



void __thiscall cls_0x441d20::meth_0x441d90(cls_0x441d20 *this)

{
  int iVar1;
  ulonglong uVar2;
  float local_34;
  float local_30;
  float local_2c;
  undefined local_28 [4];
  undefined local_24 [4];
  float local_20;
  float local_1c [3];
  float local_10;
  int local_c;
  float local_8;
  int local_4;
  
  iVar1 = GameActionEquip::meth_0x54be10(*(GameActionEquip **)(DAT_0070bd90 + 0x2c));
  local_30 = *(float *)(&DAT_00658b34 + this->mbr_0x8 * 4);
  if (iVar1 == 0) {
    AreaMapWindow::meth_0x41d360((AreaMapWindow *)this->mbr_0x4,(int *)&local_10);
    local_2c = (float)(int)local_10;
    local_34 = (float)local_c;
    local_1c[0] = (float)(int)local_8;
    local_20 = (float)local_4;
  }
  else {
    local_10 = *(float *)(iVar1 + 4);
    local_8 = *(float *)(iVar1 + 0xc);
    AreaMapWindow::meth_0x41d2d0
              ((AreaMapWindow *)this->mbr_0x4,local_10,local_8,&local_2c,&local_34);
    local_1c[0] = local_2c;
    local_20 = local_34;
  }
  local_30 = 1.0 / local_30;
  local_2c = local_30 * local_2c;
  local_34 = local_30 * local_34;
  (**(code **)(*(int *)this->mbr_0x4 + 0x14))(local_24,local_28);
  cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_20,local_1c);
  uVar2 = FUN_00616e24();
  local_2c = (float)uVar2;
  uVar2 = FUN_00616e24();
  local_30 = (float)uVar2;
  uVar2 = FUN_00616e24();
  iVar1 = (int)uVar2;
  uVar2 = FUN_00616e24();
  AreaMapWindow::meth_0x41d220((AreaMapWindow *)this->mbr_0x4,(int)uVar2,iVar1);
  return;
}



void __thiscall cls_0x441d20::meth_0x441ee0(cls_0x441d20 *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  dword dVar2;
  AreaMapWindow *this_00;
  int iVar3;
  undefined4 unaff_EBP;
  ulonglong uVar4;
  char unaff_retaddr;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [3];
  int local_18;
  int local_14;
  undefined4 uStack_4;
  
  if (((-1 < param_1) && (param_1 < 5)) && (param_1 != this->mbr_0x8)) {
    local_28 = *(undefined4 *)(&DAT_00658b34 + this->mbr_0x8 * 4);
    piVar1 = (int *)this->mbr_0x4;
    local_24[0] = *(undefined4 *)(&DAT_00658b34 + param_1 * 4);
    this->mbr_0x8 = param_1;
    local_14 = piVar1[0x34d];
    local_18 = piVar1[0x34c];
    (**(code **)(*piVar1 + 0x14))(&param_1,&local_2c);
    cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_28,local_24);
    uVar4 = FUN_00616e24();
    uStack_4 = (undefined4)uVar4;
    FUN_00616e24();
    dVar2 = this->mbr_0x4;
    *(undefined4 *)(dVar2 + 0xf84) = local_2c;
    *(undefined *)(dVar2 + 0xf0d) = 1;
    if (unaff_retaddr == '\0') {
      uVar4 = FUN_00616e24();
      param_1 = (int)uVar4;
      uVar4 = FUN_00616e24();
      param_2 = (undefined4)uVar4;
    }
    this_00 = (AreaMapWindow *)this->mbr_0x4;
    FUN_00616e24();
    uVar4 = FUN_00616e24();
    iVar3 = (int)uVar4;
    FUN_00616e24();
    uVar4 = FUN_00616e24();
    AreaMapWindow::meth_0x41d220(this_00,(int)uVar4,iVar3);
    cls_0x4b28a0::meth_0x4b28e0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_18);
    if ((AreaMapWindow *)this->mbr_0x4 != (AreaMapWindow *)0x0) {
      AreaMapWindow::meth_0x4235a0((AreaMapWindow *)this->mbr_0x4);
      AreaMapWindow::meth_0x41f080((AreaMapWindow *)this->mbr_0x4,(char)local_18,local_14,unaff_EBP)
      ;
      AreaMapWindow::meth_0x41ef80((AreaMapWindow *)this->mbr_0x4,(char)local_18,local_14,unaff_EBP)
      ;
    }
    meth_0x441d90(this);
  }
  return;
}



void __thiscall cls_0x441d20::meth_0x442450(cls_0x441d20 *this)

{
  AreaMapWindow **ppAVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  int *piVar7;
  char *pcVar8;
  void *unaff_EBX;
  dword dVar9;
  uint unaff_ESI;
  int iVar10;
  uint unaff_retaddr;
  void *pvVar11;
  dword local_9c;
  undefined4 *****pppppuStack_94;
  undefined local_90;
  uint uStack_8c;
  uint local_80;
  VFX_Parameter__vftable_673a20 *local_7c;
  undefined uStack_78;
  dword dStack_68;
  dword dStack_64;
  undefined auStack_60 [20];
  dword dStack_4c;
  dword dStack_48;
  undefined uStack_40;
  uint uStack_3c;
  void *pvStack_38;
  dword dStack_30;
  uint uStack_2c;
  dword dStack_20;
  dword dStack_1c;
  dword dStack_18;
  uint local_10;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  uStack_8 = &LAB_0062e94b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_7c = (VFX_Parameter__vftable_673a20 *)0xf;
  local_80 = 0;
  local_90 = 0;
  local_4 = 0;
  if (DAT_0070bd98 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0070bd98 + 0xc;
  }
  ExceptionList = &pvStack_c;
  uVar4 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x5c))();
  if (DAT_0070bd98 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  iVar3 = (**(code **)(*piVar7 + 0x54))();
  iVar10 = 0;
  if (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x80) < 0x10) {
      pcVar8 = (char *)(iVar3 + 0x6c);
    }
    else {
      pcVar8 = *(char **)(iVar3 + 0x6c);
    }
    pcVar5 = pcVar8;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,pcVar8,(int)pcVar5 - (int)(pcVar8 + 1));
    iVar10 = FUN_004b8180();
  }
  dVar9 = 0;
  local_9c = 0;
  if (iVar10 == 0) {
    dStack_64 = 0xf;
    dStack_68 = 0;
    uStack_78 = 0;
    pcVar8 = "AreaMap-middle.bmp";
    do {
      pcVar5 = pcVar8;
      pcVar8 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_7c,"AreaMap-middle.bmp",(uint)(pcVar5 + -0x658b80));
    pvVar6 = (void *)0xbf800000;
    uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,2);
    (**(code **)(**(int **)((int)unaff_EBX + 4) + 0x130))(&local_7c,0,0,0,0xbf800000,0xbf800000,1);
    if (0xf < uStack_8c) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
  }
  else {
    if (local_80 < 0x10) {
      pppppuStack_94 = &pppppuStack_94;
    }
    pvVar6 = (void *)ResourceSystem::Demand(DAT_00707da8,pppppuStack_94,(int *)0x1,uVar4);
    if (pvVar6 != (void *)0x0) {
      dStack_48 = 0xf;
      dStack_4c = 0;
      auStack_60[4] = 0;
      uStack_2c = 0xf;
      dStack_30 = 0;
      uStack_40 = 0;
      dStack_20 = 0;
      dStack_1c = 0;
      dStack_18 = 0;
      uStack_8._0_1_ = 1;
      G3D_LightmapSurfaceAttribute::meth_0x4ca270
                ((G3D_LightmapSurfaceAttribute *)auStack_60,0xffffffff);
      uVar4 = G3D_LightmapSurfaceAttribute::meth_0x4ca2b0
                        ((G3D_LightmapSurfaceAttribute *)auStack_60,*(uint **)((int)pvVar6 + 0x2c),
                         '\0');
      if (((char)uVar4 != '\0') || (0 < (int)dStack_20)) {
        local_9c = dStack_1c;
        dVar9 = dStack_20;
      }
      ResourceSystem::Release(DAT_00707da8,pvVar6);
      uStack_8 = (undefined *)((uint)uStack_8._1_3_ << 8);
      G3D_LightmapSurfaceAttribute::meth_0x442230((G3D_LightmapSurfaceAttribute *)auStack_60);
    }
    pvVar6 = (void *)0xbf800000;
    pvVar11 = (void *)0x0;
    (**(code **)(**(int **)((int)unaff_EBX + 4) + 300))
              (iVar10,0,dVar9,local_9c,0,0,0xbf800000,0xbf800000,1,1);
    ppAVar1 = (AreaMapWindow **)((int)unaff_EBX + 4);
    unaff_EBX = pvVar11;
    AreaMapWindow::meth_0x4aa910(*ppAVar1,4);
  }
  iVar3 = *(int *)((int)unaff_EBX + 4);
  *(undefined *)(iVar3 + 0xf8d) = 0;
  *(undefined *)(iVar3 + 0xf0d) = 1;
  iVar3 = *(int *)((int)unaff_EBX + 4);
  *(undefined *)(iVar3 + 0xf8e) = 1;
  *(undefined *)(iVar3 + 0xf0d) = 1;
  if (0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar6);
  }
  ExceptionList = pvStack_38;
  FUN_00616e15(uStack_3c ^ uStack_2c);
  return;
}



void __thiscall cls_0x441d20::meth_0x442710(cls_0x441d20 *this,int param_1)

{
  dword dVar1;
  AreaMapWindow *pAVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 uVar6;
  void **ppvVar7;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_4c;
  AreaMapWindow *local_48;
  void *local_44;
  undefined local_40;
  dword dStack_34;
  uint local_30;
  VFX_Parameter__vftable_673a20 *local_2c;
  undefined uStack_28;
  dword dStack_1c;
  void *pvStack_18;
  dword dStack_14;
  VFX_Parameter__vftable_673a20 *pVStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e983;
  pvStack_c = ExceptionList;
  local_5c = *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x74) + 0x14) + 0x34)
  ;
  local_4c = *(undefined4 *)(&DAT_00658b34 + this->mbr_0x8 * 4);
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 4);
  }
  ExceptionList = &pvStack_c;
  if ((int *)this->mbr_0x4 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_004954a0((void *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int *)this->mbr_0x4);
    if ((undefined4 *)this->mbr_0x4 != (undefined4 *)0x0) {
      (***(code ***)(undefined4 *)this->mbr_0x4)(1);
    }
  }
  local_48 = (AreaMapWindow *)FUN_004a7680(0xfa4);
  local_4 = 0;
  if (local_48 == (AreaMapWindow *)0x0) {
    pAVar2 = (AreaMapWindow *)0x0;
  }
  else {
    pAVar2 = AreaMapWindow::AreaMapWindow(local_48,uVar6);
  }
  this->mbr_0x4 = (dword)pAVar2;
  local_4 = 0xffffffff;
  local_2c = (VFX_Parameter__vftable_673a20 *)0xf;
  local_30 = 0;
  local_40 = 0;
  pcVar5 = "AreaMap.ini";
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_44,"AreaMap.ini",(uint)(pcVar3 + -0x658ba0));
  ppvVar7 = &local_44;
  local_4 = 1;
  (**(code **)(*(int *)this->mbr_0x4 + 0xcc))(ppvVar7);
  puStack_8 = (undefined *)0xffffffff;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  dVar1 = this->mbr_0x4;
  *(undefined4 *)(dVar1 + 0xf80) = unaff_EBX;
  *(undefined *)(dVar1 + 0xf0d) = 1;
  local_30 = 0xf;
  dStack_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  pcVar5 = "winMiniMap";
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_48,"winMiniMap",(uint)(pcVar3 + -0x658b94));
  puStack_8 = (undefined *)0x2;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_48);
  puStack_8 = (undefined *)0xffffffff;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  dStack_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x48))(&local_5c,&stack0x00000000);
    (**(code **)(*piVar4 + 0x14))(&local_5c,&stack0xffffffa0);
    (**(code **)(*(int *)this->mbr_0x4 + 0x44))(unaff_EBP,pVStack_10);
    (**(code **)(*(int *)this->mbr_0x4 + 0x10))(unaff_EBP,ppvVar7);
    (**(code **)(*piVar4 + 0x5c))(0xff070f00);
  }
  pcVar5 = "@AreaMapWindow";
  dStack_14 = 0xf;
  pvStack_18 = (void *)0x0;
  uStack_28 = 0;
  do {
    pcVar5 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_2c,"AreaMapWindow",(uint)(pcVar5 + -0x658b48));
  puStack_8 = (undefined *)0x3;
  (**(code **)(*(int *)this->mbr_0x4 + 0x4c))(&local_2c);
  pvStack_c = (void *)0xffffffff;
  if (0xf < pvStack_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pvStack_18 = (void *)0xf;
  dStack_1c = 0;
  local_2c = (VFX_Parameter__vftable_673a20 *)((uint)local_2c & 0xffffff00);
  (**(code **)(*piVar4 + 0xa4))(this->mbr_0x4);
  AreaMapWindow::meth_0x4231b0((AreaMapWindow *)this->mbr_0x4);
  dVar1 = this->mbr_0x4;
  *(undefined4 *)(dVar1 + 0xf84) = uStack_58;
  *(undefined *)(dVar1 + 0xf0d) = 1;
  meth_0x442450(this);
  meth_0x441d20(this);
  meth_0x441d90(this);
  AreaMapWindow::meth_0x41f480((AreaMapWindow *)this->mbr_0x4,'\0');
  AreaMapWindow::meth_0x41f4d0((AreaMapWindow *)this->mbr_0x4,'\0');
  ExceptionList = pvStack_18;
  return;
}


