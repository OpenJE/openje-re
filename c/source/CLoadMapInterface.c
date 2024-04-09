#include "../include/CLoadMapInterface.h"

CLoadMapInterface * __thiscall CLoadMapInterface::~CLoadMapInterface(CLoadMapInterface *this)

{
  CSound *this_00;
  CLoadMapInterface *pCVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062e638;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(CLoadMapInterface__vftable_65789c **)&this->Interface =
       &CLoadMapInterface__vftable_65789c_0065789c;
  this_00 = (CSound *)this->mbr_0x3c;
  local_4 = 0;
  if (this_00 != (CSound *)0x0) {
    CSound::~CSound(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  local_4 = 0xffffffff;
  pCVar1 = (CLoadMapInterface *)GUI::Interface::meth_0x495500(&this->Interface);
  ExceptionList = pvStack_c;
  return pCVar1;
}



int * __thiscall CLoadMapInterface::virt_meth_0x43ffb0(CLoadMapInterface *this,byte param_1)

{
  ~CLoadMapInterface(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



CLoadMapInterface * __thiscall
CLoadMapInterface::CLoadMapInterface(CLoadMapInterface *this,_String_base *param_1)

{
  char cVar1;
  virt_meth_0x4ff950 *pvVar2;
  VFX_Parameter__vftable_673a20 *pVVar3;
  int *piVar4;
  undefined uVar5;
  Label *this_00;
  char *pcVar6;
  virt_meth_0x4ff950 *pvVar7;
  dword dVar8;
  char *pcVar9;
  CSound *this_01;
  undefined4 *puVar10;
  int iVar11;
  void *local_90;
  char *local_8c;
  dword dStack_80;
  dword local_7c;
  VFX_Parameter__vftable_673a20 *local_78;
  undefined **local_74;
  VFX_Parameter__vftable_673a20 *local_70;
  Label *local_6c;
  CLoadMapInterface *local_68;
  int *local_64;
  undefined auStack_58 [4];
  void *pvStack_54;
  void *pvStack_48;
  dword dStack_44;
  dword dStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  dword local_28;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_0062e6b2;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  local_68 = this;
  GUI::Interface::Interface(&this->Interface,param_1);
  local_4 = 0;
  *(CLoadMapInterface__vftable_65789c **)&this->Interface =
       &CLoadMapInterface__vftable_65789c_0065789c;
  *(undefined *)&this->mbr_0x38 = 1;
  local_78 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_7c = 0;
  local_8c = (char *)((uint)local_8c & 0xffffff00);
  pcVar9 = "LoadMap.INT";
  do {
    pcVar6 = pcVar9;
    pcVar9 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_90,"LoadMap.INT",(uint)(pcVar6 + -0x6578dc));
  local_4._0_1_ = 1;
  meth_0x495b50(this,(int *)&local_90);
  local_4._0_1_ = 0;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar9 = "MapNamesWin";
  do {
    pcVar6 = pcVar9;
    pcVar9 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"MapNamesWin",(uint)(pcVar6 + -0x6578d0));
  local_4._0_1_ = 2;
  local_64 = (int *)meth_0x495740(this,(int)&local_28);
  local_4._0_1_ = 0;
  uVar5 = (undefined)local_4;
  local_4._0_1_ = 0;
  if (local_10 < 0x10) {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    if (local_64 != (int *)0x0) {
      local_70 = (VFX_Parameter__vftable_673a20 *)0x6;
      local_74 = &PTR_s_DemoBeaconTorInterior_006f3020;
      do {
        piVar4 = local_64;
        local_6c = (Label *)FUN_004a7680(0xe64);
        local_4._0_1_ = 3;
        if (local_6c == (Label *)0x0) {
          this_00 = (Label *)0x0;
        }
        else {
          this_00 = GUI::Label::Label(local_6c,3);
        }
        local_4._0_1_ = 0;
        (**(code **)(*piVar4 + 0xa4))(this_00);
        (*((this_00->Window).Base.vftptr_0x0)->virt_meth_0x4b2790_16)((Base *)this_00,0x104,0x10);
        dStack_40 = 0xf;
        dStack_44 = 0;
        pvStack_54 = (void *)((uint)pvStack_54 & 0xffffff00);
        pcVar9 = "mainmenu.ini";
        do {
          pcVar6 = pcVar9;
          pcVar9 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)auStack_58,"mainmenu.ini",(uint)(pcVar6 + -0x6578c0));
        (*(this_00->Window).Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
                  ((Base *)this_00,(int)auStack_58);
        if (0xf < dStack_40) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_54);
        }
        dStack_40 = 0xf;
        dStack_44 = 0;
        pvStack_54 = (void *)((uint)pvStack_54 & 0xffffff00);
        local_24 = (void *)0xf;
        local_28 = 0;
        uStack_38 = uStack_38 & 0xffffff00;
        pcVar9 = "Arial";
        do {
          pcVar6 = pcVar9;
          pcVar9 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&uStack_3c,"Arial",(uint)(pcVar6 + -0x6510d4))
        ;
        iVar11 = 0;
        puVar10 = &uStack_3c;
        (*(this_00->Window).Base.vftptr_0x0[7].virt_meth_0x4b27c0_20)(this_00);
        pVStack_c = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_c & 0xffffff00);
        if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_48);
        }
        uStack_34 = 0xf;
        uStack_38 = 0;
        pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
        (*(this_00->Window).Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
                  ((Base *)this_00,(undefined4 *)0xff808080,puVar10);
        pvVar2 = local_78->virt_meth_0x4ff950_0;
        local_7c = 0xf;
        dStack_80 = 0;
        local_90 = (void *)((uint)local_90 & 0xffffff00);
        pvVar7 = pvVar2;
        do {
          cVar1 = (char)*pvVar7;
          pvVar7 = pvVar7 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)&stack0xffffff6c,(char *)pvVar2,(int)pvVar7 - (int)(pvVar2 + 1));
        uStack_8._0_1_ = 6;
        (*(this_00->Window).Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
                  ((Base *)this_00,(FILE *)&stack0xffffff6c);
        pVVar3 = (VFX_Parameter__vftable_673a20 *)local_74;
        uStack_8 = (undefined *)((uint)uStack_8._1_3_ << 8);
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        local_7c = 0xf;
        dStack_80 = 0;
        local_90 = (void *)((uint)local_90 & 0xffffff00);
        (*(this_00->Window).Base.vftptr_0x0[1].virt_meth_0x4b2790_16)
                  ((Base *)this_00,8,(int)local_74);
        (*(this_00->Window).Base.vftptr_0x0[5].virt_meth_0x4b2770_12)((Base *)this_00,0,iVar11);
        local_74 = local_74 + 1;
        local_70 = pVVar3 + 4;
        this = local_68;
        uVar5 = (undefined)local_4;
      } while ((int)local_74 < 0x6f3058);
    }
    local_4._0_1_ = uVar5;
    local_78 = (VFX_Parameter__vftable_673a20 *)0xf;
    local_7c = 0;
    local_8c = (char *)((uint)local_8c & 0xffffff00);
    pcVar9 = "MapNameEdit";
    do {
      pcVar6 = pcVar9;
      pcVar9 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_90,"MapNameEdit",(uint)(pcVar6 + -0x6578b4));
    local_4._0_1_ = 7;
    dVar8 = meth_0x495740(this,(int)&local_90);
    this->mbr_0x34 = dVar8;
    local_4._0_1_ = 0;
    if ((VFX_Parameter__vftable_673a20 *)0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    if (this->mbr_0x34 != 0) {
      local_78 = (VFX_Parameter__vftable_673a20 *)0xf;
      local_7c = 0;
      local_8c = (char *)((uint)local_8c & 0xffffff00);
      pcVar9 = PTR_s_DemoBeaconTorInterior_006f3020;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&local_90,PTR_s_DemoBeaconTorInterior_006f3020,
                 (int)pcVar9 - (int)(PTR_s_DemoBeaconTorInterior_006f3020 + 1));
      local_4._0_1_ = 8;
      (**(code **)(*(int *)this->mbr_0x34 + 300))(&local_90);
      local_4._0_1_ = 0;
      if ((VFX_Parameter__vftable_673a20 *)0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
    }
    local_4._0_1_ = 0;
    local_6c = (Label *)operator_new(0xf8);
    local_4._0_1_ = 9;
    if (local_6c == (Label *)0x0) {
      this_01 = (CSound *)0x0;
    }
    else {
      this_01 = CSound::CSound((CSound *)local_6c);
    }
    this->mbr_0x3c = (dword)this_01;
    local_4 = (uint)local_4._1_3_ << 8;
    (*this_01->vftptr_0x0->virt_meth_0x4c82e0_0)(this_01,(int *)0x653134,0);
    ExceptionList = pVStack_c;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_24);
}



void __thiscall
CLoadMapInterface::virt_meth_0x4404a0(CLoadMapInterface *this,int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined unaff_SI;
  undefined unaff_DI;
  uint unaff_retaddr;
  char *pcVar6;
  _String_base local_48 [4];
  void *local_44;
  uint local_34;
  uint local_30;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e6d8;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  iVar5 = *param_2;
  if (iVar5 == 4) {
    ExceptionList = &pvStack_c;
    if (param_1[0x346] == 3) {
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      local_4 = 0;
      ExceptionList = &pvStack_c;
      (**(code **)(*param_1 + 0x13c))(local_48);
      pcVar4 = "";
      do {
        pcVar6 = pcVar4;
        pcVar4 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      uVar3 = ::cls_0x50db20::meth_0x41e4b0
                        ((cls_0x50db20 *)local_48,0,local_34,(_String_base *)&DAT_0064d7d8,
                         (uint)(pcVar6 + -0x64d7d8));
      if (uVar3 != 0) {
        (**(code **)(*(int *)this->mbr_0x34 + 300))(local_48);
        if ((CSound *)this->mbr_0x3c != (CSound *)0x0) {
          CSound::meth_0x4c7eb0((CSound *)this->mbr_0x3c,0,0,0);
        }
      }
      local_4 = 0xffffffff;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
    }
  }
  else if (iVar5 == 6) {
    ExceptionList = &pvStack_c;
    if ((param_1[0x346] == 1) &&
       (ExceptionList = &pvStack_c, (CSound *)this->mbr_0x3c != (CSound *)0x0)) {
      ExceptionList = &pvStack_c;
      CSound::meth_0x4c7eb0((CSound *)this->mbr_0x3c,0,0,0);
    }
    pcVar6 = "LoadBtn";
    pcVar4 = (char *)(**(code **)(*param_1 + 0x50))();
    iVar5 = __stricmp(pcVar4,pcVar6);
    if (iVar5 == 0) {
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      local_4 = 1;
      (**(code **)(*(int *)this->mbr_0x34 + 0x13c))(local_48);
      bVar2 = FUN_00440010((cls_0x50db20 *)local_48,(_String_base *)&DAT_0064d7d8);
      if (bVar2) {
        FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_48,&DAT_006578f4);
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&stack0xffffffd4);
      }
      meth_0x495220(this,1);
      cls_0x4b28a0::meth_0x4b2fe0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(char)this,unaff_DI);
      piVar1 = *(int **)(*(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0xa0) + 4);
      if (piVar1 != (int *)0x0) {
        meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
        cls_0x4b28a0::meth_0x4b2fe0
                  ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,
                   (char)*(undefined4 *)(*piVar1 + 4) + (char)piVar1,unaff_DI);
      }
      local_4 = 0xffffffff;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
    }
    else {
      pcVar6 = "CancelBtn";
      pcVar4 = (char *)(**(code **)(*param_1 + 0x50))();
      iVar5 = __stricmp(pcVar4,pcVar6);
      if (iVar5 == 0) {
        meth_0x495220(this,1);
        cls_0x4b28a0::meth_0x4b2fe0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(char)this,unaff_SI);
      }
    }
  }
  else {
    ExceptionList = &pvStack_c;
    if ((iVar5 == 0x13) && (ExceptionList = &pvStack_c, *(char *)&this->mbr_0x38 != '\0')) {
      ExceptionList = &pvStack_c;
      iVar5 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xffffffd4,"");
      local_4 = 2;
      (**(code **)(*(int *)this->mbr_0x34 + 300))(iVar5);
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&stack0xffffffd4);
      *(undefined *)&this->mbr_0x38 = 0;
    }
  }
  GUI::Interface::virt_meth_0x4958d0(&this->Interface,param_1);
  ExceptionList = pvStack_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall CLoadMapInterface::meth_0x456ee0(CLoadMapInterface *this)

