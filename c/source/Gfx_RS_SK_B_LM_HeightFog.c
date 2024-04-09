#include "../include/Gfx_RS_SK_B_LM_HeightFog.h"

Gfx_RS_SK_B_LM_HeightFog * __thiscall
Gfx_RS_SK_B_LM_HeightFog::~Gfx_RS_SK_B_LM_HeightFog(Gfx_RS_SK_B_LM_HeightFog *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  Gfx_RS_SK_B_LM_HeightFog *pGVar2;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_SK_B_LM_HeightFog__vftable_67c828_0067c828;
  local_4 = 0;
  pGVar2 = DAT_0070bd28;
  if (DAT_0070bd28 != (Gfx_RS_SK_B_LM_HeightFog *)0x0) {
    pGVar2 = (Gfx_RS_SK_B_LM_HeightFog *)((int)&DAT_0070bd28[-1].mbr_0x18 + 3);
    DAT_0070bd28 = pGVar2;
    if (pGVar2 == (Gfx_RS_SK_B_LM_HeightFog *)0x0) {
      if (DAT_0070bd2c != (int *)0x0) {
        (**(code **)(*DAT_0070bd2c + 8))(DAT_0070bd2c);
        DAT_0070bd2c = (int *)0x0;
      }
      pGVar2 = DAT_0070bd30;
      if (DAT_0070bd30 != (Gfx_RS_SK_B_LM_HeightFog *)0x0) {
        uVar1 = (*((DAT_0070bd30->Gfx_RenderStyle).vftptr_0x0)->virt_meth_0x6162e5_8)(DAT_0070bd30);
        pGVar2 = (Gfx_RS_SK_B_LM_HeightFog *)CONCAT31(extraout_var,uVar1);
        DAT_0070bd30 = (Gfx_RS_SK_B_LM_HeightFog *)0x0;
      }
    }
  }
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar2;
}



undefined4 * __thiscall
Gfx_RS_SK_B_LM_HeightFog::virt_meth_0x537960(Gfx_RS_SK_B_LM_HeightFog *this,byte param_1)

