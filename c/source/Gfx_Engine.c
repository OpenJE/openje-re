#include "../include/Gfx_Engine.h"

void __thiscall Gfx_Engine::meth_0x53a220(Gfx_Engine *this,undefined4 *param_1,undefined4 *param_2)

{
  MMRESULT MVar1;
  ulonglong uVar2;
  undefined4 local_20 [2];
  tMIXERCONTROLDETAILS local_18;
  
  *param_1 = 0;
  *param_2 = 0;
  local_18.dwControlID = this->mbr_0x2c;
  local_18.paDetails = local_20;
  local_18.cbStruct = 0x18;
  local_18.cChannels = 2;
  local_18.u.hwndOwner = (HWND)0x0;
  local_18.cbDetails = 4;
  MVar1 = mixerGetControlDetailsA((HMIXEROBJ)this->mbr_0x20,&local_18,0x80000000);
  if (MVar1 == 0) {
    uVar2 = FUN_00616e24();
    *param_1 = (int)uVar2;
    uVar2 = FUN_00616e24();
    *param_2 = (int)uVar2;
  }
  return;
}



void __thiscall Gfx_Engine::meth_0x53a320(Gfx_Engine *this,int param_1,int param_2)

{
  int iVar1;
  uint local_20;
  uint local_1c;
  tMIXERCONTROLDETAILS local_18;
  
  if ((HMIXEROBJ)this->mbr_0x20 != (HMIXEROBJ)0x0) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    else if (100 < param_1) {
      param_1 = 100;
    }
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (100 < param_2) {
      param_2 = 100;
    }
    iVar1 = this->mbr_0x24 - this->mbr_0x28;
    local_20 = (uint)(iVar1 * param_1) / 100;
    local_18.dwControlID = this->mbr_0x2c;
    local_1c = (uint)(iVar1 * param_2) / 100;
    local_18.paDetails = &local_20;
    local_18.cbStruct = 0x18;
    local_18.cChannels = 2;
    local_18.u.hwndOwner = (HWND)0x0;
    local_18.cbDetails = 4;
    mixerSetControlDetails((HMIXEROBJ)this->mbr_0x20,&local_18,0x80000000);
  }
  return;
}



void __thiscall Gfx_Engine::meth_0x53a3e0(Gfx_Engine *this,DWORD_PTR param_1)

{
  dword *phmx;
  MMRESULT MVar1;
  uint unaff_retaddr;
  HMIXER hmx;
  tagMIXERLINECONTROLSA tStack_158;
  tagMIXERCONTROLA tStack_140;
  tagMIXERLINEA tStack_ac;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  phmx = &this->mbr_0x20;
  MVar1 = mixerOpen((LPHMIXER)phmx,0,param_1,0,0x10000);
  if (MVar1 == 0) {
    tStack_ac.cbStruct = 0xa8;
    tStack_ac.dwComponentType = 0x1005;
    MVar1 = mixerGetLineInfoA((HMIXEROBJ)*phmx,&tStack_ac,0x80000003);
    if (MVar1 == 0) {
      tStack_158.dwLineID = tStack_ac.dwLineID;
      tStack_158.pamxctrl = &tStack_140;
      tStack_158.cbStruct = 0x18;
      tStack_158.u.dwControlID = 0x50030001;
      tStack_158.cControls = 1;
      tStack_158.cbmxctrl = 0x94;
      MVar1 = mixerGetLineControlsA((HMIXEROBJ)*phmx,&tStack_158,0x80000002);
      if (MVar1 == 0) {
        this->mbr_0x28 = tStack_140.Bounds.s.lMinimum;
        this->mbr_0x24 = tStack_140.Bounds.s.lMaximum;
        this->mbr_0x2c = tStack_140.dwControlID;
        goto LAB_0053a4d2;
      }
      hmx = (HMIXER)*phmx;
    }
    else {
      hmx = (HMIXER)*phmx;
    }
    mixerClose(hmx);
  }
  *phmx = 0;
LAB_0053a4d2:
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



undefined4 __thiscall Gfx_Engine::meth_0x53a670(Gfx_Engine *this,dword param_1,char param_2)

{
  dword dVar1;
  
  this->mbr_0x14 = param_1;
  dVar1 = Get_mbr_0x14(this);
  this->mbr_0x18 = dVar1;
  if ((dVar1 != this->mbr_0x1c) || (param_2 == '\x01')) {
    meth_0x53a320(this,dVar1,dVar1);
    this->mbr_0x1c = this->mbr_0x18;
  }
  return 0;
}



void __thiscall Gfx_Engine::meth_0x53a6b0(Gfx_Engine *this,char param_1)

{
  meth_0x53a670(this,this->mbr_0x14,param_1);
  return;
}



void __thiscall Gfx_Engine::meth_0x53a720(Gfx_Engine *this)

{
  uint uVar1;
  MCIERROR MVar2;
  undefined local_10 [4];
  dword local_c;
  undefined4 local_8;
  
  if ((this->Gfx_System_Interface).vftptr_0x0 != (Gfx_System_Interface__vftable_6ae2cc *)0x0) {
    meth_0x53a6b0(this,'\0');
    uVar1 = *(uint *)(DAT_0070b250 + 0x4c);
    if (this->mbr_0x30 + 500 < uVar1) {
      local_8 = 4;
      MVar2 = mciSendCommandA((MCIDEVICEID)(this->Gfx_System_Interface).vftptr_0x0,0x814,0x100,
                              (DWORD_PTR)local_10);
      if (MVar2 == 0) {
        this->mbr_0x4 = local_c;
      }
      local_8 = 2;
      MVar2 = mciSendCommandA((MCIDEVICEID)(this->Gfx_System_Interface).vftptr_0x0,0x814,0x100,
                              (DWORD_PTR)local_10);
      if (MVar2 == 0) {
        this->mbr_0xc = (local_c >> 8 & 0xff) * 0x3c + (local_c >> 0x10 & 0xff);
        this->mbr_0x10 = local_c & 0xff;
      }
      this->mbr_0x30 = uVar1;
    }
  }
  return;
}



void __thiscall Gfx_Engine::meth_0x5bda60(Gfx_Engine *this)

{
  (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_112)(1);
  (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_116)(1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x93,1);
  cls_0x490060::meth_0x503320
            ((cls_0x490060 *)&DAT_007082f8,0x88,(uint)(*(char *)(DAT_0070838c + 0xdd) == '\0'));
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x8e,0);
  if (*(char *)(DAT_0070838c + 0x2c) < '\0') {
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x8c,3);
    if ((*(uint *)(DAT_0070838c + 0x2c) & 0x10000) == 0) {
      FUN_00497120((byte *)"Device does NOT support range-based fog.  Default to depth-based.");
    }
    else {
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x30,1);
    }
  }
  (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_448)(1);
  FUN_005cbb40((int)&this->cls_0x5cb740);
  return;
}



void __thiscall Gfx_Engine::EnableProjectedShadow(Gfx_Engine *this)

{
  byte in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    this->mbr_0xe8 = 0;
    *(undefined *)(*(int *)(this->mbr_0x18 + 0x164) + 0x49) = 0;
    return;
  }
  if (this->mbr_0xec != 0) {
    this->mbr_0xe8 = in_stack_00000004;
    *(byte *)(*(int *)(this->mbr_0x18 + 0x164) + 0x49) = in_stack_00000004;
    return;
  }
  FUN_00497120((byte *)
               "Gfx_Engine::EnableProjectedShadow - ProjectedShadowTex and/or ShadowTex not available.\n"
              );
  return;
}



void __thiscall Gfx_Engine::InitializeSystem(Gfx_Engine *this)

{
  dword dVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  dword local_24 [4];
  dword local_14 [5];
  
  local_24[0] = 0x17;
  local_24[1] = 0x18;
  local_24[2] = 0x14;
  local_24[3] = 0x16;
  local_14[0] = 0x50;
  local_14[1] = 0x49;
  local_14[2] = 0x4d;
  local_14[3] = 0x4b;
  local_14[4] = 0x47;
  uVar3 = 0;
  do {
    dVar1 = local_24[uVar3];
    iVar2 = (**(code **)(*DAT_007082fc + 0x28))
                      (DAT_007082fc,DAT_00708384,*DAT_0070838c,DAT_0070830c,1,3,dVar1);
    if (-1 < iVar2) {
      uVar4 = 0;
      do {
        iVar2 = (**(code **)(*DAT_007082fc + 0x30))
                          (DAT_007082fc,DAT_00708384,*DAT_0070838c,DAT_0070830c,dVar1,
                           local_14[uVar4]);
        if (-1 < iVar2) {
          dVar1 = local_14[uVar4];
          this->mbr_0xa8 = local_24[uVar3];
          this->mbr_0xac = dVar1;
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 5);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  handle_fatal_error(
                    "Gfx_Engine::InitializeSystem - failed to find a suitable render target format for automap!\n"
                    );
  return;
}



void __thiscall Gfx_Engine::virt_meth_0x5bde90(Gfx_Engine *this)

{
  this->mbr_0x54 = 0x3e19999a;
  this->mbr_0x58 = 0x3fc00000;
  return;
}



void __thiscall Gfx_Engine::SetProjectedShadowTexture(Gfx_Engine *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  dword in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    FUN_00497120((byte *)"Gfx_Engine::SetProjectedShadowTexture - Setting a NULL texture!\n");
    return;
  }
  uVar1 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_216)();
  if (CONCAT31(extraout_var,uVar1) != 0) {
    this->mbr_0xec = in_stack_00000004;
    return;
  }
  FUN_00497120((byte *)"Gfx_Engine::SetProjectedShadowTexture - Unable to find texture!\n");
  return;
}



void __thiscall Gfx_Engine::SetSilhouetteEdgeTexture(Gfx_Engine *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  dword in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    FUN_00497120((byte *)"Gfx_Engine::SetSilhouetteEdgeTexture - Setting a NULL texture!\n");
    return;
  }
  uVar1 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_216)();
  if (CONCAT31(extraout_var,uVar1) != 0) {
    this->mbr_0xf4 = in_stack_00000004;
    return;
  }
  FUN_00497120((byte *)"Gfx_Engine::SetSilhouetteEdgeTexture - Unable to find texture!\n");
  return;
}