{
  void *_Memory;
  int **ppiVar1;
  int *piVar2;
  CLoadMapInterface *local_4;
  
  if ((int **)this->mbr_0x100 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x100;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x100) {
    do {
      _Memory = (void *)piVar2[2];
      if (_Memory != (void *)0x0) {
        FUN_005a48b0((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x100);
  }
  ppiVar1 = (int **)this->mbr_0x100;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0xfc,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0xfc,(int **)&local_4,(int *)0x0,(int *)0x0)
  ;
  return;
}



void __thiscall CLoadMapInterface::meth_0x457010(CLoadMapInterface *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  dword *pdVar7;
  uint unaff_retaddr;
  void *local_54;
  CLoadMapInterface *local_50;
  dword dStack_44;
  dword dStack_40;
  dword dStack_3c;
  char acStack_38 [40];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062fe18;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  local_50 = this;
  iVar3 = Gregorian::Get_mbr_0x28((Gregorian *)this->mbr_0x38);
  if ((undefined4 *)this->mbr_0x100 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = *(undefined4 **)(undefined4 *)this->mbr_0x100;
  }
  for (iVar5 = 0; (puVar6 != (undefined4 *)this->mbr_0x100 && (iVar5 != iVar3)); iVar5 = iVar5 + 1)
  {
    puVar6 = (undefined4 *)*puVar6;
  }
  local_54 = (void *)0x0;
  if (puVar6 != (undefined4 *)this->mbr_0x100) {
    pdVar7 = &this->mbr_0x48;
    do {
      if (7 < (int)local_54) goto LAB_004571c5;
      piVar2 = (int *)puVar6[2];
      if (piVar2 == (int *)0x0) {
        (**(code **)(*(int *)pdVar7[-3] + 0x54))(1);
      }
      else {
        (**(code **)(*(int *)pdVar7[-2] + 0x130))(*piVar2);
        (**(code **)(*(int *)*pdVar7 + 0x130))(piVar2[1]);
        FUN_00616d8c(acStack_38,&DAT_00650668);
        pcVar4 = acStack_38;
        dStack_3c = 0xf;
        dStack_40 = 0;
        local_50 = (CLoadMapInterface *)((uint)local_50 & 0xffffff00);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)&local_54,acStack_38,(int)pcVar4 - (int)(acStack_38 + 1));
        local_c = (void *)0x0;
        (**(code **)(*(int *)pdVar7[-1] + 300))(&local_54);
        local_10 = 0xffffffff;
        if (0xf < dStack_40) {
                    /* WARNING: Subroutine does not return */
          _free(local_54);
        }
        dStack_40 = 0xf;
        dStack_44 = 0;
        local_54 = (void *)((uint)local_54 & 0xffffff00);
        (**(code **)(*(int *)pdVar7[1] + 0x130))(piVar2 + 4,0,0,0,0xbf800000,0xbf800000,1);
        pdVar7[2] = (dword)piVar2;
        (**(code **)(*(int *)pdVar7[-3] + 0x54))(0);
      }
      puVar6 = (undefined4 *)*puVar6;
      local_54 = (void *)((int)local_54 + 1);
      pdVar7 = pdVar7 + 6;
    } while (puVar6 != (undefined4 *)local_50->mbr_0x100);
    this = local_50;
    if (7 < (int)local_54) goto LAB_004571c5;
  }
  pdVar7 = &this->mbr_0x3c + (int)local_54 * 6;
  iVar3 = 8 - (int)local_54;
  do {
    (**(code **)(*(int *)*pdVar7 + 0x54))(1);
    pdVar7 = pdVar7 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
LAB_004571c5:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall CLoadMapInterface::meth_0x457260(CLoadMapInterface *this)

{
  dword dVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  dword *this_00;
  CLoadMapInterface *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fe71;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  meth_0x456ee0(this);
  local_10 = (CLoadMapInterface *)operator_new(0x2c);
  local_4 = 0;
  if (local_10 == (CLoadMapInterface *)0x0) {
    local_10 = (CLoadMapInterface *)0x0;
  }
  else {
    local_10 = (CLoadMapInterface *)FUN_004571f0((undefined4 *)local_10);
  }
  *(undefined4 *)&local_10->Interface = 0xd08;
  (local_10->Interface).mbr_0x4 = 0x104f;
  (local_10->Interface).mbr_0x8 = 100;
  local_4 = 0xffffffff;
  pcVar4 = "icon_sword.bmp";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(local_10->Interface).field_0x10,"icon_sword.bmp",
             (uint)(pcVar3 + -0x65c760));
  dVar1 = this->mbr_0x100;
  this_00 = &this->mbr_0xfc;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&local_10);
  cls_0x456f60::meth_0x456f60((cls_0x456f60 *)this_00,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_10 = (CLoadMapInterface *)operator_new(0x2c);
  local_4 = 1;
  if (local_10 == (CLoadMapInterface *)0x0) {
    local_10 = (CLoadMapInterface *)0x0;
  }
  else {
    local_10 = (CLoadMapInterface *)FUN_004571f0((undefined4 *)local_10);
  }
  *(undefined4 *)&local_10->Interface = 0xd0a;
  (local_10->Interface).mbr_0x4 = 0xd09;
  (local_10->Interface).mbr_0x8 = 100;
  local_4 = 0xffffffff;
  pcVar4 = "icon_gem.bmp";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(local_10->Interface).field_0x10,"icon_gem.bmp",
             (uint)(pcVar3 + -0x65c750));
  dVar1 = this->mbr_0x100;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&local_10);
  cls_0x456f60::meth_0x456f60((cls_0x456f60 *)this_00,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_10 = (CLoadMapInterface *)operator_new(0x2c);
  local_4 = 2;
  if (local_10 == (CLoadMapInterface *)0x0) {
    local_10 = (CLoadMapInterface *)0x0;
  }
  else {
    local_10 = (CLoadMapInterface *)FUN_004571f0((undefined4 *)local_10);
  }
  *(undefined4 *)&local_10->Interface = 0x1052;
  pcVar4 = "?icon_bow.bmp";
  (local_10->Interface).mbr_0x4 = 0x1051;
  local_4 = 0xffffffff;
  (local_10->Interface).mbr_0x8 = 100;
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(local_10->Interface).field_0x10,"icon_bow.bmp",
             (uint)(pcVar4 + -0x65c740));
  dVar1 = this->mbr_0x100;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&local_10);
  cls_0x456f60::meth_0x456f60((cls_0x456f60 *)this_00,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  ExceptionList = local_c;
  return;
}