{
  ~Gfx_RS_SK_B_LM_HeightFog(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Gfx_RenderStyle;
}



Gfx_RS_SK_B_LM_HeightFog * __thiscall
Gfx_RS_SK_B_LM_HeightFog::Gfx_RS_SK_B_LM_HeightFog
          (Gfx_RS_SK_B_LM_HeightFog *this,dword param_1,dword param_2,dword param_3,dword param_4,
          dword param_5)

{
  this->mbr_0x8 = param_1;
  this->mbr_0xc = param_2;
  this->mbr_0x10 = param_3;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_SK_B_LM_HeightFog__vftable_67c828_0067c828;
  this->mbr_0x4 = 0;
  this->mbr_0x14 = param_4;
  this->mbr_0x18 = param_5;
  return this;
}



int __thiscall
Gfx_RS_SK_B_LM_HeightFog::SetMaterial
          (Gfx_RS_SK_B_LM_HeightFog *this,void *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  cls_0x496280 *this_00;
  int iVar3;
  undefined1 unaff_SI;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  float10 fVar8;
  float fVar9;
  undefined **ppuStack_2bc;
  float fStack_2b8;
  int *piStack_2b4;
  undefined4 uStack_2b0;
  int **ppiStack_2ac;
  undefined4 uStack_2a8;
  undefined *puStack_2a4;
  int *piStack_2a0;
  char *pcStack_29c;
  int *piStack_298;
  uint *puVar10;
  undefined auStack_284 [2];
  char cStack_282;
  undefined uStack_281;
  int iStack_280;
  int *piStack_27c;
  char *pcStack_278;
  int iStack_274;
  int *piStack_270;
  undefined4 uStack_26c;
  int *piStack_268;
  char *pcStack_264;
  undefined4 uStack_260;
  int *piStack_25c;
  char *pcStack_258;
  float fStack_254;
  int *piStack_250;
  undefined *puStack_24c;
  dword dStack_248;
  int *piStack_244;
  undefined *puStack_240;
  float fStack_23c;
  int *piStack_238;
  char *pcStack_234;
  uint uStack_230;
  int *piStack_22c;
  undefined *puStack_228;
  uint uStack_224;
  int *piStack_220;
  char *pcStack_21c;
  float fStack_218;
  int *piStack_214;
  char *pcStack_210;
  char *pcVar11;
  undefined uVar12;
  char local_1d1;
  char local_1d0 [4];
  undefined4 uStack_1cc;
  uint local_1c8;
  undefined auStack_1c4 [48];
  undefined4 auStack_194 [6];
  int aiStack_17c [16];
  int aiStack_13c [19];
  undefined auStack_f0 [84];
  void *pvStack_9c;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006374c6;
  pvStack_c = ExceptionList;
  local_1d0[0] = '\0';
  local_1d1 = '\0';
  ExceptionList = &pvStack_c;
  cls_0x4b6030::meth_0x4b6030((cls_0x4b6030 *)param_1,local_1d0,&local_1d1,&local_1c8);
  if ((local_1d0[0] == '\0') && (local_1d1 == '\0')) {
    this->mbr_0x4 = DAT_0070bd2c;
  }
  else {
    this->mbr_0x4 = DAT_0070bd30;
  }
  piVar5 = (int *)this->mbr_0x4;
  if (piVar5 == (int *)0x0) {
    FUN_00497120((byte *)"Gfx_RS_SK_B_LM_HeightFog::SetMaterial() failed - not created yet.");
    ExceptionList = pvStack_c;
    return -0x7789f794;
  }
  if (param_2 == 0) {
    FUN_00497120((byte *)"Gfx_RS_SK_B_LM_HeightFog: No HeightFog object specified!");
    ExceptionList = pvStack_c;
    return -0x7789f794;
  }
  if (*(int *)((int)param_1 + 0x134) == 0) {
    (**(code **)(*piVar5 + 0x54))();
    uVar12 = SUB41(piVar5,0);
  }
  else {
    iVar2 = cls_0x55dc80::meth_0x51f160(DAT_0070b200,(char)*(int *)((int)param_1 + 0x134),unaff_SI);
    if (iVar2 == 0) {
      piVar5 = (int *)this->mbr_0x4;
      (**(code **)(*piVar5 + 0x54))();
      uVar12 = SUB41(piVar5,0);
      FUN_004ab1c0((void *)0x0,(cls_0x50db20 *)(auStack_1c4 + 0xc));
      uStack_10 = 0;
      FUN_00497120((byte *)"Gfx_RS_SK_B_LM_HeightFog: Cannot find Lightmap %s");
      uStack_10 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_1c4 + 0xc));
    }
    else if (*(int *)(iVar2 + 0x28) < 1) {
      piVar5 = (int *)this->mbr_0x4;
      (**(code **)(*piVar5 + 0x54))();
      uVar12 = SUB41(piVar5,0);
    }
    else {
      piVar5 = (int *)this->mbr_0x4;
      (**(code **)(*piVar5 + 0x54))();
      uVar12 = SUB41(piVar5,0);
    }
  }
  if (*(int *)((int)param_1 + 0x130) == 0) {
    piVar5 = (int *)this->mbr_0x4;
    (**(code **)(*piVar5 + 0x54))();
    uVar12 = SUB41(piVar5,0);
    FUN_00497120((byte *)"Gfx_RS_SK_B_LM_HeightFog: NULL Base Texture handle\n");
  }
  else {
    iVar2 = cls_0x55dc80::meth_0x51f160(DAT_0070b200,(char)*(int *)((int)param_1 + 0x130),uVar12);
    if (iVar2 == 0) {
      piVar5 = (int *)this->mbr_0x4;
      (**(code **)(*piVar5 + 0x54))();
      uVar12 = SUB41(piVar5,0);
      FUN_004ab1c0((void *)0x0,(cls_0x50db20 *)auStack_1c4);
      uStack_1c = 1;
      FUN_00497120((byte *)"Gfx_RS_SK_B_LM_HeightFog: Cannot find Base Texture %s");
      uStack_1c = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_1c4);
    }
    else if (*(int *)(iVar2 + 0x28) < 1) {
      piVar5 = (int *)this->mbr_0x4;
      (**(code **)(*piVar5 + 0x54))();
      uVar12 = SUB41(piVar5,0);
    }
    else {
      piVar5 = (int *)this->mbr_0x4;
      (**(code **)(*piVar5 + 0x54))();
      uVar12 = SUB41(piVar5,0);
    }
  }
  if (*(int *)(param_2 + 0x44) == 0) {
    (**(code **)(*(int *)this->mbr_0x4 + 0x54))();
    pcVar11 = "Gfx_RS_SK_B_LM_HeightFog: Height Fog map not created!";
  }
  else {
    iVar2 = cls_0x55dc80::meth_0x51f160(DAT_0070b200,(char)*(int *)(param_2 + 0x44),uVar12);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x28) < 1) {
        (**(code **)(*(int *)this->mbr_0x4 + 0x54))();
      }
      else {
        (**(code **)(*(int *)this->mbr_0x4 + 0x54))();
      }
      goto LAB_00541a4f;
    }
    (**(code **)(*(int *)this->mbr_0x4 + 0x54))();
    pcVar11 = "Gfx_RS_SK_B_LM_HeightFog: Height Fog map not found!";
  }
  pcStack_210 = (char *)0x541a4c;
  FUN_00497120((byte *)pcVar11);