void __thiscall Gfx_Engine::virt_meth_0x5bdf80(Gfx_Engine *this,int param_1)

{
  void *pvVar1;
  
  if ((void *)this->mbr_0x64 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x64);
  }
  this->mbr_0x5c = param_1;
  pvVar1 = operator_new(param_1 * 0xc);
  this->mbr_0x64 = (dword)pvVar1;
  this->mbr_0x60 = 0;
  return;
}



void __thiscall Gfx_Engine::AddProjectedShadowPoint(Gfx_Engine *this)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000004;
  
  if (this->mbr_0xe8 != 0) {
    if (this->mbr_0x60 < this->mbr_0x5c) {
      puVar1 = (undefined4 *)(this->mbr_0x64 + this->mbr_0x60 * 0xc);
      *puVar1 = *in_stack_00000004;
      puVar1[1] = in_stack_00000004[1];
      puVar1[2] = in_stack_00000004[2];
      this->mbr_0x60 = this->mbr_0x60 + 1;
      return;
    }
    FUN_00497120((byte *)
                 "Gfx_Engine::AddProjectedShadowPoint - Need larger buffer!!! (current size: %d)\n")
    ;
  }
  return;
}



void __thiscall Gfx_Engine::CreateAutomapRenderTarget(Gfx_Engine *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)this->mbr_0x9c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x9c = 0;
  }
  piVar1 = (int *)this->mbr_0xa0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xa0 = 0;
  }
  if ((this->mbr_0x6c != 0) && (this->mbr_0x70 != 0)) {
    iVar2 = (**(code **)(*DAT_00708300 + 100))
                      (DAT_00708300,this->mbr_0x6c,this->mbr_0x70,this->mbr_0xa8,0,0,&this->mbr_0x9c
                      );
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*DAT_00708300 + 0x68))
                        (DAT_00708300,this->mbr_0x6c,this->mbr_0x70,this->mbr_0xac,0,&this->mbr_0xa0
                        );
      if (-1 < iVar2) {
        this->mbr_0x68 = 1;
        return;
      }
      FUN_005fb742(iVar2);
      FUN_005f8db4(iVar2);
      FUN_00497120((byte *)
                   "Gfx_Engine::CreateAutomapRenderTarget - failed to create depth/stencil: %s(%x) - %s\n"
                  );
      return;
    }
    FUN_005fb742(iVar2);
    FUN_005f8db4(iVar2);
    FUN_00497120((byte *)
                 "Gfx_Engine::CreateAutomapRenderTarget - failed to create render target: %s(%x) - %s\n"
                );
  }
  return;
}



void __thiscall Gfx_Engine::CreateFogOfWarRenderTarget(Gfx_Engine *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)this->mbr_0xdc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xdc = 0;
  }
  if ((this->mbr_0x94 != 0) && (this->mbr_0x98 != 0)) {
    iVar2 = (**(code **)(*DAT_00708300 + 0x50))
                      (DAT_00708300,this->mbr_0x94,this->mbr_0x98,1,1,this->mbr_0xa8,0,
                       &this->mbr_0xdc);
    if (iVar2 < 0) {
      this->mbr_0x891 = 0;
      FUN_005fb742(iVar2);
      FUN_005f8db4(iVar2);
      FUN_00497120((byte *)
                   "Gfx_Engine::CreateFogOfWarRenderTarget - CreateRenderTarget failed: %s(%x) - %s\n"
                  );
    }
  }
  return;
}



void __thiscall Gfx_Engine::ProcessFogOfWar(Gfx_Engine *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piStack_114;
  int *piStack_10c;
  int iStack_e8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  dword dStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  dword dStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  dword dStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  dword dStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  dword dStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if ((this->mbr_0xd4 != 0) && (this->mbr_0xd8 != 0)) {
    uVar1 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_404)();
    if (*(int *)(CONCAT31(extraout_var,uVar1) + 0x28) < 1) {
      iStack_e8 = 0;
    }
    else {
      iStack_e8 = *(int *)(*(int *)(CONCAT31(extraout_var,uVar1) + 0x24) + 0x44);
    }
    uVar1 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_408)();
    if (*(int *)(CONCAT31(extraout_var_00,uVar1) + 0x28) < 1) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(CONCAT31(extraout_var_00,uVar1) + 0x24) + 0x44);
    }
    if (((this->mbr_0xdc != 0) && (iStack_e8 != 0)) && (iVar5 != 0)) {
      piStack_10c = DAT_00708300;
      piVar2 = (int *)(**(code **)(*DAT_00708300 + 0x80))();
      if ((int)piVar2 < 0) {
        piStack_114 = (int *)0x5be427;
        FUN_005fb742((int)piVar2);
        piStack_114 = piVar2;
        FUN_005f8db4((int)piVar2);
        FUN_00497120((byte *)
                     "Gfx_Engine::ProcessFogOfWar - failed to get original render target: %s(%x) - %s\n"
                    );
        return;
      }
      piStack_114 = DAT_00708300;
      iVar3 = (**(code **)(*DAT_00708300 + 0x84))();
      if (iVar3 < 0) {
        FUN_005fb742(iVar3);
        FUN_005f8db4(iVar3);
        FUN_00497120((byte *)
                     "Gfx_Engine::ProcessFogOfWar - failed to get original depth/stencil: %s(%x) - %s\n"
                    );
        FUN_005024d0((int **)&stack0xfffffefc);
        return;
      }
      piVar2 = (int *)this->mbr_0xdc;
      piVar6 = (int *)0x0;
      iVar3 = (**(code **)(*piVar2 + 0x3c))();
      if (iVar3 < 0) {
        FUN_005fb742(iVar3);
        FUN_005f8db4(iVar3);
        FUN_00497120((byte *)
                     "Gfx_Engine::ProcessFogOfWar - failed to get FOW render target: %s(%x) - %s\n")
        ;
        FUN_005024d0((int **)&stack0xfffffef0);
        FUN_005024d0(&piStack_10c);
        return;
      }
      fStack_70 = (float)this->mbr_0x94;
      dStack_7c = this->mbr_0xcc;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0x3c23d70a;
      uStack_80 = 0x3f800000;
      uStack_78 = 0;
      uStack_74 = 0;
      if ((int)this->mbr_0x94 < 0) {
        fStack_70 = fStack_70 + 4.294967e+09;
      }
      fStack_70 = fStack_70 - 1.0;
      uStack_6c = 0;
      uStack_68 = 0x3c23d70a;
      fStack_a4 = (float)this->mbr_0x98;
      uStack_64 = 0x3f800000;
      uStack_5c = 0x3f800000;
      uStack_58 = 0;
      uStack_54 = 0;
      if ((int)this->mbr_0x98 < 0) {
        fStack_a4 = fStack_a4 + 4.294967e+09;
      }
      fStack_a4 = fStack_a4 - 1.0;
      dStack_98 = this->mbr_0xd0;
      uStack_4c = 0x3c23d70a;
      uStack_48 = 0x3f800000;
      uStack_40 = 0;
      uStack_3c = 0x3f800000;
      uStack_30 = 0x3c23d70a;
      uStack_2c = 0x3f800000;
      uStack_24 = 0x3f800000;
      uStack_20 = 0x3f800000;
      uStack_a0 = 0x3c23d70a;
      uStack_9c = 0x3f800000;
      uStack_94 = 0x3f800000;
      uStack_90 = 0x3f800000;
      dStack_60 = dStack_7c;
      fStack_50 = fStack_a4;
      dStack_44 = dStack_7c;
      fStack_38 = fStack_70;
      fStack_34 = fStack_a4;
      dStack_28 = dStack_7c;
      iVar3 = (**(code **)(*DAT_00708300 + 0x7c))(DAT_00708300);
      if (iVar3 < 0) {
        FUN_005fb742(iVar3);
        FUN_005f8db4(iVar3);
        FUN_00497120((byte *)"Gfx_Engine::ProcessFogOfWar - SetRenderTarget failed:  %s(%x) - %s\n")
        ;
      }
      else {
        DAT_007083c0 = DAT_007083c0 + 1;
        iVar3 = (**(code **)(*DAT_00708300 + 0x88))(DAT_00708300);
        if (iVar3 < 0) {
          FUN_005fb742(iVar3);
          FUN_005f8db4(iVar3);
          FUN_00497120((byte *)"Gfx_Engine::ProcessFogOfWar - BeginScene failed: %s(%x) - %s\n");
        }
        else {
          if (this->mbr_0x892 == 0) {
            (**(code **)(*DAT_00708300 + 0x90))(DAT_00708300,0,0,1,this->mbr_0xcc,0,0);
            (**(code **)(*DAT_00708300 + 0x130))(DAT_00708300,0x144);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,7,0);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,1);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,1);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,2);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,1,4);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,2,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,3,0);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,4,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,5,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,1,1,1);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,1,4,1);
            cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,iVar5);
            iVar5 = *DAT_00708300;
            iVar3 = FUN_0047460d(0x144);
          }
          else {
            (**(code **)(*DAT_00708300 + 0x130))(DAT_00708300,0x144);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,7,0);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,0);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,1,4);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,2,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,3,0);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,4,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,5,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,1,1,1);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,1,4,1);
            cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,(int)piVar6);
            iVar3 = *DAT_00708300;
            iVar4 = FUN_0047460d(0x144);
            iVar3 = (**(code **)(iVar3 + 0x120))(DAT_00708300,5,2,&fStack_a4,iVar4);
            if (iVar3 < 0) {
              FUN_005fb742(iVar3);
              FUN_005f8db4(iVar3);
              FUN_00497120((byte *)
                           "Gfx_Engine::ProcessFogOfWar - Draw Automap failed: %s(%x) - %s\n");
            }
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,1);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,1);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,2);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,2);
            cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,iVar5);
            iVar5 = *DAT_00708300;
            iVar3 = FUN_0047460d(0x144);
          }
          iVar5 = (**(code **)(iVar5 + 0x120))(DAT_00708300,5,2,&stack0xfffffed8,iVar3);
          if (iVar5 < 0) {
            FUN_005fb742(iVar5);
            FUN_005f8db4(iVar5);
            FUN_00497120((byte *)
                         "Gfx_Engine::ProcessFogOfWar - Draw VisibleMask failed: %s(%x) - %s\n");
          }
          cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,0);
          DAT_007083c4 = DAT_007083c4 + 1;
          (**(code **)(*DAT_00708300 + 0x8c))(DAT_00708300);
        }
        (**(code **)(*DAT_00708300 + 0x7c))(DAT_00708300,piVar2,piVar6);
      }
      FUN_005024d0(&piStack_114);
      FUN_005024d0((int **)&stack0xfffffee4);
      FUN_005024d0((int **)&stack0xfffffee8);
      return;
    }
    piStack_10c = (int *)0x5beaa5;
    FUN_00497120((byte *)"Gfx_Engine::ProcessFogOfWar - trying to use an invalid texture!\n");
  }
  return;
}



