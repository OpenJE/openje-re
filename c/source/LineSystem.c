#include "../include/LineSystem.h"

undefined4 __thiscall
GUI::LineSystem::meth_0x4adda0(LineSystem *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  piVar1 = (int *)this->mbr_0x24;
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  iVar6 = *piVar1 - this->mbr_0x1c;
  iVar5 = piVar1[2] - this->mbr_0x1c;
  piVar3 = (int *)*param_1;
  iVar4 = piVar1[3] - this->mbr_0x20;
  iVar7 = piVar1[1] - this->mbr_0x20;
  if ((int)piVar3 < iVar6) {
    if (*param_3 < iVar6) goto LAB_004ade8e;
LAB_004ade17:
    if (iVar5 <= (int)piVar3) goto LAB_004ade1b;
  }
  else {
    if ((int)piVar3 < iVar5) {
      if (((((iVar6 <= *param_3) && (*param_3 < iVar5)) && (iVar7 <= *param_2)) &&
          ((*param_2 < iVar4 && (iVar7 <= *param_4)))) && (*param_4 < iVar4)) goto LAB_004ae091;
      goto LAB_004ade17;
    }
LAB_004ade1b:
    if (iVar5 <= *param_3) goto LAB_004ade8e;
  }
  iVar2 = *param_2;
  if (((iVar2 < iVar7) && (*param_4 < iVar7)) || ((iVar4 <= iVar2 && (iVar4 <= *param_4))))
  goto LAB_004ade8e;
  if ((int)piVar3 < iVar6) {
    uVar8 = FUN_00616e24();
    *param_2 = (int)uVar8 + iVar2;
    *param_1 = iVar6;
  }
  else if (iVar5 + -1 < (int)piVar3) {
    uVar8 = FUN_00616e24();
    *param_2 = iVar2 - (int)uVar8;
    *param_1 = iVar5 + -1;
  }
  if (*param_3 < iVar6) {
    uVar8 = FUN_00616e24();
    *param_4 = *param_4 + (int)uVar8;
    *param_3 = iVar6;
  }
  else if (iVar5 + -1 < *param_3) {
    uVar8 = FUN_00616e24();
    *param_4 = *param_4 + (int)uVar8;
    *param_3 = iVar5 + -1;
  }
  if (*param_2 < iVar7) {
    uVar8 = FUN_00616e24();
    *param_1 = *param_1 + (int)uVar8;
    *param_2 = iVar7;
  }
  else if (iVar4 + -1 < *param_2) {
    uVar8 = FUN_00616e24();
    *param_1 = *param_1 - (int)uVar8;
    *param_2 = iVar4 + -1;
  }
  piVar3 = (int *)*param_4;
  if ((int)piVar3 < iVar7) {
    uVar8 = FUN_00616e24();
    *param_3 = *param_3 + (int)(int *)uVar8;
    *param_4 = iVar7;
    piVar3 = (int *)uVar8;
  }
  else if (iVar4 + -1 < (int)piVar3) {
    uVar8 = FUN_00616e24();
    *param_3 = *param_3 + (int)uVar8;
    *param_4 = iVar4 + -1;
    piVar3 = param_4;
  }
  iVar2 = *param_1;
  if (iVar2 < iVar6) {
    piVar3 = param_3;
    if (*param_3 < iVar6) goto LAB_004ade8e;
LAB_004ae05b:
    if (iVar5 <= iVar2) goto LAB_004ae05f;
  }
  else {
    if (iVar2 < iVar5) {
      piVar3 = (int *)*param_3;
      if ((((iVar6 <= (int)piVar3) && ((int)piVar3 < iVar5)) &&
          (piVar3 = (int *)*param_2, iVar7 <= (int)piVar3)) &&
         ((((int)piVar3 < iVar4 && (piVar3 = (int *)*param_4, iVar7 <= (int)piVar3)) &&
          ((int)piVar3 < iVar4)))) {
        return CONCAT31((int3)((uint)piVar3 >> 8),1);
      }
      goto LAB_004ae05b;
    }
LAB_004ae05f:
    if (iVar5 <= *param_3) goto LAB_004ade8e;
  }
  piVar3 = (int *)*param_2;
  if (((iVar7 <= (int)piVar3) || (iVar7 <= *param_4)) &&
     (((int)piVar3 < iVar4 || (piVar3 = param_4, *param_4 < iVar4)))) {
LAB_004ae091:
    return CONCAT31((int3)((uint)piVar3 >> 8),1);
  }
LAB_004ade8e:
  return (uint)piVar3 & 0xffffff00;
}



