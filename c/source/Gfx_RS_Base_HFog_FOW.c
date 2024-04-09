#include "../include/Gfx_RS_Base_HFog_FOW.h"

Gfx_RS_Base_HFog_FOW * __thiscall
Gfx_RS_Base_HFog_FOW::~Gfx_RS_Base_HFog_FOW(Gfx_RS_Base_HFog_FOW *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  Gfx_RS_Base_HFog_FOW *pGVar2;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_Base_HFog_FOW__vftable_67c774_0067c774;
  local_4 = 0;
  pGVar2 = DAT_0070bca4;
  if (DAT_0070bca4 != (Gfx_RS_Base_HFog_FOW *)0x0) {
    DAT_0070bca4 = (Gfx_RS_Base_HFog_FOW *)((int)&DAT_0070bca4[-1].mbr_0xc + 3);
    pGVar2 = DAT_0070bca4;
    if ((DAT_0070bca4 == (Gfx_RS_Base_HFog_FOW *)0x0) &&
       (pGVar2 = DAT_0070bca8, DAT_0070bca8 != (Gfx_RS_Base_HFog_FOW *)0x0)) {
      uVar1 = (*((DAT_0070bca8->Gfx_RenderStyle).vftptr_0x0)->virt_meth_0x6162e5_8)(DAT_0070bca8);
      pGVar2 = (Gfx_RS_Base_HFog_FOW *)CONCAT31(extraout_var,uVar1);
      DAT_0070bca8 = (Gfx_RS_Base_HFog_FOW *)0x0;
    }
  }
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar2;
}



undefined4 * __thiscall
Gfx_RS_Base_HFog_FOW::virt_meth_0x537570(Gfx_RS_Base_HFog_FOW *this,byte param_1)

{
  ~Gfx_RS_Base_HFog_FOW(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Gfx_RenderStyle;
}



Gfx_RS_Base_HFog_FOW * __thiscall
Gfx_RS_Base_HFog_FOW::Gfx_RS_Base_HFog_FOW
          (Gfx_RS_Base_HFog_FOW *this,dword param_1,dword param_2,dword param_3)

{
  this->mbr_0x4 = param_1;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_Base_HFog_FOW__vftable_67c774_0067c774;
  this->mbr_0x8 = param_2;
  this->mbr_0xc = param_3;
  return this;
}



int __thiscall
Gfx_RS_Base_HFog_FOW::SetMaterial(Gfx_RS_Base_HFog_FOW *this,void *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  cls_0x496280 *pcVar4;
  int iVar5;
  undefined1 unaff_BP;
  undefined4 *puVar6;
  int **ppiVar7;
  char **ppcVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int **ppiVar11;
  char **ppcVar12;
  float *pfVar13;
  float10 fVar14;
  float fVar15;
  uint uVar16;
  float *pfVar17;
  undefined *puVar18;
  uint uVar19;
  undefined4 uStack_2b0;
  undefined *puStack_2ac;
  undefined *puStack_2a8;
  int *piStack_298;
  char *pcStack_294;
  int iStack_290;
  int *piStack_28c;
  char *pcStack_288;
  float fStack_284;
  int *piStack_280;
  undefined4 *puStack_27c;
  int *piStack_278;
  undefined *puStack_274;
  undefined4 uStack_270;
  int *piStack_26c;
  undefined *puStack_268;
  float fStack_264;
  undefined4 uStack_244;
  uint uStack_240;
  int *piStack_23c;
  char *pcStack_238;
  dword dStack_234;
  int *piStack_230;
  char *pcStack_22c;
  uint uStack_228;
  int *piStack_224;
  char *pcStack_220;
  undefined4 uStack_21c;
  int *piStack_218;
  char *pcStack_214;
  uint uStack_210;
  int *piStack_20c;
  undefined *puStack_208;
  char *pcVar20;
  float afStack_1e0 [5];
  float fStack_1cc;
  int *apiStack_1c8 [3];
  undefined auStack_1bc [8];
  Gfx_RS_Base_HFog_FOW *local_1b4;
  undefined auStack_194 [12];
  int *apiStack_188 [5];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined local_16c [12];
  float afStack_160 [4];
  undefined auStack_150 [20];
  undefined auStack_13c [12];
  undefined auStack_130 [92];
  undefined4 auStack_d4 [6];
  void *pvStack_bc;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063747b;
  pvStack_c = ExceptionList;
  local_1b4 = this;
  if (DAT_0070bca8 == (int *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_00497120((byte *)"Gfx_RS_Base_HFog_FOW::SetMaterial() failed - not created yet.");
    ExceptionList = pvStack_c;
    return -0x7789f794;
  }
  if (param_2 == 0) {
    ExceptionList = &pvStack_c;
    FUN_00497120((byte *)"Gfx_RS_Base_HFog_FOW: No HeightFog object specified!");
    ExceptionList = pvStack_c;
    return -0x7789f794;
  }
  if (*(int *)((int)param_1 + 0x130) == 0) {
    ExceptionList = &pvStack_c;
    cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,0);
  }
  else {
    ExceptionList = &pvStack_c;
    piVar2 = (int *)cls_0x55dc80::meth_0x51f160
                              (DAT_0070b200,(char)*(int *)((int)param_1 + 0x130),unaff_BP);
    if (piVar2 == (int *)0x0) {
      cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,0);
      FUN_004ab1c0((void *)0x0,(cls_0x50db20 *)local_16c);
      local_4 = 0;
      FUN_00497120((byte *)"Gfx_RS_Base_HFog_FOW: Cannot find Base Texture %s");
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_16c);
    }
    else {
      (**(code **)(*piVar2 + 4))();
    }
  }
  if (*(int *)(param_2 + 0x44) == 0) {
    (**(code **)(*DAT_0070bca8 + 0x54))();
    pcVar20 = "Gfx_RS_Base_HFog_FOW: Height Fog map not created!";
  }
  else {
    iVar3 = cls_0x55dc80::meth_0x51f160(DAT_0070b200,(char)*(int *)(param_2 + 0x44),unaff_BP);
    if (iVar3 != 0) {
      (**(code **)(*DAT_0070bca8 + 0x54))();
      goto LAB_0053f4d0;
    }
    (**(code **)(*DAT_0070bca8 + 0x54))();
    pcVar20 = "Gfx_RS_Base_HFog_FOW: Height Fog map not found!";
  }
  puStack_208 = (undefined *)0x53f4cd;
  FUN_00497120((byte *)pcVar20);
