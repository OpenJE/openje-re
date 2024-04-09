#include "../include/VFX_VEG.h"

void __thiscall VFX_VEG::meth_0x501430(VFX_VEG *this)

{
  float10 fVar1;
  bool bVar2;
  bool bVar3;
  VFX_ParameterInfo *this_00;
  int iVar4;
  undefined4 uVar5;
  dword *pdVar6;
  undefined4 *unaff_EBP;
  dword *pdVar7;
  int iVar8;
  cls_0x4f9d10 *this_01;
  uint unaff_EDI;
  float10 fVar9;
  float *pfVar10;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  VFX_VEG *local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((float)this->mbr_0x38 < 1.1 != NAN((float)this->mbr_0x38)) {
    this_01 = *(cls_0x4f9d10 **)&(this->VFX_ParameterHolder).field_0x24;
    bVar3 = false;
    if (this_01 != *(cls_0x4f9d10 **)&(this->VFX_ParameterHolder).field_0x28) {
      pdVar7 = &this_01->mbr_0x14;
      local_40 = this;
      do {
        bVar2 = false;
        if (pdVar7[3] == 0) {
          VFX_Effect::meth_0x4f9a90((VFX_Effect *)this_01);
        }
        if (*pdVar7 == 0) {
          local_74 = 0;
        }
        else {
          local_74 = (int)(pdVar7[1] - *pdVar7) >> 2;
        }
        iVar8 = 0;
        if (0 < local_74) {
          do {
            this_00 = (VFX_ParameterInfo *)cls_0x4f9d10::meth_0x4f9d10(this_01,iVar8);
            if ((this_00->VFX_Parameter).mbr_0x1c < 0x10) {
              pdVar6 = &(this_00->VFX_Parameter).mbr_0x8;
            }
            else {
              pdVar6 = (dword *)(this_00->VFX_Parameter).mbr_0x8;
            }
            iVar4 = __stricmp((char *)pdVar6,"Offset");
            if ((iVar4 == 0) && ((this_00->VFX_Parameter).mbr_0x20 == 6)) {
              VFX_ParameterInfo::meth_0x4fe450(this_00,&local_3c,unaff_EDI,unaff_EBP);
              local_64 = local_3c * 0.1;
              local_60 = local_38 * 0.1;
              local_5c = local_34 * 0.1;
              if (((NAN(local_64) || NAN(local_3c)) == (local_64 == local_3c)) ||
                 (((NAN(local_60) || NAN(local_38)) == (local_60 == local_38) ||
                  ((NAN(local_5c) || NAN(local_34)) == (local_5c == local_34))))) {
                VFX_ParameterInfo::meth_0x4fe040(this_00,&local_64);
                bVar2 = true;
              }
            }
            iVar4 = *(int *)(pdVar7[3] + 0x20);
            if (iVar4 == 0) {
              if ((this_00->VFX_Parameter).mbr_0x1c < 0x10) {
                pdVar6 = &(this_00->VFX_Parameter).mbr_0x8;
              }
              else {
                pdVar6 = (dword *)(this_00->VFX_Parameter).mbr_0x8;
              }
              iVar4 = __stricmp((char *)pdVar6,"RibbonOrigin");
              if (iVar4 != 0) {
                if ((this_00->VFX_Parameter).mbr_0x1c < 0x10) {
                  pdVar6 = &(this_00->VFX_Parameter).mbr_0x8;
                }
                else {
                  pdVar6 = (dword *)(this_00->VFX_Parameter).mbr_0x8;
                }
                iVar4 = __stricmp((char *)pdVar6,"RibbonOrigin");
                if (iVar4 != 0) goto LAB_005018d1;
              }
              if ((this_00->VFX_Parameter).mbr_0x20 == 6) {
                VFX_ParameterInfo::meth_0x4fe450(this_00,&local_30,unaff_EDI,unaff_EBP);
                local_58 = local_30 * 0.1;
                local_54 = local_2c * 0.1;
                local_50 = local_28 * 0.1;
                if ((((NAN(local_58) || NAN(local_30)) == (local_58 == local_30)) ||
                    ((NAN(local_54) || NAN(local_2c)) == (local_54 == local_2c))) ||
                   ((NAN(local_50) || NAN(local_28)) == (local_50 == local_28))) {
                  pfVar10 = &local_58;
LAB_005018c8:
                  VFX_ParameterInfo::meth_0x4fe040(this_00,pfVar10);
LAB_005018cf:
                  bVar2 = true;
                }
              }
            }
            else if (iVar4 == 4) {
              if ((this_00->VFX_Parameter).mbr_0x1c < 0x10) {
                pdVar6 = &(this_00->VFX_Parameter).mbr_0x8;
              }
              else {
                pdVar6 = (dword *)(this_00->VFX_Parameter).mbr_0x8;
              }
              iVar4 = __stricmp((char *)pdVar6,"EndPointOffset");
              if ((iVar4 == 0) && ((this_00->VFX_Parameter).mbr_0x20 == 6)) {
                VFX_ParameterInfo::meth_0x4fe450(this_00,&local_24,unaff_EDI,unaff_EBP);
                local_70 = local_24 * 0.1;
                local_6c = local_20 * 0.1;
                local_68 = local_1c * 0.1;
                if (((NAN(local_70) || NAN(local_24)) == (local_70 == local_24)) ||
                   (((NAN(local_6c) || NAN(local_20)) == (local_6c == local_20) ||
                    ((NAN(local_68) || NAN(local_1c)) == (local_68 == local_1c))))) {
                  pfVar10 = &local_70;
                  goto LAB_005018c8;
                }
              }
            }
            else if (iVar4 == 7) {
              if ((this_00->VFX_Parameter).mbr_0x1c < 0x10) {
                pdVar6 = &(this_00->VFX_Parameter).mbr_0x8;
              }
              else {
                pdVar6 = (dword *)(this_00->VFX_Parameter).mbr_0x8;
              }
              iVar4 = __stricmp((char *)pdVar6,"EndPointOffset");
              if ((iVar4 == 0) && ((this_00->VFX_Parameter).mbr_0x20 == 6)) {
                VFX_ParameterInfo::meth_0x4fe450(this_00,&local_18,unaff_EDI,unaff_EBP);
                local_4c = local_18 * 0.1;
                local_48 = local_14 * 0.1;
                local_4 = local_10;
                local_8 = local_14;
                local_44 = local_10 * 0.1;
                local_c = local_18;
                uVar5 = FUN_00501150(&local_c,&local_4c);
                if ((char)uVar5 != '\0') {
                  pfVar10 = &local_4c;
                  goto LAB_005018c8;
                }
              }
              else {
                if ((this_00->VFX_Parameter).mbr_0x1c < 0x10) {
                  pdVar6 = &(this_00->VFX_Parameter).mbr_0x8;
                }
                else {
                  pdVar6 = (dword *)(this_00->VFX_Parameter).mbr_0x8;
                }
                iVar4 = __stricmp((char *)pdVar6,"MinWidth");
                if (iVar4 == 0) {
LAB_00501696:
                  if ((this_00->VFX_Parameter).mbr_0x20 == 2) {
                    fVar9 = (float10)VFX_ParameterInfo::meth_0x4fe280(this_00);
                    fVar1 = (float10)(float)((float10)0.1 * fVar9);
                    if ((NAN(fVar9) || NAN(fVar1)) == (fVar9 == fVar1)) {
                      VFX_ParameterInfo::meth_0x4fdff0
                                (this_00,SUB41((float)((float10)0.1 * fVar9),0),(char)unaff_EDI);
                      goto LAB_005018cf;
                    }
                    goto LAB_005018d1;
                  }
                }
                else {
                  if ((this_00->VFX_Parameter).mbr_0x1c < 0x10) {
                    pdVar6 = &(this_00->VFX_Parameter).mbr_0x8;
                  }
                  else {
                    pdVar6 = (dword *)(this_00->VFX_Parameter).mbr_0x8;
                  }
                  iVar4 = __stricmp((char *)pdVar6,"MaxWidth");
                  if (iVar4 == 0) goto LAB_00501696;
                }
                if ((this_00->VFX_Parameter).mbr_0x1c < 0x10) {
                  pdVar6 = &(this_00->VFX_Parameter).mbr_0x8;
                }
                else {
                  pdVar6 = (dword *)(this_00->VFX_Parameter).mbr_0x8;
                }
                iVar4 = __stricmp((char *)pdVar6,"MinSegmentsPerFoot");
                if (iVar4 != 0) {
                  if ((this_00->VFX_Parameter).mbr_0x1c < 0x10) {
                    pdVar6 = &(this_00->VFX_Parameter).mbr_0x8;
                  }
                  else {
                    pdVar6 = (dword *)(this_00->VFX_Parameter).mbr_0x8;
                  }
                  iVar4 = __stricmp((char *)pdVar6,"MaxSegmentsPerFoot");
                  if (iVar4 != 0) goto LAB_005018d1;
                }
                if ((this_00->VFX_Parameter).mbr_0x20 == 2) {
                  fVar9 = (float10)VFX_ParameterInfo::meth_0x4fe280(this_00);
                  fVar1 = (float10)(float)((float10)10.0 * fVar9);
                  if ((NAN(fVar9) || NAN(fVar1)) == (fVar9 == fVar1)) {
                    VFX_ParameterInfo::meth_0x4fdff0
                              (this_00,SUB41((float)((float10)10.0 * fVar9),0),(char)unaff_EDI);
                    goto LAB_005018cf;
                  }
                }
              }
            }
LAB_005018d1:
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_74);
          if (bVar2) {
            VFX_Effect::meth_0x4f9a90((VFX_Effect *)this_01);
            bVar3 = true;
          }
        }
        pdVar7 = pdVar7 + 9;
        this_01 = (cls_0x4f9d10 *)&this_01[1].field_0x8;
      } while (this_01 != (cls_0x4f9d10 *)*(undefined **)&(local_40->VFX_ParameterHolder).field_0x28
              );
      this = local_40;
      if (bVar3) {
        return;
      }
    }
    this->mbr_0x38 = this->mbr_0x34;
  }
  return;
}