void __thiscall GUI::LineSystem::virt_meth_0x4ae120(LineSystem *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (this->mbr_0xfc != 0) {
    if (*(int *)((int)DAT_00707ef8 + 4) == 0) {
      (**(code **)(*DAT_00707ce4 + 0xe8))(this->mbr_0x98,param_1,this->mbr_0xe0);
      return;
    }
    iVar2 = 0;
    if (0 < (int)this->mbr_0xe0) {
      iVar1 = 0;
      do {
        FUN_004b6750(DAT_00707ef8,(int *)(this->mbr_0x98 + iVar1),param_1,0);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x28;
      } while (iVar2 < (int)this->mbr_0xe0);
    }
  }
  return;
}



LineSystem * __thiscall GUI::LineSystem::~LineSystem(LineSystem *this)

{
  void *pvVar1;
  LineSystem *_Memory;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632041;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &LineSystem__vftable_66dfec_0066dfec;
  local_4 = 1;
  if ((void *)this->mbr_0xe4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xe4);
  }
  if ((void *)this->mbr_0xf0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xf0);
  }
  pvVar1 = (void *)this->mbr_0x98;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x28,*(int *)((int)pvVar1 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((undefined4 *)this->mbr_0x9c != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x9c)(1);
    this->mbr_0x9c = 0;
  }
  if ((void *)this->mbr_0x24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x24);
  }
  local_4._0_1_ = 2;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)&this->mbr_0x2c);
  local_4 = (uint)local_4._1_3_ << 8;
  cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  _Memory = (LineSystem *)this->mbr_0x10;
  if (_Memory != (LineSystem *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  ExceptionList = pvStack_c;
  return _Memory;
}



void __thiscall GUI::LineSystem::meth_0x4ae730(LineSystem *this)

{
  dword *this_00;
  dword dVar1;
  dword dVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint unaff_retaddr;
  float local_290;
  float local_28c;
  int local_288;
  dword local_284;
  int local_280;
  int local_27c;
  int *local_278;
  int local_274;
  int *local_270;
  int local_26c [4];
  undefined local_25c;
  undefined local_25b;
  undefined local_25a;
  undefined local_259;
  undefined local_258;
  undefined local_257;
  ushort local_256;
  undefined local_254 [580];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063205b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  this->mbr_0xfc = 0;
  iVar7 = 0;
  if ((this->mbr_0x10 != 0) &&
     (local_278 = (int *)((int)(this->mbr_0x14 - this->mbr_0x10) / 0x18), local_278 != (int *)0x0))
  {
    if (this->mbr_0x10 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(this->mbr_0x14 - this->mbr_0x10) / 0x18;
    }
    dVar1 = iVar6 * 2;
    if ((int)dVar1 < 1) {
      this->mbr_0xe8 = 0;
    }
    else {
      if ((int)this->mbr_0xec < (int)dVar1) {
        if ((void *)this->mbr_0xe4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0xe4);
        }
        dVar2 = this->mbr_0xec + 0x14;
        if ((int)dVar2 < (int)dVar1) {
          dVar2 = dVar1;
        }
        this->mbr_0xec = dVar2;
        if (0 < (int)dVar2) {
          pvVar3 = operator_new(dVar2 * 0x14);
          this->mbr_0xe4 = (dword)pvVar3;
        }
      }
      this->mbr_0xe8 = dVar1;
      if ((int)this->mbr_0xf8 < (int)dVar1) {
        if ((void *)this->mbr_0xf0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0xf0);
        }
        dVar2 = this->mbr_0xf8 + 0x1e;
        if ((int)dVar2 < (int)dVar1) {
          dVar2 = dVar1;
        }
        this->mbr_0xf8 = dVar2;
        if (0 < (int)dVar2) {
          pvVar3 = operator_new(dVar2 * 2);
          this->mbr_0xf0 = (dword)pvVar3;
        }
      }
      this->mbr_0xf4 = dVar1;
    }
    if (0 < (int)this->mbr_0xe8) {
      local_290 = 1.0;
      local_28c = 1.0;
      if (this->mbr_0x29 != 0) {
        cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_290,&local_28c);
      }
      local_270 = (int *)this->mbr_0x10;
      local_284 = 0;
      local_278 = (int *)0x0;
      if (local_270 != (int *)this->mbr_0x14) {
        do {
          piVar8 = local_270;
          piVar9 = local_26c;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar9 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar9 = piVar9 + 1;
          }
          local_27c = local_26c[1];
          local_280 = local_26c[0];
          local_274 = local_26c[2];
          local_288 = local_26c[3];
          uVar4 = meth_0x4adda0(this,&local_280,&local_27c,&local_274,&local_288);
          if ((char)uVar4 != '\0') {
            local_280 = local_280 + this->mbr_0x1c;
            local_274 = local_274 + this->mbr_0x1c;
            local_27c = local_27c + this->mbr_0x20;
            local_288 = local_288 + this->mbr_0x20;
            *(float *)(iVar7 + this->mbr_0xe4) = (float)local_280 * local_290 - local_290 * 0.5;
            *(float *)(iVar7 + 4 + this->mbr_0xe4) = (float)local_27c * local_28c - local_28c * 0.5;
            *(undefined4 *)(iVar7 + 8 + this->mbr_0xe4) = 0;
            *(uint *)(iVar7 + 0x10 + this->mbr_0xe4) =
                 CONCAT31(CONCAT21(CONCAT11(local_259,local_25c),local_25b),local_25a);
            *(undefined4 *)(iVar7 + 0xc + this->mbr_0xe4) = 0x3f800000;
            *(short *)(this->mbr_0xf0 + local_284 * 2) = (short)local_278;
            *(float *)(iVar7 + 0x14 + this->mbr_0xe4) =
                 (float)local_274 * local_290 - local_290 * 0.5;
            *(float *)(iVar7 + 0x18 + this->mbr_0xe4) =
                 (float)local_288 * local_28c - local_28c * 0.5;
            *(undefined4 *)(iVar7 + 0x1c + this->mbr_0xe4) = 0;
            *(uint *)(iVar7 + 0x24 + this->mbr_0xe4) =
                 CONCAT31(CONCAT21(local_256 >> 8,local_258),local_257) << 8 | local_256 & 0xff;
            *(undefined4 *)(iVar7 + 0x20 + this->mbr_0xe4) = 0x3f800000;
            *(short *)(this->mbr_0xf0 + (local_284 + 1) * 2) = (short)local_278 + 1;
            local_284 = local_284 + 2;
            local_278 = (int *)((int)local_278 + 2);
            iVar7 = iVar7 + 0x28;
          }
          local_270 = local_270 + 6;
        } while (local_270 != (int *)this->mbr_0x14);
        if ((0 < (int)local_278) && (0 < (int)local_284)) {
          this->mbr_0xf4 = local_284;
          this->mbr_0x38 = this->mbr_0xe4;
          this_00 = &this->mbr_0x2c;
          this->mbr_0xe8 = (dword)local_278;
          *this_00 = 0;
          this->mbr_0x30 = 0xffffffff;
          this->mbr_0x3c = this->mbr_0xf0;
          piVar8 = local_278;
          iVar7 = FUN_0047460d(0x44);
          Gregorian::meth_0x4ab680((Gregorian *)this_00,0x44,iVar7,piVar8);
          Gregorian::meth_0x4ab6c0((Gregorian *)this_00,2,this->mbr_0xf4);
          cls_0x4abc60::meth_0x41f1c0(&this->cls_0x4abc60);
          puVar5 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)this_00,1);
          *puVar5 = 0;
          puVar5[8] = 2;
          puVar5[9] = 1;
          cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)local_254);
          local_254._28_4_ = 0xf;
          local_254._32_4_ = 0xf;
          local_4 = 0;
          local_254._304_4_ = 0;
          local_254._308_4_ = 0;
          local_254._40_4_ = this->mbr_0x8;
          local_254[188] = 0;
          ::cls_0x50db20::cls_0x50db20
                    ((cls_0x50db20 *)(this->cls_0x4abc60).mbr_0xc,(_String_base *)local_254);
          puVar5[10] = 0;
          puVar5[0xb] = 0;
          puVar5[0xc] = (int)local_284 / 2;
          dVar1 = this->mbr_0x9c;
          *(undefined4 *)(dVar1 + 0x10) = 1;
          *(dword **)(dVar1 + 0x14) = &this->mbr_0xa0;
          cls_0x4abc60::meth_0x4abdd0(&this->cls_0x4abc60);
          this->mbr_0x30 = 0xffffffff;
          cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this->mbr_0x98,(int)this_00);
          *(dword *)(this->mbr_0x98 + 0xc) = this->mbr_0x9c;
          this->mbr_0xfc = 1;
          local_4 = 0xffffffff;
          cls_0x4b60b0::meth_0x401720((cls_0x4b60b0 *)local_254);
        }
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



