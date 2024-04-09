#include "../include/Graphics.h"

Graphics * __thiscall Graphics::Graphics(Graphics *this)

{
  Gfx_Engine *pGVar1;
  cls_0x4bdae0 *pcVar2;
  dword dVar3;
  MapMaskManager *pMVar4;
  VFX_Sound *this_00;
  cls_0x4bdae0 *pcStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00639986;
  pcStack_c = (cls_0x4bdae0 *)ExceptionList;
  ExceptionList = &pcStack_c;
  this->vftptr_0x0 = &Graphics__vftable_69b228_0069b228;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x18 = 1;
  *(undefined *)((int)&this->mbr_0x18 + 1) = 0;
  this->mbr_0x1c = 800;
  this->mbr_0x20 = 600;
  this->mbr_0x24 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x49 = 1;
  this->mbr_0x4a = 0;
  this->mbr_0x4b = 0;
  this->mbr_0x4c = 0x40;
  this->mbr_0x4d = 0x40;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 1;
  this->mbr_0x55 = 1;
  this->mbr_0x56 = 1;
  this->mbr_0x57 = 1;
  this->mbr_0x58 = 0;
  this->mbr_0x59 = 1;
  this->mbr_0x5a = 0;
  this->mbr_0x5b = 0;
  this->mbr_0x5c = 1;
  this->mbr_0x5d = 0;
  this->mbr_0x5e = 0;
  this->mbr_0x60 = 0;
  FUN_005ad940(&LAB_00580da0,&LAB_00580dd0,&LAB_00580e00);
  VFX_Sound::virt_meth_0x4080b0(this_00);
  pGVar1 = FUN_005b30c0();
  this->mbr_0x8 = (dword)pGVar1;
  if (pGVar1 == (Gfx_Engine *)0x0) {
    handle_fatal_error("Unable to create graphics system.");
  }
  FUN_00497120((byte *)0x69b1e4);
  this->mbr_0xc = 0;
  pcStack_c = (cls_0x4bdae0 *)operator_new(0xf0);
  if (pcStack_c == (cls_0x4bdae0 *)0x0) {
    pcVar2 = (cls_0x4bdae0 *)0x0;
  }
  else {
    pcVar2 = cls_0x4bdae0::cls_0x4bdae0(pcStack_c);
  }
  this->mbr_0x10 = (dword)pcVar2;
  dVar3 = FUN_0056af50();
  this->mbr_0x64 = dVar3;
  pcStack_c = (cls_0x4bdae0 *)operator_new(0x44);
  if (pcStack_c != (cls_0x4bdae0 *)0x0) {
    pMVar4 = MapMaskManager::MapMaskManager((MapMaskManager *)pcStack_c);
    this->mbr_0x14 = (dword)pMVar4;
    ExceptionList = puStack_8;
    return this;
  }
  this->mbr_0x14 = 0;
  ExceptionList = puStack_8;
  return this;
}



void __thiscall Graphics::meth_0x580f80(Graphics *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    iVar1 = *(int *)this->mbr_0x8;
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)this->mbr_0x8;
    if (param_1 != 2) {
      (**(code **)(iVar1 + 0x60))(0);
      (**(code **)(*(int *)this->mbr_0x8 + 0x68))(1);
      if ((undefined *)this->mbr_0x10 != (undefined *)0x0) {
        *(undefined *)this->mbr_0x10 = 1;
        this->mbr_0x50 = param_1;
        return;
      }
      goto LAB_00580fd9;
    }
    uVar2 = 1;
  }
  (**(code **)(iVar1 + 0x60))(uVar2);
  (**(code **)(*(int *)this->mbr_0x8 + 0x68))(0);
  if ((undefined *)this->mbr_0x10 != (undefined *)0x0) {
    *(undefined *)this->mbr_0x10 = 0;
  }
LAB_00580fd9:
  this->mbr_0x50 = param_1;
  return;
}



dword __thiscall Graphics::meth_0x580ff0(Graphics *this)

{
  uint uVar1;
  
  uVar1 = (this->mbr_0x50 + 1) % 3;
  this->mbr_0x50 = uVar1;
  meth_0x580f80(this,uVar1);
  return this->mbr_0x50;
}



void __thiscall Graphics::meth_0x581040(Graphics *this)

