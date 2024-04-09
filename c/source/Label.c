#include "../include/Label.h"

void __thiscall GUI::Label::virt_meth_0x4a77a0(Label *this,uint param_1)

{
  cls_0x4abc60 *this_00;
  
  this_00 = &this->cls_0x4abc60;
  cls_0x4abc60::meth_0x4ab600(this_00,'\x01','\x01',param_1,(uint *)0x0);
  if ((this->mbr_0xd64 & 0xff000000) == 0xff000000) {
    if ((param_1 & 0xff000000) != 0xff000000) {
      cls_0x4abc60::meth_0x4abdd0(this_00);
      this->mbr_0xd64 = param_1;
      return;
    }
  }
  else if ((param_1 & 0xff000000) == 0xff000000) {
    cls_0x4abc60::meth_0x4abdd0(this_00);
  }
  this->mbr_0xd64 = param_1;
  return;
}



void __thiscall GUI::Label::virt_meth_0x4a7860(Label *this,undefined4 param_1)

{
  LONG unaff_ESI;
  
  *(undefined *)&this->mbr_0xd68 = (undefined)param_1;
  Window::virt_meth_0x4af2e0(&this->Window,(undefined)param_1);
  (*(this->Window).Base.vftptr_0x0[6].virt_meth_0x4b27e0_24)
            ((Base *)this,(uint)*(byte *)&this->mbr_0xd68,unaff_ESI);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4a7900(Label *this,byte param_1)

{
  byte bVar1;
  undefined4 *unaff_ESI;
  
  bVar1 = param_1;
  _param_1 = (uint)param_1;
  Window::virt_meth_0x4af1f0(&this->Window,bVar1);
  (*(this->Window).Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
            ((Base *)this,(undefined4 *)(this->mbr_0xd64 & 0xffffff | _param_1 << 0x18),unaff_ESI);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4a7940(Label *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  Window::virt_meth_0x4af830(&this->Window,param_1,param_2);
  iVar2 = 0;
  if (0 < (int)this->mbr_0xd70) {
    iVar1 = 0;
    do {
      OffsetRect((LPRECT)(this->mbr_0xd74 + iVar1),param_1,param_2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < (int)this->mbr_0xd70);
  }
  return;
}



void __thiscall GUI::Label::virt_meth_0x4a7b20(Label *this)

{
  LONG in_stack_00000004;
  LONG in_stack_00000008;
  
                    /* WARNING: Could not recover jumptable at 0x004a7b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->Window).Base.vftptr_0x0[8].virt_meth_0x4b27e0_24)
            ((Base *)this,in_stack_00000004,in_stack_00000008);
  return;
}



float10 * __thiscall
GUI::Label::virt_meth_0x4a7b30
          (Label *this,float10 *__return_storage_ptr__,float10 *param_1,float param_2)

{
  uint uVar1;
  float10 *pfVar2;
  int iVar3;
  int *piVar4;
  float unaff_EDI;
  float10 extraout_ST0;
  
  Window::virt_meth_0x4afc00(&this->Window,__return_storage_ptr__,(float)param_1,unaff_EDI);
  uVar1 = 0;
  if (this->mbr_0xde8 != 0) {
    iVar3 = 0;
    do {
      *(float *)(iVar3 + 8 + this->mbr_0xdec) = (float)extraout_ST0;
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (uVar1 < this->mbr_0xde8);
  }
  piVar4 = (int *)&(this->Window).Base.field_0x90;
  iVar3 = 9;
  do {
    pfVar2 = (float10 *)
             (**(code **)(*piVar4 + 0x30))
                       ((float)((float10)(float)param_1 * (float10)0.25 + extraout_ST0),param_1);
    piVar4 = piVar4 + 0x56;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return pfVar2;
}



void __thiscall GUI::Label::virt_meth_0x4a7bc0(Label *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_c;
  float local_8 [2];
  
  Window::virt_meth_0x4af5b0(&this->Window);
  this->mbr_0xe18 = 1;
  cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_c,local_8);
  iVar3 = 0;
  if (0 < (int)this->mbr_0xd70) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      *(float *)(iVar1 + this->mbr_0xdec) =
           (float)*(int *)(this->mbr_0xd74 + iVar2) * local_c - local_c * 0.5;
      *(float *)(iVar1 + 4 + this->mbr_0xdec) =
           (float)*(int *)(this->mbr_0xd74 + 4 + iVar2) * local_8[0] - local_8[0] * 0.5;
      *(float *)(iVar1 + 0x1c + this->mbr_0xdec) =
           local_c * 0.5 + (float)(*(int *)(this->mbr_0xd74 + 8 + iVar2) + -1) * local_c;
      *(undefined4 *)(this->mbr_0xdec + 0x20 + iVar1) = *(undefined4 *)(this->mbr_0xdec + 4 + iVar1)
      ;
      *(undefined4 *)(this->mbr_0xdec + 0x38 + iVar1) = *(undefined4 *)(this->mbr_0xdec + iVar1);
      *(float *)(iVar1 + 0x3c + this->mbr_0xdec) =
           local_8[0] * 0.5 + (float)(*(int *)(this->mbr_0xd74 + 0xc + iVar2) + -1) * local_8[0];
      *(undefined4 *)(this->mbr_0xdec + 0x54 + iVar1) =
           *(undefined4 *)(this->mbr_0xdec + 0x38 + iVar1);
      *(undefined4 *)(this->mbr_0xdec + 0x58 + iVar1) =
           *(undefined4 *)(this->mbr_0xdec + 0x3c + iVar1);
      *(undefined4 *)(this->mbr_0xdec + iVar1 + 0x70) =
           *(undefined4 *)(this->mbr_0xdec + 0x1c + iVar1);
      *(undefined4 *)(this->mbr_0xdec + iVar1 + 0x74) =
           *(undefined4 *)(this->mbr_0xdec + 0x20 + iVar1);
      *(undefined4 *)(this->mbr_0xdec + iVar1 + 0x8c) =
           *(undefined4 *)(this->mbr_0xdec + 0x1c + iVar1);
      *(undefined4 *)(this->mbr_0xdec + iVar1 + 0x90) =
           *(undefined4 *)(this->mbr_0xdec + 0x3c + iVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
      iVar1 = iVar1 + 0xa8;
    } while (iVar3 < (int)this->mbr_0xd70);
  }
  return;
}



int __thiscall
GUI::Label::meth_0x4a7d60(Label *this,void *param_1,byte param_2,int *param_3,int param_4)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  
  FUN_0051ecd0(param_1,param_2,param_3);
  iVar2 = (int)(char)param_2;
  if (iVar2 == 9) {
    dVar1 = this->mbr_0xe48;
    iVar3 = param_4 / (int)dVar1;
    if (param_4 % (int)dVar1 != 0) {
      *param_3 = dVar1 - param_4 % (int)dVar1;
      return iVar3;
    }
  }
  else {
    iVar3 = iVar2 + -10;
    if ((iVar3 != 0) && (iVar3 = iVar2 + -0xd, iVar3 != 0)) {
      return iVar3;
    }
  }
  *param_3 = 0;
  return iVar3;
}



void __thiscall
GUI::Label::meth_0x4a7ec0
          (Label *this,int *param_1,undefined4 param_2,int param_3,uint param_4,int param_5,
          int *param_6,int *param_7,int *param_8,uint *param_9,float *param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = this->mbr_0xe1c + (this->Window).Base.mbr_0x8;
  iVar1 = this->mbr_0xe24 + (this->Window).Base.mbr_0xc;
  iVar2 = (this->Window).Base.mbr_0x14 - this->mbr_0xe28;
  iVar4 = (this->Window).Base.mbr_0x10 - this->mbr_0xe20;
  iVar5 = *param_1 - (((int)param_4 < 1) - 1 & param_4);
  *param_8 = iVar5;
  if (iVar5 < 0) {
    *param_8 = 0;
  }
  *param_9 = param_1[1];
  *param_7 = param_3;
  if (param_10 != (float *)0x0) {
    *param_10 = (float)param_1[3];
    param_10[1] = (float)param_1[4];
    param_10[2] = (float)param_1[5];
    param_10[3] = (float)param_1[6];
  }
  if ((int)param_4 < 1) {
    if (*param_6 < iVar3) {
      if (param_10 != (float *)0x0) {
        *param_10 = (param_10[2] - *param_10) * ((float)(iVar3 - *param_6) / (float)*param_1) +
                    *param_10;
      }
      *param_8 = (*param_6 - iVar3) + *param_1;
      *param_6 = iVar3;
      if (*param_8 < 0) {
        *param_8 = 0;
      }
    }
  }
  else if (param_10 != (float *)0x0) {
    *param_10 = (param_10[2] - *param_10) * ((float)param_4 / (float)*param_1) + *param_10;
  }
  if (iVar4 <= *param_8 + *param_6) {
    if (param_10 != (float *)0x0) {
      param_10[2] = param_10[2] -
                    (param_10[2] - *param_10) *
                    ((float)((*param_6 - iVar4) + *param_8) / (float)*param_1);
    }
    *param_8 = iVar4 - *param_6;
  }
  if ((int)this->mbr_0xd5c < param_5) {
    if (param_10 != (float *)0x0) {
      param_10[1] = param_10[3];
    }
    *param_9 = 0;
  }
  else if (0 < param_5) {
    if (param_10 != (float *)0x0) {
      param_10[1] = (param_10[3] - param_10[1]) * ((float)param_5 / (float)param_1[1]) + param_10[1]
      ;
    }
    *param_9 = *param_9 - param_5 & ((int)(*param_9 - param_5) < 0) - 1;
  }
  if (*param_7 < iVar1) {
    if (param_10 != (float *)0x0) {
      param_10[1] = (param_10[3] - param_10[1]) * ((float)(iVar1 - *param_7) / (float)param_1[1]) +
                    param_10[1];
    }
    *param_9 = *param_9 + (*param_7 - iVar1);
    *param_7 = iVar1;
  }
  if (iVar2 <= (int)(*param_7 + *param_9)) {
    if (param_10 != (float *)0x0) {
      param_10[3] = param_10[3] -
                    ((float)((*param_7 - iVar2) + *param_9) / (float)param_1[1]) *
                    (param_10[3] - param_10[1]);
    }
    *param_9 = iVar2 - *param_7;
  }
  return;
}



void __thiscall GUI::Label::virt_meth_0x4a80d0(Label *this)

{
  Window::virt_meth_0x4afb30(&this->Window);
  if ((((this->Window).Base.field_0x38 == '\0') && ((this->Window).Base.mbr_0xd34 != 0)) &&
     (0 < (int)this->mbr_0xd70)) {
    if (*(int *)((int)DAT_00707ef8 + 4) == 0) {
      (**(code **)(*DAT_00707ce4 + 0xe8))
                (&this->mbr_0xdf0,*(undefined4 *)&(this->Window).Base.field_0xd14,1);
      return;
    }
    FUN_004b6750(DAT_00707ef8,(int *)&this->mbr_0xdf0,*(int *)&(this->Window).Base.field_0xd14,3);
  }
  return;
}



int __thiscall
GUI::Label::meth_0x4a8340(Label *this,void *param_1,void *param_2,int param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_24;
  int local_1c [7];
  
  iVar5 = 0;
  iVar7 = *(int *)((int)param_1 + 0x14);
  local_24 = 0;
  bVar2 = false;
  bVar3 = false;
  iVar9 = param_3;
  if (param_3 < iVar7) {
    do {
      if (bVar2) {
        if (bVar3) {
          uVar1 = *(uint *)((int)param_1 + 0x18);
          puVar6 = (undefined4 *)((int)param_1 + 4);
          puVar8 = puVar6;
          if (0xf < uVar1) {
            puVar8 = (undefined4 *)*puVar6;
          }
          if (*(char *)((int)puVar8 + iVar9) == ' ') {
LAB_004a83e9:
            if (*(uint *)((int)param_1 + 0x18) < 0x10) {
              iVar7 = (int)param_1 + 4;
            }
            else {
              iVar7 = *(int *)((int)param_1 + 4);
            }
            meth_0x4a7d60(this,param_2,*(byte *)(iVar7 + iVar9),local_1c,
                          param_4 - (this->Window).Base.mbr_0x8);
            return local_24 + local_1c[0];
          }
          puVar8 = puVar6;
          if (0xf < uVar1) {
            puVar8 = (undefined4 *)*puVar6;
          }
          if (*(char *)((int)puVar8 + iVar9) == '\n') goto LAB_004a83e9;
          puVar8 = puVar6;
          if (0xf < uVar1) {
            puVar8 = (undefined4 *)*puVar6;
          }
          if (*(char *)((int)puVar8 + iVar9) == '\r') goto LAB_004a83e9;
          if (0xf < uVar1) {
            puVar6 = (undefined4 *)*puVar6;
          }
          if (*(char *)((int)puVar6 + iVar9) == '\t') goto LAB_004a83e9;
        }
        else {
          bVar4 = FUN_004a8280((cls_0x4d8d70 *)param_1,iVar9);
          if (bVar4) goto LAB_004a83e9;
        }
      }
      else {
        bVar4 = FUN_004a8280((cls_0x4d8d70 *)param_1,iVar9);
        if (bVar4) {
          if (iVar9 == param_3) {
            bVar3 = true;
          }
        }
        else {
          bVar2 = true;
        }
      }
      if (*(uint *)((int)param_1 + 0x18) < 0x10) {
        iVar5 = (int)param_1 + 4;
      }
      else {
        iVar5 = *(int *)((int)param_1 + 4);
      }
      meth_0x4a7d60(this,param_2,*(byte *)(iVar5 + iVar9),local_1c,
                    param_4 - (this->Window).Base.mbr_0x8);
      iVar5 = local_24 + local_1c[0];
      param_4 = param_4 + local_1c[0];
      iVar9 = iVar9 + 1;
      local_24 = iVar5;
    } while (iVar9 < iVar7);
  }
  return iVar5;
}



uint __thiscall
GUI::Label::meth_0x4a8490
          (Label *this,uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,uint param_8,int param_9,char param_10)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_3c;
  int local_38;
  void *local_34;
  int local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c [7];
  
  local_38 = param_6;
  iVar1 = (((this->Window).Base.mbr_0x10 - this->mbr_0xe20) - this->mbr_0xe1c) -
          (this->Window).Base.mbr_0x8;
  if (this->mbr_0xd6c == 1) {
    iVar4 = (iVar1 - param_7) + param_5;
  }
  else {
    iVar4 = param_5;
    if (this->mbr_0xd6c == 2) {
      iVar4 = (iVar1 - param_7) / 2 + param_5;
    }
  }
  param_7 = iVar4;
  local_34 = (void *)cls_0x4b28a0::meth_0x4b58d0
                               ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&this->mbr_0xd3c,
                                this->mbr_0xd58,this->mbr_0xd5c,this->mbr_0xd60);
  param_3 = param_3 - param_2;
  local_30 = param_4 - param_2;
  local_3c = 0;
  uVar3 = 0;
  if (param_3 < local_30) {
    iVar5 = param_1 * 0xa8;
    iVar1 = param_1 << 4;
    do {
      if (this->mbr_0xd38 < 0x10) {
        puVar2 = &(this->Window).Base.field_0xd24;
      }
      else {
        puVar2 = *(undefined **)&(this->Window).Base.field_0xd24;
      }
      meth_0x4a7d60(this,local_34,puVar2[param_2 + param_3],local_1c,
                    iVar4 - (this->Window).Base.mbr_0x8);
      meth_0x4a7ec0(this,local_1c,param_5,param_6,param_8,param_9,&param_7,&local_38,&param_4,
                    &param_1,&local_2c);
      if (param_10 == '\0') {
        *(int *)(iVar1 + this->mbr_0xd74) = param_7;
        *(int *)(iVar1 + 4 + this->mbr_0xd74) = local_38;
        *(int *)(iVar1 + 8 + this->mbr_0xd74) = param_4 + param_7;
        *(uint *)(iVar1 + 0xc + this->mbr_0xd74) = param_1 + local_38;
        *(undefined4 *)(this->mbr_0xdec + 0x10 + iVar5) = 0xff808080;
        *(undefined4 *)(this->mbr_0xdec + 0xc + iVar5) = 0x3f800000;
        *(float *)(this->mbr_0xdec + 0x14 + iVar5) = local_2c;
        *(undefined4 *)(this->mbr_0xdec + 0x18 + iVar5) = local_28;
        *(undefined4 *)(this->mbr_0xdec + 0x2c + iVar5) = 0xff808080;
        *(undefined4 *)(this->mbr_0xdec + 0x28 + iVar5) = 0x3f800000;
        *(undefined4 *)(this->mbr_0xdec + 0x30 + iVar5) = local_24;
        *(undefined4 *)(this->mbr_0xdec + 0x34 + iVar5) = local_28;
        *(undefined4 *)(this->mbr_0xdec + 0x48 + iVar5) = 0xff808080;
        *(undefined4 *)(this->mbr_0xdec + 0x44 + iVar5) = 0x3f800000;
        *(float *)(this->mbr_0xdec + 0x4c + iVar5) = local_2c;
        *(undefined4 *)(this->mbr_0xdec + 0x50 + iVar5) = local_20;
        *(undefined4 *)(this->mbr_0xdec + 100 + iVar5) = 0xff808080;
        *(undefined4 *)(this->mbr_0xdec + 0x60 + iVar5) = 0x3f800000;
        *(float *)(this->mbr_0xdec + 0x68 + iVar5) = local_2c;
        *(undefined4 *)(this->mbr_0xdec + 0x6c + iVar5) = local_20;
        *(undefined4 *)(this->mbr_0xdec + 0x80 + iVar5) = 0xff808080;
        *(undefined4 *)(this->mbr_0xdec + 0x7c + iVar5) = 0x3f800000;
        *(undefined4 *)(this->mbr_0xdec + 0x84 + iVar5) = local_24;
        *(undefined4 *)(this->mbr_0xdec + 0x88 + iVar5) = local_28;
        *(undefined4 *)(this->mbr_0xdec + 0x9c + iVar5) = 0xff808080;
        *(undefined4 *)(this->mbr_0xdec + 0x98 + iVar5) = 0x3f800000;
        *(undefined4 *)(this->mbr_0xdec + 0xa0 + iVar5) = local_24;
        *(undefined4 *)(this->mbr_0xdec + 0xa4 + iVar5) = local_20;
      }
      iVar4 = param_7 + param_4;
      param_8 = param_8 - local_1c[0];
      if ((int)local_3c < (int)param_1) {
        local_3c = param_1;
      }
      param_3 = param_3 + 1;
      iVar1 = iVar1 + 0x10;
      iVar5 = iVar5 + 0xa8;
      uVar3 = local_3c;
      param_7 = iVar4;
    } while (param_3 < local_30);
  }
  return uVar3;
}



void __thiscall GUI::Label::meth_0x4a8940(Label *this)

{
  cls_0x515040::meth_0x41f200((cls_0x515040 *)&this->mbr_0xd78);
  this->mbr_0xd70 = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xd74);
}



void __thiscall
GUI::Label::virt_meth_0x4a8ab0
          (Label *this,void *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)param_1,(_String_base *)&this->mbr_0xd3c,0,0xffffffff);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = this->mbr_0xd58;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = this->mbr_0xd5c;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = this->mbr_0xd60;
  }
  return;
}



void __thiscall GUI::Label::virt_meth_0x4a8b00(Label *this,undefined **param_1)

{
  char *pcVar1;
  char *pcVar2;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631df8;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "label";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"label",(uint)(pcVar2 + -0x66d428));
  local_4 = 0;
  Window::virt_meth_0x4b06c0(&this->Window,param_1,local_28);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}



Label * __thiscall GUI::Label::~Label(Label *this)

{
  Label *pLVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631e79;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Window).Base.vftptr_0x0 = (Base__vftable_66e41c *)&Label__vftable_66d43c_0066d43c;
  *(undefined ***)&(this->Window).Base.field_0x18 = &PTR_virt_meth_0x4a9060_0066d434;
  local_4 = 5;
  meth_0x4a8940(this);
  if ((void *)this->mbr_0xe50 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xe50);
  }
  this->mbr_0xe50 = 0;
  this->mbr_0xe54 = 0;
  this->mbr_0xe58 = 0;
  local_4._0_1_ = 3;
  cls_0x420270::meth_0x420270((cls_0x420270 *)&this->mbr_0xdf0);
  local_4._0_1_ = 6;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)&this->mbr_0xd78);
  local_4 = CONCAT31(local_4._1_3_,2);
  cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  if (0xf < this->mbr_0xd54) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xd40);
  }
  this->mbr_0xd54 = 0xf;
  this->mbr_0xd50 = 0;
  *(undefined *)&this->mbr_0xd40 = 0;
  if (0xf < this->mbr_0xd38) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->Window).Base.field_0xd24);
  }
  this->mbr_0xd38 = 0xf;
  (this->Window).Base.mbr_0xd34 = 0;
  (this->Window).Base.field_0xd24 = 0;
  local_4 = 0xffffffff;
  pLVar1 = (Label *)meth_0x4b0a50(this);
  ExceptionList = pvStack_c;
  return pLVar1;
}



Label * __thiscall GUI::Label::Label(Label *this,uint param_1)

{
  dword *pdVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631ede;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Window::Window(&this->Window,param_1);
  (this->Window).Base.vftptr_0x0 = (Base__vftable_66e41c *)&Label__vftable_66d43c_0066d43c;
  *(undefined ***)&(this->Window).Base.field_0x18 = &PTR_virt_meth_0x4a9060_0066d434;
  *(undefined4 *)&(this->Window).Base.field_0xd1c = 0;
  this->mbr_0xd38 = 0xf;
  (this->Window).Base.mbr_0xd34 = 0;
  (this->Window).Base.field_0xd24 = 0;
  this->mbr_0xd54 = 0xf;
  this->mbr_0xd50 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined *)&this->mbr_0xd40 = 0;
  pcVar2 = "system";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0xd3c,"system",(uint)(pcVar3 + -0x66d5e4));
  pdVar1 = &this->mbr_0xd78;
  local_4._0_1_ = 2;
  this->mbr_0xd58 = 0;
  this->mbr_0xd5c = 10;
  this->mbr_0xd60 = 1;
  this->mbr_0xd64 = 0xff808080;
  *(undefined *)&this->mbr_0xd68 = 0;
  *(undefined *)((int)&this->mbr_0xd68 + 1) = 0;
  this->mbr_0xd6c = 0;
  this->mbr_0xd70 = 0;
  this->mbr_0xd74 = 0;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  *pdVar1 = 0;
  this->mbr_0xd7c = 0;
  this->mbr_0xd80 = 0;
  this->mbr_0xd84 = 0;
  this->mbr_0xd88 = 0;
  this->mbr_0xd8c = 0;
  this->mbr_0xd90 = 0;
  this->mbr_0xd94 = 0;
  this->mbr_0xd98 = 0;
  this->mbr_0xd9c = 0;
  this->mbr_0xdb0 = 0;
  this->mbr_0xdb4 = 0;
  this->mbr_0xdb8 = 0;
  this->mbr_0xdbc = 0;
  this->mbr_0xdc0 = 0;
  this->mbr_0xdc4 = 0;
  this->mbr_0xdc8 = 0;
  this->mbr_0xde4 = 0;
  this->mbr_0xde8 = 0;
  this->mbr_0xdec = 0;
  this->mbr_0xdf0 = 0;
  this->mbr_0xdf4 = 0;
  this->mbr_0xdf8 = 0;
  this->mbr_0xdfc = 0;
  this->mbr_0xe00 = 0;
  this->mbr_0xe04 = 0;
  this->mbr_0xe08 = 0;
  this->mbr_0xe0c = 0;
  this->mbr_0xe0d = 0;
  this->mbr_0xe0e = 0;
  this->mbr_0xe0f = 0;
  this->mbr_0xe10 = 0x3d4ccccd;
  this->mbr_0xe14 = 0xffff0000;
  this->mbr_0xe18 = 1;
  this->mbr_0xe1c = 0;
  this->mbr_0xe20 = 0;
  this->mbr_0xe24 = 0;
  this->mbr_0xe28 = 0;
  this->mbr_0xe2c = 0;
  this->mbr_0xe30 = 0;
  this->mbr_0xe34 = 0;
  this->mbr_0xe38 = 0;
  this->mbr_0xe3c = 0;
  this->mbr_0xe40 = 0;
  this->mbr_0xe44 = 0;
  this->mbr_0xe48 = 0x28;
  this->mbr_0xe50 = 0;
  this->mbr_0xe54 = 0;
  this->mbr_0xe58 = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  this->mbr_0xe5c = 0xffffffff;
  this->mbr_0xe60 = 0;
  Window::virt_meth_0x4af4d0(&this->Window,1);
  virt_meth_0x4a7b20(this);
  *pdVar1 = 0;
  this->mbr_0xd7c = 0xffffffff;
  cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)&this->mbr_0xdf0,(int)pdVar1);
  ExceptionList = this;
  return this;
}



int * __thiscall GUI::Label::virt_meth_0x4a92f0(Label *this,byte param_1)

{
  ~Label(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



void __thiscall GUI::Label::meth_0x4a93a0(Label *this)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  uint *_Memory;
  int iVar8;
  char *pcVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint *puVar14;
  undefined4 *puVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  dword dVar20;
  int iVar21;
  dword dVar22;
  dword dVar23;
  dword *pdVar24;
  undefined4 *puVar25;
  cls_0x4a76e0 *pcVar26;
  dword dVar27;
  dword dVar28;
  dword dVar29;
  dword dVar30;
  dword dVar31;
  dword dVar32;
  dword dVar33;
  dword dVar34;
  dword dVar35;
  dword dVar36;
  undefined uVar37;
  undefined uVar38;
  uint uStack_144;
  dword dStack_13c;
  uint *puStack_138;
  dword dStack_134;
  int iStack_130;
  int iStack_12c;
  dword dStack_128;
  int iStack_124;
  dword dStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_110;
  cls_0x4a76e0 cStack_108;
  int iStack_e0;
  dword dStack_dc;
  int iStack_d8;
  int iStack_d4;
  uint uStack_c4;
  int iStack_c0;
  dword dStack_bc;
  uint uStack_b8;
  cls_0x4a76e0 cStack_a4;
  cls_0x4a76e0 cStack_7c;
  undefined4 auStack_54 [7];
  undefined4 auStack_38 [7];
  undefined4 auStack_1c [7];
  
  meth_0x4a8940(this);
  this->mbr_0xe34 = 0;
  if ((void *)this->mbr_0xe50 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xe50);
  }
  this->mbr_0xe50 = 0;
  this->mbr_0xe54 = 0;
  this->mbr_0xe58 = 0;
  dVar20 = (this->Window).Base.mbr_0x8;
  dVar27 = this->mbr_0xe24 + (this->Window).Base.mbr_0xc;
  dVar23 = (this->Window).Base.mbr_0x10;
  this->mbr_0xe60 = 0;
  iVar5 = dVar23 - this->mbr_0xe20;
  dVar20 = this->mbr_0xe1c + dVar20;
  iVar21 = (this->Window).Base.mbr_0x14 - this->mbr_0xe28;
  this->mbr_0xe5c = 0xffffffff;
  pvVar6 = (void *)cls_0x4b28a0::meth_0x4b58d0
                             ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&this->mbr_0xd3c,
                              this->mbr_0xd58,this->mbr_0xd5c,this->mbr_0xd60);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  dVar23 = (this->Window).Base.mbr_0xd34;
  cStack_108.mbr_0xc = dVar20;
  if (dVar23 != 0) {
    uVar11 = this->mbr_0xe3c;
    dStack_13c = this->mbr_0xe40;
    this->mbr_0xd70 = dVar23;
    if (0 < (int)dVar23) {
      pvVar7 = operator_new(dVar23 << 4);
      this->mbr_0xd74 = (dword)pvVar7;
      this->mbr_0xde8 = dVar23 * 6;
      pvVar7 = operator_new(dVar23 * 0xa8);
      this->mbr_0xdec = (dword)pvVar7;
      _Memory = (uint *)operator_new(dVar23 * 4);
      dVar22 = 0;
      dVar28 = 0;
      bVar3 = false;
      this->mbr_0xe2c = 0;
      this->mbr_0xe30 = 0;
      this->mbr_0xe34 = 0;
      this->mbr_0xe38 = 0;
      bVar2 = 0;
      dStack_120 = 0;
      puStack_138 = (uint *)0x0;
      cls_0x401d60::meth_0x401d60((cls_0x401d60 *)&this->mbr_0xe4c);
      dStack_134 = dVar20;
      dStack_128 = dVar27;
      cStack_108.mbr_0x24 = bVar2;
      if (0 < (int)dVar23) {
        uStack_c4 = ((int)uVar11 < 1) - 1 & uVar11;
        do {
          if (this->mbr_0xd38 < 0x10) {
            puVar10 = &(this->Window).Base.field_0xd24;
          }
          else {
            puVar10 = *(undefined **)&(this->Window).Base.field_0xd24;
          }
          meth_0x4a7d60(this,pvVar6,puVar10[dVar22],&iStack_c0,
                        dStack_134 - (this->Window).Base.mbr_0x8);
          iVar8 = iStack_c0 - uStack_c4;
          _Memory[dVar22] = uStack_b8;
          if ((int)dVar28 < (int)dStack_bc) {
            dVar28 = dStack_bc;
          }
          if (this->mbr_0xd38 < 0x10) {
            puVar10 = &(this->Window).Base.field_0xd24;
          }
          else {
            puVar10 = *(undefined **)&(this->Window).Base.field_0xd24;
          }
          if (puVar10[dVar22] == '\n') {
LAB_004a968d:
            bVar1 = true;
          }
          else {
            if (this->mbr_0xd38 < 0x10) {
              puVar10 = &(this->Window).Base.field_0xd24;
            }
            else {
              puVar10 = *(undefined **)&(this->Window).Base.field_0xd24;
            }
            if (puVar10[dVar22] == '\r') goto LAB_004a968d;
            bVar1 = false;
          }
          if (*(char *)((int)&this->mbr_0xd68 + 1) == '\0') {
            if ((int)dStack_134 < iVar5) goto LAB_004a9a1a;
            if (bVar2 == 0) {
              dVar35 = this->mbr_0xe3c;
              uVar38 = 0;
              uVar37 = 0;
              dVar29 = (dword)puStack_138;
              dVar30 = dVar22;
              dVar31 = dVar20;
              dVar32 = dStack_128;
              dVar33 = dStack_120;
              dVar34 = dVar28;
              dVar36 = dStack_13c;
              iVar8 = cls_0x401d60::meth_0x4341f0((cls_0x401d60 *)&this->mbr_0xe4c);
              cls_0x4a76e0::cls_0x4a76e0
                        (&cStack_a4,iVar8,dVar29,dVar30,dVar31,dVar32,dVar33,dVar34,dVar35,dVar36,
                         uVar37,uVar38);
              cls_0x401d60::meth_0x4a9310((cls_0x401d60 *)&this->mbr_0xe4c,&cStack_a4.mbr_0x0);
              bVar2 = 1;
            }
          }
          else {
            if ((bVar3) || (bVar1)) {
              bVar4 = FUN_004a8280((cls_0x4d8d70 *)&(this->Window).Base.field_0xd20,dVar22);
              if (((bVar4) || (bVar1)) &&
                 ((iVar16 = meth_0x4a8340(this,&(this->Window).Base.field_0xd20,pvVar6,dVar22,
                                          dStack_134), iVar5 <= (int)(iVar16 + dStack_134) ||
                  (bVar1)))) {
                if ((int)this->mbr_0xe30 < (int)dStack_120) {
                  this->mbr_0xe30 = dStack_120;
                }
                if ((bVar2 == 0) && ((int)this->mbr_0xe38 < (int)(dStack_134 - dVar20))) {
                  this->mbr_0xe38 = dStack_134 - dVar20;
                }
                if (this->mbr_0xe50 == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = (int)(this->mbr_0xe54 - this->mbr_0xe50) / 0x28;
                }
                cls_0x4a76e0::cls_0x4a76e0
                          (&cStack_7c,iVar8,puStack_138,dVar22,dVar20,dStack_128,dStack_120,dVar28,
                           this->mbr_0xe3c,dStack_13c,bVar2,1);
                cls_0x401d60::meth_0x4a9310((cls_0x401d60 *)&this->mbr_0xe4c,&cStack_7c.mbr_0x0);
                puStack_138 = (uint *)(dVar22 + 1);
                dStack_120 = 0;
                if ((int)dVar28 < (int)dStack_13c) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = dVar28 - dStack_13c;
                }
                dStack_128 = dStack_128 + iVar8;
                this->mbr_0xe2c = this->mbr_0xe2c + dVar28;
                dStack_13c = ((int)(dStack_13c - dVar28) < 0) - 1 & dStack_13c - dVar28;
                if (((this->mbr_0xe44 == 0) && (iVar21 <= (int)dStack_128)) && (bVar2 == 0)) {
                  bVar2 = 1;
                }
                bVar3 = false;
                dStack_134 = dVar20;
                goto LAB_004a9a53;
              }
            }
            else {
              bVar4 = FUN_004a8280((cls_0x4d8d70 *)&(this->Window).Base.field_0xd20,dVar22);
              if (!bVar4) {
                bVar3 = true;
              }
            }
            if ((int)(iVar8 + dStack_134) < iVar5) {
LAB_004a9a1a:
              if (!bVar3) goto LAB_004a9a22;
            }
            else {
              if ((int)this->mbr_0xe30 < (int)dStack_120) {
                this->mbr_0xe30 = dStack_120;
              }
              if ((bVar2 == 0) && ((int)this->mbr_0xe38 < (int)(dStack_134 - dVar20))) {
                this->mbr_0xe38 = dStack_134 - dVar20;
              }
              if (this->mbr_0xd38 < 0x10) {
                puVar10 = &(this->Window).Base.field_0xd24;
              }
              else {
                puVar10 = *(undefined **)&(this->Window).Base.field_0xd24;
              }
              if (((puVar10[dVar22] == ' ') ||
                  (pcVar9 = (char *)cls_0x4d8d70::meth_0x4a8140
                                              ((cls_0x4d8d70 *)&(this->Window).Base.field_0xd20,
                                               dVar22), *pcVar9 == '\t')) ||
                 ((pcVar9 = (char *)cls_0x4d8d70::meth_0x4a8140
                                              ((cls_0x4d8d70 *)&(this->Window).Base.field_0xd20,
                                               dVar22), *pcVar9 == '\n' ||
                  (pcVar9 = (char *)cls_0x4d8d70::meth_0x4a8140
                                              ((cls_0x4d8d70 *)&(this->Window).Base.field_0xd20,
                                               dVar22), *pcVar9 == '\r')))) {
                dVar22 = dVar22 + 1;
              }
              if (this->mbr_0xe50 == 0) {
                iVar16 = 0;
              }
              else {
                iVar16 = (int)(this->mbr_0xe54 - this->mbr_0xe50) / 0x28;
              }
              cls_0x4a76e0::cls_0x4a76e0
                        (&cStack_108,iVar16,puStack_138,dVar22,dVar20,dStack_128,dStack_120,dVar28,
                         this->mbr_0xe3c,dStack_13c,bVar2,0);
              cls_0x401d60::meth_0x4a9310((cls_0x401d60 *)&this->mbr_0xe4c,&cStack_108.mbr_0x0);
              dStack_120 = 0;
              if ((int)dVar28 < (int)dStack_13c) {
                iVar16 = 0;
              }
              else {
                iVar16 = dVar28 - dStack_13c;
              }
              dStack_128 = dStack_128 + iVar16;
              this->mbr_0xe2c = this->mbr_0xe2c + dVar28;
              dStack_13c = ((int)(dStack_13c - dVar28) < 0) - 1 & dStack_13c - dVar28;
              puStack_138 = (uint *)dVar22;
              if ((this->mbr_0xe44 == 0) && (iVar21 <= (int)dStack_128)) {
                dStack_134 = dVar20;
                if (bVar2 == 0) {
                  bVar2 = 1;
                }
                goto LAB_004a9a53;
              }
              bVar3 = false;
              dStack_134 = dVar20;
LAB_004a9a22:
              if ((dStack_128 != dVar27) && (bVar1)) goto LAB_004a9a53;
            }
            dStack_120 = dStack_120 + iStack_c0;
            dStack_134 = dStack_134 + iVar8;
          }
LAB_004a9a53:
          dVar22 = dVar22 + 1;
          cStack_108.mbr_0x24 = bVar2;
        } while ((int)dVar22 < (int)dVar23);
      }
      this->mbr_0xe2c = this->mbr_0xe2c + dVar28;
      this->mbr_0xe34 = this->mbr_0xe34 + dVar28;
      if ((int)this->mbr_0xe30 < (int)dStack_120) {
        this->mbr_0xe30 = dStack_120;
      }
      if ((int)this->mbr_0xe38 < (int)(dStack_134 - dVar20)) {
        this->mbr_0xe38 = dStack_134 - dVar20;
      }
      if (this->mbr_0xe50 == 0) {
        cStack_108.mbr_0x0 = 0;
      }
      else {
        cStack_108.mbr_0x0 = (int)(this->mbr_0xe54 - this->mbr_0xe50) / 0x28;
      }
      cStack_108.mbr_0x4 = (dword)puStack_138;
      cStack_108.mbr_0x1c = this->mbr_0xe3c;
      cStack_108.mbr_0x14 = dStack_120;
      cStack_108.mbr_0x10 = dStack_128;
      cStack_108.mbr_0x20 = dStack_13c;
      cStack_108.mbr_0x25 = 0;
      cStack_108.mbr_0x8 = dVar22;
      cStack_108.mbr_0x18 = dVar28;
      cls_0x401d60::meth_0x4a9310((cls_0x401d60 *)&this->mbr_0xe4c,&cStack_108.mbr_0x0);
      iStack_12c = 0;
      if (this->mbr_0xe44 == 1) {
        iStack_12c = (iVar21 - this->mbr_0xe2c) - dVar27;
      }
      else if (this->mbr_0xe44 == 2) {
        iStack_12c = (int)((iVar21 - this->mbr_0xe2c) - dVar27) / 2;
      }
      dVar23 = this->mbr_0xe50;
      uStack_144 = 0;
      if (dVar23 != this->mbr_0xe54) {
        do {
          iVar21 = iStack_12c + *(int *)(dVar23 + 0x10);
          *(int *)(dVar23 + 0x10) = iVar21;
          dVar28 = this->mbr_0xe5c;
          if ((int)dVar28 < 0) {
            if (((int)dVar27 < iVar21 + *(int *)(dVar23 + 0x18)) &&
               (*(int *)(dVar23 + 0x20) < *(int *)(dVar23 + 0x18))) {
              iVar21 = iVar5 - dVar20;
              this->mbr_0xe5c = *(dword *)(dVar23 + 4);
              if (this->mbr_0xd6c == 1) {
                iVar8 = *(int *)(dVar23 + 0xc) - *(int *)(dVar23 + 0x14);
LAB_004a9bee:
                iVar8 = iVar8 + iVar21;
              }
              else {
                if (this->mbr_0xd6c == 2) {
                  iVar8 = iVar21 - *(int *)(dVar23 + 0x14);
                  iVar21 = *(int *)(dVar23 + 0xc);
                  iVar8 = iVar8 / 2;
                  goto LAB_004a9bee;
                }
                iVar8 = *(int *)(dVar23 + 0xc);
              }
              iStack_130 = *(int *)(dVar23 + 0x1c);
              dVar28 = *(dword *)(dVar23 + 4);
              if ((int)dVar28 < *(int *)(dVar23 + 8)) {
                do {
                  if (iStack_130 < 1) {
                    this->mbr_0xe5c = dVar28;
                    break;
                  }
                  if (this->mbr_0xd38 < 0x10) {
                    puVar10 = &(this->Window).Base.field_0xd24;
                  }
                  else {
                    puVar10 = *(undefined **)&(this->Window).Base.field_0xd24;
                  }
                  meth_0x4a7d60(this,pvVar6,puVar10[dVar28],&iStack_e0,
                                iVar8 - (this->Window).Base.mbr_0x8);
                  iStack_130 = iStack_130 - iStack_e0;
                  dVar28 = dVar28 + 1;
                } while ((int)dVar28 < *(int *)(dVar23 + 8));
              }
            }
            dVar28 = this->mbr_0xe5c;
            if (-1 < (int)dVar28) goto LAB_004a9c65;
          }
          else {
LAB_004a9c65:
            uVar11 = meth_0x4a8490(this,uStack_144,dVar28,*(int *)(dVar23 + 4),*(int *)(dVar23 + 8),
                                   *(int *)(dVar23 + 0xc),*(int *)(dVar23 + 0x10),
                                   *(int *)(dVar23 + 0x14),*(uint *)(dVar23 + 0x1c),
                                   *(int *)(dVar23 + 0x20),*(char *)(dVar23 + 0x24));
            if (*(char *)(dVar23 + 0x24) == '\0') {
              uStack_144 = uStack_144 + (*(int *)(dVar23 + 8) - *(int *)(dVar23 + 4));
              this->mbr_0xe60 = this->mbr_0xe60 + 1;
            }
            this->mbr_0xe34 = this->mbr_0xe34 + uVar11;
          }
          dVar23 = dVar23 + 0x28;
        } while (dVar23 != this->mbr_0xe54);
      }
      iStack_130 = 2;
      if (2 < (int)uStack_144) {
        iStack_118 = 0x20;
        iStack_11c = 0x150;
        puVar14 = _Memory;
        do {
          puStack_138 = puVar14 + 1;
          uVar11 = puVar14[2];
          piVar13 = (int *)(this->mbr_0xd74 + iStack_118);
          iStack_e0 = *piVar13;
          dStack_dc = piVar13[1];
          iStack_d4 = piVar13[3];
          iStack_d8 = piVar13[2];
          puVar12 = (undefined4 *)(this->mbr_0xdec + iStack_11c);
          puVar15 = puVar12;
          puVar25 = auStack_1c;
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar25 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar25 = puVar25 + 1;
          }
          puVar15 = puVar12 + 7;
          puVar25 = auStack_54;
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar25 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar25 = puVar25 + 1;
          }
          puVar15 = puVar12 + 0xe;
          puVar25 = auStack_38;
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar25 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar25 = puVar25 + 1;
          }
          pdVar24 = puVar12 + 0x15;
          pcVar26 = &cStack_a4;
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            pcVar26->mbr_0x0 = *pdVar24;
            pdVar24 = pdVar24 + 1;
            pcVar26 = (cls_0x4a76e0 *)&pcVar26->mbr_0x4;
          }
          pdVar24 = puVar12 + 0x1c;
          pcVar26 = &cStack_7c;
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            pcVar26->mbr_0x0 = *pdVar24;
            pdVar24 = pdVar24 + 1;
            pcVar26 = (cls_0x4a76e0 *)&pcVar26->mbr_0x4;
          }
          pdVar24 = puVar12 + 0x23;
          pcVar26 = &cStack_108;
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            pcVar26->mbr_0x0 = *pdVar24;
            pdVar24 = pdVar24 + 1;
            pcVar26 = (cls_0x4a76e0 *)&pcVar26->mbr_0x4;
          }
          iVar5 = iStack_130;
          if (uVar11 < *puStack_138) {
            iStack_124 = iStack_118;
            iVar21 = iStack_11c;
            puVar14 = puVar14 + 2;
            puVar17 = puStack_138;
            do {
              *puVar14 = *puVar17;
              puVar15 = (undefined4 *)(this->mbr_0xd74 + iStack_124);
              *puVar15 = puVar15[-4];
              puVar15[1] = puVar15[-3];
              puVar15[2] = puVar15[-2];
              puVar15[3] = puVar15[-1];
              puVar15 = (undefined4 *)(iVar21 + this->mbr_0xdec);
              puVar25 = puVar15 + -0x2a;
              for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar15 = *puVar25;
                puVar25 = puVar25 + 1;
                puVar15 = puVar15 + 1;
              }
              iVar8 = this->mbr_0xdec + iVar21;
              puVar15 = (undefined4 *)(iVar8 + -0x8c);
              puVar25 = (undefined4 *)(iVar8 + 0x1c);
              for (iVar16 = 7; iVar16 != 0; iVar16 = iVar16 + -1) {
                *puVar25 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar25 = puVar25 + 1;
              }
              iVar8 = this->mbr_0xdec + iVar21;
              puVar15 = (undefined4 *)(iVar8 + -0x70);
              puVar25 = (undefined4 *)(iVar8 + 0x38);
              for (iVar16 = 7; iVar16 != 0; iVar16 = iVar16 + -1) {
                *puVar25 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar25 = puVar25 + 1;
              }
              iVar8 = this->mbr_0xdec + iVar21;
              puVar15 = (undefined4 *)(iVar8 + -0x54);
              puVar25 = (undefined4 *)(iVar8 + 0x54);
              for (iVar16 = 7; iVar16 != 0; iVar16 = iVar16 + -1) {
                *puVar25 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar25 = puVar25 + 1;
              }
              iVar8 = this->mbr_0xdec + iVar21;
              puVar15 = (undefined4 *)(iVar8 + -0x38);
              puVar25 = (undefined4 *)(iVar8 + 0x70);
              for (iVar16 = 7; iVar16 != 0; iVar16 = iVar16 + -1) {
                *puVar25 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar25 = puVar25 + 1;
              }
              iVar8 = this->mbr_0xdec + iVar21;
              puVar15 = (undefined4 *)(iVar8 + -0x1c);
              puVar25 = (undefined4 *)(iVar8 + 0x8c);
              for (iVar16 = 7; iVar16 != 0; iVar16 = iVar16 + -1) {
                *puVar25 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar25 = puVar25 + 1;
              }
              iStack_124 = iStack_124 + -0x10;
              puVar18 = puVar17 + -1;
              iVar5 = iVar5 + -1;
              iVar21 = iVar21 + -0xa8;
              puVar14 = puVar17;
              puVar17 = puVar18;
            } while (uVar11 < *puVar18);
          }
          _Memory[iVar5] = uVar11;
          piVar13 = (int *)(iVar5 * 0x10 + this->mbr_0xd74);
          *piVar13 = iStack_e0;
          piVar13[1] = dStack_dc;
          piVar13[2] = iStack_d8;
          piVar13[3] = iStack_d4;
          iVar5 = iVar5 * 0xa8;
          puVar15 = auStack_1c;
          puVar25 = (undefined4 *)(this->mbr_0xdec + iVar5);
          for (iVar21 = 7; iVar21 != 0; iVar21 = iVar21 + -1) {
            *puVar25 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar25 = puVar25 + 1;
          }
          puVar15 = auStack_54;
          puVar25 = (undefined4 *)(iVar5 + 0x1c + this->mbr_0xdec);
          for (iVar21 = 7; iVar21 != 0; iVar21 = iVar21 + -1) {
            *puVar25 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar25 = puVar25 + 1;
          }
          puVar15 = auStack_38;
          puVar25 = (undefined4 *)(iVar5 + 0x38 + this->mbr_0xdec);
          for (iVar21 = 7; iVar21 != 0; iVar21 = iVar21 + -1) {
            *puVar25 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar25 = puVar25 + 1;
          }
          pcVar26 = &cStack_a4;
          pdVar24 = (dword *)(iVar5 + 0x54 + this->mbr_0xdec);
          for (iVar21 = 7; iVar21 != 0; iVar21 = iVar21 + -1) {
            *pdVar24 = pcVar26->mbr_0x0;
            pcVar26 = (cls_0x4a76e0 *)&pcVar26->mbr_0x4;
            pdVar24 = pdVar24 + 1;
          }
          pcVar26 = &cStack_7c;
          pdVar24 = (dword *)(iVar5 + 0x70 + this->mbr_0xdec);
          for (iVar21 = 7; iVar21 != 0; iVar21 = iVar21 + -1) {
            *pdVar24 = pcVar26->mbr_0x0;
            pcVar26 = (cls_0x4a76e0 *)&pcVar26->mbr_0x4;
            pdVar24 = pdVar24 + 1;
          }
          pcVar26 = &cStack_108;
          pdVar24 = (dword *)(iVar5 + 0x8c + this->mbr_0xdec);
          for (iVar21 = 7; iVar21 != 0; iVar21 = iVar21 + -1) {
            *pdVar24 = pcVar26->mbr_0x0;
            pcVar26 = (cls_0x4a76e0 *)&pcVar26->mbr_0x4;
            pdVar24 = pdVar24 + 1;
          }
          iStack_130 = iStack_130 + 1;
          iStack_11c = iStack_11c + 0xa8;
          iStack_118 = iStack_118 + 0x10;
          puVar14 = puStack_138;
        } while (iStack_130 < (int)uStack_144);
      }
      iVar21 = 1;
      iVar5 = 1;
      if (1 < (int)uStack_144) {
        do {
          if (_Memory[iVar5] != _Memory[iVar5 + -1]) {
            iVar21 = iVar21 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uStack_144);
      }
      this->mbr_0xd84 = this->mbr_0xdec;
      dVar20 = cls_0x515040::meth_0x41f630((cls_0x515040 *)&this->mbr_0xd78,iVar21);
      this->mbr_0xde4 = dVar20;
      iVar19 = 0;
      iVar16 = 0;
      iVar5 = 0;
      iVar8 = 0;
      if (0 < iVar21) {
        iStack_124 = 0;
        iStack_110 = iVar21;
        do {
          *(undefined4 *)(this->mbr_0xde4 + 0x20 + iVar19) = 4;
          *(int *)(this->mbr_0xde4 + 0x28 + iVar19) = iVar16;
          iVar8 = (this->cls_0x4abc60).mbr_0xc + iStack_124;
          *(uint *)(iVar8 + 0x130) = _Memory[iVar5];
          *(undefined4 *)(iVar8 + 0x1c) = 0x14;
          *(undefined4 *)(iVar8 + 0x20) = 0x14;
          *(undefined4 *)(iVar8 + 0x28) = 1;
          *(undefined4 *)(iVar8 + 0x24) = 1;
          iVar8 = iVar5;
          do {
            iVar5 = iVar8 + 1;
            if ((int)uStack_144 <= iVar5) goto LAB_004aa082;
            puVar14 = _Memory + iVar8;
            iVar8 = iVar5;
          } while (_Memory[iVar5] == *puVar14);
          *(int *)(this->mbr_0xde4 + 0x30 + iVar19) = (iVar5 - iVar16) * 2;
          iVar16 = iVar5;
LAB_004aa082:
          iStack_124 = iStack_124 + 0x244;
          iVar19 = iVar19 + 0x34;
          iStack_110 = iStack_110 + -1;
          iVar8 = iVar21;
        } while (iStack_110 != 0);
      }
      *(int *)(iVar8 * 0x34 + -4 + this->mbr_0xde4) = (iVar5 - iVar16) * 2;
      piVar13 = (int *)(uStack_144 * 6);
      iVar5 = FUN_0047460d(0x144);
      Gregorian::meth_0x4ab680((Gregorian *)&this->mbr_0xd78,0x144,iVar5,piVar13);
      if (this->mbr_0xd64 != 0xff808080) {
        cls_0x4abc60::meth_0x4ab600(&this->cls_0x4abc60,'\x01','\x01',this->mbr_0xd64,(uint *)0x0);
      }
      cls_0x4abc60::meth_0x4abdd0(&this->cls_0x4abc60);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  meth_0x4a7d60(this,pvVar6,0x20,&iStack_e0,dVar20 - (this->Window).Base.mbr_0x8);
  iVar5 = 0;
  if (this->mbr_0xe44 == 1) {
    iVar5 = (iVar21 - dStack_dc) - dVar27;
  }
  else if (this->mbr_0xe44 == 2) {
    iVar5 = (int)((iVar21 - dStack_dc) - dVar27) / 2;
  }
  cStack_108.mbr_0x10 = iVar5 + dVar27;
  cStack_108.mbr_0x18 = dStack_dc;
  cStack_108.mbr_0x20 = this->mbr_0xe40;
  cStack_108.mbr_0x0 = 0;
  cStack_108.mbr_0x4 = 0;
  cStack_108.mbr_0x8 = 0;
  cStack_108.mbr_0x14 = 0;
  cStack_108.mbr_0x25 = 0;
  cStack_108.mbr_0x1c = this->mbr_0xe3c;
  cStack_108.mbr_0x24 = 1;
  cls_0x401d60::meth_0x4a9310((cls_0x401d60 *)&this->mbr_0xe4c,&cStack_108.mbr_0x0);
  this->mbr_0xe60 = 1;
  this->mbr_0xe5c = 0;
  this->mbr_0xe34 = dStack_dc;
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa130(Label *this,dword param_1,dword param_2)

{
  this->mbr_0xe3c = param_1;
  this->mbr_0xe40 = param_2;
  meth_0x4a93a0(this);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa150(Label *this,undefined *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  puStack_8 = &LAB_00631ef8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = cls_0x4b4180::meth_0x4b4180((cls_0x4b4180 *)&DAT_00707dfc.field_0x4c,param_1,local_2c);
  if ((char)uVar1 == '\0') {
    *(undefined4 *)&(this->Window).Base.field_0xd1c = 0;
    if (this->mbr_0xd38 < 0x10) {
      puVar2 = &(this->Window).Base.field_0xd24;
    }
    else {
      puVar2 = *(undefined **)&(this->Window).Base.field_0xd24;
    }
    param_1 = &stack0xffffffc0;
    if (this->mbr_0xd38 < 0x10) {
      puVar3 = &(this->Window).Base.field_0xd24;
    }
    else {
      puVar3 = *(undefined **)&(this->Window).Base.field_0xd24;
    }
    cls_0x4d8d70::meth_0x49c7a0
              ((cls_0x4d8d70 *)&(this->Window).Base.field_0xd20,(int *)&param_1,(int)puVar3,
               (uint)(puVar2 + (this->Window).Base.mbr_0xd34));
  }
  else {
    *(undefined **)&(this->Window).Base.field_0xd1c = puVar2;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->Window).Base.field_0xd20,local_2c,0,0xffffffff);
  }
  meth_0x4a93a0(this);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa250(Label *this,_String_base *param_1)

{
  *(undefined4 *)&(this->Window).Base.field_0xd1c = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->Window).Base.field_0xd20,param_1,0,0xffffffff);
  meth_0x4a93a0(this);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa280(Label *this,int param_1)

{
  cls_0x4d8d70::meth_0x4256e0((cls_0x4d8d70 *)&(this->Window).Base.field_0xd20,param_1,0,0xffffffff)
  ;
  meth_0x4a93a0(this);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa2b0(Label *this,undefined param_1,undefined4 param_2)

{
  ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)&(this->Window).Base.field_0xd20,1);
  meth_0x4a93a0(this);
  return;
}



void __thiscall
GUI::Label::virt_meth_0x4aa2d0
          (Label *this,_String_base *param_1,dword param_2,dword param_3,dword param_4)

{
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0xd3c,param_1,0,0xffffffff);
  this->mbr_0xd58 = param_2;
  this->mbr_0xd5c = param_3;
  this->mbr_0xd60 = param_4;
  meth_0x4a93a0(this);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa310(Label *this,dword param_1)

{
  this->mbr_0xd5c = param_1;
  meth_0x4a93a0(this);
  return;
}



void __thiscall
GUI::Label::virt_meth_0x4aa330(Label *this,dword param_1,dword param_2,dword param_3,dword param_4)

{
  this->mbr_0xe1c = param_1;
  this->mbr_0xe20 = param_2;
  this->mbr_0xe24 = param_3;
  this->mbr_0xe28 = param_4;
  meth_0x4a93a0(this);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa360(Label *this,undefined param_1)

{
  *(undefined *)((int)&this->mbr_0xd68 + 1) = param_1;
  meth_0x4a93a0(this);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa380(Label *this,dword param_1)

{
  this->mbr_0xd6c = param_1;
  meth_0x4a93a0(this);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa3a0(Label *this,dword param_1)

{
  this->mbr_0xe44 = param_1;
  meth_0x4a93a0(this);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa3c0(Label *this,int param_1,int param_2)

{
  Window::virt_meth_0x4af080(&this->Window,param_1,param_2);
  meth_0x4a93a0(this);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa3e0(Label *this,FILE *param_1,int param_2)

{
  undefined *_DstBuf;
  undefined4 uVar1;
  size_t sVar2;
  uint uVar3;
  uint unaff_retaddr;
  _String_base a_Stack_2c [4];
  void *pvStack_28;
  dword dStack_18;
  uint uStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00631ef8;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  meth_0x4a8940(this);
  uVar1 = Window::virt_meth_0x4b0e10(&this->Window,param_1,param_2);
  if ((char)uVar1 != '\0') {
    _DstBuf = &(this->Window).Base.field_0xd1c;
    sVar2 = _fread(_DstBuf,4,1,param_1);
    if (sVar2 == 1) {
      uStack_14 = 0xf;
      dStack_18 = 0;
      pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
      uStack_4 = 0;
      uVar1 = cls_0x4b4180::meth_0x4b4180
                        ((cls_0x4b4180 *)&DAT_00707dfc.field_0x4c,*(undefined4 *)_DstBuf,a_Stack_2c)
      ;
      if ((char)uVar1 != '\0') {
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&(this->Window).Base.field_0xd20,a_Stack_2c,0,0xffffffff);
      }
      uVar3 = FUN_0050b7f0((cls_0x50db20 *)&this->mbr_0xd3c,param_1);
      if ((char)uVar3 == '\0') {
        if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_28);
        }
      }
      else {
        sVar2 = _fread(&this->mbr_0xd58,4,1,param_1);
        if ((((((sVar2 == 1) && (sVar2 = _fread(&this->mbr_0xd5c,4,1,param_1), sVar2 == 1)) &&
              (sVar2 = _fread(&this->mbr_0xd60,4,1,param_1), sVar2 == 1)) &&
             ((sVar2 = _fread(&this->mbr_0xd64,4,1,param_1), sVar2 == 1 &&
              (sVar2 = _fread(&this->mbr_0xd68,1,1,param_1), sVar2 == 1)))) &&
            (((sVar2 = _fread((void *)((int)&this->mbr_0xd68 + 1),1,1,param_1), sVar2 == 1 &&
              ((sVar2 = _fread(&this->mbr_0xd6c,4,1,param_1), sVar2 == 1 &&
               (sVar2 = _fread(&this->mbr_0xe1c,4,1,param_1), sVar2 == 1)))) &&
             (sVar2 = _fread(&this->mbr_0xe20,4,1,param_1), sVar2 == 1)))) &&
           (((sVar2 = _fread(&this->mbr_0xe24,4,1,param_1), sVar2 == 1 &&
             (sVar2 = _fread(&this->mbr_0xe28,4,1,param_1), sVar2 == 1)) &&
            ((param_2 < 1 || (sVar2 = _fread(&this->mbr_0xe44,4,1,param_1), sVar2 == 1)))))) {
          meth_0x4a93a0(this);
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)a_Stack_2c);
        }
        else {
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)a_Stack_2c);
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GUI::Label::virt_meth_0x4aa640(Label *this,int param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint unaff_retaddr;
  _String_base a_Stack_2c [4];
  void *pvStack_28;
  dword dStack_18;
  uint uStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00631ef8;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  meth_0x4a8940(this);
  uVar3 = Window::virt_meth_0x4b10f0(&this->Window,param_1,param_2);
  if ((char)uVar3 != '\0') {
    puVar1 = &(this->Window).Base.field_0xd1c;
    uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,puVar1,4,param_1);
    if ((char)uVar3 != '\0') {
      uStack_14 = 0xf;
      dStack_18 = 0;
      pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
      uStack_4 = 0;
      uVar3 = cls_0x4b4180::meth_0x4b4180
                        ((cls_0x4b4180 *)&DAT_00707dfc.field_0x4c,*(undefined4 *)puVar1,a_Stack_2c);
      if ((char)uVar3 != '\0') {
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&(this->Window).Base.field_0xd20,a_Stack_2c,0,0xffffffff);
      }
      cVar2 = FUN_0050b880((cls_0x50db20 *)&this->mbr_0xd3c,param_1);
      if (cVar2 == '\0') {
        if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_28);
        }
      }
      else {
        uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xd58,4,param_1);
        if (((((((char)uVar3 == '\0') ||
               (uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xd5c,4,param_1),
               (char)uVar3 == '\0')) ||
              (uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xd60,4,param_1),
              (char)uVar3 == '\0')) ||
             ((uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xd64,4,param_1),
              (char)uVar3 == '\0' ||
              (uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xd68,1,param_1),
              (char)uVar3 == '\0')))) ||
            (((uVar3 = ResourceSystem::FileStreamRead
                                 (DAT_00707da8,(undefined *)((int)&this->mbr_0xd68 + 1),1,param_1),
              (char)uVar3 == '\0' ||
              ((uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xd6c,4,param_1),
               (char)uVar3 == '\0' ||
               (uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xe1c,4,param_1),
               (char)uVar3 == '\0')))) ||
             (uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xe20,4,param_1),
             (char)uVar3 == '\0')))) ||
           (((uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xe24,4,param_1),
             (char)uVar3 == '\0' ||
             (uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xe28,4,param_1),
             (char)uVar3 == '\0')) ||
            ((0 < param_2 &&
             (uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0xe44,4,param_1),
             (char)uVar3 == '\0')))))) {
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)a_Stack_2c);
        }
        else {
          meth_0x4a93a0(this);
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)a_Stack_2c);
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GUI::Label::meth_0x4b0a50(Label *this)

{
  int **ppiVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *local_14;
  Label *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632236;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Window).Base.vftptr_0x0 = (Base__vftable_66e41c *)&Window__vftable_66e4d4_0066e4d4;
  *(Window__vftable_66e4cc **)&(this->Window).Base.field_0x18 = &Window__vftable_66e4cc_0066e4cc;
  ppiVar1 = *(int ***)&(this->Window).Base.field_0x88;
  local_4 = 9;
  if (ppiVar1 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar1;
  }
  local_10 = this;
  if (piVar4 != *(int **)&(this->Window).Base.field_0x88) {
    do {
      local_14 = (int *)piVar4[2];
      piVar2 = (int *)*piVar4;
      if (piVar4 != *(int **)&(this->Window).Base.field_0x88) {
        *(int **)piVar4[1] = piVar2;
        *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
        _free(piVar4);
      }
      uVar5 = FUN_004a75a0((int)(local_14 + 6));
      if (((char)uVar5 != '\0') && (local_14 != (int *)0x0)) {
        (**(code **)*local_14)(1);
      }
      piVar4 = piVar2;
    } while (piVar2 != (int *)*(int *)&(this->Window).Base.field_0x88);
  }
  if (*(int *)&(this->Window).Base.field_0x70 != 0) {
    Window::virt_meth_0x4af390(&this->Window,(int *)0x0);
  }
  if (*(int *)&(this->Window).Base.field_0x6c != 0) {
    Window::virt_meth_0x4af320(&this->Window,(void *)0x0);
  }
  cls_0x4b28a0::meth_0x4b34b0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(int *)this);
  if (0xf < *(uint *)&(this->Window).Base.field_0xd10) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->Window).Base.field_0xcfc);
  }
  *(undefined4 *)&(this->Window).Base.field_0xd10 = 0xf;
  *(undefined4 *)&(this->Window).Base.field_0xd0c = 0;
  (this->Window).Base.field_0xcfc = 0;
  if (0xf < *(uint *)&(this->Window).Base.field_0xcf0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->Window).Base.field_0xcdc);
  }
  *(undefined4 *)&(this->Window).Base.field_0xcf0 = 0xf;
  *(undefined4 *)&(this->Window).Base.field_0xcec = 0;
  (this->Window).Base.field_0xcdc = 0;
  if (*(uint *)&(this->Window).Base.field_0xcd0 < 0x10) {
    *(undefined4 *)&(this->Window).Base.field_0xcd0 = 0xf;
    *(undefined4 *)&(this->Window).Base.field_0xccc = 0;
    (this->Window).Base.field_0xcbc = 0;
    iVar3 = *(int *)&(this->Window).Base.field_0xcac;
    if (iVar3 == 0) {
      *(undefined4 *)&(this->Window).Base.field_0xcac = 0;
      *(undefined4 *)&(this->Window).Base.field_0xcb0 = 0;
      *(undefined4 *)&(this->Window).Base.field_0xcb4 = 0;
      local_4 = CONCAT31(local_4._1_3_,4);
      _eh_vector_destructor_iterator_(&(this->Window).Base.field_0x90,0x158,9,Fragment::~Fragment);
      ppiVar1 = *(int ***)&(this->Window).Base.field_0x88;
      if (ppiVar1 == (int **)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *ppiVar1;
      }
      Interface::meth_0x4b9d60
                ((Interface *)&(this->Window).Base.field_0x84,&local_14,piVar4,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
      _free(*(void **)&(this->Window).Base.field_0x88);
    }
    FUN_004310a0(iVar3,*(int *)&(this->Window).Base.field_0xcb0);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->Window).Base.field_0xcac);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&(this->Window).Base.field_0xcbc);
}


#include "../include/Label.h"
