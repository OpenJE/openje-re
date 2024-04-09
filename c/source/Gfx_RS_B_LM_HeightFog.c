#include "../include/Gfx_RS_B_LM_HeightFog.h"

Gfx_RS_B_LM_HeightFog * __thiscall
Gfx_RS_B_LM_HeightFog::~Gfx_RS_B_LM_HeightFog(Gfx_RS_B_LM_HeightFog *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  Gfx_RS_B_LM_HeightFog *pGVar2;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_B_LM_HeightFog__vftable_67c6c0_0067c6c0;
  local_4 = 0;
  pGVar2 = DAT_0070bc3c;
  if (DAT_0070bc3c != (Gfx_RS_B_LM_HeightFog *)0x0) {
    pGVar2 = (Gfx_RS_B_LM_HeightFog *)((int)&DAT_0070bc3c[-1].mbr_0x18 + 3);
    DAT_0070bc3c = pGVar2;
    if (pGVar2 == (Gfx_RS_B_LM_HeightFog *)0x0) {
      if (DAT_0070bc40 != (int *)0x0) {
        (**(code **)(*DAT_0070bc40 + 8))(DAT_0070bc40);
        DAT_0070bc40 = (int *)0x0;
      }
      pGVar2 = DAT_0070bc44;
      if (DAT_0070bc44 != (Gfx_RS_B_LM_HeightFog *)0x0) {
        uVar1 = (*((DAT_0070bc44->Gfx_RenderStyle).vftptr_0x0)->virt_meth_0x6162e5_8)(DAT_0070bc44);
        pGVar2 = (Gfx_RS_B_LM_HeightFog *)CONCAT31(extraout_var,uVar1);
        DAT_0070bc44 = (Gfx_RS_B_LM_HeightFog *)0x0;
      }
    }
  }
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar2;
}



undefined4 * __thiscall
Gfx_RS_B_LM_HeightFog::virt_meth_0x537160(Gfx_RS_B_LM_HeightFog *this,byte param_1)