void __thiscall CLoadMapInterface::meth_0x457440(CLoadMapInterface *this)

{
  meth_0x457260(this);
  GUI::ScrollBar::meth_0x4b8ae0((ScrollBar *)this->mbr_0x38,0,'\x01');
  meth_0x457010(this);
  return;
}



void __thiscall CLoadMapInterface::meth_0x4574a0(CLoadMapInterface *this)

{
                    /* WARNING: Could not recover jumptable at 0x004574a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this->mbr_0x34 + 0x44))();
  return;
}



/* WARNING: Removing unreachable block (ram,0x0045837f) */
/* WARNING: Removing unreachable block (ram,0x004583a2) */
/* WARNING: Removing unreachable block (ram,0x00458399) */
/* WARNING: Removing unreachable block (ram,0x004583a4) */
/* WARNING: Removing unreachable block (ram,0x004583b9) */
/* WARNING: Removing unreachable block (ram,0x004583f4) */
/* WARNING: Removing unreachable block (ram,0x004583e9) */
/* WARNING: Removing unreachable block (ram,0x004583f6) */
/* WARNING: Removing unreachable block (ram,0x00458424) */
/* WARNING: Removing unreachable block (ram,0x0045842b) */
/* WARNING: Removing unreachable block (ram,0x0045845f) */
/* WARNING: Removing unreachable block (ram,0x0045846c) */
/* WARNING: Removing unreachable block (ram,0x004584b3) */
/* WARNING: Removing unreachable block (ram,0x004584ba) */
/* WARNING: Removing unreachable block (ram,0x004584f1) */
/* WARNING: Removing unreachable block (ram,0x004584fe) */
/* WARNING: Removing unreachable block (ram,0x00458526) */
/* WARNING: Removing unreachable block (ram,0x0045851b) */
/* WARNING: Removing unreachable block (ram,0x00458528) */
/* WARNING: Removing unreachable block (ram,0x00458556) */
/* WARNING: Removing unreachable block (ram,0x0045855d) */
/* WARNING: Removing unreachable block (ram,0x00458591) */
/* WARNING: Removing unreachable block (ram,0x0045859e) */
/* WARNING: Removing unreachable block (ram,0x004585f0) */
/* WARNING: Removing unreachable block (ram,0x004585f7) */
/* WARNING: Removing unreachable block (ram,0x0045862e) */
/* WARNING: Removing unreachable block (ram,0x0045863b) */

void __thiscall
CLoadMapInterface::meth_0x4580c0(CLoadMapInterface *this,dword param_1,dword param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  cls_0x616328 *pcVar7;
  GameActionEquip *this_00;
  cls_0x457460 *this_01;
  uint unaff_retaddr;
  int iVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  int iVar11;
  int *piStack_60;
  int *piStack_58;
  undefined auStack_54 [16];
  void *local_44;
  undefined4 local_34;
  dword local_30;
  _String_base a_Stack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ff99;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  this->mbr_0x13c = param_2;
  this->mbr_0x138 = param_1;
  CWorldContainerInterface::meth_0x457a10((CWorldContainerInterface *)this);
  piVar4 = (int *)CWorldContainerInterface::meth_0x4574b0((CWorldContainerInterface *)this);
  if (piVar4 != (int *)0x0) {
    local_30 = 0xf;
    local_34._0_1_ = 0;
    local_34._1_3_ = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    pcVar2 = "Name";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(auStack_54 + 0xc),"Name",(uint)(pcVar5 + -0x65cbe0));
    local_4 = 0;
    piVar6 = (int *)(**(code **)(*(int *)this->mbr_0x34 + 0xb4))(auStack_54 + 0xc);
    local_4 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    iVar11 = 0;
    pTVar10 = &GameEntity::RTTI_Type_Descriptor;
    pTVar9 = &Entity::RTTI_Type_Descriptor;
    iVar8 = 0;
    local_30 = 0xf;
    local_34._0_1_ = 0;
    local_34._1_3_ = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    pcVar7 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_00);
    iVar8 = FUN_006165e0(pcVar7,iVar8,pTVar9,pTVar10,iVar11);
    if ((iVar8 == 0) || (piVar6 == (int *)0x0)) {
      this->mbr_0x1b4 = 0;
      this->mbr_0x1b0 = 0;
      this->mbr_0x1ac = 0;
    }
    else {
      uStack_14 = 0xf;
      uStack_18 = 0;
      pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
      local_4 = 1;
      SS::EngineStringSystem::virt_meth_0x56c260
                ((EngineStringSystem *)&DAT_0070c2d8,*(int *)(iVar8 + 8),a_Stack_2c);
      (**(code **)(*piVar6 + 300))(a_Stack_2c);
      iVar1 = *(int *)(*(int *)(iVar8 + 4) + 4);
      iVar11 = iVar1 + 8 + iVar8;
      this->mbr_0x1ac = *(dword *)(iVar1 + 8 + iVar8);
      this->mbr_0x1b0 = *(dword *)(iVar11 + 4);
      this->mbr_0x1b4 = *(dword *)(iVar11 + 8);
      local_4 = 0xffffffff;
      if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_28);
      }
    }
    iVar8 = *(int *)(*(int *)(*(int *)(iVar8 + 4) + 4) + 0x160 + iVar8);
    if ((int **)piVar4[3] == (int **)0x0) {
      piStack_60 = (int *)0x0;
    }
    else {
      piStack_60 = *(int **)piVar4[3];
    }
    if (piStack_60 != (int *)piVar4[3]) {
      do {
        pcVar7 = (cls_0x616328 *)piStack_60[2];
        if (pcVar7 != (cls_0x616328 *)0x0) {
          auStack_54._4_4_ = FUN_0056e0b0();
          auStack_54._8_4_ = 0;
          local_4 = 2;
          if (((iVar8 == 1) ||
              (cVar3 = (**(code **)(*piVar4 + 0x28))(pcVar7,auStack_54), cVar3 == '\0')) &&
             (piVar4 = (int *)FUN_006165e0(pcVar7,0,&Entity::RTTI_Type_Descriptor,
                                           &GameItem::RTTI_Type_Descriptor,0), piStack_58 = piVar4,
             piVar4 != (int *)0x0)) {
            (**(code **)(*(int *)this->mbr_0x150 + 0x54))(0);
            cls_0x457460::meth_0x457460((cls_0x457460 *)&this->mbr_0x150,piVar4);
            cls_0x457a80::meth_0x458050((cls_0x457a80 *)&this->mbr_0x140,&piStack_58);
          }
          local_4 = 0xffffffff;
          if ((int **)auStack_54._4_4_ == (int **)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = *(int **)auStack_54._4_4_;
          }
          GUI::Interface::meth_0x4b9d60
                    ((Interface *)auStack_54,&piStack_58,piVar4,(int *)auStack_54._4_4_);
                    /* WARNING: Subroutine does not return */
          _free((void *)auStack_54._4_4_);
        }
        piStack_60 = (int *)*piStack_60;
      } while (piStack_60 != (int *)piVar4[3]);
    }
    this_01 = (cls_0x457460 *)&this->mbr_0x150;
    iVar8 = 10;
    do {
      (**(code **)(*(int *)this_01->mbr_0x0 + 0x54))(1);
      cls_0x457460::meth_0x457460(this_01,(int *)0x0);
      this_01 = this_01 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    (**(code **)(*(int *)this->mbr_0x34 + 0x10))(this->mbr_0x38,this->mbr_0x3c);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall CLoadMapInterface::meth_0x458710(CLoadMapInterface *this)

{
  meth_0x4580c0(this,this->mbr_0x138,this->mbr_0x13c);
  return;
}



void __thiscall CLoadMapInterface::meth_0x495220(CLoadMapInterface *this,byte param_1)

{
  int *piVar1;
  CLoadMapInterface *pCVar2;
  
  (this->Interface).mbr_0x20 = param_1;
  cls_0x4b28a0::Set_mbr_0x4_to_1((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c);
  if (((this->Interface).mbr_0x20 != 0) && (DAT_00707f00 != (int *)0x0)) {
    pCVar2 = (CLoadMapInterface *)0x0;
    piVar1 = DAT_00707f00;
    while ((piVar1 != (int *)0x0 &&
           (pCVar2 = (CLoadMapInterface *)(**(code **)(*piVar1 + 0x98))(),
           pCVar2 == (CLoadMapInterface *)0x0))) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0xa0))();
    }
    if (pCVar2 == this) {
      cls_0x4b28a0::meth_0x4b2ad0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(int *)0x0);
      return;
    }
  }
  return;
}



