#include "../include/Gfx_RS_Base_HeightFog.h"

Gfx_RS_Base_HeightFog * __thiscall
Gfx_RS_Base_HeightFog::~Gfx_RS_Base_HeightFog(Gfx_RS_Base_HeightFog *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  Gfx_RS_Base_HeightFog *pGVar2;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_Base_HeightFog__vftable_67c684_0067c684;
  local_4 = 0;
  pGVar2 = DAT_0070bc1c;
  if (DAT_0070bc1c != (Gfx_RS_Base_HeightFog *)0x0) {
    DAT_0070bc1c = (Gfx_RS_Base_HeightFog *)((int)&DAT_0070bc1c[-1].mbr_0xc + 3);
    pGVar2 = DAT_0070bc1c;
    if ((DAT_0070bc1c == (Gfx_RS_Base_HeightFog *)0x0) &&
       (pGVar2 = DAT_0070bc20, DAT_0070bc20 != (Gfx_RS_Base_HeightFog *)0x0)) {
      uVar1 = (*((DAT_0070bc20->Gfx_RenderStyle).vftptr_0x0)->virt_meth_0x6162e5_8)(DAT_0070bc20);
      pGVar2 = (Gfx_RS_Base_HeightFog *)CONCAT31(extraout_var,uVar1);
      DAT_0070bc20 = (Gfx_RS_Base_HeightFog *)0x0;
    }
  }
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar2;
}



undefined4 * __thiscall
Gfx_RS_Base_HeightFog::virt_meth_0x537010(Gfx_RS_Base_HeightFog *this,byte param_1)

