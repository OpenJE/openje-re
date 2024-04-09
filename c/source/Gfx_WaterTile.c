#include "../include/Gfx_WaterTile.h"

uint __thiscall Gfx_WaterTile::meth_0x50fd30(Gfx_WaterTile *this,uint param_1)

{
  Gfx_NodeAttribute__vftable_66b488 **ppGVar1;
  
  if ((-1 < (int)param_1) && ((int)param_1 < 4)) {
    ppGVar1 = &(this->Gfx_NodeAttribute).vftptr_0x0 + param_1 * 3;
    (&this->mbr_0x174)[param_1 * 3] = 0x437f0000;
    ppGVar1[0x5e] = (Gfx_NodeAttribute__vftable_66b488 *)0x437f0000;
    ppGVar1[0x5f] = (Gfx_NodeAttribute__vftable_66b488 *)0x437f0000;
    return CONCAT31((int3)((uint)ppGVar1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}



void __thiscall Gfx_WaterTile::meth_0x50fdc0(Gfx_WaterTile *this)

{
  if (this->mbr_0x1bc == 0) {
    cls_0x51daf0::meth_0x51daf0((cls_0x51daf0 *)&this->field_0xd8);
  }
  return;
}



void __thiscall
Gfx_WaterTile::meth_0x50fde0
          (Gfx_WaterTile *this,dword param_1,dword param_2,dword param_3,dword param_4)

{
  this->mbr_0x1c0 = param_1;
  this->mbr_0x1c4 = param_2;
  this->mbr_0x1c8 = param_3;
  this->mbr_0x1cc = param_4;
  return;
}



void __thiscall Gfx_WaterTile::meth_0x50fe10(Gfx_WaterTile *this)

{
  uint uVar1;
  dword dVar2;
  bool bVar3;
  dword dVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  float *pfVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  dword dVar19;
  dword dVar20;
  dword dVar21;
  dword dVar22;
  int local_2c;
  uint local_24;
  int local_20;
  uint local_14;
  int local_10;
  dword local_8;
  
  if ((void *)this->mbr_0xac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xac);
  }
  iVar6 = meth_0x50fdc0(this);
  if (iVar6 != 0) {
    iVar10 = *(int *)(iVar6 + 0xc0);
    uVar1 = *(uint *)(iVar6 + 0x38);
    dVar2 = *(dword *)(iVar6 + 0x3c);
    dVar21 = this->mbr_0x11c;
    this->mbr_0xb9 = 0;
    this->mbr_0xb4 = 0;
    bVar3 = false;
    if (iVar10 != 0) {
      uVar11 = uVar1 & 0x80000007;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
      }
      iVar6 = (uint)(uVar11 != 0) + ((int)(uVar1 + ((int)uVar1 >> 0x1f & 7U)) >> 3);
      if (0 < (int)dVar21) {
        iVar17 = this->mbr_0x124 * iVar6;
        iVar18 = iVar17;
        local_14 = dVar21;
        do {
          local_8 = 0;
          if (0 < (int)this->mbr_0x118) {
            dVar20 = this->mbr_0x120;
            do {
              uVar11 = dVar20 & 0x80000007;
              if ((int)uVar11 < 0) {
                uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
              }
              if (((int)*(char *)(((int)(dVar20 + ((int)dVar20 >> 0x1f & 7U)) >> 3) + iVar18 +
                                 iVar10) & 1 << ((byte)uVar11 & 0x1f)) == 0) {
                bVar3 = true;
                break;
              }
              local_8 = local_8 + 1;
              dVar20 = dVar20 + 1;
            } while ((int)local_8 < (int)this->mbr_0x118);
          }
          iVar18 = iVar18 + iVar6;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        if (bVar3) {
          iVar18 = 0;
          local_14 = this->mbr_0x118 - 1;
          local_20 = 0;
          if ((int)uVar1 <= (int)local_14) {
            local_14 = uVar1;
          }
          dVar20 = dVar21 - 1;
          if ((int)dVar2 <= (int)(dVar21 - 1)) {
            dVar20 = dVar2;
          }
          if ((int)dVar20 < 1) {
            return;
          }
          do {
            if (0 < (int)local_14) {
              dVar21 = this->mbr_0x120;
              local_24 = local_14;
              do {
                if (((int)dVar21 < (int)uVar1) && ((int)(this->mbr_0x124 + iVar18) < (int)dVar2)) {
                  uVar11 = dVar21 & 0x80000007;
                  if ((int)uVar11 < 0) {
                    uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
                  }
                  if (((int)*(char *)(((int)(dVar21 + ((int)dVar21 >> 0x1f & 7U)) >> 3) + iVar17 +
                                     iVar10) & 1 << ((byte)uVar11 & 0x1f)) != 0) {
                    local_20 = local_20 + 1;
                  }
                }
                dVar21 = dVar21 + 1;
                local_24 = local_24 - 1;
              } while (local_24 != 0);
            }
            iVar18 = iVar18 + 1;
            iVar17 = iVar17 + iVar6;
          } while (iVar18 < (int)dVar20);
          if (local_20 < 1) {
            return;
          }
          this->mbr_0xb0 = local_20 * 6;
          psVar7 = (short *)operator_new(local_20 * 0xc);
          this->mbr_0xac = (dword)psVar7;
          local_14 = this->mbr_0x118;
          if ((int)uVar1 <= (int)this->mbr_0x118) {
            local_14 = uVar1;
          }
          dVar21 = this->mbr_0x11c;
          if ((int)dVar2 <= (int)this->mbr_0x11c) {
            dVar21 = dVar2;
          }
          local_24 = 0;
          if (0 < (int)dVar21) {
            do {
              iVar17 = this->mbr_0x124 + local_24;
              local_2c = 0;
              sVar16 = (short)local_24;
              iVar18 = local_2c;
              if (3 < (int)local_14) {
                do {
                  uVar11 = this->mbr_0x120 + local_2c;
                  sVar15 = (short)local_2c;
                  psVar9 = psVar7;
                  if (((int)uVar11 < (int)uVar1) && (iVar17 < (int)dVar2)) {
                    uVar12 = uVar11 & 0x80000007;
                    if ((int)uVar12 < 0) {
                      uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
                    }
                    if ((1 << ((byte)uVar12 & 0x1f) &
                        (int)*(char *)(((int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3) +
                                      iVar10 + iVar17 * iVar6)) != 0) {
                      *psVar7 = *(short *)&this->mbr_0x118 * sVar16 + 1 + sVar15;
                      sVar5 = sVar16 + 1;
                      psVar9 = psVar7 + 6;
                      psVar7[1] = *(short *)&this->mbr_0x118 * sVar16 + sVar15;
                      psVar7[2] = *(short *)&this->mbr_0x118 * sVar5 + sVar15;
                      psVar7[3] = *(short *)&this->mbr_0x118 * sVar16 + 1 + sVar15;
                      psVar7[4] = *(short *)&this->mbr_0x118 * sVar5 + sVar15;
                      psVar7[5] = *(short *)&this->mbr_0x118 * sVar5 + 1 + sVar15;
                      dVar20 = this->mbr_0x118;
                      this->mbr_0xb4 = this->mbr_0xb4 + 2;
                      iVar18 = dVar20 * local_2c + local_24;
                      if (this->mbr_0x226 == 0) {
                        iVar18 = iVar18 * 0x2c;
                        *(float *)(iVar18 + 0x1c + this->mbr_0xa0) =
                             ((float)local_2c / (float)(dVar20 - 1)) * (float)this->mbr_0x1c8 +
                             (float)this->mbr_0x1c0;
                        *(float *)(iVar18 + 0x20 + this->mbr_0xa0) =
                             (1.0 - (float)local_24 / (float)(this->mbr_0x11c - 1)) *
                             (float)this->mbr_0x1cc + (float)this->mbr_0x1c4;
                        iVar13 = this->mbr_0x118 - 1;
                        *(float *)(iVar18 + 0x24 + this->mbr_0xa0) =
                             (float)(local_2c % iVar13) / (float)iVar13;
                        iVar13 = this->mbr_0x11c - 1;
                        *(float *)(iVar18 + 0x28 + this->mbr_0xa0) =
                             1.0 - (float)((int)local_24 % iVar13) / (float)iVar13;
                        pfVar8 = (float *)(iVar18 + 0x24 + this->mbr_0xa0);
                        *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                        pfVar8 = (float *)(iVar18 + 0x28 + this->mbr_0xa0);
                      }
                      else {
                        iVar18 = iVar18 * 0x20;
                        *(float *)(this->mbr_0xa4 + 0x10 + iVar18) =
                             ((float)local_2c / (float)(dVar20 - 1)) * (float)this->mbr_0x1c8 +
                             (float)this->mbr_0x1c0;
                        *(float *)(this->mbr_0xa4 + 0x14 + iVar18) =
                             (1.0 - (float)local_24 / (float)(this->mbr_0x11c - 1)) *
                             (float)this->mbr_0x1cc + (float)this->mbr_0x1c4;
                        iVar13 = this->mbr_0x118 - 1;
                        *(float *)(this->mbr_0xa4 + 0x18 + iVar18) =
                             (float)(local_2c % iVar13) / (float)iVar13;
                        iVar13 = this->mbr_0x11c - 1;
                        *(float *)(this->mbr_0xa4 + 0x1c + iVar18) =
                             1.0 - (float)((int)local_24 % iVar13) / (float)iVar13;
                        pfVar8 = (float *)(this->mbr_0xa4 + 0x18 + iVar18);
                        *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                        pfVar8 = (float *)(this->mbr_0xa4 + 0x1c + iVar18);
                      }
                      *pfVar8 = (float)this->mbr_0x1dc * *pfVar8 + (float)this->mbr_0x1d4;
                    }
                  }
                  uVar11 = this->mbr_0x120 + 1 + local_2c;
                  psVar7 = psVar9;
                  if (((int)uVar11 < (int)uVar1) && (iVar17 < (int)dVar2)) {
                    uVar12 = uVar11 & 0x80000007;
                    if ((int)uVar12 < 0) {
                      uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
                    }
                    if ((1 << ((byte)uVar12 & 0x1f) &
                        (int)*(char *)(((int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3) +
                                      iVar10 + iVar17 * iVar6)) != 0) {
                      *psVar9 = *(short *)&this->mbr_0x118 * sVar16 + 2 + sVar15;
                      psVar7 = psVar9 + 6;
                      psVar9[1] = *(short *)&this->mbr_0x118 * sVar16 + 1 + sVar15;
                      sVar5 = sVar16 + 1;
                      psVar9[2] = *(short *)&this->mbr_0x118 * sVar5 + 1 + sVar15;
                      psVar9[3] = *(short *)&this->mbr_0x118 * sVar16 + 2 + sVar15;
                      psVar9[4] = *(short *)&this->mbr_0x118 * sVar5 + 1 + sVar15;
                      psVar9[5] = *(short *)&this->mbr_0x118 * sVar5 + 2 + sVar15;
                      dVar20 = this->mbr_0x118;
                      this->mbr_0xb4 = this->mbr_0xb4 + 2;
                      iVar18 = local_2c + 1;
                      iVar13 = dVar20 * iVar18 + local_24;
                      if (this->mbr_0x226 == 0) {
                        iVar13 = iVar13 * 0x2c;
                        *(float *)(iVar13 + 0x1c + this->mbr_0xa0) =
                             ((float)iVar18 / (float)(dVar20 - 1)) * (float)this->mbr_0x1c8 +
                             (float)this->mbr_0x1c0;
                        *(float *)(iVar13 + 0x20 + this->mbr_0xa0) =
                             (1.0 - (float)local_24 / (float)(this->mbr_0x11c - 1)) *
                             (float)this->mbr_0x1cc + (float)this->mbr_0x1c4;
                        iVar14 = this->mbr_0x118 - 1;
                        *(float *)(iVar13 + 0x24 + this->mbr_0xa0) =
                             (float)(iVar18 % iVar14) / (float)iVar14;
                        iVar18 = this->mbr_0x11c - 1;
                        *(float *)(iVar13 + 0x28 + this->mbr_0xa0) =
                             1.0 - (float)((int)local_24 % iVar18) / (float)iVar18;
                        pfVar8 = (float *)(iVar13 + 0x24 + this->mbr_0xa0);
                        *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                        pfVar8 = (float *)(iVar13 + 0x28 + this->mbr_0xa0);
                      }
                      else {
                        iVar13 = iVar13 * 0x20;
                        *(float *)(this->mbr_0xa4 + 0x10 + iVar13) =
                             ((float)iVar18 / (float)(dVar20 - 1)) * (float)this->mbr_0x1c8 +
                             (float)this->mbr_0x1c0;
                        *(float *)(this->mbr_0xa4 + 0x14 + iVar13) =
                             (1.0 - (float)local_24 / (float)(this->mbr_0x11c - 1)) *
                             (float)this->mbr_0x1cc + (float)this->mbr_0x1c4;
                        iVar14 = this->mbr_0x118 - 1;
                        *(float *)(this->mbr_0xa4 + 0x18 + iVar13) =
                             (float)(iVar18 % iVar14) / (float)iVar14;
                        iVar18 = this->mbr_0x11c - 1;
                        *(float *)(this->mbr_0xa4 + 0x1c + iVar13) =
                             1.0 - (float)((int)local_24 % iVar18) / (float)iVar18;
                        pfVar8 = (float *)(this->mbr_0xa4 + 0x18 + iVar13);
                        *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                        pfVar8 = (float *)(this->mbr_0xa4 + 0x1c + iVar13);
                      }
                      *pfVar8 = (float)this->mbr_0x1dc * *pfVar8 + (float)this->mbr_0x1d4;
                    }
                  }
                  uVar11 = this->mbr_0x120 + 2 + local_2c;
                  psVar9 = psVar7;
                  if (((int)uVar11 < (int)uVar1) && (iVar17 < (int)dVar2)) {
                    uVar12 = uVar11 & 0x80000007;
                    if ((int)uVar12 < 0) {
                      uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
                    }
                    if ((1 << ((byte)uVar12 & 0x1f) &
                        (int)*(char *)(((int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3) +
                                      iVar10 + iVar17 * iVar6)) != 0) {
                      *psVar7 = *(short *)&this->mbr_0x118 * sVar16 + 3 + sVar15;
                      psVar9 = psVar7 + 6;
                      psVar7[1] = *(short *)&this->mbr_0x118 * sVar16 + 2 + sVar15;
                      sVar5 = sVar16 + 1;
                      psVar7[2] = *(short *)&this->mbr_0x118 * sVar5 + 2 + sVar15;
                      psVar7[3] = *(short *)&this->mbr_0x118 * sVar16 + 3 + sVar15;
                      psVar7[4] = *(short *)&this->mbr_0x118 * sVar5 + 2 + sVar15;
                      psVar7[5] = *(short *)&this->mbr_0x118 * sVar5 + 3 + sVar15;
                      dVar20 = this->mbr_0x118;
                      this->mbr_0xb4 = this->mbr_0xb4 + 2;
                      iVar18 = local_2c + 2;
                      iVar13 = iVar18 * dVar20 + local_24;
                      if (this->mbr_0x226 == 0) {
                        iVar13 = iVar13 * 0x2c;
                        *(float *)(iVar13 + 0x1c + this->mbr_0xa0) =
                             ((float)iVar18 / (float)(dVar20 - 1)) * (float)this->mbr_0x1c8 +
                             (float)this->mbr_0x1c0;
                        *(float *)(iVar13 + 0x20 + this->mbr_0xa0) =
                             (1.0 - (float)local_24 / (float)(this->mbr_0x11c - 1)) *
                             (float)this->mbr_0x1cc + (float)this->mbr_0x1c4;
                        iVar14 = this->mbr_0x118 - 1;
                        *(float *)(iVar13 + 0x24 + this->mbr_0xa0) =
                             (float)(iVar18 % iVar14) / (float)iVar14;
                        iVar18 = this->mbr_0x11c - 1;
                        *(float *)(iVar13 + 0x28 + this->mbr_0xa0) =
                             1.0 - (float)((int)local_24 % iVar18) / (float)iVar18;
                        pfVar8 = (float *)(iVar13 + 0x24 + this->mbr_0xa0);
                        *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                        pfVar8 = (float *)(iVar13 + 0x28 + this->mbr_0xa0);
                      }
                      else {
                        iVar13 = iVar13 * 0x20;
                        *(float *)(this->mbr_0xa4 + 0x10 + iVar13) =
                             ((float)iVar18 / (float)(dVar20 - 1)) * (float)this->mbr_0x1c8 +
                             (float)this->mbr_0x1c0;
                        *(float *)(this->mbr_0xa4 + 0x14 + iVar13) =
                             (1.0 - (float)local_24 / (float)(this->mbr_0x11c - 1)) *
                             (float)this->mbr_0x1cc + (float)this->mbr_0x1c4;
                        iVar14 = this->mbr_0x118 - 1;
                        *(float *)(this->mbr_0xa4 + 0x18 + iVar13) =
                             (float)(iVar18 % iVar14) / (float)iVar14;
                        iVar18 = this->mbr_0x11c - 1;
                        *(float *)(this->mbr_0xa4 + 0x1c + iVar13) =
                             1.0 - (float)((int)local_24 % iVar18) / (float)iVar18;
                        pfVar8 = (float *)(this->mbr_0xa4 + 0x18 + iVar13);
                        *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                        pfVar8 = (float *)(this->mbr_0xa4 + 0x1c + iVar13);
                      }
                      *pfVar8 = (float)this->mbr_0x1dc * *pfVar8 + (float)this->mbr_0x1d4;
                    }
                  }
                  uVar11 = this->mbr_0x120 + 3 + local_2c;
                  psVar7 = psVar9;
                  if (((int)uVar11 < (int)uVar1) && (iVar17 < (int)dVar2)) {
                    uVar12 = uVar11 & 0x80000007;
                    if ((int)uVar12 < 0) {
                      uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
                    }
                    if ((1 << ((byte)uVar12 & 0x1f) &
                        (int)*(char *)(((int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3) +
                                      iVar10 + iVar17 * iVar6)) != 0) {
                      *psVar9 = *(short *)&this->mbr_0x118 * sVar16 + 4 + sVar15;
                      psVar7 = psVar9 + 6;
                      psVar9[1] = *(short *)&this->mbr_0x118 * sVar16 + 3 + sVar15;
                      sVar5 = sVar16 + 1;
                      psVar9[2] = *(short *)&this->mbr_0x118 * sVar5 + 3 + sVar15;
                      psVar9[3] = *(short *)&this->mbr_0x118 * sVar16 + 4 + sVar15;
                      psVar9[4] = *(short *)&this->mbr_0x118 * sVar5 + 3 + sVar15;
                      psVar9[5] = *(short *)&this->mbr_0x118 * sVar5 + 4 + sVar15;
                      dVar20 = this->mbr_0x118;
                      this->mbr_0xb4 = this->mbr_0xb4 + 2;
                      iVar18 = local_2c + 3;
                      iVar13 = dVar20 * iVar18 + local_24;
                      if (this->mbr_0x226 == 0) {
                        iVar13 = iVar13 * 0x2c;
                        *(float *)(iVar13 + 0x1c + this->mbr_0xa0) =
                             ((float)iVar18 / (float)(dVar20 - 1)) * (float)this->mbr_0x1c8 +
                             (float)this->mbr_0x1c0;
                        *(float *)(iVar13 + 0x20 + this->mbr_0xa0) =
                             (1.0 - (float)local_24 / (float)(this->mbr_0x11c - 1)) *
                             (float)this->mbr_0x1cc + (float)this->mbr_0x1c4;
                        iVar14 = this->mbr_0x118 - 1;
                        *(float *)(iVar13 + 0x24 + this->mbr_0xa0) =
                             (float)(iVar18 % iVar14) / (float)iVar14;
                        iVar18 = this->mbr_0x11c - 1;
                        *(float *)(iVar13 + 0x28 + this->mbr_0xa0) =
                             1.0 - (float)((int)local_24 % iVar18) / (float)iVar18;
                        pfVar8 = (float *)(iVar13 + 0x24 + this->mbr_0xa0);
                        *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                        pfVar8 = (float *)(iVar13 + 0x28 + this->mbr_0xa0);
                      }
                      else {
                        iVar13 = iVar13 * 0x20;
                        *(float *)(this->mbr_0xa4 + 0x10 + iVar13) =
                             ((float)iVar18 / (float)(dVar20 - 1)) * (float)this->mbr_0x1c8 +
                             (float)this->mbr_0x1c0;
                        *(float *)(this->mbr_0xa4 + 0x14 + iVar13) =
                             (1.0 - (float)local_24 / (float)(this->mbr_0x11c - 1)) *
                             (float)this->mbr_0x1cc + (float)this->mbr_0x1c4;
                        iVar14 = this->mbr_0x118 - 1;
                        *(float *)(this->mbr_0xa4 + 0x18 + iVar13) =
                             (float)(iVar18 % iVar14) / (float)iVar14;
                        iVar18 = this->mbr_0x11c - 1;
                        *(float *)(this->mbr_0xa4 + 0x1c + iVar13) =
                             1.0 - (float)((int)local_24 % iVar18) / (float)iVar18;
                        pfVar8 = (float *)(this->mbr_0xa4 + 0x18 + iVar13);
                        *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                        pfVar8 = (float *)(this->mbr_0xa4 + 0x1c + iVar13);
                      }
                      *pfVar8 = (float)this->mbr_0x1dc * *pfVar8 + (float)this->mbr_0x1d4;
                    }
                  }
                  iVar18 = local_2c + 4;
                  iVar13 = local_2c + 7;
                  local_2c = iVar18;
                } while (iVar13 < (int)local_14);
              }
              for (; iVar18 < (int)local_14; iVar18 = iVar18 + 1) {
                uVar11 = this->mbr_0x120 + iVar18;
                psVar9 = psVar7;
                if (((int)uVar11 < (int)uVar1) && (iVar17 < (int)dVar2)) {
                  uVar12 = uVar11 & 0x80000007;
                  if ((int)uVar12 < 0) {
                    uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
                  }
                  if ((1 << ((byte)uVar12 & 0x1f) &
                      (int)*(char *)(((int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3) +
                                    iVar10 + iVar17 * iVar6)) != 0) {
                    sVar15 = (short)iVar18;
                    *psVar7 = *(short *)&this->mbr_0x118 * sVar16 + 1 + sVar15;
                    sVar5 = sVar16 + 1;
                    psVar9 = psVar7 + 6;
                    psVar7[1] = *(short *)&this->mbr_0x118 * sVar16 + sVar15;
                    psVar7[2] = *(short *)&this->mbr_0x118 * sVar5 + sVar15;
                    psVar7[3] = *(short *)&this->mbr_0x118 * sVar16 + 1 + sVar15;
                    psVar7[4] = *(short *)&this->mbr_0x118 * sVar5 + sVar15;
                    psVar7[5] = *(short *)&this->mbr_0x118 * sVar5 + 1 + sVar15;
                    dVar20 = this->mbr_0x118;
                    this->mbr_0xb4 = this->mbr_0xb4 + 2;
                    iVar13 = dVar20 * iVar18 + local_24;
                    if (this->mbr_0x226 == 0) {
                      iVar13 = iVar13 * 0x2c;
                      *(float *)(iVar13 + 0x1c + this->mbr_0xa0) =
                           ((float)iVar18 / (float)(dVar20 - 1)) * (float)this->mbr_0x1c8 +
                           (float)this->mbr_0x1c0;
                      *(float *)(iVar13 + 0x20 + this->mbr_0xa0) =
                           (1.0 - (float)local_24 / (float)(this->mbr_0x11c - 1)) *
                           (float)this->mbr_0x1cc + (float)this->mbr_0x1c4;
                      iVar14 = this->mbr_0x118 - 1;
                      *(float *)(iVar13 + 0x24 + this->mbr_0xa0) =
                           (float)(iVar18 % iVar14) / (float)iVar14;
                      iVar14 = this->mbr_0x11c - 1;
                      *(float *)(iVar13 + 0x28 + this->mbr_0xa0) =
                           1.0 - (float)((int)local_24 % iVar14) / (float)iVar14;
                      pfVar8 = (float *)(iVar13 + 0x24 + this->mbr_0xa0);
                      *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                      pfVar8 = (float *)(iVar13 + 0x28 + this->mbr_0xa0);
                    }
                    else {
                      iVar13 = iVar13 * 0x20;
                      *(float *)(this->mbr_0xa4 + 0x10 + iVar13) =
                           ((float)iVar18 / (float)(dVar20 - 1)) * (float)this->mbr_0x1c8 +
                           (float)this->mbr_0x1c0;
                      *(float *)(this->mbr_0xa4 + 0x14 + iVar13) =
                           (1.0 - (float)local_24 / (float)(this->mbr_0x11c - 1)) *
                           (float)this->mbr_0x1cc + (float)this->mbr_0x1c4;
                      iVar14 = this->mbr_0x118 - 1;
                      *(float *)(this->mbr_0xa4 + 0x18 + iVar13) =
                           (float)(iVar18 % iVar14) / (float)iVar14;
                      iVar14 = this->mbr_0x11c - 1;
                      *(float *)(this->mbr_0xa4 + 0x1c + iVar13) =
                           1.0 - (float)((int)local_24 % iVar14) / (float)iVar14;
                      pfVar8 = (float *)(this->mbr_0xa4 + 0x18 + iVar13);
                      *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                      pfVar8 = (float *)(this->mbr_0xa4 + 0x1c + iVar13);
                    }
                    *pfVar8 = (float)this->mbr_0x1dc * *pfVar8 + (float)this->mbr_0x1d4;
                  }
                }
                psVar7 = psVar9;
              }
              local_24 = local_24 + 1;
            } while ((int)local_24 < (int)dVar21);
          }
          this->mbr_0xb9 = 1;
          return;
        }
      }
    }
    iVar6 = dVar21 * this->mbr_0x118;
    this->mbr_0xb4 = 0;
    this->mbr_0xb0 = iVar6 * 2;
    psVar7 = (short *)operator_new(iVar6 * 4);
    dVar21 = this->mbr_0x118;
    dVar20 = this->mbr_0x11c;
    sVar16 = 0;
    sVar15 = 0;
    this->mbr_0xac = (dword)psVar7;
    dVar22 = dVar20;
    dVar4 = dVar21;
    dVar19 = dVar21;
    if ((int)dVar20 <= (int)dVar21) {
      dVar4 = dVar20;
      dVar19 = dVar20;
    }
    for (; (0 < (int)dVar4 && (local_8 = dVar22 - 2, 1 < (int)dVar21)); dVar21 = dVar21 - 2) {
      iVar6 = 0;
      psVar9 = psVar7;
      if (0 < (int)dVar21) {
        do {
          psVar7 = psVar9 + 2;
          *psVar9 = *(short *)&this->mbr_0x118 * sVar15 + sVar16;
          psVar9[1] = *(short *)&this->mbr_0x118 * (sVar15 + 1) + sVar16;
          sVar16 = sVar16 + 1;
          if ((iVar6 != 0) || (dVar4 != dVar19)) {
            this->mbr_0xb4 = this->mbr_0xb4 + 2;
          }
          iVar6 = iVar6 + 1;
          psVar9 = psVar7;
        } while (iVar6 < (int)dVar21);
      }
      sVar15 = sVar15 + 1;
      if ((int)dVar20 < 3) break;
      if (1 < (int)dVar20) {
        iVar6 = dVar22 - 1;
        psVar9 = psVar7;
        do {
          psVar7 = psVar9 + 2;
          *psVar9 = *(short *)&this->mbr_0x118 * sVar15 + sVar16 + -1;
          sVar5 = *(short *)&this->mbr_0x118 * sVar15;
          sVar15 = sVar15 + 1;
          psVar9[1] = sVar5 + -1 + sVar16 + -1;
          iVar6 = iVar6 + -1;
          this->mbr_0xb4 = this->mbr_0xb4 + 2;
          psVar9 = psVar7;
        } while (iVar6 != 0);
      }
      sVar16 = sVar16 + -2;
      if ((int)dVar21 < 3) break;
      if (1 < (int)dVar21) {
        iVar6 = dVar21 - 1;
        psVar9 = psVar7;
        do {
          psVar7 = psVar9 + 2;
          *psVar9 = *(short *)&this->mbr_0x118 * (sVar15 + -1) + sVar16;
          psVar9[1] = *(short *)&this->mbr_0x118 * (sVar15 + -2) + sVar16;
          sVar16 = sVar16 + -1;
          iVar6 = iVar6 + -1;
          this->mbr_0xb4 = this->mbr_0xb4 + 2;
          psVar9 = psVar7;
        } while (iVar6 != 0);
      }
      sVar15 = sVar15 + -2;
      if ((int)dVar20 < 4) break;
      psVar9 = psVar7;
      dVar22 = local_8;
      if (2 < (int)dVar20) {
        do {
          psVar7 = psVar9 + 2;
          *psVar9 = *(short *)&this->mbr_0x118 * sVar15 + sVar16 + 1;
          sVar5 = *(short *)&this->mbr_0x118 * sVar15;
          sVar15 = sVar15 + -1;
          psVar9[1] = sVar5 + 1 + sVar16 + 1;
          dVar22 = dVar22 - 1;
          this->mbr_0xb4 = this->mbr_0xb4 + 2;
          psVar9 = psVar7;
        } while (dVar22 != 0);
      }
      dVar20 = dVar20 - 2;
      sVar15 = sVar15 + 1;
      sVar16 = sVar16 + 2;
      dVar22 = local_8;
      dVar4 = dVar4 - 2;
    }
    uVar11 = uVar1;
    if ((int)this->mbr_0x118 < (int)uVar1) {
      uVar11 = this->mbr_0x118;
    }
    dVar21 = this->mbr_0x11c;
    if ((int)dVar2 <= (int)this->mbr_0x11c) {
      dVar21 = dVar2;
    }
    local_14 = 0;
    if (0 < (int)dVar21) {
      do {
        dVar20 = this->mbr_0x124;
        local_10 = 0;
        if (0 < (int)uVar11) {
          do {
            iVar6 = local_10;
            if (((int)(this->mbr_0x120 + local_10) < (int)uVar1) &&
               ((int)(dVar20 + local_14) < (int)dVar2)) {
              dVar22 = this->mbr_0x118;
              iVar10 = dVar22 * local_14 + local_10;
              if (this->mbr_0x226 == 0) {
                iVar10 = iVar10 * 0x2c;
                *(float *)(iVar10 + 0x1c + this->mbr_0xa0) =
                     ((float)local_10 / (float)(dVar22 - 1)) * (float)this->mbr_0x1c8 +
                     (float)this->mbr_0x1c0;
                *(float *)(iVar10 + 0x20 + this->mbr_0xa0) =
                     (1.0 - (float)local_14 / (float)(this->mbr_0x11c - 1)) * (float)this->mbr_0x1cc
                     + (float)this->mbr_0x1c4;
                dVar22 = this->mbr_0x118;
                if (local_10 == uVar11 - 1) {
                  local_10 = dVar22 - 1;
                }
                else {
                  local_10 = local_10 % (int)(dVar22 - 1);
                }
                local_2c = dVar22 - 1;
                *(float *)(iVar10 + 0x24 + this->mbr_0xa0) = (float)local_10 / (float)local_2c;
                dVar22 = this->mbr_0x11c;
                if (local_14 == dVar21 - 1) {
                  local_10 = dVar22 - 1;
                }
                else {
                  local_10 = (int)local_14 % (int)(dVar22 - 1);
                }
                local_2c = dVar22 - 1;
                *(float *)(iVar10 + 0x28 + this->mbr_0xa0) = 1.0 - (float)local_10 / (float)local_2c
                ;
                pfVar8 = (float *)(iVar10 + 0x24 + this->mbr_0xa0);
                *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                pfVar8 = (float *)(iVar10 + 0x28 + this->mbr_0xa0);
              }
              else {
                iVar10 = iVar10 * 0x20;
                *(float *)(iVar10 + 0x10 + this->mbr_0xa4) =
                     ((float)local_10 / (float)(dVar22 - 1)) * (float)this->mbr_0x1c8 +
                     (float)this->mbr_0x1c0;
                *(float *)(iVar10 + 0x14 + this->mbr_0xa4) =
                     (1.0 - (float)local_14 / (float)(this->mbr_0x11c - 1)) * (float)this->mbr_0x1cc
                     + (float)this->mbr_0x1c4;
                dVar22 = this->mbr_0x118;
                if (local_10 == uVar11 - 1) {
                  local_10 = dVar22 - 1;
                }
                else {
                  local_10 = local_10 % (int)(dVar22 - 1);
                }
                local_2c = dVar22 - 1;
                *(float *)(iVar10 + 0x18 + this->mbr_0xa4) = (float)local_10 / (float)local_2c;
                dVar22 = this->mbr_0x11c;
                if (local_14 == dVar21 - 1) {
                  local_10 = dVar22 - 1;
                }
                else {
                  local_10 = (int)local_14 % (int)(dVar22 - 1);
                }
                local_2c = dVar22 - 1;
                *(float *)(iVar10 + 0x1c + this->mbr_0xa4) = 1.0 - (float)local_10 / (float)local_2c
                ;
                pfVar8 = (float *)(iVar10 + 0x18 + this->mbr_0xa4);
                *pfVar8 = (float)this->mbr_0x1d8 * *pfVar8 + (float)this->mbr_0x1d0;
                pfVar8 = (float *)(iVar10 + 0x1c + this->mbr_0xa4);
              }
              *pfVar8 = (float)this->mbr_0x1dc * *pfVar8 + (float)this->mbr_0x1d4;
            }
            local_10 = iVar6 + 1;
          } while (local_10 < (int)uVar11);
        }
        local_14 = local_14 + 1;
      } while ((int)local_14 < (int)dVar21);
    }
  }
  return;
}



void __thiscall Gfx_WaterTile::meth_0x511430(Gfx_WaterTile *this,dword param_1,byte param_2)

{
  if (this->mbr_0xf8 == 0) {
    this->mbr_0xf4 = param_1;
    this->mbr_0xf8 = param_2;
    return;
  }
  if ((int *)this->mbr_0xf4 != (int *)0x0) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,(int *)this->mbr_0xf4);
    this->mbr_0xf4 = param_1;
    this->mbr_0xf8 = param_2;
    return;
  }
  this->mbr_0xf4 = param_1;
  this->mbr_0xf8 = param_2;
  return;
}



void __thiscall Gfx_WaterTile::meth_0x5114a0(Gfx_WaterTile *this,int param_1,byte param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined unaff_SI;
  
  if ((this->mbr_0x12c != 0) && ((int *)this->mbr_0x128 != (int *)0x0)) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,(int *)this->mbr_0x128);
  }
  this->mbr_0x128 = param_1;
  this->mbr_0x12c = param_2;
  if (param_1 != 0) {
    iVar2 = cls_0x55dc80::meth_0x51f160(DAT_0070b200,(char)param_1,unaff_SI);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x28) < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar2 + 0x24) + 0x1c);
      }
      fVar1 = (float)iVar3;
      if (iVar3 < 0) {
        fVar1 = fVar1 + 4.294967e+09;
      }
      this->mbr_0x1ac = (dword)fVar1;
      if (*(int *)(iVar2 + 0x28) < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar2 + 0x24) + 0x20);
      }
      fVar1 = (float)iVar2;
      if (iVar2 < 0) {
        fVar1 = fVar1 + 4.294967e+09;
      }
      this->mbr_0x1b0 = (dword)fVar1;
      goto LAB_0051154c;
    }
  }
  this->mbr_0x1ac = 0;
  this->mbr_0x1b0 = 0;