LAB_0053f4d0:
  iVar3 = (**(code **)(*DAT_00707ce4 + 0x19c))();
  if (iVar3 == 0) {
    puStack_208 = &DAT_00683780;
    piStack_20c = DAT_0070bca8;
    uStack_210 = 0x53f52c;
    (**(code **)(*DAT_0070bca8 + 0x54))();
    uStack_210 = 1;
    pcStack_214 = "FOWcop";
    piStack_218 = DAT_0070bca8;
    uStack_21c = 0x53f53e;
    (**(code **)(*DAT_0070bca8 + 0x34))();
    uStack_21c = 1;
    pcStack_220 = "FOWaop";
    piStack_224 = DAT_0070bca8;
    uStack_228 = 0x53f550;
    (**(code **)(*DAT_0070bca8 + 0x34))();
  }
  else {
    puStack_208 = &DAT_00683780;
    piStack_20c = DAT_0070bca8;
    uStack_210 = 0x53f4f4;
    (**(code **)(*DAT_0070bca8 + 0x54))();
    uStack_210 = 4;
    pcStack_214 = "FOWcop";
    piStack_218 = DAT_0070bca8;
    uStack_21c = 0x53f506;
    (**(code **)(*DAT_0070bca8 + 0x34))();
    uStack_21c = 2;
    pcStack_220 = "FOWaop";
    piStack_224 = DAT_0070bca8;
    uStack_228 = 0x53f518;
    (**(code **)(*DAT_0070bca8 + 0x34))();
  }
  uStack_228 = (uint)*(byte *)((int)param_1 + 0xbb);
  pcStack_22c = "bZEnable";
  piStack_230 = DAT_0070bca8;
  dStack_234 = 0x53f568;
  (**(code **)(*DAT_0070bca8 + 0x34))();
  dStack_234 = this->mbr_0xc;
  pcStack_238 = "alphatest";
  piStack_23c = DAT_0070bca8;
  uStack_240 = 0x53f57c;
  (**(code **)(*DAT_0070bca8 + 0x34))();
  uStack_240 = 0;
  if (*(char *)((int)param_1 + 0xbc) != '\0') {
    uStack_240 = 0x53f596;
    cVar1 = (**(code **)(*DAT_00707ce4 + 0xf4))();
    uStack_240 = (uint)(cVar1 != '\0');
  }
  uStack_244 = "bLighting";
  (**(code **)(*DAT_0070bca8 + 0x34))();
  if (*(char *)((int)param_1 + 0xbd) != '\0') {
    (**(code **)(*DAT_00707ce4 + 0x94))();
  }
  piVar2 = DAT_0070bca8;
  (**(code **)(*DAT_0070bca8 + 0x34))();
  uStack_244 = (char *)((uint)uStack_244 & 0xffff0000);
  fStack_264 = 7.710603e-39;
  cls_0x4b6030::meth_0x4b6030
            ((cls_0x4b6030 *)param_1,(undefined *)((int)&uStack_244 + 1),(undefined *)&uStack_244,
             &uStack_210);
  fStack_264 = 7.710642e-39;
  (**(code **)(*DAT_0070bca8 + 0x34))();
  fStack_264 = (float)this->mbr_0x4;
  puStack_268 = &DAT_0067ea44;
  piStack_26c = DAT_0070bca8;
  uStack_270 = 7.71067e-39;
  (**(code **)(*DAT_0070bca8 + 0x34))();
  uStack_270 = (float)this->mbr_0x8;
  puStack_274 = &DAT_0067ea3c;
  piStack_278 = DAT_0070bca8;
  puStack_27c = (undefined4 *)0x53f64a;
  (**(code **)(*DAT_0070bca8 + 0x34))();
  puStack_27c = auStack_d4;
  puVar6 = (undefined4 *)((int)param_1 + 0x2c);
  puVar10 = auStack_d4;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  piStack_280 = DAT_00708300;
  fStack_284 = 7.710753e-39;
  (**(code **)(*DAT_00708300 + 0xa8))();
  if ((uStack_270._1_1_ == '\0') && ((char)uStack_270 == '\0')) {
    fStack_284 = 2.802597e-45;
    pcStack_288 = "TFcop";
    piStack_28c = DAT_0070bca8;
    iStack_290 = 0x53f693;
    (**(code **)(*DAT_0070bca8 + 0x34))();
    iStack_290 = 2;
    pcStack_294 = "TFaop";
    piStack_298 = DAT_0070bca8;
    (**(code **)(*DAT_0070bca8 + 0x34))();
  }
  else {
    fStack_284 = (float)((-(uint)(uStack_270._1_1_ != '\0') & 3) + 2);
    pcStack_288 = "TFcop";
    piStack_28c = DAT_0070bca8;
    iStack_290 = 0x53f6c3;
    (**(code **)(*DAT_0070bca8 + 0x34))();
    iStack_290 = (uint)((char)puStack_27c != '\0') * 2 + 2;
    pcStack_294 = "TFaop";
    piStack_298 = DAT_0070bca8;
    (**(code **)(*DAT_0070bca8 + 0x34))();
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x3c,(int)piVar2);
  }
  if (*(char *)((int)param_1 + 0xb9) == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = 3;
  }
  iVar3 = cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x16,iVar3);
  puVar6 = &DAT_00708338;
  puVar10 = (undefined4 *)&stack0xfffffe0c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  ppiVar7 = &piStack_278;
  (**(code **)(*DAT_00707ce4 + 0x180))();
  fStack_284 = uStack_270 - (float)piStack_280;
  piStack_28c = (int *)((float)puStack_268 - (float)piStack_278);
  pcVar4 = (cls_0x496280 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
  puStack_2a8 = (undefined *)0x53f770;
  cls_0x496280::meth_0x496280(pcVar4,(char)auStack_13c,ppiVar7);
  puStack_2a8 = auStack_13c;
  puStack_2ac = auStack_1bc;
  afStack_1e0[3] = 0.0;
  fStack_1cc = -((1.0 / fStack_284) * (float)piStack_280);
  afStack_1e0[2] = (1.0 / (float)piStack_28c) * -1.0;
  apiStack_1c8[0] = (int *)((1.0 / (float)piStack_28c) * (float)puStack_268);
  uStack_2b0 = (int **)0x53f7e5;
  thunk_FUN_00471943();
  ppiVar7 = apiStack_1c8;
  ppiVar11 = apiStack_188;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppiVar11 = *ppiVar7;
    ppiVar7 = ppiVar7 + 1;
    ppiVar11 = ppiVar11 + 1;
  }
  uStack_2b0 = apiStack_188;
  piVar2 = DAT_0070bca8;
  (**(code **)(*DAT_0070bca8 + 0x4c))();
  fVar14 = (float10)(**(code **)(*DAT_00707ce4 + 0x84))();
  FUN_00505df0(pvStack_bc,(float)fVar14,(float *)&uStack_270,(float *)&piStack_28c);
  piStack_298 = *(int **)((int)pvStack_bc + 0x34);
  pcStack_294 = *(char **)((int)pvStack_bc + 0x38);
  iStack_290 = *(undefined4 *)((int)pvStack_bc + 0x3c);
  if (DAT_0070bcb8 == '\0') {
    ppcVar8 = (char **)&DAT_00708338;
    ppcVar12 = &pcStack_214;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppcVar12 = *ppcVar8;
      ppcVar8 = ppcVar8 + 1;
      ppcVar12 = ppcVar12 + 1;
    }
    pcVar4 = (cls_0x496280 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
    cls_0x496280::meth_0x496280(pcVar4,(char)auStack_194,piVar2);
    ppcVar8 = &pcStack_214;
    puVar18 = auStack_194;
    pfVar17 = afStack_1e0 + 3;
    pcStack_214 = (char *)0x0;
    afStack_1e0[0] = -(((float)pcStack_294 + uStack_270) * (1.0 / (float)piStack_28c));
    thunk_FUN_00471943();
    pfVar9 = afStack_1e0;
    pfVar13 = (float *)(local_16c + 0xc);
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar13 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar13 = pfVar13 + 1;
    }
    (**(code **)(*DAT_0070bca8 + 0x4c))
              (DAT_0070bca8,"fogmatrix",local_16c + 0xc,pfVar17,puVar18,ppcVar8);
  }
  else {
    uVar19 = 0;
    uVar16 = 0;
    pcStack_288 = (char *)0x0;
    fStack_284 = 0.5;
    piStack_280 = (int *)0x3f800000;
    puStack_27c = (undefined4 *)0x40000000;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0,&pcStack_288,1);
    (**(code **)(*DAT_00707ce4 + 0x100))((int)&uStack_2b0 + 3,&stack0xfffffd4a,&stack0xfffffd4b);
    puStack_268 = (undefined *)((float)(uVar19 >> 0x18) * 0.003921569);
    fStack_264 = (float)(uVar16 >> 0x10 & 0xff) * 0.003921569;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,1,&puStack_268,1);
    (**(code **)(*DAT_00707ce4 + 0x94))();
    iVar3 = (**(code **)(*DAT_00707ce4 + 0x94))();
    piStack_298 = *(int **)(iVar3 + 0x178);
    ppiVar7 = &piStack_298;
    pcStack_294 = (char *)(1.0 / ((float)piStack_298 - *(float *)(iVar3 + 0x174)));
    iStack_290 = 0;
    piStack_28c = (int *)0x0;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,2,ppiVar7,1);
    fVar15 = 1.401298e-45;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,3,local_16c + 0x1c,1);
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,4,auStack_130,1);
    puStack_2ac = (undefined *)0x0;
    uStack_2b0 = ppiVar7;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0x28,&stack0xfffffd48,1);
    piStack_298 = (int *)(1.0 / fVar15);
    pcStack_294 = (char *)0x3bda740e;
    iStack_290 = 0x3b61fc78;
    iVar3 = (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0x29,&stack0xfffffd64,1);
  }
  if (*(uint *)((int)param_1 + 0x140) == 0) {
    cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x18,0);
  }
  else {
    puStack_208 = (undefined *)0x53fb18;
    FUN_005434e0(0,*(uint *)((int)param_1 + 0x140),(int)param_1 + 0x150);
  }
  if (DAT_0070bcb9 != '\0') {
    iVar3 = (**(code **)(*DAT_0070bca8 + 0x20))();
    if (iVar3 < 0) {
      handle_fatal_error("Gfx_RS_Base_HFog_FOW::SetMaterial - Failed to find valid technique (%x)\n"
                        );
    }
    else {
      DAT_0070bcb9 = '\0';
      DAT_0070bcb4 = uStack_174;
      DAT_0070bcbc = uStack_170;
    }
  }
  ExceptionList = pvStack_c;
  return iVar3;
}


#include "../include/Gfx_RS_Base_HFog_FOW.h"
