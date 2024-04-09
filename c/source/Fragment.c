#include "../include/Fragment.h"

undefined4 __thiscall GUI::Fragment::Get_Base_field_0x154(Fragment *this)

{
  return *(undefined4 *)&(this->Base).field_0x154;
}



void __thiscall GUI::Fragment::virt_meth_0x4b1720(Fragment *this,int param_1,byte param_2)

{
  ulonglong uVar1;
  char cVar2;
  DWORD DVar3;
  undefined4 uVar4;
  uint uVar5;
  void *this_00;
  undefined *puVar6;
  
  if (*(int *)&(this->Base).field_0x28 != 0) {
    DVar3 = timeGetTime();
    uVar5 = DVar3 - *(int *)&(this->Base).field_0x34;
    uVar1 = 1000 / (longlong)*(int *)&(this->Base).field_0x28;
    if ((uint)uVar1 < uVar5) {
      *(DWORD *)&(this->Base).field_0x34 = DVar3;
      (this->Base).field_0x18 = 1;
      *(int *)&(this->Base).field_0x2c =
           ((int)((ulonglong)uVar5 / (uVar1 & 0xffffffff)) + *(int *)&(this->Base).field_0x2c) %
           *(int *)&(this->Base).field_0x30;
    }
  }
  if ((this->Base).field_0x18 != '\0') {
    (*(this->Base).vftptr_0x0[1].virt_meth_0x4b27c0_20)(this);
  }
  if (*(int *)(DAT_00707ef8 + 4) == 0) {
    (**(code **)(*DAT_00707ce4 + 0xe8))(&(this->Base).field_0x12c,param_1,1);
    return;
  }
  uVar4 = Get_Base_field_0x154(this);
  cVar2 = (char)((uint)uVar4 >> 0x18);
  if (cVar2 == -1) {
    if ((param_2 & 1) != 0) {
      puVar6 = &(this->Base).field_0x12c;
      if ((param_2 & 2) != 0) {
        FUN_004b6750(this_00,(int *)puVar6,param_1,2);
        return;
      }
      FUN_004b6750(this_00,(int *)puVar6,param_1,1);
      return;
    }
    uVar4 = 0;
  }
  else {
    if (cVar2 == '\0') {
      return;
    }
    if ((param_2 & 2) != 0) {
      FUN_004b6750(this_00,(int *)&(this->Base).field_0x12c,param_1,2);
      return;
    }
    uVar4 = 1;
  }
  FUN_004b6750(this_00,(int *)&(this->Base).field_0x12c,param_1,uVar4);
  return;
}



void __thiscall GUI::Fragment::virt_meth_0x4b1e50(Fragment *this,FILE *param_1,undefined4 param_2)

