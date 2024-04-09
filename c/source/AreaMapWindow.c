#include "../include/AreaMapWindow.h"

void __thiscall AreaMapWindow::meth_0x41d220(AreaMapWindow *this,int param_1,int param_2)

{
  if (((this->Picture).Window.Base.mbr_0xd30 != param_1) ||
     ((this->Picture).Window.Base.mbr_0xd34 != param_2)) {
    (this->Picture).Window.Base.mbr_0xd30 = param_1;
    (this->Picture).Window.Base.mbr_0xd34 = param_2;
    this->mbr_0xf0d = 1;
  }
  return;
}



undefined4 __thiscall
AreaMapWindow::meth_0x41d250
          (AreaMapWindow *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
          int *param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(int *)&(this->Picture).Window.Base.field_0xd2c == 0) {
    return 0;
  }
  iVar1 = *(int *)&(this->Picture).Window.Base.field_0xd28;
  uVar2 = FUN_00616e24();
  *param_3 = (int)uVar2;
  uVar2 = FUN_00616e24();
  *param_4 = iVar1 - (int)uVar2;
  return CONCAT31((int3)(uVar2 >> 8),1);
}



undefined4 __thiscall
AreaMapWindow::meth_0x41d2d0
          (AreaMapWindow *this,float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = *(int *)&(this->Picture).Window.Base.field_0xd2c;
  if (iVar3 == 0) {
    return 0;
  }
  iVar4 = *(int *)&(this->Picture).Window.Base.field_0xd28;
  fVar1 = *(float *)(iVar3 + 0x2c);
  fVar2 = *(float *)(iVar3 + 0x34);
  *param_3 = ((param_1 - *(float *)(iVar3 + 0x28)) /
             (*(float *)(iVar3 + 0x30) - *(float *)(iVar3 + 0x28))) *
             (float)*(int *)&(this->Picture).Window.Base.field_0xd24;
  fVar5 = (float)iVar4;
  *param_4 = fVar5 - ((param_2 - fVar1) / (fVar2 - fVar1)) * fVar5;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}



void __thiscall AreaMapWindow::virt_meth_0x41d340(AreaMapWindow *this)

{
  GUI::Window::virt_meth_0x4af5b0((Window *)this);
  this->mbr_0xf0d = 1;
  return;
}



int * __thiscall AreaMapWindow::meth_0x41d360(AreaMapWindow *this,int *param_1)

{
  cls_0x57bc90 *this_00;
  int *piVar1;
  uint uVar2;
  int iVar3;
  dword dVar4;
  int iVar5;
  int iVar6;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  AreaMapWindow *local_c;
  dword local_8;
  dword local_4;
  
  piVar1 = param_1;
  this_00 = *(cls_0x57bc90 **)&(this->Picture).Window.Base.field_0xd2c;
  iVar5 = 0;
  if (this_00 != (cls_0x57bc90 *)0x0) {
    local_8 = this_00->mbr_0x38;
    dVar4 = this_00->mbr_0x3c;
    if ((0 < (int)local_8) && (0 < (int)dVar4)) {
      iVar6 = *(int *)&(this->Picture).Window.Base.field_0xd24;
      iVar3 = *(int *)&(this->Picture).Window.Base.field_0xd28;
      if ((0 < iVar6) && (0 < iVar3)) {
        *param_1 = iVar6;
        param_1[1] = iVar3;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1 = (int *)0x0;
        local_c = this;
        local_4 = dVar4;
        if (0 < (int)dVar4) {
          do {
            iVar6 = 0;
            if (0 < (int)local_8) {
              do {
                uVar2 = cls_0x57bc90::meth_0x57bc90(this_00,iVar6,iVar5);
                if ((char)uVar2 != '\0') {
                  cls_0x57bc90::meth_0x57be60(this_00,iVar6,iVar5,&local_18,&local_1c,'\0');
                  meth_0x41d250(local_c,local_18,local_1c,&local_14,&local_10);
                  iVar3 = *piVar1;
                  if (local_14 <= *piVar1) {
                    iVar3 = local_14;
                  }
                  *piVar1 = iVar3;
                  iVar3 = piVar1[1];
                  if (local_10 <= piVar1[1]) {
                    iVar3 = local_10;
                  }
                  piVar1[1] = iVar3;
                  cls_0x57bc90::meth_0x57be60(this_00,iVar6 + 1,iVar5 + 1,&local_18,&local_1c,'\0');
                  meth_0x41d250(local_c,local_18,local_1c,&local_14,&local_10);
                  iVar3 = piVar1[2];
                  if (piVar1[2] <= local_14) {
                    iVar3 = local_14;
                  }
                  piVar1[2] = iVar3;
                  iVar3 = piVar1[3];
                  if (piVar1[3] <= local_10) {
                    iVar3 = local_10;
                  }
                  piVar1[3] = iVar3;
                  param_1 = (int *)0x1;
                }
                iVar6 = iVar6 + 1;
                dVar4 = local_4;
              } while (iVar6 < (int)local_8);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)dVar4);
        }
        return param_1;
      }
    }
  }
  return (int *)0x0;
}



uint __thiscall
AreaMapWindow::meth_0x41d7b0
          (AreaMapWindow *this,int *param_1,float *param_2,float *param_3,float *param_4,
          float *param_5,float *param_6,float *param_7,float *param_8,float *param_9,int *param_10,
          int *param_11,int *param_12,int *param_13)

{
  dword dVar1;
  dword dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_EBX;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *unaff_retaddr;
  dword dVar13;
  dword dVar14;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  undefined4 uStack_20;
  float fStack_1c;
  cls_0x4b15d0 *pcStack_18;
  int iStack_14;
  uint local_10;
  undefined *local_c;
  float fStack_8;
  int *piStack_4;
  
  local_10 = *(uint *)&(this->Picture).Window.Base.field_0xd2c;
  if (local_10 != 0) {
    local_c = &(this->Picture).Window.Base.field_0x5f0;
    local_10 = Gregorian::meth_0x4b1490((Gregorian *)local_c);
    if (local_10 != 0) {
      local_28 = *(float *)&(this->Picture).Window.Base.field_0xd24;
      local_24 = *(float *)&(this->Picture).Window.Base.field_0xd28;
      (*((this->Picture).Window.Base.vftptr_0x0)->virt_meth_0x4b27c0_20)(this);
      cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&uStack_38,&uStack_34);
      uVar10 = FUN_00616e24();
      fVar6 = (float)uVar10;
      uVar10 = FUN_00616e24();
      fVar3 = (float)iStack_30;
      uVar11 = FUN_00616e24();
      fVar4 = (float)(int)fStack_2c;
      uVar12 = FUN_00616e24();
      dVar1 = (this->Picture).Window.Base.mbr_0xd30;
      dVar2 = (this->Picture).Window.Base.mbr_0xd34;
      dVar13 = 0;
      if (0 < (int)dVar1) {
        dVar13 = dVar1;
      }
      iStack_40 = (int)uVar11;
      if ((int)((int)fVar6 + dVar1) < (int)uVar11) {
        iStack_40 = (int)fVar6 + dVar1;
      }
      dVar14 = 0;
      if (0 < (int)dVar2) {
        dVar14 = dVar2;
      }
      uVar9 = dVar2 + (int)uVar10;
      uVar7 = (uint)uVar12;
      if ((int)uVar9 < (int)(uint)uVar12) {
        uVar7 = uVar9;
      }
      local_10 = iStack_40 - dVar13;
      if ((0 < (int)local_10) && (local_c = (undefined *)(uVar7 - dVar14), 0 < (int)local_c)) {
        local_28 = ((float)dVar13 / fVar3) * (float)this->mbr_0xf84;
        local_24 = ((float)dVar14 / fVar4) * (float)this->mbr_0xf84;
        fVar3 = ((float)iStack_40 / fVar3) * (float)this->mbr_0xf84;
        *piStack_4 = dVar13 - dVar1;
        *unaff_retaddr = dVar14 - (this->Picture).Window.Base.mbr_0xd34;
        dVar1 = (this->Picture).Window.Base.mbr_0xd34;
        *param_1 = (iStack_40 - (this->Picture).Window.Base.mbr_0xd30) - *piStack_4;
        *param_2 = (float)((uVar7 - dVar1) - *unaff_retaddr);
        GUI::Base::virt_meth_0x4b2750((Base *)this,&uStack_20,&fStack_1c);
        uVar10 = FUN_00616e24();
        *piStack_4 = (int)uVar10;
        uVar10 = FUN_00616e24();
        fVar4 = fStack_2c;
        *unaff_retaddr = (int)uVar10;
        piStack_4 = (int *)iStack_30;
        iVar8 = (**(code **)(*DAT_00707ce4 + 0xd8))(pcStack_18);
        if (iVar8 != 0) {
          if (*(int *)(iVar8 + 0x28) < 1) {
            fStack_8 = 0.0;
            piStack_4 = (int *)0x0;
          }
          else {
            fStack_8 = *(float *)(*(int *)(iVar8 + 0x24) + 0x1c);
            piStack_4 = *(int **)(*(int *)(iVar8 + 0x24) + 0x20);
          }
        }
        if (this->mbr_0xf8d == 0) {
          *param_10 = unaff_EBX;
          *param_11 = dVar13;
          *param_12 = iStack_14;
          *param_13 = local_10;
          *param_2 = ((float)*param_10 / (float)(int)fStack_8) * (float)this->mbr_0xf84;
          *param_3 = ((float)*param_11 / (float)(int)piStack_4) * (float)this->mbr_0xf84;
          *param_4 = ((float)*param_12 / (float)(int)fStack_8) * (float)this->mbr_0xf84;
          *param_5 = ((float)*param_13 / (float)(int)piStack_4) * (float)this->mbr_0xf84;
        }
        else {
          cls_0x4b15d0::meth_0x4b15d0
                    (pcStack_18,(undefined4 *)&stack0x00000000,&param_1,&pcStack_18,&fStack_1c);
          fVar5 = (float)(int)fStack_8;
          fVar4 = fVar4 * (1.0 / fVar5);
          fStack_8 = (float)(int)piStack_4;
          param_1 = (int *)((float)param_1 * (1.0 / fStack_8));
          piStack_4 = (int *)((1.0 / fVar5) * (float)pcStack_18);
          fStack_1c = (1.0 / fStack_8) * fStack_1c;
          *param_2 = (float)piStack_4 * fStack_2c + fVar4;
          *param_3 = fStack_1c * local_28 + (float)param_1;
          *param_4 = ((float)piStack_4 * fVar6 + fVar4) - *param_2;
          *param_5 = (fStack_1c * fVar3 + (float)param_1) - *param_3;
          uVar10 = FUN_00616e24();
          *param_10 = (int)uVar10;
          uVar10 = FUN_00616e24();
          *param_11 = (int)uVar10;
          uVar10 = FUN_00616e24();
          *param_12 = (int)uVar10;
          uVar10 = FUN_00616e24();
          *param_13 = (int)uVar10;
        }
        *param_6 = fStack_2c;
        *param_7 = local_28;
        *param_8 = fVar6 - *param_6;
        *param_9 = fVar3 - *param_7;
        return CONCAT31((int3)((uint)param_9 >> 8),1);
      }
      return uVar7 & 0xffffff00;
    }
  }
  return local_10 & 0xffffff00;
}



undefined4 __thiscall
AreaMapWindow::meth_0x41dbd0(AreaMapWindow *this,int *param_1,uint *param_2,uint *param_3)

