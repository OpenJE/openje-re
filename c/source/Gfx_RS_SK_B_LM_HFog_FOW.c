#include "../include/Gfx_RS_SK_B_LM_HFog_FOW.h"

Gfx_RS_SK_B_LM_HFog_FOW * __thiscall
Gfx_RS_SK_B_LM_HFog_FOW::~Gfx_RS_SK_B_LM_HFog_FOW(Gfx_RS_SK_B_LM_HFog_FOW *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  Gfx_RS_SK_B_LM_HFog_FOW *pGVar2;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_SK_B_LM_HFog_FOW__vftable_67c8a0_0067c8a0;
  local_4 = 0;
  pGVar2 = DAT_0070bd6c;
  if (DAT_0070bd6c != (Gfx_RS_SK_B_LM_HFog_FOW *)0x0) {
    pGVar2 = (Gfx_RS_SK_B_LM_HFog_FOW *)((int)&DAT_0070bd6c[-1].mbr_0x18 + 3);
    DAT_0070bd6c = pGVar2;
    if (pGVar2 == (Gfx_RS_SK_B_LM_HFog_FOW *)0x0) {
      if (DAT_0070bd70 != (int *)0x0) {
        (**(code **)(*DAT_0070bd70 + 8))(DAT_0070bd70);
        DAT_0070bd70 = (int *)0x0;
      }
      pGVar2 = DAT_0070bd74;
      if (DAT_0070bd74 != (Gfx_RS_SK_B_LM_HFog_FOW *)0x0) {
        uVar1 = (*((DAT_0070bd74->Gfx_RenderStyle).vftptr_0x0)->virt_meth_0x6162e5_8)(DAT_0070bd74);
        pGVar2 = (Gfx_RS_SK_B_LM_HFog_FOW *)CONCAT31(extraout_var,uVar1);
        DAT_0070bd74 = (Gfx_RS_SK_B_LM_HFog_FOW *)0x0;
      }
    }
  }
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar2;
}



undefined4 * __thiscall
Gfx_RS_SK_B_LM_HFog_FOW::virt_meth_0x537c40(Gfx_RS_SK_B_LM_HFog_FOW *this,byte param_1)