void __thiscall CLoadMapInterface::meth_0x4955b0(CLoadMapInterface *this)

{
  int **ppiVar1;
  dword *this_00;
  CLoadMapInterface *local_4;
  
  ppiVar1 = (int **)(this->Interface).mbr_0x28;
  this_00 = &(this->Interface).mbr_0x24;
  local_4 = this;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60((Interface *)this_00,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)this_00,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



void __thiscall CLoadMapInterface::meth_0x495740(CLoadMapInterface *this,int param_1)

{
  char cVar1;
  int **ppiVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 ****ppppuVar11;
  bool bVar12;
  bool bVar13;
  uint unaff_retaddr;
  int *local_34;
  undefined4 ****appppuStack_28 [4];
  uint uStack_18;
  uint uStack_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00631178;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ppiVar2 = (int **)(this->Interface).mbr_0x28;
  if (ppiVar2 == (int **)0x0) {
    local_34 = (int *)0x0;
  }
  else {
    local_34 = *ppiVar2;
  }
  ExceptionList = &local_c;
  if (local_34 != (int *)(this->Interface).mbr_0x28) {
    do {
      uStack_4 = 0xffffffff;
      piVar3 = (int *)local_34[2];
      pcVar5 = (char *)(**(code **)(*piVar3 + 0x50))();
      uStack_14 = 0xf;
      uStack_18 = 0;
      appppuStack_28[0] = (undefined4 ****)((uint)appppuStack_28[0] & 0xffffff00);
      pcVar9 = pcVar5;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&stack0xffffffd4,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
      uVar4 = *(uint *)(param_1 + 0x14);
      uStack_4 = 0;
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        pbVar6 = (byte *)(param_1 + 4);
      }
      else {
        pbVar6 = *(byte **)(param_1 + 4);
      }
      if (uStack_18 == 0) {
LAB_00495817:
        if (uVar4 <= uStack_18) {
          uVar7 = (uint)(uStack_18 != uVar4);
          goto LAB_00495822;
        }
      }
      else {
        uVar10 = uStack_18;
        if (uVar4 <= uStack_18) {
          uVar10 = uVar4;
        }
        ppppuVar11 = appppuStack_28[0];
        if (uStack_14 < 0x10) {
          ppppuVar11 = appppuStack_28;
        }
        bVar12 = false;
        uVar7 = 0;
        bVar13 = true;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar12 = *(byte *)ppppuVar11 < *pbVar6;
          bVar13 = *(byte *)ppppuVar11 == *pbVar6;
          ppppuVar11 = (undefined4 ****)((int)ppppuVar11 + 1);
          pbVar6 = pbVar6 + 1;
        } while (bVar13);
        if (!bVar13) {
          uVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        }
        if (uVar7 == 0) goto LAB_00495817;
LAB_00495822:
        if (uVar7 == 0) {
          if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
            _free(appppuStack_28[0]);
          }
          goto LAB_0049587f;
        }
      }
      iVar8 = (**(code **)(*piVar3 + 0xb4))(param_1);
      if (iVar8 != 0) {
        if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
          _free(appppuStack_28[0]);
        }
        goto LAB_0049587f;
      }
      uStack_4 = 0xffffffff;
      if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
        _free(appppuStack_28[0]);
      }
      local_34 = (int *)*local_34;
      uStack_14 = 0xf;
      uStack_18 = 0;
      appppuStack_28[0] = (undefined4 ****)((uint)appppuStack_28[0] & 0xffffff00);
    } while (local_34 != (int *)(this->Interface).mbr_0x28);
  }
  uStack_4 = 0xffffffff;
