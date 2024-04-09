#include "../include/cls_0x668c68.h"

cls_0x668c68 * __thiscall cls_0x668c68::~cls_0x668c68(cls_0x668c68 *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x20;
  this->vftptr_0x0 = &cls_0x668c68__vftable_668c68_00668c68;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x20 = 0;
  }
  piVar1 = (int *)this->mbr_0x24;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x24 = 0;
  }
  piVar1 = (int *)this->mbr_0x28;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x28 = 0;
  }
  piVar1 = (int *)this->mbr_0x3c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x3c = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x44);
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __thiscall cls_0x668c68::virt_meth_0x4772ce(cls_0x668c68 *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint in_stack_00000008;
  uint local_18;
  int iVar11;
  uint local_c;
  int local_8;
  
  uVar2 = param_1;
  iVar11 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar8 = **(int **)(param_1 + 0x24);
    if ((*(byte *)(param_1 + 0xc) & 0x40) == 0) {
      (**(code **)(iVar8 + 0x130))(*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 4));
      (**(code **)(**(int **)(param_1 + 0x24) + 0x14c))
                (*(int **)(param_1 + 0x24),0,*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x2c));
      (**(code **)(**(int **)(param_1 + 0x24) + 0x154))
                (*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x3c),0);
      if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
        iVar8 = 0;
        uVar3 = 0;
        if (*(int *)(param_1 + 0x58) != 0) {
          param_1 = 0;
          do {
            if (*(uint *)(*(int *)(uVar2 + 0x48) + uVar3 * 4) == in_stack_00000008) {
              iVar8 = iVar8 + 1;
            }
            else {
              if (iVar8 != 0) {
                (**(code **)(**(int **)(uVar2 + 0x24) + 0x11c))
                          (*(int **)(uVar2 + 0x24),4,0,*(undefined4 *)(uVar2 + 0x30),
                           param_1 + iVar8 * -3,iVar8);
              }
              iVar8 = 0;
            }
            param_1 = param_1 + 3;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(uVar2 + 0x58));
          if (iVar8 != 0) {
            (**(code **)(**(int **)(uVar2 + 0x24) + 0x11c))
                      (*(int **)(uVar2 + 0x24),4,0,*(undefined4 *)(uVar2 + 0x30),
                       uVar3 * 3 + iVar8 * -3,iVar8);
          }
        }
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x54);
        if (((uVar3 <= in_stack_00000008) ||
            (uVar6 = in_stack_00000008,
            *(uint *)(*(int *)(param_1 + 0x50) + in_stack_00000008 * 0x14) != in_stack_00000008)) &&
           (uVar6 = 0, uVar3 != 0)) {
          puVar5 = *(uint **)(param_1 + 0x50);
          do {
            if (*puVar5 == in_stack_00000008) break;
            uVar6 = uVar6 + 1;
            puVar5 = puVar5 + 5;
          } while (uVar6 < *(uint *)(param_1 + 0x54));
        }
        if (uVar6 < uVar3) {
          iVar8 = *(int *)(param_1 + 0x50) + uVar6 * 0x14;
          if (*(int *)(iVar8 + 8) != 0) {
            (**(code **)(**(int **)(param_1 + 0x24) + 0x11c))
                      (*(int **)(param_1 + 0x24),4,*(undefined4 *)(iVar8 + 0xc),
                       *(undefined4 *)(iVar8 + 0x10),*(int *)(iVar8 + 4) * 3,*(int *)(iVar8 + 8));
          }
        }
      }
    }
    else {
      (**(code **)(iVar8 + 0x130))();
      local_18 = *(uint *)(param_1 + 0x58);
      bVar1 = false;
      local_c = 0;
      if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
        uVar3 = 0;
        if (*(uint *)(param_1 + 0x54) != 0) {
          puVar5 = *(uint **)(param_1 + 0x50);
          do {
            if (*puVar5 == in_stack_00000008) break;
            uVar3 = uVar3 + 1;
            puVar5 = puVar5 + 5;
          } while (uVar3 < *(uint *)(param_1 + 0x54));
        }
        if (uVar3 == *(uint *)(param_1 + 0x54)) {
          return 0;
        }
        iVar11 = *(int *)(param_1 + 0x50) + uVar3 * 0x14;
        local_c = *(uint *)(iVar11 + 4);
        local_18 = *(int *)(iVar11 + 8) + local_c;
        bVar1 = true;
      }
      iVar11 = cls_0x668cd8::meth_0x474cfb((cls_0x668cd8 *)param_1,&local_8,0x10);
      if (((-1 < iVar11) &&
          (iVar11 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)param_1,param_1 + 0x40,0x10),
          -1 < iVar11)) && (local_c < local_18)) {
        iVar8 = local_c * 0xc;
        do {
          piVar4 = (int *)(*(int *)(param_1 + 0x40) + iVar8);
          if ((bVar1) || (*(uint *)(*(int *)(param_1 + 0x48) + local_c * 4) == in_stack_00000008)) {
            uVar3 = *(uint *)(param_1 + 0x2c);
            puVar9 = (undefined4 *)(*piVar4 * uVar3 + local_8);
            puVar10 = (undefined4 *)&stack0xffffffd8;
            for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined *)puVar10 = *(undefined *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            uVar3 = *(uint *)(param_1 + 0x2c);
            puVar9 = (undefined4 *)(piVar4[1] * uVar3 + local_8);
            puVar10 = (undefined4 *)(&stack0xffffffd8 + uVar3);
            for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined *)puVar10 = *(undefined *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            uVar6 = *(uint *)(param_1 + 0x2c);
            puVar9 = (undefined4 *)(piVar4[2] * uVar6 + local_8);
            puVar10 = (undefined4 *)(uVar6 + (int)(&stack0xffffffd8 + uVar3));
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined *)puVar10 = *(undefined *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            iVar11 = (**(code **)(**(int **)(param_1 + 0x24) + 0x120))
                               (*(int **)(param_1 + 0x24),4,1,&stack0xffffffd8,
                                *(undefined4 *)(param_1 + 0x2c));
            if (iVar11 < 0) break;
          }
          local_c = local_c + 1;
          iVar8 = iVar8 + 0xc;
        } while (local_c < local_18);
      }
    }
    if (local_8 != 0) {
      (**(code **)(**(int **)(uVar2 + 0x28) + 0x30))(*(int **)(uVar2 + 0x28));
    }
  }
  if (*(int *)(uVar2 + 0x40) != 0) {
    (**(code **)(**(int **)(uVar2 + 0x3c) + 0x30))(*(int **)(uVar2 + 0x3c));
    *(undefined4 *)(uVar2 + 0x40) = 0;
  }
  return iVar11;
}