{
  ~Gfx_RS_SK_B_LM_HFog_FOW(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Gfx_RenderStyle;
}



Gfx_RS_SK_B_LM_HFog_FOW * __thiscall
Gfx_RS_SK_B_LM_HFog_FOW::Gfx_RS_SK_B_LM_HFog_FOW
          (Gfx_RS_SK_B_LM_HFog_FOW *this,dword param_1,dword param_2,dword param_3,dword param_4,
          dword param_5)

{
  this->mbr_0x8 = param_1;
  this->mbr_0xc = param_2;
  this->mbr_0x10 = param_3;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_SK_B_LM_HFog_FOW__vftable_67c8a0_0067c8a0;
  this->mbr_0x4 = 0;
  this->mbr_0x14 = param_4;
  this->mbr_0x18 = param_5;
  return this;
}



/* WARNING: Type propagation algorithm not settling */

int __thiscall
Gfx_RS_SK_B_LM_HFog_FOW::SetMaterial
          (Gfx_RS_SK_B_LM_HFog_FOW *this,void *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  cls_0x496280 *pcVar4;
  int iVar5;
  undefined1 unaff_SI;
  undefined4 *puVar6;
  float *pfVar7;
  int **ppiVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  int *piVar11;
  float10 fVar12;
  dword *pdVar13;
  undefined *puVar14;
  int **ppiStack_2e4;
  float fStack_2e0;
  int iStack_2dc;
  int *piStack_2d8;
  char *pcStack_2d4;
  int *piStack_2d0;
  undefined4 uStack_2bc;
  dword *pdStack_2b8;
  int **ppiStack_2b4;
  undefined *puStack_2b0;
  char **ppcVar15;
  char *pcStack_290;
  float fStack_28c;
  int *piStack_288;
  undefined4 *puStack_284;
  int *piStack_280;
  char *pcStack_27c;
  undefined4 uStack_278;
  int *piStack_274;
  char *pcStack_270;
  float fStack_26c;
  int *piStack_268;
  undefined *puStack_264;
  float fStack_260;
  int *piStack_25c;
  undefined *puStack_258;
  dword dStack_254;
  int *piStack_250;
  char *pcStack_24c;
  uint uStack_248;
  int *piStack_244;
  undefined *puStack_240;
  uint uStack_23c;
  int *piStack_238;
  char *pcStack_234;
  uint uStack_230;
  int *piStack_22c;
  char *pcStack_228;
  dword dStack_224;
  int *piStack_220;
  char *pcStack_21c;
  undefined4 uStack_218;
  int *piStack_214;
  char *pcStack_210;
  float fStack_20c;
  int *piStack_208;
  undefined *puStack_204;
  char *pcVar16;
  undefined4 uStack_1e0;
  char local_1dc [4];
  float fStack_1d8;
  float fStack_1d4;
  uint local_1d0 [2];
  int *apiStack_1c8 [8];
  cls_0x4d8d70 local_1a8;
  int aiStack_16c [4];
  undefined auStack_15c [4];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined auStack_148 [12];
  undefined auStack_13c [92];
  undefined4 auStack_e0 [6];
  void *pvStack_c8;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006374e6;
  pvStack_c = ExceptionList;
  local_1dc[0] = '\0';
  uStack_1e0 = (uint)(uint3)uStack_1e0;
  ExceptionList = &pvStack_c;
  cls_0x4b6030::meth_0x4b6030
            ((cls_0x4b6030 *)param_1,local_1dc,(undefined *)((int)&uStack_1e0 + 3),local_1d0);
  if ((local_1dc[0] == '\0') && (uStack_1e0._3_1_ == '\0')) {
    this->mbr_0x4 = DAT_0070bd70;
  }
  else {
    this->mbr_0x4 = DAT_0070bd74;
  }
  if (this->mbr_0x4 == 0) {
    FUN_00497120((byte *)"Gfx_RS_SK_B_LM_HFog_FOW::SetMaterial() failed - not created yet.");
    ExceptionList = pvStack_c;
    return -0x7789f794;
  }
  if (param_2 == 0) {
    FUN_00497120((byte *)"Gfx_RS_SK_B_LM_HFog_FOW: No HeightFog object specified!");
    ExceptionList = pvStack_c;
    return -0x7789f794;
  }
  if (*(int *)((int)param_1 + 0x130) == 0) {
    cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,0);
    FUN_00497120((byte *)"Gfx_RS_SK_B_LM_HFog_FOW: NULL Base Texture handle\n");
  }
  else {
    piVar2 = (int *)cls_0x55dc80::meth_0x51f160
                              (DAT_0070b200,(char)*(int *)((int)param_1 + 0x130),unaff_SI);
    if (piVar2 == (int *)0x0) {
      cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,0);
      FUN_004ab1c0((void *)0x0,(cls_0x50db20 *)&local_1a8);
      local_4 = 0;
      FUN_00497120((byte *)"Gfx_RS_SK_B_LM_HFog_FOW: Cannot find Base Texture %s");
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0(&local_1a8);
    }
    else {
      (**(code **)(*piVar2 + 4))();
    }
  }
  if (*(int *)((int)param_1 + 0x134) == 0) {
    cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x1,0);
  }
  else {
    piVar2 = (int *)cls_0x55dc80::meth_0x51f160
                              (DAT_0070b200,(char)*(int *)((int)param_1 + 0x134),unaff_SI);
    if (piVar2 == (int *)0x0) {
      cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x1,0);
      FUN_004ab1c0((void *)0x0,(cls_0x50db20 *)&local_1a8);
      local_4 = 1;
      FUN_00497120((byte *)"Gfx_RS_SK_B_LM_HFog_FOW: Cannot find Lightmap %s");
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0(&local_1a8);
    }
    else {
      (**(code **)(*piVar2 + 4))();
    }
  }
  if (*(int *)(param_2 + 0x44) == 0) {
    (**(code **)(*(int *)this->mbr_0x4 + 0x54))();
    pcVar16 = "Gfx_RS_SK_B_LM_HFog_FOW: Height Fog map not created!";
  }
  else {
    iVar3 = cls_0x55dc80::meth_0x51f160(DAT_0070b200,(char)*(int *)(param_2 + 0x44),unaff_SI);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x28) < 1) {
        (**(code **)(*(int *)this->mbr_0x4 + 0x54))();
      }
      else {
        (**(code **)(*(int *)this->mbr_0x4 + 0x54))();
      }
      goto LAB_00542e1f;
    }
    (**(code **)(*(int *)this->mbr_0x4 + 0x54))();
    pcVar16 = "Gfx_RS_SK_B_LM_HFog_FOW: Height Fog map not found!";
  }
  puStack_204 = (undefined *)0x542e1c;
  FUN_00497120((byte *)pcVar16);