undefined4 * __thiscall GUI::LineSystem::virt_meth_0x4aec80(LineSystem *this,byte param_1)

{
  ~LineSystem(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall GUI::LineSystem::virt_meth_0x4aeca0(LineSystem *this)

{
  if (this->mbr_0x28 != 0) {
    meth_0x4ae730(this);
    this->mbr_0x28 = 0;
  }
  return;
}



LineSystem * __thiscall GUI::LineSystem::LineSystem(LineSystem *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  Gfx_BasePacketData *this_00;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063209c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &LineSystem__vftable_66dfec_0066dfec;
  this->mbr_0x4 = 0;
  this->mbr_0x5 = 0;
  this->mbr_0x6 = 0;
  this->mbr_0x7 = 0xff;
  this->mbr_0x8 = 1;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  local_4 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 1;
  this->mbr_0x29 = 1;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x7c = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xd4 = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0xac = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xdc = 0x3f800000;
  this->mbr_0xc8 = 0x3f800000;
  this->mbr_0xb4 = 0x3f800000;
  this->mbr_0xa0 = 0x3f800000;
  local_4._0_1_ = 1;
  this->mbr_0xe0 = 1;
  puVar1 = (undefined4 *)operator_new(0x2c);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 1;
    _eh_vector_constructor_iterator_
              (puVar2,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
  }
  local_4._0_1_ = 1;
  this->mbr_0x98 = (dword)puVar2;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 8;
  pvVar3 = operator_new(0xa0);
  this->mbr_0xe4 = (dword)pvVar3;
  this->mbr_0xf4 = 0;
  this->mbr_0xf8 = 8;
  pvVar3 = operator_new(0x10);
  this->mbr_0xf0 = (dword)pvVar3;
  this_00 = (Gfx_BasePacketData *)operator_new(0x50);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (this_00 == (Gfx_BasePacketData *)0x0) {
    this_00 = (Gfx_BasePacketData *)0x0;
  }
  else {
    Gfx_BasePacketData::Gfx_BasePacketData(this_00,0);
    this_00->vftptr_0x0 =
         (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
  }
  iVar5 = 0;
  this->mbr_0x9c = (dword)this_00;
  if (0 < (int)this->mbr_0xec) {
    iVar4 = 0;
    do {
      *(undefined4 *)(this->mbr_0xe4 + 0x10 + iVar4) = 0xffffffff;
      *(undefined4 *)(this->mbr_0xe4 + 0xc + iVar4) = 0x3f800000;
      *(undefined4 *)(this->mbr_0xe4 + 8 + iVar4) = 0;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar5 < (int)this->mbr_0xec);
  }
  ExceptionList = local_c;
  return this;
}


#include "../include/LineSystem.h"