void __thiscall cls_0x668c68::virt_meth_0x4775ad(cls_0x668c68 *this,int param_1,undefined4 *param_2)

{
  uint **ppuVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 *pfVar10;
  undefined4 *puVar11;
  undefined4 *in_stack_0000000c;
  undefined local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c [4];
  int local_4c;
  int local_48;
  uint *local_44;
  int local_40;
  void *local_3c;
  int local_38;
  int local_34;
  uint local_30;
  undefined *local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  float10 *local_c;
  uint local_8;
  
  iVar5 = *(int *)(param_1 + 0x58);
  iVar9 = iVar5 * 3;
  uVar2 = *(uint *)(param_1 + 0x30) / 3;
  local_18 = 0;
  local_38 = 0;
  local_24 = 0;
  local_c = (float10 *)0x0;
  local_3c = (void *)0x0;
  local_4c = iVar9;
  local_30 = uVar2;
  if ((in_stack_0000000c == (undefined4 *)0x0) || ((*(byte *)(param_1 + 9) & 4) != 0)) {
    local_10 = -0x7789f794;
  }
  else {
    local_c = (float10 *)operator_new(uVar2 << 2);
    local_3c = operator_new(iVar5 * 0x3c);
    if ((local_c == (float10 *)0x0) || (local_3c == (void *)0x0)) {
      local_10 = -0x7ff8fff2;
    }
    else {
      local_10 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)param_1,&local_18,0x10);
      if (-1 < local_10) {
        local_10 = cls_0x668cd8::meth_0x474cfb((cls_0x668cd8 *)param_1,&local_38,0x10);
        if (-1 < local_10) {
          pfVar10 = local_c;
          for (uVar2 = uVar2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined4 *)pfVar10 = 0;
            pfVar10 = (float10 *)((int)pfVar10 + 4);
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined *)pfVar10 = 0;
            pfVar10 = (float10 *)((int)pfVar10 + 1);
          }
          if (*(int *)(param_1 + 0x54) == 0) {
            local_6c = 0;
            local_64 = 0;
            local_2c = local_70;
            local_68 = *(undefined4 *)(param_1 + 0x58);
            local_28 = 1;
            local_60 = *(undefined4 *)(param_1 + 0x30);
          }
          else {
            local_28 = *(int *)(param_1 + 0x54);
            local_2c = *(undefined **)(param_1 + 0x50);
          }
          if (local_28 != 0) {
            local_44 = (uint *)(local_2c + 4);
            local_48 = local_28;
            do {
              local_8 = *local_44;
              local_14 = local_44[1] + local_8;
              if (local_8 < local_14) {
                local_40 = local_8 * 0xc;
                local_20 = (uint *)((int)local_3c + local_24 * 0x14);
                do {
                  puVar3 = (uint *)(local_18 + local_40);
                  uVar2 = *puVar3;
                  if (uVar2 != 0xffffffff) {
                    if (param_2 == (undefined4 *)0x0) {
                      local_5c[0] = uVar2;
                      local_5c[1] = puVar3[1];
                      local_5c[2] = puVar3[2];
                    }
                    else {
                      local_5c[0] = param_2[uVar2];
                      local_5c[1] = param_2[puVar3[1]];
                      local_5c[2] = param_2[puVar3[2]];
                    }
                    if (((local_5c[0] != local_5c[1]) && (local_5c[0] != local_5c[2])) &&
                       (local_5c[1] != local_5c[2])) {
                      uVar2 = 2;
                      local_1c = local_20;
                      local_24 = local_24 + 3;
                      local_20 = local_20 + 0xf;
                      puVar3 = local_5c;
                      local_34 = 3;
                      do {
                        puVar6 = local_1c;
                        uVar7 = *puVar3;
                        local_5c[3] = uVar7 % local_30;
                        local_1c[3] = local_8;
                        *local_1c = uVar7;
                        local_1c = local_1c + 5;
                        puVar3 = puVar3 + 1;
                        puVar6[1] = local_5c[(uVar2 - 1) % 3];
                        uVar7 = uVar2 % 3;
                        uVar2 = uVar2 + 1;
                        local_34 = local_34 + -1;
                        puVar6[2] = local_5c[uVar7];
                        ppuVar1 = (uint **)((int)local_c + local_5c[3] * 4);
                        puVar6[4] = (uint)*ppuVar1;
                        *ppuVar1 = puVar6;
                      } while (local_34 != 0);
                    }
                  }
                  local_8 = local_8 + 1;
                  local_40 = local_40 + 0xc;
                } while (local_8 < local_14);
              }
              local_44 = local_44 + 5;
              local_48 = local_48 + -1;
              iVar9 = local_4c;
            } while (local_48 != 0);
          }
          puVar11 = in_stack_0000000c;
          for (uVar2 = *(int *)(param_1 + 0x58) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined *)puVar11 = 0xff;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          if (local_28 != 0) {
            local_44 = (uint *)(local_2c + 4);
            local_40 = local_28;
            do {
              local_8 = *local_44;
              uVar2 = local_44[1] + local_8;
              local_14 = uVar2;
              if (local_8 < uVar2) {
                iVar5 = local_8 * 0xc;
                iVar8 = (int)local_5c + (local_8 * -0xc - (int)in_stack_0000000c);
                local_28 = iVar5;
                local_20 = in_stack_0000000c + local_8 * 3;
                local_34 = iVar8;
                do {
                  puVar3 = (uint *)(local_18 + iVar5);
                  uVar7 = *puVar3;
                  if (uVar7 != 0xffffffff) {
                    if (param_2 == (undefined4 *)0x0) {
                      local_5c[0] = uVar7;
                      local_5c[1] = puVar3[1];
                      local_5c[2] = puVar3[2];
                    }
                    else {
                      local_5c[0] = param_2[uVar7];
                      local_5c[1] = param_2[puVar3[1]];
                      local_5c[2] = param_2[puVar3[2]];
                    }
                    if (((local_5c[0] == local_5c[1]) || (local_5c[0] == local_5c[2])) ||
                       (local_5c[1] == local_5c[2])) {
                      *local_20 = 0xffffffff;
                      local_20[1] = 0xffffffff;
                      local_20[2] = 0xffffffff;
                      uVar2 = local_14;
                    }
                    else {
                      local_2c = (undefined *)0x1;
                      local_48 = 3;
                      puVar3 = local_20;
                      local_34 = iVar8;
                      local_28 = iVar5;
                      do {
                        if (*puVar3 == 0xffffffff) {
                          uVar2 = *(uint *)((int)puVar3 + iVar8);
                          uVar7 = local_5c[(uint)local_2c % 3];
                          uVar4 = FUN_00477a28(uVar7,uVar2,local_5c[(uint)(local_2c + 1) % 3],
                                               local_c,local_30,-1,local_38,*(int *)(param_1 + 0x2c)
                                              );
                          *puVar3 = uVar4;
                          iVar5 = local_28;
                          iVar8 = local_34;
                          if (uVar4 != 0xffffffff) {
                            FUN_004779da(uVar2,uVar7,local_8,(int)local_c,local_30);
                            local_1c = (uint *)0x0;
                            puVar6 = (uint *)(local_18 + *puVar3 * 0xc);
                            do {
                              uVar2 = *puVar6;
                              if (param_2 != (undefined4 *)0x0) {
                                uVar2 = param_2[uVar2];
                              }
                              if (uVar2 == uVar7) break;
                              local_1c = (uint *)((int)local_1c + 1);
                              puVar6 = puVar6 + 1;
                            } while (local_1c < (uint *)0x3);
                            in_stack_0000000c[(int)((int)local_1c + *puVar3 * 3)] = local_8;
                            iVar5 = local_28;
                            iVar8 = local_34;
                          }
                        }
                        local_2c = local_2c + 1;
                        puVar3 = puVar3 + 1;
                        local_48 = local_48 + -1;
                        uVar2 = local_14;
                      } while (local_48 != 0);
                    }
                  }
                  local_8 = local_8 + 1;
                  local_20 = local_20 + 3;
                  iVar5 = iVar5 + 0xc;
                  iVar8 = iVar8 + -0xc;
                  local_28 = iVar5;
                  local_34 = iVar8;
                  iVar9 = local_4c;
                } while (local_8 < uVar2);
              }
              local_44 = local_44 + 5;
              local_40 = local_40 + -1;
            } while (local_40 != 0);
          }
          if (iVar9 < local_24) {
            local_10 = -0x7fffbffb;
          }
        }
      }
    }
    if (local_18 != 0) {
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c));
    }
    if (local_38 != 0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x30))(*(int **)(param_1 + 0x28));
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_c);
}