void __thiscall Gfx_Engine::CreateProjectedShadowRenderTarget(Gfx_Engine *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)this->mbr_0xf0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xf0 = 0;
  }
  if ((this->mbr_0xe0 != 0) && (this->mbr_0xe4 != 0)) {
    iVar2 = (**(code **)(*DAT_00708300 + 0x50))
                      (DAT_00708300,this->mbr_0xe0,this->mbr_0xe4,1,1,this->mbr_0xa8,0,
                       &this->mbr_0xf0);
    if (iVar2 < 0) {
      FUN_005fb742(iVar2);
      FUN_005f8db4(iVar2);
      FUN_00497120((byte *)
                   "Gfx_Engine::CreateProjectedShadowRenderTarget - CreateRenderTarget failed: %s(%x) - %s\n"
                  );
    }
  }
  return;
}



void __thiscall Gfx_Engine::meth_0x5bedf0(Gfx_Engine *this)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (*(int *)(DAT_0070838c + 0x9c) != 0) {
    do {
      cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,piVar1,0);
      piVar1 = (int *)((int)piVar1 + 1);
    } while (piVar1 < *(int **)(DAT_0070838c + 0x9c));
  }
  cls_0x55dc80::meth_0x51f340(DAT_0070b200);
  FUN_00506b70(DAT_00707ce0,(int *)0x0);
  cls_0x50b4f0::meth_0x50b4f0((cls_0x50b4f0 *)this->mbr_0x3c);
  cls_0x5cb740::meth_0x5cbdb0(&this->cls_0x5cb740);
  if ((code *)this->mbr_0x48 != (code *)0x0) {
    (*(code *)this->mbr_0x48)();
  }
  FUN_005367c0();
  piVar1 = (int *)this->mbr_0x9c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x9c = 0;
  }
  piVar1 = (int *)this->mbr_0xa0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xa0 = 0;
  }
  piVar1 = (int *)this->mbr_0xdc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xdc = 0;
  }
  piVar1 = (int *)this->mbr_0xf0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xf0 = 0;
  }
  piVar1 = (int *)this->mbr_0x894;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x894 = 0;
  }
  piVar1 = (int *)this->mbr_0x898;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x898 = 0;
  }
  piVar1 = (int *)this->mbr_0x89c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x89c = 0;
  }
  piVar1 = (int *)this->mbr_0x8a0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x8a0 = 0;
  }
  return;
}



void __thiscall Gfx_Engine::meth_0x5bef20(Gfx_Engine *this)

{
  CreateAutomapRenderTarget(this);
  CreateFogOfWarRenderTarget(this);
  CreateProjectedShadowRenderTarget(this);
  cls_0x55dc80::meth_0x51f3e0(DAT_0070b200);
  cls_0x5067c0::meth_0x506890(DAT_00707ce0);
  cls_0x50b4f0::meth_0x50b4f0((cls_0x50b4f0 *)this->mbr_0x3c);
  meth_0x5bda60(this);
  if ((code *)this->mbr_0x4c != (code *)0x0) {
    (*(code *)this->mbr_0x4c)();
  }
  FUN_00536940();
  InitializeSystem(this);
  return;
}