{
  uint in_EAX;
  uint uVar1;
  ulonglong uVar2;
  int *unaff_retaddr;
  undefined4 local_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  int iStack_4;
  
  if ((param_1 != (int *)0x0) &&
     (in_EAX = *(uint *)&(this->Picture).Window.Base.field_0xd2c, in_EAX != 0)) {
    if (param_1[0x18] == 0) {
      cls_0x57c610::meth_0x57c610((cls_0x57c610 *)param_1);
    }
    (*((this->Picture).Window.Base.vftptr_0x0)->virt_meth_0x4b27c0_20)(this);
    cls_0x4b28a0::meth_0x4b28c0
              ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(undefined4 *)&stack0xffffffe0,&local_1c);
    uVar2 = FUN_00616e24();
    iStack_4 = (int)uVar2;
    uVar2 = FUN_00616e24();
    in_EAX = (uint)uVar2;
    meth_0x41d2d0(this,(float)param_1[0x14],(float)param_1[0x16],&fStack_18,&fStack_14);
    uVar2 = FUN_00616e24();
    *unaff_retaddr = (int)uVar2;
    uVar2 = FUN_00616e24();
    *param_1 = (int)uVar2;
    *unaff_retaddr = *unaff_retaddr - ((this->Picture).Window.Base.mbr_0xd30 + param_1[8]);
    *param_1 = *param_1 - ((this->Picture).Window.Base.mbr_0xd34 + param_1[9]);
    *param_2 = param_1[10];
    *param_3 = param_1[0xb];
    if (*unaff_retaddr < 0) {
      uVar1 = *unaff_retaddr + *param_2;
      *param_2 = uVar1 & ((int)uVar1 < 0) - 1;
      *unaff_retaddr = 0;
    }
    if (iStack_4 <= (int)(*param_2 + *unaff_retaddr)) {
      *param_2 = iStack_4 - *unaff_retaddr & (iStack_4 - *unaff_retaddr < 0) - 1;
    }
    if (*param_1 < 0) {
      uVar1 = *param_1 + *param_3;
      *param_3 = uVar1 & ((int)uVar1 < 0) - 1;
      *param_1 = 0;
    }
    if ((int)in_EAX <= (int)(*param_3 + *param_1)) {
      in_EAX = in_EAX - *param_1 & ((int)(in_EAX - *param_1) < 0) - 1;
      *param_3 = in_EAX;
    }
    if ((0 < (int)*param_2) && (0 < (int)*param_3)) {
      GUI::Base::virt_meth_0x4b2750((Base *)this,&uStack_10,auStack_c);
      uVar2 = FUN_00616e24();
      *unaff_retaddr = (int)uVar2;
      uVar2 = FUN_00616e24();
      *param_1 = (int)uVar2;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



uint __thiscall AreaMapWindow::meth_0x41dd90(AreaMapWindow *this,float *param_1,float *param_2)

{
  float fVar1;
  float in_EAX;
  int iVar2;
  float fVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *unaff_retaddr;
  float fStack_28;
  int iVar10;
  int iStack_1c;
  float fStack_18;
  int iStack_14;
  int iStack_10;
  float fStack_c;
  float fStack_8;
  float *pfStack_4;
  
  if ((param_1 != (float *)0x0) &&
     (in_EAX = *(float *)&(this->Picture).Window.Base.field_0xd2c, in_EAX != 0.0)) {
    if (param_1[0x18] == 0.0) {
      fStack_28 = 6.048855e-39;
      cls_0x57c610::meth_0x57c610((cls_0x57c610 *)param_1);
    }
    in_EAX = param_1[0x18];
    if (in_EAX != 0.0) {
      fStack_28 = in_EAX;
      in_EAX = (float)(**(code **)(*DAT_00707ce4 + 0xd8))();
      if (in_EAX != 0.0) {
        fStack_c = param_1[0x19];
        fStack_8 = param_1[0x1a];
        (*((this->Picture).Window.Base.vftptr_0x0)->virt_meth_0x4b27c0_20)(this);
        cls_0x4b28a0::meth_0x4b28c0
                  ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&iStack_1c,
                   (undefined4 *)&stack0xffffffe0);
        uVar8 = FUN_00616e24();
        uVar9 = FUN_00616e24();
        fStack_8 = (float)uVar9;
        meth_0x41d2d0(this,param_1[0x14],param_1[0x16],&fStack_28,&fStack_18);
        uVar9 = FUN_00616e24();
        iVar6 = (int)uVar9 + (this->Picture).Window.Base.mbr_0xd30 + (int)param_1[8];
        iVar7 = -iVar6;
        uVar9 = FUN_00616e24();
        iVar2 = (int)uVar9 + (this->Picture).Window.Base.mbr_0xd34 + (int)param_1[9];
        fVar3 = param_1[10];
        fVar1 = param_1[0xb];
        in_EAX = (float)-iVar2;
        iStack_1c = 0;
        iVar10 = 0;
        fStack_28 = fVar3;
        if (0 < iVar6) {
          fStack_28 = (float)((iVar7 + (int)fVar3 < 0) - 1 & iVar7 + (int)fVar3);
          iVar7 = 0;
          iVar10 = (int)fVar3 - (int)fStack_28;
        }
        if ((int)uVar8 <= (int)fStack_28 + iVar7) {
          uVar5 = (int)uVar8 - iVar7;
          fStack_28 = (float)(((int)uVar5 < 0) - 1 & uVar5);
        }
        fVar3 = fVar1;
        if (0 < iVar2) {
          fVar3 = (float)(((int)fVar1 + (int)in_EAX < 0) - 1 & (int)fVar1 + (int)in_EAX);
          in_EAX = 0.0;
          iStack_1c = (int)fVar1 - (int)fVar3;
        }
        if ((int)fStack_8 <= (int)fVar3 + (int)in_EAX) {
          in_EAX = (float)(((int)fStack_8 - (int)in_EAX < 0) - 1 & (int)fStack_8 - (int)in_EAX);
          fVar3 = in_EAX;
        }
        if ((0 < (int)fStack_28) && (0 < (int)fVar3)) {
          *pfStack_4 = (float)iVar10 / (float)iStack_14;
          *unaff_retaddr = (float)iStack_1c / (float)iStack_10;
          *param_1 = (float)(int)fStack_28 / (float)iStack_14;
          fVar1 = (float)(int)fVar3 / (float)iStack_10;
          *param_2 = fVar1;
          fVar3 = *param_1;
          uVar4 = (undefined2)((uint)param_1 >> 0x10);
          in_EAX = (float)CONCAT22(uVar4,(ushort)(fVar3 < 0.0) << 8 | (ushort)NAN(fVar3) << 10 |
                                         (ushort)(fVar3 == 0.0) << 0xe);
          if ((fVar3 < 0.0 == (fVar3 == 0.0)) &&
             (in_EAX = (float)CONCAT22(uVar4,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                                             (ushort)(fVar1 == 0.0) << 0xe),
             fVar1 < 0.0 == (fVar1 == 0.0))) {
            return CONCAT31((int3)((uint)in_EAX >> 8),1);
          }
        }
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



void __thiscall AreaMapWindow::meth_0x41e1f0(AreaMapWindow *this)

{
  dword dVar1;
  dword dVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  cls_0x41d060::meth_0x4ae280((cls_0x41d060 *)this->mbr_0xee0);
  if ((this->mbr_0xfa1 != 0) && (*(int *)&(this->Picture).Window.Base.field_0xd2c != 0)) {
    iVar4 = Gregorian::meth_0x4b1490((Gregorian *)&(this->Picture).Window.Base.field_0x5f0);
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*DAT_00707ce4 + 0xd8))(iVar4);
      if (iVar4 != 0) {
        (*(this->Picture).Window.Base.vftptr_0x0[1].virt_meth_0x4b2850_28)
                  ((Base *)this,(int)&uStack_48);
        (*((this->Picture).Window.Base.vftptr_0x0)->virt_meth_0x4b27c0_20)(this);
        cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&uStack_48,&uStack_44);
        uVar7 = FUN_00616e24();
        iVar4 = (int)uVar7;
        uVar7 = FUN_00616e24();
        iVar5 = (int)uVar7;
        uVar7 = FUN_00616e24();
        iVar6 = (int)uVar7;
        uVar7 = FUN_00616e24();
        meth_0x41d2d0(this,(float)this->mbr_0xf10,(float)this->mbr_0xf18,&fStack_34,&fStack_38);
        meth_0x41d2d0(this,(float)this->mbr_0xf1c,(float)this->mbr_0xf24,&fStack_3c,&fStack_40);
        meth_0x41d2d0(this,(float)this->mbr_0xf28,(float)this->mbr_0xf30,&fStack_30,&fStack_2c);
        meth_0x41d2d0(this,(float)this->mbr_0xf34,(float)this->mbr_0xf3c,&fStack_28,&fStack_24);
        uVar8 = FUN_00616e24();
        uVar9 = FUN_00616e24();
        uVar10 = FUN_00616e24();
        uVar11 = FUN_00616e24();
        fStack_40 = (float)uVar11;
        uVar11 = FUN_00616e24();
        fStack_38 = (float)uVar11;
        uVar11 = FUN_00616e24();
        fStack_3c = (float)uVar11;
        uVar11 = FUN_00616e24();
        fStack_28 = (float)uVar11;
        uVar11 = FUN_00616e24();
        fStack_34 = (float)uVar11;
        cls_0x41d060::meth_0x4ae100((cls_0x41d060 *)this->mbr_0xee0,0xff,0,0,0x80);
        *(undefined4 *)(this->mbr_0xee0 + 8) = 1;
        iStack_18 = iVar6 + iVar4;
        iStack_14 = (int)uVar7 + iVar5;
        iStack_20 = iVar4;
        iStack_1c = iVar5;
        cls_0x41d060::meth_0x4ae0a0((cls_0x41d060 *)this->mbr_0xee0,&iStack_20);
        cls_0x41d060::meth_0x41d060
                  ((cls_0x41d060 *)this->mbr_0xee0,(int)uVar8,(int)uVar9,(int)uVar10,fStack_40);
        cls_0x41d060::meth_0x41d060
                  ((cls_0x41d060 *)this->mbr_0xee0,(int)uVar10,fStack_40,fStack_38,fStack_3c);
        fVar3 = fStack_28;
        cls_0x41d060::meth_0x41d060
                  ((cls_0x41d060 *)this->mbr_0xee0,fStack_38,fStack_3c,fStack_28,fStack_34);
        cls_0x41d060::meth_0x41d060
                  ((cls_0x41d060 *)this->mbr_0xee0,fVar3,fStack_34,(int)uVar8,(int)uVar9);
        dVar1 = (this->Picture).Window.Base.mbr_0xd34;
        dVar2 = this->mbr_0xee0;
        *(dword *)(dVar2 + 0x1c) = iVar4 - (this->Picture).Window.Base.mbr_0xd30;
        *(dword *)(dVar2 + 0x20) = iVar5 - dVar1;
        this->mbr_0xf70 = 1;
      }
    }
  }
  return;
}



float10 * __thiscall
AreaMapWindow::meth_0x41e6b0
          (AreaMapWindow *this,float10 *__return_storage_ptr__,float param_1,float10 *param_2)

{
  float fVar1;
  int iVar2;
  float10 *pfVar3;
  int iVar4;
  float unaff_EDI;
  int *piVar5;
  cls_0x41d0e0 **ppcVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  if (this->mbr_0xef4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)(this->mbr_0xef8 - this->mbr_0xef4) >> 2;
  }
  fVar1 = param_1 / (float)(iVar2 + 4 + this->mbr_0xeec);
  param_1 = fVar1 + (float)__return_storage_ptr__;
  if (this->mbr_0xfa1 != 0) {
    (**(code **)(*(int *)this->mbr_0xee0 + 0xc))(param_1,fVar1);
    param_1 = fVar1 + param_1;
  }
  if ((int **)this->mbr_0xee8 == (int **)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)this->mbr_0xee8;
  }
  if (piVar5 != (int *)this->mbr_0xee8) {
    do {
      cls_0x41d0e0::meth_0x41d0e0((cls_0x41d0e0 *)piVar5[2],(float10 *)param_1,fVar1,unaff_EDI);
      piVar5 = (int *)*piVar5;
      param_1 = (float)(extraout_ST0 + (float10)fVar1);
    } while (piVar5 != (int *)this->mbr_0xee8);
  }
  if ((this->mbr_0xfa0 != 0) &&
     (ppcVar6 = (cls_0x41d0e0 **)this->mbr_0xef4, ppcVar6 != (cls_0x41d0e0 **)this->mbr_0xef8)) {
    do {
      cls_0x41d0e0::meth_0x41d0e0(*ppcVar6,(float10 *)param_1,fVar1,unaff_EDI);
      ppcVar6 = ppcVar6 + 1;
      param_1 = (float)(extraout_ST0_00 + (float10)fVar1);
    } while (ppcVar6 != (cls_0x41d0e0 **)this->mbr_0xef8);
  }
  if (this->mbr_0xf8e != 0) {
    iVar2 = 0;
    if (0 < (int)this->mbr_0xec8) {
      iVar4 = 0;
      do {
        *(float *)(this->mbr_0xec4 + 8 + iVar4) = param_1;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x24;
      } while (iVar2 < (int)this->mbr_0xec8);
    }
    param_1 = fVar1 + param_1;
  }
  pfVar3 = (float10 *)0x0;
  if (0 < (int)this->mbr_0xdf4) {
    iVar2 = 0;
    do {
      *(float *)(iVar2 + 8 + this->mbr_0xdf0) = param_1;
      pfVar3 = (float10 *)((int)pfVar3 + 1);
      iVar2 = iVar2 + 0x24;
    } while ((int)pfVar3 < (int)this->mbr_0xdf4);
  }
  return pfVar3;
}