{
  (**(code **)(*(int *)this->mbr_0x8 + 0x10c))(0);
  return;
}



void __thiscall Graphics::meth_0x581050(Graphics *this,undefined4 param_1)

{
  (**(code **)(*(int *)this->mbr_0x8 + 0x108))(param_1,0);
  return;
}



void __thiscall Graphics::meth_0x581070(Graphics *this,undefined param_1,undefined param_2)

{
  (**(code **)(*(int *)this->mbr_0x8 + 0x110))(&param_1,0);
  return;
}



void __thiscall Graphics::meth_0x581090(Graphics *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(*(int *)this->mbr_0x8 + 0x118))(param_1,param_2,0);
  return;
}



void __thiscall Graphics::meth_0x581490(Graphics *this)

{
  this->mbr_0x4 = 0;
  GUI::Manager::meth_0x4b4920((Manager *)&DAT_00707dfc.field_0x4c);
  if (DAT_00707ce4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005814aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_00707ce4 + 0x24))();
    return;
  }
  return;
}



void __thiscall Graphics::Initialize(Graphics *this)

{
  dword *pdVar1;
  dword dVar2;
  dword dVar3;
  char *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  void **ppvVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 extraout_EDX;
  undefined4 uVar12;
  dword dVar13;
  dword unaff_ESI;
  undefined8 uVar14;
  undefined auStack_c4 [4];
  undefined uStack_c0;
  dword dStack_b0;
  dword dStack_ac;
  VFX_Parameter__vftable_673a20 *pVStack_a8;
  dword dStack_a4;
  dword dStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined *puStack_68;
  int iStack_64;
  undefined4 uStack_60;
  dword dStack_5c;
  char cStack_49;
  
  if (this->mbr_0x4 != 0) {
    meth_0x581490(this);
  }
  dVar13 = this->mbr_0x3c;
  this->mbr_0x4 = 1;
  uVar7 = (**(code **)(*DAT_00707ce4 + 4))();
  if (uVar7 <= this->mbr_0x2c) {
    this->mbr_0x2c = 0;
  }
  uVar7 = (**(code **)(*DAT_00707ce4 + 8))();
  if (uVar7 <= this->mbr_0x30) {
    this->mbr_0x30 = 0;
  }
  (**(code **)(*DAT_00707ce4 + 0xc))();
  (**(code **)(*DAT_00707ce4 + 0x10))();
  dVar2 = this->mbr_0x30;
  dVar3 = this->mbr_0x2c;
  pdVar1 = &this->mbr_0x34;
  cVar5 = (**(code **)(*DAT_00707ce4 + 0x28))();
  if (cVar5 == '\0') {
    dStack_5c = 0x5818d5;
    handle_fatal_error("Cannot find requested mode.\n");
  }
  dStack_5c = this->mbr_0x2c;
  uStack_60 = 0x5818eb;
  uVar14 = (**(code **)(*DAT_00707ce4 + 0x10))();
  uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
  iVar9 = (int)uVar14;
  iVar11 = *pdVar1 * 0x20 + iVar9;
  if (*(char *)(*pdVar1 * 0x20 + 0x1c + iVar9) == '\0') {
    iStack_64 = *(int *)(iVar11 + 0x10);
    uStack_60 = *(undefined4 *)(iVar11 + 0x14);
    if ((iStack_64 == 0x16) || (iStack_64 == 0x15)) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    puStack_68 = (undefined *)((-(uint)bVar6 & 0x10) + 0x10);
    FUN_00497120((byte *)
                 "@@@ Selected Displaymode does NOT support stencil buffers: %d x %d x %dbpp DisplayFormat = %d DepthStencil = %d\n"
                );
    uVar12 = extraout_EDX;
    dVar13 = unaff_ESI;
  }
  cStack_49 = (char)(dVar2 >> 0x18);
  iStack_64._1_3_ = (undefined3)((uint)uVar12 >> 8);
  iStack_64._0_1_ = cStack_49 == '\0';
  uStack_60 = 0;
  puStack_68 = (undefined *)*pdVar1;
  cVar5 = (**(code **)(*DAT_00707ce4 + 0x20))();
  if (cVar5 == '\0') {
    handle_fatal_error("CreateDevice failed.\n");
  }
  else {
    (**(code **)(*DAT_00707ce4 + 0x3c))();
    (**(code **)(*DAT_00707ce4 + 0x1bc))();
  }
  *(undefined *)&this->mbr_0x38 = uStack_60._3_1_;
  this->mbr_0x3c = dVar13;
  this->mbr_0x40 = dVar3;
  this->mbr_0x44 = dStack_5c;
  iVar9 = *(int *)(*pdVar1 * 0x20 + iVar9 + 0x10);
  if ((iVar9 == 0x16) || (iVar9 == 0x15)) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  this->mbr_0x48 = bVar6;
  (**(code **)(*DAT_00707ce4 + 0xf0))();
  bVar6 = this->mbr_0x55;
  (**(code **)(*DAT_00707ce4 + 0x70))();
  meth_0x581050(this,0);
  meth_0x581070(this,0x80,bVar6);
  meth_0x581090(this,0x437a0000,0x43fa0000);
  (**(code **)(*DAT_00707ce4 + 0x1c4))();
  (**(code **)(*DAT_00707ce4 + 0x1c0))();
  cls_0x4b2ac0::meth_0x4b4ce0
            ((cls_0x4b2ac0 *)&DAT_00707dfc.field_0x4c,this->mbr_0x3c,this->mbr_0x40);
  cls_0x4b2ac0::meth_0x4b2ac0((cls_0x4b2ac0 *)&DAT_00707dfc.field_0x4c,FUN_0056c280);
  (**(code **)(*DAT_00707ce4 + 0x138))();
  uStack_94 = 0x581a9a;
  ppvVar8 = (void **)ResourceSystem::MemStreamOpen
                               (DAT_00707da8,(int *)"ProjectedShadow.tga",(int *)0x0);
  if (ppvVar8 == (void **)0x0) {
    FUN_00497120((byte *)
                 "Graphics::Initialize - Cannot load \"ProjectedShadow.tga\" for projected shadow\n"
                );
  }
  else {
    pVStack_a8 = (VFX_Parameter__vftable_673a20 *)ppvVar8[1];
    uStack_94 = 1;
    uStack_98 = 0xffffffff;
    uStack_9c = 1;
    dStack_a4 = (int)ppvVar8[2] - (int)pVStack_a8;
    dStack_a0 = 0;
    puStack_68 = auStack_c4;
    dStack_ac = 0xf;
    dStack_b0 = 0;
    uStack_c0 = 0;
    pcVar4 = "ProjectedShadow.tga";
    do {
      pcVar10 = pcVar4;
      pcVar4 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_c4,"ProjectedShadow.tga",(uint)(pcVar10 + -0x69b3c4));
    iVar9 = (**(code **)(*DAT_00707ce4 + 0xc4))(&puStack_68);
    if (iVar9 < 0) {
      FUN_005fb742(iVar9);
      FUN_00497120((byte *)
                   "Graphics::Initialize - Failed to load \"ProjectedShadow.tga\" from buffer (%x %s)\n"
                  );
    }
    FUN_00498f30(DAT_00707da8,ppvVar8);
    (**(code **)(*DAT_00707ce4 + 0x168))(pVStack_a8);
  }
  meth_0x580f80(this,this->mbr_0x50);
  uStack_94 = 0x581b62;
  ppvVar8 = (void **)ResourceSystem::MemStreamOpen
                               (DAT_00707da8,(int *)"SilhouetteEdge.tga",(int *)0x0);
  if (ppvVar8 != (void **)0x0) {
    pVStack_a8 = (VFX_Parameter__vftable_673a20 *)ppvVar8[1];
    uStack_94 = 1;
    uStack_98 = 0xffffffff;
    uStack_9c = 1;
    dStack_a0 = 0;
    dStack_a4 = (int)ppvVar8[2] - (int)pVStack_a8;
    puStack_68 = auStack_c4;
    dStack_ac = 0xf;
    dStack_b0 = 0;
    uStack_c0 = 0;
    pcVar4 = "SilhouetteEdge.tga";
    do {
      pcVar10 = pcVar4;
      pcVar4 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_c4,"SilhouetteEdge.tga",(uint)(pcVar10 + -0x69b308));
    iVar9 = (**(code **)(*DAT_00707ce4 + 0xc4))(&puStack_68);
    if (iVar9 < 0) {
      FUN_005fb742(iVar9);
      FUN_00497120((byte *)
                   "Graphics::Initialize - Failed to load \"SilhouetteEdge.tga\" from buffer (%x %s)\n"
                  );
    }
    FUN_00498f30(DAT_00707da8,ppvVar8);
    (**(code **)(*DAT_00707ce4 + 0x1b4))(pVStack_a8);
    return;
  }
  FUN_00497120((byte *)
               "Graphics::Initialize - Cannot load \"SilhouetteEdge.tga\" for Silhouette rendering\n"
              );
  return;
}



