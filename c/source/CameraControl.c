#include "../include/CameraControl.h"

void __thiscall CameraControl::meth_0x585e20(CameraControl *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x94;
  uVar2 = *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x98;
  *param_1 = *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x90;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}



void __thiscall CameraControl::meth_0x585e60(CameraControl *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa4;
  *(byte *)&this->mbr_0xc0 = *(byte *)&this->mbr_0xc0 & 0xfe;
  Gfx_CamCtrl::meth_0x424670
            (&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl,param_1 * 0.01745329,
             (float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa0,fVar1);
  return;
}



void __thiscall CameraControl::meth_0x585fd0(CameraControl *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa4;
  *(byte *)&this->mbr_0xc0 = *(byte *)&this->mbr_0xc0 & 0xfd;
  Gfx_CamCtrl::meth_0x424670
            (&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl,
             *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x9c,param_1 * 0.01745329,
             fVar1);
  return;
}



void __thiscall CameraControl::meth_0x586110(CameraControl *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa0;
  *(byte *)&this->mbr_0xc0 = *(byte *)&this->mbr_0xc0 & 0xfb;
  Gfx_CamCtrl::meth_0x424670
            (&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl,
             *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x9c,fVar1,param_1);
  return;
}



void __thiscall CameraControl::meth_0x586330(CameraControl *this)

{
  int *piVar1;
  float *pfVar2;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  float *local_4;
  
  if (this->mbr_0x114 != 0) {
    local_18 = 0.0;
    local_14 = 0.0;
    local_10 = 0;
    local_c = 0.0;
    local_8 = 0;
    local_4 = (float *)0x0;
    if (DAT_0070bd98 == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    pfVar2 = &local_18;
    piVar1 = (int *)(**(code **)(*piVar1 + 0x60))();
    (**(code **)(*piVar1 + 0x24))(&local_18,&local_c);
    if (*local_4 < (float)pfVar2 == (NAN(*local_4) || NAN((float)pfVar2))) {
      if (local_14 < *local_4) {
        *local_4 = local_14;
      }
    }
    else {
      *local_4 = (float)pfVar2;
    }
    if (local_18 < local_4[2]) {
      local_4[2] = local_18;
      local_4[1] = 0.0;
      return;
    }
    if (local_4[2] < local_c != (NAN(local_4[2]) || NAN(local_c))) {
      local_4[2] = local_c;
    }
    local_4[1] = 0.0;
  }
  return;
}



void __thiscall
CameraControl::MoveTarget
          (CameraControl *this,undefined param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  float unaff_EDI;
  float local_24;
  float fStack_20;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  Gfx_CamCtrl::meth_0x4c62f0(&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl);
  local_24 = *(float *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x90;
  uVar1 = *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x94;
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0;
  local_c = 0.0;
  local_8 = 0;
  local_4 = 0;
  if (DAT_0070bd98 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x24))(&local_18,&local_c);
    bVar2 = false;
    if ((unaff_EDI < fStack_20 != (NAN(unaff_EDI) || NAN(fStack_20))) ||
       (fStack_20 = local_14, local_14 < unaff_EDI)) {
      bVar2 = true;
      unaff_EDI = fStack_20;
    }
    if (local_24 <= local_18) {
      if (local_24 < local_c == (NAN(local_24) || NAN(local_c))) {
        if (!bVar2) {
          return;
        }
      }
      else {
        local_24 = local_c;
      }
    }
    else {
      local_24 = local_18;
    }
    *(float *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x90 = unaff_EDI;
    *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x94 = uVar1;
    *(float *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x98 = local_24;
    (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0x4 = 1;
    return;
  }
  FUN_00497120((byte *)0x69bef8);
  return;
}



CameraControl * __thiscall CameraControl::~CameraControl(CameraControl *this)

{
  CameraControl *pCVar1;
  
  this->vftptr_0x0 = &CameraControl__vftable_69bf28_0069bf28;
  (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.vftptr_0x0 =
       (Gfx_CamCtrl__vftable_670fa8 *)&Gfx_CamCtrl_Orbit__vftable_670fb8_00670fb8;
  pCVar1 = (CameraControl *)FUN_00529fb0((Gfx_CamCtrl__vftable_670fa8 **)&this->Gfx_CamCtrl_Orbit);
  return pCVar1;
}



void __thiscall CameraControl::meth_0x586590(CameraControl *this,char param_1)

{
  float fVar1;
  dword dVar2;
  int iVar3;
  
  if (this->mbr_0x114 != param_1) {
    this->mbr_0x114 = param_1;
    if (param_1 == '\0') {
      iVar3 = (**(code **)(*DAT_00707ce4 + 0xa8))();
      this->mbr_0x118 = *(dword *)(iVar3 + 0x114);
      iVar3 = (**(code **)(*DAT_00707ce4 + 0xa8))();
      this->mbr_0x11c = *(dword *)(iVar3 + 0x118);
      (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa8 = 0xbfc7f1e7;
      (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xac = 0x3fc7f1e7;
      (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xb0 = 0;
      if ((float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xb0 < 1000.0) {
        (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xb4 = 0x447a0000;
        return;
      }
    }
    else {
      dVar2 = this->mbr_0x118;
      iVar3 = (**(code **)(*DAT_00707ce4 + 0xa8))();
      *(dword *)(iVar3 + 0x114) = dVar2;
      *(undefined *)(iVar3 + 0x4a) = 1;
      dVar2 = this->mbr_0x11c;
      iVar3 = (**(code **)(*DAT_00707ce4 + 0xa8))();
      *(dword *)(iVar3 + 0x118) = dVar2;
      *(undefined *)(iVar3 + 0x4a) = 1;
      if (-1.56207 <= (float)this->mbr_0xdc) {
        (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa8 = this->mbr_0xdc;
      }
      fVar1 = (float)this->mbr_0xe0;
      if (fVar1 < 1.56207 != (fVar1 == 1.56207)) {
        (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xac = (dword)fVar1;
      }
      if (0.0 <= (float)this->mbr_0xf0) {
        (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xb0 = this->mbr_0xf0;
      }
      if ((float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xb0 < (float)this->mbr_0xf4) {
        (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xb4 = this->mbr_0xf4;
        return;
      }
    }
  }
  return;
}



void __thiscall
CameraControl::meth_0x586710(CameraControl *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (this->mbr_0x114 == 0) {
    iVar1 = (**(code **)(*DAT_00707ce4 + 0xa8))();
    *(undefined4 *)(iVar1 + 0x114) = param_1;
    *(undefined *)(iVar1 + 0x4a) = 1;
    iVar1 = (**(code **)(*DAT_00707ce4 + 0xa8))();
    *(undefined4 *)(iVar1 + 0x118) = param_2;
    *(undefined *)(iVar1 + 0x4a) = 1;
  }
  return;
}



void __thiscall
CameraControl::meth_0x586760
          (CameraControl *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(byte *)&this->mbr_0xc0 = *(byte *)&this->mbr_0xc0 & 0xf7;
  meth_0x586330(this);
  *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x90 = param_1;
  *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x94 = param_2;
  (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0x4 = 1;
  *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x98 = param_3;
  return;
}



void __thiscall CameraControl::meth_0x5867c0(CameraControl *this,float param_1)

{
  int iVar1;
  
  if (this->mbr_0x114 != 0) {
    if (param_1 < (float)this->mbr_0x104 == (NAN(param_1) || NAN((float)this->mbr_0x104))) {
      if ((float)this->mbr_0x108 < param_1) {
        param_1 = (float)this->mbr_0x108;
      }
    }
    else {
      param_1 = (float)this->mbr_0x104;
    }
  }
  iVar1 = (**(code **)(*DAT_00707ce4 + 0xa8))();
  *(undefined *)(iVar1 + 0x4a) = 1;
  *(float *)(iVar1 + 0x110) = param_1 * 0.01745329;
  (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0x4 = 1;
  return;
}



void __thiscall CameraControl::meth_0x586830(CameraControl *this)

{
  float fVar1;
  float local_10;
  
  if (this->mbr_0x114 != 0) {
    this->mbr_0xc0 = 0;
    fVar1 = (float)this->mbr_0xdc * 0.01745329;
    this->mbr_0xc2 = 0;
    if (-1.56207 <= fVar1) {
      (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa8 = (dword)fVar1;
    }
    fVar1 = (float)this->mbr_0xe0 * 0.01745329;
    if (fVar1 < 1.56207 != (fVar1 == 1.56207)) {
      (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xac = (dword)fVar1;
    }
    if (0.0 <= (float)this->mbr_0xf0) {
      (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xb0 = this->mbr_0xf0;
    }
    if ((float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xb0 < (float)this->mbr_0xf4) {
      (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xb4 = this->mbr_0xf4;
    }
    if ((NAN((float)this->mbr_0xf0) || NAN((float)this->mbr_0xf4)) ==
        ((float)this->mbr_0xf0 == (float)this->mbr_0xf4)) {
      local_10 = ((float)this->mbr_0xf4 - (float)this->mbr_0xf0) * 0.5 + (float)this->mbr_0xf0;
    }
    else {
      local_10 = (float)this->mbr_0xf0;
    }
    Gfx_CamCtrl::meth_0x424670
              (&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl,0,(float)this->mbr_0xdc * 0.01745329,local_10)
    ;
    *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x90 = 0;
    *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x94 = 0;
    *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x98 = 0;
    (this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0x4 = 1;
    if ((NAN((float)this->mbr_0x104) || NAN((float)this->mbr_0x108)) ==
        ((float)this->mbr_0x104 == (float)this->mbr_0x108)) {
      meth_0x5867c0(this,((float)this->mbr_0x108 - (float)this->mbr_0x104) * 0.5 +
                         (float)this->mbr_0x104);
      return;
    }
    meth_0x5867c0(this,(float)this->mbr_0x104);
  }
  return;
}



void __thiscall CameraControl::meth_0x5869c0(CameraControl *this)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  dword dVar4;
  int iVar5;
  undefined4 unaff_EDI;
  uint uVar6;
  float local_4;
  
  dVar4 = FUN_0056af50();
  uVar6 = dVar4 - this->mbr_0xc4;
  if (uVar6 < 0x21) {
    return;
  }
  uVar3 = this->mbr_0xc0;
  this->mbr_0xc4 = dVar4;
  if ((uVar3 & 1) != 0) {
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    fVar2 = fVar1 * (float)this->mbr_0xc8 * 0.001 * *(float *)&this->field_0xd0 +
            (float)this->mbr_0xd4;
    this->mbr_0xd4 = (dword)fVar2;
    fVar1 = (float)this->mbr_0xcc;
    if (*(float *)&this->field_0xd0 < 0.0 == NAN(*(float *)&this->field_0xd0)) {
      if (fVar2 >= fVar1) {
        this->mbr_0xc0 = uVar3 & 0xfffe;
        this->mbr_0xd4 = this->mbr_0xcc;
      }
    }
    else if (fVar2 < fVar1 != (fVar2 == fVar1)) {
      this->mbr_0xc0 = uVar3 & 0xfffe;
      this->mbr_0xd4 = this->mbr_0xcc;
    }
    Gfx_CamCtrl::meth_0x424670
              (&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl,(float)this->mbr_0xd4 * 0.01745329,
               (float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa0,
               (float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa4);
  }
  if ((this->mbr_0xc0 & 2) != 0) {
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    fVar2 = (float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa0 * 57.29578 +
            fVar1 * (float)this->mbr_0xd8 * 0.001 * *(float *)&this->field_0xe8;
    fVar1 = *(float *)&this->field_0xe4;
    if (*(float *)&this->field_0xe8 < 0.0 == NAN(*(float *)&this->field_0xe8)) {
      if (fVar2 >= fVar1) goto LAB_00586b17;
    }
    else if (fVar2 < fVar1 != (fVar2 == fVar1)) {
LAB_00586b17:
      fVar2 = *(float *)&this->field_0xe4;
      this->mbr_0xc0 = this->mbr_0xc0 & 0xfffd;
    }
    Gfx_CamCtrl::meth_0x424670
              (&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl,
               *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x9c,fVar2 * 0.01745329,
               (float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa4);
  }
  if ((this->mbr_0xc0 & 4) == 0) goto LAB_00586bff;
  fVar1 = (float)uVar6;
  if ((int)uVar6 < 0) {
    fVar1 = fVar1 + 4.294967e+09;
  }
  local_4 = fVar1 * (float)this->mbr_0xec * 0.001 * *(float *)&this->field_0xfc +
            (float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa4;
  fVar1 = (float)this->mbr_0xf8;
  if (*(float *)&this->field_0xfc < 0.0 == NAN(*(float *)&this->field_0xfc)) {
    if (local_4 >= fVar1) {
      local_4 = (float)this->mbr_0xf8;
      goto LAB_00586bcf;
    }
  }
  else if (local_4 < fVar1 != (local_4 == fVar1)) {
    local_4 = (float)this->mbr_0xf8;
LAB_00586bcf:
    this->mbr_0xc0 = this->mbr_0xc0 & 0xfffb;
  }
  Gfx_CamCtrl::meth_0x424670
            (&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl,
             *(undefined4 *)&(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.field_0x9c,
             (float)(this->Gfx_CamCtrl_Orbit).Gfx_CamCtrl.mbr_0xa0,local_4);
LAB_00586bff:
  if ((this->mbr_0xc0 & 8) != 0) {
    this->mbr_0xc0 = this->mbr_0xc0 & 0xfff7;
  }
  if ((*(byte *)&this->mbr_0xc2 & 1) != 0) {
    iVar5 = (**(code **)(*DAT_00707ce4 + 0xa8))();
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    MoveTarget(this,SUB41(-(fVar1 * (float)this->mbr_0x110 * 0.001 *
                                    ((*(float *)(iVar5 + 0x110) * 57.29578) / (float)this->mbr_0x108
                                    )),0),0,0,unaff_EDI);
  }
  if ((*(byte *)&this->mbr_0xc2 & 2) != 0) {
    iVar5 = (**(code **)(*DAT_00707ce4 + 0xa8))();
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    MoveTarget(this,SUB41(fVar1 * (float)this->mbr_0x110 * 0.001 *
                                  ((*(float *)(iVar5 + 0x110) * 57.29578) / (float)this->mbr_0x108),
                          0),0,0,unaff_EDI);
  }
  if ((*(byte *)&this->mbr_0xc2 & 4) != 0) {
    iVar5 = (**(code **)(*DAT_00707ce4 + 0xa8))();
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    MoveTarget(this,0,0,fVar1 * (float)this->mbr_0x110 * 0.001 *
                                ((*(float *)(iVar5 + 0x110) * 57.29578) / (float)this->mbr_0x108),
               unaff_EDI);
  }
  if ((*(byte *)&this->mbr_0xc2 & 8) != 0) {
    iVar5 = (**(code **)(*DAT_00707ce4 + 0xa8))();
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    MoveTarget(this,0,0,-(fVar1 * (float)this->mbr_0x110 * 0.001 *
                                  ((*(float *)(iVar5 + 0x110) * 57.29578) / (float)this->mbr_0x108))
               ,unaff_EDI);
  }
  if ((*(byte *)&this->mbr_0xc2 & 0x10) != 0) {
    iVar5 = (**(code **)(*DAT_00707ce4 + 0xa8))();
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    local_4 = *(float *)(iVar5 + 0x110) * 57.29578 - fVar1 * (float)this->mbr_0x100 * 0.001;
    if (local_4 < (float)this->mbr_0x104 != (NAN(local_4) || NAN((float)this->mbr_0x104))) {
      local_4 = (float)this->mbr_0x104;
    }
    meth_0x5867c0(this,local_4);
  }
  if ((*(byte *)&this->mbr_0xc2 & 0x20) != 0) {
    iVar5 = (**(code **)(*DAT_00707ce4 + 0xa8))();
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    local_4 = *(float *)(iVar5 + 0x110) * 57.29578 + fVar1 * (float)this->mbr_0x100 * 0.001;
    if ((float)this->mbr_0x108 < local_4) {
      local_4 = (float)this->mbr_0x108;
    }
    meth_0x5867c0(this,local_4);
  }
  if ((*(byte *)&this->mbr_0xc2 & 0x40) != 0) {
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    FUN_004c62b0(&this->Gfx_CamCtrl_Orbit,fVar1 * (float)this->mbr_0xc8 * 0.001 * 0.01745329,0.0,0.0
                );
  }
  if (*(char *)&this->mbr_0xc2 < '\0') {
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    FUN_004c62b0(&this->Gfx_CamCtrl_Orbit,-(fVar1 * (float)this->mbr_0xc8 * 0.001) * 0.01745329,0.0,
                 0.0);
  }
  if ((*(byte *)((int)&this->mbr_0xc2 + 1) & 1) != 0) {
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    FUN_004c62b0(&this->Gfx_CamCtrl_Orbit,0.0,fVar1 * (float)this->mbr_0xd8 * 0.001 * 0.01745329,0.0
                );
  }
  if ((*(byte *)((int)&this->mbr_0xc2 + 1) & 2) != 0) {
    fVar1 = (float)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    FUN_004c62b0(&this->Gfx_CamCtrl_Orbit,0.0,-(fVar1 * (float)this->mbr_0xd8 * 0.001) * 0.01745329,
                 0.0);
  }
  return;
}



CameraControl * __thiscall CameraControl::CameraControl(CameraControl *this,dword param_1)

{
  int iVar1;
  dword dVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639bab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &CameraControl__vftable_69bf28_0069bf28;
  this->mbr_0x4 = param_1;
  Gfx_CamCtrl_Orbit::Gfx_CamCtrl_Orbit(&this->Gfx_CamCtrl_Orbit);
  this->mbr_0xc0 = 0;
  this->mbr_0xc2 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0x114 = 0;
  local_4 = 0;
  iVar1 = (**(code **)(*DAT_00707ce4 + 0xa8))();
  this->mbr_0x118 = *(dword *)(iVar1 + 0x114);
  iVar1 = (**(code **)(*DAT_00707ce4 + 0xa8))();
  this->mbr_0x11c = *(dword *)(iVar1 + 0x118);
  (**(code **)(**(int **)(this->mbr_0x4 + 0x74) + 0xc))(&this->Gfx_CamCtrl_Orbit);
  meth_0x586830(this);
  dVar2 = FUN_0056af50();
  this->mbr_0xc4 = dVar2;
  ExceptionList = this;
  return this;
}


#include "../include/CameraControl.h"
