#include "../include/cls_0x6b848c.h"

cls_0x6b848c * __thiscall cls_0x6b848c::~cls_0x6b848c(cls_0x6b848c *this)

{
  this->vftptr_0x0 = &cls_0x6b848c__vftable_6b848c_006b848c;
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x104c);
}



dword __thiscall cls_0x6b848c::meth_0x5d6d77(cls_0x6b848c *this,int param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  
  dVar1 = this->mbr_0x8;
  if (dVar1 == 1) {
    if (this->mbr_0x1048 == 2) {
      uVar5 = 0;
      if (this->mbr_0x1058 != 0) {
        pfVar3 = (float *)(param_1 + 8);
        iVar4 = 0;
        do {
          uVar5 = uVar5 + 1;
          *(float *)(iVar4 + this->mbr_0x104c) = (pfVar3[-2] + 1.0) * 0.5;
          *(float *)(iVar4 + 4 + this->mbr_0x104c) = (pfVar3[-1] + 1.0) * 0.5;
          *(float *)(iVar4 + 8 + this->mbr_0x104c) = (*pfVar3 + 1.0) * 0.5;
          *(float *)(iVar4 + 0xc + this->mbr_0x104c) = pfVar3[1];
          pfVar3 = pfVar3 + 4;
          iVar4 = iVar4 + 0x10;
        } while (uVar5 < this->mbr_0x1058);
      }
    }
    else if ((this->mbr_0x1048 == 3) && (uVar5 = 0, this->mbr_0x1058 != 0)) {
      pfVar3 = (float *)(param_1 + 8);
      iVar4 = 0;
      do {
        uVar5 = uVar5 + 1;
        *(float *)(iVar4 + this->mbr_0x104c) = (pfVar3[-2] + 1.0) * 0.5;
        *(float *)(iVar4 + 4 + this->mbr_0x104c) = (pfVar3[-1] + 1.0) * 0.5;
        *(float *)(iVar4 + 8 + this->mbr_0x104c) = (*pfVar3 + 1.0) * 0.5;
        *(float *)(iVar4 + 0xc + this->mbr_0x104c) = (pfVar3[1] + 1.0) * 0.5;
        pfVar3 = pfVar3 + 4;
        iVar4 = iVar4 + 0x10;
      } while (uVar5 < this->mbr_0x1058);
    }
  }
  else if (dVar1 == 2) {
    if (this->mbr_0x1048 == 1) {
      uVar5 = 0;
      if (this->mbr_0x1058 != 0) {
        pfVar3 = (float *)(param_1 + 8);
        iVar4 = 0;
        do {
          uVar5 = uVar5 + 1;
          *(float *)(iVar4 + this->mbr_0x104c) = pfVar3[-2] * 2.0 - 1.0;
          *(float *)(iVar4 + 4 + this->mbr_0x104c) = pfVar3[-1] * 2.0 - 1.0;
          *(float *)(iVar4 + 8 + this->mbr_0x104c) = *pfVar3 * 2.0 - 1.0;
          *(float *)(iVar4 + 0xc + this->mbr_0x104c) = pfVar3[1];
          pfVar3 = pfVar3 + 4;
          iVar4 = iVar4 + 0x10;
        } while (uVar5 < this->mbr_0x1058);
      }
    }
    else if ((this->mbr_0x1048 == 3) && (uVar5 = 0, this->mbr_0x1058 != 0)) {
      puVar2 = (undefined4 *)(param_1 + 8);
      iVar4 = 0;
      do {
        *(undefined4 *)(iVar4 + this->mbr_0x104c) = puVar2[-2];
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar4 + 4 + this->mbr_0x104c) = puVar2[-1];
        *(undefined4 *)(iVar4 + 8 + this->mbr_0x104c) = *puVar2;
        pfVar3 = (float *)(puVar2 + 1);
        puVar2 = puVar2 + 4;
        *(float *)(iVar4 + 0xc + this->mbr_0x104c) = (*pfVar3 + 1.0) * 0.5;
        iVar4 = iVar4 + 0x10;
      } while (uVar5 < this->mbr_0x1058);
    }
  }
  else if (dVar1 == 3) {
    if (this->mbr_0x1048 == 1) {
      uVar5 = 0;
      if (this->mbr_0x1058 != 0) {
        pfVar3 = (float *)(param_1 + 8);
        iVar4 = 0;
        do {
          uVar5 = uVar5 + 1;
          *(float *)(iVar4 + this->mbr_0x104c) = pfVar3[-2] * 2.0 - 1.0;
          *(float *)(iVar4 + 4 + this->mbr_0x104c) = pfVar3[-1] * 2.0 - 1.0;
          *(float *)(iVar4 + 8 + this->mbr_0x104c) = *pfVar3 * 2.0 - 1.0;
          *(float *)(iVar4 + 0xc + this->mbr_0x104c) = pfVar3[1] * 2.0 - 1.0;
          pfVar3 = pfVar3 + 4;
          iVar4 = iVar4 + 0x10;
        } while (uVar5 < this->mbr_0x1058);
      }
    }
    else if ((this->mbr_0x1048 == 2) && (uVar5 = 0, this->mbr_0x1058 != 0)) {
      puVar2 = (undefined4 *)(param_1 + 8);
      iVar4 = 0;
      do {
        *(undefined4 *)(iVar4 + this->mbr_0x104c) = puVar2[-2];
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar4 + 4 + this->mbr_0x104c) = puVar2[-1];
        *(undefined4 *)(iVar4 + 8 + this->mbr_0x104c) = *puVar2;
        pfVar3 = (float *)(puVar2 + 1);
        puVar2 = puVar2 + 4;
        *(float *)(iVar4 + 0xc + this->mbr_0x104c) = (*pfVar3 + *pfVar3) - 1.0;
        iVar4 = iVar4 + 0x10;
      } while (uVar5 < this->mbr_0x1058);
    }
  }
  return this->mbr_0x104c;
}