void * __thiscall
AreaMapWindow::meth_0x41e820(AreaMapWindow *this,int param_1,int param_2,int param_3)

{
  AreaMapIcon *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *extraout_EDX;
  int *piVar4;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if ((int **)this->mbr_0xee8 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)this->mbr_0xee8;
  }
  local_4 = (int *)this->mbr_0xee8;
  if (piVar4 != local_4) {
    do {
      this_00 = (AreaMapIcon *)piVar4[2];
      AreaMapIcon::Get_mbrs_0xc_0x10_0x14_0x18(this_00,&param_2,&local_c,&param_1,&local_8);
      if ((((param_2 <= iVar1) && (iVar1 < param_2 + param_1)) && (local_c <= iVar2)) &&
         (iVar2 < local_c + local_8)) {
        if (param_3 != 0) {
          uVar3 = AreaMapIcon::Get_mbr_0x38(this_00);
          *extraout_EDX = uVar3;
        }
        return this_00;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != local_4);
  }
  return (void *)0x0;
}



undefined4 __thiscall
AreaMapWindow::meth_0x41e900(AreaMapWindow *this,int param_1,int param_2,int param_3)

{
  AreaMapIcon *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *extraout_EDX;
  AreaMapIcon **ppAVar4;
  int iStack_c;
  int iStack_8;
  AreaMapIcon **ppAStack_4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if (this->mbr_0xfa0 == 0) {
    return 0;
  }
  ppAVar4 = (AreaMapIcon **)this->mbr_0xef4;
  ppAStack_4 = (AreaMapIcon **)this->mbr_0xef8;
  if (ppAVar4 != ppAStack_4) {
    do {
      this_00 = *ppAVar4;
      AreaMapIcon::Get_mbrs_0xc_0x10_0x14_0x18(this_00,&param_2,&iStack_c,&param_1,&iStack_8);
      if ((((param_2 <= iVar1) && (iVar1 < param_2 + param_1)) && (iStack_c <= iVar2)) &&
         (iVar2 < iStack_c + iStack_8)) {
        if (param_3 != 0) {
          uVar3 = AreaMapIcon::Get_mbr_0x38(this_00);
          *extraout_EDX = uVar3;
        }
        return this_00;
      }
      ppAVar4 = ppAVar4 + 1;
    } while (ppAVar4 != ppAStack_4);
  }
  return 0;
}



void __thiscall AreaMapWindow::meth_0x41e9b0(AreaMapWindow *this)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  float *pfVar7;
  dword *pdVar8;
  int unaff_EBX;
  dword unaff_EBP;
  float fVar9;
  dword unaff_EDI;
  bool bVar10;
  ulonglong uVar11;
  int iStack_144;
  undefined *puStack_140;
  undefined *puStack_13c;
  undefined4 *puStack_138;
  undefined4 uStack_134;
  undefined *puStack_130;
  undefined4 *puStack_12c;
  int iStack_128;
  undefined *puStack_124;
  undefined *puStack_120;
  undefined4 *puStack_11c;
  undefined4 uStack_118;
  undefined4 *puStack_114;
  undefined *puStack_110;
  undefined4 uStack_10c;
  undefined *puStack_108;
  undefined *puStack_104;
  undefined *puStack_100;
  undefined4 uStack_fc;
  float fVar12;
  int iVar13;
  undefined *puVar14;
  int iStack_c4;
  undefined4 local_bc [5];
  undefined4 local_a8;
  undefined4 auStack_a4 [2];
  undefined4 uStack_9c;
  undefined auStack_98 [4];
  undefined auStack_94 [4];
  undefined auStack_90 [4];
  undefined auStack_8c [4];
  undefined auStack_88 [4];
  undefined auStack_84 [4];
  undefined auStack_80 [4];
  undefined auStack_7c [4];
  undefined auStack_78 [4];
  undefined auStack_74 [116];
  
  if (this->mbr_0xfa1 != 0) {
    cls_0x4b28a0::meth_0x4b28a0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_a8,local_bc);
    uStack_fc = 0x41e9fa;
    iVar3 = FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x2c),0,&Client::RTTI_Type_Descriptor,
                         &GameClient::RTTI_Type_Descriptor,0);
    piVar4 = *(int **)(*(int *)(iVar3 + 0xa0) + 0x10);
    if ((piVar4 != (int *)0x0) &&
       (cVar2 = GameActionOperateContainer::Get_mbr_0x20
                          ((GameActionOperateContainer *)(*(int *)(*piVar4 + 4) + (int)piVar4)),
       cVar2 == '\0')) {
      (**(code **)(*(int *)piVar4[1] + 0x48))();
      cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&uStack_9c,auStack_a4);
      uVar11 = FUN_00616e24();
      local_bc[0] = (undefined4)uVar11;
    }
    if (DAT_0070bd98 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(DAT_0070bd98 + 0xc);
    }
    piVar4 = (int *)(**(code **)(*piVar4 + 0xc))();
    if ((piVar4 != (int *)0x0) &&
       (piVar5 = (int *)cls_0x581190::meth_0x581190
                                  (*(cls_0x581190 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x74)),
       piVar5 != (int *)0x0)) {
      uStack_fc = 0x41ea9f;
      FUN_004010a0(auStack_80,0x20,4,ctor_0x41d030);
      puVar14 = auStack_80;
      iVar13 = 0;
      (**(code **)(*piVar5 + 0x1c))();
      fVar12 = 0.0;
      fVar9 = 1.401298e-45;
      uStack_fc = 1;
      puStack_100 = &stack0xffffff20;
      puStack_104 = auStack_8c;
      puStack_108 = (undefined *)0x41eac8;
      iVar3 = (**(code **)(*piVar4 + 0x58))();
      if (iVar3 == 0) {
        puStack_108 = (undefined *)0x0;
        uStack_10c = 0;
        puStack_110 = &stack0xffffff10;
        puStack_114 = &uStack_9c;
        uStack_118 = 0x41eb09;
        iVar3 = (**(code **)(*piVar4 + 0x58))();
        if (iVar3 != 0) {
          this->mbr_0xf10 = (dword)puVar14;
          this->mbr_0xf14 = unaff_EBP;
          this->mbr_0xf18 = unaff_EDI;
        }
      }
      else {
        this->mbr_0xf10 = (dword)puVar14;
        this->mbr_0xf14 = unaff_EBP;
        this->mbr_0xf18 = unaff_EDI;
      }
      puStack_108 = auStack_7c;
      puStack_110 = (undefined *)(iStack_c4 + -1);
      uStack_10c = 0;
      puStack_114 = (undefined4 *)0x41eb50;
      (**(code **)(*piVar5 + 0x1c))();
      puStack_114 = (undefined4 *)0x0;
      uStack_118 = 1;
      puStack_11c = &uStack_fc;
      puStack_120 = auStack_88;
      puStack_124 = (undefined *)0x41eb67;
      iVar3 = (**(code **)(*piVar4 + 0x58))();
      if (iVar3 == 0) {
        puStack_124 = (undefined *)0x0;
        iStack_128 = 0;
        puStack_12c = &uStack_10c;
        puStack_130 = auStack_98;
        uStack_134 = 0x41ebab;
        iVar3 = (**(code **)(*piVar4 + 0x58))();
        if (iVar3 != 0) {
          this->mbr_0xf1c = (dword)puStack_108;
          this->mbr_0xf20 = (dword)puStack_104;
          this->mbr_0xf24 = (dword)puStack_100;
        }
      }
      else {
        this->mbr_0xf1c = (dword)puStack_108;
        this->mbr_0xf20 = (dword)puStack_104;
        this->mbr_0xf24 = (dword)puStack_100;
      }
      puStack_124 = auStack_78;
      iStack_128 = iVar13 + -1;
      puStack_12c = (undefined4 *)(unaff_EBX + -1);
      puStack_130 = (undefined *)0x41ebf6;
      (**(code **)(*piVar5 + 0x1c))();
      puStack_130 = (undefined *)0x0;
      uStack_134 = 1;
      puStack_138 = &uStack_118;
      puStack_13c = auStack_84;
      puStack_140 = (undefined *)0x41ec0d;
      iVar3 = (**(code **)(*piVar4 + 0x58))();
      if (iVar3 == 0) {
        puStack_140 = (undefined *)0x0;
        iStack_144 = 0;
        iVar3 = (**(code **)(*piVar4 + 0x58))(auStack_94,&iStack_128);
        if (iVar3 == 0) {
          fVar9 = 2.802597e-45;
        }
        else {
          this->mbr_0xf28 = (dword)puStack_124;
          this->mbr_0xf2c = (dword)puStack_120;
          this->mbr_0xf30 = (dword)puStack_11c;
        }
      }
      else {
        this->mbr_0xf28 = (dword)puStack_124;
        this->mbr_0xf2c = (dword)puStack_120;
        this->mbr_0xf30 = (dword)puStack_11c;
        fVar9 = 0.0;
      }
      puStack_140 = auStack_74;
      iStack_144 = (int)puStack_110 + -1;
      puStack_104 = (undefined *)fVar9;
      (**(code **)(*piVar5 + 0x1c))(0);
      iVar3 = (**(code **)(*piVar4 + 0x58))(auStack_80,&uStack_134,1,0);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*piVar4 + 0x58))(auStack_90,&iStack_144,0,0);
        if (iVar3 == 0) {
          puStack_11c = (undefined4 *)0x2;
        }
        else {
          this->mbr_0xf34 = (dword)puStack_140;
          this->mbr_0xf38 = (dword)puStack_13c;
          this->mbr_0xf3c = (dword)puStack_138;
          puStack_11c = (undefined4 *)0x1;
        }
      }
      else {
        this->mbr_0xf34 = (dword)puStack_140;
        this->mbr_0xf38 = (dword)puStack_13c;
        this->mbr_0xf3c = (dword)puStack_138;
        puStack_11c = (undefined4 *)0x0;
      }
      fVar1 = 0.0;
      bVar10 = iStack_128 == 0;
      if (bVar10) {
        fVar1 = (float)this->mbr_0xf14;
      }
      uVar6 = (uint)bVar10;
      if (puStack_124 == (undefined *)0x0) {
        fVar1 = fVar1 + (float)this->mbr_0xf20;
        uVar6 = bVar10 + 1;
      }
      if (fVar9 == 0.0) {
        fVar1 = fVar1 + (float)this->mbr_0xf2c;
        uVar6 = uVar6 + 1;
      }
      if (puStack_11c == (undefined4 *)0x0) {
        fVar1 = fVar1 + (float)this->mbr_0xf38;
        uVar6 = uVar6 + 1;
      }
      if (uVar6 == 0) {
        (**(code **)(*piVar4 + 0x14))(&puStack_108);
        fVar1 = (fVar12 - (float)puStack_104) * 0.5 + (float)puStack_104;
      }
      else {
        fVar1 = fVar1 / (float)uVar6;
      }
      iVar3 = 0;
      pfVar7 = (float *)&stack0xffffff20;
      pdVar8 = &this->mbr_0xf14;
      do {
        if ((0 < (&iStack_128)[iVar3]) && ((&iStack_128)[iVar3] < 3)) {
          fVar9 = (fVar1 - pfVar7[-3]) / *pfVar7;
          pdVar8[-1] = (dword)(fVar9 * pfVar7[-1] + pfVar7[-4]);
          *pdVar8 = (dword)fVar1;
          pdVar8[1] = (dword)(fVar9 * pfVar7[1] + pfVar7[-2]);
        }
        iVar3 = iVar3 + 1;
        pdVar8 = pdVar8 + 3;
        pfVar7 = pfVar7 + 8;
      } while (iVar3 < 4);
      if (((((this->mbr_0xf0d != 0) ||
            ((NAN((float)this->mbr_0xf10) || NAN((float)this->mbr_0xf40)) ==
             ((float)this->mbr_0xf10 == (float)this->mbr_0xf40))) ||
           ((NAN((float)this->mbr_0xf14) || NAN((float)this->mbr_0xf44)) ==
            ((float)this->mbr_0xf14 == (float)this->mbr_0xf44))) ||
          ((((NAN((float)this->mbr_0xf18) || NAN((float)this->mbr_0xf48)) ==
             ((float)this->mbr_0xf18 == (float)this->mbr_0xf48) ||
            ((NAN((float)this->mbr_0xf1c) || NAN((float)this->mbr_0xf4c)) ==
             ((float)this->mbr_0xf1c == (float)this->mbr_0xf4c))) ||
           (((NAN((float)this->mbr_0xf20) || NAN((float)this->mbr_0xf50)) ==
             ((float)this->mbr_0xf20 == (float)this->mbr_0xf50) ||
            (((NAN((float)this->mbr_0xf24) || NAN((float)this->mbr_0xf54)) ==
              ((float)this->mbr_0xf24 == (float)this->mbr_0xf54) ||
             ((NAN((float)this->mbr_0xf28) || NAN((float)this->mbr_0xf58)) ==
              ((float)this->mbr_0xf28 == (float)this->mbr_0xf58))))))))) ||
         (((NAN((float)this->mbr_0xf2c) || NAN((float)this->mbr_0xf5c)) ==
           ((float)this->mbr_0xf2c == (float)this->mbr_0xf5c) ||
          (((((NAN((float)this->mbr_0xf30) || NAN((float)this->mbr_0xf60)) ==
              ((float)this->mbr_0xf30 == (float)this->mbr_0xf60) ||
             ((NAN((float)this->mbr_0xf34) || NAN((float)this->mbr_0xf64)) ==
              ((float)this->mbr_0xf34 == (float)this->mbr_0xf64))) ||
            ((NAN((float)this->mbr_0xf38) || NAN((float)this->mbr_0xf68)) ==
             ((float)this->mbr_0xf38 == (float)this->mbr_0xf68))) ||
           ((NAN((float)this->mbr_0xf3c) || NAN((float)this->mbr_0xf6c)) ==
            ((float)this->mbr_0xf3c == (float)this->mbr_0xf6c))))))) {
        meth_0x41e1f0(this);
        this->mbr_0xf40 = this->mbr_0xf10;
        this->mbr_0xf44 = this->mbr_0xf14;
        this->mbr_0xf48 = this->mbr_0xf18;
        this->mbr_0xf4c = this->mbr_0xf1c;
        this->mbr_0xf50 = this->mbr_0xf20;
        this->mbr_0xf54 = this->mbr_0xf24;
        this->mbr_0xf58 = this->mbr_0xf28;
        this->mbr_0xf5c = this->mbr_0xf2c;
        this->mbr_0xf60 = this->mbr_0xf30;
        this->mbr_0xf64 = this->mbr_0xf34;
        this->mbr_0xf68 = this->mbr_0xf38;
        this->mbr_0xf6c = this->mbr_0xf3c;
      }
    }
  }
  return;
}