void __thiscall Gfx_Engine::ProjectShadows(Gfx_Engine *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined uVar6;
  int iVar7;
  undefined3 extraout_var;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  int *piVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  cls_0x5053c0 *this_00;
  undefined4 uVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  uint uStack_50;
  int *piStack_4c;
  int *piStack_3c;
  int *apiStack_38 [3];
  int local_2c [2];
  undefined4 local_24;
  undefined4 local_10;
  
  if ((this->mbr_0xf0 == 0) || (this->mbr_0xec == 0)) {
    this->mbr_0x60 = 0;
  }
  else {
    piStack_4c = local_2c;
    local_2c[0] = 0;
    local_24 = 0;
    local_10 = 0;
    iVar7 = (**(code **)(*DAT_00708300 + 0x80))();
    if (iVar7 < 0) {
      FUN_005fb742(iVar7);
      FUN_005f8db4(iVar7);
      FUN_00497120((byte *)
                   "Gfx_Engine::ProjectShadows - failed to get original render target: %s(%x) - %s\n"
                  );
      return;
    }
    piVar21 = local_2c;
    iVar7 = (**(code **)(*DAT_00708300 + 0x84))();
    if (-1 < iVar7) {
      piVar19 = (int *)this->mbr_0xf0;
      iVar7 = (**(code **)(*piVar19 + 0x3c))();
      if (iVar7 < 0) {
        FUN_005fb742(iVar7);
        FUN_005f8db4(iVar7);
        FUN_00497120((byte *)
                     "Gfx_Engine::ProjectShadows - failed to get ProjectedShadowTex surface: %s(%x) - %s\n"
                    );
        FUN_005024d0((int **)&stack0xffffffb8);
        FUN_005024d0((int **)&stack0xffffffc0);
        return;
      }
      iVar7 = (**(code **)(*DAT_00708300 + 0x7c))();
      if (iVar7 < 0) {
        FUN_005fb742(iVar7);
        FUN_005f8db4(iVar7);
        FUN_00497120((byte *)"Gfx_Engine::ProjectShadows - SetRenderTarget failed:  %s(%x) - %s\n");
      }
      else {
        DAT_007083c0 = DAT_007083c0 + 1;
        iVar7 = (**(code **)(*DAT_00708300 + 0x88))();
        if (iVar7 < 0) {
          FUN_005fb742(iVar7);
          FUN_005f8db4(iVar7);
          FUN_00497120((byte *)"Gfx_Engine::ProjectShadows - BeginScene failed: %s(%x) - %s\n");
        }
        else {
          this_00 = (cls_0x5053c0 *)0x0;
          (**(code **)(*DAT_00708300 + 0x90))(DAT_00708300,0,0,1);
          if (this->mbr_0x60 != 0) {
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,7,0);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,1);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,2);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,2);
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,1);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x10,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x11,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x12,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0xd,3);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0xe,3);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,1,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,2,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,3,0);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,4,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,5,2);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,6,0);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,1,1,1);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,1,4,1);
            uVar6 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_216)
                              (this->mbr_0xec);
            if (*(int *)(CONCAT31(extraout_var,uVar6) + 0x28) < 1) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(*(int *)(CONCAT31(extraout_var,uVar6) + 0x24) + 0x44);
            }
            cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,iVar7);
            uVar8 = FUN_0047460d(0x104);
            uVar9 = cls_0x490120::meth_0x490120(*(cls_0x490120 **)(DAT_00707ce0 + 0x28),uVar8);
            piVar18 = (int *)(uVar9 / uVar8);
            if (DAT_007083a0 <= (int *)(uVar9 / uVar8)) {
              piVar18 = DAT_007083a0;
            }
            (**(code **)(*DAT_00708300 + 0x130))(DAT_00708300,0x104);
            cls_0x490060::meth_0x503360((cls_0x490060 *)&DAT_007082f8,0x100,&DAT_00708338);
            cls_0x4900f0::meth_0x4900f0((cls_0x4900f0 *)this_00,0,uVar8);
            cVar13 = '\0';
            piVar12 = (int *)(this->mbr_0x60 * 6);
            iVar14 = 0;
            iVar16 = 0;
            iVar7 = 0;
            uVar17 = 0;
            uVar15 = 0;
            uStack_50 = 0;
            if (this->mbr_0x60 != 0) {
              iVar20 = 0;
              do {
                if (piVar12 < piVar19) {
                  if (cVar13 == '\0') {
                    iVar10 = cls_0x5053c0::meth_0x505400
                                       (this_00,(int)piVar19,(uint)piVar21,&stack0xffffff80,
                                        &stack0xffffff90,'\0');
                    if (iVar10 < 0) {
                      uVar15 = 0;
                      FUN_00497120((byte *)
                                   "Gfx_Engine::ProjectShadows - Failed to lock streaming VB\n");
                      goto LAB_005bf63e;
                    }
                    uVar15 = 0x1000000;
                  }
                  pfVar11 = (float *)(this->mbr_0x64 + iVar20);
                  *pfVar11 = *(float *)(this->mbr_0x64 + iVar20) - (float)this->mbr_0x74;
                  pfVar11[1] = (float)this->mbr_0x88 - pfVar11[1];
                  pfVar1 = (float *)(iVar16 + iVar14 * 0x18);
                  fVar2 = (float)this->mbr_0xe0;
                  if ((int)this->mbr_0xe0 < 0) {
                    fVar2 = fVar2 + 4.294967e+09;
                  }
                  *pfVar1 = fVar2 * ((*pfVar11 - pfVar11[2] * 1.0) / (float)this->mbr_0x8c);
                  fVar2 = pfVar11[2];
                  fVar3 = pfVar11[1];
                  fVar4 = (float)this->mbr_0x90;
                  fVar5 = (float)this->mbr_0xe4;
                  if ((int)this->mbr_0xe4 < 0) {
                    fVar5 = fVar5 + 4.294967e+09;
                  }
                  pfVar1[2] = 0.0;
                  pfVar1[3] = 1.0;
                  pfVar1[4] = 0.0;
                  pfVar1[1] = fVar5 * ((fVar3 - fVar2 * 1.0) / fVar4);
                  pfVar1[5] = 0.0;
                  pfVar1 = (float *)(iVar16 + (iVar14 + 1) * 0x18);
                  fVar2 = (float)this->mbr_0xe0;
                  if ((int)this->mbr_0xe0 < 0) {
                    fVar2 = fVar2 + 4.294967e+09;
                  }
                  *pfVar1 = fVar2 * ((pfVar11[2] + *pfVar11) / (float)this->mbr_0x8c);
                  fVar2 = pfVar11[2];
                  fVar3 = pfVar11[1];
                  fVar4 = (float)this->mbr_0x90;
                  fVar5 = (float)this->mbr_0xe4;
                  if ((int)this->mbr_0xe4 < 0) {
                    fVar5 = fVar5 + 4.294967e+09;
                  }
                  pfVar1[2] = 0.0;
                  pfVar1[3] = 1.0;
                  pfVar1[4] = 1.0;
                  pfVar1[1] = fVar5 * ((fVar3 - fVar2 * 1.0) / fVar4);
                  pfVar1[5] = 0.0;
                  pfVar1 = (float *)(iVar16 + (iVar14 + 2) * 0x18);
                  fVar2 = (float)this->mbr_0xe0;
                  if ((int)this->mbr_0xe0 < 0) {
                    fVar2 = fVar2 + 4.294967e+09;
                  }
                  *pfVar1 = fVar2 * ((*pfVar11 - pfVar11[2] * 1.0) / (float)this->mbr_0x8c);
                  fVar2 = pfVar11[2];
                  fVar3 = pfVar11[1];
                  fVar4 = (float)this->mbr_0x90;
                  fVar5 = (float)this->mbr_0xe4;
                  if ((int)this->mbr_0xe4 < 0) {
                    fVar5 = fVar5 + 4.294967e+09;
                  }
                  pfVar1[2] = 0.0;
                  pfVar1[3] = 1.0;
                  pfVar1[4] = 0.0;
                  pfVar1[1] = fVar5 * ((fVar2 + fVar3) / fVar4);
                  pfVar1[5] = 1.0;
                  pfVar1 = (float *)(iVar16 + (iVar14 + 3) * 0x18);
                  fVar2 = (float)this->mbr_0xe0;
                  if ((int)this->mbr_0xe0 < 0) {
                    fVar2 = fVar2 + 4.294967e+09;
                  }
                  *pfVar1 = fVar2 * ((*pfVar11 - pfVar11[2] * 1.0) / (float)this->mbr_0x8c);
                  fVar2 = pfVar11[2];
                  fVar3 = pfVar11[1];
                  fVar4 = (float)this->mbr_0x90;
                  fVar5 = (float)this->mbr_0xe4;
                  if ((int)this->mbr_0xe4 < 0) {
                    fVar5 = fVar5 + 4.294967e+09;
                  }
                  pfVar1[2] = 0.0;
                  pfVar1[3] = 1.0;
                  pfVar1[4] = 0.0;
                  pfVar1[1] = fVar5 * ((fVar2 + fVar3) / fVar4);
                  pfVar1[5] = 1.0;
                  pfVar1 = (float *)(iVar16 + (iVar14 + 4) * 0x18);
                  fVar2 = (float)this->mbr_0xe0;
                  if ((int)this->mbr_0xe0 < 0) {
                    fVar2 = fVar2 + 4.294967e+09;
                  }
                  *pfVar1 = fVar2 * ((pfVar11[2] + *pfVar11) / (float)this->mbr_0x8c);
                  fVar2 = pfVar11[2];
                  fVar3 = pfVar11[1];
                  fVar4 = (float)this->mbr_0x90;
                  fVar5 = (float)this->mbr_0xe4;
                  if ((int)this->mbr_0xe4 < 0) {
                    fVar5 = fVar5 + 4.294967e+09;
                  }
                  pfVar1[2] = 0.0;
                  pfVar1[3] = 1.0;
                  pfVar1[4] = 1.0;
                  pfVar1[1] = fVar5 * ((fVar3 - fVar2 * 1.0) / fVar4);
                  pfVar1[5] = 0.0;
                  pfVar1 = (float *)(iVar16 + (iVar14 + 5) * 0x18);
                  fVar2 = (float)this->mbr_0xe0;
                  if ((int)this->mbr_0xe0 < 0) {
                    fVar2 = fVar2 + 4.294967e+09;
                  }
                  *pfVar1 = fVar2 * ((pfVar11[2] + *pfVar11) / (float)this->mbr_0x8c);
                  fVar2 = (float)this->mbr_0xe4;
                  if ((int)this->mbr_0xe4 < 0) {
                    fVar2 = fVar2 + 4.294967e+09;
                  }
                  iVar14 = iVar14 + 6;
                  iVar7 = iVar7 + 2;
                  pfVar1[1] = fVar2 * ((pfVar11[2] + pfVar11[1]) / (float)this->mbr_0x90);
                  pfVar1[2] = 0.0;
                  pfVar1[3] = 1.0;
                  pfVar1[4] = 1.0;
                  pfVar1[5] = 1.0;
                }
                else {
                  if (cVar13 != '\0') {
                    (**(code **)(*(int *)this_00->mbr_0x4 + 0x30))((int *)this_00->mbr_0x4);
                  }
                  if (iVar7 != 0) {
                    cls_0x490060::meth_0x490060((cls_0x490060 *)&DAT_007082f8,4,uVar17,iVar7);
                  }
                  iVar7 = cls_0x5053c0::meth_0x505400
                                    (this_00,(int)piVar18,(uint)piVar21,&stack0xffffff80,
                                     &stack0xffffff90,'\0');
                  if (iVar7 < 0) {
                    uVar15 = 0;
                    FUN_00497120((byte *)
                                 "Gfx_Engine::ProjectShadows - Failed to relock streaming VB\n");
                  }
                  else {
                    uVar15 = 0x1000000;
                  }
                  iVar7 = 0;
                  piVar19 = piVar18;
                }
LAB_005bf63e:
                piVar12 = (int *)((int)piVar12 + -6);
                uStack_50 = uStack_50 + 1;
                iVar20 = iVar20 + 0xc;
                cVar13 = (char)((uint)uVar15 >> 0x18);
              } while (uStack_50 < this->mbr_0x60);
              if (cVar13 != '\0') {
                (**(code **)(*(int *)this_00->mbr_0x4 + 0x30))((int *)this_00->mbr_0x4);
              }
              if (iVar7 != 0) {
                cls_0x490060::meth_0x490060((cls_0x490060 *)&DAT_007082f8,4,uVar17,iVar7);
              }
            }
            cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,0);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0xd,1);
            cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0xe,1);
          }
          DAT_007083c4 = DAT_007083c4 + 1;
          (**(code **)(*DAT_00708300 + 0x8c))(DAT_00708300);
        }
        (**(code **)(*DAT_00708300 + 0x7c))();
      }
      this->mbr_0x60 = 0;
      FUN_005024d0(apiStack_38);
      FUN_005024d0((int **)&stack0xffffffac);
      FUN_005024d0(&piStack_4c);
      return;
    }
    FUN_005fb742(iVar7);
    FUN_005f8db4(iVar7);
    FUN_00497120((byte *)
                 "Gfx_Engine::ProjectShadows - failed to get original depth/stencil: %s(%x) - %s\n")
    ;
    if (piStack_3c != (int *)0x0) {
      (**(code **)(*piStack_3c + 8))();
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Gfx_Engine::meth_0x5bf9e0(Gfx_Engine *this)

{
  dword *pdVar1;
  cls_0x5cb740 *this_00;
  undefined uVar2;
  undefined uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  
  if (this->mbr_0x10c != 0) {
    FUN_00616d8c((char *)&this->mbr_0x78c,(byte *)"Map: %s");
    cls_0x5cb740::meth_0x5cbe60(&this->cls_0x5cb740);
  }
  pdVar1 = &this->mbr_0x78c;
  FUN_00616d8c((char *)pdVar1,(byte *)"FPS: %3.1f V: %d T: %d Vis: %d");
  this_00 = &this->cls_0x5cb740;
  cls_0x5cb740::meth_0x5cbe60(this_00);
  FUN_00616d8c((char *)pdVar1,(byte *)"Tex: %d VB: %d Mtx: %d DIP: %d DP: %d Trans: %s Light: %s");
  cls_0x5cb740::meth_0x5cbe60(this_00);
  uVar2 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_168)();
  uVar3 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_172)();
  if (CONCAT31(extraout_var,uVar2) != 0) {
    FUN_00616d8c((char *)pdVar1,(byte *)"Cam: (%4.1f, %4.1f, %4.1f)");
    cls_0x5cb740::meth_0x5cbe60(this_00);
  }
  if ((((cls_0x616328 *)CONCAT31(extraout_var_00,uVar3) != (cls_0x616328 *)0x0) &&
      (iVar4 = FUN_006165e0((cls_0x616328 *)CONCAT31(extraout_var_00,uVar3),0,
                            &Gfx_CamCtrl::RTTI_Type_Descriptor,
                            &Gfx_CamCtrl_Orbit::RTTI_Type_Descriptor,0),
      CONCAT31(extraout_var,uVar2) != 0)) && (iVar4 != 0)) {
    FUN_00616d8c((char *)pdVar1,(byte *)"Target: (%4.1f, %4.1f, %4.1f)");
    cls_0x5cb740::meth_0x5cbe60(this_00);
    FUN_00616d8c((char *)pdVar1,(byte *)"Azi: %3.1f Elev: %3.1f Dist: %4.1f FOVy: %3.1f");
    cls_0x5cb740::meth_0x5cbe60(this_00);
  }
  return;
}