undefined __thiscall cls_0x668c68::virt_meth_0x47811b(cls_0x668c68 *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  dword dVar4;
  int iVar5;
  int iVar6;
  dword dVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  int *piVar13;
  uint local_14;
  uint *local_10;
  dword local_c;
  undefined local_5;
  
  local_5 = 0;
  dVar4 = param_1;
  dVar7 = param_1;
  if (((param_1 != 0) || (dVar4 = this->mbr_0x40, dVar7 = dVar4, dVar4 != 0)) ||
     (iVar8 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)this,&local_c,0x10), dVar4 = param_1,
     dVar7 = local_c, -1 < iVar8)) {
    local_c = dVar7;
    param_1 = dVar4;
    local_14 = 0;
    if (this->mbr_0x58 != 0) {
      puVar12 = (uint *)this->mbr_0x44;
      piVar13 = (int *)(local_c + 4);
      iVar8 = (int)puVar12 - local_c;
      do {
        if (piVar13[-1] == -1) {
          if (((*piVar13 != -1) || (piVar13[1] != -1)) ||
             (((*(byte *)&this->mbr_0xc & 1) != 0 &&
              (((*puVar12 != 0xffffffff || (*(int *)(iVar8 + (int)piVar13) != -1)) ||
               (puVar12[2] != 0xffffffff)))))) goto LAB_004782d7;
        }
        else if ((*(byte *)&this->mbr_0xc & 1) != 0) {
          uVar9 = 0;
          local_10 = puVar12;
          do {
            uVar2 = *(uint *)(((int)(piVar13 + -1) - (int)puVar12) + (int)local_10);
            uVar9 = uVar9 + 1;
            uVar3 = piVar13[uVar9 % 3 - 1];
            if ((this->mbr_0x30 <= uVar2) || (this->mbr_0x30 <= uVar3)) goto LAB_004782d7;
            uVar10 = *local_10;
            if (uVar10 != 0xffffffff) {
              if (this->mbr_0x58 <= uVar10) goto LAB_004782d7;
              iVar1 = uVar10 * 0xc + local_c;
              uVar10 = FUN_00475157(uVar10 * 0xc + this->mbr_0x44,local_14);
              if (2 < uVar10) goto LAB_004782d7;
              if ((*(byte *)&this->mbr_0xc & 2) != 0) {
                dVar4 = this->mbr_0x38;
                iVar5 = *(int *)(dVar4 + *(int *)(iVar1 + uVar10 * 4) * 4);
                iVar1 = *(int *)(iVar1 + ((uVar10 + 1) % 3) * 4);
                iVar6 = *(int *)(dVar4 + uVar2 * 4);
                if (((iVar6 != iVar5) ||
                    (*(int *)(dVar4 + uVar3 * 4) != *(int *)(dVar4 + iVar1 * 4))) &&
                   ((*(int *)(dVar4 + uVar3 * 4) != iVar5 || (iVar6 != *(int *)(dVar4 + iVar1 * 4)))
                   )) goto LAB_004782d7;
              }
            }
            local_10 = local_10 + 1;
          } while (uVar9 < 3);
        }
        local_14 = local_14 + 1;
        piVar13 = piVar13 + 3;
        puVar12 = puVar12 + 3;
      } while (local_14 < this->mbr_0x58);
    }
    if ((((*(byte *)&this->mbr_0xc & 0x10) == 0) || (this->mbr_0x50 == 0)) ||
       (uVar11 = cls_0x474d1a::meth_0x478f13((cls_0x474d1a *)this), (char)uVar11 != '\0')) {
      local_5 = 1;
    }
  }
LAB_004782d7:
  if ((local_c != 0) && (param_1 == 0)) {
    (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
  }
  return local_5;
}



int __thiscall cls_0x668c68::virt_meth_0x47abdb(cls_0x668c68 *this)

{
  int *piVar1;
  dword dVar2;
  dword dVar3;
  cls_0x668c68 *in_stack_00000004;
  
  piVar1 = (int *)in_stack_00000004->mbr_0x64;
  if (piVar1 == (int *)0x0) {
    dVar2 = in_stack_00000004->mbr_0x60;
    dVar3 = dVar2 - 1;
    in_stack_00000004->mbr_0x60 = dVar3;
    if (dVar2 == 1) {
      ~cls_0x668c68(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000004);
    }
  }
  else {
    dVar3 = (**(code **)(*piVar1 + 8))(piVar1);
  }
  return dVar3;
}