LAB_00541a4f:
  piStack_214 = (int *)this->mbr_0x4;
  pcStack_210 = "alphatest";
  fStack_218 = 7.723645e-39;
  (**(code **)(*piStack_214 + 0x34))();
  fStack_218 = 0.0;
  if (*(char *)((int)param_1 + 0xbc) != '\0') {
    fStack_218 = 7.723681e-39;
    cVar1 = (**(code **)(*DAT_00707ce4 + 0xf4))();
    fStack_218 = (float)(uint)(cVar1 != '\0');
  }
  piStack_220 = (int *)this->mbr_0x4;
  pcStack_21c = "bLighting";
  uStack_224 = 0x541a92;
  (**(code **)(*piStack_220 + 0x34))();
  uStack_224 = 0;
  if (*(char *)((int)param_1 + 0xbd) != '\0') {
    uStack_224 = 0x541aac;
    iVar2 = (**(code **)(*DAT_00707ce4 + 0x94))();
    uStack_224 = (uint)(*(char *)(iVar2 + 0x168) != '\0');
  }
  piStack_22c = (int *)this->mbr_0x4;
  puStack_228 = &DAT_0067ea0c;
  uStack_230 = 0x541ac8;
  (**(code **)(*piStack_22c + 0x34))();
  piStack_238 = (int *)this->mbr_0x4;
  uStack_230 = (uint)(*(char *)((int)param_1 + 0xb8) != '\0');
  pcStack_234 = "DiffuseSource";
  fStack_23c = 7.723825e-39;
  (**(code **)(*piStack_238 + 0x34))();
  fStack_23c = (float)this->mbr_0x8;
  piStack_244 = (int *)this->mbr_0x4;
  puStack_240 = &DAT_0067ea44;
  dStack_248 = 0x541af4;
  (**(code **)(*piStack_244 + 0x34))();
  dStack_248 = this->mbr_0xc;
  piStack_250 = (int *)this->mbr_0x4;
  puStack_24c = &DAT_0067ea3c;
  fStack_254 = 7.723876e-39;
  (**(code **)(*piStack_250 + 0x34))();
  fStack_254 = (float)this->mbr_0x10;
  piStack_25c = (int *)this->mbr_0x4;
  pcStack_258 = "LMcop";
  uStack_260 = 0x541b18;
  (**(code **)(*piStack_25c + 0x34))();
  uStack_260 = this->mbr_0x14;
  piStack_268 = (int *)this->mbr_0x4;
  pcStack_264 = "LMaop";
  uStack_26c = (undefined4 *)0x541b2a;
  (**(code **)(*piStack_268 + 0x34))();
  uStack_26c = auStack_194;
  puVar4 = (undefined4 *)((int)param_1 + 0x2c);
  puVar6 = auStack_194;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  piStack_270 = DAT_00708300;
  iStack_274 = 0x541b51;
  (**(code **)(*DAT_00708300 + 0xa8))();
  if (((char)piStack_25c == '\0') && (uStack_260._3_1_ == '\0')) {
    piStack_27c = (int *)this->mbr_0x4;
    iStack_274 = 2;
    pcStack_278 = "TFcop";
    iStack_280 = 0x541b71;
    (**(code **)(*piStack_27c + 0x34))();
    piVar5 = (int *)this->mbr_0x4;
    iStack_280 = 2;
    _auStack_284 = "TFaop";
    (**(code **)(*piVar5 + 0x34))();
  }
  else {
    piStack_27c = (int *)this->mbr_0x4;
    iStack_274 = (-(uint)((char)piStack_25c != '\0') & 3) + 2;
    pcStack_278 = "TFcop";
    iStack_280 = 0x541b9c;
    (**(code **)(*piStack_27c + 0x34))();
    piVar5 = (int *)this->mbr_0x4;
    iStack_280 = (uint)(uStack_26c._3_1_ != '\0') * 2 + 2;
    _auStack_284 = "TFaop";
    (**(code **)(*piVar5 + 0x34))();
    if ((char)iStack_274 == '\0') {
      uStack_26c = (undefined4 *)((uint)uStack_26c & 0xff808080 | 0x808080);
    }
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x3c,(int)uStack_26c);
  }
  if (*(char *)((int)param_1 + 0xb9) == '\0') {
    iVar2 = 1;
  }
  else {
    iVar2 = 3;
  }
  iVar2 = cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x16,iVar2);
  fVar8 = (float10)(**(code **)(*DAT_00707ce4 + 0x84))();
  pcStack_258 = (char *)(float)fVar8;
  piStack_298 = (int *)0x541c2c;
  FUN_00505df0(pvStack_9c,pcStack_258,&fStack_254,(float *)&piStack_25c);
  uStack_260 = *(undefined4 *)((int)pvStack_9c + 0x3c);
  piStack_268 = *(int **)((int)pvStack_9c + 0x34);
  pcStack_264 = *(char **)((int)pvStack_9c + 0x38);
  if (DAT_0070bd40 == '\0') {
    puVar4 = &DAT_00708338;
    puVar6 = (undefined4 *)&stack0xfffffe0c;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    this_00 = (cls_0x496280 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
    cls_0x496280::meth_0x496280(this_00,(char)auStack_f0,piVar5);
    uStack_1cc = 0;
    auStack_1c4._4_4_ = -(((float)pcStack_264 + fStack_254) * (1.0 / (float)piStack_25c));
    piStack_298 = (int *)0x541eb7;
    thunk_FUN_00471943();
    piStack_2a0 = (int *)this->mbr_0x4;
    piVar5 = aiStack_17c;
    piVar7 = aiStack_13c;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    piStack_298 = aiStack_13c;
    pcStack_29c = "fogmatrix";
    puStack_2a4 = (undefined *)0x541ee2;
    (**(code **)(*piStack_2a0 + 0x4c))();
  }
  else {
    puVar10 = &uStack_224;
    uStack_224 = 0;
    piStack_220 = (int *)0x3f000000;
    pcStack_21c = (char *)0x3f800000;
    fStack_218 = 2.0;
    piStack_298 = DAT_00708300;
    pcStack_29c = (char *)0x541c85;
    (**(code **)(*DAT_00708300 + 0x13c))();
    pcStack_29c = auStack_284 + 2;
    piStack_2a0 = (int *)(auStack_284 + 1);
    puStack_2a4 = auStack_284 + 3;
    uStack_2a8 = 0x541ca2;
    (**(code **)(*DAT_00707ce4 + 0x100))();
    uStack_2a8 = 1;
    piStack_214 = (int *)0x3f800000;
    piStack_220 = (int *)((float)((uint)puVar10 >> 0x18) * 0.003921569);
    ppiStack_2ac = &piStack_220;
    pcStack_21c = (char *)((float)((uint)puVar10 >> 8 & 0xff) * 0.003921569);
    uStack_2b0 = 1;
    piStack_2b4 = DAT_00708300;
    fStack_218 = (float)((uint)puVar10 >> 0x10 & 0xff) * 0.003921569;
    fStack_2b8 = 7.724614e-39;
    (**(code **)(*DAT_00708300 + 0x13c))();
    fStack_2b8 = 7.724634e-39;
    (**(code **)(*DAT_00707ce4 + 0x94))();
    fStack_2b8 = 7.724654e-39;
    iVar2 = (**(code **)(*DAT_00707ce4 + 0x94))();
    puStack_240 = *(undefined **)(iVar2 + 0x178);
    fStack_2b8 = 1.401298e-45;
    ppuStack_2bc = &puStack_240;
    fStack_23c = 1.0 / ((float)puStack_240 - *(float *)(iVar2 + 0x174));
    piStack_238 = (int *)0x0;
    pcStack_234 = (char *)0x0;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,2);
    fVar9 = 1.401298e-45;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,3,&stack0xfffffe10,1);
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,4,local_1d0,1);
    _auStack_284 = (char *)0x0;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0x28,&stack0xfffffd70,1);
    fStack_2b8 = 1.0 / fVar9;
    ppuStack_2bc = (undefined **)0x3f800000;
    piStack_2b4 = (int *)0x3bda740e;
    uStack_2b0 = 0x3b61fc78;
    iVar2 = (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0x29,&ppuStack_2bc,1);
  }
  if (*(uint *)((int)param_1 + 0x140) == 0) {
    cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x18,0);
  }
  else {
    FUN_005434e0(1,*(uint *)((int)param_1 + 0x140),(int)param_1 + 0x150);
  }
  if (DAT_0070bd41 != '\0') {
    iVar2 = (**(code **)(*(int *)this->mbr_0x4 + 0x20))();
    if (iVar2 < 0) {
      handle_fatal_error(
                        "Gfx_RS_SK_B_LM_HeightFog::SetMaterial - Failed to find valid technique (%x)\n"
                        );
    }
    else {
      DAT_0070bd41 = '\0';
      DAT_0070bd3c = auStack_1c4._0_4_;
      DAT_0070bd44 = (float)auStack_1c4._4_4_;
      iVar2 = (**(code **)(*(int *)this->mbr_0x4 + 0x2c))();
    }
  }
  ExceptionList = pvStack_c;
  return iVar2;
}


#include "../include/Gfx_RS_SK_B_LM_HeightFog.h"