{
  undefined *this_00;
  undefined *puVar1;
  FILE *_File;
  char cVar2;
  size_t sVar3;
  uint uVar4;
  undefined4 ****ppppuVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  VFX_Parameter__vftable_673a20 *unaff_EDI;
  uint unaff_retaddr;
  dword dStack_64;
  dword dStack_5c;
  dword dStack_58;
  dword dStack_54;
  _String_base local_2c [4];
  undefined4 ****local_28 [4];
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  _File = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632248;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  dStack_54 = 0x4b1e8d;
  ExceptionList = &local_c;
  sVar3 = _fread(&(this->Base).field_0x1c,4,1,param_1);
  if (sVar3 == 1) {
    dStack_54 = 0x4b1ea6;
    sVar3 = _fread(&(this->Base).field_0x20,4,1,_File);
    if (sVar3 == 1) {
      dStack_54 = 0x4b1ebf;
      sVar3 = _fread(&(this->Base).field_0x24,4,1,_File);
      if (sVar3 == 1) {
        dStack_54 = 0x4b1ed8;
        sVar3 = _fread(&(this->Base).field_0x28,4,1,_File);
        if (sVar3 == 1) {
          dStack_54 = 0x4b1ef1;
          sVar3 = _fread(&(this->Base).field_0x2c,4,1,_File);
          if (sVar3 == 1) {
            dStack_54 = 0x4b1f0a;
            sVar3 = _fread(&(this->Base).field_0x30,4,1,_File);
            if (sVar3 == 1) {
              local_14 = 0xf;
              local_18 = 0;
              local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
              local_4 = 0;
              uVar4 = FUN_0050b7f0((cls_0x50db20 *)local_2c,_File);
              if ((char)uVar4 != '\0') {
                param_1 = (FILE *)0x0;
                dStack_64 = 0x4b1f59;
                ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&dStack_5c,local_2c);
                dStack_64 = 0x4b1f6c;
                cVar2 = (**(code **)(*DAT_00707ce4 + 0xdc))();
                if (cVar2 == '\0') {
                  ppppuVar5 = local_28[0];
                  if (local_14 < 0x10) {
                    ppppuVar5 = local_28;
                  }
                  pvVar6 = (void *)ResourceSystem::Demand
                                             (DAT_00707da8,ppppuVar5,(int *)0x1,(uint)unaff_EDI);
                  if (pvVar6 != (void *)0x0) {
                    dStack_5c = *(dword *)((int)pvVar6 + 0x20);
                    dStack_54 = 1;
                    dStack_58 = 0;
                    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&stack0xffffff84,local_2c);
                    iVar7 = (**(code **)(*DAT_00707ce4 + 0xc4))(&param_1);
                    if (iVar7 < 0) {
                      param_1 = (FILE *)0x0;
                    }
                    ResourceSystem::Release(DAT_00707da8,pvVar6);
                  }
                }
                puVar1 = &(this->Base).field_0xc0;
                *(FILE **)(*(int *)&(this->Base).field_0x128 + 0x130) = param_1;
                dStack_54 = 0x4b2003;
                sVar3 = _fread(puVar1,4,1,_File);
                if (sVar3 == 1) {
                  puVar8 = (undefined4 *)&(this->Base).field_0xdc;
                  iVar7 = 3;
                  do {
                    *puVar8 = *(undefined4 *)puVar1;
                    puVar8 = puVar8 + 7;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                  puVar1 = &(this->Base).field_0x154;
                  dStack_54 = 0x4b2031;
                  sVar3 = _fread(puVar1,4,1,_File);
                  if (sVar3 == 1) {
                    this_00 = &(this->Base).field_0x70;
                    dStack_54 = 0x4b204c;
                    cls_0x4abc60::meth_0x4ab600
                              ((cls_0x4abc60 *)this_00,'\x01','\x01',*(uint *)puVar1,(uint *)0x0);
                    (this->Base).field_0x18 = 1;
                    cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)this_00);
                    Base::virt_meth_0x4b2800(&this->Base,_File);
                    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_2c);
                    goto LAB_004b207e;
                  }
                }
              }
              cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_2c);
            }
          }
        }
      }
    }
  }
LAB_004b207e:
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GUI::Fragment::virt_meth_0x4b20a0(Fragment *this,int param_1,undefined4 param_2)

{
  undefined *this_00;
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 ****ppppuVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  VFX_Parameter__vftable_673a20 *unaff_EDI;
  uint unaff_retaddr;
  dword dStack_64;
  dword dStack_5c;
  dword dStack_58;
  dword dStack_54;
  _String_base local_2c [4];
  undefined4 ****local_28 [4];
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632248;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &local_c;
  uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x1c,4,param_1);
  if (((((char)uVar4 != '\0') &&
       (uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x20,4,iVar2),
       (char)uVar4 != '\0')) &&
      (uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x24,4,iVar2),
      (char)uVar4 != '\0')) &&
     (((uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x28,4,iVar2),
       (char)uVar4 != '\0' &&
       (uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x2c,4,iVar2),
       (char)uVar4 != '\0')) &&
      (uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x30,4,iVar2),
      (char)uVar4 != '\0')))) {
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
    local_4 = 0;
    cVar3 = FUN_0050b880((cls_0x50db20 *)local_2c,iVar2);
    if (cVar3 != '\0') {
      param_1 = 0;
      dStack_64 = 0x4b21ae;
      ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&dStack_5c,local_2c);
      dStack_64 = 0x4b21c1;
      cVar3 = (**(code **)(*DAT_00707ce4 + 0xdc))();
      if (cVar3 == '\0') {
        ppppuVar5 = local_28[0];
        if (local_14 < 0x10) {
          ppppuVar5 = local_28;
        }
        pvVar6 = (void *)ResourceSystem::Demand(DAT_00707da8,ppppuVar5,(int *)0x1,(uint)unaff_EDI);
        if (pvVar6 != (void *)0x0) {
          dStack_5c = *(dword *)((int)pvVar6 + 0x20);
          dStack_54 = 1;
          dStack_58 = 0;
          ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&stack0xffffff84,local_2c);
          iVar7 = (**(code **)(*DAT_00707ce4 + 0xc4))(&param_1);
          if (iVar7 < 0) {
            param_1 = 0;
          }
          ResourceSystem::Release(DAT_00707da8,pvVar6);
        }
      }
      *(int *)(*(int *)&(this->Base).field_0x128 + 0x130) = param_1;
      puVar1 = &(this->Base).field_0xc0;
      uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,puVar1,4,iVar2);
      if ((char)uVar4 != '\0') {
        puVar8 = (undefined4 *)&(this->Base).field_0xdc;
        iVar7 = 3;
        do {
          *puVar8 = *(undefined4 *)puVar1;
          puVar8 = puVar8 + 7;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        puVar1 = &(this->Base).field_0x154;
        uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,puVar1,4,iVar2);
        if ((char)uVar4 != '\0') {
          this_00 = &(this->Base).field_0x70;
          dStack_54 = 0x4b22a6;
          cls_0x4abc60::meth_0x4ab600
                    ((cls_0x4abc60 *)this_00,'\x01','\x01',*(uint *)puVar1,(uint *)0x0);
          (this->Base).field_0x18 = 1;
          cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)this_00);
          Base::virt_meth_0x4b2850(&this->Base,iVar2);
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_2c);
          goto LAB_004b22d8;
        }
      }
    }
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_2c);
  }