cls_0x668c68 * __thiscall
cls_0x668c68::cls_0x668c68(cls_0x668c68 *this,int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  dword dVar2;
  
  this->vftptr_0x0 = &cls_0x668c68__vftable_668c68_00668c68;
  this->mbr_0x4 = param_2;
  this->mbr_0x8 = param_3;
  this->mbr_0xc = 4;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  dVar2 = FUN_00476482(param_2);
  this->mbr_0x2c = dVar2;
  this->mbr_0x24 = (dword)param_1;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 1;
  this->mbr_0x64 = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x18 = 0;
  if ((param_3 & 0x200) != 0) {
    this->mbr_0x10 = 1;
  }
  if ((param_3 & 0x100) != 0) {
    this->mbr_0x10 = 2;
  }
  if ((param_3 & 0x400) != 0) {
    this->mbr_0x18 = 8;
  }
  if ((param_3 & 2) != 0) {
    this->mbr_0x18 = this->mbr_0x18 | 0x20;
  }
  if ((param_3 & 4) != 0) {
    this->mbr_0x18 = this->mbr_0x18 | 0x40;
  }
  if ((param_3 & 8) != 0) {
    *(byte *)&this->mbr_0x18 = *(byte *)&this->mbr_0x18 | 0x80;
  }
  if ((param_3 & 0x4000) != 0) {
    pbVar1 = (byte *)((int)&this->mbr_0x18 + 1);
    *pbVar1 = *pbVar1 | 1;
  }
  if ((param_3 & 0x800) != 0) {
    this->mbr_0x18 = this->mbr_0x18 | 0x200;
  }
  if ((param_3 & 0x10000) != 0) {
    this->mbr_0x18 = this->mbr_0x18 | 0x10;
  }
  this->mbr_0x14 = 0;
  this->mbr_0x1c = 0;
  if ((param_3 & 0x20) != 0) {
    this->mbr_0x14 = 1;
  }
  if ((param_3 & 0x10) != 0) {
    this->mbr_0x14 = 2;
  }
  if ((param_3 & 0x40) != 0) {
    this->mbr_0x1c = 8;
  }
  if ((param_3 & 2) != 0) {
    this->mbr_0x1c = this->mbr_0x1c | 0x20;
  }
  if ((param_3 & 4) != 0) {
    this->mbr_0x1c = this->mbr_0x1c | 0x40;
  }
  if ((param_3 & 8) != 0) {
    *(byte *)&this->mbr_0x1c = *(byte *)&this->mbr_0x1c | 0x80;
  }
  if ((param_3 & 0x4000) != 0) {
    pbVar1 = (byte *)((int)&this->mbr_0x1c + 1);
    *pbVar1 = *pbVar1 | 1;
  }
  if ((char)param_3 < '\0') {
    this->mbr_0x1c = this->mbr_0x1c | 0x200;
  }
  if ((char)(param_3 >> 8) < '\0') {
    this->mbr_0x1c = this->mbr_0x1c | 0x10;
  }
  if ((param_3 & 0x1000) != 0) {
    this->mbr_0xc = 0x24;
  }
  (**(code **)(*param_1 + 4))(param_1);
  (**(code **)(*(int *)this->mbr_0x24 + 0x18))((int *)this->mbr_0x24,&this->mbr_0x20);
  return this;
}



void __thiscall cls_0x668c68::virt_meth_0x47ae33(cls_0x668c68 *this)

{
  cls_0x474d1a *this_00;
  dword dVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  dword dVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int unaff_EBP;
  
  FUN_0061781c();
  *(undefined4 *)(unaff_EBP + -100) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xffffffff;
  *(undefined *)(unaff_EBP + -0x4c) = 0;
  *(undefined *)(unaff_EBP + -0x4b) = 0;
  this_00 = *(cls_0x474d1a **)(unaff_EBP + 8);
  dVar7 = this_00->mbr_0x44;
  *(cls_0x474d1a **)(unaff_EBP + -0x50) = this_00;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(dword *)(unaff_EBP + -0x34) = dVar7;
  if (((*(int *)(unaff_EBP + 0xc) == 0) || (*(int *)(unaff_EBP + 0x10) == 0)) ||
     ((this_00->field_0x9 & 4) != 0)) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0x8876086c;
  }
  else {
    dVar7 = this_00->mbr_0x58;
    pvVar3 = operator_new(dVar7 * 0xc);
    *(void **)(unaff_EBP + -0x30) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    pvVar4 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      FUN_004010a0(pvVar3,0xc,dVar7,&LAB_00474d39);
      pvVar4 = pvVar3;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar9 = 0;
    this_00->mbr_0x44 = (dword)pvVar4;
    if (pvVar4 == (void *)0x0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x8007000e;
    }
    else {
      puVar5 = *(undefined4 **)(unaff_EBP + 0xc);
      uVar11 = 0;
      if (this_00->mbr_0x58 != 0) {
        do {
          *(undefined4 *)(iVar9 + this_00->mbr_0x44) = *puVar5;
          *(undefined4 *)(iVar9 + 4 + this_00->mbr_0x44) = puVar5[1];
          puVar6 = puVar5 + 2;
          puVar5 = puVar5 + 3;
          *(undefined4 *)(iVar9 + 8 + this_00->mbr_0x44) = *puVar6;
          uVar11 = uVar11 + 1;
          iVar9 = iVar9 + 0xc;
        } while (uVar11 < this_00->mbr_0x58);
      }
      puVar5 = *(undefined4 **)(unaff_EBP + 0x10);
      for (uVar11 = this_00->mbr_0x30 & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      iVar9 = cls_0x474d1a::meth_0x474d1a(this_00,unaff_EBP + 8,0x10);
      *(int *)(unaff_EBP + 0xc) = iVar9;
      if (-1 < iVar9) {
        *(undefined4 *)&this_00->field_0x40 = *(undefined4 *)(unaff_EBP + 8);
        if (this_00->mbr_0x54 == 0) {
          *(dword *)(unaff_EBP + -0x40) = this_00->mbr_0x58;
          dVar1 = this_00->mbr_0x30;
          *(undefined4 *)(unaff_EBP + -0x20) = 1;
          dVar7 = unaff_EBP - 0x48;
          *(undefined4 *)(unaff_EBP + -0x44) = 0;
          *(undefined4 *)(unaff_EBP + -0x3c) = 0;
          *(dword *)(unaff_EBP + -0x38) = dVar1;
        }
        else {
          *(dword *)(unaff_EBP + -0x20) = this_00->mbr_0x54;
          dVar7 = this_00->mbr_0x50;
        }
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          puVar12 = (uint *)(dVar7 + 4);
          *(uint **)(unaff_EBP + -0x2c) = puVar12;
          do {
            uVar11 = *puVar12;
            uVar10 = puVar12[1] + uVar11;
            *(uint *)(unaff_EBP + -0x24) = uVar10;
            *(uint *)(unaff_EBP + -0x14) = uVar11;
            if (uVar11 < uVar10) {
              iVar9 = uVar11 * 0xc;
              *(int *)(unaff_EBP + -0x28) = iVar9;
              do {
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
                *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + 8) + iVar9;
                do {
                  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x30) + *(int *)(unaff_EBP + -0x10) * 4);
                  if ((iVar2 != -1) && (*(int *)(*(int *)(unaff_EBP + 0x10) + iVar2 * 4) == -1)) {
                    cls_0x478f6d::meth_0x478f6d
                              ((cls_0x478f6d *)(unaff_EBP + -100),*(int *)(unaff_EBP + -0x14),iVar2,
                               '\0');
                    *(undefined4 *)(unaff_EBP + -0x18) = 0;
                    while (*(int *)(unaff_EBP + -0x5c) != -1) {
                      iVar8 = cls_0x478f6d::meth_0x479444((cls_0x478f6d *)(unaff_EBP + -100));
                      if (*(char *)(unaff_EBP + -0x4c) == '\0') {
                        uVar11 = (*(int *)(unaff_EBP + -0x58) + 1U) % 3;
                        iVar9 = *(int *)(unaff_EBP + -0x28);
                      }
                      else {
                        uVar11 = *(uint *)(unaff_EBP + -0x58);
                      }
                      iVar8 = *(int *)(*(int *)(unaff_EBP + 8) + (uVar11 + iVar8 * 3) * 4);
                      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
                      uVar11 = *(uint *)(unaff_EBP + -0x18);
                      *(int *)(*(int *)(unaff_EBP + 0x10) + iVar8 * 4) = iVar2;
                      if (10000 < uVar11) {
                        *(undefined4 *)(unaff_EBP + 0xc) = 0x88760b55;
                        goto LAB_0047b070;
                      }
                    }
                    uVar10 = *(uint *)(unaff_EBP + -0x24);
                  }
                  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
                } while (*(uint *)(unaff_EBP + -0x10) < 3);
                *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                iVar9 = iVar9 + 0xc;
                *(int *)(unaff_EBP + -0x28) = iVar9;
              } while (*(uint *)(unaff_EBP + -0x14) < uVar10);
              puVar12 = *(uint **)(unaff_EBP + -0x2c);
            }
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
            puVar12 = puVar12 + 5;
            *(uint **)(unaff_EBP + -0x2c) = puVar12;
          } while (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(unaff_EBP + -0x20));
        }
        uVar11 = 0;
        if (this_00->mbr_0x30 != 0) {
          do {
            puVar12 = (uint *)(*(int *)(unaff_EBP + 0x10) + uVar11 * 4);
            if (*puVar12 == 0xffffffff) {
              *puVar12 = uVar11;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < this_00->mbr_0x30);
        }
      }
    }