undefined4 __thiscall Gfx_Engine::meth_0x5bfcb0(Gfx_Engine *this)

{
  dword dVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char unaff_SI;
  char cStack_10;
  
  piVar2 = DAT_00708300;
  DAT_007083c0 = DAT_007083c0 + 1;
  uVar3 = (**(code **)(*DAT_00708300 + 0x88))();
  if (-1 < (int)uVar3) {
    if (DAT_0070c968 != '\0') {
      OutputDebugStringA("\n---BeginScene\n");
    }
    this->mbr_0x14 = this->mbr_0x18;
    (**(code **)(*DAT_00708300 + 0xa0))(DAT_00708300,this->mbr_0x18);
    FUN_004bff20((void *)this->mbr_0x18,unaff_SI);
    puVar4 = (undefined4 *)this->mbr_0x24;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)*puVar4;
    }
    if (puVar4 != (undefined4 *)this->mbr_0x24) {
      do {
        dVar1 = puVar4[2];
        this->mbr_0x14 = dVar1;
        (**(code **)(*DAT_00708300 + 0xa0))(DAT_00708300,dVar1);
        FUN_004bff20((void *)this->mbr_0x14,unaff_SI);
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)this->mbr_0x24);
    }
    this->mbr_0x14 = this->mbr_0x1c;
    (**(code **)(*DAT_00708300 + 0xa0))(DAT_00708300,this->mbr_0x1c);
    FUN_004bff20((void *)this->mbr_0x1c,unaff_SI);
    if (this->mbr_0x88c != 0) {
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,0);
      (**(code **)(*DAT_00708300 + 0xa0))(DAT_00708300,this->mbr_0x18);
      meth_0x5bf9e0(this);
    }
    DAT_007083c4 = DAT_007083c4 + 1;
    (**(code **)(*DAT_00708300 + 0x8c))(DAT_00708300);
    if (DAT_0070c968 != '\0') {
      OutputDebugStringA("---EndScene\n");
    }
    cStack_10 = (char)piVar2;
    if (cStack_10 != '\0') {
      iVar5 = (**(code **)(*DAT_00708300 + 0x3c))(DAT_00708300,0,0,this->mbr_0x40,0);
      if ((iVar5 < 0) && (iVar5 == -0x7789f798)) {
        this->mbr_0x4 = 1;
      }
    }
    uVar6 = cls_0x490060::meth_0x502be0((cls_0x490060 *)&DAT_007082f8);
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}



Gfx_Engine * __thiscall Gfx_Engine::Gfx_Engine(Gfx_Engine *this)

{
  dword dVar1;
  undefined *puVar2;
  cls_0x507810 *pcVar3;
  cls_0x5cb510 *pcVar4;
  cls_0x50b6b0 *pcVar5;
  Gfx_Engine *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063be59;
  local_c = ExceptionList;
  local_4 = 0;
  DAT_00707ce4 = this;
  ExceptionList = &local_c;
  (this->Gfx_System_Interface).vftptr_0x0 =
       (Gfx_System_Interface__vftable_6ae2cc *)&Gfx_Engine__vftable_6ae7ec_006ae7ec;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x24 = dVar1;
  this->mbr_0x28 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x7c = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0;
  this->mbr_0x98 = 0;
  this->mbr_0xc8 = 0xf;
  this->mbr_0xc4 = 0;
  *(undefined *)&this->mbr_0xb4 = 0;
  this->mbr_0xcc = 0xff808080;
  this->mbr_0xd0 = 0xffffffff;
  this->mbr_0x110 = 0xf;
  this->mbr_0x10c = 0;
  *(undefined *)&this->mbr_0xfc = 0;
  local_4._0_1_ = 3;
  cls_0x5cb740::cls_0x5cb740(&this->cls_0x5cb740,"Arial",0xc,0);
  local_4._0_1_ = 4;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x88c = 0;
  this->mbr_0x40 = 0;
  *(undefined *)&this->mbr_0x44 = 0;
  this->mbr_0x88d = 0;
  this->mbr_0x88e = 0;
  this->mbr_0x88f = 0;
  this->mbr_0x890 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x891 = 0;
  this->mbr_0x892 = 1;
  this->mbr_0x68 = 0;
  this->mbr_0x69 = 1;
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xac = 0;
  this->mbr_0xd4 = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xe4 = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xf0 = 0;
  this->mbr_0xf4 = 0;
  this->mbr_0x894 = 0;
  this->mbr_0x898 = 0;
  this->mbr_0x89c = 0;
  this->mbr_0x8a0 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  puVar2 = (undefined *)operator_new(0x70);
  local_4._0_1_ = 5;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = FUN_005211a0(puVar2);
  }
  local_4._0_1_ = 4;
  this->mbr_0x2c = (dword)puVar2;
  pcVar3 = (cls_0x507810 *)operator_new(0x50);
  local_4._0_1_ = 6;
  if (pcVar3 == (cls_0x507810 *)0x0) {
    pcVar3 = (cls_0x507810 *)0x0;
  }
  else {
    pcVar3 = cls_0x507810::cls_0x507810(pcVar3);
  }
  local_4._0_1_ = 4;
  this->mbr_0x30 = (dword)pcVar3;
  pcVar4 = (cls_0x5cb510 *)operator_new(0x24);
  local_4._0_1_ = 7;
  if (pcVar4 == (cls_0x5cb510 *)0x0) {
    pcVar4 = (cls_0x5cb510 *)0x0;
  }
  else {
    pcVar4 = cls_0x5cb510::cls_0x5cb510(pcVar4);
  }
  local_4._0_1_ = 4;
  this->mbr_0x38 = (dword)pcVar4;
  pcVar5 = (cls_0x50b6b0 *)operator_new(0x24);
  local_4._0_1_ = 8;
  if (pcVar5 == (cls_0x50b6b0 *)0x0) {
    pcVar5 = (cls_0x50b6b0 *)0x0;
  }
  else {
    pcVar5 = cls_0x50b6b0::cls_0x50b6b0(pcVar5);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  this->mbr_0x3c = (dword)pcVar5;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  virt_meth_0x5bde90(this);
  virt_meth_0x5bdf80(this_00,0x32);
  ExceptionList = local_c;
  return this;
}



dword __thiscall Gfx_Engine::Get_mbr_0xc(Gfx_Engine *this)

{
  return this->mbr_0xc;
}



dword __thiscall Gfx_Engine::Get_mbr_0x14(Gfx_Engine *this)

{
  return this->mbr_0x14;
}



dword __thiscall Gfx_Engine::Get_mbr_0x1c(Gfx_Engine *this)

{
  return this->mbr_0x1c;
}



undefined4 __thiscall Gfx_Engine::meth_0x5c0b40(Gfx_Engine *this)