LAB_004b22d8:
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GUI::Fragment::virt_meth_0x4b2300(Fragment *this,FILE *param_1)

{
  int iVar1;
  bool bVar2;
  size_t sVar3;
  void *this_00;
  cls_0x50db20 *pcVar4;
  uint unaff_retaddr;
  undefined local_48 [20];
  dword local_34;
  dword local_30;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632270;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &local_c;
  sVar3 = _fwrite(&(this->Base).field_0x1c,4,1,param_1);
  if ((((sVar3 == 1) && (sVar3 = _fwrite(&(this->Base).field_0x20,4,1,param_1), sVar3 == 1)) &&
      (sVar3 = _fwrite(&(this->Base).field_0x24,4,1,param_1), sVar3 == 1)) &&
     (((sVar3 = _fwrite(&(this->Base).field_0x28,4,1,param_1), sVar3 == 1 &&
       (sVar3 = _fwrite(&(this->Base).field_0x2c,4,1,param_1), sVar3 == 1)) &&
      (sVar3 = _fwrite(&(this->Base).field_0x30,4,1,param_1), sVar3 == 1)))) {
    local_30 = 0xf;
    local_34 = 0;
    local_48[4] = 0;
    iVar1 = *(int *)(*(int *)&(this->Base).field_0x128 + 0x130);
    local_4 = 0;
    if ((iVar1 != 0) &&
       (this_00 = (void *)(**(code **)(*DAT_00707ce4 + 0xd8))(iVar1), this_00 != (void *)0x0)) {
      pcVar4 = FUN_004ab1c0(this_00,(cls_0x50db20 *)&stack0xffffffd4);
      local_4._0_1_ = 1;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_48,(_String_base *)pcVar4,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&stack0xffffffd4);
    }
    bVar2 = FUN_0050b790((size_t)local_48,param_1);
    if (((bVar2) && (sVar3 = _fwrite(&(this->Base).field_0xc0,4,1,param_1), sVar3 == 1)) &&
       (sVar3 = _fwrite(&(this->Base).field_0x154,4,1,param_1), sVar3 == 1)) {
      Base::virt_meth_0x4b2830(&this->Base,param_1);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_48);
    }
    else {
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_48);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



Fragment * __thiscall GUI::Fragment::Fragment(Fragment *this)