void __thiscall
AreaMapWindow::meth_0x41ef80
          (AreaMapWindow *this,undefined param_1,undefined4 param_2,undefined4 param_3)

{
  Gregorian *this_00;
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  AreaMapIcon *this_01;
  AreaMapIcon *this_02;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_18,&local_14);
  uVar4 = FUN_00616e24();
  uVar5 = FUN_00616e24();
  puVar2 = (undefined4 *)this->mbr_0xee8;
  bVar1 = false;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)this->mbr_0xee8) {
    do {
      this_00 = (Gregorian *)puVar2[2];
      AreaMapIcon::Get_mbrs_0xc_0x10_0x14_0x18
                ((AreaMapIcon *)this_00,&local_10,&local_8,&local_c,&local_4);
      if ((((bVar1) || (this->mbr_0xf7c == 0)) || (this->mbr_0xf0c != 0)) ||
         ((((int)uVar4 < local_10 || (local_10 + local_c <= (int)uVar4)) ||
          (((int)uVar5 < local_8 || (local_8 + local_4 <= (int)uVar5)))))) {
        uVar3 = Gregorian::Get_mbr_0x30(this_00);
        AreaMapIcon::meth_0x41d190(this_02,uVar3 & 0xfffffffe);
      }
      else {
        uVar3 = Gregorian::Get_mbr_0x30(this_00);
        AreaMapIcon::meth_0x41d190(this_01,uVar3 | 1);
        bVar1 = true;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)this->mbr_0xee8);
  }
  return;
}



void __thiscall
AreaMapWindow::meth_0x41f080
          (AreaMapWindow *this,undefined param_1,undefined4 param_2,undefined4 param_3)

{
  Gregorian *this_00;
  bool bVar1;
  uint uVar2;
  AreaMapIcon *this_01;
  AreaMapIcon *this_02;
  Gregorian **ppGVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (this->mbr_0xfa0 != 0) {
    cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_18,&local_14);
    uVar4 = FUN_00616e24();
    uVar5 = FUN_00616e24();
    ppGVar3 = (Gregorian **)this->mbr_0xef4;
    bVar1 = false;
    this->mbr_0xf0c = 0;
    if (ppGVar3 != (Gregorian **)this->mbr_0xef8) {
      do {
        this_00 = *ppGVar3;
        AreaMapIcon::Get_mbrs_0xc_0x10_0x14_0x18
                  ((AreaMapIcon *)this_00,&local_10,&local_8,&local_c,&local_4);
        if ((((bVar1) || (this->mbr_0xf8c == 0)) || ((int)uVar4 < local_10)) ||
           (((local_10 + local_c <= (int)uVar4 || ((int)uVar5 < local_8)) ||
            (local_8 + local_4 <= (int)uVar5)))) {
          uVar2 = Gregorian::Get_mbr_0x30(this_00);
          AreaMapIcon::meth_0x41d190(this_02,uVar2 & 0xfffffffe);
        }
        else {
          uVar2 = Gregorian::Get_mbr_0x30(this_00);
          AreaMapIcon::meth_0x41d190(this_01,uVar2 | 1);
          bVar1 = true;
          this->mbr_0xf0c = 1;
        }
        ppGVar3 = ppGVar3 + 1;
      } while (ppGVar3 != (Gregorian **)this->mbr_0xef8);
    }
  }
  return;
}



void __thiscall AreaMapWindow::meth_0x41f480(AreaMapWindow *this,char param_1)

{
  undefined4 unaff_ESI;
  undefined local_10;
  undefined4 local_c;
  
  this->mbr_0xf7c = param_1 != '\0';
  cls_0x4b28a0::meth_0x4b28e0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(undefined4 *)&local_10);
  meth_0x41f080(this,local_10,local_c,unaff_ESI);
  meth_0x41ef80(this,local_10,local_c,unaff_ESI);
  return;
}



void __thiscall AreaMapWindow::meth_0x41f4d0(AreaMapWindow *this,char param_1)

{
  undefined4 unaff_ESI;
  undefined local_10;
  undefined4 local_c;
  
  this->mbr_0xf8c = param_1 != '\0';
  cls_0x4b28a0::meth_0x4b28e0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(undefined4 *)&local_10);
  meth_0x41f080(this,local_10,local_c,unaff_ESI);
  meth_0x41ef80(this,local_10,local_c,unaff_ESI);
  return;
}



void __thiscall AreaMapWindow::meth_0x41f6e0(AreaMapWindow *this)

{
  int **ppiVar1;
  int *piVar2;
  AreaMapWindow *local_4;
  
  if ((int **)this->mbr_0xee8 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0xee8;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0xee8) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0xee8);
  }
  ppiVar1 = (int **)this->mbr_0xee8;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0xee4,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0xee4,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



AreaMapWindow * __thiscall AreaMapWindow::~AreaMapWindow(AreaMapWindow *this)

{
  void *pvVar1;
  int **ppiVar2;
  int *piVar3;
  int *piStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c674;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Picture).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&AreaMapWindow__vftable_650f84_00650f84;
  *(undefined ***)&(this->Picture).Window.Base.field_0x18 = &PTR_virt_meth_0x4209c0_00650f7c;
  local_4 = 5;
  if ((void *)this->mbr_0xdf0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xdf0);
  }
  if ((void *)this->mbr_0xdfc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xdfc);
  }
  pvVar1 = (void *)this->mbr_0xda4;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x28,*(int *)((int)pvVar1 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((undefined4 *)this->mbr_0xda8 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xda8)(1);
    this->mbr_0xda8 = 0;
  }
  if ((void *)this->mbr_0xec4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xec4);
  }
  if ((void *)this->mbr_0xed0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xed0);
  }
  pvVar1 = (void *)this->mbr_0xe78;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x28,*(int *)((int)pvVar1 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((undefined4 *)this->mbr_0xe7c != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xe7c)(1);
    this->mbr_0xe7c = 0;
  }
  meth_0x41f6e0(this);
  piVar3 = (int *)this->mbr_0xef4;
  if (piVar3 != (int *)this->mbr_0xef8) {
    do {
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)*piVar3)(1);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)this->mbr_0xef8);
  }
  if ((undefined4 *)this->mbr_0xee0 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xee0)(1);
  }
  if (this->mbr_0xf88 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0xf88);
  }
  ppiVar2 = (int **)this->mbr_0xf04;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0xf00,&piStack_10,piVar3,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xf04);
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall AreaMapWindow::meth_0x4209d0(AreaMapWindow *this)

