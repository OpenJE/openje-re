#include "../include/cls_0x668d50.h"

cls_0x668d50 * __thiscall cls_0x668d50::~cls_0x668d50(cls_0x668d50 *this)

{
  this->vftptr_0x0 = &cls_0x668d50__vftable_668d50_00668d50;
  if ((void *)this->mbr_0x4 != (void *)0x0) {
    FUN_00474cb0((void *)this->mbr_0x4,3);
  }
  this->mbr_0x4 = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x10);
}



int __thiscall cls_0x668d50::virt_meth_0x476c4f(cls_0x668d50 *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *_Memory;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *in_stack_00000008;
  int local_18;
  int local_c;
  uint local_8;
  
  piVar1 = param_1;
  if ((*(byte *)(param_1 + 0xb) & 2) == 0) {
    local_c = 0;
    iVar2 = FUN_00476da0(param_1);
    if (iVar2 == 0) {
      _Memory = (undefined4 *)operator_new(param_1[3] * 0xc);
      if (_Memory != (undefined4 *)0x0) {
        param_1[10] = 0;
        cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)param_1[7],&local_c,0x10);
        local_8 = 0;
        if (*(int *)(param_1[7] + 0x58) != 0) {
          local_18 = 0;
          do {
            iVar2 = local_18;
            param_1 = (int *)0x0;
            puVar6 = _Memory;
            for (uVar3 = piVar1[3] * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar6 = 0xffffffff;
              puVar6 = puVar6 + 1;
            }
            for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined *)puVar6 = 0xff;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
            local_18 = 3;
            do {
              iVar4 = *(int *)(iVar2 + local_c);
              uVar3 = 0;
              if (*(int *)(piVar1[4] + iVar4 * 4) != 0) {
                do {
                  piVar5 = (int *)0x0;
                  if (param_1 != (int *)0x0) {
                    do {
                      if (_Memory[(int)piVar5] ==
                          *(int *)(piVar1[5] + (piVar1[3] * iVar4 + uVar3) * 4)) break;
                      piVar5 = (int *)((int)piVar5 + 1);
                    } while (piVar5 < param_1);
                  }
                  if (piVar5 == param_1) {
                    param_1 = (int *)((int)param_1 + 1);
                    _Memory[(int)piVar5] =
                         *(undefined4 *)(piVar1[5] + (piVar1[3] * iVar4 + uVar3) * 4);
                  }
                  uVar3 = uVar3 + 1;
                } while (uVar3 < *(uint *)(piVar1[4] + iVar4 * 4));
              }
              iVar2 = iVar2 + 4;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
            if ((int *)piVar1[10] < param_1) {
              piVar1[10] = (int)param_1;
            }
            local_8 = local_8 + 1;
            local_18 = iVar2;
          } while (local_8 < *(uint *)(piVar1[7] + 0x58));
        }
        (**(code **)(**(int **)(piVar1[7] + 0x3c) + 0x30))(*(int **)(piVar1[7] + 0x3c));
        local_c = 0;
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      iVar2 = -0x7ff8fff2;
    }
  }
  else {
    if (in_stack_00000008 != (int *)0x0) {
      *in_stack_00000008 = param_1[10];
    }
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 * __thiscall cls_0x668d50::meth_0x47aba3(cls_0x668d50 *this,byte param_1)

{
  ~cls_0x668d50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



cls_0x668d50 * __thiscall cls_0x668d50::cls_0x668d50(cls_0x668d50 *this)

{
  this->vftptr_0x0 = &cls_0x668d50__vftable_668d50_00668d50;
  this->mbr_0x4 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x50 = 0;
  return this;
}



int * __thiscall
cls_0x668d50::virt_meth_0x47ec6a
          (cls_0x668d50 *this,uint param_1,float param_2,float param_3,uint param_4,void *param_5,
          int **param_6,int **param_7)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int **ppiVar9;
  int **ppiVar10;
  int **ppiVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float *pfVar16;
  int **in_stack_00000020;
  cls_0x474824 local_54;
  int local_14;
  int *local_10;
  int **local_c;
  int *local_8;
  
  uVar5 = param_1;
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  uVar6 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(*(int **)(param_1 + 0x1c));
  cls_0x474824::cls_0x474824(&local_54,uVar6);
  if ((((((uint)param_2 & 1) == 0) && (((uint)param_2 & 0x1f001000) == 0)) &&
      (((uint)param_2 & 0xfffe3000) == 0)) && (local_54.mbr_0x38 == 0)) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(*(int **)(param_1 + 0x1c));
    local_c = param_6;
    if (param_6 == (int **)0x0) {
      iVar7 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(*(int **)(param_1 + 0x1c));
      local_c = (int **)operator_new(iVar7 << 2);
    }
    if (local_c == (int **)0x0) {
      param_1 = 0x8007000e;
      uVar6 = param_1;
    }
    else {
      piVar3 = *(int **)(param_1 + 0x1c);
      uVar8 = (**(code **)(*piVar3 + 0x18))(piVar3,&local_10);
      (**(code **)(*piVar3 + 0x20))(piVar3,param_4,param_5,local_c,&local_8,uVar8);
      uVar6 = cls_0x474d1a::meth_0x47ef19(*(cls_0x474d1a **)(param_1 + 0x1c));
      if (-1 < (int)uVar6) {
        *in_stack_00000020 = local_10;
        iVar7 = (**(code **)(*local_8 + 0xc))(local_8);
        ppiVar9 = (int **)(**(code **)(*local_10 + 0x14))(local_10);
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(*(int **)(param_1 + 0x1c));
        *(dword *)(param_1 + 0x50) = local_54.mbr_0x4 + ((local_54.mbr_0x8 != 0) + 1) * -0xc;
        if (*(uint *)(param_1 + 0x4c) <= local_54.mbr_0x4 * (int)ppiVar9 &&
            local_54.mbr_0x4 * (int)ppiVar9 - *(uint *)(param_1 + 0x4c) != 0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(param_1 + 0x48));
        }
        puVar15 = *(undefined4 **)(param_1 + 0x48);
        uVar6 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x38))
                          (*(int **)(param_1 + 0x1c),0x10,&param_5);
        if (-1 < (int)uVar6) {
          ppiVar10 = (int **)0x0;
          if (ppiVar9 != (int **)0x0) {
            do {
              puVar13 = (undefined4 *)
                        (*(int *)(iVar7 + (int)ppiVar10 * 4) * local_54.mbr_0x4 + (int)param_5);
              puVar14 = puVar15;
              for (uVar6 = local_54.mbr_0x4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar14 = puVar14 + 1;
              }
              for (uVar6 = local_54.mbr_0x4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined *)puVar14 = *(undefined *)puVar13;
                puVar13 = (undefined4 *)((int)puVar13 + 1);
                puVar14 = (undefined4 *)((int)puVar14 + 1);
              }
              puVar15 = (undefined4 *)((int)puVar15 + local_54.mbr_0x4);
              ppiVar10 = (int **)((int)ppiVar10 + 1);
            } while (ppiVar10 < ppiVar9);
          }
          uVar6 = FUN_00476da0((int *)param_1);
          piVar3 = local_8;
          if (-1 < (int)uVar6) {
            ppiVar11 = (int **)0x0;
            ppiVar10 = ppiVar9;
            if (ppiVar9 != (int **)0x0) {
              do {
                ppiVar10 = (int **)((int)ppiVar10 +
                                   *(int *)(*(int *)(param_1 + 0x10) +
                                           *(int *)(iVar7 + (int)ppiVar11 * 4) * 4));
                ppiVar11 = (int **)((int)ppiVar11 + 1);
              } while (ppiVar11 < ppiVar9);
            }
            if (*(int ***)(param_1 + 0x44) < ppiVar10) {
                    /* WARNING: Subroutine does not return */
              _free(*(void **)(param_1 + 0x40));
            }
            pfVar16 = *(float **)(param_1 + 0x40);
            in_stack_00000020 = (int **)0x0;
            if (ppiVar9 != (int **)0x0) {
              do {
                iVar4 = *(int *)(iVar7 + (int)in_stack_00000020 * 4);
                param_5 = (void *)0x0;
                if (*(int *)(*(int *)(param_1 + 0x10) + iVar4 * 4) != 0) {
                  do {
                    iVar12 = (int)(*(int *)(param_1 + 0xc) * iVar4 + (int)param_5) * 4;
                    pfVar1 = (float *)(iVar12 + *(int *)(param_1 + 0x18));
                    fVar2 = *pfVar1;
                    if (param_3 < fVar2 != (NAN(param_3) || NAN(fVar2))) {
                      local_14 = *(int *)(iVar12 + *(int *)(param_1 + 0x14)) << 1;
                      fVar2 = (float)local_14;
                      if (local_14 < 0) {
                        fVar2 = fVar2 + 4.294967e+09;
                      }
                      *pfVar16 = fVar2 + *pfVar1;
                      pfVar16 = pfVar16 + 1;
                    }
                    param_5 = (void *)((int)param_5 + 1);
                  } while (param_5 < *(void **)(*(int *)(param_1 + 0x10) + iVar4 * 4));
                }
                *pfVar16 = -1.0;
                pfVar16 = pfVar16 + 1;
                in_stack_00000020 = (int **)((int)in_stack_00000020 + 1);
              } while (in_stack_00000020 < ppiVar9);
            }
            if (param_7 != (int **)0x0) {
              local_8 = (int *)0x0;
              *param_7 = piVar3;
            }
          }
        }
      }
    }
    param_1 = uVar6;
    *(undefined4 *)(uVar5 + 0x2c) = 0;
    if (local_c != param_6) {
                    /* WARNING: Subroutine does not return */
      _free(local_c);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  else {
    param_1 = 0x8876086c;
  }
  return (int *)param_1;
}



