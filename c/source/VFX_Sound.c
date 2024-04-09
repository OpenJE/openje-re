#include "../include/VFX_Sound.h"

undefined4 __thiscall VFX_Sound::virt_meth_0x4080b0(VFX_Sound *this)

{
  return 0;
}



void __thiscall
VFX_Sound::virt_meth_0x4e0d70(VFX_Sound *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)
           &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x7c;
  uVar3 = *(undefined4 *)
           &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x78;
  uVar2 = *(undefined4 *)
           &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x80;
  *param_2 = uVar3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}



uint __thiscall VFX_Sound::virt_meth_0x4e0dc0(VFX_Sound *this,float param_1)

{
  float fVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  undefined2 uVar5;
  undefined3 uVar4;
  
  cVar2 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x88;
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar3 = CONCAT31(uVar4,cVar2);
  if ((cVar2 == '\0') &&
     (cVar2 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x89,
     uVar3 = CONCAT31(uVar4,cVar2), cVar2 != '\0')) {
    fVar1 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.field_0x28;
    uVar5 = (undefined2)((uint)in_EAX >> 0x10);
    if (fVar1 < 0.0 != NAN(fVar1)) {
      return CONCAT22(uVar5,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                            (ushort)(fVar1 == 0.0) << 0xe);
    }
    fVar1 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.field_0x28;
    uVar3 = CONCAT22(uVar5,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      fVar1 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.field_0x24 +
              *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.field_0x28;
      if (fVar1 < param_1 != (NAN(fVar1) || NAN(param_1))) {
        return 1;
      }
      return 0;
    }
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}



undefined __thiscall
VFX_Sound::meth_0x4e1580
          (VFX_Sound *this,undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4,
          int param_5,undefined4 param_6,undefined4 *param_7)

{
  cls_0x4e0ed0 *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  VFX_Parameter *this_01;
  int iVar6;
  dword in_stack_0000002c;
  uint in_stack_00000030;
  dword in_stack_00000034;
  undefined local_d;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00633ed8;
  local_c = ExceptionList;
  iVar6 = 0;
  local_4 = 0;
  local_d = 0;
  if (*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                      VFX_Parameter.vftptr_0x0 + 1) == '\0') {
    if (0xf < in_stack_00000030) {
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(param_7);
    }
    return 1;
  }
  ExceptionList = &local_c;
  iVar1 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)&param_4);
  if (((iVar1 == 1) && (in_stack_00000034 != 0)) ||
     ((iVar1 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)&param_4), iVar1 == 2 &&
      (in_stack_00000034 != 0)))) {
    if ((param_5 == 0) && (in_stack_0000002c == 0)) {
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&param_6);
      ExceptionList = local_c;
      return 1;
    }
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&param_6);
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = FUN_004e0b20(param_4,param_1,param_2,(cls_0x48ddc0 *)param_3);
  iVar1 = param_5;
  if (iVar2 == 0) {
    if (0xf < in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
      _free(param_7);
    }
    ExceptionList = local_c;
    return 0;
  }
  if (in_stack_0000002c == 0) {
    if ((param_5 == 0) ||
       (((uVar5 = FUN_0051e920(param_5), (char)uVar5 != '\0' &&
         (*(cls_0x49c9e0 **)(iVar2 + 0x4c) != (cls_0x49c9e0 *)0x0)) &&
        (iVar6 = cls_0x49c9e0::meth_0x49c9e0(*(cls_0x49c9e0 **)(iVar2 + 0x4c),iVar1), iVar6 != 0))))
    {
LAB_004e171d:
      local_d = 1;
    }
  }
  else {
    this_00 = *(cls_0x4e0ed0 **)(iVar2 + 0x44);
    if (this_00 != (cls_0x4e0ed0 *)0x0) {
      iVar1 = cls_0x4e0ed0::meth_0x4e0ed0(this_00);
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          iVar3 = this_00->mbr_0x138 + iVar6;
          if (iVar3 != 0) {
            this_01 = (VFX_Parameter *)param_7;
            if (in_stack_00000030 < 0x10) {
              this_01 = (VFX_Parameter *)&param_7;
            }
            if (*(uint *)(iVar3 + 0x5c) < 0x10) {
              pbVar4 = (byte *)(iVar3 + 0x48);
            }
            else {
              pbVar4 = *(byte **)(iVar3 + 0x48);
            }
            iVar3 = VFX_Parameter::meth_0x619e6e(this_01,pbVar4);
            if (iVar3 == 0) goto LAB_004e171d;
          }
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 100;
        } while (iVar2 < iVar1);
      }
    }
  }
  if (0xf < in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
    _free(param_7);
  }
  ExceptionList = local_c;
  return local_d;
}