{
  dword *pdVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  dword dVar8;
  int *piVar9;
  bool bVar10;
  ulonglong uVar11;
  uint unaff_retaddr;
  float fStack_4f4;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  undefined4 uStack_4cc;
  float fStack_4c8;
  float afStack_4c4 [2];
  float fStack_4bc;
  float fStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  int iStack_4a8;
  int local_4a4;
  float afStack_4a0 [2];
  undefined auStack_498 [580];
  undefined auStack_254 [12];
  undefined auStack_248 [568];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062c696;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  iVar4 = *(int *)&(this->Picture).Window.Base.field_0xd2c;
  ExceptionList = &local_c;
  this->mbr_0xe08 = 0;
  this->mbr_0xedc = 0;
  if (((iVar4 != 0) &&
      (local_4a4 = Gregorian::meth_0x4b1490((Gregorian *)&(this->Picture).Window.Base.field_0x5f0),
      local_4a4 != 0)) && (iVar4 = (**(code **)(*DAT_00707ce4 + 0xd8))(local_4a4), iVar4 != 0)) {
    fStack_4d8 = 0.0;
    if (this->mbr_0xf88 != 0) {
      uStack_4cc = (**(code **)(*DAT_00707ce4 + 0xd8))(this->mbr_0xf88);
    }
    cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&uStack_4b4,&uStack_4ac);
    piVar9 = (int *)0x0;
    dVar8 = 0;
    uVar5 = meth_0x41d7b0(this,&iStack_4a8,&fStack_4d8,&fStack_4d0,&fStack_4d4,afStack_4a0,
                          &fStack_4e8,afStack_4c4,&fStack_4c8,&fStack_4dc,(int *)&fStack_4e0,
                          (int *)&fStack_4bc,(int *)&fStack_4b8,(int *)((int)auStack_498 + 8));
    if ((char)uVar5 != '\0') {
      if (-1 < (int)(this->mbr_0xe04 - 6)) {
        *(undefined2 *)this->mbr_0xdfc = 3;
        *(undefined2 *)(this->mbr_0xdfc + 2) = 2;
        *(undefined2 *)(this->mbr_0xdfc + 4) = 0;
        *(undefined2 *)(this->mbr_0xdfc + 6) = 3;
        *(undefined2 *)(this->mbr_0xdfc + 8) = 0;
        *(undefined2 *)(this->mbr_0xdfc + 10) = 1;
        dVar8 = 6;
      }
      if (-1 < (int)(this->mbr_0xdf8 - 4)) {
        fVar2 = (float)iStack_4a8 - 0.5;
        *(float *)this->mbr_0xdf0 = fVar2;
        fStack_4e4 = (float)(int)fStack_4d8;
        *(float *)(this->mbr_0xdf0 + 4) = fStack_4e4 - 0.5;
        fVar3 = ((float)(int)fStack_4d0 + (float)iStack_4a8) - 0.5;
        *(float *)(this->mbr_0xdf0 + 0x24) = fVar3;
        *(float *)(this->mbr_0xdf0 + 0x28) = fStack_4e4 - 0.5;
        *(float *)(this->mbr_0xdf0 + 0x48) = fVar2;
        fVar2 = ((float)(int)fStack_4d4 + fStack_4e4) - 0.5;
        *(float *)(this->mbr_0xdf0 + 0x4c) = fVar2;
        *(float *)(this->mbr_0xdf0 + 0x6c) = fVar3;
        *(float *)(this->mbr_0xdf0 + 0x70) = fVar2;
        *(undefined4 *)(this->mbr_0xdf0 + 0x10) = 0xffffffff;
        *(undefined4 *)(this->mbr_0xdf0 + 0x34) = 0xffffffff;
        *(undefined4 *)(this->mbr_0xdf0 + 0x58) = 0xffffffff;
        *(undefined4 *)(this->mbr_0xdf0 + 0x7c) = 0xffffffff;
        *(float *)(this->mbr_0xdf0 + 0x14) = afStack_4a0[0];
        *(float *)(this->mbr_0xdf0 + 0x18) = fStack_4e8;
        afStack_4c4[0] = afStack_4a0[0] + afStack_4c4[0];
        *(float *)(this->mbr_0xdf0 + 0x38) = afStack_4c4[0];
        *(float *)(this->mbr_0xdf0 + 0x3c) = fStack_4e8;
        *(float *)(this->mbr_0xdf0 + 0x5c) = afStack_4a0[0];
        *(float *)(this->mbr_0xdf0 + 0x60) = fStack_4e8 + fStack_4c8;
        *(float *)(this->mbr_0xdf0 + 0x80) = afStack_4c4[0];
        *(float *)(this->mbr_0xdf0 + 0x84) = fStack_4e8 + fStack_4c8;
        *(float *)(this->mbr_0xdf0 + 0x1c) = fStack_4dc;
        *(float *)(this->mbr_0xdf0 + 0x20) = fStack_4e0;
        *(float *)(this->mbr_0xdf0 + 0x40) = fStack_4dc + fStack_4bc;
        *(float *)(this->mbr_0xdf0 + 0x44) = fStack_4e0;
        *(float *)(this->mbr_0xdf0 + 100) = fStack_4dc;
        piVar9 = (int *)0x4;
        *(float *)(this->mbr_0xdf0 + 0x68) = fStack_4e0 + fStack_4b8;
        *(float *)(this->mbr_0xdf0 + 0x88) = fStack_4dc + fStack_4bc;
        *(float *)(this->mbr_0xdf0 + 0x8c) = fStack_4e0 + fStack_4b8;
      }
      this->mbr_0xd3c = 0xffffffff;
      this->mbr_0xe00 = dVar8;
      this->mbr_0xd44 = this->mbr_0xdf0;
      pdVar1 = &this->mbr_0xd38;
      this->mbr_0xdf4 = (dword)piVar9;
      *pdVar1 = 0;
      this->mbr_0xd48 = this->mbr_0xdfc;
      iVar4 = FUN_0047460d(0x244);
      Gregorian::meth_0x4ab680((Gregorian *)pdVar1,0x244,iVar4,piVar9);
      Gregorian::meth_0x4ab6c0((Gregorian *)pdVar1,2,this->mbr_0xe00);
      cls_0x4abc60::meth_0x41f1c0(&this->cls_0x4abc60);
      puVar6 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)pdVar1,1);
      *puVar6 = 0;
      puVar6[8] = 4;
      puVar6[9] = 1;
      cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)auStack_248);
      auStack_248._308_4_ = this->mbr_0xf80;
      auStack_248._28_4_ = (-(uint)(auStack_248._308_4_ != 0) & 6) + 0x13;
      auStack_248._304_4_ = auStack_498._0_4_;
      auStack_248._40_4_ = 1;
      auStack_248[188] = 0;
      auStack_248._32_4_ = auStack_248._28_4_;
      ::cls_0x50db20::cls_0x50db20
                ((cls_0x50db20 *)(this->cls_0x4abc60).mbr_0xc,(_String_base *)auStack_248);
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 2;
      dVar8 = this->mbr_0xda8;
      *(dword **)(dVar8 + 0x14) = &this->mbr_0xdac;
      *(undefined4 *)(dVar8 + 0x10) = 1;
      cls_0x4abc60::meth_0x4abdd0(&this->cls_0x4abc60);
      this->mbr_0xd3c = 0xffffffff;
      cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this->mbr_0xda4,(int)pdVar1);
      *(dword *)(this->mbr_0xda4 + 0xc) = this->mbr_0xda8;
      fVar2 = (float)iStack_4a8 - 0.5;
      this->mbr_0xe08 = 1;
      *(float *)this->mbr_0xec4 = fVar2;
      fStack_4e4 = (float)(int)fStack_4d8;
      *(float *)(this->mbr_0xec4 + 4) = fStack_4e4 - 0.5;
      fStack_4d0 = (float)(int)fStack_4d0;
      fVar3 = (fStack_4d0 + (float)iStack_4a8) - 0.5;
      *(float *)(this->mbr_0xec4 + 0x24) = fVar3;
      *(float *)(this->mbr_0xec4 + 0x28) = fStack_4e4 - 0.5;
      *(float *)(this->mbr_0xec4 + 0x48) = fVar2;
      fStack_4d8 = (float)(int)fStack_4d4;
      fVar2 = (fStack_4d8 + fStack_4e4) - 0.5;
      *(float *)(this->mbr_0xec4 + 0x4c) = fVar2;
      *(float *)(this->mbr_0xec4 + 0x6c) = fVar3;
      *(float *)(this->mbr_0xec4 + 0x70) = fVar2;
      (*(this->Picture).Window.Base.vftptr_0x0[1].virt_meth_0x4b2850_28)
                ((Base *)this,(int)&uStack_4b0);
      (*((this->Picture).Window.Base.vftptr_0x0)->virt_meth_0x4b27c0_20)(this);
      uVar11 = FUN_00616e24();
      fStack_4bc = (float)uVar11;
      uVar11 = FUN_00616e24();
      uStack_4cc = (undefined4)uVar11;
      uVar11 = FUN_00616e24();
      uStack_4b0 = (undefined4)uVar11;
      uVar11 = FUN_00616e24();
      iStack_4a8 = (int)uVar11;
      if (*(int *)((int)fStack_4d8 + 0x28) < 1) {
        fStack_4d8 = 0.0;
        fStack_4e0 = 0.0;
      }
      else {
        fStack_4e0 = *(float *)(*(int *)((int)fStack_4d8 + 0x24) + 0x20);
        fStack_4d8 = *(float *)(*(int *)((int)fStack_4d8 + 0x24) + 0x1c);
      }
      uVar7 = (uint)afStack_4a0[0] & 0x80000001;
      bVar10 = uVar7 == 0;
      fStack_4f4 = 0.0;
      fStack_4d4 = fStack_4e4 / (float)(int)fStack_4e0;
      if ((int)uVar7 < 0) {
        bVar10 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar10) {
        fStack_4f4 = 1.0 / (float)this->mbr_0xf94;
      }
      *(undefined4 *)(this->mbr_0xec4 + 0x14) = 0;
      *(float *)(this->mbr_0xec4 + 0x18) = fStack_4f4;
      *(float *)(this->mbr_0xec4 + 0x38) = fStack_4dc / (float)(int)fStack_4d8;
      *(float *)(this->mbr_0xec4 + 0x3c) = fStack_4f4;
      *(undefined4 *)(this->mbr_0xec4 + 0x5c) = 0;
      *(float *)(this->mbr_0xec4 + 0x60) = fStack_4f4 + fStack_4d4;
      piVar9 = (int *)0x4;
      *(float *)(this->mbr_0xec4 + 0x80) = fStack_4dc / (float)(int)fStack_4d8;
      *(float *)(this->mbr_0xec4 + 0x84) = fStack_4f4 + fStack_4d4;
      *(float *)(this->mbr_0xec4 + 0x1c) = fStack_4e8;
      *(float *)(this->mbr_0xec4 + 0x20) = fVar3;
      *(float *)(this->mbr_0xec4 + 0x40) = fStack_4e8 + fStack_4c8;
      *(float *)(this->mbr_0xec4 + 0x44) = fVar3;
      *(float *)(this->mbr_0xec4 + 100) = fStack_4e8;
      *(float *)(this->mbr_0xec4 + 0x68) = fVar3 + afStack_4c4[0];
      pdVar1 = &this->mbr_0xe0c;
      *(float *)(this->mbr_0xec4 + 0x88) = fStack_4e8 + fStack_4c8;
      *(float *)(this->mbr_0xec4 + 0x8c) = fVar3 + afStack_4c4[0];
      this->mbr_0xe18 = this->mbr_0xec4;
      this->mbr_0xec8 = 4;
      this->mbr_0xed4 = 6;
      *pdVar1 = 0;
      this->mbr_0xe10 = 0xffffffff;
      this->mbr_0xe1c = this->mbr_0xed0;
      iVar4 = FUN_0047460d(0x244);
      Gregorian::meth_0x4ab680((Gregorian *)pdVar1,0x244,iVar4,piVar9);
      Gregorian::meth_0x4ab6c0((Gregorian *)pdVar1,2,this->mbr_0xed4);
      cls_0x4abc60::meth_0x41f1c0(&this->cls_0x4abc60);
      puVar6 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)pdVar1,1);
      *puVar6 = 0;
      puVar6[8] = 4;
      puVar6[9] = 1;
      cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)auStack_498);
      auStack_498._308_4_ = this->mbr_0xf80;
      uStack_4._0_1_ = 1;
      auStack_498._304_4_ = this->mbr_0xf88;
      auStack_498._28_4_ = (-(uint)(auStack_498._308_4_ != 0) & 6) + 0x14;
      auStack_498._40_4_ = 1;
      auStack_498[188] = 0;
      auStack_498._32_4_ = auStack_498._28_4_;
      ::cls_0x50db20::cls_0x50db20
                ((cls_0x50db20 *)(this->cls_0x4abc60).mbr_0xc,(_String_base *)auStack_498);
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 2;
      dVar8 = this->mbr_0xe7c;
      *(dword **)(dVar8 + 0x14) = &this->mbr_0xe80;
      *(undefined4 *)(dVar8 + 0x10) = 1;
      cls_0x4abc60::meth_0x4abdd0(&this->cls_0x4abc60);
      this->mbr_0xe10 = 0xffffffff;
      cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this->mbr_0xe78,(int)pdVar1);
      *(dword *)(this->mbr_0xe78 + 0xc) = this->mbr_0xe7c;
      this->mbr_0xedc = 1;
      this->mbr_0xf70 = 1;
      uStack_4 = (uint)uStack_4._1_3_ << 8;
      cls_0x4b60b0::meth_0x401720((cls_0x4b60b0 *)auStack_498);
      uStack_4 = 0xffffffff;
      cls_0x4b60b0::meth_0x401720((cls_0x4b60b0 *)auStack_254);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