VFX_VEG * __thiscall VFX_VEG::~VFX_VEG(VFX_VEG *this)

{
  void *_Memory;
  VFX_VEG *pVVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635438;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->VFX_ParameterHolder).vftptr_0x0 =
       (VFX_ParameterHolder__vftable_67390c *)&VFX_VEG__vftable_673aac_00673aac;
  _Memory = (void *)(this->VFX_ParameterHolder).mbr_0x30;
  local_4 = 0;
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  cls_0x48eb20::meth_0x48de90((cls_0x48eb20 *)&(this->VFX_ParameterHolder).field_0x20);
  local_4 = 0xffffffff;
  pVVar1 = (VFX_VEG *)VFX_ParameterHolder::~VFX_ParameterHolder(&this->VFX_ParameterHolder);
  ExceptionList = pvStack_c;
  return pVVar1;
}



void __thiscall VFX_VEG::meth_0x501ad0(VFX_VEG *this)

{
  cls_0x48eb20::meth_0x48de90((cls_0x48eb20 *)&(this->VFX_ParameterHolder).field_0x20);
  return;
}



int * __thiscall VFX_VEG::virt_meth_0x501ae0(VFX_VEG *this,byte param_1)

{
  ~VFX_VEG(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



VFX_VEG * __thiscall VFX_VEG::VFX_VEG(VFX_VEG *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00635478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_ParameterHolder::VFX_ParameterHolder(&this->VFX_ParameterHolder);
  (this->VFX_ParameterHolder).vftptr_0x0 =
       (VFX_ParameterHolder__vftable_67390c *)&VFX_VEG__vftable_673aac_00673aac;
  *(undefined4 *)&(this->VFX_ParameterHolder).field_0x24 = 0;
  *(undefined4 *)&(this->VFX_ParameterHolder).field_0x28 = 0;
  *(undefined4 *)&(this->VFX_ParameterHolder).field_0x2c = 0;
  (this->VFX_ParameterHolder).mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  ExceptionList = local_c;
  return this;
}



void __thiscall VFX_VEG::virt_meth_0x501fa0(VFX_VEG *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint unaff_retaddr;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40 [3];
  undefined local_34 [40];
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635498;
  local_c = ExceptionList;
  local_34._36_4_ = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  meth_0x501ad0(this);
  iVar2 = 0;
  local_4c = 0;
  FUN_004b80e0(&local_48,4,1,param_1,param_2);
  if (local_48 == 0x20474556) {
    FUN_004b80e0(&local_44,4,1,param_1,param_2);
    if (local_44 == 0x302e3156) {
      this->mbr_0x38 = 0x3f800000;
    }
    else {
      if (local_44 != 0x312e3156) {
        this->mbr_0x38 = 0;
        this->mbr_0x34 = 0;
        goto LAB_005020e8;
      }
      this->mbr_0x38 = 0x3f8ccccd;
    }
    this->mbr_0x34 = 0x3f8ccccd;
    FUN_004b80e0(&local_4c,4,1,param_1,param_2);
    FUN_004b80e0(local_40,0xc,1,param_1,param_2);
    if (0 < local_4c) {
      do {
        VFX_Effect::VFX_Effect((VFX_Effect *)local_34);
        local_4 = 0;
        cVar1 = VFX_Effect::virt_meth_0x4f9960((VFX_Effect *)local_34,param_1,param_2);
        if (cVar1 == '\0') {
          local_4 = 0xffffffff;
          VFX_Effect::~VFX_Effect((VFX_Effect *)local_34);
          goto LAB_005020e8;
        }
        cls_0x48eb20::meth_0x501f10
                  ((cls_0x48eb20 *)&(this->VFX_ParameterHolder).field_0x20,local_34);
        local_4 = 0xffffffff;
        VFX_Effect::~VFX_Effect((VFX_Effect *)local_34);
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_4c);
    }
    VFX_ParameterHolder::virt_meth_0x4faf20(&this->VFX_ParameterHolder,param_1,param_2);
    meth_0x501430(this);
  }
LAB_005020e8:
  ExceptionList = local_c;
  FUN_00616e15(local_34._36_4_ ^ unaff_retaddr);
  return;
}


#include "../include/VFX_VEG.h"
