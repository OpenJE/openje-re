#include "../include/cls_0x490150.h"

void __thiscall cls_0x490150::meth_0x490150(cls_0x490150 *this)

{
  DAT_007083cc = DAT_007083cc + 1;
  (**(code **)(*DAT_00708300 + 0x14c))
            (DAT_00708300,0,*(undefined4 *)(this->mbr_0x34 + 4),
             *(undefined4 *)(this->mbr_0x34 + 0x10));
  (**(code **)(*DAT_00708300 + 0x130))(DAT_00708300,*(undefined4 *)(this->mbr_0x34 + 0xc));
  DAT_007083d4 = DAT_007083d4 + 1;
  DAT_007083b4 = DAT_007083b4 + 2;
  (**(code **)(*DAT_00708300 + 0x118))(DAT_00708300,5,0,2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0049088b) */
/* WARNING: Removing unreachable block (ram,0x004908b5) */
/* WARNING: Removing unreachable block (ram,0x004908d9) */

void __thiscall cls_0x490150::meth_0x490510(cls_0x490150 *this,int *param_1)

{
  float fVar1;
  cls_0x4960d0 *this_00;
  float fVar2;
  float fVar3;
  bool bVar4;
  cls_0x4b74a0 *pcVar5;
  float **ppfVar6;
  int iVar7;
  int *piVar8;
  float *unaff_EBX;
  int iVar9;
  undefined4 *puVar10;
  cls_0x506140 *this_01;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float **ppfVar14;
  int *piVar15;
  undefined4 *puVar16;
  bool bVar17;
  float10 fVar18;
  int *unaff_retaddr;
  int *in_stack_00000008;
  undefined *puVar19;
  undefined4 uVar20;
  undefined *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fStack_3f0;
  undefined4 *puStack_3ec;
  float *pfStack_3e8;
  cls_0x4b74a0 *pcStack_3e4;
  float *pfStack_3e0;
  float **ppfStack_3dc;
  float fStack_3d8;
  int iStack_3d0;
  int *piStack_3cc;
  float fStack_3c8;
  cls_0x490150 *local_3c4;
  undefined4 *puStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  undefined4 *puStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  undefined auStack_3a4 [12];
  float fStack_398;
  undefined4 uStack_394;
  float fStack_390;
  undefined4 uStack_388;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  undefined4 uStack_374;
  float fStack_370;
  undefined auStack_36c [4];
  undefined4 uStack_368;
  float fStack_364;
  undefined4 uStack_360;
  float fStack_35c;
  float *pfStack_354;
  float fStack_350;
  dword dStack_34c;
  dword dStack_348;
  dword dStack_344;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  undefined4 uStack_334;
  float *pfStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  float afStack_320 [11];
  float afStack_2f4 [4];
  float fStack_2e4;
  float afStack_2c8 [5];
  float fStack_2b4;
  float fStack_2a0;
  undefined4 auStack_288 [3];
  undefined auStack_27c [24];
  float fStack_264;
  float afStack_260 [19];
  undefined4 auStack_214 [13];
  float afStack_1e0 [21];
  undefined auStack_18c [4];
  undefined4 auStack_188 [8];
  undefined auStack_168 [76];
  undefined auStack_11c [8];
  undefined4 auStack_114 [8];
  undefined auStack_f4 [108];
  undefined4 auStack_88 [16];
  undefined auStack_48 [64];
  int iStack_8;
  int iStack_4;
  
  iVar7 = *in_stack_00000008;
  uVar24 = *(undefined4 *)(iVar7 + 0x14);
  local_3c4 = this;
  (**(code **)(*DAT_00708300 + 0x130))(DAT_00708300,uVar24);
  uStack_368 = *(undefined4 *)(iVar7 + 0x60);
  fStack_364 = *(float *)(iVar7 + 100);
  uStack_360 = *(undefined4 *)(iVar7 + 0x68);
  fVar18 = (float10)(**(code **)(*DAT_00707ce4 + 0x154))();
  fStack_350 = (float)(fVar18 * (float10)fStack_364);
  fVar18 = (float10)(**(code **)(*DAT_00707ce4 + 0x15c))();
  ppfVar14 = (float **)in_stack_00000008[2];
  this_01 = (cls_0x506140 *)0x0;
  local_3c4 = (cls_0x490150 *)(float)(fVar18 * (float10)fStack_364);
  fStack_398 = 4.624285e-44;
  if (ppfVar14 == (float **)0x0) {
    ppfVar6 = (float **)0x0;
  }
  else {
    ppfVar6 = (float **)*ppfVar14;
  }
  if (ppfVar6 != ppfVar14) {
    do {
      if (((char)param_1 == '\0') || (*(char *)((int)ppfVar6 + 0x27) != '\0')) {
        pcVar5 = (cls_0x4b74a0 *)
                 FUN_006165e0((cls_0x616328 *)ppfVar6[5],0,&Gfx_BasePacketData::RTTI_Type_Descriptor
                              ,&Gfx_PacketData::RTTI_Type_Descriptor,0);
        bVar17 = false;
        pcStack_3e4 = pcVar5;
        if (pcVar5 == (cls_0x4b74a0 *)0x0) {
          pfVar13 = (float *)&DAT_00708338;
          pfVar11 = afStack_320;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar11 = *pfVar13;
            pfVar13 = pfVar13 + 1;
            pfVar11 = pfVar11 + 1;
          }
          pfStack_3e0 = afStack_320;
          cls_0x490060::meth_0x503360((cls_0x490060 *)&DAT_007082f8,0x100,&DAT_00708338);
LAB_00490791:
          FUN_00506290();
        }
        else {
          bVar17 = pcVar5->field_0x4 != '\0';
          if (bVar17) {
            (**(code **)(*DAT_00707ce4 + 0x104))(auStack_36c);
            (**(code **)(*DAT_00707ce4 + 0xfc))(&pcVar5->field_0x8);
          }
          fVar1 = (float)pcVar5->mbr_0x18;
          fStack_370 = *(float *)&pcVar5->field_0x1c;
          pfVar13 = (float *)&DAT_00708338;
          pfVar11 = afStack_2c8;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar11 = *pfVar13;
            pfVar13 = pfVar13 + 1;
            pfVar11 = pfVar11 + 1;
          }
          fStack_390 = *(float *)&pcVar5->field_0x20;
          bVar4 = false;
          if (((NAN(fVar1) == (fVar1 == 1.0)) || (NAN(fStack_370) == (fStack_370 == 1.0))) ||
             (NAN(fStack_390) == (fStack_390 == 1.0))) {
            afStack_2c8[0] = fVar1;
            fStack_2b4 = fStack_370;
            fStack_2a0 = fStack_390;
            bVar4 = true;
          }
          pfStack_3e0 = *(float **)&pcVar5->field_0x14;
          pfVar13 = afStack_320;
          iVar7 = 0x10;
          pfVar11 = pfStack_3e0;
          if (*(int *)&pcVar5->field_0x10 == 0) {
            pfStack_3e0 = afStack_320;
            pfVar11 = (float *)&DAT_00708338;
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
              *pfVar13 = *pfVar11;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
            }
            if (bVar4) {
              pfVar13 = afStack_2c8;
              pfVar11 = afStack_320;
              for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                *pfVar11 = *pfVar13;
                pfVar13 = pfVar13 + 1;
                pfVar11 = pfVar11 + 1;
              }
            }
          }
          else {
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
              *pfVar13 = *pfVar11;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
            }
            if (bVar4) {
              unaff_EBX = afStack_320;
              thunk_FUN_00471943();
              puStack_3ec = &uStack_32c;
            }
          }
          cls_0x490060::meth_0x503360((cls_0x490060 *)&DAT_007082f8,0x100,afStack_320);
          if (pcVar5->mbr_0x40 == 0) {
            if (*(int *)&pcVar5->field_0x3c == 0) goto LAB_00490791;
            FUN_005062d0((int)&pcVar5->field_0x34,(undefined4 *)0x0,0);
          }
        }
        pfStack_354 = ppfVar6[2];
        pfStack_3e8 = ppfVar6[3];
        if (pfStack_3e8 == (float *)0x0) {
          pfStack_3e8 = pfStack_354 + 10;
        }
        fStack_35c = pfStack_354[0xf];
        DAT_007083b8 = DAT_007083b8 + (int)pfStack_354[7];
        iStack_3d0 = iStack_4 * 0xc;
        puStack_3b4 = *(undefined4 **)(iStack_3d0 + (int)pfStack_3e8[2] + 4);
        if (puStack_3b4 != (undefined4 *)0x0) {
          puStack_3b4 = (undefined4 *)*puStack_3b4;
        }
        pcVar5 = pcStack_3e4;
        uVar20 = uVar24;
        if (puStack_3b4 != *(undefined4 **)(iStack_3d0 + (int)pfStack_3e8[2] + 4)) {
          do {
            iVar9 = puStack_3b4[2] * 0x34;
            iVar7 = *(int *)(iVar9 + (int)fStack_35c);
            puVar10 = (undefined4 *)(iVar9 + (int)fStack_35c);
            uVar24 = uVar20;
            if ((iVar7 == -1) || (*(char *)(iVar7 + (int)ppfVar6[6]) != '\0')) {
              fStack_3c8 = (float)(puStack_3b4[2] * 0x244 + (int)pfStack_3e8[3]);
              fStack_3f0 = *(float *)((int)fStack_3c8 + 0x20);
              if (*(char *)((int)fStack_3c8 + 0x240) != '\0') {
                if ((char)param_1 != '\0') {
                  pfVar13 = ppfVar6[0xb];
                  fStack_3f0 = 3.783506e-44;
                  fStack_340 = (float)((uint)pfVar13 >> 0x10 & 0xff) * 0.003921569;
                  fStack_33c = (float)((uint)pfVar13 >> 8 & 0xff) * 0.003921569;
                  puStack_3ec = (undefined4 *)((uint)pfVar13 & 0xff);
                  fStack_338 = (float)(int)puStack_3ec * 0.003921569;
                  uStack_334 = 0x3f800000;
                  uStack_32c = 0;
                  pfStack_330 = ppfVar6[10];
                  uStack_328 = 0x3f000000;
                  uStack_324 = 0x3f800000;
                  this_00 = *(cls_0x4960d0 **)(*piStack_3cc + 0x15c);
                  dStack_34c = this_00->mbr_0x34;
                  dStack_348 = this_00->mbr_0x38;
                  dStack_344 = this_00->mbr_0x3c;
                  cls_0x4960d0::meth_0x496250(this_00,auStack_188);
                  cls_0x4960d0::meth_0x4962c0(this_00,auStack_88);
                  thunk_FUN_00471943();
                  puVar12 = auStack_214;
                  puVar16 = auStack_114;
                  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar16 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar16 = puVar16 + 1;
                  }
                  thunk_FUN_00471943();
                  pfVar13 = afStack_1e0;
                  pfVar11 = afStack_260;
                  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *pfVar11 = *pfVar13;
                    pfVar13 = pfVar13 + 1;
                    pfVar11 = pfVar11 + 1;
                  }
                  pfVar13 = afStack_260;
                  pfVar11 = afStack_260;
                  thunk_FUN_00471b8c();
                  uVar22 = 0;
                  puVar21 = auStack_168;
                  uVar23 = uVar20;
                  uVar24 = uVar20;
                  thunk_FUN_00471e4f();
                  puVar19 = auStack_f4;
                  thunk_FUN_00471b8c();
                  (**(code **)(*DAT_00708300 + 0x13c))
                            (DAT_00708300,0,auStack_27c,4,puVar19,uVar20,puVar21,uVar22,uVar23,
                             pfVar11,pfVar13);
                  (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,4,auStack_18c,4);
                  (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,8,auStack_11c,4);
                  (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0xc,auStack_3a4,1);
                  (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0xd,auStack_3a4,1);
                  (**(code **)(*DAT_00708300 + 0x13c))(DAT_00708300,0xe,&iStack_3d0,1);
                  pcVar5 = pcStack_3e4;
                }
                fVar1 = fStack_3c8;
                if (fStack_398 != fStack_3f0) {
                  this_01 = (cls_0x506140 *)(&PTR_DAT_006fbfc8)[(int)fStack_3f0];
                  fStack_398 = fStack_3f0;
                }
                if ((pcVar5 != (cls_0x4b74a0 *)0x0) && (pcVar5->mbr_0x40 != 0)) {
                  fStack_380 = *(float *)&pcVar5->field_0x24;
                  fStack_37c = *(float *)&pcVar5->field_0x28;
                  fStack_378 = *(float *)&pcVar5->field_0x2c;
                  uStack_374 = *(undefined4 *)&pcVar5->field_0x30;
                  if ((0x1b < (int)fStack_398) && ((int)fStack_398 < 0x20)) {
                    fStack_378 = 0.0;
                    fStack_37c = 0.0;
                    fStack_380 = 0.0;
                  }
                  iVar7 = cls_0x4b74a0::meth_0x4b74a0(pcVar5,(char)*puVar10,(char)unaff_EBX);
                  if (iVar7 == 0) {
                    if (((NAN(fStack_380) != (fStack_380 == 0.0)) &&
                        (NAN(fStack_37c) != (fStack_37c == 0.0))) &&
                       (NAN(fStack_378) != (fStack_378 == 0.0))) {
                      FUN_00506290();
                      goto LAB_00490ba3;
                    }
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = cls_0x4b74a0::meth_0x4b74d0(pcVar5,(char)*puVar10,(char)unaff_EBX);
                  }
                  FUN_005062d0(iVar7,&fStack_380,0);
                }
LAB_00490ba3:
                if (*(char *)(piStack_3cc + 0x10) == '\0') {
LAB_00490bc1:
                  uStack_388 = uStack_388 & 0xffffff00;
                }
                else {
                  uStack_388 = CONCAT31(uStack_388._1_3_,1);
                  if (*(char *)((int)ppfVar6 + 0x25) == '\0') goto LAB_00490bc1;
                }
                if (*(char *)(piStack_3cc + 0x12) == '\0') {
LAB_00490be0:
                  uStack_394 = uStack_394 & 0xffffff00;
                }
                else {
                  uStack_394 = CONCAT31(uStack_394._1_3_,1);
                  if (*(char *)((int)ppfVar6 + 0x26) == '\0') goto LAB_00490be0;
                }
                if (this_01 != (cls_0x506140 *)0x0) {
                  cls_0x506140::meth_0x506140
                            (this_01,fVar1,'\0',(char)uStack_394,(char)uStack_388,piStack_3cc[0x11])
                  ;
                  fStack_3f0 = 1.401298e-45;
                  if ((*(byte *)(puVar10 + 9) & 1) == 0) {
                    puStack_3ec = (undefined4 *)puVar10[10];
                    uVar20 = puVar10[8];
                    iVar7 = puVar10[0xc];
                    (**(code **)(**(int **)(&this_01->field_0x0 + this_01->mbr_0x14 * 4) + 0x2c))
                              (&fStack_3f0);
                    ppfVar14 = (float **)0x0;
                    if (ppfVar6 != (float **)0x0) {
                      do {
                        (**(code **)(**(int **)(&this_01->field_0x0 + this_01->mbr_0x14 * 4) + 0x34)
                        )(ppfVar14);
                        DAT_007083b4 = DAT_007083b4 + iVar7;
                        DAT_007083d4 = DAT_007083d4 + 1;
                        (**(code **)(*DAT_00708300 + 0x118))
                                  (DAT_00708300,uVar20,*(int *)(iStack_8 + 0x28) + (int)ppfVar6,
                                   iVar7);
                        ppfVar14 = (float **)((int)ppfVar14 + 1);
                      } while (ppfVar14 < ppfVar6);
                    }
                    piVar8 = *(int **)(&this_01->field_0x0 + this_01->mbr_0x14 * 4);
                  }
                  else {
                    puStack_3ec = (undefined4 *)puVar10[8];
                    fStack_3c8 = (float)puVar10[0xb];
                    iVar7 = puVar10[0xc];
                    (**(code **)(**(int **)(&this_01->field_0x0 + this_01->mbr_0x14 * 4) + 0x2c))
                              (&fStack_3f0);
                    ppfVar14 = (float **)0x0;
                    if (ppfVar6 != (float **)0x0) {
                      do {
                        (**(code **)(**(int **)(&this_01->field_0x0 + this_01->mbr_0x14 * 4) + 0x34)
                        )(ppfVar14);
                        DAT_007083b4 = DAT_007083b4 + iVar7;
                        DAT_007083d8 = DAT_007083d8 + 1;
                        (**(code **)(*DAT_00708300 + 0x11c))
                                  (DAT_00708300,ppfVar6,0,*(undefined4 *)((int)fStack_35c + 0x1c),
                                   *(int *)(iStack_8 + 0x2c) + iStack_3d0,iVar7);
                        ppfVar14 = (float **)((int)ppfVar14 + 1);
                      } while (ppfVar14 < ppfVar6);
                    }
                    piVar8 = *(int **)(&this_01->field_0x0 + this_01->mbr_0x14 * 4);
                  }
                  (**(code **)(*piVar8 + 0x30))();
                  pcVar5 = pcStack_3e4;
                }
              }
            }
            puStack_3b4 = (undefined4 *)*puStack_3b4;
            uVar20 = uVar24;
          } while (puStack_3b4 != *(undefined4 **)((int)pfStack_3e8[2] + 4 + iStack_3d0));
        }
        if (((*(char *)(piStack_3cc + 0xe) != '\0') && (iStack_4 == 0)) &&
           (*(char *)(ppfVar6 + 9) != '\0')) {
          iVar7 = *unaff_retaddr;
          puStack_3ec = *(undefined4 **)(iVar7 + 0x18);
          puVar10 = &DAT_00708338;
          puVar12 = auStack_288;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          if ((pcStack_3e4 != (cls_0x4b74a0 *)0x0) && (*(int *)&pcStack_3e4->field_0x10 != 0)) {
            puVar10 = *(undefined4 **)&pcStack_3e4->field_0x14;
            puVar12 = auStack_288;
            for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar12 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            }
          }
          puVar10 = auStack_288;
          puVar21 = auStack_48;
          thunk_FUN_00471e4f();
          fVar1 = fStack_3f0;
          fStack_3ac = afStack_260[0] + fStack_370;
          fStack_3a8 = afStack_260[1];
          piVar8 = *(int **)((int)fStack_3f0 + 0x38);
          fStack_3b0 = fStack_264;
          pfStack_3e8 = (float *)0x0;
          pcStack_3e4 = (cls_0x4b74a0 *)0x0;
          pfStack_3e0 = (float *)0x0;
          ppfVar6 = (float **)0x0;
          if ((piVar8 != (int *)0x0) && (piVar15 = (int *)*piVar8, piVar15 != piVar8)) {
            do {
              iVar9 = piVar15[2];
              fStack_2e4 = *(float *)(iVar9 + 0x3c);
              ppfStack_3dc = *(float ***)(iVar9 + 0x98);
              fStack_390 = *(float *)(iVar9 + 0xa4);
              fStack_364 = *(float *)(iVar9 + 0xa0);
              piStack_3cc = (int *)(*(float *)(iVar9 + 0x34) - fStack_3b0);
              fStack_398 = *(float *)(iVar9 + 0xa8);
              fVar2 = *(float *)(iVar9 + 0x38) - fStack_3ac;
              local_3c4 = (cls_0x490150 *)(fStack_2e4 - fStack_3a8);
              fVar3 = SQRT((float)piStack_3cc * (float)piStack_3cc +
                           fVar2 * fVar2 + (float)local_3c4 * (float)local_3c4);
              if (((NAN(fStack_390) == (fStack_390 == 0.0)) ||
                  (NAN(fStack_398) == (fStack_398 == 0.0))) &&
                 (fVar3 < (float)ppfStack_3dc == (NAN(fVar3) || NAN((float)ppfStack_3dc)))) {
                FUN_00497120((byte *)"Light out of range!\n");
              }
              else {
                ppfVar6 = (float **)((int)ppfVar6 + 1);
                fVar3 = 1.0 / ((1.0 / ((fStack_398 * fVar3 + fStack_390) * fVar3 + fStack_364)) *
                              fVar3);
                fStack_3c8 = fVar2 * fVar3;
                local_3c4 = (cls_0x490150 *)((float)local_3c4 * fVar3);
                pfStack_3e8 = (float *)((float)piStack_3cc * fVar3 + (float)pfStack_3e8);
                pcStack_3e4 = (cls_0x4b74a0 *)(fStack_3c8 + (float)pcStack_3e4);
                pfStack_3e0 = (float *)((float)local_3c4 + (float)pfStack_3e0);
              }
              piVar15 = (int *)*piVar15;
            } while (piVar15 != (int *)*(int *)((int)fVar1 + 0x38));
            if (ppfVar6 != (float **)0x0) {
              fVar1 = (float)(int)ppfVar6;
              if ((int)ppfVar6 < 0) {
                fVar1 = fVar1 + 4.294967e+09;
              }
              fVar1 = 1.0 / fVar1;
              pfStack_3e8 = (float *)((float)pfStack_3e8 * fVar1);
              pcStack_3e4 = (cls_0x4b74a0 *)((float)pcStack_3e4 * fVar1);
              pfStack_3e0 = (float *)((float)pfStack_3e0 * fVar1);
              ppfStack_3dc = ppfVar6;
            }
          }
          thunk_FUN_0047103a();
          local_3c4 = (cls_0x490150 *)((float)local_3c4 * fStack_3d8 + fStack_3b8);
          puStack_3c0 = (undefined4 *)
                        ((float)puStack_3c0 * fStack_3d8 + fStack_364 + (float)puStack_3b4);
          fStack_3bc = fStack_3bc * fStack_3d8 + fStack_3b0;
          if ((float)puStack_3c0 < (float)puStack_3b4 != ((float)puStack_3c0 == (float)puStack_3b4))
          {
            puStack_3c0 = puStack_3b4;
          }
          thunk_FUN_0047134a();
          FUN_004abed0(*(void **)(puVar21 + 0x20),*(int *)(iVar7 + 0x44),*(int *)(iVar7 + 0x50),
                       *(int *)(iVar7 + 0x4c),*(int *)(iVar7 + 0xc),(int)puVar10,afStack_2f4,
                       *(int *)(iVar7 + 0x48),*(int *)(puVar21 + 0x18));
        }
        if (bVar17) {
          (**(code **)(*DAT_00707ce4 + 0xfc))(auStack_36c);
        }
      }
      ppfVar6 = (float **)*ppfVar6;
    } while (ppfVar6 != (float **)unaff_retaddr[2]);
  }
  return;
}