LAB_0049587f:
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall CLoadMapInterface::meth_0x495b50(CLoadMapInterface *this,int *param_1)

{
  int **_Memory;
  undefined4 *puVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  Edit *this_00;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int extraout_EDX;
  uint unaff_EBX;
  undefined4 *puVar8;
  uint uVar9;
  int **ppiVar10;
  uint unaff_retaddr;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined auStack_38 [8];
  dword dStack_30;
  undefined auStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  dword dStack_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006311c0;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  meth_0x4955b0(this);
  if ((uint)param_1[6] < 0x10) {
    cVar2 = (char)param_1 + '\x04';
  }
  else {
    cVar2 = (char)param_1[1];
  }
  puVar3 = (uint *)ResourceSystem::FileStreamOpen(DAT_00707da8,cVar2,1);
  uVar9 = 0;
  if (puVar3 != (uint *)0x0) {
    param_1 = (int *)0x0;
    ResourceSystem::FileStreamRead(DAT_00707da8,&local_44,4,(int)puVar3);
    if (local_44 == 0x20495547) {
      ResourceSystem::FileStreamRead(DAT_00707da8,&local_40,4,(int)puVar3);
      if (local_40 == 0x302e3156) {
        param_1 = (int *)0x1;
      }
      else if (local_40 == 0x312e3156) {
        param_1 = (int *)0x2;
      }
      else if (local_40 == 0x322e3156) {
        param_1 = (int *)0x3;
      }
      else if (local_40 == 0x332e3156) {
        param_1 = (int *)0x4;
      }
    }
    else {
      ResourceSystem::FileStreamSeek(DAT_00707da8,puVar3,0,0);
    }
    cVar2 = FUN_0050b880((cls_0x50db20 *)&(this->Interface).mbr_0x4,(int)puVar3);
    if (cVar2 == '\0') {
      cls_0x49c610::meth_0x49b1d0(DAT_00707da8,puVar3,'\0');
    }
    else {
      uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Interface).mbr_0x20,1,(int)puVar3)
      ;
      if (((char)uVar4 != '\0') &&
         (uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&local_48,4,(int)puVar3),
         (char)uVar4 != '\0')) {
        if (local_48 != 0) {
          do {
            uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&local_3c,4,(int)puVar3);
            if ((char)uVar4 == '\0') {
LAB_00495d6c:
              cls_0x49c610::meth_0x49b1d0(DAT_00707da8,puVar3,'\0');
              goto LAB_00495ebb;
            }
            this_00 = FUN_004b2910(local_3c);
            cVar2 = (*((this_00->Label).Window.Base.vftptr_0x0)->virt_meth_0x4b2850_28)
                              ((Base *)this_00,(int)puVar3);
            if (cVar2 == '\0') goto LAB_00495d6c;
            GameActionOperateContainer::meth_0x4959b0
                      ((GameActionOperateContainer *)this,(int *)this_00);
            uVar9 = uVar9 + 1;
          } while (uVar9 < unaff_EBX);
        }
        cls_0x495af0::meth_0x495af0((cls_0x495af0 *)&(this->Interface).mbr_0x24);
        cls_0x49c610::meth_0x49b1d0(DAT_00707da8,puVar3,'\0');
        auStack_38._4_4_ = FUN_0056e0b0();
        dStack_30 = 0;
        uStack_4 = 0;
        param_1 = (int *)CWorldContainerInterface::Get_Interface_mbr_0x24
                                   ((CWorldContainerInterface *)this);
        iVar5 = FUN_00433760(extraout_EDX,*(int *)(extraout_EDX + 4),&param_1);
        cls_0x495690::meth_0x495690((cls_0x495690 *)auStack_38,1);
        *(int *)(extraout_EDX + 4) = iVar5;
        **(int **)(iVar5 + 4) = iVar5;
        ppiVar10 = (int **)auStack_38._4_4_;
        while( true ) {
          if (dStack_30 == 0) {
            if (ppiVar10 == (int **)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = *ppiVar10;
            }
            GUI::Interface::meth_0x4b9d60((Interface *)auStack_38,&param_1,piVar6,(int *)ppiVar10);
                    /* WARNING: Subroutine does not return */
            _free((void *)auStack_38._4_4_);
          }
          if (ppiVar10 == (int **)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = *ppiVar10;
          }
          local_3c = piVar6[2];
          if ((ppiVar10 != (int **)0x0) && (_Memory = (int **)*ppiVar10, _Memory != ppiVar10))
          break;
          puVar1 = *(undefined4 **)(local_3c + 4);
          if (puVar1 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = (undefined4 *)*puVar1;
          }
          if (puVar8 != puVar1) {
            do {
              piVar6 = (int *)puVar8[2];
              param_1 = (int *)(**(code **)(*piVar6 + 0xb8))();
              piVar7 = (int *)FUN_00433760(ppiVar10,ppiVar10[1],&param_1);
              cls_0x495690::meth_0x495690((cls_0x495690 *)auStack_38,1);
              ppiVar10[1] = piVar7;
              *(int **)piVar7[1] = piVar7;
              if (piVar6[0x346] == 1) {
                dStack_14 = 0xf;
                uStack_18._0_1_ = 0;
                uStack_18._1_3_ = 0;
                pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
                uStack_4._0_1_ = 1;
                (**(code **)(*piVar6 + 0xd0))(auStack_38 + 0xc);
                (**(code **)(*piVar6 + 0xcc))(auStack_38 + 8);
                uStack_4 = (uint)uStack_4._1_3_ << 8;
                if (0xf < dStack_14) {
                    /* WARNING: Subroutine does not return */
                  _free(pvStack_28);
                }
                dStack_14 = 0xf;
                uStack_18._0_1_ = 0;
                uStack_18._1_3_ = 0;
                pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
              }
              puVar8 = (undefined4 *)*puVar8;
              ppiVar10 = (int **)auStack_38._4_4_;
            } while (puVar8 != *(undefined4 **)(local_3c + 4));
          }
        }
        *_Memory[1] = (int)*_Memory;
        (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      cls_0x49c610::meth_0x49b1d0(DAT_00707da8,puVar3,'\0');
    }
  }
LAB_00495ebb:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/CLoadMapInterface.h"