undefined4 __thiscall cls_0x668d50::virt_meth_0x47f062(cls_0x668d50 *this)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  float *pfVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int unaff_EBP;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  
  FUN_0061781c();
  piVar6 = *(int **)(unaff_EBP + 8);
  iVar10 = piVar6[0xd];
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(int *)(unaff_EBP + -0x6c) = iVar10;
  *(int *)(unaff_EBP + -0x20) = iVar10;
  if (((*(byte *)(unaff_EBP + 0xc) & 1) == 0) && ((*(uint *)(unaff_EBP + 0xc) & 0xe0fe2000) == 0)) {
    if (piVar6[2] != 0) {
      if ((piVar6[0xe] != 0) && ((*(byte *)(unaff_EBP + 0xd) & 0x20) == 0)) {
        *(undefined4 *)(unaff_EBP + -0x20) = 4;
      }
      iVar10 = (**(code **)(*(int *)piVar6[7] + 0x14))((int *)piVar6[7]);
      uVar9 = (**(code **)(*(int *)piVar6[7] + 0x10))((int *)piVar6[7]);
      uVar16 = uVar9 << 2;
      *(uint *)(unaff_EBP + -0x4c) = uVar9;
      pvVar11 = operator_new(uVar16);
      *(void **)(unaff_EBP + -0x5c) = pvVar11;
      pvVar11 = operator_new(uVar16);
      *(void **)(unaff_EBP + -0x54) = pvVar11;
      pvVar11 = *(void **)(unaff_EBP + 0x20);
      if (pvVar11 == (void *)0x0) {
        pvVar11 = operator_new(uVar16);
      }
      *(void **)(unaff_EBP + -0x68) = pvVar11;
      pvVar11 = operator_new(iVar10 << 2);
      *(void **)(unaff_EBP + -0x44) = pvVar11;
      pvVar11 = operator_new(0x208);
      *(void **)(unaff_EBP + 8) = pvVar11;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (pvVar11 == (void *)0x0) {
        pvVar11 = (void *)0x0;
      }
      else {
        FUN_004010a0(pvVar11,0x34,10,ctor_0x47fd27);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(void **)(unaff_EBP + -0x48) = pvVar11;
      if ((((*(int *)(unaff_EBP + -0x5c) != 0) && (*(int *)(unaff_EBP + -0x54) != 0)) &&
          (*(int *)(unaff_EBP + -0x68) != 0)) &&
         ((*(int *)(unaff_EBP + -0x44) != 0 && (pvVar11 != (void *)0x0)))) {
        puVar14 = *(undefined4 **)(unaff_EBP + -0x5c);
        for (uVar16 = uVar9 & 0x3fffffff; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined *)puVar14 = 0;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        puVar14 = *(undefined4 **)(unaff_EBP + -0x54);
        for (uVar9 = uVar9 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined *)puVar14 = 0;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        FUN_0047fd38(piVar6,(uint *)(unaff_EBP + -0x74),(int *)(unaff_EBP + -0x78));
        iVar10 = FUN_00476da0(piVar6);
        if (iVar10 == 0) {
          iVar10 = piVar6[3];
          iVar7 = iVar10 * 3;
          uVar9 = iVar7 * *(int *)(unaff_EBP + -0x4c);
          uVar16 = uVar9 * 4;
          *(int *)(unaff_EBP + -0x3c) = iVar7;
          *(uint *)(unaff_EBP + -100) = uVar16;
          pvVar11 = operator_new(uVar16);
          uVar16 = iVar10 * 0xc;
          *(void **)(unaff_EBP + -0x28) = pvVar11;
          *(uint *)(unaff_EBP + -0x60) = uVar16;
          pvVar11 = operator_new(uVar16);
          *(void **)(unaff_EBP + -0x50) = pvVar11;
          if ((*(int *)(unaff_EBP + -0x28) != 0) && (pvVar11 != (void *)0x0)) {
            cls_0x474d1a::meth_0x474d1a
                      ((cls_0x474d1a *)piVar6[7],&((cls_0x474d1a *)piVar6[7])->field_0x40,0x10);
            *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(piVar6[7] + 0x40);
            puVar14 = *(undefined4 **)(unaff_EBP + -0x28);
            for (uVar9 = uVar9 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar14 = 0xffffffff;
              puVar14 = puVar14 + 1;
            }
            for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
              *(undefined *)puVar14 = 0xff;
              puVar14 = (undefined4 *)((int)puVar14 + 1);
            }
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
            *(undefined4 *)(unaff_EBP + -0x24) = 0;
            if (*(int *)(unaff_EBP + -0x4c) != 0) {
              *(undefined4 *)(unaff_EBP + -0x1c) = 0;
              puVar17 = *(uint **)(unaff_EBP + -0x5c);
              *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x58);
              *(uint **)(unaff_EBP + -0x18) = puVar17;
              *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x28);
              do {
                uVar9 = 0;
                *puVar17 = 0;
                iVar10 = piVar6[3];
                *(undefined4 *)(unaff_EBP + -0x2c) = 0;
                if (iVar10 != 0) {
                  do {
                    piVar13 = *(int **)(unaff_EBP + -0x34);
                    *(int **)(unaff_EBP + -0x40) = piVar13;
                    *(undefined4 *)(unaff_EBP + -0x10) = 3;
                    do {
                      iVar10 = *piVar13;
                      if (*(int *)(unaff_EBP + -0x70) != 0) {
                        iVar10 = *(int *)(*(int *)(unaff_EBP + -0x44) + iVar10 * 4);
                      }
                      uVar16 = *(uint *)(piVar6[4] + iVar10 * 4);
                      *(int *)(unaff_EBP + 8) = iVar10;
                      if (uVar9 < uVar16) {
                        iVar10 = (piVar6[3] * iVar10 + uVar9) * 4;
                        pfVar12 = (float *)(piVar6[6] + iVar10);
                        *(float **)(unaff_EBP + -0x14) = pfVar12;
                        fVar4 = *pfVar12;
                        if (NAN(fVar4) == (fVar4 == 0.0)) {
                          uVar16 = 0;
                          bVar18 = *puVar17 == 0;
                          if (*puVar17 != 0) {
                            piVar13 = *(int **)(unaff_EBP + -0x38);
                            do {
                              if (*piVar13 == *(int *)(iVar10 + piVar6[5])) {
                                pfVar12 = (float *)(*(int *)(unaff_EBP + -0x50) + uVar16 * 4);
                                if (*pfVar12 <= **(float **)(unaff_EBP + -0x14)) {
                                  fVar4 = **(float **)(unaff_EBP + -0x14);
                                }
                                else {
                                  fVar4 = *pfVar12;
                                }
                                *pfVar12 = fVar4;
                                break;
                              }
                              uVar16 = uVar16 + 1;
                              piVar13 = piVar13 + 1;
                            } while (uVar16 < *puVar17);
                            bVar18 = uVar16 == *puVar17;
                          }
                          if (bVar18) {
                            *(undefined4 *)
                             (*(int *)(unaff_EBP + -0x28) +
                             (*(int *)(unaff_EBP + -0x1c) + uVar16) * 4) =
                                 *(undefined4 *)
                                  (piVar6[5] + (piVar6[3] * *(int *)(unaff_EBP + 8) + uVar9) * 4);
                            uVar9 = *(uint *)(unaff_EBP + -0x2c);
                            *(undefined4 *)(*(int *)(unaff_EBP + -0x50) + uVar16 * 4) =
                                 *(undefined4 *)
                                  (piVar6[6] + (piVar6[3] * *(int *)(unaff_EBP + 8) + uVar9) * 4);
                            *puVar17 = *puVar17 + 1;
                          }
                        }
                      }
                      piVar13 = (int *)(*(int *)(unaff_EBP + -0x40) + 4);
                      piVar1 = (int *)(unaff_EBP + -0x10);
                      *piVar1 = *piVar1 + -1;
                      *(int **)(unaff_EBP + -0x40) = piVar13;
                    } while (*piVar1 != 0);
                    uVar9 = uVar9 + 1;
                    uVar16 = piVar6[3];
                    *(uint *)(unaff_EBP + -0x2c) = uVar9;
                  } while (uVar9 < uVar16);
                  uVar9 = *puVar17;
                  if (*(uint *)(unaff_EBP + -0x30) < uVar9) {
                    *(uint *)(unaff_EBP + -0x30) = uVar9;
                  }
                  if (*(uint *)(unaff_EBP + -0x20) < uVar9) {
                    if (*(int *)(unaff_EBP + -0x70) == 0) {
                      iVar10 = (**(code **)(*(int *)piVar6[7] + 0x50))
                                         ((int *)piVar6[7],*(undefined4 *)(unaff_EBP + 0x10),
                                          *(undefined4 *)(unaff_EBP + -0x44));
                      if (iVar10 != 0) goto LAB_0047fc63;
                      *(undefined4 *)(unaff_EBP + -0x70) = 1;
                    }
                    if (2 < *(uint *)(unaff_EBP + -0x20)) {
                      uVar9 = 3;
                      *(undefined4 *)(unaff_EBP + 8) = 3;
                      if (3 < *(uint *)(unaff_EBP + -0x20)) {
                        puVar14 = (undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0xc);
                        do {
                          uVar16 = 0;
                          fVar4 = 0.0;
                          if (uVar9 < *puVar17) {
                            *(uint *)(unaff_EBP + -0x14) = *puVar17;
                            do {
                              pfVar12 = (float *)(*(int *)(unaff_EBP + -0x50) + uVar9 * 4);
                              fVar5 = *pfVar12;
                              if (fVar4 < fVar5 != (NAN(fVar4) || NAN(fVar5))) {
                                fVar4 = *pfVar12;
                                uVar16 = uVar9;
                              }
                              uVar9 = uVar9 + 1;
                            } while (uVar9 < *(uint *)(unaff_EBP + -0x14));
                          }
                          uVar8 = *puVar14;
                          puVar2 = (undefined4 *)
                                   (*(int *)(unaff_EBP + -0x28) +
                                   (*(int *)(unaff_EBP + -0x1c) + uVar16) * 4);
                          *puVar14 = *puVar2;
                          iVar10 = *(int *)(unaff_EBP + 8);
                          *puVar2 = uVar8;
                          puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x50) + iVar10 * 4);
                          uVar8 = *puVar2;
                          puVar3 = (undefined4 *)(*(int *)(unaff_EBP + -0x50) + uVar16 * 4);
                          uVar9 = iVar10 + 1;
                          *puVar2 = *puVar3;
                          *puVar3 = uVar8;
                          puVar17 = *(uint **)(unaff_EBP + -0x18);
                          puVar14 = puVar14 + 1;
                          *(uint *)(unaff_EBP + 8) = uVar9;
                        } while (uVar9 < *(uint *)(unaff_EBP + -0x20));
                      }
                      *puVar17 = *(uint *)(unaff_EBP + -0x20);
                      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x34);
                      *(undefined4 *)(unaff_EBP + -0x14) = 3;
                      do {
                        fVar4 = 0.0;
                        iVar10 = *(int *)(*(int *)(unaff_EBP + -0x44) +
                                         **(int **)(unaff_EBP + -0x18) * 4);
                        iVar7 = piVar6[4];
                        *(undefined4 *)(unaff_EBP + 8) = 0;
                        iVar15 = iVar10 * 4;
                        if (*(int *)(iVar15 + iVar7) != 0) {
                          do {
                            *(undefined4 *)(unaff_EBP + -0x2c) = 0;
                            if (*puVar17 != 0) {
                              iVar7 = *(int *)(piVar6[5] +
                                              (piVar6[3] * iVar10 + *(int *)(unaff_EBP + 8)) * 4);
                              *(undefined4 *)(unaff_EBP + -0x10) =
                                   *(undefined4 *)(unaff_EBP + -0x38);
                              do {
                                if (**(int **)(unaff_EBP + -0x10) == iVar7) break;
                                *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
                                *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
                              } while (*(uint *)(unaff_EBP + -0x2c) < *puVar17);
                            }
                            if (*(uint *)(unaff_EBP + -0x2c) == *puVar17) {
                              pfVar12 = (float *)(piVar6[6] +
                                                 (piVar6[3] * iVar10 + *(int *)(unaff_EBP + 8)) * 4)
                              ;
                              fVar4 = fVar4 + *pfVar12;
                              *pfVar12 = 0.0;
                            }
                            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
                          } while (*(uint *)(unaff_EBP + 8) < *(uint *)(iVar15 + piVar6[4]));
                          if (NAN(fVar4) == (fVar4 == 0.0)) {
                            iVar7 = piVar6[4];
                            *(undefined4 *)(unaff_EBP + 8) = 0;
                            if (*(int *)(iVar15 + iVar7) != 0) {
                              do {
                                pfVar12 = (float *)(piVar6[6] +
                                                   (piVar6[3] * iVar10 + *(int *)(unaff_EBP + 8)) *
                                                   4);
                                if (NAN(*pfVar12) == (*pfVar12 == 0.0)) {
                                  *pfVar12 = *pfVar12 * (1.0 / (1.0 - fVar4));
                                }
                                *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
                              } while (*(uint *)(unaff_EBP + 8) < *(uint *)(iVar15 + piVar6[4]));
                            }
                          }
                        }
                        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
                        piVar13 = (int *)(unaff_EBP + -0x14);
                        *piVar13 = *piVar13 + -1;
                      } while (*piVar13 != 0);
                    }
                  }
                }
                *(int *)(unaff_EBP + -0x1c) =
                     *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x3c);
                *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
                *(int *)(unaff_EBP + -0x38) =
                     *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x60);
                *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 0xc;
                puVar17 = puVar17 + 1;
                *(uint **)(unaff_EBP + -0x18) = puVar17;
              } while (*(uint *)(unaff_EBP + -0x24) < *(uint *)(unaff_EBP + -0x4c));
            }
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(unaff_EBP + -0x50));
          }
        }
      }