void __thiscall cls_0x490150::meth_0x4911b0(cls_0x490150 *this,int param_1)

{
  char cVar1;
  int **ppiVar2;
  int iVar3;
  cls_0x5053c0 *this_00;
  int *piVar4;
  cls_0x505540 *pcVar5;
  int **ppiVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int unaff_EBX;
  int **ppiVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_14;
  undefined4 *puStack_10;
  undefined4 local_c;
  cls_0x505540 *local_8;
  undefined auStack_4 [4];
  
  ppiVar12 = *(int ***)(int **)this->mbr_0x8;
  if (ppiVar12 != (int **)this->mbr_0x8) {
    do {
      if (ppiVar12[param_1 + 8] != (int *)0x0) {
        cls_0x506ae0::meth_0x506ae0(DAT_00707ce0,ppiVar12[4][1]);
        meth_0x490510(this,(int *)param_1);
      }
      if (*(char *)((int)ppiVar12 + 0x41) == '\0') {
        ppiVar2 = (int **)ppiVar12[2];
        if (*(char *)((int)ppiVar2 + 0x41) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x41);
          ppiVar12 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x41);
            ppiVar12 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar12[1] + 0x41);
          ppiVar6 = (int **)ppiVar12[1];
          ppiVar2 = ppiVar12;
          while ((ppiVar12 = ppiVar6, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar12[2]))) {
            cVar1 = *(char *)((int)ppiVar12[1] + 0x41);
            ppiVar6 = (int **)ppiVar12[1];
            ppiVar2 = ppiVar12;
          }
        }
      }
    } while (ppiVar12 != (int **)this->mbr_0x8);
  }
  puVar13 = (undefined4 *)this->mbr_0x14;
  if (puVar13 == (undefined4 *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    local_20 = (undefined4 *)*puVar13;
  }
  if (local_20 != puVar13) {
    local_8 = *(cls_0x505540 **)&DAT_00707ce0[1].field_0xc;
    do {
      if (local_20[param_1 + 6] != 0) {
        if ((int *)local_20[4] == (int *)0x0) {
          local_1c = 0;
        }
        else {
          local_1c = *(int *)local_20[4];
        }
        uVar11 = *(uint *)(*(int *)(local_1c + 8) + 0x18);
        iVar3 = *(int *)(*(int *)(local_1c + 8) + 0x1c);
        this_00 = *(cls_0x5053c0 **)&DAT_00707ce0[1].field_0x4;
        local_14 = (undefined4 *)0x0;
        iVar7 = cls_0x5053c0::meth_0x505400(this_00,iVar3,uVar11,&local_14,&local_c,'\0');
        if (-1 < iVar7) {
          uVar9 = uVar11 * iVar3;
          puVar13 = *(undefined4 **)(*(int *)(local_1c + 8) + 0xc);
          puVar14 = local_14;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined *)puVar14 = *(undefined *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          (**(code **)(*(int *)this_00->mbr_0x4 + 0x30))((int *)this_00->mbr_0x4);
          DAT_007083cc = DAT_007083cc + 1;
          (**(code **)(*DAT_00708300 + 0x14c))(DAT_00708300,0,this_00->mbr_0x4,uVar11);
          pcVar5 = local_8;
          iVar3 = *(int *)(local_1c + 8);
          puVar13 = *(undefined4 **)(iVar3 + 0x10);
          if (puVar13 == (undefined4 *)0x0) {
            local_20[0xd] = 0;
          }
          else {
            iVar7 = *(int *)(iVar3 + 0x24);
            iVar3 = *(int *)(iVar3 + 0x20);
            puStack_10 = (undefined4 *)0x0;
            iVar8 = cls_0x505540::meth_0x505540(local_8,iVar7,&puStack_10,auStack_4,'\0');
            if (-1 < iVar8) {
              uVar10 = iVar3 * iVar7;
              puVar14 = puStack_10;
              for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar14 = puVar14 + 1;
              }
              for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined *)puVar14 = *(undefined *)puVar13;
                puVar13 = (undefined4 *)((int)puVar13 + 1);
                puVar14 = (undefined4 *)((int)puVar14 + 1);
              }
              piVar4 = (int *)pcVar5->mbr_0x4;
              (**(code **)(*piVar4 + 0x30))(piVar4);
              *(cls_0x505540 **)(unaff_EBX + 0x34) = local_8;
              (**(code **)(*DAT_00708300 + 0x154))(DAT_00708300,pcVar5->mbr_0x4,puStack_10);
            }
          }
          local_20[0xc] = local_c;
          meth_0x490510(this,(int *)param_1);
        }
      }
      local_20 = (undefined4 *)*local_20;
    } while (local_20 != (undefined4 *)this->mbr_0x14);
  }
  return;
}



