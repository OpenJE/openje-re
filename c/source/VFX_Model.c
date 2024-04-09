#include "../include/VFX_Model.h"

void __thiscall
VFX_Model::virt_meth_0x4f30c0
          (VFX_Model *this,int **param_1,undefined4 param_2,uint param_3,void *param_4,
          undefined4 *param_5,undefined4 *param_6)

{
  float fVar1;
  void *__return_storage_ptr__;
  int **ppiVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined3 uVar7;
  char cVar8;
  float10 *unaff_EBP;
  undefined4 **ppuVar9;
  float10 *unaff_EDI;
  uint uVar10;
  float10 extraout_ST0;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  VFX_EffectInstance::virt_meth_0x4e19b0
            (&this->VFX_EffectInstance,param_1,param_2,param_3,param_4,param_5,param_6);
  fVar1 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x21c;
  param_6 = (undefined4 *)0x0;
  if ((NAN(fVar1) || NAN((float)param_1)) == (fVar1 == (float)param_1)) {
    param_6 = (undefined4 *)
              ((float)param_1 -
              *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x21c);
    *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x21c =
         param_1;
  }
  if (*(cls_0x4a5be0 **)&this->field_0x2c4 != (cls_0x4a5be0 *)0x0) {
    cls_0x4a5be0::meth_0x4a62b0(*(cls_0x4a5be0 **)&this->field_0x2c4,param_1);
  }
  if (*(cls_0x49cc40 **)&this->field_0x2bc == (cls_0x49cc40 *)0x0) {
    return;
  }
  cls_0x49cc40::meth_0x4a0750(*(cls_0x49cc40 **)&this->field_0x2bc,(float)param_6);
  param_1 = (int **)(*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x21c /
                    *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                               field_0xb4);
  if ((float)param_1 < 0.0 == NAN((float)param_1)) {
    if (1.0 < (float)param_1) {
      param_1 = (int **)0x3f800000;
    }
  }
  else {
    param_1 = (int **)0x0;
  }
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x200 != '\0') {
    if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x201 == '\0') ||
       (ppiVar2 = param_1,
       *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xb4 <=
       0.0)) {
      ppiVar2 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x21c;
    }
    param_6 = (undefined4 *)
              ((float)ppiVar2 *
               *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x214 +
              *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x218);
    FUN_00512f70(param_6,*(float10 **)
                          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x210,0,1.0,(float)param_6,unaff_EDI);
    cls_0x49cc40::meth_0x49cf30
              (*(cls_0x49cc40 **)&this->field_0x2bc,
               (float)(((float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.mbr_0x204 -
                       (float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.field_0x1a8) * extraout_ST0 +
                      (float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.field_0x1a8),
               (float)(((float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x208 -
                       (float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.field_0x1ac) * extraout_ST0 +
                      (float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.field_0x1ac),
               (float)(((float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x20c -
                       (float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.field_0x1b0) * extraout_ST0 +
                      (float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.field_0x1b0));
  }
  cVar4 = (*(this->VFX_EffectInstance).vftptr_0x0[3].virt_meth_0x5a9320_16)((Window *)this);
  if (cVar4 == '\0') {
    return;
  }
  ppuVar9 = (undefined4 **)0x0;
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c0 == '\0') {
    param_4 = (void *)(uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                  field_0x1be;
    uVar10 = (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1bd;
    param_3 = (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1bf;
  }
  else {
    if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c1 == '\0') ||
       (ppiVar2 = param_1,
       *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xb4 <=
       0.0)) {
      ppiVar2 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x21c;
    }
    param_6 = (undefined4 *)
              ((float)ppiVar2 *
               *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1cc +
              *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1d0);
    FUN_00512f70(param_6,(float10 *)
                         (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x1c8
                 ,0,1.0,(float)param_6,unaff_EBP);
    param_6 = (undefined4 *)
              ((uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x1c2 -
              (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1bd);
    uVar11 = FUN_00616e24();
    uVar10 = (uint)uVar11;
    param_6 = (undefined4 *)
              ((uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x1c3 -
              (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1be);
    uVar11 = FUN_00616e24();
    param_4 = (void *)uVar11;
    param_6 = (undefined4 *)
              ((uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x1c4 -
              (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1bf);
    uVar11 = FUN_00616e24();
    param_3 = (uint)uVar11;
  }
  cVar4 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ee;
  puVar6 = (undefined4 *)CONCAT31((int3)(param_3 >> 8),cVar4);
  if (cVar4 == '\0') {
    param_6 = (undefined4 *)
              (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1ed;
  }
  else {
    if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ef == '\0') ||
       (ppiVar2 = param_1,
       *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xb4 <=
       0.0)) {
      ppiVar2 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x21c;
    }
    param_6 = (undefined4 *)
              ((float)ppiVar2 *
               *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1f8 +
              *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1fc);
    FUN_00512f70(param_6,*(float10 **)
                          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x1f4,0,1.0,(float)param_6,unaff_EBP);
    param_6 = (undefined4 *)
              ((uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x1f0 -
              (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1ed);
    uVar11 = FUN_00616e24();
    puVar6 = (undefined4 *)uVar11;
    param_6 = puVar6;
  }
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d8 == '\0') {
    cVar4 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d4;
    puVar6 = (undefined4 *)CONCAT31((int3)((uint)puVar6 >> 8),cVar4);
    if (cVar4 == '\0') goto LAB_004f352a;
    puVar6 = (undefined4 *)
             ((((byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d5
               | 0xffffff00) << 8 |
              (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1d6) << 8 |
             (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1d7);
    param_5 = puVar6;
  }
  else {
    if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d9 == '\0') ||
       (*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xb4 <=
        0.0)) {
      param_1 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x21c;
    }
    __return_storage_ptr__ =
         *(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e0;
    FUN_00512f70(__return_storage_ptr__,(float10 *)__return_storage_ptr__,0,1.0,
                 (float)param_1 *
                 *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x1e4 +
                 *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x1e8,unaff_EBP);
    param_5 = (undefined4 *)
              (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1d5;
    uVar11 = FUN_00616e24();
    uVar12 = FUN_00616e24();
    uVar13 = FUN_00616e24();
    puVar6 = (undefined4 *)((uint)uVar13 & 0xff);
    param_5 = (undefined4 *)
              ((((uint)uVar11 | 0xffffff00) << 8 | (uint)uVar12 & 0xff) << 8 | (uint)puVar6);
  }
  ppuVar9 = &param_5;
LAB_004f352a:
  puVar3 = param_6;
  uVar7 = (undefined3)((uint)puVar6 >> 8);
  if (((((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b6 == '\0') &&
       ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c0 == '\0')) &&
      ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ee == '\0')) &&
     ((((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc == '\0' &&
       ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ec == '\0')) &&
      (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b5 == '\0' &&
       ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d4 == '\0'))))))
  {
    cls_0x49cc40::meth_0x49cc70(*(cls_0x49cc40 **)&this->field_0x2bc);
    uVar7 = 0;
    cls_0x49cc40::meth_0x49cdd0(*(cls_0x49cc40 **)&this->field_0x2bc);
  }
  cVar4 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c0;
  if (((cVar4 != '\0') ||
      ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ee != '\0')) ||
     (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc != '\0' ||
      ((((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ec != '\0' ||
        ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d8 != '\0')) ||
       ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d4 != '\0'))))))
  {
    cVar5 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b5;
    if ((cVar5 != '\0') &&
       ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc == '\0')) {
      uVar10 = 0x80;
      param_3 = 0x80;
      param_4 = (void *)0x80;
    }
    if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ee == '\0') &&
       ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ec == '\0')) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x01';
    }
    if (((cVar4 != '\0') ||
        ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc != '\0')) ||
       (cVar5 != '\0')) {
      cVar5 = '\x01';
    }
    uVar7 = 0;
    cls_0x49cc40::meth_0x49cca0
              (*(cls_0x49cc40 **)&this->field_0x2bc,
               ((uVar10 & 0xff | (int)puVar3 << 8) << 8 | (uint)param_4 & 0xff) << 8 |
               param_3 & 0xff,cVar5,cVar8,(uint *)ppuVar9);
  }
  cls_0x49cc40::meth_0x49ce40
            (*(cls_0x49cc40 **)&this->field_0x2bc,
             CONCAT31(uVar7,(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x1b5 == '\0'));
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b6 != '\0') {
    cls_0x49cc40::meth_0x49ce10
              (*(cls_0x49cc40 **)&this->field_0x2bc,
               *(undefined4 *)
                &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b8);
  }
  return;
}



void __thiscall VFX_Model::meth_0x4f3a00(VFX_Model *this,_String_base *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  cls_0x49cc40 *this_00;
  
  if (*(undefined4 **)&this->field_0x2bc != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)&this->field_0x2bc)(1);
    *(undefined4 *)&this->field_0x2bc = 0;
  }
  puVar1 = &this->field_0x2b8;
  if (((*(int *)&this->field_0x2b8 != 0) && (this->field_0x2d9 != '\0')) &&
     (iVar2 = (**(code **)(*DAT_00707ce4 + 0xb8))(puVar1), iVar2 != 0)) {
    FUN_004b86e0((char)*(undefined4 *)puVar1);
  }
  this->field_0x2d9 = 1;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x220,param_1,
             0,0xffffffff);
  this->field_0x2b0 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b4;
  puVar3 = (undefined4 *)(param_1 + 4);
  if (0xf < *(uint *)(param_1 + 0x18)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar4 = FUN_004a1170((char *)puVar3," \n\t\r");
  if ((char)uVar4 == '\0') {
    iVar2 = FUN_004b8190();
    *(int *)puVar1 = iVar2;
    if (iVar2 != 0) {
      this_00 = (cls_0x49cc40 *)(**(code **)(*DAT_00707ce4 + 0xbc))(iVar2);
      *(cls_0x49cc40 **)&this->field_0x2bc = this_00;
      if (this_00 != (cls_0x49cc40 *)0x0) {
        cls_0x49cc40::meth_0x49cf10
                  (this_00,(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x1b4);
        cls_0x49cc40::meth_0x49cf30
                  (*(cls_0x49cc40 **)&this->field_0x2bc,
                   *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x1a8,
                   *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x1ac,
                   *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x1b0);
        if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b6 != '\0') {
          cls_0x49cc40::meth_0x49ce10
                    (*(cls_0x49cc40 **)&this->field_0x2bc,
                     *(undefined4 *)
                      &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b8
                    );
        }
      }
    }
  }
  return;
}



void * __thiscall VFX_Model::meth_0x4f4000(VFX_Model *this,int param_1)

{
  cls_0x4a1f30 *this_00;
  void *_Memory;
  cls_0x49cc40 *this_01;
  cls_0x4a5be0 *pcVar1;
  int iVar2;
  dword *pdVar3;
  dword *pdVar4;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00634a0b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)&this->field_0x2bc != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)&this->field_0x2bc)(1);
    *(undefined4 *)&this->field_0x2bc = 0;
  }
  if ((*(int *)&this->field_0x2b8 != 0) && (this->field_0x2d9 != '\0')) {
    (**(code **)(*DAT_00707ce4 + 0xb8))(&this->field_0x2b8);
  }
  pcVar1 = *(cls_0x4a5be0 **)&this->field_0x2c4;
  if (pcVar1 != (cls_0x4a5be0 *)0x0) {
    cls_0x4a5be0::meth_0x4a5d70(pcVar1);
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
  if ((this->field_0x2da != '\0') &&
     (this_00 = *(cls_0x4a1f30 **)&this->field_0x2c0, this_00 != (cls_0x4a1f30 *)0x0)) {
    cls_0x4a1f30::meth_0x4a4c10(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  _Memory = *(void **)&this->field_0x2b4;
  if ((_Memory != (void *)0x0) && (this->field_0x2d8 != '\0')) {
    FUN_004f3de0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_MODEL_Struct::meth_0x4f3b40
            ((VFXEFFECTTYPE_MODEL_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  pdVar3 = (dword *)(param_1 + 0x80);
  pdVar4 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x2c
  ;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x2b8);
  *(int *)&this->field_0x2b8 = iVar2;
  *(undefined4 *)&this->field_0x2bc = 0;
  if (iVar2 != 0) {
    this_01 = (cls_0x49cc40 *)(**(code **)(*DAT_00707ce4 + 0xbc))(iVar2);
    *(cls_0x49cc40 **)&this->field_0x2bc = this_01;
    if (this_01 != (cls_0x49cc40 *)0x0) {
      cls_0x49cc40::meth_0x49cf10
                (this_01,(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1b4);
      if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b6 != '\0') {
        cls_0x49cc40::meth_0x49ce10
                  (*(cls_0x49cc40 **)&this->field_0x2bc,
                   *(undefined4 *)
                    &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b8);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c0);
  *(int *)&this->field_0x2c0 = iVar2;
  *(undefined4 *)&this->field_0x2c4 = 0;
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x2c4) != 0)) {
    pcVar1 = (cls_0x4a5be0 *)operator_new(200);
    uStack_4 = 0;
    if (pcVar1 == (cls_0x4a5be0 *)0x0) {
      pcVar1 = (cls_0x4a5be0 *)0x0;
    }
    else {
      pcVar1 = cls_0x4a5be0::cls_0x4a5be0(pcVar1,*(undefined4 *)&this->field_0x2c0);
    }
    uStack_4 = 0xffffffff;
    *(cls_0x4a5be0 **)&this->field_0x2c4 = pcVar1;
    if (*(cls_0x49cc40 **)&this->field_0x2bc != (cls_0x49cc40 *)0x0) {
      cls_0x49cc40::meth_0x49dd40(*(cls_0x49cc40 **)&this->field_0x2bc,pcVar1,0);
    }
    cls_0x4a5be0::meth_0x4a5640
              (*(cls_0x4a5be0 **)&this->field_0x2c4,0,0,0,0,0,
               *(undefined4 *)
                &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4);
    *(undefined4 *)&this->field_0x2ac =
         *(undefined4 *)
          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4;
  }
  if (*(cls_0x49cc40 **)&this->field_0x2bc != (cls_0x49cc40 *)0x0) {
    cls_0x49cc40::meth_0x49cf30
              (*(cls_0x49cc40 **)&this->field_0x2bc,
               *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1a8,
               *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1ac,
               *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1b0);
  }
  this->field_0x2d8 = 0;
  this->field_0x2d9 = 0;
  this->field_0x2da = 0;
  ExceptionList = pvStack_c;
  return this;
}



VFX_Model * __thiscall VFX_Model::~VFX_Model(VFX_Model *this)

{
  cls_0x4a5be0 *this_00;
  cls_0x4a1f30 *this_01;
  void *_Memory;
  VFX_Model *pVVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006349f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Model__vftable_673714_00673714;
  local_4 = 4;
  if (*(undefined4 **)&this->field_0x2bc != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)&this->field_0x2bc)(1);
    *(undefined4 *)&this->field_0x2bc = 0;
  }
  if ((*(int *)&this->field_0x2b8 != 0) && (this->field_0x2d9 != '\0')) {
    (**(code **)(*DAT_00707ce4 + 0xb8))(&this->field_0x2b8);
  }
  this_00 = *(cls_0x4a5be0 **)&this->field_0x2c4;
  if (this_00 != (cls_0x4a5be0 *)0x0) {
    cls_0x4a5be0::meth_0x4a5d70(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  if ((this->field_0x2da != '\0') &&
     (this_01 = *(cls_0x4a1f30 **)&this->field_0x2c0, this_01 != (cls_0x4a1f30 *)0x0)) {
    cls_0x4a1f30::meth_0x4a4c10(this_01);
                    /* WARNING: Subroutine does not return */
    _free(this_01);
  }
  _Memory = *(void **)&this->field_0x2b4;
  if ((_Memory != (void *)0x0) && (this->field_0x2d8 != '\0')) {
    FUN_004f3de0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (0xf < *(uint *)&this->field_0x2a8) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this->field_0x294);
  }
  *(undefined4 *)&this->field_0x2a8 = 0xf;
  *(undefined4 *)&this->field_0x2a4 = 0;
  this->field_0x294 = 0;
  if (0xf < *(uint *)&this->field_0x28c) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x240);
  }
  *(undefined4 *)&this->field_0x28c = 0xf;
  *(undefined4 *)&this->field_0x288 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x240 = 0;
  if (0xf < *(uint *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x238)
  {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x224);
  }
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x238 =
       0xf;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x224 = 0;
  VFXEFFECTTYPE_MODEL_Struct::meth_0x4f38d0
            ((VFXEFFECTTYPE_MODEL_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  local_4 = 0xffffffff;
  pVVar1 = (VFX_Model *)VFX_EffectInstance::meth_0x4e18d0(&this->VFX_EffectInstance);
  ExceptionList = pvStack_c;
  return pVVar1;
}



void __thiscall VFX_Model::meth_0x4f43e0(VFX_Model *this,_String_base *param_1,float param_2)

{
  int iVar1;
  char *pcVar2;
  cls_0x4a5be0 *pcVar3;
  void **ppvVar4;
  char *pcVar5;
  int *piVar6;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634a0b;
  local_c = ExceptionList;
  if (((*(int *)&this->field_0x2c4 == 0) || (*(int *)&this->field_0x2bc == 0)) ||
     ((*(cls_0x4a1f30 **)&this->field_0x2c0)->granny_file == (granny_file *)0x0)) {
    pcVar2 = "";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->field_0x290,"",(uint)(pcVar5 + -0x64d7d8));
    iVar1 = *(int *)&this->field_0x2bc;
    if (iVar1 != 0) {
      if ((*(char *)(iVar1 + 0x50) != '\0') &&
         (pcVar3 = *(cls_0x4a5be0 **)(iVar1 + 0x4c), pcVar3 != (cls_0x4a5be0 *)0x0)) {
        cls_0x4a5be0::meth_0x4a5d70(pcVar3);
                    /* WARNING: Subroutine does not return */
        _free(pcVar3);
      }
      *(undefined4 *)(iVar1 + 0x4c) = 0;
      FUN_0049d570(*(void **)(iVar1 + 0x48),0);
      *(undefined *)(iVar1 + 0x50) = 0;
    }
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  cls_0x4a1f30::meth_0x4a4ba0(*(cls_0x4a1f30 **)&this->field_0x2c0);
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->field_0x290,param_1,0,0xffffffff);
  cls_0x4a5be0::meth_0x4a4c90(*(cls_0x4a5be0 **)&this->field_0x2c4,0.0,'\0');
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      piVar6 = (int *)(param_1 + 4);
    }
    else {
      piVar6 = *(int **)(param_1 + 4);
    }
    ppvVar4 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,piVar6,(int *)0x0);
    if (ppvVar4 != (void **)0x0) {
      Gfx_AnimationObject::LoadAnimationFileFromBuffer
                (*(void **)&this->field_0x2c0,0,(undefined4 *)((int)ppvVar4[2] - (int)ppvVar4[1]),
                 (int)ppvVar4[1],param_2);
      FUN_00498f30(DAT_00707da8,ppvVar4);
    }
    cls_0x4a5be0::meth_0x4a5640
              (*(cls_0x4a5be0 **)&this->field_0x2c4,0,0,0,0,0,
               *(undefined4 *)
                &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4);
    *(undefined4 *)&this->field_0x2ac =
         *(undefined4 *)
          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4;
    ExceptionList = local_c;
    return;
  }
  pcVar3 = *(cls_0x4a5be0 **)&this->field_0x2c4;
  if (pcVar3 != (cls_0x4a5be0 *)0x0) {
    cls_0x4a5be0::meth_0x4a5d70(pcVar3);
                    /* WARNING: Subroutine does not return */
    _free(pcVar3);
  }
  pcVar3 = (cls_0x4a5be0 *)operator_new(200);
  local_4 = 0;
  if (pcVar3 != (cls_0x4a5be0 *)0x0) {
    pcVar3 = cls_0x4a5be0::cls_0x4a5be0(pcVar3,*(undefined4 *)&this->field_0x2c0);
    *(cls_0x4a5be0 **)&this->field_0x2c4 = pcVar3;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)&this->field_0x2c4 = 0;
  ExceptionList = local_c;
  return;
}