{
  undefined *this_00;
  undefined *this_01;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006322a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Base::Base(&this->Base);
  this_00 = &(this->Base).field_0x48;
  local_4 = 0;
  (this->Base).vftptr_0x0 = (Base__vftable_66e41c *)&Fragment__vftable_66ea1c_0066ea1c;
  (this->Base).field_0x18 = 1;
  *(undefined4 *)&(this->Base).field_0x1c = 0;
  *(undefined4 *)&(this->Base).field_0x20 = 2;
  *(undefined4 *)&(this->Base).field_0x24 = 2;
  *(undefined4 *)&(this->Base).field_0x28 = 0;
  *(undefined4 *)&(this->Base).field_0x2c = 0;
  cls_0x4abc60::cls_0x4abc60((cls_0x4abc60 *)&(this->Base).field_0x70);
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)&(this->Base).field_0x4c = 0;
  *(undefined4 *)&(this->Base).field_0x50 = 0;
  *(undefined4 *)&(this->Base).field_0x54 = 0;
  *(undefined4 *)&(this->Base).field_0x58 = 0;
  *(undefined4 *)&(this->Base).field_0x5c = 0;
  *(undefined4 *)&(this->Base).field_0x60 = 0;
  *(undefined4 *)&(this->Base).field_0x64 = 0;
  *(undefined4 *)&(this->Base).field_0x68 = 0;
  *(undefined4 *)&(this->Base).field_0x6c = 0;
  *(undefined4 *)&(this->Base).field_0x80 = 0;
  *(undefined4 *)&(this->Base).field_0x84 = 0;
  *(undefined4 *)&(this->Base).field_0x88 = 0;
  *(undefined4 *)&(this->Base).field_0x8c = 0;
  *(undefined4 *)&(this->Base).field_0x90 = 0;
  *(undefined4 *)&(this->Base).field_0x94 = 0;
  *(undefined4 *)&(this->Base).field_0x98 = 0;
  this_01 = &(this->Base).field_0x12c;
  *(undefined4 *)this_01 = 0;
  *(undefined4 *)&(this->Base).field_0x130 = 0;
  *(undefined4 *)&(this->Base).field_0x134 = 0;
  *(undefined4 *)&(this->Base).field_0x138 = 0;
  *(undefined4 *)&(this->Base).field_0x13c = 0;
  (this->Base).field_0x140 = 0;
  *(undefined4 *)&(this->Base).field_0x144 = 0;
  (this->Base).field_0x148 = 0;
  (this->Base).field_0x149 = 0;
  (this->Base).field_0x14a = 0;
  (this->Base).field_0x14b = 0;
  *(undefined4 *)&(this->Base).field_0x14c = 0x3d4ccccd;
  *(undefined4 *)&(this->Base).field_0x150 = 0xffff0000;
  piVar4 = (int *)0x4;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)&(this->Base).field_0x154 = 0xff808080;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)&(this->Base).field_0x4c = 0xffffffff;
  *(undefined **)&(this->Base).field_0x54 = &(this->Base).field_0xb8;
  iVar1 = FUN_0047460d(0x144);
  Gregorian::meth_0x4ab680((Gregorian *)this_00,0x144,iVar1,piVar4);
  iVar1 = cls_0x515040::meth_0x41f630((cls_0x515040 *)this_00,1);
  *(int *)&(this->Base).field_0xb4 = iVar1;
  *(undefined4 *)(iVar1 + 0x20) = 5;
  *(undefined4 *)(*(int *)&(this->Base).field_0xb4 + 0x28) = 0;
  *(undefined4 *)(*(int *)&(this->Base).field_0xb4 + 0x2c) = 0;
  *(undefined4 *)(*(int *)&(this->Base).field_0xb4 + 0x30) = 2;
  iVar1 = *(int *)&(this->Base).field_0x7c;
  *(int *)&(this->Base).field_0x128 = iVar1;
  *(undefined4 *)(iVar1 + 0x1c) = 0x14;
  *(undefined4 *)(iVar1 + 0x20) = 0x14;
  iVar1 = *(int *)&(this->Base).field_0x128;
  *(undefined4 *)(iVar1 + 0x28) = 1;
  *(undefined4 *)(iVar1 + 0x24) = 1;
  *(undefined4 *)(*(int *)&(this->Base).field_0x128 + 0x130) = 0;
  cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this_01,(int)this_00);
  cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)&(this->Base).field_0x70);
  uVar3 = 0;
  puVar2 = (undefined4 *)&(this->Base).field_0xc4;
  do {
    puVar2[1] = 0xff808080;
    *puVar2 = 0x3f800000;
    puVar2[-1] = 0;
    if ((uVar3 & 1) == 0) {
      puVar2[2] = 0;
    }
    else {
      puVar2[2] = 0x3f800000;
    }
    if ((int)uVar3 < 2) {
      puVar2[3] = 0;
    }
    else {
      puVar2[3] = 0x3f800000;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 7;
  } while ((int)uVar3 < 4);
  *(undefined4 *)&(this->Base).field_0x40 = 0xbf800000;
  *(undefined4 *)&(this->Base).field_0x44 = 0xbf800000;
  *(undefined4 *)&(this->Base).field_0x38 = 0;
  *(undefined4 *)&(this->Base).field_0x3c = 0;
  ExceptionList = local_c;
  return this;
}



Fragment * __thiscall GUI::Fragment::~Fragment(Fragment *this)

{
  undefined *this_00;
  Fragment *pFVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006322dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Base).vftptr_0x0 = (Base__vftable_66e41c *)&Fragment__vftable_66ea1c_0066ea1c;
  this_00 = &(this->Base).field_0x48;
  local_4 = 2;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)this_00);
  local_4._0_1_ = 1;
  cls_0x420270::meth_0x420270((cls_0x420270 *)&(this->Base).field_0x12c);
  local_4._0_1_ = 3;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)this_00);
  local_4 = (uint)local_4._1_3_ << 8;
  pFVar1 = (Fragment *)cls_0x4abc60::meth_0x41fbd0((cls_0x4abc60 *)&(this->Base).field_0x70);
  (this->Base).vftptr_0x0 = &Base__vftable_66e41c_0066e41c;
  ExceptionList = local_c;
  return pFVar1;
}



undefined4 * __thiscall GUI::Fragment::virt_meth_0x4b2700(Fragment *this,byte param_1)

{
  ~Fragment(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/Fragment.h"
