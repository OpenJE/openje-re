#include "../include/cls_0x5d2c8c.h"

cls_0x5d2c8c * __thiscall cls_0x5d2c8c::cls_0x5d2c8c(cls_0x5d2c8c *this)

{
  this->mbr_0x4 = 0;
  this->mbr_0x0 = 0;
  return this;
}



void __thiscall cls_0x5d2c8c::meth_0x5d2c96(cls_0x5d2c8c *this)

{
  if ((undefined4 *)this->mbr_0x4 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x4)(1);
  }
  if ((undefined4 *)this->mbr_0x0 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x0)(1);
  }
  return;
}



void __thiscall cls_0x5d2c8c::meth_0x5d2fc6(cls_0x5d2c8c *this)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  int **extraout_ECX;
  uint uVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  int unaff_EBP;
  undefined4 *puVar10;
  float *pfVar11;
  
  FUN_0061781c();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  piVar4 = extraout_ECX[2];
  *(uint *)(unaff_EBP + -0x54) = ~((uint)piVar4 >> 0x12) & 1;
  piVar3 = FUN_005d2cbd((*extraout_ECX)[0x416],extraout_ECX[1][0x416],~((uint)piVar4 >> 0x10) & 1);
  *(int **)(unaff_EBP + -0x44) = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar4 = FUN_005d2cbd((*extraout_ECX)[0x417],extraout_ECX[1][0x417],~((uint)piVar4 >> 0x11) & 1)
    ;
    *(int **)(unaff_EBP + -0x2c) = piVar4;
    if (piVar4 != (int *)0x0) {
      piVar4 = FUN_005d2cbd((*extraout_ECX)[0x418],extraout_ECX[1][0x418],
                            *(int *)(unaff_EBP + -0x54));
      *(int **)(unaff_EBP + -0x28) = piVar4;
      if (piVar4 != (int *)0x0) {
        *(int *)(unaff_EBP + -0x4c) =
             **(int **)(unaff_EBP + -0x44) + (int)*(int **)(unaff_EBP + -0x44);
        *(int *)(unaff_EBP + -0x50) =
             **(int **)(unaff_EBP + -0x2c) + (int)*(int **)(unaff_EBP + -0x2c);
        *(int *)(unaff_EBP + -0x24) =
             **(int **)(unaff_EBP + -0x28) + (int)*(int **)(unaff_EBP + -0x28);
        iVar7 = extraout_ECX[1][0x418];
        piVar4 = (int *)operator_new(iVar7 * 0xc + 4);
        *(int **)(unaff_EBP + -0x54) = piVar4;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (piVar4 == (int *)0x0) {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          iVar7 = *(int *)(unaff_EBP + -0x14);
        }
        else {
          *piVar4 = iVar7;
          *(int **)(unaff_EBP + -0x58) = piVar4 + 1;
          _eh_vector_constructor_iterator_(piVar4 + 1,0xc,iVar7,ctor_0x47458e,FUN_005d2cb4);
          iVar7 = *(int *)(unaff_EBP + -0x58);
          *(int *)(unaff_EBP + -0x14) = iVar7;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(int *)(unaff_EBP + -0x58) = iVar7;
        if (iVar7 != 0) {
          iVar7 = (*extraout_ECX)[0x416];
          pvVar5 = operator_new(iVar7 << 4);
          *(void **)(unaff_EBP + -0x5c) = pvVar5;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (pvVar5 == (void *)0x0) {
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            iVar7 = *(int *)(unaff_EBP + -0x1c);
          }
          else {
            FUN_004010a0(pvVar5,0x10,iVar7,&LAB_00474d39);
            iVar7 = *(int *)(unaff_EBP + -0x5c);
            *(int *)(unaff_EBP + -0x1c) = iVar7;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(int *)(unaff_EBP + -0x5c) = iVar7;
          if (iVar7 != 0) {
            piVar4 = (int *)(*(int *)(unaff_EBP + -0x28) + 4);
            piVar3 = piVar4;
            if (piVar4 < *(int **)(unaff_EBP + -0x24)) {
              do {
                piVar8 = (int *)(*piVar3 + (int)piVar3);
                for (piVar3 = piVar3 + 1; piVar3 < piVar8; piVar3 = piVar3 + 2) {
                  piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + 8 + *piVar3 * 0xc);
                  *piVar1 = *piVar1 + 1;
                }
                piVar3 = piVar8;
              } while (piVar8 < *(int **)(unaff_EBP + -0x24));
            }
            *(undefined4 *)(unaff_EBP + -0x40) = 0;
            if (piVar4 < *(int **)(unaff_EBP + -0x24)) {
              do {
                piVar3 = (int *)(*piVar4 + (int)piVar4);
                piVar8 = piVar4 + 1;
                *(int **)(unaff_EBP + -0x18) = piVar3;
                *(int **)(unaff_EBP + -0x54) = piVar8;
                *(int **)(unaff_EBP + -0x10) = piVar8;
                piVar4 = piVar3;
                if (piVar8 < piVar3) {
                  do {
                    piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) +
                                    **(int **)(unaff_EBP + -0x10) * 0xc);
                    if (*piVar4 == 0) {
                      piVar8 = *(int **)(unaff_EBP + -0x20);
                      if (piVar8 == (int *)0x0) {
                        iVar7 = extraout_ECX[1][0x417] * extraout_ECX[1][0x416];
                        pvVar5 = operator_new(iVar7 * 0x10);
                        *(void **)(unaff_EBP + -0x48) = pvVar5;
                        *(undefined4 *)(unaff_EBP + -4) = 2;
                        if (pvVar5 == (void *)0x0) {
                          iVar7 = 0;
                        }
                        else {
                          FUN_004010a0(pvVar5,0x10,iVar7,&LAB_00474d39);
                          iVar7 = *(int *)(unaff_EBP + -0x48);
                        }
                        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                        *piVar4 = iVar7;
                        if (iVar7 == 0) goto LAB_005d33f1;
                        piVar3 = *(int **)(unaff_EBP + -0x18);
                      }
                      else {
                        *piVar4 = *piVar8;
                        *piVar8 = 0;
                        *(int *)(unaff_EBP + -0x20) = piVar8[1];
                      }
                      puVar10 = (undefined4 *)*piVar4;
                      for (uVar6 = (uint)(extraout_ECX[1][0x417] * extraout_ECX[1][0x416] * 0x10) >>
                                   2; uVar6 != 0; uVar6 = uVar6 - 1) {
                        *puVar10 = 0;
                        puVar10 = puVar10 + 1;
                      }
                      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                        *(undefined *)puVar10 = 0;
                        puVar10 = (undefined4 *)((int)puVar10 + 1);
                      }
                    }
                    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 8;
                    piVar4 = piVar3;
                  } while (*(int **)(unaff_EBP + -0x10) < piVar3);
                }
                *(undefined4 *)(unaff_EBP + -0x38) = 0;
                uVar6 = *(int *)(unaff_EBP + -0x2c) + 4;
                *(uint *)(unaff_EBP + -0x3c) = uVar6;
                if (uVar6 < *(uint *)(unaff_EBP + -0x50)) {
                  do {
                    piVar4 = (int *)(**(int **)(unaff_EBP + -0x3c) +
                                    (int)*(int **)(unaff_EBP + -0x3c));
                    iVar7 = **extraout_ECX;
                    *(int **)(unaff_EBP + -0x48) = piVar4;
                    (**(code **)(iVar7 + 4))
                              (*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x40)
                               ,*(undefined4 *)(unaff_EBP + -0x1c));
                    uVar6 = *(int *)(unaff_EBP + -0x44) + 4;
                    *(uint *)(unaff_EBP + -0x34) = uVar6;
                    if (uVar6 < *(uint *)(unaff_EBP + -0x4c)) {
                      pfVar9 = (float *)(*(int *)(unaff_EBP + -0x1c) + 8);
                      do {
                        uVar6 = **(int **)(unaff_EBP + -0x34) + (int)*(int **)(unaff_EBP + -0x34);
                        piVar3 = *(int **)(unaff_EBP + -0x54);
                        *(uint *)(unaff_EBP + -0x30) = uVar6;
                        for (; *(int **)(unaff_EBP + -0x10) = piVar3,
                            piVar3 < *(int **)(unaff_EBP + -0x18); piVar3 = piVar3 + 2) {
                          piVar8 = (int *)(*(int *)(unaff_EBP + -0x3c) + 4);
                          if (piVar8 < piVar4) {
                            do {
                              iVar7 = extraout_ECX[1][0x416] * *piVar8 * 0x10 +
                                      *(int *)(*(int *)(unaff_EBP + -0x14) + *piVar3 * 0xc);
                              for (piVar4 = (int *)(*(int *)(unaff_EBP + -0x34) + 4);
                                  piVar4 < *(int **)(unaff_EBP + -0x30); piVar4 = piVar4 + 2) {
                                fVar2 = (float)piVar4[1] * (float)piVar8[1] *
                                        *(float *)(*(int *)(unaff_EBP + -0x10) + 4);
                                pfVar11 = (float *)(*piVar4 * 0x10 + iVar7);
                                *pfVar11 = fVar2 * pfVar9[-2] + *pfVar11;
                                pfVar11 = (float *)(*piVar4 * 0x10 + 4 + iVar7);
                                *pfVar11 = fVar2 * pfVar9[-1] + *pfVar11;
                                pfVar11 = (float *)(*piVar4 * 0x10 + 8 + iVar7);
                                *pfVar11 = fVar2 * *pfVar9 + *pfVar11;
                                pfVar11 = (float *)(*piVar4 * 0x10 + 0xc + iVar7);
                                *pfVar11 = fVar2 * pfVar9[1] + *pfVar11;
                              }
                              piVar3 = *(int **)(unaff_EBP + -0x10);
                              piVar8 = piVar8 + 2;
                            } while (piVar8 < *(int **)(unaff_EBP + -0x48));
                            piVar4 = *(int **)(unaff_EBP + -0x48);
                            uVar6 = *(uint *)(unaff_EBP + -0x30);
                          }
                        }
                        pfVar9 = pfVar9 + 4;
                        *(uint *)(unaff_EBP + -0x34) = uVar6;
                      } while (uVar6 < *(uint *)(unaff_EBP + -0x4c));
                    }
                    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
                    *(int **)(unaff_EBP + -0x3c) = piVar4;
                  } while (piVar4 < *(int **)(unaff_EBP + -0x50));
                  piVar4 = *(int **)(unaff_EBP + -0x18);
                }
                for (piVar3 = *(int **)(unaff_EBP + -0x54); piVar3 < piVar4; piVar3 = piVar3 + 2) {
                  piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + *piVar3 * 0xc);
                  piVar8 = piVar1 + 2;
                  *piVar8 = *piVar8 + -1;
                  if (*piVar8 == 0) {
                    piVar8 = extraout_ECX[1];
                    *(undefined4 *)(unaff_EBP + -0x10) = 0;
                    if (piVar8[0x417] != 0) {
                      do {
                        (**(code **)(*piVar8 + 8))
                                  (*(undefined4 *)(unaff_EBP + -0x10),*piVar3,
                                   piVar8[0x416] * *(int *)(unaff_EBP + -0x10) * 0x10 + *piVar1);
                        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
                        piVar8 = extraout_ECX[1];
                      } while (*(uint *)(unaff_EBP + -0x10) < (uint)piVar8[0x417]);
                      piVar4 = *(int **)(unaff_EBP + -0x18);
                    }
                    piVar1[1] = *(int *)(unaff_EBP + -0x20);
                    *(int **)(unaff_EBP + -0x20) = piVar1;
                  }
                }
                *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x40) + 1;
              } while (piVar4 < *(int **)(unaff_EBP + -0x24));
            }
          }
        }
      }
    }
  }
LAB_005d33f1:
  if (*(void **)(unaff_EBP + -0x58) != (void *)0x0) {
    FUN_005d2f7a(*(void **)(unaff_EBP + -0x58),3);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(unaff_EBP + -0x28));
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d343a(cls_0x5d2c8c *this)