cls_0x6b848c * __thiscall
cls_0x6b848c::cls_0x6b848c(cls_0x6b848c *this,undefined4 *param_1,uint param_2,dword param_3)

{
  dword dVar1;
  dword *pdVar2;
  int iVar3;
  Alignment *pAVar4;
  dword dVar5;
  uint uVar6;
  uint uVar7;
  dword *pdVar8;
  
  this->vftptr_0x0 = &cls_0x6b848c__vftable_6b848c_006b848c;
  FUN_004010a0(&this->mbr_0x30,0x10,0x100,&LAB_00474d39);
  this->mbr_0x18 = *param_1;
  this->mbr_0x4 = param_1[1];
  this->mbr_0x1050 = param_1[2];
  this->mbr_0x1054 = param_1[3];
  pdVar2 = param_1 + 10;
  pdVar8 = &this->mbr_0x1030;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar8 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar8 = pdVar8 + 1;
  }
  pAVar4 = (Alignment *)&DAT_00700b08;
  if (param_1[0x10] == 0) {
    pAVar4 = &DAT_00700a88;
  }
  this->mbr_0x2c = (dword)pAVar4;
  this->mbr_0x1068 = param_2 >> 3;
  this->mbr_0x1048 = 0;
  this->mbr_0x104c = 0;
  this->mbr_0xc = (uint)(param_2 != 0);
  this->mbr_0x8 = param_3;
  dVar1 = param_1[0x11];
  this->mbr_0x10 = dVar1;
  if (dVar1 != 0) {
    uVar6 = param_1[0x11];
    this->mbr_0x1c = (dword)((float)(uVar6 >> 0x10 & 0xff) * 0.003921569);
    *(float *)&this->field_0x20 = (float)(uVar6 >> 8 & 0xff) * 0.003921569;
    *(float *)&this->field_0x24 = (float)(uVar6 & 0xff) * 0.003921569;
    *(float *)&this->field_0x28 = (float)(uVar6 >> 0x18) * 0.003921569;
  }
  if ((this->mbr_0x4 == 0x29) || (this->mbr_0x4 == 0x28)) {
    this->mbr_0x14 = 1;
    if (param_1[0x12] == 0) {
      iVar3 = 0x100;
      pdVar2 = &this->mbr_0x38;
      do {
        pdVar2[1] = 0x3f800000;
        *pdVar2 = 0x3f800000;
        iVar3 = iVar3 + -1;
        pdVar2[-1] = 0x3f800000;
        pdVar2[-2] = 0x3f800000;
        pdVar2 = pdVar2 + 4;
      } while (iVar3 != 0);
    }
    else {
      pdVar2 = &this->mbr_0x34;
      uVar6 = 0;
      do {
        uVar7 = uVar6 + 4;
        pdVar2[-1] = (dword)((float)(uint)*(byte *)(uVar6 + param_1[0x12]) * 0.003921569);
        *pdVar2 = (dword)((float)(uint)*(byte *)(uVar6 + 1 + param_1[0x12]) * 0.003921569);
        pdVar2[1] = (dword)((float)(uint)*(byte *)(uVar6 + 2 + param_1[0x12]) * 0.003921569);
        pdVar2[2] = (dword)((float)(uint)*(byte *)(uVar6 + 3 + param_1[0x12]) * 0.003921569);
        pdVar2 = pdVar2 + 4;
        uVar6 = uVar7;
      } while (uVar7 < 0x400);
    }
  }
  else {
    this->mbr_0x14 = 0;
  }
  this->mbr_0x105c = this->mbr_0x103c - this->mbr_0x1034;
  dVar1 = this->mbr_0x1030;
  dVar5 = this->mbr_0x1038 - dVar1;
  this->mbr_0x1060 = this->mbr_0x1044 - this->mbr_0x1040;
  this->mbr_0x1058 = dVar5;
  this->mbr_0x1064 = this->mbr_0x1068 * dVar5;
  if (this->mbr_0xc != 0) {
    this->mbr_0x18 =
         this->mbr_0x18 +
         this->mbr_0x1068 * dVar1 + this->mbr_0x1050 * this->mbr_0x1034 +
         this->mbr_0x1054 * this->mbr_0x1040;
    this->mbr_0x1038 = this->mbr_0x1058;
    this->mbr_0x103c = this->mbr_0x105c;
    this->mbr_0x1030 = 0;
    this->mbr_0x1034 = 0;
    this->mbr_0x1040 = 0;
    this->mbr_0x1044 = this->mbr_0x1060;
  }
  return this;
}