{
  ~Gfx_RS_B_LM_HeightFog(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Gfx_RenderStyle;
}



Gfx_RS_B_LM_HeightFog * __thiscall
Gfx_RS_B_LM_HeightFog::Gfx_RS_B_LM_HeightFog
          (Gfx_RS_B_LM_HeightFog *this,dword param_1,dword param_2,dword param_3,dword param_4,
          dword param_5)

{
  this->mbr_0x8 = param_1;
  this->mbr_0xc = param_2;
  this->mbr_0x10 = param_3;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_B_LM_HeightFog__vftable_67c6c0_0067c6c0;
  this->mbr_0x4 = 0;
  this->mbr_0x14 = param_4;
  this->mbr_0x18 = param_5;
  return this;
}



int __thiscall
Gfx_RS_B_LM_HeightFog::SetMaterial
          (Gfx_RS_B_LM_HeightFog *this,void *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  cls_0x496280 *this_00;
  int iVar4;
  undefined1 unaff_SI;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int *piVar9;
  float10 fVar10;
  float fVar11;
  undefined **ppuStack_298;
  float fStack_294;
  int *piStack_290;
  undefined4 uStack_28c;
  int **ppiStack_288;
  undefined4 uStack_284;
  undefined *puStack_280;
  int *piStack_27c;
  char *pcStack_278;
  int *piStack_274;
  undefined auStack_260 [2];
  char cStack_25e;
  undefined uStack_25d;
  int iStack_25c;
  int *piStack_258;
  char *pcStack_254;
  int iStack_250;
  int *piStack_24c;
  undefined4 uStack_248;
  int *piStack_244;
  char *pcStack_240;
  undefined4 uStack_23c;
  int *piStack_238;
  char *pcStack_234;
  float fStack_230;
  int *piStack_22c;
  undefined *puStack_228;
  dword dStack_224;
  int *piStack_220;
  undefined *puStack_21c;
  float fStack_218;
  int *piStack_214;
  char *pcStack_210;
  uint uStack_20c;
  int *piStack_208;
  undefined *puStack_204;
  uint uStack_200;
  int *piStack_1fc;
  char *pcStack_1f8;
  float fStack_1f4;
  char *pcVar12;
  char local_1d1;
  uint local_1d0;
  undefined auStack_1cc [4];
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  float fStack_1bc;
  cls_0x4d8d70 local_1ac;
  undefined4 auStack_170 [6];
  int aiStack_158 [16];
  int aiStack_118 [19];
  undefined auStack_cc [84];
  void *pvStack_78;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637466;
  pvStack_c = ExceptionList;
  local_1d0 = local_1d0 & 0xffffff00;
  local_1d1 = '\0';
  ExceptionList = &pvStack_c;
  cls_0x4b6030::meth_0x4b6030((cls_0x4b6030 *)param_1,(undefined *)&local_1d0,&local_1d1,&local_1c8)
  ;
  if (((char)local_1d0 == '\0') && (local_1d1 == '\0')) {
    this->mbr_0x4 = DAT_0070bc40;
  }
  else {
    this->mbr_0x4 = DAT_0070bc44;
  }
  if (this->mbr_0x4 == 0) {
    FUN_00497120((byte *)"Gfx_RS_B_LM_HeightFog::SetMaterial() failed - not created yet.");
    ExceptionList = pvStack_c;
    return -0x7789f794;
  }
  if (param_2 == 0) {
    FUN_00497120((byte *)"Gfx_RS_B_LM_HeightFog: No HeightFog object specified!");
    ExceptionList = pvStack_c;
    return -0x7789f794;
  }
  if (*(int *)((int)param_1 + 0x130) == 0) {
    cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,0);
    FUN_00497120((byte *)"Gfx_RS_B_LM_HeightFog: NULL Base Texture handle\n");
  }
  else {
    piVar2 = (int *)cls_0x55dc80::meth_0x51f160
                              (DAT_0070b200,(char)*(int *)((int)param_1 + 0x130),unaff_SI);
    if (piVar2 == (int *)0x0) {
      cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,0);
      FUN_004ab1c0((void *)0x0,(cls_0x50db20 *)&local_1ac);
      local_4 = 0;
      FUN_00497120((byte *)"Gfx_RS_B_LM_HeightFog: Cannot find Base Texture %s");
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0(&local_1ac);
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
      FUN_004ab1c0((void *)0x0,(cls_0x50db20 *)&local_1ac);
      local_4 = 1;
      FUN_00497120((byte *)"Gfx_RS_B_LM_HeightFog: Cannot find Lightmap %s");
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0(&local_1ac);
    }
    else {
      (**(code **)(*piVar2 + 4))();
    }
  }
  if (*(int *)(param_2 + 0x44) == 0) {
    cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x2,0);
    pcVar12 = "Gfx_RS_B_LM_HeightFog: Height Fog map not created!";
  }
  else {
    iVar3 = cls_0x55dc80::meth_0x51f160(DAT_0070b200,(char)*(int *)(param_2 + 0x44),unaff_SI);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x28) < 1) {
        fStack_1f4 = 7.701046e-39;
        (**(code **)(*(int *)this->mbr_0x4 + 0x54))();
      }
      else {
        fStack_1f4 = 7.701078e-39;
        (**(code **)(*(int *)this->mbr_0x4 + 0x54))();
      }
      goto LAB_0053dbab;
    }
    cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x2,0);
    pcVar12 = "Gfx_RS_B_LM_HeightFog: Height Fog map not found!";
  }
  FUN_00497120((byte *)pcVar12);