LAB_0047b070:
    if (*(int *)(unaff_EBP + 8) != 0) {
      (**(code **)(*(int *)this_00->mbr_0x3c + 0x30))((int *)this_00->mbr_0x3c);
    }
  }
  *(undefined4 *)&this_00->field_0x40 = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)this_00->mbr_0x44);
}



void __thiscall cls_0x668c68::virt_meth_0x47b0a6(cls_0x668c68 *this)

{
  undefined4 uVar1;
  cls_0x668cd8 *this_00;
  dword dVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  cls_0x668cd8 *extraout_ECX;
  cls_0x668cd8 *extraout_ECX_00;
  undefined4 *puVar13;
  cls_0x668cd8 *this_01;
  int *piVar14;
  int unaff_EBP;
  float fVar15;
  float *pfVar16;
  
  FUN_0061781c();
  this_00 = *(cls_0x668cd8 **)(unaff_EBP + 8);
  uVar7 = this_00->mbr_0x4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  cls_0x474824::cls_0x474824((cls_0x474824 *)(unaff_EBP + -0x9c),uVar7);
  uVar7 = this_00->mbr_0x30 / 3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(uint *)(unaff_EBP + -0x3c) = uVar7;
  if ((*(int *)(unaff_EBP + 0x10) != 0) && ((*(byte *)((int)&this_00->mbr_0x8 + 1) & 4) == 0)) {
    uVar7 = uVar7 << 2;
    *(uint *)(unaff_EBP + 8) = uVar7;
    pvVar8 = operator_new(uVar7);
    dVar2 = this_00->mbr_0x30;
    *(void **)(unaff_EBP + -0x34) = pvVar8;
    pvVar8 = operator_new(dVar2 * 0x14);
    *(void **)(unaff_EBP + -0x48) = pvVar8;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar8 == (void *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    else {
      FUN_004010a0(pvVar8,0x14,dVar2,&LAB_00474d39);
      *(void **)(unaff_EBP + -0x10) = pvVar8;
    }
    dVar2 = this_00->mbr_0x30;
    iVar10 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x44) = iVar10;
    pvVar8 = operator_new(dVar2 << 2);
    *(void **)(unaff_EBP + -0x1c) = pvVar8;
    pvVar8 = operator_new(this_00->mbr_0x58 * 0xc);
    *(void **)(unaff_EBP + -0x24) = pvVar8;
    pvVar8 = operator_new(this_00->mbr_0x30 << 2);
    *(void **)(unaff_EBP + -0x14) = pvVar8;
    if ((((*(undefined4 **)(unaff_EBP + -0x34) != (undefined4 *)0x0) && (iVar10 != 0)) &&
        (*(int *)(unaff_EBP + -0x1c) != 0)) &&
       ((*(int *)(unaff_EBP + -0x24) != 0 && (pvVar8 != (void *)0x0)))) {
      uVar7 = *(uint *)(unaff_EBP + 8);
      puVar12 = *(undefined4 **)(unaff_EBP + -0x34);
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      puVar12 = *(undefined4 **)(unaff_EBP + -0x1c);
      for (uVar7 = this_00->mbr_0x30 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 1;
      }
      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined *)puVar12 = 0xff;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      iVar10 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)this_00,unaff_EBP + -0x28,0x10);
      iVar11 = 0;
      if (-1 < iVar10) {
        dVar2 = this_00->mbr_0x58;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (dVar2 != 0) {
          *(undefined4 *)(unaff_EBP + 8) = 0;
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          do {
            *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x28) + iVar11;
            uVar7 = 0;
            puVar12 = (undefined4 *)(iVar11 + *(int *)(unaff_EBP + -0x24));
            do {
              iVar10 = *(int *)(unaff_EBP + -0x1c);
              piVar14 = (int *)(*(int *)(unaff_EBP + -0x40) + uVar7 * 4);
              *puVar12 = *(undefined4 *)(iVar10 + *piVar14 * 4);
              iVar11 = *(int *)(unaff_EBP + 8) + uVar7;
              uVar7 = uVar7 + 1;
              puVar12 = puVar12 + 1;
              *(int *)(iVar10 + *piVar14 * 4) = iVar11;
            } while (uVar7 < 3);
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 3;
            iVar11 = *(int *)(unaff_EBP + -0x2c) + 0xc;
            uVar7 = this_00->mbr_0x58;
            *(int *)(unaff_EBP + -0x2c) = iVar11;
          } while (*(uint *)(unaff_EBP + -0x18) < uVar7);
        }
        iVar10 = cls_0x668cd8::meth_0x474cfb(this_00,unaff_EBP + -0x20,0x10);
        if (-1 < iVar10) {
          if (NAN(*(float *)(unaff_EBP + 0xc)) == (*(float *)(unaff_EBP + 0xc) == 0.0)) {
            pvVar8 = operator_new(this_00->mbr_0x30 << 2);
            dVar2 = this_00->mbr_0x30;
            *(void **)(unaff_EBP + -0x38) = pvVar8;
            puVar12 = (undefined4 *)operator_new(dVar2 << 2);
            uVar7 = 0;
            *(undefined4 **)(unaff_EBP + -0x30) = puVar12;
            if ((pvVar8 == (void *)0x0) || (puVar12 == (undefined4 *)0x0)) goto LAB_0047b4b3;
            puVar13 = *(undefined4 **)(unaff_EBP + -0x20);
            if (this_00->mbr_0x30 != 0) {
              do {
                uVar1 = *puVar13;
                puVar13 = (undefined4 *)((int)puVar13 + *(int *)(unaff_EBP + -0x98));
                *(undefined4 *)((int)pvVar8 + uVar7 * 4) = uVar1;
                uVar7 = uVar7 + 1;
              } while (uVar7 < this_00->mbr_0x30);
            }
            FUN_0047b51d(puVar12,(int)pvVar8,this_00->mbr_0x30);
            uVar7 = this_00->mbr_0x30;
            fVar15 = *(float *)(unaff_EBP + 0xc) * *(float *)(unaff_EBP + 0xc);
            *(undefined4 *)(unaff_EBP + 8) = 0;
            puVar13 = *(undefined4 **)(unaff_EBP + -0x14);
            for (uVar7 = uVar7 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar13 = 0xffffffff;
              puVar13 = puVar13 + 1;
            }
            for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
              *(undefined *)puVar13 = 0xff;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            this_01 = (cls_0x668cd8 *)this_00->mbr_0x30;
            if (this_01 != (cls_0x668cd8 *)0x0) {
              *(undefined4 *)(unaff_EBP + -0x18) = 1;
              *(undefined4 **)(unaff_EBP + -0x10) = puVar12;
              do {
                if (*(cls_0x668cd8 **)(unaff_EBP + 8) < this_01) {
                  iVar10 = **(int **)(unaff_EBP + -0x10);
                  do {
                    fVar4 = *(float *)(*(int *)(unaff_EBP + -0x38) + iVar10 * 4) -
                            *(float *)(*(int *)(unaff_EBP + -0x38) +
                                      puVar12[*(int *)(unaff_EBP + 8)] * 4);
                    if (fVar4 < *(float *)(unaff_EBP + 0xc) ==
                        (fVar4 == *(float *)(unaff_EBP + 0xc))) break;
                    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
                  } while (*(cls_0x668cd8 **)(unaff_EBP + 8) < this_01);
                }
                piVar3 = *(int **)(unaff_EBP + -0x10);
                iVar10 = *piVar3;
                piVar14 = (int *)(*(int *)(unaff_EBP + -0x14) + iVar10 * 4);
                if (*piVar14 == -1) {
                  *piVar14 = iVar10;
                  pfVar16 = (float *)(*piVar3 * *(int *)(unaff_EBP + -0x98) +
                                     *(int *)(unaff_EBP + -0x20));
                  uVar7 = *(uint *)(unaff_EBP + -0x18);
                  while (*(uint *)(unaff_EBP + -0x2c) = uVar7, uVar7 < *(uint *)(unaff_EBP + 8)) {
                    iVar10 = puVar12[uVar7];
                    piVar14 = (int *)(*(int *)(unaff_EBP + -0x14) + iVar10 * 4);
                    iVar11 = *piVar14;
                    *(int *)(unaff_EBP + -0x3c) = iVar10;
                    *(int **)(unaff_EBP + -0x40) = piVar14;
                    if (iVar11 == -1) {
                      puVar12 = (undefined4 *)
                                (iVar10 * *(int *)(unaff_EBP + -0x98) + *(int *)(unaff_EBP + -0x20))
                      ;
                      *(undefined4 *)(unaff_EBP + -0x54) = *puVar12;
                      *(undefined4 *)(unaff_EBP + -0x50) = puVar12[1];
                      *(undefined4 *)(unaff_EBP + -0x4c) = puVar12[2];
                      fVar6 = *(float *)(unaff_EBP + -0x54) - *pfVar16;
                      *(float *)(unaff_EBP + -0x54) = fVar6;
                      fVar5 = *(float *)(unaff_EBP + -0x50) - pfVar16[1];
                      *(float *)(unaff_EBP + -0x50) = fVar5;
                      fVar4 = *(float *)(unaff_EBP + -0x4c) - pfVar16[2];
                      *(float *)(unaff_EBP + -0x4c) = fVar4;
                      fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
                      if (fVar4 < fVar15 != (NAN(fVar4) || NAN(fVar15))) {
                        iVar10 = **(int **)(unaff_EBP + -0x10);
                        uVar7 = *(uint *)(*(int *)(unaff_EBP + -0x1c) + iVar10 * 4);
                        *(int *)(unaff_EBP + -0x48) = iVar10;
                        if (uVar7 != 0xffffffff) {
                          do {
                            piVar14 = (int *)(*(int *)(unaff_EBP + -0x28) + (uVar7 / 3) * 0xc);
                            iVar10 = *(int *)(unaff_EBP + -0x3c);
                            if (((*piVar14 == iVar10) || (piVar14[1] == iVar10)) ||
                               (piVar14[2] == iVar10)) goto LAB_0047b471;
                            uVar7 = *(uint *)(*(int *)(unaff_EBP + -0x24) + uVar7 * 4);
                          } while (uVar7 != 0xffffffff);
                          piVar14 = *(int **)(unaff_EBP + -0x40);
                          iVar10 = *(int *)(unaff_EBP + -0x48);
                        }
                        *piVar14 = iVar10;
                      }
LAB_0047b471:
                      puVar12 = *(undefined4 **)(unaff_EBP + -0x30);
                    }
                    uVar7 = *(int *)(unaff_EBP + -0x2c) + 1;
                  }
                }
                *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
                *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
                this_01 = (cls_0x668cd8 *)this_00->mbr_0x30;
              } while ((cls_0x668cd8 *)(*(int *)(unaff_EBP + -0x18) - 1U) < this_01);
            }
          }
          else {
            pfVar16 = *(float **)(unaff_EBP + -0x20);
            fVar15 = 0.0;
            this_01 = extraout_ECX;
            if (this_00->mbr_0x30 != 0) {
              do {
                iVar10 = FUN_0047b648(pfVar16,fVar15,*(int *)(unaff_EBP + -0x34),
                                      *(int *)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + -0x3c),
                                      *(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x24),
                                      *(int *)(unaff_EBP + -0x28),(int *)(unaff_EBP + -0x5c),
                                      (float *)(unaff_EBP + -0x58));
                if (iVar10 == 0) {
                  *(float *)(*(int *)(unaff_EBP + -0x14) + (int)fVar15 * 4) = fVar15;
                  this_01 = extraout_ECX_00;
                }
                else {
                  this_01 = *(cls_0x668cd8 **)(unaff_EBP + -0x14);
                  (&this_01->vftptr_0x0)[(int)fVar15] =
                       *(cls_0x668cd8__vftable_668cd8 **)(unaff_EBP + -0x58);
                }
                pfVar16 = (float *)((int)pfVar16 + *(int *)(unaff_EBP + -0x98));
                fVar15 = (float)((int)fVar15 + 1);
              } while ((uint)fVar15 < this_00->mbr_0x30);
            }
          }
          (*this_00->vftptr_0x0->virt_meth_0x47841a_76)
                    (this_01,(int)this_00,*(undefined4 **)(unaff_EBP + -0x14));
        }
      }
    }
  }