void __thiscall VFX_Sound::virt_meth_0x4e1850(VFX_Sound *this,undefined4 *param_1)

{
  int iVar1;
  dword *pdVar2;
  
  pdVar2 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x2c
  ;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar2 = *param_1;
    param_1 = param_1 + 1;
    pdVar2 = pdVar2 + 1;
  }
  return;
}



void __thiscall
VFX_Sound::virt_meth_0x4e1930(VFX_Sound *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined *puStack00000014;
  dword in_stack_ffffffd8;
  uint in_stack_ffffffdc;
  undefined4 *puVar1;
  
  puStack00000014 = &stack0xffffffd8;
  puVar1 = (undefined4 *)(in_stack_ffffffdc & 0xffffff00);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xffffffd8,
             (_String_base *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20,0,
             0xffffffff);
  meth_0x4e1580(this,param_1,param_2,param_3,
                (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x502110.mbr_0x0,
                *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.field_0x30,
                in_stack_ffffffd8,puVar1);
  return;
}



void __thiscall VFX_Sound::virt_meth_0x4e1b80(VFX_Sound *this,undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  cls_0x50db20 *pcVar3;
  _String_base local_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633f20;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  if (*(char *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
                vftptr_0x0 != '\0') {
    ExceptionList = &local_c;
    *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.field_0x30 = param_1;
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"",(uint)(pcVar2 + -0x64d7d8));
    local_4 = 0;
    pcVar3 = ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&stack0xffffffd8,local_44);
    local_4 = CONCAT31(local_4._1_3_,1);
    ::cls_0x50db20::meth_0x401b20
              (&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20,
               (_String_base *)pcVar3,0,0xffffffff);
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
  }
  ExceptionList = local_c;
  return;
}



void __thiscall VFX_Sound::meth_0x4e1d00(VFX_Sound *this,int param_1)

{
  if (param_1 != 0) {
    VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60
              ((VFXEFFECTTYPE_SOUND_Struct *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct,
               param_1);
    return;
  }
  return;
}



void __thiscall VFX_Sound::meth_0x4e1d50(VFX_Sound *this,int param_1,dword param_2)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60
            ((VFXEFFECTTYPE_SOUND_Struct *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct,
             param_1);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x20 = param_2
  ;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x24 =
       0xffffffff;
  return;
}



void __thiscall VFX_Sound::virt_meth_0x4e2f00(VFX_Sound *this)

{
  Gregorian *this_00;
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  cVar1 = FUN_004b82d0();
  if ((cVar1 != '\0') &&
     ((((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16c != '\0' ||
       ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16d == '\0')) &&
      (this_00 = *(Gregorian **)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174,
      this_00 != (Gregorian *)0x0)))) {
    bVar2 = Gregorian::meth_0x52cc40(this_00);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      Gregorian::meth_0x52c580
                (*(Gregorian **)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174,0);
    }
  }
  return;
}



uint __thiscall VFX_Sound::virt_meth_0x4e2f50(VFX_Sound *this,float param_1)

