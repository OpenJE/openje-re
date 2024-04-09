#include "../include/Gfx_RS_B_EM.h"

Gfx_RS_B_EM * __thiscall Gfx_RS_B_EM::~Gfx_RS_B_EM(Gfx_RS_B_EM *this)

{
  undefined uVar1;
  undefined3 extraout_var;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  Gfx_RS_B_EM *pGVar2;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_B_EM__vftable_67c648_0067c648;
  local_4 = 0;
  pGVar2 = DAT_0070bbfc;
  if (DAT_0070bbfc != (Gfx_RS_B_EM *)0x0) {
    DAT_0070bbfc = (Gfx_RS_B_EM *)((int)&DAT_0070bbfc[-1].mbr_0xc + 3);
    pGVar2 = DAT_0070bbfc;
    if ((DAT_0070bbfc == (Gfx_RS_B_EM *)0x0) &&
       (pGVar2 = DAT_0070bc00, DAT_0070bc00 != (Gfx_RS_B_EM *)0x0)) {
      uVar1 = (*((DAT_0070bc00->Gfx_RenderStyle).vftptr_0x0)->virt_meth_0x6162e5_8)(DAT_0070bc00);
      pGVar2 = (Gfx_RS_B_EM *)CONCAT31(extraout_var,uVar1);
      DAT_0070bc00 = (Gfx_RS_B_EM *)0x0;
    }
  }
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar2;
}



undefined4 * __thiscall Gfx_RS_B_EM::virt_meth_0x536eb0(Gfx_RS_B_EM *this,byte param_1)

{
  ~Gfx_RS_B_EM(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Gfx_RenderStyle;
}



Gfx_RS_B_EM * __thiscall
Gfx_RS_B_EM::Gfx_RS_B_EM(Gfx_RS_B_EM *this,dword param_1,dword param_2,int param_3)

{
  this->mbr_0x4 = param_1;
  this->mbr_0x8 = param_2;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_B_EM__vftable_67c648_0067c648;
  this->mbr_0xc = (uint)(param_3 != 0);
  return this;
}



int __thiscall Gfx_RS_B_EM::Gfx_RS_B_EM(Gfx_RS_B_EM *this)

{
  int iVar1;
  char *pcVar2;
  int **ppiVar3;
  int **ppiVar4;
  char *pcStack_bc;
  undefined *puStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  char *pcStack_a4;
  undefined4 uStack_a0;
  int *piStack_9c;
  char *pcStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  char *pcStack_8c;
  undefined *puStack_88;
  int *piStack_84;
  undefined *puStack_80;
  dword dStack_7c;
  int *piStack_78;
  undefined *puStack_74;
  int *local_50 [20];
  
  DAT_0070bbfc = DAT_0070bbfc + 1;
  iVar1 = -0x7789f794;
  if (DAT_0070bc00 == (int *)0x0) {
    iVar1 = FUN_005d0650();
    if (iVar1 < 0) {
      FUN_00497120((byte *)"Gfx_RS_B_EM::Gfx_RS_B_EM - Failed to compile (%x)\n");
      pcVar2 = (char *)(**(code **)(*local_50[0] + 0xc))();
      handle_fatal_error(pcVar2);
    }
    else {
      iVar1 = (**(code **)(*DAT_0070bc00 + 0x10))();
      if (iVar1 < 0) {
        handle_fatal_error("Gfx_RS_B_EM::Gfx_RS_B_EM - Failed GetDesc (%x)\n");
      }
      iVar1 = (**(code **)(*DAT_0070bc00 + 0x2c))();
      if (iVar1 < 0) {
        puStack_74 = (undefined *)0x53c6bf;
        handle_fatal_error("Gfx_RS_B_EM::Gfx_RS_B_EM - Failed to initialize technique (%x)\n");
      }
      ppiVar3 = (int **)&DAT_00708338;
      ppiVar4 = local_50;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *ppiVar4 = *ppiVar3;
        ppiVar3 = ppiVar3 + 1;
        ppiVar4 = ppiVar4 + 1;
      }
      puStack_74 = &DAT_0067fc54;
      piStack_78 = DAT_0070bc00;
      dStack_7c = 0x53c6e7;
      (**(code **)(*DAT_0070bc00 + 0x34))();
      dStack_7c = this->mbr_0x8;
      puStack_80 = &DAT_0067fc4c;
      piStack_84 = DAT_0070bc00;
      puStack_88 = (undefined *)0x53c6fb;
      (**(code **)(*DAT_0070bc00 + 0x34))();
      puStack_88 = &stack0xffffff98;
      pcStack_8c = "TexMat";
      piStack_90 = DAT_0070bc00;
      uStack_94 = 0x53c710;
      (**(code **)(*DAT_0070bc00 + 0x4c))();
      uStack_94 = 0;
      pcStack_98 = "alphatest";
      piStack_9c = DAT_0070bc00;
      uStack_a0 = 0x53c722;
      (**(code **)(*DAT_0070bc00 + 0x34))();
      uStack_a0 = 0;
      pcStack_a4 = "bLighting";
      piStack_a8 = DAT_0070bc00;
      uStack_ac = 0x53c734;
      (**(code **)(*DAT_0070bc00 + 0x34))();
      uStack_ac = 0;
      puStack_b0 = &DAT_0067ea0c;
      (**(code **)(*DAT_0070bc00 + 0x34))(DAT_0070bc00);
      pcStack_bc = "DiffuseSource";
      (**(code **)(*DAT_0070bc00 + 0x34))(DAT_0070bc00);
      iVar1 = (**(code **)(*DAT_0070bc00 + 0x20))(DAT_0070bc00,DAT_0070bc0c,&puStack_b0);
      if (iVar1 < 0) {
        handle_fatal_error("Gfx_RS_B_EM::Create - Failed to find valid technique (%x)\n");
      }
      else {
        DAT_0070bc0c = 1;
        iVar1 = (**(code **)(*DAT_0070bc00 + 0x2c))(DAT_0070bc00,1);
        if ((cRam00000001 == 's') && (cRam00000002 == 'h')) {
          DAT_0070bc10 = 1;
        }
        DAT_0070bc14 = puStack_b0;
      }
    }
    if ((int *)pcStack_bc != (int *)0x0) {
      (**(code **)(*(int *)pcStack_bc + 8))(pcStack_bc);
    }
  }
  return iVar1;
}