void __thiscall cls_0x490150::meth_0x4913e0(cls_0x490150 *this,int *param_1)

{
  char cVar1;
  int **ppiVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  void *pvVar6;
  dword dVar7;
  undefined4 unaff_EBP;
  int **ppiVar8;
  undefined4 unaff_EDI;
  
  piVar3 = param_1;
  if (param_1 == (int *)0x0) {
    if (*(char *)(DAT_0070838c + 0xde) == '\0') {
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x99,1);
    }
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x97,0);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,9,1);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,7,0);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xe,0);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,1);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,5);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,6);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,1);
    param_1 = *(int **)(int *)this->mbr_0x2c;
    if (param_1 != (int *)this->mbr_0x2c) {
      do {
        piVar4 = param_1;
        pvVar6 = (void *)cls_0x50b520::meth_0x50b520(DAT_00707ce8,(char)param_1[3],(char)unaff_EDI);
        FUN_00507c90(pvVar6,(int)(piVar4 + 4),(uint)this->mbr_0x38,
                     *(cls_0x4960d0 **)(this->mbr_0x0 + 0x15c));
        cls_0x55bd50::meth_0x55bd50((cls_0x55bd50 *)&param_1);
      } while (param_1 != (int *)this->mbr_0x2c);
    }
    if (*(char *)(DAT_0070838c + 0xde) == '\0') {
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x99,0);
    }
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,9,2);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xe,1);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,7,1);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,0);
  }
  ppiVar8 = *(int ***)(int **)this->mbr_0x2c;
  if (ppiVar8 != (int **)this->mbr_0x2c) {
    do {
      pvVar6 = (void *)cls_0x50b520::meth_0x50b520(DAT_00707ce8,(char)ppiVar8[3],(char)unaff_EBP);
      if (this->mbr_0x40 == 0) {
        dVar7 = 0;
      }
      else {
        dVar7 = this->mbr_0x44;
      }
      FUN_00509740(pvVar6,(int)piVar3,(int)(ppiVar8 + 4),(uint)this->mbr_0x38,dVar7,this->mbr_0x48);
      if (*(char *)((int)ppiVar8 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar8[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar8 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar8 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar8[1] + 0x1d);
          ppiVar5 = (int **)ppiVar8[1];
          ppiVar2 = ppiVar8;
          while ((ppiVar8 = ppiVar5, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar8[2]))) {
            cVar1 = *(char *)((int)ppiVar8[1] + 0x1d);
            ppiVar5 = (int **)ppiVar8[1];
            ppiVar2 = ppiVar8;
          }
        }
      }
    } while (ppiVar8 != (int **)this->mbr_0x2c);
  }
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x97,0);
  return;
}