LAB_0047fc63:
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(unaff_EBP + -0x50));
    }
    piVar6 = (int *)piVar6[7];
    iVar10 = piVar6[9];
    iVar7 = *piVar6;
    *(int **)(unaff_EBP + 0x18) = piVar6;
    uVar8 = (**(code **)(iVar7 + 0x18))(piVar6,iVar10,*(undefined4 *)(unaff_EBP + 0x28));
    uVar9 = (**(code **)(*piVar6 + 0x20))(piVar6,uVar8);
    uVar8 = (**(code **)(iVar7 + 0x28))(piVar6,uVar9 & 1 | *(uint *)(unaff_EBP + 0xc));
  }
  else {
    uVar8 = 0x8876086c;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}



int __thiscall cls_0x668d50::virt_meth_0x47fdba(cls_0x668d50 *this)

{
  void *this_00;
  uint uVar1;
  cls_0x474d1a *this_01;
  int iVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 unaff_EDI;
  undefined4 *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  
  FUN_0061781c();
  this_00 = *(void **)(unaff_EBP + 8);
  iVar4 = *(int *)((int)this_00 + 0x1c);
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  uVar6 = *(uint *)(iVar4 + 0x58);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x4c) = uVar6;
  *(undefined4 *)(unaff_EBP + -0x58) = 2;
  if (((*(byte *)(unaff_EBP + 0xc) & 1) == 0) && ((*(uint *)(unaff_EBP + 0xc) & 0xe0fe2000) == 0)) {
    if (*(int *)((int)this_00 + 8) == 0) {
      piVar11 = *(int **)((int)this_00 + 0x1c);
      iVar4 = piVar11[9];
      iVar10 = *piVar11;
      *(int **)(unaff_EBP + 0x14) = piVar11;
      uVar5 = (**(code **)(iVar10 + 0x18))(piVar11,iVar4,*(undefined4 *)(unaff_EBP + 0x2c));
      uVar6 = (**(code **)(*piVar11 + 0x20))(piVar11,uVar5);
      iVar4 = (**(code **)(iVar10 + 0x28))(piVar11,uVar6 & 1 | *(uint *)(unaff_EBP + 0xc));
    }
    else {
      **(undefined4 **)(unaff_EBP + 0x20) = 0;
      **(undefined4 **)(unaff_EBP + 0x2c) = 0;
      **(undefined4 **)(unaff_EBP + 0x1c) = 0;
      FUN_0047fd38(this_00,(uint *)(unaff_EBP + -0x18),(int *)(unaff_EBP + 8));
      iVar4 = FUN_00481dfc(this_00,*(uint *)((int)this_00 + 0x34),*(int *)(unaff_EBP + 0x10));
      if (iVar4 == 0) {
        uVar12 = 4;
        if (*(int *)((int)this_00 + 0x3c) == 0) {
          if (*(int *)((int)this_00 + 0x38) == 0) {
            iVar4 = -0x7789f4a9;
            goto LAB_00480537;
          }
        }
        else {
          uVar12 = *(uint *)((int)this_00 + 0x34);
        }
        uVar1 = *(uint *)((int)this_00 + 0xc);
        *(uint *)(unaff_EBP + 8) = uVar1;
        if (uVar12 <= uVar1) {
          *(uint *)(unaff_EBP + 8) = uVar12;
        }
        pvVar7 = *(void **)(unaff_EBP + 0x24);
        if (pvVar7 == (void *)0x0) {
          pvVar7 = operator_new(uVar6 << 2);
        }
        *(void **)(unaff_EBP + -0x30) = pvVar7;
        if (pvVar7 != (void *)0x0) {
          *(undefined4 *)(unaff_EBP + -0x3c) = 0;
          *(uint *)(unaff_EBP + -0x54) = uVar6;
          uVar12 = *(uint *)(unaff_EBP + 0x14);
          uVar19 = __ftol();
          iVar4 = (int)((uVar19 & 0xffffffff) / (ulonglong)uVar12);
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
          *(undefined4 *)(unaff_EBP + -0x44) = 0;
          *(int *)(unaff_EBP + -0x48) = iVar4;
          pvVar7 = operator_new(iVar4 << 5);
          *(void **)(unaff_EBP + -0x18) = pvVar7;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          if (pvVar7 == (void *)0x0) {
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          else {
            FUN_004010a0(pvVar7,0x20,*(int *)(unaff_EBP + -0x48),&LAB_0047455a);
            *(void **)(unaff_EBP + -0x10) = pvVar7;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
          pvVar7 = operator_new(uVar6 << 5);
          *(void **)(unaff_EBP + -0x18) = pvVar7;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (pvVar7 == (void *)0x0) {
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
          }
          else {
            FUN_004010a0(pvVar7,0x20,uVar6,&LAB_0047455a);
            *(void **)(unaff_EBP + -0x38) = pvVar7;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          pvVar7 = operator_new(uVar6 << 2);
          *(void **)(unaff_EBP + -0x34) = pvVar7;
          if (((*(int *)(unaff_EBP + -0x10) != 0) && (*(int *)(unaff_EBP + -0x38) != 0)) &&
             (pvVar7 != (void *)0x0)) {
            puVar8 = *(undefined4 **)(unaff_EBP + -0x34);
            for (uVar12 = uVar6 & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar8 = 0xffffffff;
              puVar8 = puVar8 + 1;
            }
            for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined *)puVar8 = 0xff;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            cls_0x474d1a::meth_0x474d1a
                      (*(cls_0x474d1a **)((int)this_00 + 0x1c),unaff_EBP + -0x50,0x10);
            if (uVar6 != 0) {
              *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x38);
              uVar5 = 0;
              *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x4c);
              do {
                *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
                *(undefined4 *)(unaff_EBP + -0x2c) = 3;
                do {
                  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + -0x50));
                  uVar6 = *(uint *)(*(int *)((int)this_00 + 0x10) + iVar4 * 4);
                  *(uint *)(unaff_EBP + -0x10) = uVar6;
                  if (*(uint *)(unaff_EBP + 8) <= uVar6) {
                    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + 8);
                  }
                  uVar6 = 0;
                  if (*(int *)(unaff_EBP + -0x10) != 0) {
                    do {
                      uVar12 = *(uint *)(*(int *)((int)this_00 + 0x14) +
                                        (*(int *)((int)this_00 + 0xc) * iVar4 + uVar6) * 4);
                      puVar16 = (uint *)(*(int *)(unaff_EBP + -0x24) + (uVar12 >> 5) * 4);
                      *puVar16 = *puVar16 | 1 << ((byte)uVar12 & 0x1f);
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < *(uint *)(unaff_EBP + -0x10));
                  }
                  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
                  piVar11 = (int *)(unaff_EBP + -0x2c);
                  *piVar11 = *piVar11 + -1;
                } while (*piVar11 != 0);
                *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x20;
                piVar11 = (int *)(unaff_EBP + -0x1c);
                *piVar11 = *piVar11 + -1;
                uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
              } while (*piVar11 != 0);
            }
            (**(code **)(**(int **)(*(int *)((int)this_00 + 0x1c) + 0x3c) + 0x30))();
            *(undefined4 *)(unaff_EBP + -0x50) = 0;
            if (*(int *)(unaff_EBP + -0x4c) != 0) {
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
              do {
                uVar6 = *(uint *)(unaff_EBP + -0x48);
                *(undefined4 *)(unaff_EBP + -0x40) = 0;
                if (uVar6 <= *(uint *)(unaff_EBP + -0x3c)) {
                  *(uint *)(unaff_EBP + -0x1c) = uVar6;
                  dVar3 = (double)*(int *)(unaff_EBP + -0x1c);
                  if ((int)uVar6 < 0) {
                    dVar3 = dVar3 + 4294967296.0;
                  }
                  FUN_00617ce0(SUB84(dVar3 * 1.2,0),(double)CONCAT44(unaff_ESI,unaff_EDI),
                               (short)unaff_EBX);
                  lVar20 = __ftol();
                  *(int *)(unaff_EBP + -0x48) = (int)lVar20;
                  puVar8 = (undefined4 *)operator_new((int)lVar20 << 5);
                  *(undefined4 **)(unaff_EBP + -0x1c) = puVar8;
                  *(undefined4 *)(unaff_EBP + -4) = 2;
                  if (puVar8 == (undefined4 *)0x0) {
                    puVar8 = (undefined4 *)0x0;
                  }
                  else {
                    FUN_004010a0(puVar8,0x20,*(int *)(unaff_EBP + -0x48),&LAB_0047455a);
                  }
                  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  *(undefined4 **)(unaff_EBP + -0x2c) = puVar8;
                  if (puVar8 != (undefined4 *)0x0) {
                    if (*(int *)(unaff_EBP + -0x10) != 0) {
                      iVar4 = *(int *)(unaff_EBP + -0x20);
                      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x3c);
                      puVar9 = puVar8;
                      do {
                        piVar11 = (int *)(unaff_EBP + -0x1c);
                        *piVar11 = *piVar11 + -1;
                        iVar10 = *piVar11;
                        puVar15 = (undefined4 *)((iVar4 - (int)puVar8) + (int)puVar9);
                        puVar17 = puVar9;
                        for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                          *puVar17 = *puVar15;
                          puVar15 = puVar15 + 1;
                          puVar17 = puVar17 + 1;
                        }
                        puVar9 = puVar9 + 8;
                      } while (iVar10 != 0);
                    }
                    /* WARNING: Subroutine does not return */
                    _free(*(void **)(unaff_EBP + -0x20));
                  }
                  goto LAB_004804e5;
                }
                *(undefined4 *)(unaff_EBP + -0x14) = 0;
                if (*(int *)(unaff_EBP + -0x4c) != 0) {
                  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x38);
                  do {
                    piVar11 = (int *)(*(int *)(unaff_EBP + -0x34) + *(int *)(unaff_EBP + -0x14) * 4)
                    ;
                    if (*piVar11 == -1) {
                      puVar16 = *(uint **)(unaff_EBP + -0x24);
                      puVar8 = (undefined4 *)(unaff_EBP + -0x7c);
                      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                        *puVar8 = 0;
                        puVar8 = puVar8 + 1;
                      }
                      puVar18 = (uint *)(*(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x20));
                      cls_0x47456a::meth_0x480548
                                ((cls_0x47456a *)(unaff_EBP + -0x7c),puVar18,puVar16);
                      uVar6 = cls_0x47456a::meth_0x47456a((cls_0x47456a *)(unaff_EBP + -0x7c));
                      if (uVar6 <= *(uint *)(unaff_EBP + 0x14)) {
                        if (*(int *)(unaff_EBP + -0x40) == 0) {
                          *(undefined4 *)(unaff_EBP + -0x18) =
                               *(undefined4 *)
                                (*(int *)(*(int *)((int)this_00 + 0x1c) + 0x48) +
                                *(int *)(unaff_EBP + -0x14) * 4);
                          *(undefined4 *)(unaff_EBP + -0x40) = 1;
                        }
                        if (*(int *)(*(int *)(*(int *)((int)this_00 + 0x1c) + 0x48) +
                                    *(int *)(unaff_EBP + -0x14) * 4) == *(int *)(unaff_EBP + -0x18))
                        {
                          *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x54) + -1;
                          *piVar11 = *(int *)(unaff_EBP + -0x3c);
                          puVar16 = (uint *)(unaff_EBP + -0x7c);
                          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                            *puVar18 = *puVar16;
                            puVar16 = puVar16 + 1;
                            puVar18 = puVar18 + 1;
                          }
                        }
                      }
                    }
                    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x20;
                  } while (*(uint *)(unaff_EBP + -0x14) < *(uint *)(unaff_EBP + -0x4c));
                }
                *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 1;
                *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x20;
              } while (*(int *)(unaff_EBP + -0x54) != 0);
            }
            uVar5 = *(undefined4 *)(*(int *)((int)this_00 + 0x1c) + 0x48);
            *(undefined4 *)(*(int *)((int)this_00 + 0x1c) + 0x48) =
                 *(undefined4 *)(unaff_EBP + -0x34);
            if (*(int *)(unaff_EBP + 8) == 0) {
              uVar6 = *(uint *)(unaff_EBP + -0x58);
            }
            else {
              uVar6 = *(int *)(unaff_EBP + 8) * 2 + 4U | 0x1000;
            }
            uVar12 = (**(code **)(**(int **)((int)this_00 + 0x1c) + 0x18))();
            this_01 = *(cls_0x474d1a **)((int)this_00 + 0x1c);
            *(uint *)(unaff_EBP + -0x58) = uVar6 | uVar12 & 0xffffeff1;
            iVar4 = cls_0x474d1a::meth_0x47ef19(this_01);
            if (iVar4 == 0) {
              piVar11 = *(int **)(unaff_EBP + 0x1c);
              *(undefined4 *)(*(int *)((int)this_00 + 0x1c) + 0x48) = uVar5;
              iVar4 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x50);
              iVar10 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x54);
              *piVar11 = iVar10;
              iVar10 = FUN_004745ba((cls_0x668f10 **)((*(int *)(unaff_EBP + 0x14) + 6) * iVar10 * 4)
                                   );
              if (iVar10 == 0) {
                iVar13 = (**(code **)(***(int ***)(unaff_EBP + 0x20) + 0xc))();
                *(int *)(unaff_EBP + 0xc) = iVar13 + **(int **)(unaff_EBP + 0x1c) * 0x18;
                iVar10 = *(int *)((int)this_00 + 8);
                *(int *)(unaff_EBP + -0x18) = iVar13;
                pvVar7 = operator_new(iVar10 * *(int *)(unaff_EBP + -0x3c) * 4);
                *(void **)(unaff_EBP + 0x18) = pvVar7;
                if (pvVar7 != (void *)0x0) {
                  *(undefined4 *)(unaff_EBP + 0x20) = 0;
                  if (**(int **)(unaff_EBP + 0x1c) != 0) {
                    *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + 0xc);
                    piVar11 = (int *)(iVar13 + 4);
                    piVar14 = (int *)(iVar4 + 4);
                    do {
                      piVar11[-1] = *(int *)(*(int *)(*(int *)((int)this_00 + 0x1c) + 0x48) +
                                            *(int *)(*(int *)(unaff_EBP + -0x30) + *piVar14 * 4) * 4
                                            );
                      piVar11[1] = piVar14[1];
                      *piVar11 = *piVar14;
                      piVar11[3] = piVar14[3];
                      piVar11[2] = piVar14[2];
                      piVar11[4] = *(int *)(unaff_EBP + 0x24);
                      uVar6 = 0;
                      *(undefined4 *)(unaff_EBP + 0xc) = 0;
                      iVar4 = *(int *)((int)this_00 + 8);
                      *(undefined4 *)(unaff_EBP + 0x10) = 0;
                      if (iVar4 != 0) {
                        do {
                          uVar6 = *(uint *)(unaff_EBP + 0x10);
                          if ((*(uint *)(*(int *)(unaff_EBP + -0x20) +
                                        ((*(uint *)(unaff_EBP + 0xc) >> 5) +
                                        *(int *)(unaff_EBP + 0x20) * 8) * 4) &
                              1 << ((byte)*(undefined4 *)(unaff_EBP + 0xc) & 0x1f)) != 0) {
                            iVar4 = *(int *)(unaff_EBP + 0xc);
                            *(int *)(piVar11[4] + uVar6 * 4) = iVar4;
                            *(uint *)(*(int *)(unaff_EBP + 0x18) +
                                     (*(int *)((int)this_00 + 8) * *(int *)(unaff_EBP + 0x20) +
                                     iVar4) * 4) = uVar6;
                            uVar6 = uVar6 + 1;
                            *(uint *)(unaff_EBP + 0x10) = uVar6;
                          }
                          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
                        } while (*(uint *)(unaff_EBP + 0xc) < *(uint *)((int)this_00 + 8));
                        iVar13 = *(int *)(unaff_EBP + -0x18);
                      }
                      for (; uVar6 < *(uint *)(unaff_EBP + 0x14); uVar6 = uVar6 + 1) {
                        *(undefined4 *)(piVar11[4] + uVar6 * 4) = 0xffffffff;
                      }
                      *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
                      *(int *)(unaff_EBP + 0x24) =
                           *(int *)(unaff_EBP + 0x24) + *(int *)(unaff_EBP + 0x14) * 4;
                      piVar14 = piVar14 + 5;
                      piVar11 = piVar11 + 6;
                    } while (*(uint *)(unaff_EBP + 0x20) < **(uint **)(unaff_EBP + 0x1c));
                  }
                  uVar5 = (**(code **)(**(int **)(unaff_EBP + -0x44) + 0xc))();
                  *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
                  if (*(int *)(unaff_EBP + 8) != 0) {
                    piVar11 = *(int **)(unaff_EBP + -0x28);
                    iVar4 = *piVar11;
                    *(undefined4 *)(unaff_EBP + 0x20) = 0;
                    *(undefined4 *)(unaff_EBP + 0x14) = 0;
                    (**(code **)(iVar4 + 0x38))(piVar11,0,unaff_EBP + -0x5c);
                    cls_0x474824::cls_0x474824
                              ((cls_0x474824 *)(unaff_EBP + -0x9c),*(uint *)(unaff_EBP + -0x58));
                    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
                    if (piVar11[0xc] != 0) {
                      *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 8) + -1;
                      iVar4 = 0;
                      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8) * 4 + -4;
                      *(undefined4 *)(unaff_EBP + -0x40) = 0;
                      *(int *)(unaff_EBP + 0x10) = iVar13 + 0x10;
                      do {
                        *(undefined4 *)(unaff_EBP + 0xc) = 0;
                        iVar10 = iVar4 + 0xc + *(int *)(unaff_EBP + -0x5c);
                        iVar4 = *(int *)(unaff_EBP + -0x18) + iVar10;
                        iVar13 = *(int *)(*(int *)(unaff_EBP + -0x1c) +
                                         *(int *)(unaff_EBP + 0x1c) * 4);
                        *(int *)(unaff_EBP + -0x2c) = iVar13;
                        if (*(int *)(unaff_EBP + 0x24) != 0) {
                          do {
                            iVar2 = *(int *)(unaff_EBP + 0xc);
                            *(undefined4 *)(iVar10 + iVar2 * 4) =
                                 *(undefined4 *)
                                  (*(int *)((int)this_00 + 0x18) +
                                  (*(int *)((int)this_00 + 0xc) * iVar13 + *(int *)(unaff_EBP + 0xc)
                                  ) * 4);
                            uVar6 = iVar2 + 1;
                            *(uint *)(unaff_EBP + 0xc) = uVar6;
                          } while (uVar6 < *(uint *)(unaff_EBP + 0x24));
                        }
                        uVar6 = *(uint *)(*(int *)((int)this_00 + 0x10) + iVar13 * 4);
                        *(uint *)(unaff_EBP + 0xc) = uVar6;
                        if (*(uint *)(unaff_EBP + 8) <= uVar6) {
                          *(uint *)(unaff_EBP + 0xc) = *(uint *)(unaff_EBP + 8);
                        }
                        uVar6 = 0;
                        if (*(int *)(unaff_EBP + 0xc) == 0) {
LAB_0048043f:
                          puVar8 = (undefined4 *)(iVar4 + uVar6);
                          for (uVar12 = 4 - uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                            *puVar8 = 0;
                            puVar8 = puVar8 + 1;
                          }
                          for (uVar6 = 4 - uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                            *(undefined *)puVar8 = 0;
                            puVar8 = (undefined4 *)((int)puVar8 + 1);
                          }
                        }
                        else {
                          while( true ) {
                            *(undefined *)(uVar6 + iVar4) =
                                 *(undefined *)
                                  (*(int *)(unaff_EBP + 0x18) +
                                  (*(int *)((int)this_00 + 8) * *(int *)(unaff_EBP + 0x20) +
                                  *(int *)(*(int *)((int)this_00 + 0x14) +
                                          (*(int *)((int)this_00 + 0xc) * iVar13 + uVar6) * 4)) * 4)
                            ;
                            uVar6 = uVar6 + 1;
                            if (*(uint *)(unaff_EBP + 0xc) <= uVar6) break;
                            iVar13 = *(int *)(unaff_EBP + -0x2c);
                          }
                          if (uVar6 < 4) goto LAB_0048043f;
                        }
                        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
                        if (**(uint **)(unaff_EBP + 0x10) <= *(uint *)(unaff_EBP + 0x14)) {
                          *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
                          *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x18;
                          *(undefined4 *)(unaff_EBP + 0x14) = 0;
                        }
                        *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
                        iVar4 = *(int *)(unaff_EBP + -0x40) + *(int *)(unaff_EBP + -0x98);
                        uVar6 = *(uint *)(*(int *)(unaff_EBP + -0x28) + 0x30);
                        *(int *)(unaff_EBP + -0x40) = iVar4;
                      } while (*(uint *)(unaff_EBP + 0x1c) < uVar6);
                    }
                    (**(code **)(**(int **)(unaff_EBP + -0x28) + 0x3c))
                              (*(int **)(unaff_EBP + -0x28));
                  }
                    /* WARNING: Subroutine does not return */
                  _free(*(void **)(unaff_EBP + -0x38));
                }
              }
            }
          }
LAB_004804e5:
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(unaff_EBP + -0x20));
        }
        iVar4 = -0x7ff8fff2;
      }
      *(undefined4 *)((int)this_00 + 0x2c) = 0;
    }
  }
  else {
    iVar4 = -0x7789f794;
  }
LAB_00480537:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


#include "../include/cls_0x668d50.h"