int __thiscall Gfx_RS_B_EM::virt_meth_0x53c800(Gfx_RS_B_EM *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  cls_0x4960d0 *this_00;
  int iVar4;
  undefined4 *puVar5;
  undefined1 unaff_DI;
  undefined4 *puVar6;
  bool bVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  char cVar11;
  char cStack_106;
  char cStack_105;
  char *pcStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f0;
  dword local_ec;
  void *pvStack_e8;
  undefined auStack_e4 [16];
  uint uStack_d4;
  undefined4 auStack_bc [44];
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637426;
  local_c = ExceptionList;
  iVar2 = -0x7789f794;
  if (DAT_0070bc00 != (int *)0x0) {
    if (*(int *)((int)param_1 + 0x130) == 0) {
      ExceptionList = &local_c;
      cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,0);
      FUN_00497120((byte *)"Gfx_RS_B_EM: NULL Base Texture handle\n");
    }
    else {
      ExceptionList = &local_c;
      piVar3 = (int *)cls_0x55dc80::meth_0x51f160
                                (DAT_0070b200,(char)*(int *)((int)param_1 + 0x130),unaff_DI);
      if (piVar3 == (int *)0x0) {
        cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,0);
        FUN_004ab1c0((void *)0x0,(cls_0x50db20 *)&local_ec);
        local_4 = 0;
        FUN_00497120((byte *)"Gfx_RS_B_EM: Cannot find Base Texture %s\n");
        local_4 = 0xffffffff;
        if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_e8);
        }
      }
      else {
        (**(code **)(*piVar3 + 4))();
      }
    }
    if (*(int *)((int)param_1 + 0x138) == 0) {
      cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x1,0);
    }
    else {
      piVar3 = (int *)cls_0x55dc80::meth_0x51f160
                                (DAT_0070b200,(char)*(int *)((int)param_1 + 0x138),unaff_DI);
      if (piVar3 == (int *)0x0) {
        cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x1,0);
        FUN_004ab1c0((void *)0x0,(cls_0x50db20 *)&local_ec);
        local_4 = 1;
        FUN_00497120((byte *)"Gfx_RS_B_EM: Cannot find Cubic Texture %s\n");
        local_4 = 0xffffffff;
        if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_e8);
        }
      }
      else {
        (**(code **)(*piVar3 + 4))();
      }
    }
    (**(code **)(*DAT_0070bc00 + 0x34))();
    if (*(char *)((int)param_1 + 0xbc) != '\0') {
      (**(code **)(*DAT_00707ce4 + 0xf4))();
    }
    (**(code **)(*DAT_0070bc00 + 0x34))(DAT_0070bc00,"bLighting");
    bVar7 = false;
    if (*(char *)((int)param_1 + 0xbd) != '\0') {
      iVar2 = (**(code **)(*DAT_00707ce4 + 0x94))();
      bVar7 = *(char *)(iVar2 + 0x168) != '\0';
    }
    cVar11 = '\0';
    (**(code **)(*DAT_0070bc00 + 0x34))(DAT_0070bc00,&DAT_0067ea0c,bVar7);
    cls_0x4b6030::meth_0x4b6030
              ((cls_0x4b6030 *)param_1,&stack0xfffffed7,&stack0xfffffed6,(uint *)&stack0xfffffeec);
    (**(code **)(*DAT_0070bc00 + 0x34))(DAT_0070bc00,&DAT_0067fc54,this->mbr_0x4);
    if (cVar11 == '\0') {
      cVar11 = 'g';
      (**(code **)(*DAT_0070bc00 + 0x34))(DAT_0070bc00,&DAT_0067fd94,0);
    }
    else {
      cVar11 = 'g';
      (**(code **)(*DAT_0070bc00 + 0x34))(DAT_0070bc00,&DAT_0067fd94,3);
    }
    (**(code **)(*DAT_0070bc00 + 0x34))(DAT_0070bc00,&DAT_0067fc4c,this->mbr_0x8);
    if (cVar11 == '\0') {
      (**(code **)(*DAT_0070bc00 + 0x34))(DAT_0070bc00,&DAT_0067fd8c,0);
    }
    else {
      (**(code **)(*DAT_0070bc00 + 0x34))(DAT_0070bc00,&DAT_0067fd8c,3);
    }
    this_00 = (cls_0x4960d0 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
    cls_0x4960d0::meth_0x496250(this_00,(undefined4 *)&stack0xfffffedc);
    puVar10 = &stack0xfffffedc;
    uVar9 = 0;
    puVar8 = auStack_e4;
    local_ec = 0;
    iStack_f0 = 0;
    thunk_FUN_00471e4f();
    (**(code **)(*DAT_0070bc00 + 0x4c))(DAT_0070bc00,"TexMat",&iStack_f0,puVar8,uVar9,puVar10);
    puVar5 = (undefined4 *)((int)param_1 + 0x2c);
    puVar6 = auStack_bc;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    (**(code **)(*DAT_00708300 + 0xa8))(DAT_00708300,auStack_bc);
    if ((cStack_105 != '\0') || (cStack_106 != '\0')) {
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x3c,iStack_f0);
    }
    if (*(char *)((int)param_1 + 0xb9) == '\0') {
      iVar2 = 1;
    }
    else {
      iVar2 = 3;
    }
    iVar2 = cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x16,iVar2);
    uVar1 = *(uint *)((int)param_1 + 0x140);
    if (uVar1 == 0) {
      cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x18,0);
    }
    else {
      (**(code **)(*DAT_00707ce4 + 0x84))();
      FUN_005434e0(0,uVar1,(int)param_1 + 0x150);
    }
    if (DAT_0070bc11 != '\0') {
      do {
        iVar2 = (**(code **)(*DAT_0070bc00 + 0x20))();
        iVar4 = __stricmp(pcStack_100,"CubeEM");
        if ((iVar4 != 0) || ((*(uint *)(DAT_0070838c + 0x44) & 0x800) != 0)) {
          DAT_0070bc14 = uStack_f8;
          DAT_0070bc0c = uStack_fc;
          DAT_0070bc11 = '\0';
LAB_0053cc25:
          iVar2 = (**(code **)(*DAT_0070bc00 + 0x2c))();
          if (-1 < iVar2) {
            ExceptionList = local_c;
            return iVar2;
          }
          handle_fatal_error("Gfx_RS_B_EM::SetMaterial - Failed to set technique (%x)\n");
          break;
        }
        FUN_00497120((byte *)"Gfx_RS_B_EM: Device does not support Cube Textures\n");
        if (DAT_0070bc11 == '\0') goto LAB_0053cc25;
      } while (-1 < iVar2);
      handle_fatal_error("Gfx_RS_B_EM: Cannot find a valid technique for this device! (%x)\n");
    }
  }
  ExceptionList = local_c;
  return iVar2;
}


#include "../include/Gfx_RS_B_EM.h"