void __thiscall cls_0x490150::meth_0x491b10(cls_0x490150 *this)

{
  undefined4 uVar1;
  cls_0x5053c0 *this_00;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint unaff_EBX;
  undefined4 *puVar6;
  dword dVar7;
  int unaff_EDI;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  
  dVar7 = this->mbr_0x58;
  if (dVar7 != 0) {
    this_00 = *(cls_0x5053c0 **)(DAT_00707ce0 + 0x28);
    cVar3 = (**(code **)(*DAT_00707ce4 + 0xf4))();
    if (cVar3 != '\0') {
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x89,0);
    }
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,7,0);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,1);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,5);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,2);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,1);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9c,1);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9d,1);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9a,0x41200000);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9b,0);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9e,0);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9f,0);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xa0,0x3f800000);
    iVar13 = 0x10;
    DAT_007083cc = DAT_007083cc + 1;
    (**(code **)(*DAT_00708300 + 0x14c))(DAT_00708300,0,this_00->mbr_0x4);
    (**(code **)(*DAT_00708300 + 0x130))(DAT_00708300,0x42);
    cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,1,1);
    cls_0x490060::meth_0x503360((cls_0x490060 *)&DAT_007082f8,0x100,&DAT_00708338);
    do {
      uVar4 = this_00->mbr_0x8 +
              ((uint)(this_00->mbr_0x14 % 0x10 != 0) + this_00->mbr_0x14 / 0x10) * -0x10 >> 4;
      uVar8 = dVar7;
      if (uVar4 <= dVar7) {
        uVar8 = uVar4;
      }
      cVar3 = '\0';
      if ((uVar4 < dVar7) && (uVar4 < 5)) {
        cVar3 = '\x01';
      }
      iVar5 = cls_0x5053c0::meth_0x505400
                        (this_00,uVar8,0x10,&stack0xffffffb8,&stack0xffffffc8,cVar3);
      if (-1 < iVar5) {
        if (uVar8 != 0) {
          puVar6 = (undefined4 *)(iVar13 + 8);
          uVar4 = uVar8;
          do {
            iVar5 = *(int *)(unaff_EDI + 0xc);
            uVar2 = *(undefined4 *)(iVar5 + 0x3c);
            uVar1 = *(undefined4 *)(iVar5 + 0x38);
            puVar6[-2] = *(undefined4 *)(iVar5 + 0x34);
            puVar6[-1] = uVar1;
            *puVar6 = uVar2;
            uVar9 = FUN_00616e24();
            uVar10 = FUN_00616e24();
            uVar11 = FUN_00616e24();
            uVar12 = FUN_00616e24();
            puVar6[1] = (((uint)uVar9 & 0xff | (int)uVar10 << 8) << 8 | (uint)uVar11 & 0xff) << 8 |
                        (uint)uVar12 & 0xff;
            cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&stack0xffffffbc);
            puVar6 = puVar6 + 4;
            uVar4 = uVar4 - 1;
            dVar7 = unaff_EBX;
          } while (uVar4 != 0);
        }
        (**(code **)(*(int *)this_00->mbr_0x4 + 0x30))((int *)this_00->mbr_0x4);
        DAT_007083d4 = DAT_007083d4 + 1;
        DAT_007083b4 = DAT_007083b4 + uVar8;
        (**(code **)(*DAT_00708300 + 0x118))(DAT_00708300,1,unaff_EBX,uVar8);
        dVar7 = dVar7 - uVar8;
        unaff_EBX = dVar7;
      }
    } while (dVar7 != 0);
    cVar3 = (**(code **)(*DAT_00707ce4 + 0xf4))();
    if (cVar3 != '\0') {
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x89,1);
    }
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9c,0);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9d,0);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,7,1);
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,0);
  }
  return;
}