void __thiscall Graphics::virt_meth_0x582bb0(Graphics *this)

{
  char cVar1;
  VFX_Parameter *this_00;
  cls_0x4dff90 *this_01;
  char *pcVar2;
  cls_0x50db20 *pcVar3;
  char *pcVar4;
  uint unaff_retaddr;
  int local_88;
  void *local_84;
  dword local_74;
  uint local_70;
  _String_base a_Stack_6c [4];
  void *pvStack_68;
  dword dStack_58;
  uint uStack_54;
  _String_base a_Stack_50 [4];
  void *pvStack_4c;
  dword dStack_3c;
  uint uStack_38;
  char acStack_34 [36];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639a53;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  this_00 = (VFX_Parameter *)FUN_0056af30();
  local_70 = 0xf;
  local_74 = 0;
  local_84 = (void *)((uint)local_84 & 0xffffff00);
  pcVar4 = "Graphics";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_88,"Graphics",(uint)(pcVar2 + -0x6990e8));
  local_4 = 0;
  this_01 = (cls_0x4dff90 *)VFX_Parameter::meth_0x4e0470(this_00,&local_88);
  local_4 = 0xffffffff;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    _free(local_84);
  }
  local_70 = 0xf;
  uStack_54 = 0xf;
  local_74 = 0;
  local_84 = (void *)((uint)local_84 & 0xffffff00);
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "adapter";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"adapter",(uint)(pcVar2 + -0x69b564));
  local_4 = 1;
  pcVar2 = __itoa(this->mbr_0x2c,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "device";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"device",(uint)(pcVar2 + -0x69b55c));
  local_4 = 2;
  pcVar2 = __itoa(this->mbr_0x30,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "displaymode";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"displaymode",(uint)(pcVar2 + -0x69b550))
  ;
  local_4 = 3;
  pcVar2 = __itoa(this->mbr_0x34,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "fullscreen";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"fullscreen",(uint)(pcVar2 + -0x69b544));
  local_4 = 4;
  pcVar2 = __itoa((uint)*(byte *)&this->mbr_0x38,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "width";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"width",(uint)(pcVar2 + -0x677a38));
  local_4 = 5;
  pcVar2 = __itoa(this->mbr_0x3c,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "height";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"height",(uint)(pcVar2 + -0x677a30));
  local_4 = 6;
  pcVar2 = __itoa(this->mbr_0x40,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "refresh";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"refresh",(uint)(pcVar2 + -0x69b53c));
  local_4 = 7;
  pcVar2 = __itoa(this->mbr_0x44,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "mode32bpp";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"mode32bpp",(uint)(pcVar2 + -0x69b530));
  local_4 = 8;
  pcVar2 = __itoa((uint)this->mbr_0x48,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "stats";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"stats",(uint)(pcVar2 + -0x69b528));
  local_4 = 9;
  pcVar2 = __itoa((uint)this->mbr_0x4a,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "clear red";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"clear red",(uint)(pcVar2 + -0x69b51c));
  local_4 = 10;
  pcVar2 = __itoa((uint)this->mbr_0x4b,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "clear green";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"clear green",(uint)(pcVar2 + -0x69b510))
  ;
  local_4 = 0xb;
  pcVar2 = __itoa((uint)this->mbr_0x4c,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "clear blue";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"clear blue",(uint)(pcVar2 + -0x69b504));
  local_4 = 0xc;
  pcVar2 = __itoa((uint)this->mbr_0x4d,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "shadow type";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"shadow type",(uint)(pcVar2 + -0x69b4f8))
  ;
  local_4 = 0xd;
  pcVar2 = __itoa(this->mbr_0x50,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "enable lighting";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)a_Stack_6c,"enable lighting",(uint)(pcVar2 + -0x69b4e8));
  local_4 = 0xe;
  pcVar2 = __itoa((uint)this->mbr_0x54,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "enable bilinear filtering";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)a_Stack_6c,"enable bilinear filtering",(uint)(pcVar2 + -0x69b4cc));
  local_4 = 0xf;
  pcVar2 = __itoa((uint)this->mbr_0x55,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "enable startup movies";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)a_Stack_6c,"enable startup movies",(uint)(pcVar2 + -0x69b4b4));
  local_4 = 0x10;
  pcVar2 = __itoa((uint)this->mbr_0x56,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "vsync";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"vsync",(uint)(pcVar2 + -0x69b4ac));
  local_4 = 0x11;
  pcVar2 = __itoa((uint)this->mbr_0x49,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "enable wireframe";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)a_Stack_6c,"enable wireframe",(uint)(pcVar2 + -0x69b498));
  local_4 = 0x12;
  pcVar2 = __itoa((uint)this->mbr_0x58,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_38 = 0xf;
  dStack_3c = 0;
  pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
  pcVar4 = "enable transparency";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)a_Stack_50,"enable transparency",(uint)(pcVar2 + -0x69b484));
  local_4 = 0x13;
  pcVar2 = __itoa((uint)this->mbr_0x59,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_50);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4c);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



