#include "../include/cls_0x6b849c.h"

cls_0x6b849c * __thiscall cls_0x6b849c::~cls_0x6b849c(cls_0x6b849c *this)

{
  cls_0x6b849c__vftable_6b849c *pcVar1;
  cls_0x6b849c__vftable_6b849c **extraout_ECX;
  cls_0x6b849c__vftable_6b849c *pcVar2;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6b849c__vftable_6b849c ***)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = &cls_0x6b849c__vftable_6b849c_006b849c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((extraout_ECX[0x42f] != (cls_0x6b849c__vftable_6b849c *)0x0) &&
     (extraout_ECX[0x430] != (cls_0x6b849c__vftable_6b849c *)0x0)) {
    pcVar2 = extraout_ECX[0x427];
    pcVar1 = extraout_ECX[0x428];
    *(cls_0x6b849c__vftable_6b849c **)(unaff_EBP + -0x10) = extraout_ECX[0x430];
    if (pcVar2 < pcVar1) {
      do {
        if (extraout_ECX[0x424] < extraout_ECX[0x426]) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(*(int *)(unaff_EBP + -0x10) + 4));
        }
        pcVar2 = (cls_0x6b849c__vftable_6b849c *)((int)&pcVar2->virt_meth_0x5db233_0 + 1);
      } while (pcVar2 < extraout_ECX[0x428]);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(extraout_ECX[0x42e]);
}



void __thiscall cls_0x6b849c::virt_meth_0x5d710e(cls_0x6b849c *this)