{
  undefined uVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  dword *pdVar3;
  undefined4 uVar4;
  dword *pdVar5;
  
  uVar2 = *(uint *)(this->mbr_0x18 + 0x20);
  if (*(char *)(DAT_00708394 + 0x1c) == '\0') {
    uVar2 = uVar2 & 0xfffffffb;
  }
  else {
    uVar2 = uVar2 | 4;
  }
  *(uint *)(this->mbr_0x18 + 0x20) = uVar2;
  FUN_005cc3d0();
  cls_0x5cb740::meth_0x5cb790(&this->cls_0x5cb740,DAT_00708300);
  meth_0x5bda60(this);
  uVar1 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_80)();
  if (CONCAT31(extraout_var,uVar1) < 8) {
    uVar1 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_80)();
    uVar4 = CONCAT31(extraout_var_00,uVar1);
  }
  else {
    uVar4 = 8;
  }
  (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_84)(uVar4);
  (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_240)(0);
  InitializeSystem(this);
  pdVar3 = &this->mbr_0xfc;
  pdVar5 = pdVar3;
  if (0xf < this->mbr_0x110) {
    pdVar5 = (dword *)*pdVar3;
  }
  if (0xf < this->mbr_0x110) {
    pdVar3 = (dword *)*pdVar3;
  }
  uVar4 = cls_0x4d8d70::meth_0x49c7a0
                    ((cls_0x4d8d70 *)&this->mbr_0xf8,(int *)&stack0xfffffff4,(int)pdVar3,
                     this->mbr_0x10c + (int)pdVar5);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}



void __thiscall Gfx_Engine::virt_meth_0x5c0c00(Gfx_Engine *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0xf8,(char *)param_1,(int)puVar2 - ((int)param_1 + 1));
  return;
}



uint __thiscall Gfx_Engine::CreateDevice(Gfx_Engine *this)

{
  dword dVar1;
  int iVar2;
  cls_0x4c0190 *pcVar3;
  uint uVar4;
  HWND in_stack_00000004;
  HWND in_stack_00000008;
  HWND in_stack_0000000c;
  HWND in_stack_00000010;
  char in_stack_00000014;
  char in_stack_00000018;
  cls_0x4c0190 *pcStack0000001c;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bea6;
  local_c = ExceptionList;
  uVar4 = 0;
  if (this->mbr_0x40 != 0) {
    return 1;
  }
  ExceptionList = &local_c;
  iVar2 = Gfx_D3D::CreateDevice
                    (&DAT_007082f8,in_stack_00000004,in_stack_00000008,in_stack_0000000c,
                     in_stack_00000010,in_stack_00000014,in_stack_00000018);
  if (-1 < iVar2) {
    cls_0x5067c0::meth_0x5067c0(DAT_00707ce0,*(char *)(DAT_0070838c + 0xdd) == '\0');
    FUN_005061e0((undefined *)&this->mbr_0x44);
    local_1c = *DAT_00708394;
    local_18 = DAT_00708394[1];
    local_20 = 0;
    local_14 = 0;
    local_10 = 0x3f800000;
    pcVar3 = (cls_0x4c0190 *)operator_new(0x280);
    local_4 = 0;
    if (pcVar3 == (cls_0x4c0190 *)0x0) {
      pcVar3 = (cls_0x4c0190 *)0x0;
    }
    else {
      pcVar3 = cls_0x4c0190::cls_0x4c0190(pcVar3);
    }
    local_4 = 0xffffffff;
    this->mbr_0x18 = (dword)pcVar3;
    if (pcVar3 == (cls_0x4c0190 *)0x0) {
      handle_fatal_error("Gfx_Engine::CreateDevice - Failed to create Default Viewport");
    }
    cls_0x4c0190::meth_0x424880((cls_0x4c0190 *)this->mbr_0x18,&local_20);
    dVar1 = this->mbr_0x18;
    *(undefined4 *)(dVar1 + 0x24) = 0xff002080;
    *(undefined4 *)(dVar1 + 0x1e0) = 0xff002080;
    *(undefined4 *)(dVar1 + 0x1c4) = 0xff002080;
    *(undefined4 *)(dVar1 + 0x1a8) = 0xff002080;
    *(undefined4 *)(dVar1 + 0x18c) = 0xff002080;
    *(undefined4 *)(this->mbr_0x18 + 0x20) = 3;
    this->mbr_0x14 = this->mbr_0x18;
    pcStack0000001c = (cls_0x4c0190 *)operator_new(0x280);
    if (pcStack0000001c == (cls_0x4c0190 *)0x0) {
      pcVar3 = (cls_0x4c0190 *)0x0;
    }
    else {
      pcVar3 = cls_0x4c0190::cls_0x4c0190(pcStack0000001c);
    }
    this->mbr_0x1c = (dword)pcVar3;
    if (pcVar3 == (cls_0x4c0190 *)0x0) {
      handle_fatal_error("Gfx_Engine::CreateDevice - Failed to create PostRenderViewport");
    }
    cls_0x4c0190::meth_0x424880((cls_0x4c0190 *)this->mbr_0x1c,&local_20);
    *(undefined4 *)(this->mbr_0x1c + 0x20) = 2;
    dVar1 = this->mbr_0x1c;
    *(undefined4 *)(dVar1 + 0x24) = 0;
    *(undefined4 *)(dVar1 + 0x1e0) = 0;
    *(undefined4 *)(dVar1 + 0x1c4) = 0;
    *(undefined4 *)(dVar1 + 0x1a8) = 0;
    *(undefined4 *)(dVar1 + 0x18c) = 0;
    this->mbr_0x40 = (dword)in_stack_00000004;
    uVar4 = meth_0x5c0b40(this);
    uVar4 = uVar4 & 0xff;
  }
  ExceptionList = puStack_8;
  return uVar4;
}



void __thiscall Gfx_Engine::RenderAutomap(Gfx_Engine *this)

