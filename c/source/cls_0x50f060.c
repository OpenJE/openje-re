#include "../include/cls_0x50f060.h"

void __thiscall cls_0x50f060::meth_0x50f060(cls_0x50f060 *this)

{
  dword *this_00;
  dword *this_01;
  dword dVar1;
  void *pvVar2;
  dword dVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  dword dVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint unaff_retaddr;
  int *piVar11;
  undefined4 local_290 [4];
  undefined4 local_280;
  undefined4 local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  int local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  int local_25c;
  int local_258;
  cls_0x4b60b0 local_254;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635b8b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  dVar8 = 0;
  if ((this->mbr_0x10c != 0) &&
     (local_258 = (int)(this->mbr_0x110 - this->mbr_0x10c) / 0x38, local_258 != 0)) {
    if (this->mbr_0x10c == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(this->mbr_0x110 - this->mbr_0x10c) / 0x38;
    }
    dVar3 = iVar7 * 2;
    if ((int)dVar3 < 1) {
      ExceptionList = &local_c;
      this->mbr_0xe0 = 0;
    }
    else {
      ExceptionList = &local_c;
      if ((int)this->mbr_0xe4 < (int)dVar3) {
        if ((void *)this->mbr_0xdc != (void *)0x0) {
          ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0xdc);
        }
        dVar1 = this->mbr_0xe4 + 0x14;
        if ((int)dVar1 < (int)dVar3) {
          dVar1 = dVar3;
        }
        ExceptionList = &local_c;
        this->mbr_0xe4 = dVar1;
        if (0 < (int)dVar1) {
          pvVar2 = operator_new(dVar1 << 4);
          this->mbr_0xdc = (dword)pvVar2;
        }
      }
      this->mbr_0xe0 = dVar3;
    }
    if (0 < (int)this->mbr_0xe0) {
      puVar4 = (undefined4 *)this->mbr_0x10c;
      if (puVar4 != (undefined4 *)this->mbr_0x110) {
        iVar7 = 0;
        do {
          puVar9 = puVar4;
          puVar10 = local_290;
          for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined4 *)(iVar7 + this->mbr_0xdc) = local_290[0];
          puVar4 = puVar4 + 0xe;
          *(undefined4 *)(iVar7 + 4 + this->mbr_0xdc) = local_290[1];
          *(undefined4 *)(iVar7 + 8 + this->mbr_0xdc) = local_290[2];
          *(uint *)(iVar7 + 0xc + this->mbr_0xdc) =
               ((local_278 & 0xff | local_26c << 8) << 8 | local_274 & 0xff) << 8 | local_270 & 0xff
          ;
          *(undefined4 *)(iVar7 + 0x10 + this->mbr_0xdc) = local_290[3];
          *(undefined4 *)(iVar7 + 0x14 + this->mbr_0xdc) = local_280;
          *(undefined4 *)(iVar7 + 0x18 + this->mbr_0xdc) = local_27c;
          *(uint *)(iVar7 + 0x1c + this->mbr_0xdc) =
               ((local_268 & 0xff | local_25c << 8) << 8 | local_264 & 0xff) << 8 | local_260 & 0xff
          ;
          dVar8 = dVar8 + 2;
          iVar7 = iVar7 + 0x20;
        } while (puVar4 != (undefined4 *)this->mbr_0x110);
        if (0 < (int)dVar8) {
          if ((int)this->mbr_0xf0 < (int)dVar8) {
            if ((void *)this->mbr_0xe8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free((void *)this->mbr_0xe8);
            }
            dVar3 = this->mbr_0xf0 + 0x1e;
            if ((int)dVar3 < (int)dVar8) {
              dVar3 = dVar8;
            }
            this->mbr_0xf0 = dVar3;
            if (0 < (int)dVar3) {
              pvVar2 = operator_new(dVar3 * 2);
              this->mbr_0xe8 = (dword)pvVar2;
            }
          }
          dVar3 = this->mbr_0x10c;
          sVar5 = 0;
          this->mbr_0xec = dVar8;
          if (dVar3 != this->mbr_0x110) {
            iVar7 = 0;
            do {
              *(short *)(iVar7 + this->mbr_0xe8) = sVar5;
              *(short *)(iVar7 + 2 + this->mbr_0xe8) = sVar5 + 1;
              dVar3 = dVar3 + 0x38;
              iVar7 = iVar7 + 4;
              sVar5 = sVar5 + 2;
            } while (dVar3 != this->mbr_0x110);
          }
          this->mbr_0x30 = this->mbr_0xdc;
          this->mbr_0x34 = this->mbr_0xe8;
          piVar11 = (int *)this->mbr_0xe0;
          this_00 = &this->mbr_0x24;
          *this_00 = 0;
          this->mbr_0x28 = 0xffffffff;
          iVar7 = FUN_0047460d(0x42);
          Gregorian::meth_0x4ab680((Gregorian *)this_00,0x42,iVar7,piVar11);
          Gregorian::meth_0x4ab6c0((Gregorian *)this_00,2,this->mbr_0xec);
          this_01 = &this->mbr_0x4c;
          *this_01 = 0;
          cls_0x4abc60::meth_0x4abc10((cls_0x4abc60 *)this_01);
          pvVar2 = (void *)this->mbr_0x58;
          if (pvVar2 != (void *)0x0) {
            _eh_vector_destructor_iterator_
                      (pvVar2,0x244,*(int *)((int)pvVar2 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
            _free((void *)((int)pvVar2 + -4));
          }
          puVar4 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)this_00,1);
          *puVar4 = 0;
          puVar4[8] = 2;
          puVar4[9] = 1;
          cls_0x4b60b0::cls_0x4b60b0(&local_254);
          local_254.mbr_0x1c = 0x13;
          local_254.mbr_0x20 = 0x13;
          local_254.mbr_0x24 = this->mbr_0x104;
          local_4 = 0;
          local_254.mbr_0xbc = 0;
          local_254.mbr_0x28 = local_254.mbr_0x24;
          ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)this->mbr_0x58,(_String_base *)&local_254);
          iVar7 = 0;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          if (this->mbr_0x10c != 0) {
            iVar7 = (int)(this->mbr_0x110 - this->mbr_0x10c) / 0x38;
          }
          puVar4[0xc] = iVar7;
          dVar8 = this->mbr_0x94;
          *(undefined4 *)(dVar8 + 0x10) = 1;
          *(dword **)(dVar8 + 0x14) = &this->mbr_0x98;
          cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)this_01);
          this->mbr_0x28 = 0xffffffff;
          cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this->mbr_0x90,(int)this_00);
          *(dword *)(this->mbr_0x90 + 0xc) = this->mbr_0x94;
          local_4 = 0xffffffff;
          cls_0x4b60b0::meth_0x401720(&local_254);
          goto LAB_0050f488;
        }
      }
      this->mbr_0xe0 = 0;
      this->mbr_0xec = 0;
    }
  }
LAB_0050f488:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x50f060::meth_0x50f4c0(cls_0x50f060 *this,undefined4 param_1)

{
  dword dVar1;
  int iVar2;
  dword *pdVar3;
  dword *pdVar4;
  dword local_40 [16];
  
  if (this->mbr_0x4 != 0) {
    pdVar3 = (dword *)(this->mbr_0x4 + 0x6c);
    pdVar4 = local_40;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pdVar4 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      pdVar4 = pdVar4 + 1;
    }
    pdVar3 = local_40;
    pdVar4 = &this->mbr_0x98;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pdVar4 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      pdVar4 = pdVar4 + 1;
    }
  }
  dVar1 = this->mbr_0x94;
  if (dVar1 != 0) {
    *(undefined4 *)(dVar1 + 0x10) = 1;
    *(dword **)(dVar1 + 0x14) = &this->mbr_0x98;
  }
  if (this->mbr_0x118 != 0) {
    meth_0x50f060(this);
    this->mbr_0x118 = 0;
  }
  if (0 < (int)this->mbr_0xe0) {
    (**(code **)(*DAT_00707ce4 + 0xe8))(this->mbr_0x90,param_1,this->mbr_0xd8);
  }
  return;
}