LAB_00542e1f:
  iVar3 = (**(code **)(*DAT_00707ce4 + 0x19c))();
  if (iVar3 == 0) {
    piStack_208 = (int *)this->mbr_0x4;
    puStack_204 = &DAT_00683780;
    fStack_20c = 7.730843e-39;
    (**(code **)(*piStack_208 + 0x54))();
    piStack_214 = (int *)this->mbr_0x4;
    fStack_20c = 1.401298e-45;
    pcStack_210 = "FOWcop";
    uStack_218 = 0x542e82;
    (**(code **)(*piStack_214 + 0x34))();
    piStack_220 = (int *)this->mbr_0x4;
    uStack_218 = 1;
    pcStack_21c = "FOWaop";
    dStack_224 = 0x542e92;
    (**(code **)(*piStack_220 + 0x34))();
  }
  else {
    piStack_208 = (int *)this->mbr_0x4;
    puStack_204 = &DAT_00683780;
    fStack_20c = 7.730773e-39;
    (**(code **)(*piStack_208 + 0x54))();
    piStack_214 = (int *)this->mbr_0x4;
    fStack_20c = 5.605194e-45;
    pcStack_210 = "FOWcop";
    uStack_218 = 0x542e50;
    (**(code **)(*piStack_214 + 0x34))();
    piStack_220 = (int *)this->mbr_0x4;
    uStack_218 = 2;
    pcStack_21c = "FOWaop";
    dStack_224 = 0x542e60;
    (**(code **)(*piStack_220 + 0x34))();
  }
  dStack_224 = this->mbr_0x18;
  piStack_22c = (int *)this->mbr_0x4;
  pcStack_228 = "alphatest";
  uStack_230 = 0x542ea4;
  (**(code **)(*piStack_22c + 0x34))();
  uStack_230 = 0;
  if (*(char *)((int)param_1 + 0xbc) != '\0') {
    uStack_230 = 0x542ebe;
    cVar1 = (**(code **)(*DAT_00707ce4 + 0xf4))();
    uStack_230 = (uint)(cVar1 != '\0');
  }
  piStack_238 = (int *)this->mbr_0x4;
  pcStack_234 = "bLighting";
  uStack_23c = 0x542ed5;
  (**(code **)(*piStack_238 + 0x34))();
  uStack_23c = 0;
  if (*(char *)((int)param_1 + 0xbd) != '\0') {
    uStack_23c = 0x542eef;
    iVar3 = (**(code **)(*DAT_00707ce4 + 0x94))();
    uStack_23c = (uint)(*(char *)(iVar3 + 0x168) != '\0');
  }
  piStack_244 = (int *)this->mbr_0x4;
  puStack_240 = &DAT_0067ea0c;
  uStack_248 = 0x542f0b;
  (**(code **)(*piStack_244 + 0x34))();
  piStack_250 = (int *)this->mbr_0x4;
  uStack_248 = (uint)(*(char *)((int)param_1 + 0xb8) != '\0');
  pcStack_24c = "DiffuseSource";
  dStack_254 = 0x542f25;
  (**(code **)(*piStack_250 + 0x34))();
  dStack_254 = this->mbr_0x8;
  piStack_25c = (int *)this->mbr_0x4;
  puStack_258 = &DAT_0067ea44;
  fStack_260 = 7.731119e-39;
  (**(code **)(*piStack_25c + 0x34))();
  fStack_260 = (float)this->mbr_0xc;
  piStack_268 = (int *)this->mbr_0x4;
  puStack_264 = &DAT_0067ea3c;
  fStack_26c = 7.731144e-39;
  (**(code **)(*piStack_268 + 0x34))();
  fStack_26c = (float)this->mbr_0x10;
  piStack_274 = (int *)this->mbr_0x4;
  pcStack_270 = "LMcop";
  uStack_278 = 0x542f5b;
  (**(code **)(*piStack_274 + 0x34))();
  uStack_278 = this->mbr_0x14;
  piStack_280 = (int *)this->mbr_0x4;
  pcStack_27c = "LMaop";
  puStack_284 = (undefined4 *)0x542f6d;
  (**(code **)(*piStack_280 + 0x34))();
  puStack_284 = auStack_e0;
  puVar6 = (undefined4 *)((int)param_1 + 0x2c);
  puVar9 = auStack_e0;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  piStack_288 = DAT_00708300;
  fStack_28c = 7.731249e-39;
  (**(code **)(*DAT_00708300 + 0xa8))();
  if (((char)piStack_274 == '\0') && (uStack_278._3_1_ == '\0')) {
    fStack_28c = 2.802597e-45;
    pcStack_290 = "TFcop";
    (**(code **)(*(int *)this->mbr_0x4 + 0x34))();
    (**(code **)(*(int *)this->mbr_0x4 + 0x34))();
  }
  else {
    fStack_28c = (float)((-(uint)((char)piStack_274 != '\0') & 3) + 2);
    pcStack_290 = "TFcop";
    (**(code **)(*(int *)this->mbr_0x4 + 0x34))();
    (**(code **)(*(int *)this->mbr_0x4 + 0x34))();
    if (fStack_28c._0_1_ == '\0') {
      piStack_280 = (int *)((uint)piStack_280 & 0xff808080 | 0x808080);
    }
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x3c,(int)piStack_280);
  }
  if (*(char *)((int)param_1 + 0xb9) == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = 3;
  }
  iVar3 = cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x16,iVar3);
  puVar6 = &DAT_00708338;
  puVar9 = (undefined4 *)&stack0xfffffe00;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  ppcVar15 = &pcStack_27c;
  (**(code **)(*DAT_00707ce4 + 0x180))();
  fStack_28c = (float)piStack_274 - (float)puStack_284;
  pcStack_290 = (char *)(fStack_26c - (float)pcStack_27c);
  pcVar4 = (cls_0x496280 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
  puStack_2b0 = (undefined *)0x5430a0;
  cls_0x496280::meth_0x496280(pcVar4,(char)auStack_148,ppcVar15);
  piStack_208 = (int *)(1.0 / fStack_28c);
  puStack_2b0 = auStack_148;
  ppiStack_2b4 = apiStack_1c8;
  uStack_1e0 = 0;
  fStack_1d8 = -((float)puStack_284 * (float)piStack_208);
  fStack_1d4 = fStack_26c * (1.0 / (float)pcStack_290);
  pdStack_2b8 = (dword *)0x54311d;
  thunk_FUN_00471943();
  piVar2 = (int *)this->mbr_0x4;
  pfVar7 = &fStack_1d4;
  pdVar13 = &local_1a8.mbr_0x14;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pdVar13 = (dword)*pfVar7;
    pfVar7 = pfVar7 + 1;
    pdVar13 = pdVar13 + 1;
  }
  pdStack_2b8 = &local_1a8.mbr_0x14;
  uStack_2bc = "FOWmatrix";
  (**(code **)(*piVar2 + 0x4c))();
  fVar12 = (float10)(**(code **)(*DAT_00707ce4 + 0x84))();
  piStack_2d0 = (int *)0x543177;
  FUN_00505df0(pvStack_c8,(float)fVar12,(float *)&pcStack_27c,(float *)&pcStack_290);
  if (DAT_0070bd84 == '\0') {
    ppiVar8 = (int **)&DAT_00708338;
    ppiVar10 = &piStack_220;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppiVar10 = *ppiVar8;
      ppiVar8 = ppiVar8 + 1;
      ppiVar10 = ppiVar10 + 1;
    }
    pcVar4 = (cls_0x496280 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
    cls_0x496280::meth_0x496280(pcVar4,(char)&local_1a8 + '\b',piVar2);
    fStack_20c = 1.0 / (float)pcStack_290;
    piStack_220 = (int *)0x0;
    piStack_2d0 = (int *)0x543402;
    thunk_FUN_00471943();
    piStack_2d8 = (int *)this->mbr_0x4;
    piVar2 = (int *)&stack0xfffffe14;
    piVar11 = aiStack_16c;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar11 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar11 = piVar11 + 1;
    }
    piStack_2d0 = aiStack_16c;
    pcStack_2d4 = "fogmatrix";
    iStack_2dc = 0x54342d;
    (**(code **)(*piStack_2d8 + 0x4c))();
  }
  else {
    pfVar7 = &fStack_28c;
    fStack_28c = 0.0;
    piStack_288 = (int *)0x3f000000;
    puStack_284 = (undefined4 *)0x3f800000;
    piStack_280 = (int *)0x40000000;
    piStack_2d0 = DAT_00708300;
    pcStack_2d4 = (char *)0x5431d0;
    (**(code **)(*DAT_00708300 + 0x13c))();
    pcStack_2d4 = (char *)((int)&uStack_2bc + 2);
    piStack_2d8 = (int *)((int)&uStack_2bc + 1);
    iStack_2dc = (int)&uStack_2bc + 3;
    fStack_2e0 = 7.732092e-39;
    (**(code **)(*DAT_00707ce4 + 0x100))();
    fStack_2e0 = 1.401298e-45;
    piStack_25c = (int *)0x3f800000;
    piStack_268 = (int *)((float)((uint)pfVar7 >> 0x18) * 0.003921569);
    ppiStack_2e4 = &piStack_268;
    puStack_264 = (undefined *)((float)((uint)pfVar7 >> 8 & 0xff) * 0.003921569);
    fStack_260 = (float)((uint)pfVar7 >> 0x10 & 0xff) * 0.003921569;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,1);
    (**(code **)(*DAT_00707ce4 + 0x94))();
    iVar3 = (**(code **)(*DAT_00707ce4 + 0x94))();
    piStack_268 = *(int **)(iVar3 + 0x178);
    puVar14 = (undefined *)0x1;
    ppiVar8 = &piStack_268;
    pdVar13 = (dword *)0x2;
    puStack_264 = (undefined *)(1.0 / ((float)piStack_268 - *(float *)(iVar3 + 0x174)));
    fStack_260 = 0.0;
    piStack_25c = (int *)0x0;
    piVar2 = DAT_00708300;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,2,ppiVar8,1);
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,3,auStack_15c,1);
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,4,auStack_13c,1);
    pdStack_2b8 = pdVar13;
    ppiStack_2b4 = ppiVar8;
    puStack_2b0 = puVar14;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0x28,&pdStack_2b8,1);
    fStack_2e0 = 1.0 / (float)piVar2;
    ppiStack_2e4 = (int **)0x3f800000;
    iStack_2dc = 0x3bda740e;
    piStack_2d8 = (int *)0x3b61fc78;
    iVar3 = (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0x29,&ppiStack_2e4,1);
  }
  if (*(uint *)((int)param_1 + 0x140) == 0) {
    cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x18,0);
  }
  else {
    FUN_005434e0(1,*(uint *)((int)param_1 + 0x140),(int)param_1 + 0x150);
  }
  if (DAT_0070bd85 != '\0') {
    iVar3 = (**(code **)(*(int *)this->mbr_0x4 + 0x20))();
    if (iVar3 < 0) {
      handle_fatal_error(
                        "Gfx_RS_SK_B_LM_HFog_FOW::SetMaterial - Failed to find valid technique (%x)\n"
                        );
    }
    else {
      DAT_0070bd85 = '\0';
      DAT_0070bd80 = uStack_158;
      DAT_0070bd88 = uStack_154;
    }
  }
  ExceptionList = pvStack_c;
  return iVar3;
}


#include "../include/Gfx_RS_SK_B_LM_HFog_FOW.h"