void __thiscall cls_0x490150::meth_0x491fc0(cls_0x490150 *this)

{
  char cVar1;
  
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,9,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x89,0);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1c,0);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xe,0);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x16,3);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x34,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x38,8);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x36,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x35,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x39,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x3a,-1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x3b,-1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x37,7);
  cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,2,2);
  cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,3,3);
  cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,1,3);
  cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,5,2);
  cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,6,3);
  cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,4,3);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x3c,this->mbr_0x3c);
  if (this->mbr_0x74 == 0) {
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xa8,0);
  }
  Gfx_RenderManager::RenderShadowVolumes2(this);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x16,2);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x37,8);
  Gfx_RenderManager::RenderShadowVolumes2(this);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xa8,0xf);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x16,3);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,5);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,6);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x38,4);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x37,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x17,8);
  meth_0x490150(this);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x17,4);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,9,2);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xe,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x34,0);
  cVar1 = (**(code **)(*DAT_00707ce4 + 0xf4))();
  if (cVar1 != '\0') {
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x89,1);
  }
  cVar1 = (**(code **)(*DAT_00707ce4 + 0x10c))(0);
  if (cVar1 != '\0') {
    cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1c,1);
  }
  return;
}



void __thiscall cls_0x490150::meth_0x4931e0(cls_0x490150 *this)