LAB_0051154c:
  this->mbr_0x1b4 = this->mbr_0x1ac;
  this->mbr_0x1b8 = this->mbr_0x1b0;
  return;
}



void __thiscall
Gfx_WaterTile::meth_0x511ef0
          (Gfx_WaterTile *this,dword param_1,dword param_2,float param_3,float param_4)

{
  this->mbr_0x1d0 = param_1;
  this->mbr_0x1ac = (dword)(param_3 * (float)this->mbr_0x1b4);
  this->mbr_0x1d8 = (dword)param_3;
  this->mbr_0x1d4 = param_2;
  this->mbr_0x1b0 = (dword)(param_4 * (float)this->mbr_0x1b8);
  this->mbr_0x1dc = (dword)param_4;
  if (this->mbr_0x90 != 0) {
    if (0xf < this->mbr_0x114) {
      meth_0x50fe10(this);
      return;
    }
    meth_0x50fe10(this);
  }
  return;
}



void __thiscall Gfx_WaterTile::virt_meth_0x511f70(Gfx_WaterTile *this,int *param_1)

{
  int **_Memory;
  
  _Memory = (int **)this->mbr_0x22c;
  if (_Memory != (int **)0x0) {
    _Memory = (int **)*_Memory;
  }
  if (_Memory != (int **)this->mbr_0x22c) {
    while (_Memory[2] != param_1) {
      _Memory = (int **)*_Memory;
      if (_Memory == (int **)this->mbr_0x22c) {
        return;
      }
    }
    if (_Memory != (int **)this->mbr_0x22c) {
      *_Memory[1] = (int)*_Memory;
      (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}



Gfx_WaterTile * __thiscall Gfx_WaterTile::Gfx_WaterTile(Gfx_WaterTile *this)

{
  dword dVar1;
  dword *pdVar2;
  int iVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635c1f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)&(this->Gfx_NodeAttribute).field_0x4 = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  local_4 = 0;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_WaterTile__vftable_675d64_00675d64;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0xf0 = 0xf;
  this->mbr_0xec = 0;
  *(undefined *)&this->mbr_0xdc = 0;
  this->mbr_0x114 = 0xf;
  this->mbr_0x110 = 0;
  *(undefined *)&this->mbr_0x100 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  dVar1 = FUN_0056e0b0();
  this->mbr_0x22c = dVar1;
  this->mbr_0x230 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xac = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0xd4 = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0x94 = 0;
  this->mbr_0x124 = 0;
  this->mbr_0x120 = 0;
  this->mbr_0x11c = 0;
  this->mbr_0x118 = 0;
  this->mbr_0xb8 = 1;
  this->mbr_0x168 = 0;
  this->mbr_0x164 = 0;
  this->mbr_0x160 = 0;
  this->mbr_0x15c = 0;
  this->mbr_0x154 = 0;
  this->mbr_0x150 = 0;
  this->mbr_0x14c = 0;
  this->mbr_0x148 = 0;
  this->mbr_0x140 = 0;
  this->mbr_0x13c = 0;
  this->mbr_0x138 = 0;
  this->mbr_0x134 = 0;
  this->mbr_0x16c = 0x3f800000;
  this->mbr_0x158 = 0x3f800000;
  this->mbr_0x144 = 0x3f800000;
  this->mbr_0x130 = 0x3f800000;
  this->mbr_0xb4 = 0;
  this->mbr_0xb9 = 0;
  pdVar2 = &this->mbr_0x178;
  iVar3 = 4;
  do {
    pdVar2[-1] = 0;
    *pdVar2 = 0;
    pdVar2[1] = 0;
    pdVar2 = pdVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  this->mbr_0xf4 = 0;
  this->mbr_0xf8 = 0;
  this->mbr_0x128 = 0;
  this->mbr_0x12c = 0;
  this->mbr_0x1a4 = 0;
  this->mbr_0x1a8 = 0;
  this->mbr_0x1ac = 0;
  this->mbr_0x1b0 = 0;
  this->mbr_0x1b4 = 0;
  this->mbr_0x1b8 = 0;
  this->mbr_0x1c0 = 0;
  this->mbr_0x1c4 = 0;
  this->mbr_0x1c8 = 0x3f800000;
  this->mbr_0x1cc = 0x3f800000;
  this->mbr_0x1d0 = 0;
  this->mbr_0x1d4 = 0;
  this->mbr_0x1d8 = 0x3f800000;
  this->mbr_0x1dc = 0x3f800000;
  this->mbr_0x1bc = 0;
  this->mbr_0x224 = 1;
  this->mbr_0x225 = 1;
  this->mbr_0x1e0 = 1;
  this->mbr_0x21c = 0;
  this->mbr_0x218 = 0;
  this->mbr_0x214 = 0;
  this->mbr_0x210 = 0;
  this->mbr_0x208 = 0;
  this->mbr_0x204 = 0;
  this->mbr_0x200 = 0;
  this->mbr_0x1fc = 0;
  this->mbr_0x1f4 = 0;
  this->mbr_0x1f0 = 0;
  this->mbr_0x1ec = 0;
  this->mbr_0x1e8 = 0;
  this->mbr_0x220 = 0x3f800000;
  this->mbr_0x20c = 0x3f800000;
  this->mbr_0x1f8 = 0x3f800000;
  this->mbr_0x1e4 = 0x3f800000;
  this->mbr_0xc4 = 0x80;
  this->mbr_0xc0 = 0x80;
  this->mbr_0xbc = 0x80;
  this->mbr_0x234 = 0;
  this->mbr_0x238 = 0;
  this->mbr_0x244 = 0;
  this->mbr_0x24c = 0x3f800000;
  this->mbr_0x250 = 0;
  this->mbr_0x226 = 1;
  this->mbr_0xc8 = 0xff;
  this->mbr_0x23c = 0x3ccccccd;
  this->mbr_0x240 = 1;
  this->mbr_0x241 = 1;
  this->mbr_0x248 = 1;
  this->mbr_0x254 = 0xbf800000;
  ExceptionList = local_c;
  return this;
}



void __thiscall Gfx_WaterTile::meth_0x512330(Gfx_WaterTile *this)

{
  dword dVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_4c [16];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635c3b;
  local_c = ExceptionList;
  if ((void *)this->mbr_0xa4 != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xa4);
  }
  if ((void *)this->mbr_0xa0 != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xa0);
  }
  pvVar2 = (void *)this->mbr_0x90;
  if (pvVar2 != (void *)0x0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (pvVar2,0x28,*(int *)((int)pvVar2 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar2 + -4));
  }
  if ((void *)this->mbr_0x98 != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x98);
  }
  if (this->mbr_0x226 == 0) {
    dVar1 = this->mbr_0x11c * this->mbr_0x118;
    ExceptionList = &local_c;
    this->mbr_0xa8 = dVar1;
    pvVar2 = operator_new(dVar1 * 0x2c);
    this->mbr_0xa0 = (dword)pvVar2;
  }
  else {
    dVar1 = this->mbr_0x11c * this->mbr_0x118;
    ExceptionList = &local_c;
    this->mbr_0xa8 = dVar1;
    pvVar2 = operator_new(dVar1 * 0x20);
    this->mbr_0xa4 = (dword)pvVar2;
  }
  this->mbr_0x9c = 1;
  puVar3 = (undefined4 *)operator_new(0x2c);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar3 + 1;
    *puVar3 = 1;
    _eh_vector_constructor_iterator_
              (puVar6,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
  }
  local_4 = 0xffffffff;
  this->mbr_0x90 = (dword)puVar6;
  pvVar2 = operator_new(this->mbr_0x9c << 6);
  this->mbr_0x98 = (dword)pvVar2;
  iVar4 = 0;
  if (0 < (int)this->mbr_0x9c) {
    iVar5 = 0;
    do {
      puVar3 = (undefined4 *)(this->mbr_0x98 + iVar5);
      puVar3[0xe] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[0xb] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[1] = 0;
      puVar3[0xf] = 0x3f800000;
      puVar3[10] = 0x3f800000;
      puVar3[5] = 0x3f800000;
      *puVar3 = 0x3f800000;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x40;
    } while (iVar4 < (int)this->mbr_0x9c);
  }
  iVar4 = meth_0x50fdc0(this);
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + 200);
    this->mbr_0x1a4 = (dword)((float)*(int *)(iVar4 + 0xc4) * *(float *)(iVar4 + 0x5c));
    this->mbr_0x1a8 = (dword)((float)iVar5 * *(float *)(iVar4 + 0x5c));
  }
  iVar4 = *(int *)&(this->Gfx_NodeAttribute).field_0x4;
  if (iVar4 != 0) {
    puVar3 = (undefined4 *)(iVar4 + 0x6c);
    puVar6 = local_4c;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = local_4c;
    puVar6 = (undefined4 *)this->mbr_0x98;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    *(float *)(this->mbr_0x98 + 0x30) =
         *(float *)(this->mbr_0x98 + 0x30) - (float)this->mbr_0x1a4 * 0.5;
    *(float *)(this->mbr_0x98 + 0x38) =
         *(float *)(this->mbr_0x98 + 0x38) - (float)this->mbr_0x1a8 * 0.5;
    ExceptionList = local_c;
    return;
  }
  puVar3 = (undefined4 *)this->mbr_0x98;
  puVar3[0xf] = 0x3f800000;
  puVar3[10] = 0x3f800000;
  puVar3[5] = 0x3f800000;
  *puVar3 = 0x3f800000;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  ExceptionList = local_c;
  return;
}