{
  float fVar1;
  char cVar2;
  Gregorian *this_00;
  bool bVar3;
  undefined4 in_EAX;
  float *pfVar4;
  undefined3 extraout_var;
  void *pvVar5;
  uint uVar6;
  
  if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16d != '\0') &&
     (cVar2 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x179,
     pfVar4 = (float *)CONCAT31((int3)((uint)in_EAX >> 8),cVar2), cVar2 != '\0')) goto LAB_004e2fde;
  fVar1 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xb4;
  if ((fVar1 < 0.0 == NAN(fVar1)) ||
     (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16c != '\0' ||
      (this_00 = *(Gregorian **)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174,
      this_00 == (Gregorian *)0x0)))) goto LAB_004e2fe4;
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x179 == '\0') {
LAB_004e2fa1:
    pfVar4 = *(float **)
              &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x17c;
    if ((pfVar4 == (float *)0x0) || (param_1 < *pfVar4)) {
LAB_004e2fe4:
      uVar6 = virt_meth_0x4e0dc0(this,param_1);
      return uVar6;
    }
  }
  else {
    bVar3 = Gregorian::meth_0x52cc40(this_00);
    if (CONCAT31(extraout_var,bVar3) != 0) goto LAB_004e2fa1;
  }
  if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x17c == 0) {
    pvVar5 = operator_new(4);
    *(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x17c =
         pvVar5;
  }
  pfVar4 = *(float **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x17c
  ;
  *pfVar4 = param_1;
LAB_004e2fde:
  return CONCAT31((int3)((uint)pfVar4 >> 8),1);
}



VFX_Sound * __thiscall VFX_Sound::~VFX_Sound(VFX_Sound *this)

{
  Gregorian *this_00;
  void *_Memory;
  VFX_Sound *pVVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634066;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Sound__vftable_672dfc_00672dfc;
  this_00 = *(Gregorian **)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174;
  local_4 = 1;
  if (this_00 != (Gregorian *)0x0) {
    Gregorian::meth_0x52d100(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  _Memory = *(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x17c
  ;
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e3060
            ((VFXEFFECTTYPE_SOUND_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  local_4 = 0xffffffff;
  pVVar1 = (VFX_Sound *)VFX_EffectInstance::meth_0x4e18d0(&this->VFX_EffectInstance);
  ExceptionList = local_c;
  return pVVar1;
}



VFX_Sound * __thiscall VFX_Sound::VFX_Sound(VFX_Sound *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Sound__vftable_672dfc_00672dfc;
  VFXEFFECTTYPE_SOUND_Struct::VFXEFFECTTYPE_SOUND_Struct
            ((VFXEFFECTTYPE_SOUND_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x170 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x178 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x179 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x17c = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall VFX_Sound::virt_meth_0x4e3240(VFX_Sound *this,byte param_1)

{
  ~VFX_Sound(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall VFX_Sound::virt_meth_0x4e3290(VFX_Sound *this)

{
  Gregorian *this_00;
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  cls_0x52e2e0 *pcVar3;
  undefined4 *******pppppppuVar4;
  uint unaff_retaddr;
  dword *pdVar5;
  void *local_6c;
  undefined4 *******local_68 [4];
  uint local_58;
  uint local_54;
  dword dStack_24;
  dword dStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006340a3;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &local_c;
  *(undefined *)
   &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x28 = 0;
  cVar1 = FUN_004b82d0();
  if ((cVar1 != '\0') &&
     ((((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16c != '\0' ||
       ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16d == '\0')) &&
      (this_00 = *(Gregorian **)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174,
      this_00 != (Gregorian *)0x0)))) {
    bVar2 = Gregorian::meth_0x52cc40(this_00);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      Gregorian::meth_0x52c580
                (*(Gregorian **)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174,0);
    }
  }
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x179 = 0;
  cVar1 = FUN_004b82d0();
  if (((cVar1 != '\0') &&
      ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16d != '\0')) &&
     (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174 == 0))
  {
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = (undefined4 *******)((uint)local_68[0] & 0xffffff00);
    local_4 = 0;
    if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x12c == 0) {
      if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x164 ==
          0) goto LAB_004e340b;
      pdVar5 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x150;
    }
    else {
      pdVar5 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x118;
    }
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_6c,(_String_base *)pdVar5,0,0xffffffff);
    if (local_58 != 0) {
      pcVar3 = (cls_0x52e2e0 *)operator_new(0x44);
      local_4._0_1_ = 1;
      if (pcVar3 == (cls_0x52e2e0 *)0x0) {
        pcVar3 = (cls_0x52e2e0 *)0x0;
      }
      else {
        pcVar3 = cls_0x52e2e0::cls_0x52e2e0(pcVar3);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      *(cls_0x52e2e0 **)
       &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174 = pcVar3;
      pppppppuVar4 = local_68[0];
      if (local_54 < 0x10) {
        pppppppuVar4 = local_68;
      }
      cls_0x52e2e0::meth_0x52d820(pcVar3,pppppppuVar4,(int *)0x0,(undefined4 *)0x0);
      *(undefined *)
       (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174 +
       0x34) = 1;
      (*(this->VFX_EffectInstance).vftptr_0x0[1].virt_meth_0x5a9320_16)((Window *)this);
      Gregorian::meth_0x52c350
                (*(Gregorian **)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174,
                 dStack_24,dStack_20,uStack_1c);
    }
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
LAB_004e340b:
  ExceptionList = local_10;
  FUN_00616e15(uStack_14 ^ local_4);
  return;
}



void * __thiscall VFX_Sound::meth_0x4e34b0(VFX_Sound *this,int param_1)

{
  Gregorian *this_00;
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  
  this_00 = *(Gregorian **)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174;
  if (this_00 != (Gregorian *)0x0) {
    Gregorian::meth_0x52d100(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e3430
            ((VFXEFFECTTYPE_SOUND_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  pdVar2 = (dword *)(param_1 + 0x80);
  pdVar3 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x2c
  ;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x170 =
       *(undefined4 *)(param_1 + 0x1a8);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x178 =
       *(undefined *)(param_1 + 0x1b0);
  return this;
}



void __thiscall VFX_Sound::virt_meth_0x4e3530(VFX_Sound *this,int param_1)

{
  Gregorian *this_00;
  uint uVar1;
  cls_0x52e2e0 *pcVar2;
  undefined4 ******ppppppuVar3;
  uint unaff_retaddr;
  dword *pdVar4;
  void *local_6c;
  undefined4 ******local_68 [4];
  uint local_58;
  uint local_54;
  dword dStack_24;
  dword dStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006340c3;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &local_c;
  meth_0x4e1d00(this,param_1);
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e3430
            ((VFXEFFECTTYPE_SOUND_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,param_1);
  this_00 = *(Gregorian **)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174;
  if (this_00 != (Gregorian *)0x0) {
    Gregorian::meth_0x52d100(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = (undefined4 ******)((uint)local_68[0] & 0xffffff00);
  local_4 = 0;
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x12c == 0) {
    if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x164 == 0)
    goto LAB_004e368a;
    pdVar4 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x150;
  }
  else {
    pdVar4 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x118;
  }
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_6c,(_String_base *)pdVar4,0,0xffffffff);
  uVar1 = local_54;
  if (local_58 != 0) {
    pcVar2 = (cls_0x52e2e0 *)operator_new(0x44);
    local_4._0_1_ = 1;
    if (pcVar2 == (cls_0x52e2e0 *)0x0) {
      pcVar2 = (cls_0x52e2e0 *)0x0;
    }
    else {
      pcVar2 = cls_0x52e2e0::cls_0x52e2e0(pcVar2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *(cls_0x52e2e0 **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174
         = pcVar2;
    ppppppuVar3 = local_68[0];
    if (local_54 < 0x10) {
      ppppppuVar3 = local_68;
    }
    cls_0x52e2e0::meth_0x52d820(pcVar2,ppppppuVar3,(int *)0x0,(undefined4 *)0x0);
    *(undefined *)
     (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174 + 0x34)
         = 1;
    (*(this->VFX_EffectInstance).vftptr_0x0[1].virt_meth_0x5a9320_16)((Window *)this);
    Gregorian::meth_0x52c350
              (*(Gregorian **)
                &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174,
               dStack_24,dStack_20,uStack_1c);
    uVar1 = local_58;
  }
  if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
LAB_004e368a:
  ExceptionList = local_10;
  FUN_00616e15(uStack_14 ^ local_4);
  return;
}



void __thiscall VFX_Sound::meth_0x4e7450(VFX_Sound *this,int param_1,undefined4 *param_2)

{
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  void *unaff_retaddr;
  
  meth_0x4e1d50(this,param_1,param_2);
  (*(this->VFX_EffectInstance).vftptr_0x0[2].virt_meth_0x4e19b0_4)
            (&this->VFX_EffectInstance,param_1,unaff_EDI,unaff_ESI,unaff_retaddr,
             (undefined4 *)param_1,param_2);
  return;
}


#include "../include/VFX_Sound.h"