{
  dword dVar1;
  int *piVar2;
  int iVar3;
  int *_Memory;
  cls_0x505750 *local_8;
  cls_0x490150 *local_4;
  
  if ((int **)this->mbr_0x6c == (int **)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    _Memory = *(int **)this->mbr_0x6c;
  }
  if (_Memory != (int *)this->mbr_0x6c) {
    local_4 = this;
    do {
      local_8 = (cls_0x505750 *)_Memory[2];
      cls_0x505750::meth_0x505750(local_8);
      dVar1 = this->mbr_0x60;
      iVar3 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&local_8);
      cls_0x492310::meth_0x492310((cls_0x492310 *)&this->mbr_0x5c,1);
      *(int *)(dVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      piVar2 = (int *)*_Memory;
      if (_Memory != (int *)local_4->mbr_0x6c) {
        *(int **)_Memory[1] = piVar2;
        *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = piVar2;
    } while (piVar2 != (int *)local_4->mbr_0x6c);
  }
  return;
}



void __thiscall cls_0x490150::meth_0x494b40(cls_0x490150 *this)

{
  char cVar1;
  void *_Memory;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  cls_0x490150 *local_4;
  
  local_4 = this;
  cls_0x490450::meth_0x494610((cls_0x490450 *)&this->mbr_0x4);
  *(dword *)(this->mbr_0x8 + 4) = this->mbr_0x8;
  ppiVar3 = (int **)0x0;
  this->mbr_0xc = 0;
  *(dword *)this->mbr_0x8 = this->mbr_0x8;
  *(dword *)(this->mbr_0x8 + 8) = this->mbr_0x8;
  ppiVar5 = (int **)this->mbr_0x14;
  if (ppiVar5 != (int **)0x0) {
    ppiVar3 = (int **)*ppiVar5;
  }
  cls_0x494780::meth_0x494780((cls_0x494780 *)&this->mbr_0x10,(int **)&local_4,ppiVar3,ppiVar5);
  _Memory = *(void **)(this->mbr_0x20 + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    cls_0x50dbb0::meth_0x4910d0((cls_0x50dbb0 *)&this->mbr_0x1c);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(dword *)(this->mbr_0x20 + 4) = this->mbr_0x20;
  this->mbr_0x24 = 0;
  *(dword *)this->mbr_0x20 = this->mbr_0x20;
  *(dword *)(this->mbr_0x20 + 8) = this->mbr_0x20;
  ppiVar5 = *(int ***)(int **)this->mbr_0x2c;
  if (ppiVar5 != (int **)this->mbr_0x2c) {
    do {
      ppiVar3 = (int **)ppiVar5[5];
      if (ppiVar3 == (int **)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *ppiVar3;
      }
      GUI::Interface::meth_0x4b9d60
                ((Interface *)(ppiVar5 + 4),(int **)&local_4,piVar4,(int *)ppiVar3);
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar3 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar3 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar3 + 0x1d);
          ppiVar5 = ppiVar3;
          ppiVar3 = (int **)*ppiVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x1d);
            ppiVar5 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar2 = (int **)ppiVar5[1];
          ppiVar3 = ppiVar5;
          while ((ppiVar5 = ppiVar2, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar2 = (int **)ppiVar5[1];
            ppiVar3 = ppiVar5;
          }
        }
      }
    } while (ppiVar5 != (int **)this->mbr_0x2c);
  }
  piVar4 = *(int **)(this->mbr_0x2c + 4);
  if (*(char *)((int)piVar4 + 0x1d) != '\0') {
    *(dword *)(this->mbr_0x2c + 4) = this->mbr_0x2c;
    this->mbr_0x30 = 0;
    *(dword *)this->mbr_0x2c = this->mbr_0x2c;
    *(dword *)(this->mbr_0x2c + 8) = this->mbr_0x2c;
    return;
  }
  cls_0x55dc80::meth_0x493270((cls_0x55dc80 *)&this->mbr_0x28);
  FUN_00402020(piVar4);
                    /* WARNING: Subroutine does not return */
  _free(piVar4);
}