Gfx_WaterTile * __thiscall Gfx_WaterTile::~Gfx_WaterTile(Gfx_WaterTile *this)

{
  void *pvVar1;
  int **ppiVar2;
  int *piVar3;
  int *piStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635c98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_WaterTile__vftable_675d64_00675d64;
  local_4 = 4;
  if ((void *)this->mbr_0xa4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xa4);
  }
  if ((void *)this->mbr_0xa0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xa0);
  }
  if ((void *)this->mbr_0xac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xac);
  }
  pvVar1 = (void *)this->mbr_0x90;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x28,*(int *)((int)pvVar1 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((void *)this->mbr_0x98 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x98);
  }
  if ((undefined4 *)this->mbr_0x94 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x94)(1);
    this->mbr_0x94 = 0;
  }
  if ((this->mbr_0xf8 != 0) && ((int *)this->mbr_0xf4 != (int *)0x0)) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,(int *)this->mbr_0xf4);
  }
  if ((this->mbr_0x12c != 0) && ((int *)this->mbr_0x128 != (int *)0x0)) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,(int *)this->mbr_0x128);
  }
  if ((void *)this->mbr_0x234 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x234);
  }
  ppiVar2 = (int **)this->mbr_0x22c;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x228,&piStack_10,piVar3,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x22c);
}