undefined4 * __thiscall VFX_Model::virt_meth_0x4f45c0(VFX_Model *this,byte param_1)

{
  ~VFX_Model(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



VFX_Model * __thiscall VFX_Model::VFX_Model(VFX_Model *this)

{
  cls_0x4f45e0 *pcVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634a6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Model__vftable_673714_00673714;
  VFXEFFECTTYPE_MODEL_Struct::VFXEFFECTTYPE_MODEL_Struct
            ((VFXEFFECTTYPE_MODEL_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x238 =
       0xf;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x224 = 0;
  *(undefined4 *)&this->field_0x28c = 0xf;
  *(undefined4 *)&this->field_0x288 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x240 = 0;
  *(undefined4 *)&this->field_0x2a8 = 0xf;
  *(undefined4 *)&this->field_0x2a4 = 0;
  this->field_0x294 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x80 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x7c = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x78 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x74 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x6c = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x68 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x64 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x60 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x58 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x54 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x50 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x30 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x84 =
       0x3f800000;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x70 =
       0x3f800000;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x5c =
       0x3f800000;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x2c =
       0x3f800000;
  local_4._0_1_ = 4;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x21c = 0;
  *(undefined4 *)&this->field_0x2b4 = 0;
  *(undefined4 *)&this->field_0x2b8 = 0;
  *(undefined4 *)&this->field_0x2bc = 0;
  pcVar1 = (cls_0x4f45e0 *)operator_new(0x37c);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (pcVar1 == (cls_0x4f45e0 *)0x0) {
    pcVar1 = (cls_0x4f45e0 *)0x0;
  }
  else {
    pcVar1 = cls_0x4f45e0::cls_0x4f45e0(pcVar1);
  }
  *(cls_0x4f45e0 **)&this->field_0x2c0 = pcVar1;
  this->field_0x2d8 = 1;
  this->field_0x2d9 = 1;
  this->field_0x2da = 1;
  *(undefined4 *)&this->field_0x2c4 = 0;
  *(undefined4 *)&this->field_0x2ac = 0;
  ExceptionList = local_c;
  return this;
}



undefined __thiscall VFX_Model::meth_0x4f47b0(VFX_Model *this,_String_base *param_1,float param_2)

{
  int iVar1;
  cls_0x4a1f30 *this_00;
  cls_0x4f45e0 *pcVar2;
  void **ppvVar3;
  undefined4 uVar4;
  cls_0x4a5be0 *pcVar5;
  int *piVar6;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634a96;
  local_c = ExceptionList;
  iVar1 = *(int *)&this->field_0x2bc;
  local_11 = 0;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    if ((*(char *)(iVar1 + 0x50) != '\0') &&
       (pcVar5 = *(cls_0x4a5be0 **)(iVar1 + 0x4c), pcVar5 != (cls_0x4a5be0 *)0x0)) {
      ExceptionList = &local_c;
      cls_0x4a5be0::meth_0x4a5d70(pcVar5);
                    /* WARNING: Subroutine does not return */
      _free(pcVar5);
    }
    ExceptionList = &local_c;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    FUN_0049d570(*(void **)(iVar1 + 0x48),0);
    *(undefined *)(iVar1 + 0x50) = 0;
  }
  pcVar5 = *(cls_0x4a5be0 **)&this->field_0x2c4;
  if (pcVar5 != (cls_0x4a5be0 *)0x0) {
    cls_0x4a5be0::meth_0x4a5d70(pcVar5);
                    /* WARNING: Subroutine does not return */
    _free(pcVar5);
  }
  if ((this->field_0x2da != '\0') &&
     (this_00 = *(cls_0x4a1f30 **)&this->field_0x2c0, this_00 != (cls_0x4a1f30 *)0x0)) {
    cls_0x4a1f30::meth_0x4a4c10(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  this->field_0x2da = 1;
  pcVar2 = (cls_0x4f45e0 *)operator_new(0x37c);
  local_4 = 0;
  if (pcVar2 == (cls_0x4f45e0 *)0x0) {
    pcVar2 = (cls_0x4f45e0 *)0x0;
  }
  else {
    pcVar2 = cls_0x4f45e0::cls_0x4f45e0(pcVar2);
  }
  local_4 = 0xffffffff;
  *(cls_0x4f45e0 **)&this->field_0x2c0 = pcVar2;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x23c,param_1,
             0,0xffffffff);
  if (*(int *)(param_1 + 0x14) == 0) {
    local_11 = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      piVar6 = (int *)(param_1 + 4);
    }
    else {
      piVar6 = *(int **)(param_1 + 4);
    }
    ppvVar3 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,piVar6,(int *)0x0);
    if (ppvVar3 != (void **)0x0) {
      uVar4 = Gfx_AnimationObject::LoadSkeletonFromBuffer
                        (*(Gfx_AnimationObject **)&this->field_0x2c0,
                         (int)ppvVar3[2] - (int)ppvVar3[1],ppvVar3[1],param_2);
      if ((char)uVar4 != '\0') {
        pcVar5 = (cls_0x4a5be0 *)operator_new(200);
        local_4 = 1;
        if (pcVar5 == (cls_0x4a5be0 *)0x0) {
          pcVar5 = (cls_0x4a5be0 *)0x0;
        }
        else {
          pcVar5 = cls_0x4a5be0::cls_0x4a5be0(pcVar5,*(undefined4 *)&this->field_0x2c0);
        }
        local_4 = 0xffffffff;
        *(cls_0x4a5be0 **)&this->field_0x2c4 = pcVar5;
        if (*(cls_0x49cc40 **)&this->field_0x2bc != (cls_0x49cc40 *)0x0) {
          cls_0x49cc40::meth_0x49dd40(*(cls_0x49cc40 **)&this->field_0x2bc,pcVar5,0);
        }
        local_11 = 1;
      }
      FUN_00498f30(DAT_00707da8,ppvVar3);
    }
  }
  ExceptionList = local_c;
  return local_11;
}


#include "../include/VFX_Model.h"