{
  Gfx_System_Interface__vftable_6ae2cc *pGVar1;
  undefined uVar2;
  int iVar3;
  undefined3 extraout_var;
  dword dVar4;
  cls_0x5be130 *this_01;
  cls_0x5be130 *this_02;
  int3 extraout_var_00;
  undefined3 extraout_var_01;
  int *piVar5;
  dword *pdVar6;
  dword *pdVar7;
  cls_0x529ec0 *unaff_ESI;
  cls_0x4c0190 *pcVar8;
  cls_0x4960d0 *pcVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 unaff_EDI;
  undefined4 *puVar12;
  ulonglong uVar13;
  cls_0x529ec0 *this_03;
  char *pcVar14;
  undefined *puVar15;
  undefined *puVar16;
  byte bVar17;
  cls_0x4960d0 *pcStack_1d4;
  undefined4 *puStack_1d0;
  undefined4 local_1cc;
  dword dStack_1c8;
  int *local_1c4;
  dword *local_1c0;
  float local_1bc;
  dword *local_1b8;
  float local_1b4;
  float local_1ac;
  undefined uStack_1a8;
  undefined uStack_1a4;
  undefined4 uStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined4 uStack_194;
  int aiStack_190 [3];
  undefined auStack_184 [56];
  undefined auStack_14c [64];
  undefined auStack_10c [20];
  undefined4 auStack_f8 [11];
  undefined4 auStack_cc [16];
  float afStack_8c [5];
  undefined4 auStack_78 [11];
  dword adStack_4c [16];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  cls_0x4c0190 *this_00;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063bebb;
  pvStack_c = ExceptionList;
  local_1b4 = (float)this->mbr_0x80 - (float)this->mbr_0x74;
  pdVar7 = &this->mbr_0x9c;
  local_1ac = (float)this->mbr_0x88 - (float)this->mbr_0x7c;
  local_1cc = (int *)0x0;
  local_1c4 = (int *)0x0;
  local_1bc = (float)this->mbr_0x84 + 10.0;
  local_1c0 = pdVar7;
  if ((this->mbr_0x9c == 0) || (pdVar6 = &this->mbr_0xa0, local_1b8 = pdVar6, this->mbr_0xa0 == 0))
  {
    ExceptionList = &pvStack_c;
    FUN_00497120((byte *)
                 "Gfx_Engine::RenderAutomap - invalid Automap RenderTarget and DepthStencil\n");
    ExceptionList = pvStack_c;
    return;
  }
  ExceptionList = &pvStack_c;
  iVar3 = (**(code **)(*DAT_00708300 + 0x80))(DAT_00708300,&local_1cc);
  if (iVar3 < 0) {
    FUN_005fb742(iVar3);
    FUN_005f8db4(iVar3);
    FUN_00497120((byte *)
                 "Gfx_Engine::RenderAutomap - failed to get original render target: %s(%x) - %s\n");
    piVar5 = (int *)*pdVar7;
    if (piVar5 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    (**(code **)(*piVar5 + 8))(piVar5);
    *pdVar7 = 0;
    ExceptionList = pvStack_c;
    return;
  }
  iVar3 = (**(code **)(*DAT_00708300 + 0x84))(DAT_00708300,&local_1c4);
  if (iVar3 < 0) {
    FUN_005fb742(iVar3);
    FUN_005f8db4(iVar3);
    FUN_00497120((byte *)
                 "Gfx_Engine::RenderAutomap - failed to get original depth/stencil: %s(%x) - %s\n");
    if (local_1cc != (int *)0x0) {
      (**(code **)(*local_1cc + 8))(local_1cc);
      local_1cc = (int *)0x0;
    }
    FUN_005024d0((int **)pdVar7);
    ExceptionList = pvStack_c;
    return;
  }
  iVar3 = (**(code **)(*DAT_00708300 + 0x7c))(DAT_00708300,*pdVar7,*pdVar6);
  if (iVar3 < 0) {
    FUN_005fb742(iVar3);
    FUN_005f8db4(iVar3);
    FUN_00497120((byte *)"Gfx_Engine::RenderAutomap - SetRenderTarget failed: %s(%x) - %s\n");
    goto LAB_005c1595;
  }
  uVar2 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_144)();
  this_00 = (cls_0x4c0190 *)CONCAT31(extraout_var,uVar2);
  pcStack_1d4 = (cls_0x4960d0 *)this_00->mbr_0x15c;
  dStack_1c8 = this_00->mbr_0x20;
  dVar4 = 3;
  if ((this->mbr_0xac == 0x49) || (this->mbr_0xac == 0x4b)) {
    dVar4 = 7;
  }
  this_00->mbr_0x20 = dVar4;
  dVar4 = this->mbr_0x70;
  pcVar8 = this_00;
  pdVar7 = (dword *)(auStack_184 + 0x20);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar7 = pcVar8->mbr_0x0;
    pcVar8 = (cls_0x4c0190 *)&pcVar8->mbr_0x4;
    pdVar7 = pdVar7 + 1;
  }
  cls_0x4c0190::meth_0x4248f0(this_00,0,0,this->mbr_0x6c,dVar4,0,0x3f800000);
  uStack_1a8 = *(undefined *)((int)&this_00->mbr_0x24 + 3);
  uStack_1a4 = *(undefined *)((int)&this_00->mbr_0x24 + 2);
  uStack_194 = CONCAT31(uStack_194._1_3_,*(undefined *)((int)&this_00->mbr_0x24 + 1));
  uStack_1a0 = CONCAT31(uStack_1a0._1_3_,*(undefined *)&this_00->mbr_0x24);
  cls_0x4c0190::meth_0x424db0(this_00,0,0,0,0xff);
  pcVar9 = pcStack_1d4;
  fStack_19c = (float)pcStack_1d4->mbr_0x114;
  fStack_198 = (float)pcStack_1d4->mbr_0x118;
  cls_0x4960d0::meth_0x4962c0(pcStack_1d4,auStack_cc);
  pdVar7 = adStack_4c;
  for (iVar3 = 0x10; pcVar9 = (cls_0x4960d0 *)&pcVar9->mbr_0x4, iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar7 = *(dword *)pcVar9;
    pdVar7 = pdVar7 + 1;
  }
  FUN_004728e3(afStack_8c,local_1b4,local_1ac,fStack_19c,fStack_198);
  pfVar10 = afStack_8c;
  pdVar7 = &pcStack_1d4->mbr_0xcc;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar7 = (dword)*pfVar10;
    pfVar10 = pfVar10 + 1;
    pdVar7 = pdVar7 + 1;
  }
  thunk_FUN_0047230f(auStack_14c,0x3fc90fdb);
  thunk_FUN_0047227f(auStack_10c,local_1b4 * 0.5 + (float)this->mbr_0x74,local_1bc,
                     local_1ac * 0.5 + (float)this->mbr_0x7c);
  bVar17 = (byte)((uint)auStack_10c >> 0x18);
  puVar16 = auStack_14c;
  puVar15 = auStack_14c;
  thunk_FUN_00471943();
  cls_0x529ec0::cls_0x529ec0(unaff_ESI,(undefined4 *)(auStack_184 + 0x2c));
  pGVar1 = (this->Gfx_System_Interface).vftptr_0x0;
  dVar4 = 0;
  this->mbr_0x88c = 0;
  uVar2 = (*pGVar1->virt_meth_0x6162e5_316)(0,puVar15);
  local_1cc = (int *)CONCAT31(local_1cc._1_3_,uVar2);
  (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_312)(0,0);
  meth_0x5bfcb0(this);
  pGVar1 = (this->Gfx_System_Interface).vftptr_0x0;
  this_03 = (cls_0x529ec0 *)0x0;
  this->mbr_0x88c = bVar17;
  (*pGVar1->virt_meth_0x6162e5_312)(pcStack_1d4);
  (**(code **)(*DAT_00708300 + 0x7c))(DAT_00708300,puVar16,unaff_EDI);
  cls_0x4c0190::meth_0x424880(this_00,aiStack_190);
  cls_0x4c0190::meth_0x424db0
            (this_00,(char)puStack_1d0,(char)local_1c0,(char)local_1cc,(char)pcStack_1d4);
  this_00->mbr_0x20 = dVar4;
  puVar11 = auStack_f8;
  puVar12 = (undefined4 *)&unaff_ESI[2].field_0x3a;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  cls_0x529ec0::cls_0x529ec0(this_03,auStack_78);
  this_01 = (cls_0x5be130 *)this->mbr_0x6c;
  this_02 = (cls_0x5be130 *)this->mbr_0x70;
  if (this->mbr_0x69 == 1) {
    this_01 = cls_0x5be130::cls_0x5be130(this_01);
    this_02 = cls_0x5be130::cls_0x5be130(this_02);
  }
  pGVar1 = (this->Gfx_System_Interface).vftptr_0x0;
  pdVar7 = &this->mbr_0xa4;
  *pdVar7 = 0;
  uVar2 = (*pGVar1->virt_meth_0x6162e5_200)(pdVar7,this_01,this_02,1,this->mbr_0xa8,1);
  dStack_1c8 = CONCAT31(extraout_var_00,uVar2);
  if (extraout_var_00 < 0) {
    FUN_005fb742(dStack_1c8);
    FUN_005f8db4(dStack_1c8);
    FUN_00497120((byte *)"Gfx_Engine::RenderAutomap - failed to create blank texture: %s(%x) - %s\n"
                );
    pdVar6 = local_1b8;
    pdVar7 = local_1c0;
    goto LAB_005c1595;
  }
  uVar2 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_216)(*pdVar7);
  iVar3 = CONCAT31(extraout_var_01,uVar2);
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_184,"[AutomapTexture]");
  puStack_8 = (undefined *)0x0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)(iVar3 + 4),(_String_base *)auStack_184,0,0xffffffff);
  puStack_8 = (undefined *)0xffffffff;
  cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_184);
  if (*(int *)(iVar3 + 0x28) < 1) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(*(int *)(iVar3 + 0x24) + 0x44);
  }
  (**(code **)(*piVar5 + 0x3c))(piVar5,0,&stack0xfffffe28);
  uStack_194 = this->mbr_0x70;
  uStack_1a0 = 0;
  fStack_19c = 0.0;
  fStack_198 = (float)this->mbr_0x6c;
  uVar13 = FUN_00616e24();
  local_1c4 = (int *)(((uint)this_01 >> 1) - (int)uVar13);
  uVar13 = FUN_00616e24();
  local_1c0 = (dword *)(((uint)this_02 >> 1) - (int)uVar13);
  iVar3 = (**(code **)(*DAT_00708300 + 0x70))
                    (DAT_00708300,*puStack_1d0,&uStack_1a0,1,unaff_EDI,&local_1c4);
  if (iVar3 < 0) {
    FUN_005fb742(iVar3);
    FUN_005f8db4(iVar3);
    pcVar14 = "Gfx_Engine::RenderAutomap - failed to copy surface: %s(%x) - %s\n";
LAB_005c1533:
    FUN_00497120((byte *)pcVar14);
  }
  else if (this->mbr_0xc4 != 0) {
    if (this->mbr_0xc8 < 0x10) {
      pdVar7 = &this->mbr_0xb4;
    }
    else {
      pdVar7 = (dword *)this->mbr_0xb4;
    }
    iVar3 = FUN_005cebbf(pdVar7,0,pcStack_1d4,0,0);
    if (iVar3 < 0) {
      FUN_005fb742(iVar3);
      FUN_005f8db4(iVar3);
      pcVar14 = "Gfx_Engine::RenderAutomap - failed to save surface to file: %s(%x) - %s\n";
      goto LAB_005c1533;
    }
  }
  FUN_005024d0((int **)&pcStack_1d4);
  pdVar6 = local_1b8;
  pdVar7 = local_1c0;
LAB_005c1595:
  if (local_1cc != (int *)0x0) {
    (**(code **)(*local_1cc + 8))(local_1cc);
    local_1cc = (int *)0x0;
  }
  if (local_1c4 != (int *)0x0) {
    (**(code **)(*local_1c4 + 8))(local_1c4);
    local_1c4 = (int *)0x0;
  }
  FUN_005024d0((int **)pdVar7);
  FUN_005024d0((int **)pdVar6);
  ExceptionList = pvStack_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x005c18e4) */
/* WARNING: Removing unreachable block (ram,0x005c17ef) */

void __thiscall Gfx_Engine::SetLevelAABB(Gfx_Engine *this)