LAB_0047b4b3:
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(unaff_EBP + -0x34));
}



int __thiscall cls_0x668c68::virt_meth_0x47d36f(cls_0x668c68 *this)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  cls_0x668cd8 *this_00;
  int *piVar4;
  cls_0x668c68 *pcVar5;
  cls_0x668c68 *extraout_ECX;
  cls_0x668c68 *extraout_ECX_00;
  int iVar6;
  int unaff_EBP;
  cls_0x668cd8 *pcVar7;
  
  FUN_0061781c();
  uVar2 = *(uint *)(unaff_EBP + 0x10);
  pcVar7 = (cls_0x668cd8 *)0x0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (((byte)uVar2 & 0xe) == 4) {
    iVar6 = -0x7789f794;
    goto LAB_0047d526;
  }
  if ((uVar2 == 0) || ((uVar2 & 1) != 0)) {
    iVar6 = -0x7789f794;
    pcVar5 = extraout_ECX;
LAB_0047d501:
    if (pcVar7 == (cls_0x668cd8 *)0x0) goto LAB_0047d526;
    (*((cls_0x668c68__vftable_668c68 *)pcVar7->vftptr_0x0)->virt_meth_0x47abdb_8)(pcVar5);
LAB_0047d50b:
    piVar4 = *(int **)(unaff_EBP + -0x14);
    if (piVar4 == (int *)0x0) goto LAB_0047d526;
    (**(code **)(*piVar4 + 8))(piVar4);
LAB_0047d518:
    piVar4 = *(int **)(unaff_EBP + -0x18);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  else {
    uVar3 = *(uint *)(unaff_EBP + 0xc);
    if ((uVar3 & 0xfffe2000) == 0) {
      this_00 = *(cls_0x668cd8 **)(unaff_EBP + 8);
      *(uint *)(unaff_EBP + -0x10) = uVar3;
      puVar1 = (uint *)(unaff_EBP + -0x10);
      *puVar1 = *puVar1 & 0x1000;
      if ((((*puVar1 == 0) || (uVar2 == this_00->mbr_0x4)) &&
          ((piVar4 = *(int **)(unaff_EBP + 0x14), *(int *)(unaff_EBP + -0x10) == 0 ||
           (piVar4 == (int *)this_00->mbr_0x24)))) &&
         (((this_00->mbr_0x8 & 0x400) == 0 && ((this_00->mbr_0x8 & 0x40) == 0)))) {
        if ((uVar3 & 1) != 0) {
          pcVar5 = (cls_0x668c68 *)operator_new(0x70);
          *(cls_0x668c68 **)(unaff_EBP + 8) = pcVar5;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          if (pcVar5 == (cls_0x668c68 *)0x0) {
            pcVar7 = (cls_0x668cd8 *)0x0;
          }
          else {
            pcVar7 = (cls_0x668cd8 *)cls_0x668c68(pcVar5,piVar4,uVar2,*(uint *)(unaff_EBP + 0xc));
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(cls_0x668cd8 **)(unaff_EBP + -0x18) = pcVar7;
          if (pcVar7 == (cls_0x668cd8 *)0x0) {
            iVar6 = -0x7ff8fff2;
          }
          else {
            iVar6 = cls_0x474d1a::meth_0x47c823((cls_0x474d1a *)this_00,pcVar7);
            if (-1 < iVar6) {
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                this_00->mbr_0xc = this_00->mbr_0xc | 0x20;
                pcVar7->mbr_0x28 = this_00->mbr_0x28;
                (**(code **)(*(int *)this_00->mbr_0x28 + 4))((int *)this_00->mbr_0x28);
              }
              *(undefined4 *)(unaff_EBP + -0x18) = 0;
LAB_0047d4db:
              if ((*(int *)(unaff_EBP + -0x10) != 0) ||
                 (iVar6 = cls_0x668cd8::meth_0x47bdc0
                                    (this_00,*(uint *)(unaff_EBP + 0x10),(int *)pcVar7->mbr_0x28),
                 pcVar5 = extraout_ECX_00, -1 < iVar6)) {
                **(cls_0x668cd8 ***)(unaff_EBP + 0x18) = pcVar7;
                goto LAB_0047d526;
              }
              goto LAB_0047d501;
            }
          }
          goto LAB_0047d518;
        }
        if ((this_00->mbr_0x58 < 0x10000) && (this_00->mbr_0x30 < 0x10000)) {
          pcVar7 = (cls_0x668cd8 *)operator_new(0x70);
          *(cls_0x668cd8 **)(unaff_EBP + 8) = pcVar7;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (pcVar7 == (cls_0x668cd8 *)0x0) {
            pcVar7 = (cls_0x668cd8 *)0x0;
          }
          else {
            pcVar7 = cls_0x668cd8::cls_0x668cd8(pcVar7,piVar4,uVar2,*(uint *)(unaff_EBP + 0xc));
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(cls_0x668cd8 **)(unaff_EBP + -0x14) = pcVar7;
          if (pcVar7 == (cls_0x668cd8 *)0x0) {
            iVar6 = -0x7ff8fff2;
          }
          else {
            iVar6 = cls_0x474d1a::meth_0x47c653((cls_0x474d1a *)this_00,pcVar7);
            if (-1 < iVar6) {
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                this_00->mbr_0xc = this_00->mbr_0xc | 0x20;
                pcVar7->mbr_0x28 = this_00->mbr_0x28;
                (**(code **)(*(int *)this_00->mbr_0x28 + 4))((int *)this_00->mbr_0x28);
              }
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
              goto LAB_0047d4db;
            }
          }
          goto LAB_0047d50b;
        }
      }
    }
    iVar6 = -0x7789f794;
  }
LAB_0047d526:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar6;
}