void __thiscall cls_0x490150::meth_0x494ca0(cls_0x490150 *this,char param_1)

{
  char cVar1;
  
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,7,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xe,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,0);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x18,0x7f);
  meth_0x4911b0(this,0);
  meth_0x4911b0(this,0);
  meth_0x4913e0(this,(int *)0x0);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x18,0);
  if ((this->mbr_0x38 == 0) || (*(char *)(DAT_00708394 + 0x1c) == '\0')) {
    if ((this->mbr_0x49 != 0) && ((void *)this->mbr_0x4c != (void *)0x0)) {
      Octree2Gfx::RenderFloorCB((void *)this->mbr_0x4c);
    }
  }
  else {
    meth_0x491fc0(this);
  }
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xe,0);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,5);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,6);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,1);
  meth_0x4913e0(this,(int *)0x1);
  meth_0x4911b0(this,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,9);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,1);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,1);
  meth_0x4913e0(this,(int *)0x2);
  meth_0x4911b0(this,2);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,5);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,2);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,2);
  meth_0x4913e0(this,(int *)0x3);
  meth_0x4911b0(this,3);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,5);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,2);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,3);
  meth_0x4913e0(this,(int *)0x4);
  meth_0x4911b0(this,4);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,5);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,2);
  cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xab,1);
  meth_0x4913e0(this,(int *)0x5);
  meth_0x4911b0(this,5);
  cVar1 = (**(code **)(*DAT_00707ce4 + 0x1cc))();
  if (cVar1 != '\0') {
    meth_0x491b10(this);
  }
  if (param_1 != '\0') {
    meth_0x494b40(this);
    cls_0x50dbb0::meth_0x491110((cls_0x50dbb0 *)&this->mbr_0x50);
    *(dword *)(this->mbr_0x54 + 4) = this->mbr_0x54;
    this->mbr_0x58 = 0;
    *(dword *)this->mbr_0x54 = this->mbr_0x54;
    *(dword *)(this->mbr_0x54 + 8) = this->mbr_0x54;
    meth_0x4931e0(this);
  }
  return;
}