undefined4 * __thiscall cls_0x6b848c::virt_meth_0x5d7777(cls_0x6b848c *this,byte param_1)

{
  ~cls_0x6b848c(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall cls_0x6b848c::virt_meth_0x5d780e(cls_0x6b848c *this)

{
  dword *pdVar1;
  dword *pdVar2;
  undefined local_28 [8];
  dword local_20;
  dword local_1c;
  dword local_18;
  dword local_14;
  dword local_10;
  dword local_c;
  dword local_8;
  
  local_10 = this->mbr_0x1058;
  local_14 = this->mbr_0x1064;
  local_18 = this->mbr_0x18;
  local_1c = this->mbr_0x2c;
  local_20 = this->mbr_0x10;
  this->mbr_0x1064 = this->mbr_0x1068;
  this->mbr_0x1058 = 1;
  this->mbr_0x18 = (dword)local_28;
  this->mbr_0x2c = (dword)&DAT_00700a88;
  this->mbr_0x10 = 0;
  if (this->mbr_0x8 != 1) {
    pdVar1 = &this->mbr_0x1048;
    local_8 = *pdVar1;
    pdVar2 = &this->mbr_0x104c;
    local_c = *pdVar2;
    *pdVar1 = 1;
    *pdVar2 = (dword)&this->mbr_0x1c;
    meth_0x5d6d77(this,(int)&this->mbr_0x1c);
    *pdVar1 = local_8;
    *pdVar2 = local_c;
  }
  (*this->vftptr_0x0->virt_meth_0x5d6d74_8)(this);
  (*this->vftptr_0x0->virt_meth_0x5d6d74_4)(this);
  this->mbr_0x1058 = local_10;
  this->mbr_0x1064 = local_14;
  this->mbr_0x18 = local_18;
  this->mbr_0x2c = local_1c;
  this->mbr_0x10 = local_20;
  return;
}



void __thiscall cls_0x6b848c::meth_0x5d78da(cls_0x6b848c *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  
  uVar1 = this->mbr_0x1058 * 0x10 + param_1;
  if (param_1 < uVar1) {
    iVar2 = ((uVar1 - param_1) - 1 >> 4) + 1;
    pfVar3 = (float *)(param_1 + 8);
    do {
      if (((((NAN(pfVar3[-2]) || NAN((float)this->mbr_0x1c)) !=
             (pfVar3[-2] == (float)this->mbr_0x1c)) &&
           ((NAN(pfVar3[-1]) || NAN(*(float *)&this->field_0x20)) !=
            (pfVar3[-1] == *(float *)&this->field_0x20))) &&
          ((NAN(*pfVar3) || NAN(*(float *)&this->field_0x24)) !=
           (*pfVar3 == *(float *)&this->field_0x24))) &&
         ((NAN(pfVar3[1]) || NAN(*(float *)&this->field_0x28)) !=
          (pfVar3[1] == *(float *)&this->field_0x28))) {
        pfVar3[1] = 0.0;
        *pfVar3 = 0.0;
        pfVar3[-1] = 0.0;
        pfVar3[-2] = 0.0;
      }
      pfVar3 = pfVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



cls_0x6b848c * __thiscall cls_0x6b848c::~cls_0x6b848c(cls_0x6b848c *this)

{
  this->vftptr_0x0 = &cls_0x6b848c__vftable_6b848c_006b848c;
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x104c);
}



undefined4 __thiscall cls_0x6b848c::meth_0x5da900(cls_0x6b848c *this)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *local_10;
  uint local_c;
  
  if ((this->mbr_0x108c != 0) && (this->mbr_0x1090 != 0)) {
    local_c = this->mbr_0x1070;
    local_10 = (ushort *)
               (this->mbr_0x1080 * this->mbr_0x1054 + this->mbr_0x1074 * this->mbr_0x1050 +
                local_c * 2 + this->mbr_0x18);
    pfVar1 = (float *)this->mbr_0x106c;
    if (local_c < this->mbr_0x1078) {
      do {
        iVar2 = (int)ROUND(pfVar1[2] * 24.966 + pfVar1[1] * 128.553 + *pfVar1 * 65.481 + 0.5) + 0x10
        ;
        iVar4 = (int)ROUND(pfVar1[5] * 128.553 + pfVar1[6] * 24.966 + pfVar1[4] * 65.481 + 0.5) +
                0x10;
        iVar3 = (int)ROUND(((pfVar1[2] * 112.0 - pfVar1[1] * 74.203) - *pfVar1 * 37.797) + 0.5) +
                0x80;
        iVar5 = (int)ROUND((*pfVar1 * 112.0 - (pfVar1[2] * 18.214 + pfVar1[1] * 93.786)) + 0.5) +
                0x80;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xff < iVar2) {
          iVar2 = 0xff;
        }
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0xff < iVar4) {
          iVar4 = 0xff;
        }
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        else if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        local_c = local_c + 2;
        pfVar1 = pfVar1 + 8;
        *local_10 = (ushort)(iVar2 << ((byte)this->mbr_0x1094 & 0x1f)) |
                    (ushort)(iVar3 << ((byte)this->mbr_0x1098 & 0x1f));
        local_10[1] = (ushort)(iVar4 << ((byte)this->mbr_0x1094 & 0x1f)) |
                      (ushort)(iVar5 << ((byte)this->mbr_0x1098 & 0x1f));
        local_10 = local_10 + 2;
      } while (local_c < this->mbr_0x1078);
    }
    this->mbr_0x108c = 0;
  }
  return 0;
}



int __thiscall
cls_0x6b848c::meth_0x5dab24(cls_0x6b848c *this,uint param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  ushort *puVar12;
  
  if (this->mbr_0x1090 == 0) {
    iVar10 = -0x7ff8fff2;
  }
  else {
    if ((((param_1 < this->mbr_0x1074) || (this->mbr_0x107c <= param_1)) ||
        (param_2 < this->mbr_0x1080)) || (this->mbr_0x1084 <= param_2)) {
      iVar10 = meth_0x5da900(this);
      if (iVar10 < 0) {
        return iVar10;
      }
      this->mbr_0x107c = param_1 + 1;
      this->mbr_0x1074 = param_1;
      this->mbr_0x1080 = param_2;
      this->mbr_0x1084 = param_2 + 1;
      if (param_3 != 0) {
        param_3 = this->mbr_0x1070;
        pfVar11 = (float *)this->mbr_0x106c;
        puVar12 = (ushort *)
                  (this->mbr_0x1050 * param_1 + this->mbr_0x1054 * param_2 + param_3 * 2 +
                  this->mbr_0x18);
        if (param_3 < this->mbr_0x1078) {
          do {
            uVar1 = *(undefined2 *)&this->mbr_0x1094;
            uVar2 = puVar12[1];
            fVar7 = (float)(*puVar12 >> ((byte)*(undefined2 *)&this->mbr_0x1098 & 0x1f) & 0xff) -
                    128.0;
            fVar6 = (float)(uVar2 >> ((byte)*(undefined2 *)&this->mbr_0x1098 & 0x1f) & 0xff) - 128.0
            ;
            fVar3 = fVar6 * 0.00625893;
            fVar5 = ((float)(*puVar12 >> ((byte)*(undefined2 *)&this->mbr_0x1094 & 0x1f) & 0xff) -
                    16.0) * 0.00456621;
            fVar4 = fVar5 + fVar3;
            *pfVar11 = fVar4;
            fVar8 = fVar7 * 0.00153632;
            fVar6 = fVar6 * 0.00318811;
            fVar9 = (fVar5 - fVar8) - fVar6;
            pfVar11[1] = fVar9;
            fVar7 = fVar7 * 0.00791071;
            fVar5 = fVar7 + fVar5;
            pfVar11[2] = fVar5;
            pfVar11[3] = 1.0;
            if (fVar4 < 0.0 == NAN(fVar4)) {
              if (1.0 < fVar4) {
                fVar4 = 1.0;
              }
            }
            else {
              fVar4 = 0.0;
            }
            *pfVar11 = fVar4;
            if (fVar9 < 0.0 == NAN(fVar9)) {
              if (1.0 < fVar9) {
                fVar9 = 1.0;
              }
            }
            else {
              fVar9 = 0.0;
            }
            pfVar11[1] = fVar9;
            if (fVar5 < 0.0 == NAN(fVar5)) {
              if (1.0 < fVar5) {
                fVar5 = 1.0;
              }
            }
            else {
              fVar5 = 0.0;
            }
            pfVar11[2] = fVar5;
            fVar4 = ((float)(uVar2 >> ((byte)uVar1 & 0x1f) & 0xff) - 16.0) * 0.00456621;
            fVar3 = fVar4 + fVar3;
            pfVar11[4] = fVar3;
            fVar6 = (fVar4 - fVar8) - fVar6;
            pfVar11[5] = fVar6;
            fVar4 = fVar4 + fVar7;
            pfVar11[6] = fVar4;
            pfVar11[7] = 1.0;
            if (fVar3 < 0.0 == NAN(fVar3)) {
              if (1.0 < fVar3) {
                fVar3 = 1.0;
              }
            }
            else {
              fVar3 = 0.0;
            }
            pfVar11[4] = fVar3;
            if (fVar6 < 0.0 == NAN(fVar6)) {
              if (1.0 < fVar6) {
                fVar6 = 1.0;
              }
            }
            else {
              fVar6 = 0.0;
            }
            pfVar11[5] = fVar6;
            if (fVar4 < 0.0 == NAN(fVar4)) {
              if (1.0 < fVar4) {
                fVar4 = 1.0;
              }
            }
            else {
              fVar4 = 0.0;
            }
            param_3 = param_3 + 2;
            pfVar11[6] = fVar4;
            puVar12 = puVar12 + 2;
            pfVar11 = pfVar11 + 8;
          } while (param_3 < this->mbr_0x1078);
        }
      }
    }
    iVar10 = 0;
  }
  return iVar10;
}



undefined4 * __thiscall cls_0x6b848c::virt_meth_0x5dae2d(cls_0x6b848c *this,byte param_1)

{
  ~cls_0x6b848c(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/cls_0x6b848c.h"