undefined4 __thiscall cls_0x668c68::virt_meth_0x47e834(cls_0x668c68 *this)

{
  undefined *puVar1;
  void *pvVar2;
  uint uVar3;
  cls_0x668c68 *this_00;
  cls_0x474d1a *this_01;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_0061781c();
  uVar4 = *(uint *)(unaff_EBP + 0xc);
  if ((((uVar4 & 0xe0fe2000) != 0) || ((uVar4 & 1) != 0)) || ((uVar4 & 0x400) != 0)) {
    *(undefined4 *)(unaff_EBP + 8) = 0x8876086c;
    goto LAB_0047e9c5;
  }
  pvVar2 = *(void **)(unaff_EBP + 8);
  uVar3 = *(uint *)((int)pvVar2 + 8);
  if (((uVar3 & 0x400) != 0) || ((uVar3 & 0x40) != 0)) {
    *(undefined4 *)(unaff_EBP + 8) = 0x8876086c;
    goto LAB_0047e9c5;
  }
  uVar6 = uVar4 & 0x1cfff;
  if (uVar6 == 0) {
    if ((uVar4 & 0x1000) == 0) {
      uVar6 = uVar3 & 0xffffefff;
    }
    else {
      uVar6 = uVar3 | 0x1000;
    }
  }
  else {
    if ((uVar4 & 0x1000) != 0) {
      uVar6 = uVar6 | 0x1000;
    }
    if ((uVar3 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
    *(uint *)(unaff_EBP + 0xc) = uVar4 & 0xfffe3000;
  }
  this_00 = (cls_0x668c68 *)operator_new(0x70);
  *(cls_0x668c68 **)(unaff_EBP + 8) = this_00;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this_00 == (cls_0x668c68 *)0x0) {
    this_01 = (cls_0x474d1a *)0x0;
  }
  else {
    this_01 = (cls_0x474d1a *)
              cls_0x668c68(this_00,*(int **)((int)pvVar2 + 0x24),*(uint *)((int)pvVar2 + 4),uVar6);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(cls_0x474d1a **)(unaff_EBP + -0x10) = this_01;
  if (this_01 == (cls_0x474d1a *)0x0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x8007000e;
  }
  else {
    if ((*(byte *)&this_01->mbr_0xc & 0x20) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)((int)pvVar2 + 0x30);
    }
    iVar5 = cls_0x474d1a::meth_0x477c4c(this_01,*(uint *)((int)pvVar2 + 0x58),uVar4);
    *(int *)(unaff_EBP + 8) = iVar5;
    if (-1 < iVar5) {
      if ((*(byte *)&this_01->mbr_0xc & 0x20) != 0) {
        *(uint *)((int)pvVar2 + 0xc) = *(uint *)((int)pvVar2 + 0xc) | 0x20;
        this_01->mbr_0x28 = *(dword *)((int)pvVar2 + 0x28);
        (**(code **)(**(int **)((int)pvVar2 + 0x28) + 4))(*(int **)((int)pvVar2 + 0x28));
        *(byte *)(unaff_EBP + 0xf) = *(byte *)(unaff_EBP + 0xf) | 0x10;
      }
      iVar5 = cls_0x474d1a::meth_0x479039(this_01,pvVar2);
      *(int *)(unaff_EBP + 8) = iVar5;
      if (-1 < iVar5) {
        if ((*(byte *)&this_01->mbr_0xc & 0x20) == 0) {
          this_01->mbr_0x30 = *(dword *)((int)pvVar2 + 0x30);
        }
        puVar1 = &this_01->field_0x40;
        iVar5 = cls_0x474d1a::meth_0x474d1a(this_01,puVar1,0);
        *(int *)(unaff_EBP + 8) = iVar5;
        if (-1 < iVar5) {
          iVar5 = cls_0x474d1a::meth_0x47db36
                            (this_01,*(uint **)(unaff_EBP + 0xc),*(uint **)(unaff_EBP + 0x10),
                             *(uint **)(unaff_EBP + 0x14),*(uint **)(unaff_EBP + 0x18),
                             *(int ***)(unaff_EBP + 0x1c),*(int **)((int)pvVar2 + 0x28),
                             *(uint **)((int)pvVar2 + 4));
          *(int *)(unaff_EBP + 8) = iVar5;
          if (-1 < iVar5) {
            if (*(int *)puVar1 != 0) {
              (**(code **)(*(int *)this_01->mbr_0x3c + 0x30))((int *)this_01->mbr_0x3c);
              *(undefined4 *)puVar1 = 0;
            }
            **(cls_0x474d1a ***)(unaff_EBP + 0x20) = this_01;
            this_01 = (cls_0x474d1a *)0x0;
            goto LAB_0047e9a9;
          }
        }
        this_01 = *(cls_0x474d1a **)(unaff_EBP + -0x10);
      }
    }
  }
LAB_0047e9a9:
  if (this_01 != (cls_0x474d1a *)0x0) {
    if (*(int *)&this_01->field_0x40 != 0) {
      (**(code **)(*(int *)this_01->mbr_0x3c + 0x30))((int *)this_01->mbr_0x3c);
    }
    (**(code **)(*(int *)this_01 + 8))(this_01);
  }
LAB_0047e9c5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}



int __thiscall
cls_0x668c68::virt_meth_0x47e9d6
          (cls_0x668c68 *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,int **param_5)

{
  int iVar1;
  int **in_stack_00000018;
  
  if (((((uint)param_2 & 0xe0ffefff) == 0) && ((param_1[2] & 0x400) == 0)) &&
     ((param_1[2] & 0x40) == 0)) {
    iVar1 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)param_1,param_1 + 0x10,0);
    if (-1 < iVar1) {
      if ((*(byte *)(param_1 + 3) & 0x20) != 0) {
        param_2 = (uint *)((uint)param_2 | 0x10000000);
      }
      iVar1 = cls_0x474d1a::meth_0x47db36
                        ((cls_0x474d1a *)param_1,param_2,param_3,param_4,(uint *)param_5,
                         in_stack_00000018,(int *)0x0,(uint *)param_1[1]);
    }
  }
  else {
    iVar1 = -0x7789f794;
  }
  if (param_1[0x10] != 0) {
    (**(code **)(*(int *)param_1[0xf] + 0x30))((int *)param_1[0xf]);
    param_1[0x10] = 0;
  }
  return iVar1;
}


#include "../include/cls_0x668c68.h"