{
  dword dVar1;
  dword dVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iStack_2c;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  
  dVar1 = this->mbr_0x0;
  if (((*(uint *)(dVar1 + 0x103c) | *(uint *)(dVar1 + 0x1038) | *(uint *)(dVar1 + 0x1030) |
       *(uint *)(dVar1 + 0x1034)) & 3) != 0) {
    return 0x80004005;
  }
  dVar2 = this->mbr_0x4;
  if (((*(uint *)(dVar2 + 0x103c) | *(uint *)(dVar2 + 0x1038) | *(uint *)(dVar2 + 0x1030) |
       *(uint *)(dVar2 + 0x1034)) & 3) == 0) {
    iVar6 = *(int *)(dVar2 + 4);
    if (iVar6 == 0x31545844) {
      iStack_2c = 8;
    }
    else {
      if ((((iVar6 != 0x32545844) && (iVar6 != 0x33545844)) && (iVar6 != 0x34545844)) &&
         (iVar6 != 0x35545844)) goto LAB_005d349d;
      iStack_2c = 0x10;
    }
    uVar3 = *(uint *)(dVar2 + 0x1058);
    local_10 = (undefined4 *)
               ((*(uint *)(dVar2 + 0x1034) >> 2) * *(int *)(dVar2 + 0x1050) +
                *(int *)(dVar2 + 0x1054) * *(int *)(dVar2 + 0x1040) +
                (*(uint *)(dVar2 + 0x1030) >> 2) * iStack_2c + *(int *)(dVar2 + 0x18));
    local_14 = 0;
    puVar8 = (undefined4 *)
             ((*(uint *)(dVar1 + 0x1034) >> 2) * *(int *)(dVar1 + 0x1050) +
              *(int *)(dVar1 + 0x1054) * *(int *)(dVar1 + 0x1040) +
              (*(uint *)(dVar1 + 0x1030) >> 2) * iStack_2c + *(int *)(dVar1 + 0x18));
    if (*(int *)(dVar2 + 0x1060) != 0) {
      uVar5 = *(uint *)(dVar2 + 0x105c);
      do {
        local_c = 0;
        puVar7 = local_10;
        local_8 = puVar8;
        if (uVar5 != 0) {
          do {
            local_c = local_c + 4;
            puVar9 = local_8;
            puVar10 = puVar7;
            for (uVar5 = (uVar3 >> 2) * iStack_2c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined *)puVar10 = *(undefined *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            puVar7 = (undefined4 *)((int)puVar7 + *(int *)(this->mbr_0x4 + 0x1050));
            uVar5 = *(uint *)(this->mbr_0x4 + 0x105c);
            local_8 = (undefined4 *)((int)local_8 + *(int *)(this->mbr_0x0 + 0x1050));
          } while (local_c < uVar5);
        }
        local_10 = (undefined4 *)((int)local_10 + *(int *)(this->mbr_0x4 + 0x1054));
        puVar8 = (undefined4 *)((int)puVar8 + *(int *)(this->mbr_0x0 + 0x1054));
        local_14 = local_14 + 1;
      } while (local_14 < *(uint *)(this->mbr_0x4 + 0x1060));
    }
    uVar4 = 0;
  }
  else {
LAB_005d349d:
    uVar4 = 0x80004005;
  }
  return uVar4;
}



void __thiscall cls_0x5d2c8c::meth_0x5d36ee(cls_0x5d2c8c *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x0;
  (*(code *)PTR_FUN_00700a80)
            (*(undefined4 *)(this->mbr_0x4 + 0x18),*(undefined4 *)(dVar1 + 0x18),
             *(undefined4 *)(dVar1 + 0x1058),*(undefined4 *)(dVar1 + 0x105c),
             *(undefined4 *)(dVar1 + 0x1050),*(undefined4 *)(this->mbr_0x4 + 0x1050));
  return;
}



void __thiscall cls_0x5d2c8c::meth_0x5d3984(cls_0x5d2c8c *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x0;
  (*(code *)PTR_FUN_00700a84)
            (*(undefined4 *)(this->mbr_0x4 + 0x18),*(undefined4 *)(dVar1 + 0x18),
             *(undefined4 *)(dVar1 + 0x1058),*(undefined4 *)(dVar1 + 0x105c),
             *(undefined4 *)(dVar1 + 0x1050),*(undefined4 *)(this->mbr_0x4 + 0x1050));
  return;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d39b5(cls_0x5d2c8c *this)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  dword dVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  puVar5 = *(ushort **)(this->mbr_0x4 + 0x18);
  dVar6 = this->mbr_0x0;
  iVar7 = *(int *)(dVar6 + 0x1050);
  puVar8 = *(ushort **)(dVar6 + 0x18);
  puVar12 = (ushort *)(*(int *)(dVar6 + 0x105c) * iVar7 + (int)puVar8);
  for (; puVar8 < puVar12; puVar8 = puVar8 + iVar7) {
    iVar9 = *(int *)(dVar6 + 0x1058);
    puVar13 = (ushort *)(iVar7 + (int)puVar8);
    puVar10 = puVar5;
    for (puVar11 = puVar8; puVar11 < puVar8 + iVar9; puVar11 = puVar11 + 2) {
      uVar1 = *puVar11;
      uVar2 = puVar11[1];
      uVar3 = puVar13[1];
      uVar4 = *puVar13;
      *puVar10 = ((ushort)((uint)(uVar3 & 0xf81f) + (uint)(uVar1 & 0xf81f) + (uint)(uVar4 & 0xf81f)
                           + 0x1002 + (uint)(uVar2 & 0xf81f) >> 2) ^
                 (ushort)((uVar2 & 0xffff07e0) + 0x40 +
                          (uVar3 & 0xffff07e0) + (uVar1 & 0xffff07e0) + (uVar4 & 0xffff07e0) >> 2))
                 & 0x7e0 ^ (ushort)((uVar3 & 0xf81f) + (uVar1 & 0xf81f) + (uVar4 & 0xf81f) + 0x1002
                                    + (uVar2 & 0xf81f) >> 2);
      puVar13 = puVar13 + 2;
      puVar10 = puVar10 + 1;
    }
    puVar5 = (ushort *)((int)puVar5 + *(int *)(this->mbr_0x4 + 0x1050));
    dVar6 = this->mbr_0x0;
    iVar7 = *(int *)(dVar6 + 0x1050);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d3b05(cls_0x5d2c8c *this)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  dword dVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  
  puVar3 = *(ushort **)(this->mbr_0x4 + 0x18);
  dVar4 = this->mbr_0x0;
  iVar5 = *(int *)(dVar4 + 0x1050);
  puVar6 = *(ushort **)(dVar4 + 0x18);
  puVar9 = (ushort *)(*(int *)(dVar4 + 0x105c) * iVar5 + (int)puVar6);
  for (; puVar6 < puVar9; puVar6 = puVar6 + iVar5) {
    iVar7 = *(int *)(dVar4 + 0x1058);
    puVar10 = (ushort *)(iVar5 + (int)puVar6);
    puVar8 = puVar3;
    for (puVar11 = puVar6; puVar11 < puVar6 + iVar7; puVar11 = puVar11 + 2) {
      puVar1 = puVar10 + 1;
      uVar2 = *puVar10;
      puVar10 = puVar10 + 2;
      *puVar8 = (ushort)((puVar11[1] & 0xffff03e0) + 0x40 +
                         (*puVar1 & 0xffff03e0) + (*puVar11 & 0xffff03e0) + (uVar2 & 0xffff03e0) >>
                        2) & 0x3e0 |
                (ushort)((*puVar1 & 0x7c1f) + (*puVar11 & 0x7c1f) + (uVar2 & 0x7c1f) + 0x802 +
                         (puVar11[1] & 0x7c1f) >> 2) & 0x7c1f;
      puVar8 = puVar8 + 1;
    }
    puVar3 = (ushort *)((int)puVar3 + *(int *)(this->mbr_0x4 + 0x1050));
    dVar4 = this->mbr_0x0;
    iVar5 = *(int *)(dVar4 + 0x1050);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d3c29(cls_0x5d2c8c *this)

{
  ushort *puVar1;
  dword dVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  
  puVar1 = *(ushort **)(this->mbr_0x4 + 0x18);
  dVar2 = this->mbr_0x0;
  puVar3 = *(ushort **)(dVar2 + 0x18);
  iVar4 = *(int *)(dVar2 + 0x1050);
  puVar10 = (ushort *)(*(int *)(dVar2 + 0x105c) * iVar4 + (int)puVar3);
  for (; puVar3 < puVar10; puVar3 = puVar3 + iVar4) {
    iVar5 = *(int *)(dVar2 + 0x1058);
    puVar12 = (ushort *)(iVar4 + (int)puVar3);
    puVar6 = puVar1;
    for (puVar9 = puVar3; puVar9 < puVar3 + iVar5; puVar9 = puVar9 + 2) {
      uVar7 = (uint)*puVar9;
      uVar11 = (uint)puVar9[1];
      uVar8 = (uint)puVar12[1];
      uVar13 = (uint)*puVar12;
      *puVar6 = ((ushort)((uVar8 & 0x83e0) + (uVar7 & 0x83e0) + (uVar13 & 0x83e0) + 0x10040 +
                          (uVar11 & 0x83e0) >> 2) ^
                (ushort)((uVar11 & 0x7c1f) + 0x802 +
                         (uVar8 & 0x7c1f) + (uVar7 & 0x7c1f) + (uVar13 & 0x7c1f) >> 2)) & 0x7c1f ^
                (ushort)((uVar8 & 0x83e0) + (uVar7 & 0x83e0) + (uVar13 & 0x83e0) + 0x10040 +
                         (uVar11 & 0x83e0) >> 2);
      puVar12 = puVar12 + 2;
      puVar6 = puVar6 + 1;
    }
    puVar1 = (ushort *)((int)puVar1 + *(int *)(this->mbr_0x4 + 0x1050));
    dVar2 = this->mbr_0x0;
    iVar4 = *(int *)(dVar2 + 0x1050);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d3d78(cls_0x5d2c8c *this)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  dword dVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  puVar5 = *(ushort **)(this->mbr_0x4 + 0x18);
  dVar6 = this->mbr_0x0;
  iVar7 = *(int *)(dVar6 + 0x1050);
  puVar8 = *(ushort **)(dVar6 + 0x18);
  puVar12 = (ushort *)(*(int *)(dVar6 + 0x105c) * iVar7 + (int)puVar8);
  for (; puVar8 < puVar12; puVar8 = puVar8 + iVar7) {
    iVar9 = *(int *)(dVar6 + 0x1058);
    puVar13 = (ushort *)(iVar7 + (int)puVar8);
    puVar10 = puVar5;
    for (puVar11 = puVar8; puVar11 < puVar8 + iVar9; puVar11 = puVar11 + 2) {
      uVar1 = *puVar11;
      uVar2 = puVar11[1];
      uVar3 = puVar13[1];
      uVar4 = *puVar13;
      *puVar10 = ((ushort)((uint)(uVar3 & 0xf0f0) + (uint)(uVar1 & 0xf0f0) + (uint)(uVar4 & 0xf0f0)
                           + 0x2020 + (uint)(uVar2 & 0xf0f0) >> 2) ^
                 (ushort)((uVar2 & 0xffff0f0f) + 0x202 +
                          (uVar3 & 0xffff0f0f) + (uVar1 & 0xffff0f0f) + (uVar4 & 0xffff0f0f) >> 2))
                 & 0xf0f ^ (ushort)((uVar3 & 0xf0f0) + (uVar1 & 0xf0f0) + (uVar4 & 0xf0f0) + 0x2020
                                    + (uVar2 & 0xf0f0) >> 2);
      puVar13 = puVar13 + 2;
      puVar10 = puVar10 + 1;
    }
    puVar5 = (ushort *)((int)puVar5 + *(int *)(this->mbr_0x4 + 0x1050));
    dVar6 = this->mbr_0x0;
    iVar7 = *(int *)(dVar6 + 0x1050);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d3ecb(cls_0x5d2c8c *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  dword dVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  dVar5 = this->mbr_0x0;
  pbVar11 = *(byte **)(this->mbr_0x4 + 0x18);
  pbVar6 = *(byte **)(dVar5 + 0x18);
  iVar7 = *(int *)(dVar5 + 0x1050);
  pbVar12 = pbVar6 + *(int *)(dVar5 + 0x105c) * iVar7;
  for (; pbVar6 < pbVar12; pbVar6 = pbVar6 + iVar7 * 2) {
    iVar8 = *(int *)(dVar5 + 0x1058);
    pbVar13 = pbVar6 + iVar7;
    pbVar9 = pbVar11;
    for (pbVar10 = pbVar6; pbVar10 < pbVar6 + iVar8; pbVar10 = pbVar10 + 2) {
      bVar1 = *pbVar10;
      bVar2 = pbVar10[1];
      bVar3 = pbVar13[1];
      bVar4 = *pbVar13;
      pbVar13 = pbVar13 + 2;
      *pbVar9 = ((byte)((bVar3 & 0x1c) + (bVar1 & 0x1c) + (bVar4 & 0x1c) + 8 + (bVar2 & 0x1c) >> 2)
                ^ (byte)((bVar3 & 0xffff00e3) + (bVar1 & 0xffff00e3) + (bVar4 & 0xffff00e3) + 0x42 +
                         (bVar2 & 0xffff00e3) >> 2)) & 0x1c ^
                (byte)((uint)(bVar3 & 0xe3) + (uint)(bVar1 & 0xe3) + (uint)(bVar4 & 0xe3) + 0x42 +
                       (uint)(bVar2 & 0xe3) >> 2);
      pbVar9 = pbVar9 + 1;
    }
    pbVar11 = pbVar11 + *(int *)(this->mbr_0x4 + 0x1050);
    dVar5 = this->mbr_0x0;
    iVar7 = *(int *)(dVar5 + 0x1050);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d400a(cls_0x5d2c8c *this)

{
  byte *pbVar1;
  int iVar2;
  dword dVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined *local_c;
  
  puVar5 = *(undefined **)(this->mbr_0x4 + 0x18);
  dVar3 = this->mbr_0x0;
  pbVar4 = *(byte **)(dVar3 + 0x18);
  iVar8 = *(int *)(dVar3 + 0x1050);
  pbVar6 = pbVar4 + *(int *)(dVar3 + 0x105c) * iVar8;
  for (; pbVar4 < pbVar6; pbVar4 = pbVar4 + iVar8 * 2) {
    iVar2 = *(int *)(dVar3 + 0x1058);
    pbVar7 = pbVar4 + iVar8;
    local_c = puVar5;
    for (pbVar1 = pbVar4; pbVar1 < pbVar4 + iVar2; pbVar1 = pbVar1 + 2) {
      *local_c = (char)((uint)pbVar7[1] + (uint)pbVar1[1] + (uint)*pbVar7 + 2 + (uint)*pbVar1 >> 2);
      pbVar7 = pbVar7 + 2;
      local_c = local_c + 1;
    }
    puVar5 = puVar5 + *(int *)(this->mbr_0x4 + 0x1050);
    dVar3 = this->mbr_0x0;
    iVar8 = *(int *)(dVar3 + 0x1050);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d40a5(cls_0x5d2c8c *this)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  dword dVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  dVar5 = this->mbr_0x0;
  puVar6 = *(ushort **)(this->mbr_0x4 + 0x18);
  iVar7 = *(int *)(dVar5 + 0x1050);
  puVar8 = *(ushort **)(dVar5 + 0x18);
  puVar13 = (ushort *)(*(int *)(dVar5 + 0x105c) * iVar7 + (int)puVar8);
  for (; puVar8 < puVar13; puVar8 = puVar8 + iVar7) {
    iVar9 = *(int *)(dVar5 + 0x1058);
    puVar12 = (ushort *)(iVar7 + (int)puVar8);
    puVar10 = puVar6;
    for (puVar11 = puVar8; puVar11 < puVar8 + iVar9; puVar11 = puVar11 + 2) {
      uVar1 = *puVar11;
      uVar2 = puVar11[1];
      uVar3 = puVar12[1];
      uVar4 = *puVar12;
      puVar12 = puVar12 + 2;
      *puVar10 = (byte)((byte)((uint)(uVar3 & 0xe3) + (uint)(uVar1 & 0xe3) + (uint)(uVar4 & 0xe3) +
                               0x42 + (uint)(uVar2 & 0xe3) >> 2) ^
                       (byte)((uint)(uVar3 & 0xff1c) + (uVar1 & 0xffffff1c) + (uint)(uVar4 & 0xff1c)
                              + 0x208 + (uint)(uVar2 & 0xff1c) >> 2)) & 0xe3 ^
                 (ushort)((uVar3 & 0xff1c) + (uVar1 & 0xff1c) + (uVar4 & 0xff1c) + 0x208 +
                          (uVar2 & 0xff1c) >> 2);
      puVar10 = puVar10 + 1;
    }
    puVar6 = (ushort *)((int)puVar6 + *(int *)(this->mbr_0x4 + 0x1050));
    dVar5 = this->mbr_0x0;
    iVar7 = *(int *)(dVar5 + 0x1050);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d41f1(cls_0x5d2c8c *this)

{
  ushort *puVar1;
  ushort uVar2;
  dword dVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  
  puVar10 = *(ushort **)(this->mbr_0x4 + 0x18);
  dVar3 = this->mbr_0x0;
  puVar4 = *(ushort **)(dVar3 + 0x18);
  iVar5 = *(int *)(dVar3 + 0x1050);
  puVar8 = (ushort *)(*(int *)(dVar3 + 0x105c) * iVar5 + (int)puVar4);
  for (; puVar4 < puVar8; puVar4 = puVar4 + iVar5) {
    iVar6 = *(int *)(dVar3 + 0x1058);
    puVar11 = (ushort *)(iVar5 + (int)puVar4);
    puVar7 = puVar10;
    for (puVar9 = puVar4; puVar9 < puVar4 + iVar6; puVar9 = puVar9 + 2) {
      puVar1 = puVar11 + 1;
      uVar2 = *puVar11;
      puVar11 = puVar11 + 2;
      *puVar7 = (ushort)((*puVar1 & 0xffff00f0) + (*puVar9 & 0xffff00f0) + (uVar2 & 0xffff00f0) +
                         0x20 + (puVar9[1] & 0xffff00f0) >> 2) & 0xf0 |
                (ushort)((uint)(*puVar1 & 0xf0f) + (uint)(*puVar9 & 0xf0f) + (uint)(uVar2 & 0xf0f) +
                         0x202 + (uint)(puVar9[1] & 0xf0f) >> 2) & 0xf0f;
      puVar7 = puVar7 + 1;
    }
    puVar10 = (ushort *)((int)puVar10 + *(int *)(this->mbr_0x4 + 0x1050));
    dVar3 = this->mbr_0x0;
    iVar5 = *(int *)(dVar3 + 0x1050);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d4312(cls_0x5d2c8c *this)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  dword dVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  dVar5 = this->mbr_0x0;
  puVar6 = *(ushort **)(this->mbr_0x4 + 0x18);
  iVar7 = *(int *)(dVar5 + 0x1050);
  puVar8 = *(ushort **)(dVar5 + 0x18);
  puVar13 = (ushort *)(*(int *)(dVar5 + 0x105c) * iVar7 + (int)puVar8);
  for (; puVar8 < puVar13; puVar8 = puVar8 + iVar7) {
    iVar9 = *(int *)(dVar5 + 0x1058);
    puVar12 = (ushort *)(iVar7 + (int)puVar8);
    puVar10 = puVar6;
    for (puVar11 = puVar8; puVar11 < puVar8 + iVar9; puVar11 = puVar11 + 2) {
      uVar1 = *puVar11;
      uVar2 = puVar11[1];
      uVar3 = puVar12[1];
      uVar4 = *puVar12;
      puVar12 = puVar12 + 2;
      *puVar10 = (ushort)(byte)((byte)((uint)(uVar3 & 0xff) + (uint)(uVar1 & 0xff) +
                                       (uint)(uVar4 & 0xff) + 2 + (uint)(uVar2 & 0xff) >> 2) ^
                               (byte)((uint)(uVar3 & 0xff00) + (uVar1 & 0xffffff00) +
                                      (uint)(uVar4 & 0xff00) + 0x200 + (uint)(uVar2 & 0xff00) >> 2))
                 ^ (ushort)((uVar3 & 0xff00) + (uVar1 & 0xff00) + (uVar4 & 0xff00) + 0x200 +
                            (uVar2 & 0xff00) >> 2);
      puVar10 = puVar10 + 1;
    }
    puVar6 = (ushort *)((int)puVar6 + *(int *)(this->mbr_0x4 + 0x1050));
    dVar5 = this->mbr_0x0;
    iVar7 = *(int *)(dVar5 + 0x1050);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d445e(cls_0x5d2c8c *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  dword dVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  dVar5 = this->mbr_0x0;
  pbVar11 = *(byte **)(this->mbr_0x4 + 0x18);
  pbVar6 = *(byte **)(dVar5 + 0x18);
  iVar7 = *(int *)(dVar5 + 0x1050);
  pbVar12 = pbVar6 + *(int *)(dVar5 + 0x105c) * iVar7;
  for (; pbVar6 < pbVar12; pbVar6 = pbVar6 + iVar7 * 2) {
    iVar8 = *(int *)(dVar5 + 0x1058);
    pbVar13 = pbVar6 + iVar7;
    pbVar9 = pbVar11;
    for (pbVar10 = pbVar6; pbVar10 < pbVar6 + iVar8; pbVar10 = pbVar10 + 2) {
      bVar1 = *pbVar10;
      bVar2 = pbVar10[1];
      bVar3 = pbVar13[1];
      bVar4 = *pbVar13;
      pbVar13 = pbVar13 + 2;
      *pbVar9 = ((byte)((bVar3 & 0xf) + (bVar1 & 0xf) + (bVar4 & 0xf) + 2 + (bVar2 & 0xf) >> 2) ^
                (byte)((bVar3 & 0xffff00f0) + (bVar1 & 0xffff00f0) + (bVar4 & 0xffff00f0) + 0x20 +
                       (bVar2 & 0xffff00f0) >> 2)) & 0xf ^
                (byte)((uint)(bVar3 & 0xf0) + (uint)(bVar1 & 0xf0) + (uint)(bVar4 & 0xf0) + 0x20 +
                       (uint)(bVar2 & 0xf0) >> 2);
      pbVar9 = pbVar9 + 1;
    }
    pbVar11 = pbVar11 + *(int *)(this->mbr_0x4 + 0x1050);
    dVar5 = this->mbr_0x0;
    iVar7 = *(int *)(dVar5 + 0x1050);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d459d(cls_0x5d2c8c *this)

{
  dword dVar1;
  undefined4 uVar2;
  dword dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  uint local_14;
  uint local_10;
  uint local_8;
  
  dVar3 = this->mbr_0x4;
  dVar1 = this->mbr_0x0;
  if (*(int *)(dVar3 + 4) != *(int *)(dVar1 + 4)) {
    return 0x80004005;
  }
  if ((((*(int *)(dVar1 + 0x10) == 0) && (*(int *)(dVar3 + 0x1058) == *(int *)(dVar1 + 0x1058))) &&
      (local_14 = *(uint *)(dVar3 + 0x105c), local_14 == *(uint *)(dVar1 + 0x105c))) &&
     (*(int *)(dVar3 + 0x1060) == *(int *)(dVar1 + 0x1060))) {
    if (*(int *)(dVar3 + 0xc) == 0) {
      uVar2 = meth_0x5d343a(this);
      return uVar2;
    }
    if (*(int *)(dVar3 + 0x14) != 0) {
      if ((int *)(dVar3 + 0x30) != (int *)(dVar1 + 0x30)) {
        iVar4 = 0x100;
        bVar13 = true;
        piVar9 = (int *)(dVar3 + 0x30);
        piVar11 = (int *)(dVar1 + 0x30);
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar13 = *piVar9 == *piVar11;
          piVar9 = piVar9 + 1;
          piVar11 = piVar11 + 1;
        } while (bVar13);
        if (!bVar13) goto LAB_005d46cb;
      }
    }
    local_8 = 0;
    if (*(int *)(dVar3 + 0x1060) != 0) {
      do {
        puVar7 = (undefined4 *)(*(int *)(dVar3 + 0x1054) * local_8 + *(int *)(dVar3 + 0x18));
        puVar8 = (undefined4 *)
                 (*(int *)(this->mbr_0x0 + 0x1054) * local_8 + *(int *)(this->mbr_0x0 + 0x18));
        local_10 = 0;
        if (local_14 != 0) {
          do {
            uVar6 = *(uint *)(dVar3 + 0x1064);
            puVar10 = puVar8;
            puVar12 = puVar7;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar12 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined *)puVar12 = *(undefined *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
            dVar3 = this->mbr_0x4;
            puVar8 = (undefined4 *)((int)puVar8 + *(int *)(this->mbr_0x0 + 0x1050));
            puVar7 = (undefined4 *)((int)puVar7 + *(int *)(dVar3 + 0x1050));
            local_14 = *(uint *)(dVar3 + 0x105c);
            local_10 = local_10 + 1;
          } while (local_10 < local_14);
        }
        local_8 = local_8 + 1;
        dVar3 = this->mbr_0x4;
      } while (local_8 < *(uint *)(dVar3 + 0x1060));
    }
    uVar2 = 0;
  }
  else {
LAB_005d46cb:
    uVar2 = 0x80004005;
  }
  return uVar2;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d46d5(cls_0x5d2c8c *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int **extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  uint uVar7;
  
  FUN_0061781c();
  piVar1 = extraout_ECX[1];
  piVar2 = *extraout_ECX;
  iVar3 = piVar1[0x416];
  if (((iVar3 == piVar2[0x416]) && (piVar1[0x417] == piVar2[0x417])) &&
     (piVar1[0x418] == piVar2[0x418])) {
    pvVar4 = operator_new(iVar3 << 4);
    *(void **)(unaff_EBP + -0x10) = pvVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar4 == (void *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    else {
      FUN_004010a0(pvVar4,0x10,iVar3,&LAB_00474d39);
      *(void **)(unaff_EBP + -0x10) = pvVar4;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar6 = 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      if (extraout_ECX[1][0x418] != 0) {
        uVar5 = extraout_ECX[1][0x417];
        do {
          uVar7 = 0;
          if (uVar5 != 0) {
            do {
              (**(code **)(**extraout_ECX + 4))(uVar7,uVar6,*(undefined4 *)(unaff_EBP + -0x10));
              (**(code **)(*extraout_ECX[1] + 8))(uVar7,uVar6,*(undefined4 *)(unaff_EBP + -0x10));
              uVar5 = extraout_ECX[1][0x417];
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar5);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)extraout_ECX[1][0x418]);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(unaff_EBP + -0x10));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0x80004005;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d47c6(cls_0x5d2c8c *this)

{
  int *piVar1;
  void *pvVar2;
  int **extraout_ECX;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_0061781c();
  if (*(char *)(extraout_ECX + 2) == '\x01') {
    piVar4 = extraout_ECX[1];
    piVar1 = *extraout_ECX;
    uVar5 = piVar4[0x416];
    uVar7 = piVar1[0x416];
    *(uint *)(unaff_EBP + -0x18) = uVar5;
    if (uVar5 <= uVar7) {
      *(uint *)(unaff_EBP + -0x18) = uVar7;
    }
    uVar5 = piVar4[0x417];
    uVar7 = piVar1[0x417];
    *(uint *)(unaff_EBP + -0x20) = uVar5;
    if (uVar7 <= uVar5) {
      *(uint *)(unaff_EBP + -0x20) = uVar7;
    }
    uVar5 = piVar4[0x418];
    uVar7 = piVar1[0x418];
    *(uint *)(unaff_EBP + -0x1c) = uVar5;
    if (uVar7 <= uVar5) {
      *(uint *)(unaff_EBP + -0x1c) = uVar7;
    }
    uVar5 = *(int *)(unaff_EBP + -0x18) << 4;
    pvVar2 = operator_new(uVar5);
    *(void **)(unaff_EBP + -0x14) = pvVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    else {
      FUN_004010a0(pvVar2,0x10,*(int *)(unaff_EBP + -0x18),&LAB_00474d39);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      iVar3 = extraout_ECX[1][0x416];
      *(int *)(unaff_EBP + -0x18) = iVar3;
      pvVar2 = operator_new(iVar3 << 4);
      *(void **)(unaff_EBP + -0x14) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (pvVar2 == (void *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      else {
        FUN_004010a0(pvVar2,0x10,*(int *)(unaff_EBP + -0x18),&LAB_00474d39);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        uVar7 = *(uint *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        puVar6 = *(undefined4 **)(unaff_EBP + -0x10);
        for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        puVar6 = *(undefined4 **)(unaff_EBP + -0x18);
        for (uVar5 = (uint)(extraout_ECX[1][0x416] << 4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        if (uVar7 != 0) {
          do {
            uVar5 = *(uint *)(unaff_EBP + -0x20);
            uVar7 = 0;
            if (uVar5 != 0) {
              do {
                (**(code **)(**extraout_ECX + 4))
                          (uVar7,*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x10));
                (**(code **)(*extraout_ECX[1] + 8))
                          (uVar7,*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x10));
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar5);
            }
            piVar4 = extraout_ECX[1];
            if (uVar5 < (uint)piVar4[0x417]) {
              do {
                (**(code **)(*piVar4 + 8))
                          (uVar5,*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x18));
                piVar4 = extraout_ECX[1];
                uVar5 = uVar5 + 1;
              } while (uVar5 < (uint)piVar4[0x417]);
            }
            uVar7 = *(uint *)(unaff_EBP + -0x1c);
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          } while (*(uint *)(unaff_EBP + -0x14) < uVar7);
        }
        piVar4 = extraout_ECX[1];
        if (uVar7 < (uint)piVar4[0x418]) {
          uVar5 = piVar4[0x417];
          do {
            uVar8 = 0;
            if (uVar5 != 0) {
              do {
                (**(code **)(*piVar4 + 8))(uVar8,uVar7,*(undefined4 *)(unaff_EBP + -0x18));
                piVar4 = extraout_ECX[1];
                uVar5 = piVar4[0x417];
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar5);
            }
            piVar4 = extraout_ECX[1];
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)piVar4[0x418]);
        }
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(unaff_EBP + -0x10));
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(unaff_EBP + -0x10));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0x80004005;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d49c8(cls_0x5d2c8c *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int **extraout_ECX;
  int unaff_EBP;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  FUN_0061781c();
  if (*(char *)(extraout_ECX + 2) == '\x02') {
    iVar1 = (*extraout_ECX)[0x416];
    pvVar6 = operator_new(iVar1 << 4);
    *(void **)(unaff_EBP + -0x30) = pvVar6;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar6 == (void *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    else {
      FUN_004010a0(pvVar6,0x10,iVar1,&LAB_00474d39);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x30);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      iVar1 = extraout_ECX[1][0x416];
      pvVar6 = operator_new(iVar1 << 4);
      *(void **)(unaff_EBP + -0x30) = pvVar6;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (pvVar6 == (void *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      else {
        FUN_004010a0(pvVar6,0x10,iVar1,&LAB_00474d39);
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x30);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(unaff_EBP + -0x10));
      }
      piVar2 = *extraout_ECX;
      piVar3 = extraout_ECX[1];
      iVar1 = piVar2[0x416];
      uVar8 = piVar3[0x416];
      uVar10 = piVar3[0x417];
      uVar4 = piVar3[0x418];
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(uint *)(unaff_EBP + -0x34) = (uint)(iVar1 << 0x10) / uVar8;
      *(uint *)(unaff_EBP + -0x38) = (uint)(piVar2[0x417] << 0x10) / uVar10;
      *(uint *)(unaff_EBP + -0x3c) = (uint)(piVar2[0x418] << 0x10) / uVar4;
      if (uVar4 != 0) {
        do {
          *(undefined4 *)(unaff_EBP + -0x2c) = 0xffffffff;
          uVar8 = 0;
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          if (uVar10 != 0) {
            do {
              *(undefined4 *)(unaff_EBP + -0x20) = 0;
              *(undefined4 *)(unaff_EBP + -0x24) = 0;
              if (((*(uint *)(unaff_EBP + -0x2c) ^ uVar8) & 0xffff0000) != 0) {
                (**(code **)(**extraout_ECX + 4))
                          (uVar8 >> 0x10,*(uint *)(unaff_EBP + -0x28) >> 0x10,
                           *(undefined4 *)(unaff_EBP + -0x10));
                *(uint *)(unaff_EBP + -0x2c) = uVar8;
              }
              if (extraout_ECX[1][0x416] != 0) {
                puVar7 = *(undefined4 **)(unaff_EBP + -0x14);
                do {
                  uVar8 = *(uint *)(unaff_EBP + -0x20);
                  *(int *)(unaff_EBP + -0x20) =
                       *(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -0x34);
                  puVar9 = (undefined4 *)((uVar8 >> 0x10) * 0x10 + *(int *)(unaff_EBP + -0x10));
                  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
                  uVar8 = *(uint *)(unaff_EBP + -0x24);
                  *puVar7 = *puVar9;
                  puVar7[1] = puVar9[1];
                  puVar7[2] = puVar9[2];
                  puVar7[3] = puVar9[3];
                  puVar7 = puVar7 + 4;
                } while (uVar8 < (uint)extraout_ECX[1][0x416]);
              }
              (**(code **)(*extraout_ECX[1] + 8))
                        (*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x14));
              uVar8 = *(int *)(unaff_EBP + -0x30) + *(int *)(unaff_EBP + -0x38);
              piVar2 = extraout_ECX[1];
              *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
              uVar10 = piVar2[0x417];
              *(uint *)(unaff_EBP + -0x30) = uVar8;
            } while (*(uint *)(unaff_EBP + -0x18) < uVar10);
          }
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x3c);
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        } while (*(uint *)(unaff_EBP + -0x1c) < (uint)extraout_ECX[1][0x418]);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(unaff_EBP + -0x10));
    }
    uVar5 = 0x8007000e;
  }
  else {
    uVar5 = 0x80004005;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}



/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 __thiscall cls_0x5d2c8c::meth_0x5d4bcc(cls_0x5d2c8c *this)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  dword dVar7;
  dword dVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  void *pvVar12;
  float *pfVar13;
  float *pfVar14;
  cls_0x5d2c8c *this_00;
  float *pfVar15;
  uint uVar16;
  int unaff_EBP;
  int iVar17;
  
  FUN_0061781c();
  if (*(char *)&this_00->mbr_0x8 != '\x05') {
    uVar11 = 0x80004005;
    goto LAB_005d4fc2;
  }
  dVar7 = this_00->mbr_0x0;
  uVar16 = *(uint *)(dVar7 + 0x1058);
  dVar8 = this_00->mbr_0x4;
  if ((((*(uint *)(dVar8 + 0x1058) != uVar16 >> 1) &&
       ((*(uint *)(dVar8 + 0x1058) != 1 || (uVar16 != 1)))) ||
      ((*(uint *)(dVar8 + 0x105c) != *(uint *)(dVar7 + 0x105c) >> 1 &&
       ((*(uint *)(dVar8 + 0x105c) != 1 || (*(int *)(dVar7 + 0x105c) != 1)))))) ||
     ((*(int *)(dVar8 + 0x1060) != 1 || (*(int *)(dVar7 + 0x1060) != 1)))) {
    uVar11 = 0x80004005;
    goto LAB_005d4fc2;
  }
  if ((1 < uVar16) && ((uVar16 & 1) != 0)) {
    *(uint *)(dVar7 + 0x1058) = uVar16 & 0xfffffffe;
    piVar1 = (int *)(this_00->mbr_0x0 + 0x1064);
    *piVar1 = *piVar1 - *(int *)(this_00->mbr_0x0 + 0x1068);
  }
  puVar2 = (uint *)(this_00->mbr_0x0 + 0x105c);
  uVar16 = *puVar2;
  if (1 < uVar16) {
    *puVar2 = uVar16 & 0xfffffffe;
  }
  if ((*(byte *)((int)&this_00->mbr_0x8 + 2) & 8) == 0) {
    dVar7 = this_00->mbr_0x0;
    iVar17 = *(int *)(dVar7 + 4);
    if (((iVar17 == *(int *)(this_00->mbr_0x4 + 4)) && (1 < *(uint *)(dVar7 + 0x1058))) &&
       (1 < *(uint *)(dVar7 + 0x105c))) {
      if (iVar17 < 0x1d) {
        if (iVar17 == 0x1c) {
LAB_005d4d47:
          iVar17 = meth_0x5d400a(this_00);
        }
        else {
          switch(iVar17) {
          default:
            goto switchD_005d4cd4_caseD_14;
          case 0x15:
            iVar17 = meth_0x5d36ee(this_00);
            break;
          case 0x16:
            iVar17 = meth_0x5d3984(this_00);
            break;
          case 0x17:
            iVar17 = meth_0x5d39b5(this_00);
            break;
          case 0x18:
            iVar17 = meth_0x5d3b05(this_00);
            break;
          case 0x19:
            iVar17 = meth_0x5d3c29(this_00);
            break;
          case 0x1a:
            iVar17 = meth_0x5d3d78(this_00);
            break;
          case 0x1b:
            iVar17 = meth_0x5d3ecb(this_00);
          }
        }
      }
      else if (iVar17 == 0x1d) {
        iVar17 = meth_0x5d40a5(this_00);
      }
      else if (iVar17 == 0x1e) {
        iVar17 = meth_0x5d41f1(this_00);
      }
      else {
        if ((iVar17 == 0x28) || (iVar17 == 0x29)) goto switchD_005d4cd4_caseD_14;
        if (iVar17 == 0x32) goto LAB_005d4d47;
        if (iVar17 == 0x33) {
          iVar17 = meth_0x5d4312(this_00);
        }
        else {
          if (iVar17 != 0x34) goto switchD_005d4cd4_caseD_14;
          iVar17 = meth_0x5d445e(this_00);
        }
      }
      if (-1 < iVar17) {
        uVar11 = 0;
        goto LAB_005d4fc2;
      }
    }
  }
switchD_005d4cd4_caseD_14:
  iVar17 = *(int *)(this_00->mbr_0x4 + 0x1058);
  pvVar12 = operator_new(iVar17 << 4);
  *(void **)(unaff_EBP + -0x2c) = pvVar12;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pvVar12 == (void *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    FUN_004010a0(pvVar12,0x10,iVar17,&LAB_00474d39);
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x2c);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    iVar17 = *(int *)(this_00->mbr_0x0 + 0x1058);
    if (*(int *)(this_00->mbr_0x0 + 0x105c) == 1) {
      pvVar12 = operator_new(iVar17 << 4);
      *(void **)(unaff_EBP + -0x2c) = pvVar12;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (pvVar12 == (void *)0x0) {
        iVar17 = 0;
      }
      else {
        FUN_004010a0(pvVar12,0x10,iVar17,&LAB_00474d39);
        iVar17 = *(int *)(unaff_EBP + -0x2c);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int *)(unaff_EBP + -0x24) = iVar17;
      *(int *)(unaff_EBP + -0x14) = iVar17;
    }
    else {
      pvVar12 = operator_new(iVar17 << 5);
      *(void **)(unaff_EBP + -0x2c) = pvVar12;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (pvVar12 == (void *)0x0) {
        iVar17 = 0;
      }
      else {
        FUN_004010a0(pvVar12,0x10,iVar17 << 1,&LAB_00474d39);
        iVar17 = *(int *)(unaff_EBP + -0x2c);
      }
      iVar9 = *(int *)(this_00->mbr_0x0 + 0x1058);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int *)(unaff_EBP + -0x24) = iVar17;
      *(int *)(unaff_EBP + -0x14) = iVar17;
      iVar17 = iVar9 * 0x10 + iVar17;
    }
    *(int *)(unaff_EBP + -0x10) = iVar17;
    if (*(int *)(unaff_EBP + -0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(unaff_EBP + -0x1c));
    }
    if (*(int *)(this_00->mbr_0x0 + 0x1058) == 1) {
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x14);
      iVar17 = *(int *)(unaff_EBP + -0x10);
    }
    else {
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x14) + 0x10;
      iVar17 = *(int *)(unaff_EBP + -0x10) + 0x10;
    }
    *(int *)(unaff_EBP + -0x2c) = iVar17;
    iVar17 = *(int *)(this_00->mbr_0x4 + 0x105c);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar17 != 0) {
      do {
        iVar17 = *(int *)(unaff_EBP + -0x14);
        iVar9 = *(int *)(unaff_EBP + -0x18) * 2;
        (**(code **)(*(int *)this_00->mbr_0x0 + 4))(iVar9,0,iVar17);
        if (*(int *)(unaff_EBP + -0x10) != iVar17) {
          (**(code **)(*(int *)this_00->mbr_0x0 + 4))
                    (iVar9 + 1,0,*(undefined4 *)(unaff_EBP + -0x10));
        }
        uVar16 = 0;
        if (*(int *)(this_00->mbr_0x4 + 0x1058) != 0) {
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x1c);
          do {
            iVar17 = uVar16 * 0x20;
            pfVar13 = (float *)(*(int *)(unaff_EBP + -0x28) + iVar17);
            fVar3 = *pfVar13;
            pfVar15 = (float *)(*(int *)(unaff_EBP + -0x14) + iVar17);
            fVar4 = *pfVar15;
            puVar10 = *(undefined4 **)(unaff_EBP + -0x20);
            fVar5 = pfVar13[1];
            *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x10;
            fVar6 = pfVar15[1];
            *(float *)(unaff_EBP + -0x44) = pfVar13[2] + pfVar15[2];
            pfVar14 = (float *)(*(int *)(unaff_EBP + -0x10) + iVar17);
            *(float *)(unaff_EBP + -0x40) = pfVar13[3] + pfVar15[3];
            *(float *)(unaff_EBP + -0x5c) = fVar3 + fVar4 + *pfVar14;
            fVar3 = pfVar14[1];
            fVar4 = pfVar14[2];
            pfVar13 = (float *)(*(int *)(unaff_EBP + -0x2c) + iVar17);
            *(float *)(unaff_EBP + -0x50) = *(float *)(unaff_EBP + -0x40) + pfVar14[3];
            uVar16 = uVar16 + 1;
            *(float *)(unaff_EBP + -0x6c) = *(float *)(unaff_EBP + -0x5c) + *pfVar13;
            *(float *)(unaff_EBP + -0x68) = fVar5 + fVar6 + fVar3 + pfVar13[1];
            fVar3 = pfVar13[2];
            fVar5 = pfVar13[3];
            *(float *)(unaff_EBP + -0x3c) = *(float *)(unaff_EBP + -0x6c) * 0.25;
            *(float *)(unaff_EBP + -0x38) = *(float *)(unaff_EBP + -0x68) * 0.25;
            *(float *)(unaff_EBP + -0x34) = (*(float *)(unaff_EBP + -0x44) + fVar4 + fVar3) * 0.25;
            *(float *)(unaff_EBP + -0x30) = (*(float *)(unaff_EBP + -0x50) + fVar5) * 0.25;
            *puVar10 = *(undefined4 *)(unaff_EBP + -0x3c);
            puVar10[1] = *(undefined4 *)(unaff_EBP + -0x38);
            puVar10[2] = *(undefined4 *)(unaff_EBP + -0x34);
            puVar10[3] = *(undefined4 *)(unaff_EBP + -0x30);
          } while (uVar16 < *(uint *)(this_00->mbr_0x4 + 0x1058));
        }
        (**(code **)(*(int *)this_00->mbr_0x4 + 8))
                  (*(undefined4 *)(unaff_EBP + -0x18),0,*(undefined4 *)(unaff_EBP + -0x1c));
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      } while (*(uint *)(unaff_EBP + -0x18) < *(uint *)(this_00->mbr_0x4 + 0x105c));
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EBP + -0x24));
  }
  uVar11 = 0x8007000e;
LAB_005d4fc2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar11;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d4fef(cls_0x5d2c8c *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  void *pvVar9;
  int iVar10;
  int *piVar11;
  int **extraout_ECX;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int unaff_EBP;
  int iVar16;
  int iVar17;
  
  FUN_0061781c();
  if (*(char *)(extraout_ECX + 2) == '\x05') {
    piVar11 = *extraout_ECX;
    uVar5 = piVar11[0x416];
    piVar6 = extraout_ECX[1];
    if ((((piVar6[0x416] == uVar5 >> 1) || ((piVar6[0x416] == 1 && (uVar5 == 1)))) &&
        ((piVar6[0x417] == (uint)piVar11[0x417] >> 1 ||
         ((piVar6[0x417] == 1 && (piVar11[0x417] == 1)))))) &&
       (piVar6[0x418] == (uint)piVar11[0x418] >> 1)) {
      if ((1 < uVar5) && ((uVar5 & 1) != 0)) {
        piVar11[0x416] = uVar5 & 0xfffffffe;
        piVar11 = *extraout_ECX + 0x419;
        *piVar11 = *piVar11 - (*extraout_ECX)[0x41a];
      }
      uVar5 = (*extraout_ECX)[0x417];
      if (1 < uVar5) {
        (*extraout_ECX)[0x417] = uVar5 & 0xfffffffe;
      }
      uVar5 = (*extraout_ECX)[0x418];
      if (1 < uVar5) {
        (*extraout_ECX)[0x418] = uVar5 & 0xfffffffe;
      }
      iVar16 = extraout_ECX[1][0x416];
      pvVar9 = operator_new(iVar16 << 4);
      *(void **)(unaff_EBP + -0x14) = pvVar9;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (pvVar9 == (void *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      else {
        FUN_004010a0(pvVar9,0x10,iVar16,&LAB_00474d39);
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        iVar16 = (*extraout_ECX)[0x416];
        if ((*extraout_ECX)[0x417] == 1) {
          pvVar9 = operator_new(iVar16 << 5);
          *(void **)(unaff_EBP + -0x14) = pvVar9;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (pvVar9 == (void *)0x0) {
            iVar12 = 0;
          }
          else {
            FUN_004010a0(pvVar9,0x10,iVar16 << 1,&LAB_00474d39);
            iVar12 = *(int *)(unaff_EBP + -0x14);
          }
          iVar10 = (*extraout_ECX)[0x416];
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar16 = iVar10 * 0x10 + iVar12;
          *(int *)(unaff_EBP + -0x38) = iVar12;
          *(int *)(unaff_EBP + -0x18) = iVar12;
          *(int *)(unaff_EBP + -0x30) = iVar16;
          *(int *)(unaff_EBP + -0x1c) = iVar12;
          *(int *)(unaff_EBP + -0x28) = iVar16;
          iVar17 = iVar16;
        }
        else {
          pvVar9 = operator_new(iVar16 << 6);
          *(void **)(unaff_EBP + -0x14) = pvVar9;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          if (pvVar9 == (void *)0x0) {
            iVar16 = 0;
          }
          else {
            FUN_004010a0(pvVar9,0x10,iVar16 << 2,&LAB_00474d39);
            iVar16 = *(int *)(unaff_EBP + -0x14);
          }
          iVar10 = (*extraout_ECX)[0x416];
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(int *)(unaff_EBP + -0x30) = iVar10 * 0x10 + iVar16;
          iVar17 = *(int *)(unaff_EBP + -0x30);
          *(int *)(unaff_EBP + -0x1c) = iVar10 * 0x20 + iVar16;
          *(int *)(unaff_EBP + -0x28) = iVar10 * 0x30 + iVar16;
          iVar12 = *(int *)(unaff_EBP + -0x1c);
          *(int *)(unaff_EBP + -0x38) = iVar16;
          *(int *)(unaff_EBP + -0x18) = iVar16;
          iVar16 = *(int *)(unaff_EBP + -0x28);
        }
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          if (iVar10 == 1) {
            *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x18);
            *(int *)(unaff_EBP + -0x40) = iVar17;
          }
          else {
            *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x18) + 0x10;
            iVar12 = iVar12 + 0x10;
            *(int *)(unaff_EBP + -0x40) = iVar17 + 0x10;
            iVar16 = iVar16 + 0x10;
          }
          piVar11 = extraout_ECX[1];
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          iVar10 = piVar11[0x418];
          *(int *)(unaff_EBP + -0x44) = iVar12;
          *(int *)(unaff_EBP + -0x14) = iVar16;
          if (iVar10 != 0) {
            do {
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
              if (piVar11[0x417] != 0) {
                do {
                  iVar16 = *(int *)(unaff_EBP + -0x24) * 2;
                  (**(code **)(**extraout_ECX + 4))
                            (*(int *)(unaff_EBP + -0x10) * 2,iVar16,
                             *(undefined4 *)(unaff_EBP + -0x18));
                  if (iVar17 != *(int *)(unaff_EBP + -0x18)) {
                    (**(code **)(**extraout_ECX + 4))
                              (*(int *)(unaff_EBP + -0x10) * 2,iVar16 + 1,iVar17);
                  }
                  if (*(int *)(unaff_EBP + -0x1c) != *(int *)(unaff_EBP + -0x18)) {
                    (**(code **)(**extraout_ECX + 4))
                              (*(int *)(unaff_EBP + -0x10) * 2 + 1,iVar16,
                               *(int *)(unaff_EBP + -0x1c));
                  }
                  iVar10 = *(int *)(unaff_EBP + -0x28);
                  if ((iVar10 != iVar17) && (iVar10 != *(int *)(unaff_EBP + -0x1c))) {
                    (**(code **)(**extraout_ECX + 4))
                              (*(int *)(unaff_EBP + -0x10) * 2 + 1,iVar16 + 1,iVar10);
                  }
                  piVar11 = extraout_ECX[1];
                  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
                  if (piVar11[0x416] != 0) {
                    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x20);
                    do {
                      iVar16 = *(int *)(unaff_EBP + -0x2c) * 0x20;
                      pfVar13 = (float *)(*(int *)(unaff_EBP + -0x3c) + iVar16);
                      fVar1 = *pfVar13;
                      pfVar15 = (float *)(*(int *)(unaff_EBP + -0x18) + iVar16);
                      fVar2 = *pfVar15;
                      fVar3 = pfVar13[1];
                      fVar4 = pfVar15[1];
                      *(float *)(unaff_EBP + -0x8c) = pfVar13[2] + pfVar15[2];
                      pfVar14 = (float *)(iVar16 + iVar17);
                      *(float *)(unaff_EBP + -0x88) = pfVar13[3] + pfVar15[3];
                      *(float *)(unaff_EBP + -0xb4) = fVar1 + fVar2 + *pfVar14;
                      fVar1 = pfVar14[1];
                      fVar2 = pfVar14[2];
                      pfVar13 = (float *)(*(int *)(unaff_EBP + -0x40) + iVar16);
                      *(float *)(unaff_EBP + -0xa8) = *(float *)(unaff_EBP + -0x88) + pfVar14[3];
                      *(float *)(unaff_EBP + -0x84) = *(float *)(unaff_EBP + -0xb4) + *pfVar13;
                      *(float *)(unaff_EBP + -0x80) = fVar3 + fVar4 + fVar1 + pfVar13[1];
                      fVar1 = pfVar13[2];
                      fVar3 = pfVar13[3];
                      pfVar14 = (float *)(*(int *)(unaff_EBP + -0x1c) + iVar16);
                      *(float *)(unaff_EBP + -0x54) = *(float *)(unaff_EBP + -0x84) + *pfVar14;
                      *(float *)(unaff_EBP + -0x50) = *(float *)(unaff_EBP + -0x80) + pfVar14[1];
                      *(float *)(unaff_EBP + -0x4c) =
                           *(float *)(unaff_EBP + -0x8c) + fVar2 + fVar1 + pfVar14[2];
                      fVar1 = pfVar14[3];
                      pfVar14 = (float *)(*(int *)(unaff_EBP + -0x44) + iVar16);
                      fVar2 = *pfVar14;
                      *(float *)(unaff_EBP + -0x60) = *(float *)(unaff_EBP + -0x50) + pfVar14[1];
                      *(float *)(unaff_EBP + -0x5c) = *(float *)(unaff_EBP + -0x4c) + pfVar14[2];
                      *(float *)(unaff_EBP + -0x58) =
                           *(float *)(unaff_EBP + -0xa8) + fVar3 + fVar1 + pfVar14[3];
                      pfVar14 = (float *)(*(int *)(unaff_EBP + -0x28) + iVar16);
                      fVar1 = *pfVar14;
                      puVar7 = *(undefined4 **)(unaff_EBP + -0x34);
                      *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 0x10;
                      fVar3 = pfVar14[1];
                      *(float *)(unaff_EBP + -0x9c) = *(float *)(unaff_EBP + -0x5c) + pfVar14[2];
                      fVar4 = pfVar14[3];
                      pfVar14 = (float *)(iVar16 + *(int *)(unaff_EBP + -0x14));
                      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
                      *(float *)(unaff_EBP + -0x98) = *(float *)(unaff_EBP + -0x58) + fVar4;
                      uVar5 = *(uint *)(unaff_EBP + -0x2c);
                      *(float *)(unaff_EBP + -0xc4) =
                           *(float *)(unaff_EBP + -0x54) + fVar2 + fVar1 + *pfVar14;
                      fVar1 = pfVar14[1];
                      fVar2 = pfVar14[2];
                      *(float *)(unaff_EBP + -0xb8) = *(float *)(unaff_EBP + -0x98) + pfVar14[3];
                      *(float *)(unaff_EBP + -0x74) = *(float *)(unaff_EBP + -0xc4) * 0.125;
                      *(float *)(unaff_EBP + -0x70) =
                           (*(float *)(unaff_EBP + -0x60) + fVar3 + fVar1) * 0.125;
                      *(float *)(unaff_EBP + -0x6c) =
                           (*(float *)(unaff_EBP + -0x9c) + fVar2) * 0.125;
                      *(float *)(unaff_EBP + -0x68) = *(float *)(unaff_EBP + -0xb8) * 0.125;
                      *puVar7 = *(undefined4 *)(unaff_EBP + -0x74);
                      puVar7[1] = *(undefined4 *)(unaff_EBP + -0x70);
                      puVar7[2] = *(undefined4 *)(unaff_EBP + -0x6c);
                      puVar7[3] = *(undefined4 *)(unaff_EBP + -0x68);
                      iVar17 = *(int *)(unaff_EBP + -0x30);
                    } while (uVar5 < (uint)extraout_ECX[1][0x416]);
                  }
                  (**(code **)(*extraout_ECX[1] + 8))
                            (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x20));
                  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
                } while (*(uint *)(unaff_EBP + -0x10) < (uint)extraout_ECX[1][0x417]);
              }
              *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
              piVar11 = extraout_ECX[1];
            } while (*(uint *)(unaff_EBP + -0x24) < (uint)piVar11[0x418]);
          }
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(unaff_EBP + -0x38));
        }
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(unaff_EBP + -0x20));
      }
      uVar8 = 0x8007000e;
    }
    else {
      uVar8 = 0x80004005;
    }
  }
  else {
    uVar8 = 0x80004005;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d5581(cls_0x5d2c8c *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  void *pvVar14;
  int iVar15;
  int *piVar16;
  int **extraout_ECX;
  float *pfVar17;
  int iVar18;
  int unaff_EBP;
  int **ppiVar19;
  int *piVar20;
  
  FUN_0061781c();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  piVar20 = extraout_ECX[2];
  *(int ***)(unaff_EBP + -0x40) = extraout_ECX;
  if ((char)piVar20 == '\x03') {
    *(uint *)(unaff_EBP + -0x10) = ~((uint)piVar20 >> 0x11) & 1;
    puVar13 = FUN_005d5481(~((uint)piVar20 >> 0x10) & 1);
    *(uint **)(unaff_EBP + -0x30) = puVar13;
    puVar13 = FUN_005d5481(*(int *)(unaff_EBP + -0x10));
    *(uint **)(unaff_EBP + -0x10) = puVar13;
    if ((*(int *)(unaff_EBP + -0x30) != 0) && (puVar13 != (uint *)0x0)) {
      iVar15 = extraout_ECX[1][0x416];
      pvVar14 = operator_new(iVar15 << 4);
      *(void **)(unaff_EBP + -0x14) = pvVar14;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (pvVar14 == (void *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        iVar15 = *(int *)(unaff_EBP + -0x20);
      }
      else {
        FUN_004010a0(pvVar14,0x10,iVar15,&LAB_00474d39);
        iVar15 = *(int *)(unaff_EBP + -0x14);
        *(int *)(unaff_EBP + -0x20) = iVar15;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int *)(unaff_EBP + -0x14) = iVar15;
      if (iVar15 != 0) {
        iVar15 = (*extraout_ECX)[0x416];
        pvVar14 = operator_new(iVar15 << 5);
        *(void **)(unaff_EBP + -0x1c) = pvVar14;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (pvVar14 == (void *)0x0) {
          iVar15 = 0;
        }
        else {
          FUN_004010a0(pvVar14,0x10,iVar15 << 1,&LAB_00474d39);
          iVar15 = *(int *)(unaff_EBP + -0x1c);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(int *)(unaff_EBP + -0x1c) = iVar15;
        if (iVar15 != 0) {
          iVar9 = (*extraout_ECX)[0x416];
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
          *(int *)(unaff_EBP + -0x2c) = iVar15;
          if (extraout_ECX[1][0x417] != 0) {
            piVar20 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
            *(int **)(unaff_EBP + -0x38) = piVar20;
            iVar15 = iVar9 * 0x10 + iVar15;
            ppiVar19 = extraout_ECX;
            do {
              iVar9 = piVar20[-2];
              *(undefined4 *)(unaff_EBP + -0x34) = 0;
              iVar18 = iVar15;
              if (iVar9 != *(int *)(unaff_EBP + -0x24)) {
                iVar10 = *(int *)(unaff_EBP + -0x18);
                if (iVar9 == iVar10) {
                  iVar18 = *(int *)(unaff_EBP + -0x2c);
                  *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
                  *(int *)(unaff_EBP + -0x2c) = iVar15;
                  *(int *)(unaff_EBP + -0x24) = iVar10;
                }
                else {
                  piVar16 = *ppiVar19;
                  *(int *)(unaff_EBP + -0x24) = iVar9;
                  (**(code **)(*piVar16 + 4))
                            (*(undefined4 *)(unaff_EBP + -0x24),0,*(undefined4 *)(unaff_EBP + -0x2c)
                            );
                }
              }
              iVar15 = *piVar20;
              if (iVar15 != *(int *)(unaff_EBP + -0x18)) {
                iVar9 = **ppiVar19;
                *(int *)(unaff_EBP + -0x18) = iVar15;
                (**(code **)(iVar9 + 4))(iVar15,0,iVar18);
              }
              if (ppiVar19[1][0x416] != 0) {
                piVar16 = (int *)(*(int *)(unaff_EBP + -0x30) + 8);
                *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x20);
                do {
                  iVar15 = *piVar16;
                  fVar2 = (float)piVar16[1];
                  pfVar1 = (float *)(iVar15 * 0x10 + iVar18);
                  *(float *)(unaff_EBP + -0x50) = fVar2 * *pfVar1;
                  *(float *)(unaff_EBP + -0x4c) = fVar2 * pfVar1[1];
                  *(float *)(unaff_EBP + -0x48) = fVar2 * pfVar1[2];
                  fVar3 = pfVar1[3];
                  iVar9 = piVar16[-2];
                  fVar4 = (float)piVar16[-1];
                  pfVar1 = (float *)(iVar9 * 0x10 + iVar18);
                  fVar5 = *pfVar1;
                  *(float *)(unaff_EBP + -0x9c) = fVar4 * pfVar1[1];
                  *(float *)(unaff_EBP + -0x98) = fVar4 * pfVar1[2];
                  pfVar17 = (float *)(iVar15 * 0x10 + *(int *)(unaff_EBP + -0x2c));
                  *(float *)(unaff_EBP + -0x94) = fVar4 * pfVar1[3];
                  *(float *)(unaff_EBP + -0x80) = fVar4 * fVar5 + *(float *)(unaff_EBP + -0x50);
                  *(float *)(unaff_EBP + -0x7c) =
                       *(float *)(unaff_EBP + -0x9c) + *(float *)(unaff_EBP + -0x4c);
                  *(float *)(unaff_EBP + -0x78) =
                       *(float *)(unaff_EBP + -0x98) + *(float *)(unaff_EBP + -0x48);
                  fVar4 = (float)piVar20[1];
                  *(float *)(unaff_EBP + -0xb0) = *(float *)(unaff_EBP + -0x80) * fVar4;
                  *(float *)(unaff_EBP + -0xac) = *(float *)(unaff_EBP + -0x7c) * fVar4;
                  *(float *)(unaff_EBP + -0xa8) = *(float *)(unaff_EBP + -0x78) * fVar4;
                  fVar5 = (float)piVar16[1];
                  *(float *)(unaff_EBP + -0xc0) = fVar5 * *pfVar17;
                  *(float *)(unaff_EBP + -0xbc) = fVar5 * pfVar17[1];
                  *(float *)(unaff_EBP + -0xb8) = fVar5 * pfVar17[2];
                  fVar6 = pfVar17[3];
                  pfVar1 = (float *)(iVar9 * 0x10 + *(int *)(unaff_EBP + -0x2c));
                  fVar7 = (float)piVar16[-1];
                  piVar16 = piVar16 + 4;
                  fVar8 = *pfVar1;
                  *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
                  uVar11 = *(uint *)(unaff_EBP + -0x34);
                  *(float *)(unaff_EBP + -0x5c) = fVar7 * pfVar1[1];
                  *(float *)(unaff_EBP + -0x58) = fVar7 * pfVar1[2];
                  iVar15 = *(int *)(unaff_EBP + -0x40);
                  *(float *)(unaff_EBP + -0x54) = fVar7 * pfVar1[3];
                  *(float *)(unaff_EBP + -0x70) = fVar7 * fVar8 + *(float *)(unaff_EBP + -0xc0);
                  *(float *)(unaff_EBP + -0x6c) =
                       *(float *)(unaff_EBP + -0x5c) + *(float *)(unaff_EBP + -0xbc);
                  *(float *)(unaff_EBP + -0x68) =
                       *(float *)(unaff_EBP + -0x58) + *(float *)(unaff_EBP + -0xb8);
                  fVar7 = (float)piVar20[-1];
                  puVar12 = *(undefined4 **)(unaff_EBP + -0x3c);
                  *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 0x10;
                  *(float *)(unaff_EBP + -0x90) = *(float *)(unaff_EBP + -0x70) * fVar7;
                  *(float *)(unaff_EBP + -0x8c) = *(float *)(unaff_EBP + -0x6c) * fVar7;
                  *(float *)(unaff_EBP + -0x88) = *(float *)(unaff_EBP + -0x68) * fVar7;
                  *(float *)(unaff_EBP + -0xd0) =
                       *(float *)(unaff_EBP + -0x90) + *(float *)(unaff_EBP + -0xb0);
                  *(float *)(unaff_EBP + -0xcc) =
                       *(float *)(unaff_EBP + -0x8c) + *(float *)(unaff_EBP + -0xac);
                  *(float *)(unaff_EBP + -200) =
                       *(float *)(unaff_EBP + -0x88) + *(float *)(unaff_EBP + -0xa8);
                  *(float *)(unaff_EBP + -0xc4) =
                       (*(float *)(unaff_EBP + -0x54) + fVar5 * fVar6) * fVar7 +
                       (*(float *)(unaff_EBP + -0x94) + fVar2 * fVar3) * fVar4;
                  *puVar12 = *(undefined4 *)(unaff_EBP + -0xd0);
                  puVar12[1] = *(undefined4 *)(unaff_EBP + -0xcc);
                  puVar12[2] = *(undefined4 *)(unaff_EBP + -200);
                  puVar12[3] = *(undefined4 *)(unaff_EBP + -0xc4);
                  piVar20 = *(int **)(unaff_EBP + -0x38);
                } while (uVar11 < *(uint *)(*(int *)(iVar15 + 4) + 0x1058));
                ppiVar19 = *(int ***)(unaff_EBP + -0x40);
              }
              (**(code **)(*ppiVar19[1] + 8))
                        (*(undefined4 *)(unaff_EBP + -0x28),0,*(undefined4 *)(unaff_EBP + -0x20));
              piVar16 = ppiVar19[1];
              piVar20 = piVar20 + 4;
              *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
              uVar11 = piVar16[0x417];
              *(int **)(unaff_EBP + -0x38) = piVar20;
              iVar15 = iVar18;
            } while (*(uint *)(unaff_EBP + -0x28) < uVar11);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EBP + -0x30));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0x80004005;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d5967(cls_0x5d2c8c *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  void *pvVar20;
  int *piVar21;
  int **extraout_ECX;
  int iVar22;
  int iVar23;
  int *piVar24;
  int unaff_EBP;
  float *pfVar25;
  float *pfVar26;
  int **ppiVar27;
  int iVar28;
  
  FUN_0061781c();
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  piVar24 = extraout_ECX[2];
  *(int ***)(unaff_EBP + -0x54) = extraout_ECX;
  if ((char)piVar24 == '\x03') {
    *(uint *)(unaff_EBP + -0x20) = ~((uint)piVar24 >> 0x12) & 1;
    *(uint *)(unaff_EBP + -0x3c) = ~((uint)piVar24 >> 0x11) & 1;
    puVar19 = FUN_005d5481(~((uint)piVar24 >> 0x10) & 1);
    *(uint **)(unaff_EBP + -0x48) = puVar19;
    puVar19 = FUN_005d5481(*(int *)(unaff_EBP + -0x3c));
    *(uint **)(unaff_EBP + -0x4c) = puVar19;
    puVar19 = FUN_005d5481(*(int *)(unaff_EBP + -0x20));
    *(uint **)(unaff_EBP + -0x3c) = puVar19;
    if (((*(int *)(unaff_EBP + -0x48) != 0) && (*(int *)(unaff_EBP + -0x4c) != 0)) &&
       (puVar19 != (uint *)0x0)) {
      iVar22 = extraout_ECX[1][0x416];
      pvVar20 = operator_new(iVar22 << 4);
      *(void **)(unaff_EBP + -0x44) = pvVar20;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (pvVar20 == (void *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
        iVar22 = *(int *)(unaff_EBP + -0x34);
      }
      else {
        FUN_004010a0(pvVar20,0x10,iVar22,&LAB_00474d39);
        iVar22 = *(int *)(unaff_EBP + -0x44);
        *(int *)(unaff_EBP + -0x34) = iVar22;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int *)(unaff_EBP + -0x44) = iVar22;
      if (iVar22 != 0) {
        iVar22 = (*extraout_ECX)[0x416];
        pvVar20 = operator_new(iVar22 << 6);
        *(void **)(unaff_EBP + -0x30) = pvVar20;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (pvVar20 == (void *)0x0) {
          iVar22 = 0;
        }
        else {
          FUN_004010a0(pvVar20,0x10,iVar22 << 2,&LAB_00474d39);
          iVar22 = *(int *)(unaff_EBP + -0x30);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(int *)(unaff_EBP + -0x30) = iVar22;
        if (iVar22 != 0) {
          iVar23 = (*extraout_ECX)[0x416];
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
          *(int *)(unaff_EBP + -0x1c) = iVar23 * 0x10 + iVar22;
          iVar28 = iVar23 * 0x30 + iVar22;
          *(int *)(unaff_EBP + -0x28) = iVar22;
          piVar24 = extraout_ECX[1];
          iVar18 = piVar24[0x418];
          *(int *)(unaff_EBP + -0x40) = iVar23 * 0x20 + iVar22;
          *(int *)(unaff_EBP + -0x2c) = iVar28;
          if (iVar18 != 0) {
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x3c) + 8;
            ppiVar27 = extraout_ECX;
            do {
              *(undefined4 *)(unaff_EBP + -0x24) = 0;
              *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
              *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
              if (piVar24[0x417] != 0) {
                piVar24 = (int *)(*(int *)(unaff_EBP + -0x4c) + 8);
                do {
                  iVar22 = piVar24[-2];
                  *(undefined4 *)(unaff_EBP + -0x20) = 0;
                  if (iVar22 != *(int *)(unaff_EBP + -0x18)) {
                    iVar23 = *(int *)(unaff_EBP + -0x14);
                    if (iVar22 == iVar23) {
                      *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
                      *(int *)(unaff_EBP + -0x18) = iVar23;
                      uVar15 = *(undefined4 *)(unaff_EBP + -0x1c);
                      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x28);
                      iVar22 = *(int *)(unaff_EBP + -0x40);
                      *(int *)(unaff_EBP + -0x40) = iVar28;
                      *(undefined4 *)(unaff_EBP + -0x28) = uVar15;
                      *(int *)(unaff_EBP + -0x2c) = iVar22;
                      iVar28 = iVar22;
                    }
                    else {
                      uVar15 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + -8);
                      piVar21 = *ppiVar27;
                      *(int *)(unaff_EBP + -0x18) = iVar22;
                      (**(code **)(*piVar21 + 4))
                                (*(undefined4 *)(unaff_EBP + -0x18),uVar15,
                                 *(undefined4 *)(unaff_EBP + -0x28));
                      (**(code **)(**ppiVar27 + 4))
                                (*(undefined4 *)(unaff_EBP + -0x18),
                                 **(undefined4 **)(unaff_EBP + -0x10),
                                 *(undefined4 *)(unaff_EBP + -0x40));
                    }
                  }
                  if (*piVar24 != *(int *)(unaff_EBP + -0x14)) {
                    uVar15 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + -8);
                    piVar21 = *ppiVar27;
                    *(int *)(unaff_EBP + -0x14) = *piVar24;
                    (**(code **)(*piVar21 + 4))
                              (*(undefined4 *)(unaff_EBP + -0x14),uVar15,
                               *(undefined4 *)(unaff_EBP + -0x1c));
                    (**(code **)(**ppiVar27 + 4))
                              (*(undefined4 *)(unaff_EBP + -0x14),
                               **(undefined4 **)(unaff_EBP + -0x10),iVar28);
                  }
                  if (ppiVar27[1][0x416] != 0) {
                    piVar21 = (int *)(*(int *)(unaff_EBP + -0x48) + 8);
                    *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x34);
                    do {
                      fVar1 = (float)piVar21[1];
                      iVar22 = *piVar21 * 0x10;
                      pfVar25 = (float *)(iVar22 + iVar28);
                      *(float *)(unaff_EBP + -0x114) = fVar1 * *pfVar25;
                      *(float *)(unaff_EBP + -0x110) = fVar1 * pfVar25[1];
                      *(float *)(unaff_EBP + -0x10c) = fVar1 * pfVar25[2];
                      fVar2 = pfVar25[3];
                      fVar3 = (float)piVar21[-1];
                      iVar23 = piVar21[-2] * 0x10;
                      pfVar25 = (float *)(iVar23 + iVar28);
                      fVar4 = *pfVar25;
                      *(float *)(unaff_EBP + -0x60) = fVar3 * pfVar25[1];
                      *(float *)(unaff_EBP + -0x5c) = fVar3 * pfVar25[2];
                      pfVar26 = (float *)(iVar22 + *(int *)(unaff_EBP + -0x40));
                      *(float *)(unaff_EBP + -0x58) = fVar3 * pfVar25[3];
                      *(float *)(unaff_EBP + -0x94) = fVar3 * fVar4 + *(float *)(unaff_EBP + -0x114)
                      ;
                      *(float *)(unaff_EBP + -0x90) =
                           *(float *)(unaff_EBP + -0x60) + *(float *)(unaff_EBP + -0x110);
                      *(float *)(unaff_EBP + -0x8c) =
                           *(float *)(unaff_EBP + -0x5c) + *(float *)(unaff_EBP + -0x10c);
                      fVar3 = (float)piVar24[1];
                      *(float *)(unaff_EBP + -0x174) = *(float *)(unaff_EBP + -0x94) * fVar3;
                      *(float *)(unaff_EBP + -0x170) = *(float *)(unaff_EBP + -0x90) * fVar3;
                      *(float *)(unaff_EBP + -0x16c) = *(float *)(unaff_EBP + -0x8c) * fVar3;
                      fVar4 = (float)piVar21[1];
                      *(float *)(unaff_EBP + -0x194) = fVar4 * *pfVar26;
                      *(float *)(unaff_EBP + -400) = fVar4 * pfVar26[1];
                      *(float *)(unaff_EBP + -0x18c) = fVar4 * pfVar26[2];
                      fVar5 = pfVar26[3];
                      pfVar25 = (float *)(iVar23 + *(int *)(unaff_EBP + -0x40));
                      fVar6 = (float)piVar21[-1];
                      fVar7 = *pfVar25;
                      *(float *)(unaff_EBP + -0xb0) = fVar6 * pfVar25[1];
                      *(float *)(unaff_EBP + -0xac) = fVar6 * pfVar25[2];
                      *(float *)(unaff_EBP + -0xa8) = fVar6 * pfVar25[3];
                      *(float *)(unaff_EBP + -0x134) =
                           fVar6 * fVar7 + *(float *)(unaff_EBP + -0x194);
                      *(float *)(unaff_EBP + -0x130) =
                           *(float *)(unaff_EBP + -0xb0) + *(float *)(unaff_EBP + -400);
                      *(float *)(unaff_EBP + -300) =
                           *(float *)(unaff_EBP + -0xac) + *(float *)(unaff_EBP + -0x18c);
                      fVar6 = (float)piVar24[-1];
                      *(float *)(unaff_EBP + -0xd4) = *(float *)(unaff_EBP + -0x134) * fVar6;
                      *(float *)(unaff_EBP + -0xd0) = *(float *)(unaff_EBP + -0x130) * fVar6;
                      *(float *)(unaff_EBP + -0xcc) = *(float *)(unaff_EBP + -300) * fVar6;
                      *(float *)(unaff_EBP + -0xf4) =
                           *(float *)(unaff_EBP + -0xd4) + *(float *)(unaff_EBP + -0x174);
                      *(float *)(unaff_EBP + -0xf0) =
                           *(float *)(unaff_EBP + -0xd0) + *(float *)(unaff_EBP + -0x170);
                      *(float *)(unaff_EBP + -0xec) =
                           *(float *)(unaff_EBP + -0xcc) + *(float *)(unaff_EBP + -0x16c);
                      fVar7 = *(float *)(*(int *)(unaff_EBP + -0x10) + 4);
                      *(float *)(unaff_EBP + -0x184) = *(float *)(unaff_EBP + -0xf4) * fVar7;
                      *(float *)(unaff_EBP + -0x180) = *(float *)(unaff_EBP + -0xf0) * fVar7;
                      *(float *)(unaff_EBP + -0x17c) = *(float *)(unaff_EBP + -0xec) * fVar7;
                      fVar8 = (float)piVar21[1];
                      pfVar25 = (float *)(*(int *)(unaff_EBP + -0x1c) + iVar22);
                      *(float *)(unaff_EBP + -0x154) = fVar8 * *pfVar25;
                      *(float *)(unaff_EBP + -0x150) = fVar8 * pfVar25[1];
                      *(float *)(unaff_EBP + -0x14c) = fVar8 * pfVar25[2];
                      fVar9 = pfVar25[3];
                      fVar10 = (float)piVar21[-1];
                      pfVar26 = (float *)(*(int *)(unaff_EBP + -0x1c) + iVar23);
                      fVar11 = *pfVar26;
                      *(float *)(unaff_EBP + -0x70) = fVar10 * pfVar26[1];
                      *(float *)(unaff_EBP + -0x6c) = fVar10 * pfVar26[2];
                      pfVar25 = (float *)(iVar22 + *(int *)(unaff_EBP + -0x28));
                      *(float *)(unaff_EBP + -0x68) = fVar10 * pfVar26[3];
                      *(float *)(unaff_EBP + -0x84) =
                           fVar10 * fVar11 + *(float *)(unaff_EBP + -0x154);
                      *(float *)(unaff_EBP + -0x80) =
                           *(float *)(unaff_EBP + -0x70) + *(float *)(unaff_EBP + -0x150);
                      *(float *)(unaff_EBP + -0x7c) =
                           *(float *)(unaff_EBP + -0x6c) + *(float *)(unaff_EBP + -0x14c);
                      fVar10 = (float)piVar24[1];
                      *(float *)(unaff_EBP + -0x124) = *(float *)(unaff_EBP + -0x84) * fVar10;
                      *(float *)(unaff_EBP + -0x120) = *(float *)(unaff_EBP + -0x80) * fVar10;
                      *(float *)(unaff_EBP + -0x11c) = *(float *)(unaff_EBP + -0x7c) * fVar10;
                      fVar11 = (float)piVar21[1];
                      *(float *)(unaff_EBP + -0xa4) = fVar11 * *pfVar25;
                      *(float *)(unaff_EBP + -0xa0) = fVar11 * pfVar25[1];
                      *(float *)(unaff_EBP + -0x9c) = fVar11 * pfVar25[2];
                      fVar12 = pfVar25[3];
                      fVar13 = (float)piVar21[-1];
                      pfVar25 = (float *)(iVar23 + *(int *)(unaff_EBP + -0x28));
                      fVar14 = *pfVar25;
                      *(float *)(unaff_EBP + -0xc0) = fVar13 * pfVar25[1];
                      *(float *)(unaff_EBP + -0xbc) = fVar13 * pfVar25[2];
                      *(float *)(unaff_EBP + -0xb8) = fVar13 * pfVar25[3];
                      *(float *)(unaff_EBP + -0xe4) =
                           fVar13 * fVar14 + *(float *)(unaff_EBP + -0xa4);
                      *(float *)(unaff_EBP + -0xe0) =
                           *(float *)(unaff_EBP + -0xc0) + *(float *)(unaff_EBP + -0xa0);
                      *(float *)(unaff_EBP + -0xdc) =
                           *(float *)(unaff_EBP + -0xbc) + *(float *)(unaff_EBP + -0x9c);
                      fVar13 = (float)piVar24[-1];
                      *(float *)(unaff_EBP + -0x104) = *(float *)(unaff_EBP + -0xe4) * fVar13;
                      *(float *)(unaff_EBP + -0x100) = *(float *)(unaff_EBP + -0xe0) * fVar13;
                      *(float *)(unaff_EBP + -0xfc) = *(float *)(unaff_EBP + -0xdc) * fVar13;
                      *(float *)(unaff_EBP + -0x144) =
                           *(float *)(unaff_EBP + -0x104) + *(float *)(unaff_EBP + -0x124);
                      *(float *)(unaff_EBP + -0x140) =
                           *(float *)(unaff_EBP + -0x100) + *(float *)(unaff_EBP + -0x120);
                      *(float *)(unaff_EBP + -0x13c) =
                           *(float *)(unaff_EBP + -0xfc) + *(float *)(unaff_EBP + -0x11c);
                      fVar14 = *(float *)(*(int *)(unaff_EBP + -0x10) + -4);
                      *(float *)(unaff_EBP + -0x164) = *(float *)(unaff_EBP + -0x144) * fVar14;
                      *(float *)(unaff_EBP + -0x160) = *(float *)(unaff_EBP + -0x140) * fVar14;
                      *(float *)(unaff_EBP + -0x15c) = *(float *)(unaff_EBP + -0x13c) * fVar14;
                      puVar16 = *(undefined4 **)(unaff_EBP + -0x50);
                      iVar22 = *(int *)(unaff_EBP + -0x54);
                      *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x50) + 0x10;
                      *(float *)(unaff_EBP + -0x1a4) =
                           *(float *)(unaff_EBP + -0x164) + *(float *)(unaff_EBP + -0x184);
                      piVar21 = piVar21 + 4;
                      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
                      uVar17 = *(uint *)(unaff_EBP + -0x20);
                      *(float *)(unaff_EBP + -0x1a0) =
                           *(float *)(unaff_EBP + -0x160) + *(float *)(unaff_EBP + -0x180);
                      *(float *)(unaff_EBP + -0x19c) =
                           *(float *)(unaff_EBP + -0x15c) + *(float *)(unaff_EBP + -0x17c);
                      *(float *)(unaff_EBP + -0x198) =
                           ((*(float *)(unaff_EBP + -0xb8) + fVar11 * fVar12) * fVar13 +
                           (*(float *)(unaff_EBP + -0x68) + fVar8 * fVar9) * fVar10) * fVar14 +
                           ((*(float *)(unaff_EBP + -0xa8) + fVar4 * fVar5) * fVar6 +
                           (*(float *)(unaff_EBP + -0x58) + fVar1 * fVar2) * fVar3) * fVar7;
                      *puVar16 = *(undefined4 *)(unaff_EBP + -0x1a4);
                      puVar16[1] = *(undefined4 *)(unaff_EBP + -0x1a0);
                      puVar16[2] = *(undefined4 *)(unaff_EBP + -0x19c);
                      puVar16[3] = *(undefined4 *)(unaff_EBP + -0x198);
                      iVar28 = *(int *)(unaff_EBP + -0x2c);
                    } while (uVar17 < *(uint *)(*(int *)(iVar22 + 4) + 0x1058));
                    ppiVar27 = *(int ***)(unaff_EBP + -0x54);
                  }
                  (**(code **)(*ppiVar27[1] + 8))
                            (*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x38),
                             *(undefined4 *)(unaff_EBP + -0x34));
                  piVar21 = ppiVar27[1];
                  piVar24 = piVar24 + 4;
                  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
                } while (*(uint *)(unaff_EBP + -0x24) < (uint)piVar21[0x417]);
              }
              *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x10;
              *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
              piVar24 = ppiVar27[1];
            } while (*(uint *)(unaff_EBP + -0x38) < (uint)piVar24[0x418]);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EBP + -0x48));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0x80004005;
}



undefined4 __thiscall cls_0x5d2c8c::meth_0x5d6098(cls_0x5d2c8c *this)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int **extraout_ECX;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  int unaff_EBP;
  float *pfVar10;
  undefined4 *puVar11;
  
  FUN_0061781c();
  piVar2 = extraout_ECX[1];
  iVar6 = piVar2[0x418];
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  if ((iVar6 != 1) || ((*extraout_ECX)[0x418] != 1)) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return 0x80004005;
  }
  piVar3 = extraout_ECX[2];
  piVar2 = FUN_005d2cbd((*extraout_ECX)[0x416],piVar2[0x416],~((uint)piVar3 >> 0x10) & 1);
  *(int **)(unaff_EBP + -0x38) = piVar2;
  if (piVar2 != (int *)0x0) {
    piVar3 = FUN_005d2cbd((*extraout_ECX)[0x417],extraout_ECX[1][0x417],~((uint)piVar3 >> 0x11) & 1)
    ;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    if (piVar3 != (int *)0x0) {
      *(int *)(unaff_EBP + -0x2c) = *piVar2 + (int)piVar2;
      piVar3 = (int *)(**(int **)(unaff_EBP + -0x20) + (int)*(int **)(unaff_EBP + -0x20));
      iVar6 = extraout_ECX[1][0x417];
      *(int **)(unaff_EBP + -0x44) = piVar3;
      piVar2 = (int *)operator_new(iVar6 * 0xc + 4);
      *(int **)(unaff_EBP + -0x40) = piVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iVar6 = *(int *)(unaff_EBP + -0x14);
      }
      else {
        *piVar2 = iVar6;
        *(int **)(unaff_EBP + -0x34) = piVar2 + 1;
        _eh_vector_constructor_iterator_(piVar2 + 1,0xc,iVar6,ctor_0x47458e,FUN_005d2cb4);
        iVar6 = *(int *)(unaff_EBP + -0x34);
        *(int *)(unaff_EBP + -0x14) = iVar6;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int *)(unaff_EBP + -0x34) = iVar6;
      if (iVar6 != 0) {
        iVar6 = (*extraout_ECX)[0x416];
        pvVar4 = operator_new(iVar6 << 4);
        *(void **)(unaff_EBP + -0x3c) = pvVar4;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (pvVar4 == (void *)0x0) {
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          iVar6 = *(int *)(unaff_EBP + -0x24);
        }
        else {
          FUN_004010a0(pvVar4,0x10,iVar6,&LAB_00474d39);
          iVar6 = *(int *)(unaff_EBP + -0x3c);
          *(int *)(unaff_EBP + -0x24) = iVar6;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(int *)(unaff_EBP + -0x3c) = iVar6;
        if (iVar6 != 0) {
          piVar2 = (int *)(*(int *)(unaff_EBP + -0x20) + 4);
          *(int **)(unaff_EBP + -0x30) = piVar2;
          while (piVar2 < piVar3) {
            piVar8 = (int *)(*piVar2 + (int)piVar2);
            for (piVar7 = piVar2 + 1; piVar2 = piVar8, piVar7 < piVar8; piVar7 = piVar7 + 2) {
              piVar2 = (int *)(*(int *)(unaff_EBP + -0x14) + 8 + *piVar7 * 0xc);
              *piVar2 = *piVar2 + 1;
            }
          }
          piVar2 = *(int **)(unaff_EBP + -0x30);
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          if (piVar2 < piVar3) {
            do {
              iVar6 = *piVar2;
              piVar3 = piVar2 + 1;
              *(int **)(unaff_EBP + -0x1c) = (int *)(iVar6 + (int)piVar2);
              *(int **)(unaff_EBP + -0x30) = piVar3;
              piVar2 = (int *)(iVar6 + (int)piVar2);
              while (*(int **)(unaff_EBP + -0x10) = piVar3, piVar3 < piVar2) {
                piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + *piVar3 * 0xc);
                if (*piVar3 == 0) {
                  piVar2 = *(int **)(unaff_EBP + -0x18);
                  if (piVar2 == (int *)0x0) {
                    iVar6 = extraout_ECX[1][0x416];
                    pvVar4 = operator_new(iVar6 << 4);
                    *(void **)(unaff_EBP + -0x40) = pvVar4;
                    *(undefined4 *)(unaff_EBP + -4) = 2;
                    if (pvVar4 == (void *)0x0) {
                      iVar6 = 0;
                    }
                    else {
                      FUN_004010a0(pvVar4,0x10,iVar6,&LAB_00474d39);
                      iVar6 = *(int *)(unaff_EBP + -0x40);
                    }
                    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                    *piVar3 = iVar6;
                    if (iVar6 == 0) goto LAB_005d63f2;
                  }
                  else {
                    *piVar3 = *piVar2;
                    *piVar2 = 0;
                    *(int *)(unaff_EBP + -0x18) = piVar2[1];
                  }
                  piVar2 = *(int **)(unaff_EBP + -0x1c);
                  puVar11 = (undefined4 *)*piVar3;
                  for (uVar5 = (uint)(extraout_ECX[1][0x416] << 4) >> 2; uVar5 != 0;
                      uVar5 = uVar5 - 1) {
                    *puVar11 = 0;
                    puVar11 = puVar11 + 1;
                  }
                  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *(undefined *)puVar11 = 0;
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                  }
                }
                piVar3 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
              }
              iVar6 = *(int *)(unaff_EBP + -0x24);
              (**(code **)(**extraout_ECX + 4))(*(undefined4 *)(unaff_EBP + -0x28),0,iVar6);
              piVar3 = (int *)(*(int *)(unaff_EBP + -0x38) + 4);
              if (piVar3 < *(int **)(unaff_EBP + -0x2c)) {
                pfVar9 = (float *)(iVar6 + 8);
                do {
                  piVar7 = *(int **)(unaff_EBP + -0x30);
                  piVar8 = (int *)(*piVar3 + (int)piVar3);
                  *(int **)(unaff_EBP + -0x10) = piVar7;
                  if (piVar7 < piVar2) {
                    *(int **)(unaff_EBP + -0x40) = piVar3 + 1;
                    while( true ) {
                      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x14) + *piVar7 * 0xc);
                      piVar3 = *(int **)(unaff_EBP + -0x40);
                      if (piVar3 < piVar8) {
                        do {
                          fVar1 = (float)piVar3[1] * *(float *)(*(int *)(unaff_EBP + -0x10) + 4);
                          pfVar10 = (float *)(*piVar3 * 0x10 + iVar6);
                          *pfVar10 = fVar1 * pfVar9[-2] + *pfVar10;
                          pfVar10 = (float *)(*piVar3 * 0x10 + 4 + iVar6);
                          *pfVar10 = fVar1 * pfVar9[-1] + *pfVar10;
                          pfVar10 = (float *)(*piVar3 * 0x10 + 8 + iVar6);
                          *pfVar10 = fVar1 * *pfVar9 + *pfVar10;
                          pfVar10 = (float *)(*piVar3 * 0x10 + 0xc + iVar6);
                          piVar3 = piVar3 + 2;
                          *pfVar10 = fVar1 * pfVar9[1] + *pfVar10;
                        } while (piVar3 < piVar8);
                        piVar2 = *(int **)(unaff_EBP + -0x1c);
                      }
                      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 8;
                      if (piVar2 <= *(int **)(unaff_EBP + -0x10)) break;
                      piVar7 = *(int **)(unaff_EBP + -0x10);
                    }
                  }
                  pfVar9 = pfVar9 + 4;
                  piVar3 = piVar8;
                } while (piVar8 < *(int **)(unaff_EBP + -0x2c));
              }
              piVar3 = *(int **)(unaff_EBP + -0x30);
              if (piVar3 < piVar2) {
                do {
                  puVar11 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + *piVar3 * 0xc);
                  piVar2 = puVar11 + 2;
                  *piVar2 = *piVar2 + -1;
                  if (*piVar2 == 0) {
                    (**(code **)(*extraout_ECX[1] + 8))(*piVar3,0,*puVar11);
                    puVar11[1] = *(undefined4 *)(unaff_EBP + -0x18);
                    *(undefined4 **)(unaff_EBP + -0x18) = puVar11;
                  }
                  piVar3 = piVar3 + 2;
                } while (piVar3 < *(int **)(unaff_EBP + -0x1c));
                piVar2 = *(int **)(unaff_EBP + -0x1c);
              }
              *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
            } while (piVar2 < *(int **)(unaff_EBP + -0x44));
          }
        }
      }
    }
  }
LAB_005d63f2:
  if (*(void **)(unaff_EBP + -0x34) != (void *)0x0) {
    FUN_005d2f7a(*(void **)(unaff_EBP + -0x34),3);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(unaff_EBP + -0x20));
}



int __thiscall
cls_0x5d2c8c::meth_0x5d643a(cls_0x5d2c8c *this,int param_1,undefined4 param_2,int *param_3)

{
  cls_0x6b848c *pcVar1;
  int iVar2;
  
  this->mbr_0x4 = 0;
  this->mbr_0x0 = 0;
  this->mbr_0x8 = (dword)param_3;
  if (((((uint)param_3 & 0xffff) == 0) || (5 < ((uint)param_3 & 0xffff))) ||
     (((uint)param_3 & 0xfff00000) != 0)) {
    return -0x7789f794;
  }
  *(uint *)(param_1 + 0x40) = (uint)param_3 & 0x80000;
  pcVar1 = FUN_005db7e3();
  this->mbr_0x4 = (dword)pcVar1;
  if (pcVar1 != (cls_0x6b848c *)0x0) {
    pcVar1 = FUN_005db7e3();
    this->mbr_0x0 = (dword)pcVar1;
    if (pcVar1 != (cls_0x6b848c *)0x0) {
      iVar2 = FUN_005d7793();
      if (iVar2 < 0) goto LAB_005d6526;
      iVar2 = meth_0x5d459d(this);
      if ((((-1 < iVar2) || (iVar2 = meth_0x5d46d5(this), -1 < iVar2)) ||
          ((iVar2 = meth_0x5d47c6(this), -1 < iVar2 ||
           ((iVar2 = meth_0x5d49c8(this), -1 < iVar2 || (iVar2 = meth_0x5d4bcc(this), -1 < iVar2))))
          )) || ((iVar2 = meth_0x5d4fef(this), -1 < iVar2 ||
                 ((((iVar2 = meth_0x5d5581(this), -1 < iVar2 ||
                    (iVar2 = meth_0x5d5967(this), -1 < iVar2)) ||
                   (iVar2 = meth_0x5d6098(this), -1 < iVar2)) ||
                  (iVar2 = meth_0x5d2fc6(this), -1 < iVar2)))))) {
        iVar2 = 0;
        goto LAB_005d6526;
      }
    }
  }
  iVar2 = -0x7fffbffb;
LAB_005d6526:
  if ((undefined4 *)this->mbr_0x4 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x4)(1);
    this->mbr_0x4 = 0;
  }
  if ((undefined4 *)this->mbr_0x0 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x0)(1);
    this->mbr_0x0 = 0;
  }
  return iVar2;
}