int * __thiscall AreaMapWindow::virt_meth_0x421720(AreaMapWindow *this,byte param_1)

{
  ~AreaMapWindow(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



void __thiscall AreaMapWindow::virt_meth_0x421740(AreaMapWindow *this)

{
  int iVar1;
  undefined4 *puVar2;
  float10 *unaff_ESI;
  undefined4 *puVar3;
  int *piVar4;
  
  if (((this->Picture).Window.Base.field_0x38 == '\0') &&
     (*(int *)&(this->Picture).Window.Base.field_0xd2c != 0)) {
    iVar1 = Gregorian::meth_0x4b1490((Gregorian *)&(this->Picture).Window.Base.field_0x5f0);
    if (iVar1 != 0) {
      if (this->mbr_0xf70 != 0) {
        meth_0x41e6b0(this,(float10 *)this->mbr_0xf74,(float)this->mbr_0xf78,unaff_ESI);
        this->mbr_0xf70 = 0;
      }
      if (this->mbr_0xe08 != 0) {
        (**(code **)(*DAT_00707ce4 + 0xe8))(this->mbr_0xda4,DAT_00707ed4,this->mbr_0xdec);
      }
      if (this->mbr_0xedc != 0) {
        (**(code **)(*DAT_00707ce4 + 0xe8))(this->mbr_0xe78,DAT_00707ed4,this->mbr_0xec0);
      }
      puVar3 = (undefined4 *)this->mbr_0xee8;
      while( true ) {
        puVar2 = (undefined4 *)this->mbr_0xee8;
        if (puVar2 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)*puVar2;
        }
        if (puVar3 == puVar2) break;
        cls_0x4203c0::meth_0x4216b0(*(cls_0x4203c0 **)(puVar3[1] + 8));
        puVar3 = (undefined4 *)puVar3[1];
      }
      if (this->mbr_0xfa0 != 0) {
        if ((int **)this->mbr_0xf04 == (int **)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = *(int **)this->mbr_0xf04;
        }
        if (piVar4 != (int *)this->mbr_0xf04) {
          do {
            cls_0x4203c0::meth_0x4216b0((cls_0x4203c0 *)piVar4[2]);
            piVar4 = (int *)*piVar4;
          } while (piVar4 != (int *)this->mbr_0xf04);
        }
      }
      if ((this->mbr_0xfa1 != 0) && ((int *)this->mbr_0xee0 != (int *)0x0)) {
        (**(code **)(*(int *)this->mbr_0xee0 + 8))(DAT_00707ed4);
      }
    }
  }
  return;
}



void __thiscall AreaMapWindow::meth_0x421880(AreaMapWindow *this)

{
  int **ppiVar1;
  Gregorian *this_00;
  bool bVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  uint uVar9;
  AreaMapIcon *this_01;
  AreaMapIcon *this_02;
  AreaMapIcon *this_03;
  int *piVar10;
  int extraout_EDX;
  int *piVar11;
  ulonglong uVar12;
  int iStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  uint uStack_3c;
  uint uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  Gregorian *pGStack_24;
  int *local_20;
  uint uStack_1c;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  
  ppiVar1 = (int **)this->mbr_0xf04;
  if (ppiVar1 == (int **)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0xf00,&local_20,piVar10,(int *)ppiVar1);
  if ((this->mbr_0xfa0 != 0) && (*(int *)&(this->Picture).Window.Base.field_0xd2c != 0)) {
    if (DAT_0070bd98 == 0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    piVar10 = (int *)(**(code **)(*piVar10 + 0x68))();
    if (((piVar10 != (int *)0x0) && (piVar10[2] != 0)) && (0 < piVar10[3] - piVar10[2] >> 2)) {
      bVar2 = false;
      local_20 = piVar10;
      cls_0x4b28a0::meth_0x4b28e0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&iStack_10);
      cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&uStack_48,&uStack_44);
      uVar12 = FUN_00616e24();
      iStack_10 = (int)uVar12;
      uVar12 = FUN_00616e24();
      iStack_c = (int)uVar12;
      this->mbr_0xf0c = 0;
      piVar6 = (int *)piVar10[2];
      if (piVar6 != (int *)piVar10[3]) {
        iStack_50 = 0;
        do {
          iVar7 = *piVar6;
          uStack_1c = *(uint *)(iVar7 + 4);
          uStack_14 = *(uint *)(iVar7 + 0xc);
          this_00 = *(Gregorian **)(iStack_50 + this->mbr_0xef4);
          pGStack_24 = this_00;
          AreaMapIcon::meth_0x41f300((AreaMapIcon *)this_00,0);
          AreaMapIcon::Set_mbr_0x38_to_param_1
                    ((AreaMapIcon *)this_00,*(undefined4 *)(iVar7 + 0x1dc));
          piVar10 = (int *)0x0;
          piVar11 = (int *)0x0;
          bVar5 = AreaMapIcon::Get_mbr_0x4(this_01);
          if ((CONCAT31(extraout_var,bVar5) != 0) &&
             (iVar7 = (**(code **)(*DAT_00707ce4 + 0xd8))(CONCAT31(extraout_var,bVar5)), iVar7 != 0)
             ) {
            if (*(int *)(iVar7 + 0x28) < 1) {
              piVar11 = (int *)0x0;
            }
            else {
              piVar10 = *(int **)(*(int *)(iVar7 + 0x24) + 0x1c);
              piVar11 = *(int **)(*(int *)(iVar7 + 0x24) + 0x20);
            }
          }
          uVar8 = GUI::Base::meth_0x41dfa0
                            ((Base *)this,uStack_1c,uStack_14,piVar10,piVar11,&uStack_38,&uStack_3c,
                             &fStack_40,&fStack_4c,&fStack_28,&fStack_2c);
          uVar4 = uStack_38;
          uVar9 = uStack_3c;
          fVar3 = fStack_40;
          if ((char)uVar8 != '\0') {
            AreaMapIcon::meth_0x41e5f0
                      ((AreaMapIcon *)this_00,uStack_38,uStack_3c,(int)fStack_40,(int)fStack_4c);
            AreaMapIcon::meth_0x41e640
                      ((AreaMapIcon *)this_00,fStack_28,fStack_2c,fStack_30,fStack_34);
            GUI::Interface::meth_0x4211f0((Interface *)&this->mbr_0xf00,&pGStack_24);
          }
          if (((bVar2) || (this->mbr_0xf8c == 0)) ||
             ((iStack_10 < (int)uVar4 ||
              ((((int)(uVar4 + (int)fVar3) <= iStack_10 || (iStack_c < (int)uVar9)) ||
               ((int)(uVar9 + (int)fStack_4c) <= iStack_c)))))) {
            uVar9 = Gregorian::Get_mbr_0x30(this_00);
            AreaMapIcon::meth_0x41d190(this_03,uVar9 & 0xfffffffe);
          }
          else {
            uVar9 = Gregorian::Get_mbr_0x30(this_00);
            AreaMapIcon::meth_0x41d190(this_02,uVar9 | 1);
            bVar2 = true;
            *(undefined *)(extraout_EDX + 0xf0c) = 1;
          }
          iStack_50 = iStack_50 + 4;
          piVar6 = piVar6 + 1;
        } while (piVar6 != (int *)local_20[3]);
      }
    }
  }
  return;
}



AreaMapWindow * __thiscall AreaMapWindow::AreaMapWindow(AreaMapWindow *this,undefined4 param_1)