LAB_0053dbab:
  fStack_1f4 = 7.701173e-39;
  (**(code **)(*(int *)this->mbr_0x4 + 0x34))();
  fStack_1f4 = 0.0;
  if (*(char *)((int)param_1 + 0xbc) != '\0') {
    fStack_1f4 = 7.70121e-39;
    cVar1 = (**(code **)(*DAT_00707ce4 + 0xf4))();
    fStack_1f4 = (float)(uint)(cVar1 != '\0');
  }
  piStack_1fc = (int *)this->mbr_0x4;
  pcStack_1f8 = "bLighting";
  uStack_200 = 0x53dbee;
  (**(code **)(*piStack_1fc + 0x34))();
  uStack_200 = 0;
  if (*(char *)((int)param_1 + 0xbd) != '\0') {
    uStack_200 = 0x53dc08;
    iVar3 = (**(code **)(*DAT_00707ce4 + 0x94))();
    uStack_200 = (uint)(*(char *)(iVar3 + 0x168) != '\0');
  }
  piStack_208 = (int *)this->mbr_0x4;
  puStack_204 = &DAT_0067ea0c;
  uStack_20c = 0x53dc24;
  (**(code **)(*piStack_208 + 0x34))();
  piStack_214 = (int *)this->mbr_0x4;
  uStack_20c = (uint)(*(char *)((int)param_1 + 0xb8) != '\0');
  pcStack_210 = "DiffuseSource";
  fStack_218 = 7.701354e-39;
  (**(code **)(*piStack_214 + 0x34))();
  fStack_218 = (float)this->mbr_0x8;
  piStack_220 = (int *)this->mbr_0x4;
  puStack_21c = &DAT_0067ea44;
  dStack_224 = 0x53dc50;
  (**(code **)(*piStack_220 + 0x34))();
  dStack_224 = this->mbr_0xc;
  piStack_22c = (int *)this->mbr_0x4;
  puStack_228 = &DAT_0067ea3c;
  fStack_230 = 7.701405e-39;
  (**(code **)(*piStack_22c + 0x34))();
  fStack_230 = (float)this->mbr_0x10;
  piStack_238 = (int *)this->mbr_0x4;
  pcStack_234 = "LMcop";
  uStack_23c = 0x53dc74;
  (**(code **)(*piStack_238 + 0x34))();
  uStack_23c = this->mbr_0x14;
  piStack_244 = (int *)this->mbr_0x4;
  pcStack_240 = "LMaop";
  uStack_248 = (undefined4 *)0x53dc86;
  (**(code **)(*piStack_244 + 0x34))();
  uStack_248 = auStack_170;
  puVar5 = (undefined4 *)((int)param_1 + 0x2c);
  puVar7 = auStack_170;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  piStack_24c = DAT_00708300;
  iStack_250 = 0x53dcad;
  (**(code **)(*DAT_00708300 + 0xa8))();
  if (((char)piStack_238 == '\0') && (uStack_23c._3_1_ == '\0')) {
    piStack_258 = (int *)this->mbr_0x4;
    iStack_250 = 2;
    pcStack_254 = "TFcop";
    iStack_25c = 0x53dccd;
    (**(code **)(*piStack_258 + 0x34))();
    piVar2 = (int *)this->mbr_0x4;
    iStack_25c = 2;
    _auStack_260 = "TFaop";
    (**(code **)(*piVar2 + 0x34))();
  }
  else {
    piStack_258 = (int *)this->mbr_0x4;
    iStack_250 = (-(uint)((char)piStack_238 != '\0') & 3) + 2;
    pcStack_254 = "TFcop";
    iStack_25c = 0x53dcf8;
    (**(code **)(*piStack_258 + 0x34))();
    piVar2 = (int *)this->mbr_0x4;
    iStack_25c = (uint)(uStack_248._3_1_ != '\0') * 2 + 2;
    _auStack_260 = "TFaop";
    (**(code **)(*piVar2 + 0x34))();
    if ((char)iStack_250 == '\0') {
      uStack_248 = (undefined4 *)((uint)uStack_248 & 0xff808080 | 0x808080);
    }
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x3c,(int)uStack_248);
  }
  if (*(char *)((int)param_1 + 0xb9) == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = 3;
  }
  iVar3 = cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x16,iVar3);
  fVar10 = (float10)(**(code **)(*DAT_00707ce4 + 0x84))();
  pcStack_234 = (char *)(float)fVar10;
  piStack_274 = (int *)0x53dd88;
  FUN_00505df0(pvStack_78,pcStack_234,&fStack_230,(float *)&piStack_238);
  uStack_23c = *(undefined4 *)((int)pvStack_78 + 0x3c);
  piStack_244 = *(int **)((int)pvStack_78 + 0x34);
  pcStack_240 = *(char **)((int)pvStack_78 + 0x38);
  if (DAT_0070bc54 == '\0') {
    puVar6 = &DAT_00708338;
    puVar8 = &local_1d0;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    this_00 = (cls_0x496280 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
    cls_0x496280::meth_0x496280(this_00,(char)auStack_cc,piVar2);
    fStack_1bc = 1.0 / (float)piStack_238;
    local_1d0 = 0;
    local_1ac.mbr_0x4 = 0;
    local_1ac.mbr_0x10 = (dword)-(((float)pcStack_240 + fStack_230) * fStack_1bc);
    piStack_274 = (int *)0x53e013;
    thunk_FUN_00471943();
    piStack_27c = (int *)this->mbr_0x4;
    piVar2 = aiStack_158;
    piVar9 = aiStack_118;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar9 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar9 = piVar9 + 1;
    }
    piStack_274 = aiStack_118;
    pcStack_278 = "fogmatrix";
    puStack_280 = (undefined *)0x53e03e;
    (**(code **)(*piStack_27c + 0x4c))();
  }
  else {
    puVar6 = &uStack_200;
    uStack_200 = 0;
    piStack_1fc = (int *)0x3f000000;
    pcStack_1f8 = (char *)0x3f800000;
    fStack_1f4 = 2.0;
    piStack_274 = DAT_00708300;
    pcStack_278 = (char *)0x53dde1;
    (**(code **)(*DAT_00708300 + 0x13c))();
    pcStack_278 = auStack_260 + 2;
    piStack_27c = (int *)(auStack_260 + 1);
    puStack_280 = auStack_260 + 3;
    uStack_284 = 0x53ddfe;
    (**(code **)(*DAT_00707ce4 + 0x100))();
    uStack_284 = 1;
    piStack_1fc = (int *)((float)((uint)puVar6 >> 0x18) * 0.003921569);
    ppiStack_288 = &piStack_1fc;
    pcStack_1f8 = (char *)((float)((uint)puVar6 >> 8 & 0xff) * 0.003921569);
    uStack_28c = 1;
    piStack_290 = DAT_00708300;
    fStack_1f4 = (float)((uint)puVar6 >> 0x10 & 0xff) * 0.003921569;
    fStack_294 = 7.702143e-39;
    (**(code **)(*DAT_00708300 + 0x13c))();
    fStack_294 = 7.702163e-39;
    (**(code **)(*DAT_00707ce4 + 0x94))();
    fStack_294 = 7.702182e-39;
    iVar3 = (**(code **)(*DAT_00707ce4 + 0x94))();
    puStack_21c = *(undefined **)(iVar3 + 0x178);
    fStack_294 = 1.401298e-45;
    ppuStack_298 = &puStack_21c;
    fStack_218 = 1.0 / ((float)puStack_21c - *(float *)(iVar3 + 0x174));
    piStack_214 = (int *)0x0;
    pcStack_210 = (char *)0x0;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,2);
    fVar11 = 1.401298e-45;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,3,auStack_1cc,1);
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,4,&local_1ac,1);
    _auStack_260 = (char *)0x0;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0x28,&stack0xfffffd94,1);
    fStack_294 = 1.0 / fVar11;
    ppuStack_298 = (undefined **)0x3f800000;
    piStack_290 = (int *)0x3bda740e;
    uStack_28c = 0x3b61fc78;
    iVar3 = (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0x29,&ppuStack_298,1);
  }
  if (*(uint *)((int)param_1 + 0x140) == 0) {
    cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x18,0);
  }
  else {
    fStack_1f4 = 7.702845e-39;
    FUN_005434e0(0,*(uint *)((int)param_1 + 0x140),(int)param_1 + 0x150);
  }
  if (DAT_0070bc55 != '\0') {
    iVar3 = (**(code **)(*(int *)this->mbr_0x4 + 0x20))();
    if (iVar3 < 0) {
      handle_fatal_error(
                        "Gfx_RS_B_LM_HeightFog::SetMaterial - Failed to find valid technique (%x)\n"
                        );
    }
    else {
      DAT_0070bc55 = '\0';
      DAT_0070bc50 = uStack_1c4;
      DAT_0070bc58 = uStack_1c0;
      iVar3 = (**(code **)(*(int *)this->mbr_0x4 + 0x2c))();
    }
  }
  ExceptionList = pvStack_c;
  return iVar3;
}


#include "../include/Gfx_RS_B_LM_HeightFog.h"