{
  ~Gfx_RS_Base_HeightFog(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Gfx_RenderStyle;
}



Gfx_RS_Base_HeightFog * __thiscall
Gfx_RS_Base_HeightFog::Gfx_RS_Base_HeightFog
          (Gfx_RS_Base_HeightFog *this,dword param_1,dword param_2,dword param_3)

{
  this->mbr_0x4 = param_1;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_Base_HeightFog__vftable_67c684_0067c684;
  this->mbr_0x8 = param_2;
  this->mbr_0xc = param_3;
  return this;
}



int __thiscall
Gfx_RS_Base_HeightFog::SetMaterial(Gfx_RS_Base_HeightFog *this,void *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  cls_0x496280 *this_00;
  int iVar4;
  undefined1 unaff_BP;
  undefined4 *puVar5;
  dword *pdVar6;
  undefined4 *puVar7;
  dword *pdVar8;
  float10 fVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uStack_288;
  dword *pdStack_284;
  int *piStack_280;
  char *pcStack_27c;
  dword *pdStack_278;
  int **ppiVar12;
  int *piVar13;
  undefined4 uStack_264;
  int iStack_260;
  int *piStack_25c;
  char *pcStack_258;
  float fStack_254;
  dword *pdStack_250;
  undefined4 uStack_24c;
  int *piStack_248;
  undefined *puStack_244;
  undefined4 uStack_240;
  int *piStack_23c;
  undefined *puStack_238;
  dword dStack_234;
  int *piStack_218;
  undefined4 uStack_214;
  float fStack_210;
  int *piStack_20c;
  char *pcStack_208;
  dword dStack_204;
  int *piStack_200;
  char *pcStack_1fc;
  char *pcVar14;
  undefined4 uStack_1d0;
  undefined auStack_1cc [4];
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1bc;
  Gfx_RS_Base_HeightFog *local_1b8;
  undefined auStack_1ac [4];
  undefined4 uStack_1a8;
  float fStack_19c;
  undefined4 uStack_170;
  cls_0x4d8d70 local_16c;
  dword adStack_118 [19];
  undefined auStack_cc [84];
  void *pvStack_78;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063743b;
  pvStack_c = ExceptionList;
  local_1b8 = this;
  if (DAT_0070bc20 == (int *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_00497120((byte *)"Gfx_RS_Base_HeightFog::SetMaterial() failed - not created yet.");
    ExceptionList = pvStack_c;
    return -0x7789f794;
  }
  if (param_2 == 0) {
    ExceptionList = &pvStack_c;
    FUN_00497120((byte *)"Gfx_RS_Base_HeightFog: No HeightFog object specified!");
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
      FUN_004ab1c0((void *)0x0,(cls_0x50db20 *)&local_16c);
      local_4 = 0;
      FUN_00497120((byte *)"Gfx_RS_Base_HeightFog: Cannot find Base Texture %s");
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0(&local_16c);
    }
    else {
      (**(code **)(*piVar2 + 4))();
    }
  }
  if (*(int *)(param_2 + 0x44) == 0) {
    (**(code **)(*DAT_0070bc20 + 0x54))();
    pcVar14 = "Gfx_RS_Base_HeightFog: Height Fog map not created!";
  }
  else {
    iVar3 = cls_0x55dc80::meth_0x51f160(DAT_0070b200,(char)*(int *)(param_2 + 0x44),unaff_BP);
    if (iVar3 != 0) {
      (**(code **)(*DAT_0070bc20 + 0x54))();
      goto LAB_0053cffa;
    }
    (**(code **)(*DAT_0070bc20 + 0x54))();
    pcVar14 = "Gfx_RS_Base_HeightFog: Height Fog map not found!";
  }
  pcStack_1fc = (char *)0x53cff7;
  FUN_00497120((byte *)pcVar14);
LAB_0053cffa:
  pcStack_1fc = "bZEnable";
  piStack_200 = DAT_0070bc20;
  dStack_204 = 0x53d012;
  (**(code **)(*DAT_0070bc20 + 0x34))();
  dStack_204 = this->mbr_0xc;
  pcStack_208 = "alphatest";
  piStack_20c = DAT_0070bc20;
  fStack_210 = 7.697016e-39;
  (**(code **)(*DAT_0070bc20 + 0x34))();
  fStack_210 = 0.0;
  if (*(char *)((int)param_1 + 0xbc) != '\0') {
    fStack_210 = 7.697052e-39;
    cVar1 = (**(code **)(*DAT_00707ce4 + 0xf4))();
    fStack_210 = (float)(uint)(cVar1 != '\0');
  }
  uStack_214 = "bLighting";
  piStack_218 = DAT_0070bc20;
  (**(code **)(*DAT_0070bc20 + 0x34))();
  if (*(char *)((int)param_1 + 0xbd) != '\0') {
    (**(code **)(*DAT_00707ce4 + 0x94))();
  }
  (**(code **)(*DAT_0070bc20 + 0x34))();
  fStack_210 = (float)((uint)fStack_210 & 0xffffff00);
  uStack_214 = (char *)((uint)uStack_214 & 0xffffff);
  dStack_234 = 0x53d0b0;
  cls_0x4b6030::meth_0x4b6030
            ((cls_0x4b6030 *)param_1,(undefined *)&fStack_210,(undefined *)((int)&uStack_214 + 3),
             (uint *)&stack0xfffffe10);
  dStack_234 = 0x53d0ce;
  piVar2 = DAT_0070bc20;
  (**(code **)(*DAT_0070bc20 + 0x34))();
  dStack_234 = this->mbr_0x4;
  puStack_238 = &DAT_0067ea44;
  piStack_23c = DAT_0070bc20;
  uStack_240 = 7.697279e-39;
  (**(code **)(*DAT_0070bc20 + 0x34))();
  uStack_240 = (float)this->mbr_0x8;
  puStack_244 = &DAT_0067ea3c;
  piStack_248 = DAT_0070bc20;
  uStack_24c = (undefined4 *)0x53d0f6;
  (**(code **)(*DAT_0070bc20 + 0x34))();
  uStack_24c = &uStack_170;
  puVar5 = (undefined4 *)((int)param_1 + 0x2c);
  puVar7 = &uStack_170;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  pdStack_250 = DAT_00708300;
  fStack_254 = 7.697362e-39;
  (**(code **)(*DAT_00708300 + 0xa8))();
  if (((char)piStack_23c == '\0') && (uStack_240._3_1_ == '\0')) {
    fStack_254 = 2.802597e-45;
    pcStack_258 = "TFcop";
    piStack_25c = DAT_0070bc20;
    iStack_260 = 0x53d13f;
    (**(code **)(*DAT_0070bc20 + 0x34))();
    iStack_260 = 2;
    uStack_264 = "TFaop";
    piVar13 = DAT_0070bc20;
    (**(code **)(*DAT_0070bc20 + 0x34))();
  }
  else {
    fStack_254 = (float)((-(uint)((char)piStack_23c != '\0') & 3) + 2);
    pcStack_258 = "TFcop";
    piStack_25c = DAT_0070bc20;
    iStack_260 = 0x53d16f;
    (**(code **)(*DAT_0070bc20 + 0x34))();
    iStack_260 = (uint)(uStack_24c._3_1_ != '\0') * 2 + 2;
    uStack_264 = "TFaop";
    piVar13 = DAT_0070bc20;
    (**(code **)(*DAT_0070bc20 + 0x34))();
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x3c,dStack_234);
  }
  if (*(char *)((int)param_1 + 0xb9) == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = 3;
  }
  iVar3 = cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x16,iVar3);
  fVar9 = (float10)(**(code **)(*DAT_00707ce4 + 0x84))();
  piStack_23c = (int *)(float)fVar9;
  pdStack_278 = (dword *)0x53d1ed;
  FUN_00505df0(pvStack_78,piStack_23c,(float *)&stack0xfffffdd0,(float *)&uStack_240);
  uStack_24c = *(undefined4 **)((int)pvStack_78 + 0x34);
  piStack_248 = *(int **)((int)pvStack_78 + 0x38);
  puStack_244 = *(undefined **)((int)pvStack_78 + 0x3c);
  if (DAT_0070bc30 == '\0') {
    puVar5 = &DAT_00708338;
    puVar7 = &uStack_1d0;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    this_00 = (cls_0x496280 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
    cls_0x496280::meth_0x496280(this_00,(char)auStack_cc,piVar13);
    fStack_1bc = 1.0 / uStack_240;
    uStack_1d0 = 0;
    uStack_1a8 = 0;
    fStack_19c = -(((float)piStack_248 + (float)piVar2) * fStack_1bc);
    pdStack_278 = (dword *)0x53d475;
    thunk_FUN_00471943();
    pdVar6 = &local_16c.mbr_0x14;
    pdVar8 = adStack_118;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pdVar8 = *pdVar6;
      pdVar6 = pdVar6 + 1;
      pdVar8 = pdVar8 + 1;
    }
    pdStack_278 = adStack_118;
    pcStack_27c = "fogmatrix";
    piStack_280 = DAT_0070bc20;
    pdStack_284 = (dword *)0x53d4a2;
    (**(code **)(*DAT_0070bc20 + 0x4c))();
  }
  else {
    ppiVar12 = &piStack_20c;
    piStack_20c = (int *)0x0;
    pcStack_208 = (char *)0x3f000000;
    dStack_204 = 0x3f800000;
    piStack_200 = (int *)0x40000000;
    pdStack_278 = DAT_00708300;
    pcStack_27c = (char *)0x53d246;
    (**(code **)(*DAT_00708300 + 0x13c))();
    pcStack_27c = (char *)((int)&uStack_264 + 1);
    piStack_280 = (int *)((int)&uStack_264 + 3);
    pdStack_284 = (dword *)((int)&uStack_264 + 2);
    uStack_288 = 0x53d263;
    (**(code **)(*DAT_00707ce4 + 0x100))();
    uStack_288 = 1;
    piStack_20c = (int *)0x3f800000;
    piStack_218 = (int *)((float)((uint)ppiVar12 >> 0x10 & 0xff) * 0.003921569);
    uStack_214 = (char *)((float)((uint)ppiVar12 >> 0x18) * 0.003921569);
    fStack_210 = (float)((uint)ppiVar12 >> 8 & 0xff) * 0.003921569;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,1,&piStack_218);
    (**(code **)(*DAT_00707ce4 + 0x94))();
    iVar3 = (**(code **)(*DAT_00707ce4 + 0x94))();
    piStack_248 = *(int **)(iVar3 + 0x178);
    piVar2 = (int *)0x2;
    puStack_244 = (undefined *)(1.0 / ((float)piStack_248 - *(float *)(iVar3 + 0x174)));
    uStack_240 = 0.0;
    piStack_23c = (int *)0x0;
    pdVar6 = DAT_00708300;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,2,&piStack_248,1);
    uVar11 = 1;
    puVar10 = auStack_1cc;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,3,puVar10,1);
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,4,auStack_1ac,1);
    pcStack_27c = (char *)0x0;
    uStack_288 = uVar11;
    pdStack_284 = pdVar6;
    piStack_280 = piVar2;
    (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0x28,&uStack_288,1);
    fStack_254 = 1.0 / (float)puVar10;
    pcStack_258 = (char *)0x3f800000;
    pdStack_250 = (dword *)0x3bda740e;
    uStack_24c = (undefined4 *)0x3b61fc78;
    iVar3 = (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0x29,&pcStack_258,1);
  }
  if (*(uint *)((int)param_1 + 0x140) == 0) {
    cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x18,0);
  }
  else {
    pcStack_1fc = (char *)0x53d4c4;
    FUN_005434e0(0,*(uint *)((int)param_1 + 0x140),(int)param_1 + 0x150);
  }
  if (DAT_0070bc31 != '\0') {
    iVar3 = (**(code **)(*DAT_0070bc20 + 0x20))();
    if (iVar3 < 0) {
      handle_fatal_error(
                        "Gfx_RS_Base_HeightFog::SetMaterial - Failed to find valid technique (%x)\n"
                        );
    }
    else {
      DAT_0070bc31 = '\0';
      DAT_0070bc2c = uStack_1c8;
      DAT_0070bc34 = uStack_1c4;
    }
  }
  ExceptionList = pvStack_c;
  return iVar3;
}


#include "../include/Gfx_RS_Base_HeightFog.h"