{
  int iVar1;
  dword dVar2;
  AreaMapIcon *pAVar3;
  int iVar4;
  LineSystem *pLVar5;
  AreaMapWindow *pAVar6;
  int iVar7;
  uint unaff_retaddr;
  void *local_28;
  dword local_18;
  dword local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c7fc;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &local_c;
  GUI::Picture::Picture(&this->Picture,2);
  local_4 = 0;
  (this->Picture).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&AreaMapWindow__vftable_650f84_00650f84;
  *(undefined ***)&(this->Picture).Window.Base.field_0x18 = &PTR_virt_meth_0x4209c0_00650f7c;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  this->mbr_0xd38 = 0;
  this->mbr_0xd3c = 0;
  this->mbr_0xd40 = 0;
  this->mbr_0xd44 = 0;
  this->mbr_0xd48 = 0;
  this->mbr_0xd4c = 0;
  this->mbr_0xd50 = 0;
  this->mbr_0xd54 = 0;
  this->mbr_0xd58 = 0;
  this->mbr_0xd5c = 0;
  this->mbr_0xd70 = 0;
  this->mbr_0xd74 = 0;
  this->mbr_0xd78 = 0;
  this->mbr_0xd7c = 0;
  this->mbr_0xd80 = 0;
  this->mbr_0xd84 = 0;
  this->mbr_0xd88 = 0;
  local_4._0_1_ = 1;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  this->mbr_0xe0c = 0;
  this->mbr_0xe10 = 0;
  this->mbr_0xe14 = 0;
  this->mbr_0xe18 = 0;
  this->mbr_0xe1c = 0;
  this->mbr_0xe20 = 0;
  this->mbr_0xe24 = 0;
  this->mbr_0xe28 = 0;
  this->mbr_0xe2c = 0;
  this->mbr_0xe30 = 0;
  this->mbr_0xe44 = 0;
  this->mbr_0xe48 = 0;
  this->mbr_0xe4c = 0;
  this->mbr_0xe50 = 0;
  this->mbr_0xe54 = 0;
  this->mbr_0xe58 = 0;
  this->mbr_0xe5c = 0;
  local_4._0_1_ = 2;
  dVar2 = FUN_0056e0b0();
  this->mbr_0xee8 = dVar2;
  this->mbr_0xeec = 0;
  this->mbr_0xef4 = 0;
  this->mbr_0xef8 = 0;
  this->mbr_0xefc = 0;
  local_4._0_1_ = 4;
  dVar2 = FUN_0056e0b0();
  this->mbr_0xf04 = dVar2;
  this->mbr_0xf08 = 0;
  this->mbr_0xf94 = 2;
  this->mbr_0xf90 = 2;
  local_4._0_1_ = 5;
  *(undefined4 *)&(this->Picture).Window.Base.field_0xd2c = param_1;
  this->mbr_0xf9c = 0x3f800000;
  this->mbr_0xf98 = 0x3f800000;
  this->mbr_0xf80 = 0;
  this->mbr_0xf7c = 0;
  this->mbr_0xf8c = 0;
  (this->Picture).Window.Base.mbr_0xd30 = 0;
  (this->Picture).Window.Base.mbr_0xd34 = 0;
  this->mbr_0xde4 = 0;
  this->mbr_0xde0 = 0;
  this->mbr_0xddc = 0;
  this->mbr_0xdd8 = 0;
  this->mbr_0xdd0 = 0;
  this->mbr_0xdcc = 0;
  this->mbr_0xdc8 = 0;
  this->mbr_0xdc4 = 0;
  this->mbr_0xdbc = 0;
  this->mbr_0xdb8 = 0;
  this->mbr_0xdb4 = 0;
  this->mbr_0xdb0 = 0;
  this->mbr_0xde8 = 0x3f800000;
  this->mbr_0xdd4 = 0x3f800000;
  this->mbr_0xdc0 = 0x3f800000;
  this->mbr_0xdac = 0x3f800000;
  this->mbr_0xda4 = 0;
  this->mbr_0xdf0 = 0;
  this->mbr_0xdf4 = 0;
  this->mbr_0xdf8 = 0;
  this->mbr_0xdfc = 0;
  this->mbr_0xe00 = 0;
  this->mbr_0xe04 = 0;
  this->mbr_0xda8 = 0;
  this->mbr_0xe08 = 0;
  this->mbr_0xeb8 = 0;
  this->mbr_0xeb4 = 0;
  this->mbr_0xeb0 = 0;
  this->mbr_0xeac = 0;
  this->mbr_0xea4 = 0;
  this->mbr_0xea0 = 0;
  this->mbr_0xe9c = 0;
  this->mbr_0xe98 = 0;
  this->mbr_0xe90 = 0;
  this->mbr_0xe8c = 0;
  this->mbr_0xe88 = 0;
  this->mbr_0xe84 = 0;
  this->mbr_0xebc = 0x3f800000;
  this->mbr_0xea8 = 0x3f800000;
  this->mbr_0xe94 = 0x3f800000;
  this->mbr_0xe80 = 0x3f800000;
  this->mbr_0xe78 = 0;
  this->mbr_0xec4 = 0;
  this->mbr_0xec8 = 0;
  this->mbr_0xecc = 0;
  this->mbr_0xed0 = 0;
  this->mbr_0xed4 = 0;
  this->mbr_0xed8 = 0;
  this->mbr_0xe7c = 0;
  this->mbr_0xedc = 0;
  this->mbr_0xf0d = 1;
  cls_0x40cc80::meth_0x421370((cls_0x40cc80 *)&this->mbr_0xef0,6);
  iVar7 = 0;
  while( true ) {
    pAVar3 = (AreaMapIcon *)operator_new(0x110);
    local_4._0_1_ = 6;
    if (pAVar3 == (AreaMapIcon *)0x0) {
      pAVar3 = (AreaMapIcon *)0x0;
    }
    else {
      pAVar3 = AreaMapIcon::AreaMapIcon(pAVar3);
    }
    iVar1 = iVar7 * 4;
    *(AreaMapIcon **)(this->mbr_0xef4 + iVar1) = pAVar3;
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    iVar7 = iVar7 + 1;
    local_4._0_1_ = 7;
    FUN_004a1a30((cls_0x50db20 *)&stack0xffffffd4,(byte *)"AreaMapPlayer%02d.tga",(char)iVar7);
    iVar4 = FUN_004b8180();
    if (iVar4 != 0) {
      AreaMapIcon::meth_0x41d5b0(*(AreaMapIcon **)(this->mbr_0xef4 + iVar1),iVar4,1);
    }
    local_4._0_1_ = 5;
    if (0xf < local_14) break;
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    if (5 < iVar7) {
      pLVar5 = (LineSystem *)operator_new(0x100);
      local_4._0_1_ = 8;
      if (pLVar5 == (LineSystem *)0x0) {
        pLVar5 = (LineSystem *)0x0;
      }
      else {
        pLVar5 = GUI::LineSystem::LineSystem(pLVar5);
      }
      this->mbr_0xee0 = (dword)pLVar5;
      pLVar5->mbr_0x29 = 0;
      local_4._0_1_ = 5;
      this->mbr_0xf70 = 0;
      this->mbr_0xf84 = 0x3f800000;
      dVar2 = FUN_004b8180();
      this->mbr_0xf88 = dVar2;
      this->mbr_0xf0c = 0;
      this->mbr_0xf8d = 0;
      this->mbr_0xf8e = 1;
      this->mbr_0xfa0 = 1;
      this->mbr_0xfa1 = 1;
      ExceptionList = local_c;
      pAVar6 = (AreaMapWindow *)FUN_00616e15((uint)local_10 ^ unaff_retaddr);
      return pAVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_28);
}



void __thiscall AreaMapWindow::meth_0x4231b0(AreaMapWindow *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  Gfx_BasePacketData *pGVar3;
  int iVar4;
  int iVar5;
  dword dVar6;
  undefined4 *puVar7;
  float10 *unaff_EDI;
  dword dVar8;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062c83c;
  pvStack_c = ExceptionList;
  dVar8 = 0;
  if ((void *)this->mbr_0xdf0 != (void *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xdf0);
  }
  if ((void *)this->mbr_0xdfc != (void *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xdfc);
  }
  pvVar2 = (void *)this->mbr_0xda4;
  if (pvVar2 != (void *)0x0) {
    ExceptionList = &pvStack_c;
    _eh_vector_destructor_iterator_
              (pvVar2,0x28,*(int *)((int)pvVar2 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar2 + -4));
  }
  ExceptionList = &pvStack_c;
  if ((undefined4 *)this->mbr_0xda8 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (***(code ***)(undefined4 *)this->mbr_0xda8)(1);
    this->mbr_0xda8 = 0;
  }
  if ((void *)this->mbr_0xec4 == (void *)0x0) {
    if ((void *)this->mbr_0xed0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0xed0);
    }
    pvVar2 = (void *)this->mbr_0xe78;
    if (pvVar2 == (void *)0x0) {
      if ((undefined4 *)this->mbr_0xe7c != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)this->mbr_0xe7c)(1);
        this->mbr_0xe7c = 0;
      }
      meth_0x41f6e0(this);
      if (*(int *)&(this->Picture).Window.Base.field_0xd2c != 0) {
        FUN_0057bef0(unaff_EDI);
        (*((this->Picture).Window.Base.vftptr_0x0)->virt_meth_0x4b27c0_20)(this);
        this->mbr_0xdec = 1;
        puVar1 = (undefined4 *)operator_new(0x2c);
        pvStack_c = (void *)0x0;
        if (puVar1 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = puVar1 + 1;
          *puVar1 = 1;
          _eh_vector_constructor_iterator_
                    (puVar7,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
        }
        pvStack_c = (void *)0xffffffff;
        this->mbr_0xda4 = (dword)puVar7;
        this->mbr_0xdf4 = 0;
        this->mbr_0xdf8 = 4;
        pvVar2 = operator_new(0x90);
        this->mbr_0xdf0 = (dword)pvVar2;
        this->mbr_0xe00 = 0;
        this->mbr_0xe04 = 6;
        pvVar2 = operator_new(0xc);
        this->mbr_0xdfc = (dword)pvVar2;
        pGVar3 = (Gfx_BasePacketData *)operator_new(0x50);
        pvStack_c = (void *)0x1;
        if (pGVar3 == (Gfx_BasePacketData *)0x0) {
          pGVar3 = (Gfx_BasePacketData *)0x0;
        }
        else {
          Gfx_BasePacketData::Gfx_BasePacketData(pGVar3,0);
          pGVar3->vftptr_0x0 =
               (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
        }
        iVar5 = 0;
        pvStack_c = (void *)0xffffffff;
        this->mbr_0xda8 = (dword)pGVar3;
        if (0 < (int)this->mbr_0xdf8) {
          iVar4 = 0;
          do {
            *(undefined4 *)(iVar4 + 0x10 + this->mbr_0xdf0) = 0xffffffff;
            *(undefined4 *)(iVar4 + 0xc + this->mbr_0xdf0) = 0x3f800000;
            *(undefined4 *)(iVar4 + 8 + this->mbr_0xdf0) = 0;
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + 0x24;
          } while (iVar5 < (int)this->mbr_0xdf8);
        }
        this->mbr_0xec0 = 1;
        puVar1 = (undefined4 *)operator_new(0x2c);
        pvStack_c = (void *)0x2;
        if (puVar1 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = puVar1 + 1;
          *puVar1 = 1;
          _eh_vector_constructor_iterator_
                    (puVar7,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
        }
        pvStack_c = (void *)0xffffffff;
        this->mbr_0xe78 = (dword)puVar7;
        this->mbr_0xec8 = 0;
        this->mbr_0xecc = 4;
        pvVar2 = operator_new(0x90);
        this->mbr_0xec4 = (dword)pvVar2;
        this->mbr_0xed4 = 0;
        this->mbr_0xed8 = 6;
        pvVar2 = operator_new(0xc);
        this->mbr_0xed0 = (dword)pvVar2;
        pGVar3 = (Gfx_BasePacketData *)operator_new(0x50);
        pvStack_c = (void *)0x3;
        if (pGVar3 == (Gfx_BasePacketData *)0x0) {
          pGVar3 = (Gfx_BasePacketData *)0x0;
        }
        else {
          Gfx_BasePacketData::Gfx_BasePacketData(pGVar3,0);
          pGVar3->vftptr_0x0 =
               (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
        }
        iVar5 = 0;
        pvStack_c = (void *)0xffffffff;
        this->mbr_0xe7c = (dword)pGVar3;
        if (0 < (int)this->mbr_0xecc) {
          iVar4 = 0;
          do {
            *(undefined4 *)(iVar4 + 0x10 + this->mbr_0xec4) = 0xffffffff;
            *(undefined4 *)(iVar4 + 0xc + this->mbr_0xec4) = 0x3f800000;
            *(undefined4 *)(iVar4 + 8 + this->mbr_0xec4) = 0;
            *(undefined4 *)(iVar4 + 0x10 + this->mbr_0xec4) = 0xffffffff;
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + 0x24;
          } while (iVar5 < (int)this->mbr_0xecc);
        }
        *(undefined2 *)this->mbr_0xed0 = 3;
        *(undefined2 *)(this->mbr_0xed0 + 2) = 2;
        *(undefined2 *)(this->mbr_0xed0 + 4) = 0;
        *(undefined2 *)(this->mbr_0xed0 + 6) = 3;
        *(undefined2 *)(this->mbr_0xed0 + 8) = 0;
        *(undefined2 *)(this->mbr_0xed0 + 10) = 1;
        if (this->mbr_0xf88 != 0) {
          iVar5 = (**(code **)(*DAT_00707ce4 + 0xd8))(this->mbr_0xf88);
          if (*(int *)(iVar5 + 0x28) < 1) {
            dVar6 = 0;
          }
          else {
            dVar6 = *(dword *)(*(int *)(iVar5 + 0x24) + 0x1c);
            dVar8 = *(dword *)(*(int *)(iVar5 + 0x24) + 0x20);
          }
          this->mbr_0xf90 = dVar6;
          this->mbr_0xf94 = dVar8;
        }
      }
      ExceptionList = pvStack_c;
      return;
    }
    _eh_vector_destructor_iterator_
              (pvVar2,0x28,*(int *)((int)pvVar2 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar2 + -4));
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xec4);
}



void __thiscall AreaMapWindow::meth_0x4235a0(AreaMapWindow *this)

{
  cls_0x57c610 *pcVar1;
  uint *puVar2;
  dword dVar3;
  bool bVar4;
  AreaMapWindow *pAVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint *puVar11;
  cls_0x420140 *this_00;
  Gregorian *this_01;
  AreaMapIcon *this_02;
  AreaMapIcon *this_03;
  AreaMapIcon *this_04;
  int iVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  uint unaff_retaddr;
  cls_0x40cc80 *pcVar16;
  cls_0x57c610 *pcVar17;
  Gregorian *local_b4;
  undefined4 *local_b0;
  undefined local_ac;
  float local_a8;
  dword local_a4;
  undefined local_a0 [12];
  cls_0x57c610 *local_94;
  dword local_90;
  dword local_8c;
  int *local_88;
  uint local_84;
  uint local_80;
  AreaMapWindow *local_7c;
  float local_78;
  undefined local_74;
  int **local_70;
  dword local_6c;
  undefined local_68 [16];
  void *local_58;
  undefined4 local_48;
  dword local_44;
  cls_0x40cc80 local_40;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  dword local_20;
  int local_1c;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c89c;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  local_7c = this;
  meth_0x41f6e0(this);
  iVar10 = *(int *)&(this->Picture).Window.Base.field_0xd2c;
  if (((iVar10 == 0) || (*(int *)(iVar10 + 0x4c) == 0)) ||
     (pcVar1 = (cls_0x57c610 *)((*(int *)(iVar10 + 0x50) - *(int *)(iVar10 + 0x4c)) / 0x6c),
     local_94 = pcVar1, (int)pcVar1 < 1)) {
    ExceptionList = local_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
  bVar4 = false;
  cls_0x4b28a0::meth_0x4b28e0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_20);
  cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_28,&local_24);
  uVar15 = FUN_00616e24();
  local_20 = (dword)uVar15;
  uVar15 = FUN_00616e24();
  local_1c = (int)uVar15;
  local_ac = 0;
  local_a8 = (float)FUN_0059ec40();
  *(undefined *)((int)local_a8 + 0x2d) = 1;
  *(float *)((int)local_a8 + 4) = local_a8;
  *(float *)local_a8 = local_a8;
  *(float *)((int)local_a8 + 8) = local_a8;
  local_a4 = 0;
  local_4 = 0;
  puVar6 = (undefined4 *)FUN_0056e0b0();
  local_68._8_4_ = 0;
  local_4._0_1_ = 1;
  local_a0[0] = 0;
  local_68._4_4_ = puVar6;
  local_a0._4_4_ = FUN_0057c360();
  *(undefined *)(local_a0._4_4_ + 0x21) = 1;
  *(undefined4 *)(local_a0._4_4_ + 4) = local_a0._4_4_;
  *(undefined4 *)local_a0._4_4_ = local_a0._4_4_;
  *(undefined4 *)(local_a0._4_4_ + 8) = local_a0._4_4_;
  local_a0._8_4_ = 0;
  uVar13 = 0;
  if (0 < (int)pcVar1) {
    local_b0 = (undefined4 *)0x0;
    do {
      local_4._0_1_ = 2;
      iVar10 = *(int *)&(local_7c->Picture).Window.Base.field_0xd2c;
      if ((int)local_b0 < 0) {
LAB_00423760:
        piVar14 = (int *)0x0;
      }
      else {
        if (*(int *)(iVar10 + 0x4c) == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = (*(int *)(iVar10 + 0x50) - *(int *)(iVar10 + 0x4c)) / 0x6c;
        }
        if (iVar12 <= (int)uVar13) goto LAB_00423760;
        piVar14 = (int *)(*(int *)(iVar10 + 0x4c) + (int)local_b0);
      }
      local_88 = piVar14;
      if (*(char *)((int)piVar14 + 0x5d) == '\0') {
        local_44 = 0xf;
        local_48._0_1_ = 0;
        local_48._1_3_ = 0;
        local_58 = (void *)((uint)local_58 & 0xffffff00);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)(local_68 + 0xc),(_String_base *)(piVar14 + 1),0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004a15a0((cls_0x50db20 *)(local_68 + 0xc));
        cls_0x4d8d70::meth_0x56f520((cls_0x4d8d70 *)&local_ac,&local_78,local_68 + 0xc);
        if (local_78 == local_a8) {
          puVar7 = (undefined4 *)
                   cls_0x4d8d70::meth_0x4223b0
                             ((cls_0x4d8d70 *)&local_ac,(_String_base *)(local_68 + 0xc));
          *puVar7 = 1;
        }
        else {
          piVar8 = (int *)cls_0x4d8d70::meth_0x4223b0
                                    ((cls_0x4d8d70 *)&local_ac,(_String_base *)(local_68 + 0xc));
          *piVar8 = *piVar8 + 1;
        }
        uVar9 = meth_0x41dbd0(local_7c,piVar14,&local_84,&local_8c);
        if ((char)uVar9 != '\0') {
          iVar10 = FUN_00433760(puVar6,puVar6[1],&local_88);
          GUI::Interface::meth_0x41f750((Interface *)local_68,1);
          puVar6[1] = iVar10;
          **(int **)(iVar10 + 4) = iVar10;
          local_40.mbr_0x4 = 0;
          local_40.mbr_0x8 = 0;
          local_40.mbr_0xc = 0;
          local_4 = CONCAT31(local_4._1_3_,4);
          cls_0x40cc80::meth_0x421370(&local_40,6);
          puVar2 = (uint *)local_40.mbr_0x4;
          *(uint *)local_40.mbr_0x4 = local_84;
          *(dword *)(local_40.mbr_0x4 + 4) = local_8c;
          *(uint *)(local_40.mbr_0x4 + 8) = local_80;
          *(dword *)(local_40.mbr_0x4 + 0xc) = local_90;
          *(uint *)(local_40.mbr_0x4 + 0x10) = uVar13;
          puVar11 = (uint *)cls_0x4d8d70::meth_0x4223b0
                                      ((cls_0x4d8d70 *)&local_ac,(_String_base *)(local_68 + 0xc));
          pcVar16 = &local_40;
          puVar2[5] = *puVar11;
          this_00 = (cls_0x420140 *)cls_0x4542d0::meth_0x422890((cls_0x4542d0 *)local_a0,&local_88);
          cls_0x420140::cls_0x420140(this_00,(int)pcVar16);
                    /* WARNING: Subroutine does not return */
          _free(puVar2);
        }
        local_4._0_1_ = 2;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_58);
        }
        local_44 = 0xf;
        local_48._0_1_ = 0;
        local_48._1_3_ = 0;
        local_58 = (void *)((uint)local_58 & 0xffffff00);
      }
      local_4._0_1_ = 2;
      uVar13 = uVar13 + 1;
      local_b0 = (undefined4 *)((int)local_b0 + 0x6c);
    } while ((int)uVar13 < (int)local_94);
    if (0 < (int)local_68._8_4_) {
      local_74 = 0;
      local_70 = (int **)FUN_0059ec40();
      *(undefined *)((int)local_70 + 0x2d) = 1;
      local_70[1] = (int *)local_70;
      *local_70 = (int *)local_70;
      local_70[2] = (int *)local_70;
      local_6c = 0;
      puVar7 = puVar6;
      while( true ) {
        local_4._0_1_ = 5;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)*puVar7;
        }
        local_b0 = puVar6;
        if (puVar6 == puVar7) break;
        pcVar1 = *(cls_0x57c610 **)(puVar6[1] + 8);
        local_94 = pcVar1;
        iVar10 = cls_0x4542d0::meth_0x422890((cls_0x4542d0 *)local_a0,(int **)&local_94);
        puVar2 = *(uint **)(iVar10 + 4);
        local_84 = *puVar2;
        local_8c = puVar2[1];
        uVar13 = puVar2[4];
        local_80 = puVar2[2];
        local_90 = puVar2[3];
        local_94 = (cls_0x57c610 *)puVar2[5];
        local_b4 = (Gregorian *)operator_new(0x110);
        local_4._0_1_ = 6;
        if (local_b4 == (Gregorian *)0x0) {
          this_01 = (Gregorian *)0x0;
        }
        else {
          this_01 = (Gregorian *)AreaMapIcon::AreaMapIcon((AreaMapIcon *)local_b4);
        }
        local_4._0_1_ = 5;
        local_b4 = this_01;
        if (pcVar1->mbr_0x60 == 0) {
          cls_0x57c610::meth_0x57c610(pcVar1);
        }
        AreaMapIcon::meth_0x41d5b0((AreaMapIcon *)this_01,pcVar1->mbr_0x60,0);
        AreaMapIcon::meth_0x41e5f0((AreaMapIcon *)this_01,local_84,local_8c,local_80,local_90);
        AreaMapIcon::Set_mbr_0x34_to_param_1((AreaMapIcon *)this_01,pcVar1);
        AreaMapIcon::Set_mbr_0x38_to_param_1(this_02,uVar13);
        local_44 = 0xf;
        local_48._0_1_ = 0;
        local_48._1_3_ = 0;
        local_58 = (void *)((uint)local_58 & 0xffffff00);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)(local_68 + 0xc),(_String_base *)&pcVar1->mbr_0x4,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,7);
        FUN_004a15a0((cls_0x50db20 *)(local_68 + 0xc));
        piVar14 = (int *)cls_0x4d8d70::meth_0x4223b0
                                   ((cls_0x4d8d70 *)&local_ac,(_String_base *)(local_68 + 0xc));
        pcVar17 = local_94;
        if (*piVar14 < 2) {
          pcVar17 = (cls_0x57c610 *)0x0;
        }
        AreaMapIcon::meth_0x41f300((AreaMapIcon *)this_01,(int)pcVar17);
        pAVar5 = local_7c;
        uVar13 = meth_0x41dd90(local_7c,(float *)pcVar1,&local_30);
        if ((char)uVar13 != '\0') {
          AreaMapIcon::meth_0x41e640
                    ((AreaMapIcon *)this_01,local_30,local_2c,(float)local_88,local_78);
        }
        if (((((bVar4) || (pAVar5->mbr_0xf7c == 0)) ||
             ((pAVar5->mbr_0xf0c != 0 ||
              (((int)local_20 < (int)local_84 || ((int)(local_84 + local_80) <= (int)local_20))))))
            || (local_1c < (int)local_8c)) || ((int)(local_8c + local_90) <= local_1c)) {
          uVar13 = Gregorian::Get_mbr_0x30(this_01);
          AreaMapIcon::meth_0x41d190(this_04,uVar13 & 0xfffffffe);
        }
        else {
          uVar13 = Gregorian::Get_mbr_0x30(this_01);
          AreaMapIcon::meth_0x41d190(this_03,uVar13 | 1);
          bVar4 = true;
        }
        dVar3 = pAVar5->mbr_0xee8;
        iVar10 = FUN_00433760(dVar3,*(undefined4 *)(dVar3 + 4),&local_b4);
        GUI::Interface::meth_0x41f750((Interface *)&pAVar5->mbr_0xee4,1);
        *(int *)(dVar3 + 4) = iVar10;
        **(int **)(iVar10 + 4) = iVar10;
        local_4._0_1_ = 5;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_58);
        }
        puVar6 = (undefined4 *)local_b0[1];
        local_44 = 0xf;
        local_48._0_1_ = 0;
        local_48._1_3_ = 0;
        local_58 = (void *)((uint)local_58 & 0xffffff00);
        puVar7 = (undefined4 *)local_68._4_4_;
      }
      local_7c->mbr_0xf70 = 1;
      local_4 = CONCAT31(local_4._1_3_,2);
      cls_0x4d8d70::meth_0x4213f0
                ((cls_0x4d8d70 *)&local_74,(int **)&local_b4,(int **)*local_70,local_70);
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  cls_0x4542d0::meth_0x4227d0
            ((cls_0x4542d0 *)local_a0,(int **)&local_b4,*(int ***)local_a0._4_4_,
             (int **)local_a0._4_4_);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_a0._4_4_);
}