{
  Gfx_System_Interface__vftable_6ae2cc *pGVar1;
  cls_0x5be130 *pcVar2;
  char *pcVar3;
  undefined uVar4;
  cls_0x5be130 *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined3 extraout_var;
  int3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int3 extraout_var_03;
  undefined3 extraout_var_04;
  char *pcVar8;
  void *unaff_EDI;
  ulonglong uVar9;
  ulonglong uVar10;
  dword *unaff_retaddr;
  dword dStack_58;
  void *pvStack_c;
  undefined *puStack_8;
  dword *pdStack_4;
  
  pdStack_4 = (dword *)0xffffffff;
  puStack_8 = &LAB_0063bee0;
  pvStack_c = ExceptionList;
  dStack_58 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*DAT_00708300 + 0x14))();
  this->mbr_0x74 = *pdStack_4;
  this->mbr_0x78 = pdStack_4[1];
  this->mbr_0x7c = pdStack_4[2];
  this->mbr_0x80 = *unaff_retaddr;
  this->mbr_0x84 = unaff_retaddr[1];
  pGVar1 = (this->Gfx_System_Interface).vftptr_0x0;
  this->mbr_0x88 = unaff_retaddr[2];
  this->mbr_0x8c = (dword)((float)this->mbr_0x80 - (float)this->mbr_0x74);
  this->mbr_0x90 = (dword)((float)this->mbr_0x88 - (float)this->mbr_0x7c);
  (*pGVar1->virt_meth_0x6162e5_388)();
  pcVar2 = *(cls_0x5be130 **)(DAT_0070838c + 0x60);
  uVar7 = *(uint *)(DAT_0070838c + 100);
  uVar9 = FUN_00616e24();
  this->mbr_0xe4 = (uint)uVar9;
  uVar10 = FUN_00616e24();
  pcVar5 = cls_0x5be130::cls_0x5be130((cls_0x5be130 *)uVar10);
  this->mbr_0xe0 = (dword)pcVar5;
  if (pcVar2 < pcVar5) {
    do {
      pcVar5 = (cls_0x5be130 *)((uint)pcVar5 >> 1);
    } while (pcVar2 < pcVar5);
    this->mbr_0xe0 = (dword)pcVar5;
  }
  if (uVar7 < (uint)uVar9) {
    uVar6 = this->mbr_0xe4;
    do {
      uVar6 = uVar6 >> 1;
    } while (uVar7 < uVar6);
    this->mbr_0xe4 = uVar6;
  }
  uVar7 = this->mbr_0xe0;
  if (uVar7 < 0x401) {
    uVar7 = 0x400;
  }
  this->mbr_0xe0 = uVar7;
  uVar7 = this->mbr_0xe4;
  if (uVar7 < 0x401) {
    uVar7 = 0x400;
  }
  this->mbr_0xe4 = uVar7;
  if ((this->mbr_0xd4 != 0) &&
     (uVar4 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_208)(),
     CONCAT31(extraout_var,uVar4) != 0)) {
    FUN_00497120((byte *)"Gfx_Engine::SetLevelAABB - AutomapMask still in use!!!\n");
  }
  uVar4 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_200)();
  if (extraout_var_00 < 0) {
    FUN_005fb742(CONCAT31(extraout_var_00,uVar4));
    FUN_005f8db4(CONCAT31(extraout_var_00,uVar4));
    FUN_00497120((byte *)
                 "Gfx_Engine::SetLevelAABB - failed to create AutomapMask texture: %s(%x) - %s\n");
  }
  else {
    uVar4 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_216)();
    if (CONCAT31(extraout_var_01,uVar4) != 0) {
      unaff_EDI = (void *)((uint)unaff_EDI & 0xffffff00);
      pcVar3 = "[AutomapMask]";
      do {
        pcVar8 = pcVar3;
        pcVar3 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&dStack_58,"[AutomapMask]",(uint)(pcVar8 + -0x6aed18));
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)(CONCAT31(extraout_var_01,uVar4) + 4),(_String_base *)&dStack_58,0,
                 0xffffffff);
    }
  }
  if ((this->mbr_0xd8 != 0) &&
     (uVar4 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_208)(),
     CONCAT31(extraout_var_02,uVar4) != 0)) {
    FUN_00497120((byte *)"Gfx_Engine::SetLevelAABB - VisibleMask still in use!!!\n");
  }
  uVar4 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_200)
                    (&this->mbr_0xd8,this->mbr_0x94,this->mbr_0x98,1);
  if (extraout_var_03 < 0) {
    FUN_005fb742(CONCAT31(extraout_var_03,uVar4));
    FUN_005f8db4(CONCAT31(extraout_var_03,uVar4));
    FUN_00497120((byte *)
                 "Gfx_Engine::SetLevelAABB - failed to create VisibleMask texture: %s(%x) - %s\n");
  }
  else {
    uVar4 = (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_216)(this->mbr_0xd8);
    if (CONCAT31(extraout_var_04,uVar4) != 0) {
      pcVar3 = "[VisibleMask]";
      do {
        pcVar8 = pcVar3;
        pcVar3 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&stack0xffffff74,"[VisibleMask]",(uint)(pcVar8 + -0x6aec80));
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)(CONCAT31(extraout_var_04,uVar4) + 4),
                 (_String_base *)&stack0xffffff74,0,0xffffffff);
    }
  }
  CreateFogOfWarRenderTarget(this);
  CreateProjectedShadowRenderTarget(this);
  ExceptionList = unaff_EDI;
  return;
}



void __thiscall Gfx_Engine::virt_meth_0x5c1b30(Gfx_Engine *this)

{
  int *piVar1;
  cls_0x4296c0 *pcVar2;
  
  piVar1 = (int *)this->mbr_0x894;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x894 = 0;
  }
  piVar1 = (int *)this->mbr_0x898;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x898 = 0;
  }
  piVar1 = (int *)this->mbr_0x89c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x89c = 0;
  }
  piVar1 = (int *)this->mbr_0x8a0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x8a0 = 0;
  }
  piVar1 = (int *)this->mbr_0x9c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x9c = 0;
  }
  piVar1 = (int *)this->mbr_0xa0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xa0 = 0;
  }
  piVar1 = (int *)this->mbr_0xdc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xdc = 0;
  }
  piVar1 = (int *)this->mbr_0xf0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xf0 = 0;
  }
  if (this->mbr_0xf4 != 0) {
    (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_208)(this->mbr_0xf4);
    this->mbr_0xf4 = 0;
  }
  if (this->mbr_0xec != 0) {
    (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_208)(this->mbr_0xec);
    this->mbr_0xec = 0;
  }
  if (this->mbr_0xd4 != 0) {
    (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_208)(this->mbr_0xd4);
    this->mbr_0xd4 = 0;
  }
  if (this->mbr_0xd8 != 0) {
    (*((this->Gfx_System_Interface).vftptr_0x0)->virt_meth_0x6162e5_208)(this->mbr_0xd8);
    this->mbr_0xd8 = 0;
  }
  pcVar2 = (cls_0x4296c0 *)this->mbr_0x18;
  if (pcVar2 != (cls_0x4296c0 *)0x0) {
    cls_0x4296c0::~cls_0x4296c0(pcVar2);
                    /* WARNING: Subroutine does not return */
    _free(pcVar2);
  }
  pcVar2 = (cls_0x4296c0 *)this->mbr_0x1c;
  if (pcVar2 != (cls_0x4296c0 *)0x0) {
    cls_0x4296c0::~cls_0x4296c0(pcVar2);
                    /* WARNING: Subroutine does not return */
    _free(pcVar2);
  }
  FUN_005cc410();
  FUN_00506260();
  cls_0x5cb740::meth_0x5cbdb0(&this->cls_0x5cb740);
  cls_0x5cb740::meth_0x5cbe20(&this->cls_0x5cb740);
  cls_0x55dc80::meth_0x520a60(DAT_0070b200);
  FUN_00506b70(DAT_00707ce0,(int *)0x1);
  FUN_00503c30((cls_0x490060 *)&DAT_007082f8);
  return;
}



Gfx_Engine * __thiscall Gfx_Engine::~Gfx_Engine(Gfx_Engine *this)

{
  void *pvVar1;
  cls_0x55dc80 *this_00;
  int **ppiVar2;
  int *piVar3;
  Gfx_Engine *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063bf2d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_System_Interface).vftptr_0x0 =
       (Gfx_System_Interface__vftable_6ae2cc *)&Gfx_Engine__vftable_6ae7ec_006ae7ec;
  local_4 = 4;
  local_10 = this;
  virt_meth_0x5c1b30(this);
  pvVar1 = (void *)this->mbr_0x38;
  if (pvVar1 != (void *)0x0) {
    FUN_005cb5c0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  this_00 = (cls_0x55dc80 *)this->mbr_0x2c;
  if (this_00 != (cls_0x55dc80 *)0x0) {
    cls_0x55dc80::meth_0x520fc0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  pvVar1 = (void *)this->mbr_0x30;
  if (pvVar1 != (void *)0x0) {
    FUN_00507580(pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)this->mbr_0x3c;
  if (pvVar1 != (void *)0x0) {
    FUN_0050b5e0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  if ((void *)this->mbr_0x64 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x64);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  cls_0x5cb740::meth_0x5cbe50(&this->cls_0x5cb740);
  if (0xf < this->mbr_0x110) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xfc);
  }
  this->mbr_0x110 = 0xf;
  this->mbr_0x10c = 0;
  *(undefined *)&this->mbr_0xfc = 0;
  if (0xf < this->mbr_0xc8) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xb4);
  }
  this->mbr_0xc8 = 0xf;
  this->mbr_0xc4 = 0;
  *(undefined *)&this->mbr_0xb4 = 0;
  ppiVar2 = (int **)this->mbr_0x24;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x20,(int **)&local_10,piVar3,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x24);
}



int * __thiscall Gfx_Engine::virt_meth_0x5c1e40(Gfx_Engine *this,byte param_1)

{
  ~Gfx_Engine(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/Gfx_Engine.h"