{
  int iVar1;
  dword dVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  cls_0x6b848c *this_00;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int unaff_EBP;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  
  FUN_0061781c();
  uVar9 = *(int *)(unaff_EBP + 8) + this_00->mbr_0x1034;
  *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + this_00->mbr_0x1040;
  iVar7 = *(int *)&this_00[1].field_0x24;
  *(uint *)(unaff_EBP + 8) = uVar9;
  if (iVar7 == 0) {
    puVar3 = (undefined4 *)operator_new(this_00[1].mbr_0xc * this_00[1].mbr_0x10 * 8);
    *(undefined4 **)&this_00[1].field_0x24 = puVar3;
    if (puVar3 == (undefined4 *)0x0) goto LAB_005d74f7;
    for (uVar6 = this_00[1].mbr_0xc * this_00[1].mbr_0x10 * 8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  puVar11 = (uint *)(*(int *)&this_00[1].field_0x24 +
                    ((*(int *)(unaff_EBP + 0xc) - (int)this_00[1].vftptr_0x0) * this_00[1].mbr_0xc +
                    (uVar9 - this_00->mbr_0x1090 >> 2)) * 8);
  uVar6 = puVar11[1];
  *(uint **)(unaff_EBP + -0x10) = puVar11;
  if (uVar6 == 0) {
    dVar2 = this_00[1].mbr_0x8;
    *(dword *)(unaff_EBP + -0x18) = dVar2 << 4;
    pvVar4 = operator_new(dVar2 << 8);
    *(void **)(unaff_EBP + -0x14) = pvVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar4 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      FUN_004010a0(pvVar4,0x10,*(int *)(unaff_EBP + -0x18),&LAB_00474d39);
      uVar6 = *(uint *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puVar11[1] = uVar6;
    if (uVar6 == 0) goto LAB_005d74f7;
    *puVar11 = 0;
    *(int *)&this_00[1].field_0x20 = *(int *)&this_00[1].field_0x20 + 1;
  }
  if (*puVar11 == 0) {
    uVar6 = 4;
    if (3 < this_00->mbr_0x103c) {
      uVar6 = this_00->mbr_0x103c;
    }
    if (((uVar9 & 3) < this_00->mbr_0x1034) || (uVar6 < (uVar9 & 3) + 4)) {
      uVar6 = this_00->mbr_0x108c;
      iVar7 = (uVar9 >> 2) * this_00->mbr_0x1050 + (uVar6 >> 2) * this_00->mbr_0x1080 +
              this_00->mbr_0x1054 * *(int *)(unaff_EBP + 0xc) + this_00->mbr_0x18;
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4);
      *(uint *)(unaff_EBP + -0x18) = uVar6;
      while (uVar6 < this_00->mbr_0x1094) {
        (*(code *)this_00->mbr_0x1084)(*(undefined4 *)(unaff_EBP + -0x14),iVar7);
        iVar7 = iVar7 + this_00->mbr_0x1080;
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x100;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
        uVar6 = *(uint *)(unaff_EBP + -0x18);
      }
      puVar11 = *(uint **)(unaff_EBP + -0x10);
    }
    else {
      uVar6 = this_00->mbr_0x1038;
      *(undefined4 *)(unaff_EBP + -0x18) = 4;
      if (3 < uVar6) {
        *(uint *)(unaff_EBP + -0x18) = uVar6;
      }
      if (this_00->mbr_0x108c < this_00->mbr_0x1030) {
        (*(code *)this_00->mbr_0x1084)
                  (puVar11[1],
                   (this_00->mbr_0x108c >> 2) * this_00->mbr_0x1080 +
                   (uVar9 >> 2) * this_00->mbr_0x1050 +
                   this_00->mbr_0x1054 * *(int *)(unaff_EBP + 0xc) + this_00->mbr_0x18);
      }
      if (*(uint *)(unaff_EBP + -0x18) < this_00->mbr_0x1094) {
        (*(code *)this_00->mbr_0x1084)
                  (puVar11[1],
                   (this_00->mbr_0x1094 - 4 >> 2) * this_00->mbr_0x1080 +
                   (uVar9 >> 2) * this_00->mbr_0x1050 +
                   this_00->mbr_0x1054 * *(int *)(unaff_EBP + 0xc) + this_00->mbr_0x18);
      }
    }
  }
  if (this_00->mbr_0x1048 != 0) {
    uVar5 = cls_0x6b848c::meth_0x5d6d77(this_00,*(int *)(unaff_EBP + 0x10));
    *(undefined4 *)(unaff_EBP + 0x10) = uVar5;
  }
  uVar6 = this_00->mbr_0x1030 - this_00->mbr_0x108c;
  dVar2 = this_00->mbr_0x1090;
  uVar8 = this_00->mbr_0x1058 + uVar6;
  if (uVar6 < uVar8) {
    do {
      puVar10 = (undefined4 *)
                (((uVar6 & 0xfffffffc | uVar9 - dVar2 & 3) << 2 | uVar6 & 3) * 0x10 +
                *(int *)(*(int *)(unaff_EBP + -0x10) + 4));
      puVar3 = *(undefined4 **)(unaff_EBP + 0x10);
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x10;
      *puVar10 = *puVar3;
      puVar10[1] = puVar3[1];
      puVar10[2] = puVar3[2];
      uVar6 = uVar6 + 1;
      puVar10[3] = puVar3[3];
    } while (uVar6 < uVar8);
    uVar9 = *(uint *)(unaff_EBP + 8);
    puVar11 = *(uint **)(unaff_EBP + -0x10);
  }
  uVar6 = uVar9 - this_00->mbr_0x1090 & 3;
  if (this_00->mbr_0x1074 == 0) {
    *puVar11 = *puVar11 | 1 << (sbyte)uVar6;
  }
  else {
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    do {
      if ((this_00->mbr_0x107c & *(uint *)(unaff_EBP + 0x10)) == uVar6) {
        *puVar11 = *puVar11 | 1 << ((byte)*(undefined4 *)(unaff_EBP + 0x10) & 0x1f);
      }
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    } while (*(uint *)(unaff_EBP + 0x10) < 4);
  }
  if (*puVar11 == 0xf) {
    uVar6 = this_00->mbr_0x108c;
    iVar7 = (uVar9 >> 2) * this_00->mbr_0x1050 + (uVar6 >> 2) * this_00->mbr_0x1080 +
            this_00->mbr_0x1054 * *(int *)(unaff_EBP + 0xc) + this_00->mbr_0x18;
    *(uint *)(unaff_EBP + 0xc) = puVar11[1];
    *(uint *)(unaff_EBP + -0x18) = uVar6;
    while (uVar9 = this_00->mbr_0x1094, *(int *)(unaff_EBP + -0x14) = iVar7, uVar6 < uVar9) {
      uVar9 = 0;
      if (this_00->mbr_0x1074 != 0) {
        uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
        do {
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          iVar7 = uVar9 << 2;
          *(undefined4 *)(unaff_EBP + 8) = uVar5;
          do {
            iVar1 = (*(uint *)(unaff_EBP + 0x10) & this_00->mbr_0x1078) +
                    (this_00->mbr_0x107c & uVar9) * 4;
            if (iVar7 != iVar1) {
              puVar3 = *(undefined4 **)(unaff_EBP + 8);
              puVar10 = (undefined4 *)(iVar1 * 0x10 + *(int *)(unaff_EBP + 0xc));
              *puVar3 = *puVar10;
              puVar3[1] = puVar10[1];
              puVar3[2] = puVar10[2];
              puVar3[3] = puVar10[3];
              puVar11 = *(uint **)(unaff_EBP + -0x10);
            }
            *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x10;
            iVar7 = iVar7 + 1;
          } while (*(uint *)(unaff_EBP + 0x10) < 4);
          uVar5 = *(undefined4 *)(unaff_EBP + 8);
          uVar9 = uVar9 + 1;
        } while (uVar9 < 4);
      }
      iVar7 = *(int *)(unaff_EBP + -0x14);
      (**(code **)&this_00->field_0x1088)(iVar7,*(undefined4 *)(unaff_EBP + 0xc));
      iVar7 = iVar7 + this_00->mbr_0x1080;
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0x100;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
      uVar6 = *(uint *)(unaff_EBP + -0x18);
    }
    if ((((uint *)(*(int *)&this_00[1].field_0x24 + this_00[1].mbr_0x10 * this_00[1].mbr_0xc * 8) <=
          puVar11 + 2) || (puVar11[2] != 0)) || (puVar11[3] != 0)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)puVar11[1]);
    }
    puVar11[3] = puVar11[1];
    puVar11[1] = 0;
    puVar11[1] = 0;
  }
LAB_005d74f7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



cls_0x6b849c * __thiscall cls_0x6b849c::cls_0x6b849c(cls_0x6b849c *this,undefined4 *param_1)

{
  dword dVar1;
  uint uVar2;
  uint uVar3;
  dword dVar4;
  uint uVar5;
  uint uVar6;
  
  dVar4 = 1;
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b849c__vftable_6b849c_006b849c;
  if (param_1[6] == 1) {
    (this->cls_0x6b848c).mbr_0x1078 = 0;
  }
  else if (param_1[6] == 2) {
    (this->cls_0x6b848c).mbr_0x1078 = 1;
  }
  else {
    (this->cls_0x6b848c).mbr_0x1078 = 3;
  }
  if (param_1[7] == 1) {
    (this->cls_0x6b848c).mbr_0x107c = 0;
  }
  else if (param_1[7] == 2) {
    (this->cls_0x6b848c).mbr_0x107c = 1;
  }
  else {
    (this->cls_0x6b848c).mbr_0x107c = 3;
  }
  if (((this->cls_0x6b848c).mbr_0x1078 == 3) && ((this->cls_0x6b848c).mbr_0x107c == 3)) {
    dVar4 = 0;
  }
  (this->cls_0x6b848c).mbr_0x1074 = dVar4;
  dVar4 = (this->cls_0x6b848c).mbr_0x4;
  if (dVar4 == 0x31545844) {
    (this->cls_0x6b848c).mbr_0x1080 = 8;
    *(undefined **)&(this->cls_0x6b848c).field_0x1088 = &LAB_005e705f;
    (this->cls_0x6b848c).mbr_0x1084 = (dword)FUN_005e6d62;
  }
  else if (dVar4 == 0x32545844) {
    (this->cls_0x6b848c).mbr_0x1080 = 0x10;
    *(code **)&(this->cls_0x6b848c).field_0x1088 = FUN_005e7623;
    (this->cls_0x6b848c).mbr_0x1084 = (dword)&LAB_005e75dd;
  }
  else if (dVar4 == 0x33545844) {
    (this->cls_0x6b848c).mbr_0x1080 = 0x10;
    *(code **)&(this->cls_0x6b848c).field_0x1088 = FUN_005e7077;
    (this->cls_0x6b848c).mbr_0x1084 = (dword)FUN_005e6ea0;
  }
  else if (dVar4 == 0x34545844) {
    (this->cls_0x6b848c).mbr_0x1080 = 0x10;
    *(code **)&(this->cls_0x6b848c).field_0x1088 = FUN_005e7657;
    (this->cls_0x6b848c).mbr_0x1084 = (dword)&LAB_005e7600;
  }
  else if (dVar4 == 0x35545844) {
    (this->cls_0x6b848c).mbr_0x1080 = 0x10;
    *(code **)&(this->cls_0x6b848c).field_0x1088 = FUN_005e718b;
    (this->cls_0x6b848c).mbr_0x1084 = (dword)FUN_005e6f23;
  }
  dVar4 = (this->cls_0x6b848c).mbr_0x1040;
  uVar6 = (this->cls_0x6b848c).mbr_0x1030;
  dVar1 = (this->cls_0x6b848c).mbr_0x103c;
  uVar5 = (this->cls_0x6b848c).mbr_0x1034;
  this->mbr_0x10b0 = 0xffffffff;
  this->mbr_0x10b4 = 0xffffffff;
  this->mbr_0x109c = dVar4;
  uVar2 = (this->cls_0x6b848c).mbr_0x1038 + 3 & 0xfffffffc;
  uVar6 = uVar6 & 0xfffffffc;
  (this->cls_0x6b848c).mbr_0x1094 = uVar2;
  uVar5 = uVar5 & 0xfffffffc;
  uVar3 = dVar1 + 3 & 0xfffffffc;
  dVar4 = (this->cls_0x6b848c).mbr_0x1044;
  (this->cls_0x6b848c).mbr_0x1098 = uVar3;
  this->mbr_0x10a4 = uVar2 - uVar6 >> 2;
  this->mbr_0x10a0 = dVar4;
  dVar1 = (this->cls_0x6b848c).mbr_0x1040;
  (this->cls_0x6b848c).mbr_0x108c = uVar6;
  this->mbr_0x10b8 = 0;
  this->mbr_0x10bc = 0;
  this->mbr_0x10c0 = 0;
  (this->cls_0x6b848c).mbr_0x1090 = uVar5;
  this->mbr_0x10a8 = uVar3 - uVar5 >> 2;
  this->mbr_0x10ac = dVar4 - dVar1;
  return this;
}



void * __thiscall cls_0x6b849c::virt_meth_0x5db233(cls_0x6b849c *this,byte param_1)

{
  ~cls_0x6b849c(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



void __thiscall cls_0x6b849c::virt_meth_0x5db26b(cls_0x6b849c *this)

{
  dword dVar1;
  
  dVar1 = (this->cls_0x6b848c).mbr_0x4;
  if ((dVar1 == 0x32545844) || (dVar1 == 0x33545844)) {
    dVar1 = 0x41700000;
  }
  else {
    dVar1 = 0x437f0000;
  }
  (this->cls_0x6b848c).mbr_0x106c = dVar1;
  (this->cls_0x6b848c).mbr_0x1070 = (dword)(1.0 / (float)(this->cls_0x6b848c).mbr_0x106c);
  (this->cls_0x6b848c).mbr_0x1c =
       (dword)((float)(int)ROUND((float)(this->cls_0x6b848c).mbr_0x1c * 31.0 + 0.5) * 0.03225806);
  *(float *)&(this->cls_0x6b848c).field_0x20 =
       (float)(int)ROUND(*(float *)&(this->cls_0x6b848c).field_0x20 * 63.0 + 0.5) * 0.01587302;
  *(float *)&(this->cls_0x6b848c).field_0x24 =
       (float)(int)ROUND(*(float *)&(this->cls_0x6b848c).field_0x24 * 31.0 + 0.5) * 0.03225806;
  *(float *)&(this->cls_0x6b848c).field_0x28 =
       (float)(int)ROUND((float)(this->cls_0x6b848c).mbr_0x106c *
                         *(float *)&(this->cls_0x6b848c).field_0x28 + 0.5) *
       (float)(this->cls_0x6b848c).mbr_0x1070;
  return;
}



void __thiscall cls_0x6b849c::virt_meth_0x5db44c(cls_0x6b849c *this)

{
  undefined4 *puVar1;
  float fVar2;
  void *pvVar3;
  int extraout_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_EDX;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  undefined4 *puVar9;
  
  FUN_0061781c();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(extraout_ECX + 0x1034);
  *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + *(int *)(extraout_ECX + 0x1040);
  iVar4 = extraout_ECX;
  if (*(int *)(extraout_ECX + 0x10b8) == 0) {
    iVar4 = *(int *)(extraout_ECX + 0x10a4);
    pvVar3 = operator_new(iVar4 << 8);
    *(void **)(unaff_EBP + -0x24) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      FUN_004010a0(pvVar3,0x10,iVar4 << 4,&LAB_00474d39);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(void **)(*(int *)(unaff_EBP + -0x10) + 0x10b8) = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_005db6e5;
    iVar4 = *(int *)(unaff_EBP + -0x10);
  }
  uVar5 = *(uint *)(unaff_EBP + 8) & 0xfffffffc;
  if ((uVar5 != *(uint *)(iVar4 + 0x10b0)) ||
     (*(int *)(unaff_EBP + 0xc) != *(int *)(iVar4 + 0x10b4))) {
    *(uint *)(iVar4 + 0x10b0) = uVar5;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x10b4) = *(undefined4 *)(unaff_EBP + 0xc);
    iVar4 = *(int *)(unaff_EBP + -0x10);
    uVar5 = *(uint *)(iVar4 + 0x108c);
    iVar7 = *(int *)(iVar4 + 0x10b8);
    iVar8 = (*(uint *)(iVar4 + 0x10b0) >> 2) * *(int *)(iVar4 + 0x1050) +
            (uVar5 >> 2) * *(int *)(iVar4 + 0x1080) +
            *(int *)(iVar4 + 0x10b4) * *(int *)(iVar4 + 0x1054) + *(int *)(iVar4 + 0x18);
    for (; uVar5 < *(uint *)(iVar4 + 0x1094); uVar5 = uVar5 + 4) {
      (**(code **)(iVar4 + 0x1084))(iVar7,iVar8);
      iVar4 = *(int *)(unaff_EBP + -0x10);
      iVar8 = iVar8 + *(int *)(iVar4 + 0x1080);
      iVar7 = iVar7 + 0x100;
    }
  }
  iVar7 = *(int *)(unaff_EBP + 8);
  iVar8 = *(int *)(iVar4 + 0x1090);
  uVar5 = *(int *)(iVar4 + 0x1030) - *(int *)(iVar4 + 0x108c);
  uVar6 = *(int *)(iVar4 + 0x1058) + uVar5;
  for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
    puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
    puVar9 = (undefined4 *)
             (((uVar5 & 0xfffffffc | iVar7 - iVar8 & 3U) << 2 | uVar5 & 3) * 0x10 +
             *(int *)(iVar4 + 0x10b8));
    *puVar1 = *puVar9;
    puVar1[1] = puVar9[1];
    puVar1[2] = puVar9[2];
    puVar1[3] = puVar9[3];
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x10;
    iVar4 = *(int *)(unaff_EBP + -0x10);
  }
  if (*(int *)(iVar4 + 0x10) != 0) {
    FUN_005d7508(iVar4);
    while (*(uint *)(unaff_EBP + 0x10) < extraout_EDX) {
      *(float *)(unaff_EBP + -0x14) = **(float **)(unaff_EBP + 0x10) * 31.0 + 0.5;
      *(int *)(unaff_EBP + -0x18) = (int)ROUND(*(float *)(unaff_EBP + -0x14));
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
      *(float *)(unaff_EBP + -0x34) = (float)*(int *)(unaff_EBP + -0x14) * 0.03225806;
      *(float *)(unaff_EBP + -0x14) = *(float *)(*(int *)(unaff_EBP + 0x10) + 4) * 63.0 + 0.5;
      *(int *)(unaff_EBP + -0x1c) = (int)ROUND(*(float *)(unaff_EBP + -0x14));
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
      *(float *)(unaff_EBP + -0x30) = (float)*(int *)(unaff_EBP + -0x14) * 0.01587302;
      *(float *)(unaff_EBP + -0x14) = *(float *)(*(int *)(unaff_EBP + 0x10) + 8) * 31.0 + 0.5;
      *(int *)(unaff_EBP + -0x20) = (int)ROUND(*(float *)(unaff_EBP + -0x14));
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
      *(float *)(unaff_EBP + -0x2c) = (float)*(int *)(unaff_EBP + -0x14) * 0.03225806;
      *(float *)(unaff_EBP + -0x14) =
           *(float *)(*(int *)(unaff_EBP + -0x10) + 0x106c) *
           *(float *)(*(int *)(unaff_EBP + 0x10) + 0xc) + 0.5;
      *(int *)(unaff_EBP + -0x24) = (int)ROUND(*(float *)(unaff_EBP + -0x14));
      iVar4 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
      fVar2 = (float)*(int *)(unaff_EBP + -0x14) * *(float *)(iVar4 + 0x1070);
      if (((((NAN(*(float *)(unaff_EBP + -0x34)) || NAN(*(float *)(iVar4 + 0x1c))) !=
             (*(float *)(unaff_EBP + -0x34) == *(float *)(iVar4 + 0x1c))) &&
           ((NAN(*(float *)(unaff_EBP + -0x30)) || NAN(*(float *)(iVar4 + 0x20))) !=
            (*(float *)(unaff_EBP + -0x30) == *(float *)(iVar4 + 0x20)))) &&
          ((NAN(*(float *)(unaff_EBP + -0x2c)) || NAN(*(float *)(iVar4 + 0x24))) !=
           (*(float *)(unaff_EBP + -0x2c) == *(float *)(iVar4 + 0x24)))) &&
         ((NAN(fVar2) || NAN(*(float *)(iVar4 + 0x28))) != (fVar2 == *(float *)(iVar4 + 0x28)))) {
        puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        *puVar1 = *(undefined4 *)(unaff_EBP + -0x44);
        puVar1[1] = *(undefined4 *)(unaff_EBP + -0x40);
        puVar1[2] = *(undefined4 *)(unaff_EBP + -0x3c);
        puVar1[3] = *(undefined4 *)(unaff_EBP + -0x38);
      }
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x10;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = DAT_0070d0a4;
  }
LAB_005db6e5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



cls_0x6b849c * __thiscall cls_0x6b849c::~cls_0x6b849c(cls_0x6b849c *this)

{
  cls_0x6b849c__vftable_6b849c *pcVar1;
  cls_0x6b849c__vftable_6b849c **extraout_ECX;
  cls_0x6b849c__vftable_6b849c *pcVar2;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6b849c__vftable_6b849c ***)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = &cls_0x6b849c__vftable_6b849c_006b849c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((extraout_ECX[0x42f] != (cls_0x6b849c__vftable_6b849c *)0x0) &&
     (extraout_ECX[0x430] != (cls_0x6b849c__vftable_6b849c *)0x0)) {
    pcVar2 = extraout_ECX[0x427];
    pcVar1 = extraout_ECX[0x428];
    *(cls_0x6b849c__vftable_6b849c **)(unaff_EBP + -0x10) = extraout_ECX[0x430];
    if (pcVar2 < pcVar1) {
      do {
        if (extraout_ECX[0x424] < extraout_ECX[0x426]) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(*(int *)(unaff_EBP + -0x10) + 4));
        }
        pcVar2 = (cls_0x6b849c__vftable_6b849c *)((int)&pcVar2->virt_meth_0x5db233_0 + 1);
      } while (pcVar2 < extraout_ECX[0x428]);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(extraout_ECX[0x42e]);
}


#include "../include/cls_0x6b849c.h"