void __thiscall AreaMapWindow::virt_meth_0x423d40(AreaMapWindow *this)

{
  int iVar1;
  int *piVar2;
  
  GUI::Window::virt_meth_0x4afa90((Window *)this);
  meth_0x421880(this);
  if ((this->mbr_0xf0d != 0) ||
     ((iVar1 = *(int *)&(this->Picture).Window.Base.field_0xd2c, iVar1 != 0 &&
      ((*(byte *)(iVar1 + 0x78) & 3) != 0)))) {
    meth_0x4235a0(this);
  }
  iVar1 = *(int *)&(this->Picture).Window.Base.field_0xd2c;
  if ((iVar1 != 0) && ((this->mbr_0xf0d != 0 || ((*(byte *)(iVar1 + 0x78) & 1) != 0)))) {
    meth_0x4209d0(this);
  }
  meth_0x41e9b0(this);
  if ((int **)this->mbr_0xee8 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0xee8;
  }
  if (piVar2 != (int *)this->mbr_0xee8) {
    do {
      cls_0x41d0c0::meth_0x41d0c0((cls_0x41d0c0 *)piVar2[2]);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0xee8);
  }
  if (this->mbr_0xfa0 != 0) {
    if ((int **)this->mbr_0xf04 == (int **)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)this->mbr_0xf04;
    }
    if (piVar2 != (int *)this->mbr_0xf04) {
      do {
        cls_0x41d0c0::meth_0x41d0c0((cls_0x41d0c0 *)piVar2[2]);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)this->mbr_0xf04);
    }
  }
  if ((this->mbr_0xfa1 != 0) && ((int *)this->mbr_0xee0 != (int *)0x0)) {
    (**(code **)(*(int *)this->mbr_0xee0 + 4))();
  }
  this->mbr_0xf0d = 0;
  return;
}



void __thiscall AreaMapWindow::meth_0x4aa910(AreaMapWindow *this,uint param_1)

{
  Gregorian::meth_0x4b14a0((Gregorian *)&(this->Picture).Window.Base.field_0x5f0,param_1);
  return;
}


#include "../include/AreaMapWindow.h"