uint __thiscall Gfx_WaterTile::virt_meth_0x5127b0(Gfx_WaterTile *this)

{
  uint uVar1;
  dword dVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = this->mbr_0x230;
  uVar4 = (**(code **)(*DAT_00707ce4 + 0x50))();
  if (uVar1 < uVar4) {
    dVar2 = this->mbr_0x22c;
    iVar5 = FUN_00433760(dVar2,*(undefined4 *)(dVar2 + 4),(undefined4 *)&stack0x00000004);
    cls_0x4b7750::meth_0x4b7500((cls_0x4b7750 *)&this->mbr_0x228,1);
    *(int *)(dVar2 + 4) = iVar5;
    piVar3 = *(int **)(iVar5 + 4);
    *piVar3 = iVar5;
    return CONCAT31((int3)((uint)piVar3 >> 8),1);
  }
  return uVar4 & 0xffffff00;
}



undefined4 * __thiscall Gfx_WaterTile::virt_meth_0x512810(Gfx_WaterTile *this,byte param_1)

{
  ~Gfx_WaterTile(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall Gfx_WaterTile::virt_meth_0x512830(Gfx_WaterTile *this)

{
  cls_0x4b7c30::meth_0x4b7c30((cls_0x4b7c30 *)&this->mbr_0x228,(char)this,this);
  return;
}



void __thiscall Gfx_WaterTile::meth_0x512850(Gfx_WaterTile *this)

{
  dword *this_00;
  byte bVar1;
  dword dVar2;
  int iVar3;
  int iVar4;
  Gfx_BasePacketData *this_01;
  undefined4 *puVar5;
  int *piVar6;
  uint unaff_retaddr;
  undefined4 uVar7;
  undefined auStack_254 [580];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00635cc9;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (this->mbr_0x98 != 0) {
    ExceptionList = &local_c;
    iVar3 = meth_0x50fdc0(this);
    if (iVar3 != 0) {
      this_00 = &this->mbr_0x24;
      *this_00 = 0;
      this->mbr_0x28 = 0xffffffff;
      if (this->mbr_0x226 == 0) {
        piVar6 = (int *)this->mbr_0xa8;
        this->mbr_0x30 = this->mbr_0xa0;
        iVar4 = FUN_0047460d(0x252);
        uVar7 = 0x252;
      }
      else {
        this->mbr_0x30 = this->mbr_0xa4;
        piVar6 = (int *)this->mbr_0xa8;
        iVar4 = FUN_0047460d(0x242);
        uVar7 = 0x242;
      }
      Gregorian::meth_0x4ab680((Gregorian *)this_00,uVar7,iVar4,piVar6);
      this->mbr_0x34 = this->mbr_0xac;
      Gregorian::meth_0x4ab6c0((Gregorian *)this_00,2,this->mbr_0xb0);
      if ((undefined4 *)this->mbr_0x94 != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)this->mbr_0x94)(1);
        this->mbr_0x94 = 0;
      }
      this_01 = (Gfx_BasePacketData *)operator_new(0x50);
      uStack_4 = 0;
      if (this_01 == (Gfx_BasePacketData *)0x0) {
        this_01 = (Gfx_BasePacketData *)0x0;
      }
      else {
        Gfx_BasePacketData::Gfx_BasePacketData(this_01,0);
        this_01->vftptr_0x0 =
             (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
      }
      uStack_4 = 0xffffffff;
      this->mbr_0x94 = (dword)this_01;
      cls_0x4abc60::meth_0x41f1c0(&this->cls_0x4abc60);
      puVar5 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)&this->mbr_0x24,1);
      *puVar5 = 0;
      bVar1 = this->mbr_0xb9;
      puVar5[9] = 1;
      puVar5[8] = 5 - (uint)(bVar1 != 0);
      cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)auStack_254);
      auStack_254._36_4_ = this->mbr_0x1e0;
      uStack_4 = 1;
      if (this->mbr_0x224 == 0) {
        auStack_254[185] = 0;
      }
      bVar1 = this->mbr_0x225;
      auStack_254[188] = this->mbr_0x226 == 0;
      auStack_254._308_4_ = this->mbr_0x128;
      if (*(char *)(iVar3 + 0x174) == '\0') {
        if (auStack_254._308_4_ == 0) {
          auStack_254._28_4_ = (bVar1 != 0) + 8;
        }
        else {
          auStack_254._28_4_ = (bVar1 != 0) + 0xc;
        }
      }
      else if (auStack_254._308_4_ == 0) {
        auStack_254._28_4_ = (bVar1 != 0) + 0x13;
      }
      else {
        auStack_254._28_4_ = (bVar1 != 0) + 0x19;
      }
      auStack_254._304_4_ = this->mbr_0xf4;
      auStack_254[189] = 1;
      auStack_254._32_4_ = auStack_254._28_4_;
      auStack_254._40_4_ = auStack_254._36_4_;
      ::cls_0x50db20::cls_0x50db20
                ((cls_0x50db20 *)(this->cls_0x4abc60).mbr_0xc,(_String_base *)auStack_254);
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = this->mbr_0xb4;
      dVar2 = this->mbr_0x94;
      *(dword *)(dVar2 + 0x14) = this->mbr_0x98;
      *(undefined4 *)(dVar2 + 0x10) = 1;
      uStack_4 = 0xffffffff;
      cls_0x4b60b0::meth_0x401720((cls_0x4b60b0 *)auStack_254);
      if (this->mbr_0x226 == 0) {
        if ((int **)this->mbr_0x22c == (int **)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = *(int **)this->mbr_0x22c;
        }
        if (piVar6 != (int *)this->mbr_0x22c) {
          do {
            Gfx_BasePacketData::meth_0x4b7660((Gfx_BasePacketData *)this->mbr_0x94);
            piVar6 = (int *)*piVar6;
          } while (piVar6 != (int *)this->mbr_0x22c);
        }
      }
      cls_0x4abc60::meth_0x4abdd0(&this->cls_0x4abc60);
      this->mbr_0x28 = 0xffffffff;
      cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this->mbr_0x90,(int)&this->mbr_0x24);
      *(dword *)(this->mbr_0x90 + 0xc) = this->mbr_0x94;
      *(undefined *)(this->mbr_0x90 + 0x1d) = 1;
      *(undefined *)(this->mbr_0x90 + 0x1e) = 1;
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Gfx_WaterTile::meth_0x512b40(Gfx_WaterTile *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  dword dVar6;
  dword dVar7;
  dword *pdVar8;
  dword dVar9;
  dword dVar10;
  undefined4 **ppuVar11;
  dword dVar12;
  dword dVar13;
  undefined *puVar14;
  undefined4 *puStack_d8;
  undefined4 local_c0 [12];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80 [13];
  undefined auStack_4c [32];
  undefined4 uStack_2c;
  
  iVar3 = *(int *)&(this->Gfx_NodeAttribute).field_0x4;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)this->mbr_0x98;
    puVar4[0xe] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xb] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[0xf] = 0x3f800000;
    puVar4[10] = 0x3f800000;
    puVar4[5] = 0x3f800000;
    *puVar4 = 0x3f800000;
  }
  else {
    puVar4 = (undefined4 *)(iVar3 + 0x6c);
    puVar5 = local_80;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = local_80;
    puVar5 = (undefined4 *)this->mbr_0x98;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(float *)(this->mbr_0x98 + 0x30) =
         *(float *)(this->mbr_0x98 + 0x30) - (float)this->mbr_0x1a4 * 0.5;
    *(float *)(this->mbr_0x98 + 0x38) =
         *(float *)(this->mbr_0x98 + 0x38) - (float)this->mbr_0x1a8 * 0.5;
  }
  puStack_d8 = (undefined4 *)0x512be7;
  iVar3 = meth_0x50fdc0(this);
  if (iVar3 != 0) {
    fVar1 = *(float *)(iVar3 + 0x5c);
    *(float *)(this->mbr_0x98 + 0x30) =
         (float)this->mbr_0x120 * fVar1 + *(float *)(this->mbr_0x98 + 0x30);
    *(float *)(this->mbr_0x98 + 0x38) =
         (float)this->mbr_0x124 * fVar1 + *(float *)(this->mbr_0x98 + 0x38);
    puVar4 = (undefined4 *)this->mbr_0x98;
    puVar5 = local_c0;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puStack_d8 = local_c0;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    thunk_FUN_00471e4f();
    dVar12 = this->mbr_0x98;
    puVar14 = auStack_4c;
    dVar13 = dVar12;
    thunk_FUN_00471943();
    ppuVar11 = &puStack_d8;
    *(float *)(this->mbr_0x98 + 0x30) =
         *(float *)(this->mbr_0x98 + 0x30) - (float)this->mbr_0x120 * 0.0;
    *(float *)(this->mbr_0x98 + 0x38) =
         *(float *)(this->mbr_0x98 + 0x38) - (float)this->mbr_0x124 * 0.0;
    dVar9 = this->mbr_0x98;
    dVar10 = dVar9;
    thunk_FUN_00471943();
    dVar6 = this->mbr_0x98;
    pdVar8 = &this->mbr_0x1e4;
    dVar7 = dVar6;
    thunk_FUN_00471943();
    if (this->mbr_0xb8 != 0) {
      meth_0x512850(this);
      this->mbr_0xb8 = 0;
    }
    if (this->mbr_0x90 != 0) {
      (**(code **)(*DAT_00707ce4 + 0xe8))
                (this->mbr_0x90,uStack_2c,this->mbr_0x9c,dVar6,dVar7,pdVar8,dVar9,dVar10,ppuVar11,
                 dVar12,dVar13,puVar14);
    }
  }
  return;
}


#include "../include/Gfx_WaterTile.h"