Graphics * __thiscall Graphics::~Graphics(Graphics *this)

{
  cls_0x4b8f70 *this_00;
  Graphics *pGVar1;
  DialogueManager *this_01;
  
  this->vftptr_0x0 = &Graphics__vftable_69b228_0069b228;
  virt_meth_0x582bb0(this);
  if ((undefined4 *)this->mbr_0x14 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x14)(1);
  }
  cls_0x4b8f70::meth_0x4bb7a0((cls_0x4b8f70 *)this->mbr_0x10);
  this_00 = (cls_0x4b8f70 *)this->mbr_0x10;
  if (this_00 != (cls_0x4b8f70 *)0x0) {
    cls_0x4b8f70::meth_0x4bd470(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  meth_0x581490(this);
  FUN_005b3150();
  DialogueManager::CommandAttackModeSelect(this_01);
  pGVar1 = (Graphics *)FUN_00497120((byte *)"Graphics system destroyed.\n");
  return pGVar1;
}



undefined4 * __thiscall Graphics::virt_meth_0x5838b0(Graphics *this,byte param_1)

{
  ~Graphics(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall Graphics::meth_0x590a20(Graphics *this)

{
  dword *pdVar1;
  HANDLE hObject;
  CMusic *pCVar2;
  dword *pdVar3;
  DWORD local_14;
  CMusic *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639fbb;
  local_c = ExceptionList;
  pdVar3 = (dword *)0x0;
  if (this->mbr_0x18 != 0) {
    if (this->mbr_0x1c < 0x10) {
      pdVar3 = &this->mbr_0x8;
    }
    else {
      pdVar3 = (dword *)this->mbr_0x8;
    }
  }
  pdVar1 = (dword *)0x0;
  if (this->mbr_0x34 != 0) {
    if (this->mbr_0x38 < 0x10) {
      pdVar1 = &this->mbr_0x24;
    }
    else {
      pdVar1 = (dword *)this->mbr_0x24;
    }
  }
  ExceptionList = &local_c;
  FUN_0052acf0(global_hWnd,DAT_00707da8,(int)pdVar3,(int)pdVar1,*(char *)&this->mbr_0x3c != '\0',
               *(char *)((int)&this->mbr_0x3c + 1) != '\0',
               *(char *)((int)&this->mbr_0x3c + 2) != '\0');
  hObject = FUN_0061b269((LPSECURITY_ATTRIBUTES)0x0,0,0x5909a0,0,0,&local_14);
  if (hObject != (HANDLE)0x0) {
    CloseHandle(hObject);
  }
  local_10 = (CMusic *)operator_new(0x120);
  local_4 = 0;
  if (local_10 != (CMusic *)0x0) {
    pCVar2 = CMusic::CMusic(local_10);
    this->mbr_0x40 = (dword)pCVar2;
    ExceptionList = local_c;
    return;
  }
  this->mbr_0x40 = 0;
  ExceptionList = local_c;
  return;
}


#include "../include/Graphics.h"
