#include "../include/Edit.h"

int __thiscall GUI::Edit::meth_0x434220(Edit *this)

{
  dword dVar1;
  
  dVar1 = (this->Label).mbr_0xe50;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)((this->Label).mbr_0xe54 - dVar1) / 0x28;
}



void __thiscall
GUI::Edit::meth_0x4a7db0
          (Edit *this,int param_1,int *param_2,int *param_3,int *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (this->Label).mbr_0xe24 + (this->Label).Window.Base.mbr_0xc;
  iVar1 = (this->Label).Window.Base.mbr_0x14 - (this->Label).mbr_0xe28;
  iVar3 = (this->Label).mbr_0xe1c + (this->Label).Window.Base.mbr_0x8;
  iVar5 = (this->Label).Window.Base.mbr_0x10 - (this->Label).mbr_0xe20;
  iVar2 = *(int *)(param_1 + 0x14) -
          (*(uint *)(param_1 + 0x1c) & ((int)*(uint *)(param_1 + 0x1c) < 1) - 1);
  *param_4 = iVar2;
  if (iVar2 < 0) {
    *param_4 = 0;
  }
  *param_5 = *(uint *)(param_1 + 0x18);
  *param_2 = *(int *)(param_1 + 0xc);
  *param_3 = *(int *)(param_1 + 0x10);
  if ((*(int *)(param_1 + 0x1c) < 1) && (*param_2 < iVar3)) {
    *param_4 = (*param_2 - iVar3) + *(int *)(param_1 + 0x14);
    *param_2 = iVar3;
    if (*param_4 < 0) {
      *param_4 = 0;
    }
  }
  if (iVar5 <= *param_4 + *param_2) {
    *param_4 = iVar5 - *param_2;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x18) < iVar2) {
    *param_5 = 0;
  }
  else if (0 < iVar2) {
    *param_5 = *param_5 - iVar2 & ((int)(*param_5 - iVar2) < 0) - 1;
  }
  if (*param_3 < iVar4) {
    *param_5 = *param_5 + (*param_3 - iVar4);
    *param_3 = iVar4;
  }
  if (iVar1 <= (int)(*param_5 + *param_3)) {
    *param_5 = iVar1 - *param_3;
  }
  return;
}



int __thiscall GUI::Edit::meth_0x4a8200(Edit *this,int param_1,void *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_1c [7];
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        puVar2 = (undefined4 *)(param_1 + 4);
        if (0xf < *(uint *)(param_1 + 0x18)) {
          puVar2 = (undefined4 *)*puVar2;
        }
        Label::meth_0x4a7d60(&this->Label,param_2,*(byte *)((int)puVar2 + iVar4),local_1c,param_3);
        iVar3 = iVar3 + local_1c[0];
        param_3 = param_3 + local_1c[0];
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    return iVar3;
  }
  return 0;
}



int __thiscall GUI::Edit::meth_0x4a87b0(Edit *this,int param_1)

{
  dword dVar1;
  int iVar2;
  
  if (-1 < param_1) {
    dVar1 = (this->Label).mbr_0xe50;
    if (dVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)((this->Label).mbr_0xe54 - dVar1) / 0x28;
    }
    if (param_1 < iVar2) {
      return (this->Label).mbr_0xe50 + param_1 * 0x28;
    }
  }
  return 0;
}



int __thiscall GUI::Edit::meth_0x4a8800(Edit *this,int param_1)

{
  dword dVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  piVar3 = (int *)(this->Label).mbr_0xe50;
  local_4 = 0;
  do {
    if (piVar3 == (int *)(this->Label).mbr_0xe54) {
      return -1;
    }
    iVar4 = piVar3[2];
    if (*(char *)((int)piVar3 + 0x25) != '\0') {
      iVar4 = iVar4 + 1;
    }
    if (piVar3[1] <= param_1) {
      dVar1 = (this->Label).mbr_0xe50;
      if (dVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)((this->Label).mbr_0xe54 - dVar1) / 0x28;
      }
      if (param_1 <= (int)(iVar4 - (uint)(*piVar3 != iVar2 + -1))) {
        return local_4;
      }
    }
    piVar3 = piVar3 + 10;
    local_4 = local_4 + 1;
  } while( true );
}



void __thiscall GUI::Edit::meth_0x4a8900(Edit *this,int param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)cls_0x4b28a0::meth_0x4b58d0
                             ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&(this->Label).mbr_0xd3c,
                              (this->Label).mbr_0xd58,(this->Label).mbr_0xd5c,
                              (this->Label).mbr_0xd60);
  meth_0x4a8200(this,param_1,pvVar1,param_2);
  return;
}



void __thiscall GUI::Edit::meth_0x4a89c0(Edit *this,int param_1)

{
  meth_0x4a8900(this,(int)&(this->Label).Window.Base.field_0xd20,param_1);
  return;
}



undefined4 __thiscall GUI::Edit::meth_0x4a8b90(Edit *this,int param_1,void *param_2)

{
  dword dVar1;
  char *pcVar2;
  uint in_EAX;
  char *pcVar3;
  _String_base *p_Var4;
  int iVar5;
  int iVar6;
  
  if (-1 < param_1) {
    dVar1 = (this->Label).mbr_0xe50;
    if (dVar1 == 0) {
      iVar5 = 0;
      in_EAX = 0;
    }
    else {
      iVar6 = (this->Label).mbr_0xe54 - dVar1;
      iVar5 = iVar6 / 0x28;
      in_EAX = -(iVar6 >> 0x1f);
    }
    if (param_1 < iVar5) {
      iVar5 = (this->Label).mbr_0xe50 + param_1 * 0x28;
      pcVar2 = "";
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      p_Var4 = ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)param_2,"",(uint)(pcVar3 + -0x64d7d8));
      iVar6 = *(int *)(iVar5 + 4);
      if (iVar6 < *(int *)(iVar5 + 8)) {
        do {
          ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)param_2,1);
          p_Var4 = *(_String_base **)(iVar5 + 8);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)p_Var4);
      }
      return CONCAT31((int3)((uint)p_Var4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



void __thiscall GUI::Edit::virt_meth_0x4c04f0(Edit *this)

{
  Label::virt_meth_0x4a7bc0(&this->Label);
  this->mbr_0x1019 = 1;
  return;
}



float10 * __thiscall
GUI::Edit::meth_0x4c0510(Edit *this,float10 *__return_storage_ptr__,float param_1,float param_2)

{
  int iVar1;
  float10 *pfVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < (int)this->mbr_0xf24) {
    iVar3 = 0;
    do {
      *(float10 **)(iVar3 + 8 + this->mbr_0xf20) = __return_storage_ptr__;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar1 < (int)this->mbr_0xf24);
  }
  pfVar2 = (float10 *)0x0;
  if (0 < (int)this->mbr_0xff8) {
    iVar1 = 0;
    do {
      *(float *)(this->mbr_0xff4 + 8 + iVar1) = param_1 * 0.5 + (float)__return_storage_ptr__;
      pfVar2 = (float10 *)((int)pfVar2 + 1);
      iVar1 = iVar1 + 0x14;
    } while ((int)pfVar2 < (int)this->mbr_0xff8);
  }
  return pfVar2;
}



uint __thiscall GUI::Edit::meth_0x4c05a0(Edit *this)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  this->mbr_0x102c = DVar1 % 1000;
  return DVar1 / 1000;
}



void __thiscall GUI::Edit::meth_0x4c05c0(Edit *this,int param_1)

{
  dword dVar1;
  dword dVar2;
  dword dVar3;
  dword dVar4;
  int iVar5;
  Base *pBVar6;
  int iVar7;
  Edit *local_4;
  
  iVar7 = param_1;
  if ((param_1 != 0) && (local_4 = this, iVar5 = meth_0x4a87b0(this,0), iVar5 != 0)) {
    (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2790_16)
              ((Base *)this,(int)&local_4,(int)&param_1);
    dVar1 = (this->Label).Window.Base.mbr_0x14;
    dVar2 = (this->Label).mbr_0xe28;
    dVar3 = (this->Label).mbr_0xe24;
    dVar4 = (this->Label).Window.Base.mbr_0xc;
    iVar5 = *(int *)(iVar5 + 0x18);
    pBVar6 = (*(this->Label).Window.Base.vftptr_0x0[8].virt_deldtor_0x4af000_0)(this);
    iVar5 = param_1 - iVar5 * iVar7;
    if (iVar7 < 1) {
      iVar7 = (int)pBVar6 - (((dVar1 - dVar2) - dVar3) - dVar4);
      if (iVar7 < iVar5) {
        iVar5 = iVar7;
      }
    }
    else if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (param_1 != iVar5) {
      (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2770_12)
                ((Base *)this,(int)local_4,iVar5);
      meth_0x4c05a0(this);
    }
  }
  return;
}



void __thiscall GUI::Edit::meth_0x4c0660(Edit *this,int param_1)

{
  dword dVar1;
  dword dVar2;
  dword dVar3;
  dword dVar4;
  undefined uVar5;
  int iVar6;
  undefined3 extraout_var;
  int iVar7;
  Edit *local_4;
  
  iVar7 = param_1;
  if (param_1 != 0) {
    local_4 = this;
    iVar6 = meth_0x4a8800(this,this->mbr_0x1014);
    if (iVar6 == this->mbr_0x1030 + 1) {
      iVar6 = iVar6 + -1;
    }
    iVar6 = meth_0x4a87b0(this,iVar6);
    if (iVar6 != 0) {
      (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2790_16)
                ((Base *)this,(int)&param_1,(int)&local_4);
      dVar1 = (this->Label).mbr_0xe20;
      dVar2 = (this->Label).Window.Base.mbr_0x10;
      dVar3 = (this->Label).mbr_0xe1c;
      dVar4 = (this->Label).Window.Base.mbr_0x8;
      uVar5 = (*(this->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4af060_4)(this);
      iVar6 = param_1 + iVar7 * -8;
      if (iVar7 < 1) {
        iVar7 = CONCAT31(extraout_var,uVar5) - (((dVar2 - dVar1) - dVar3) - dVar4);
        if (iVar7 < iVar6) {
          iVar6 = iVar7;
        }
      }
      else if (iVar6 < 0) {
        iVar6 = 0;
      }
      if (param_1 != iVar6) {
        (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2770_12)
                  ((Base *)this,iVar6,(int)local_4);
        meth_0x4c05a0(this);
      }
    }
  }
  return;
}



uint __thiscall GUI::Edit::virt_meth_0x4c0720(Edit *this)

{
  undefined4 uVar1;
  undefined3 uVar5;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  float unaff_ESI;
  
  if (this->mbr_0x101a != 0) {
    meth_0x4c0510(this,(float10 *)this->mbr_0x101c,(float)this->mbr_0x1020,unaff_ESI);
    this->mbr_0x101a = 0;
  }
  uVar1 = Label::virt_meth_0x4a80d0(&this->Label);
  uVar5 = (undefined3)((uint)uVar1 >> 8);
  if ((this->mbr_0x100c != 0) && (this->mbr_0xe64 == 0)) {
    uVar5 = 0;
    FUN_004b6750(DAT_00707ef8,(int *)this->mbr_0xfa8,0,2);
  }
  uVar4 = CONCAT31(uVar5,this->mbr_0xf38);
  if ((this->mbr_0xf38 != 0) && (uVar4 = CONCAT31(uVar5,this->mbr_0xe64), this->mbr_0xe64 == 0)) {
    DVar2 = timeGetTime();
    uVar3 = DVar2 - this->mbr_0x102c;
    uVar4 = uVar3 / 1000;
    if (uVar3 % 1000 < 500) {
      uVar4 = FUN_004b6750(DAT_00707ef8,(int *)this->mbr_0xed4,0,2);
    }
  }
  return uVar4;
}



void __thiscall GUI::Edit::meth_0x4c09a0(Edit *this,int param_1)

{
  dword dVar1;
  dword dVar2;
  dword dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  dword *pdVar8;
  undefined4 uVar9;
  undefined *puVar10;
  dword dVar11;
  undefined4 *unaff_EDI;
  uint unaff_retaddr;
  int in_stack_00000008;
  int in_stack_0000000c;
  dword dStack_8c;
  dword dStack_80;
  undefined auStack_7c [4];
  undefined *puStack_78;
  dword dStack_68;
  uint local_64;
  undefined local_60;
  void *pvStack_5c;
  dword local_50;
  dword local_4c;
  uint uStack_48;
  dword dStack_44;
  void *pvStack_40;
  dword dStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [6];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632a50;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  dVar11 = (this->Label).mbr_0xe5c;
  ExceptionList = &pvStack_c;
  this->mbr_0x1034 = 0xfffffffe;
  iVar5 = meth_0x4a8800(this,dVar11);
  if (iVar5 == this->mbr_0x1030 + 1) {
    iVar5 = iVar5 + -1;
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60 = 0;
  local_4 = 0;
  (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
            ((Base *)this,(undefined4 *)(auStack_7c + 0x18),unaff_EDI);
  if (local_4c == 0) {
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_5c);
    }
    goto LAB_004c0d52;
  }
  dVar11 = (this->Label).mbr_0xe20;
  dVar1 = (this->Label).Window.Base.mbr_0x10;
  iVar6 = (this->Label).mbr_0xe1c + (this->Label).Window.Base.mbr_0x8;
  cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&uStack_34,&uStack_2c);
  iVar7 = meth_0x4a87b0(this,iVar5);
  while (iVar7 != 0) {
    if (in_stack_0000000c < *(int *)(iVar7 + 0x10)) {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      goto LAB_004c0ace;
    }
    if ((in_stack_0000000c < *(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0x10)) ||
       (*(char *)(iVar7 + 0x24) != '\0')) goto LAB_004c0aa9;
    iVar5 = iVar5 + 1;
    iVar7 = meth_0x4a87b0(this,iVar5);
  }
  iVar5 = iVar5 + -1;
LAB_004c0aa9:
  if (iVar5 < 0) {
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_5c);
    }
    goto LAB_004c0d52;
  }
LAB_004c0ace:
  pdVar8 = (dword *)meth_0x4a87b0(this,iVar5);
  if (pdVar8 == (dword *)0x0) {
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_5c);
    }
    goto LAB_004c0d52;
  }
  local_64 = 0xf;
  dStack_68 = 0;
  puStack_78 = (undefined *)((uint)puStack_78 & 0xffffff00);
  uVar9 = meth_0x4a8b90(this,iVar5,auStack_7c);
  if ((char)uVar9 == '\0') {
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_7c);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_60);
    goto LAB_004c0d52;
  }
  if (*(char *)((int)pdVar8 + 0x25) != '\0') {
    ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)auStack_7c,1);
  }
  dVar2 = (this->Label).mbr_0xd6c;
  dVar3 = pdVar8[5];
  dVar11 = (dVar1 - dVar11) - iVar6;
  if (dVar2 == 1) {
    iVar5 = pdVar8[3] - dVar3;
LAB_004c0b95:
    dVar11 = iVar5 + dVar11;
  }
  else {
    if (dVar2 == 2) {
      iVar5 = dVar11 - dVar3;
      dVar11 = pdVar8[3];
      iVar5 = iVar5 / 2;
      goto LAB_004c0b95;
    }
    dVar11 = pdVar8[3];
  }
  if (in_stack_00000008 < (int)dVar11) {
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_7c);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_60);
  }
  else if (in_stack_00000008 < (int)(dVar3 + dVar11)) {
    pvStack_40 = (void *)cls_0x4b28a0::meth_0x4b58d0
                                   ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,
                                    &(this->Label).mbr_0xd3c,(this->Label).mbr_0xd58,
                                    (this->Label).mbr_0xd5c,(this->Label).mbr_0xd60);
    dStack_8c = pdVar8[7];
    iVar5 = 0;
    dStack_44 = dStack_68;
    bVar4 = false;
    dStack_80 = pdVar8[3];
    if (0 < (int)dStack_68) {
      do {
        puVar10 = puStack_78;
        if (local_64 < 0x10) {
          puVar10 = auStack_7c + 4;
        }
        Label::meth_0x4a7d60(&this->Label,pvStack_40,puVar10[iVar5],aiStack_28,dVar11 - iVar6);
        Label::meth_0x4a7ec0
                  (&this->Label,aiStack_28,pdVar8[3],pdVar8[4],dStack_8c,pdVar8[8],(int *)&dStack_80
                   ,&iStack_38,(int *)&dStack_3c,&uStack_30,(float *)0x0);
        if ((int)dStack_3c < 1) {
          if (bVar4) break;
        }
        else if (!bVar4) {
          bVar4 = true;
        }
        if (in_stack_00000008 < (int)dStack_80) break;
        dVar1 = dStack_3c + dStack_80;
        if (in_stack_00000008 < (int)dVar1) {
          if (this->mbr_0x1018 == 0) {
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_7c);
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_60);
          }
          else if (in_stack_00000008 < (int)((int)dStack_3c / 2 + dStack_80)) {
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_7c);
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_60);
          }
          else {
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_7c);
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_60);
          }
          goto LAB_004c0d52;
        }
        if (in_stack_00000008 < (int)dStack_80) break;
        dStack_8c = dStack_8c - aiStack_28[0];
        iVar5 = iVar5 + 1;
        dStack_80 = dVar1;
      } while (iVar5 < (int)dStack_44);
    }
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_78);
    }
    local_64 = 0xf;
    dStack_68 = 0;
    puStack_78 = (undefined *)((uint)puStack_78 & 0xffffff00);
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_5c);
    }
  }
  else {
    this->mbr_0x1034 = *pdVar8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_7c);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_60);
  }
LAB_004c0d52:
  ExceptionList = puStack_8;
  FUN_00616e15((uint)pvStack_c ^ param_1);
  return;
}



void __thiscall GUI::Edit::meth_0x4c0ef0(Edit *this)

{
  dword dVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  _String_base *p_Var5;
  void *pvVar6;
  undefined4 *******pppppppuVar7;
  int iVar8;
  undefined4 *unaff_ESI;
  FILE *unaff_EDI;
  int iVar9;
  uint unaff_retaddr;
  uint in_stack_00000008;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined auStack_78 [4];
  void *pvStack_74;
  dword dStack_68;
  dword dStack_64;
  uint uStack_60;
  undefined uStack_5c;
  undefined4 *******apppppppuStack_58 [3];
  dword dStack_4c;
  dword dStack_48;
  uint uStack_44;
  undefined auStack_40 [4];
  void *pvStack_3c;
  uint uStack_28;
  int aiStack_24 [5];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_00632ab8;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  uVar2 = (*(this->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2830_36)((Base *)this,unaff_EDI);
  if ((char)uVar2 == '\0') {
    iVar3 = meth_0x4a8800(this,this->mbr_0x1014);
    if (iVar3 == this->mbr_0x1030 + 1) {
      iVar3 = iVar3 + -1;
    }
    (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2790_16)
              ((Base *)this,(int)&iStack_84,(int)&iStack_8c);
    iVar9 = (this->Label).mbr_0xe1c + (this->Label).Window.Base.mbr_0x8;
    iVar8 = ((this->Label).Window.Base.mbr_0x10 - (this->Label).mbr_0xe20) - iVar9;
    iStack_80 = iVar8;
    iVar3 = meth_0x4a87b0(this,iVar3);
    if (iVar3 != 0) {
      dVar1 = (this->Label).mbr_0xd6c;
      if (dVar1 == 1) {
        iVar8 = (*(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 0x14)) + iVar8;
      }
      else if (dVar1 == 2) {
        iVar8 = (iVar8 - *(int *)(iVar3 + 0x14)) / 2 + *(int *)(iVar3 + 0xc);
      }
      else {
        iVar8 = *(int *)(iVar3 + 0xc);
      }
      dStack_48 = 0xf;
      dStack_4c = 0;
      uStack_5c = 0;
      dStack_64 = 0xf;
      dStack_68 = 0;
      auStack_78[0] = 0;
      (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
                ((Base *)this,&uStack_60,unaff_ESI);
      p_Var5 = (_String_base *)
               cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)&uStack_5c,auStack_40,0,this->mbr_0x1014)
      ;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)auStack_78,p_Var5,0,0xffffffff);
      if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_3c);
      }
      pvVar6 = (void *)cls_0x4b28a0::meth_0x4b58d0
                                 ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&(this->Label).mbr_0xd3c,
                                  (this->Label).mbr_0xd58,(this->Label).mbr_0xd5c,
                                  (this->Label).mbr_0xd60);
      pppppppuVar7 = apppppppuStack_58[0];
      if (uStack_44 < 0x10) {
        pppppppuVar7 = apppppppuStack_58;
      }
      iVar8 = iVar8 - iVar9;
      Label::meth_0x4a7d60
                (&this->Label,pvVar6,*(byte *)(this->mbr_0x1014 + (int)pppppppuVar7),aiStack_24,
                 iVar8);
      if ((this->mbr_0x1010 != this->mbr_0x1014) || (iVar3 = aiStack_24[0], this->mbr_0x1018 != 0))
      {
        iVar3 = 2;
      }
      iVar8 = meth_0x4a8200(this,(int)auStack_78,pvVar6,iVar8);
      if (iVar8 < iStack_80) {
        (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2770_12)
                  ((Base *)this,iVar8,iStack_88);
      }
      else if (iStack_80 + iStack_7c <= iVar8 + iVar3) {
        (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2770_12)
                  ((Base *)this,(iVar8 - iStack_7c) + iVar3,iStack_88);
      }
      if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_74);
      }
      uStack_60 = 0xf;
      dStack_64 = 0;
      pvStack_74 = (void *)((uint)pvStack_74 & 0xffffff00);
      if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apppppppuStack_58[0]);
      }
    }
  }
  else {
    iVar3 = meth_0x4a8800(this,this->mbr_0x1014);
    if (iVar3 == this->mbr_0x1030 + 1) {
      iVar3 = iVar3 + -1;
    }
    iStack_8c = iVar3;
    (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2790_16)
              ((Base *)this,(int)&iStack_88,(int)&iStack_80);
    iVar9 = (((this->Label).Window.Base.mbr_0x14 - (this->Label).mbr_0xe28) -
            (this->Label).mbr_0xe24) - (this->Label).Window.Base.mbr_0xc;
    iVar8 = 0;
    iVar3 = meth_0x4a87b0(this,iVar3);
    if (iVar3 != 0) {
      iStack_84 = *(int *)(iVar3 + 0x18);
      iVar3 = 0;
      if (0 < iStack_8c) {
        do {
          iVar4 = meth_0x4a87b0(this,iVar3);
          iVar8 = iVar8 + *(int *)(iVar4 + 0x18);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iStack_8c);
      }
      if (iVar8 < iStack_80) {
        (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2770_12)
                  ((Base *)this,iStack_88,iVar8);
      }
      else if (iStack_80 + iVar9 <= iStack_84 + iVar8) {
        (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2770_12)
                  ((Base *)this,iStack_88,(iStack_84 - iVar9) + iVar8);
      }
    }
  }
  ExceptionList = pvStack_4;
  FUN_00616e15((uint)puStack_8 ^ in_stack_00000008);
  return;
}



Edit * __thiscall GUI::Edit::~Edit(Edit *this)

{
  void *pvVar1;
  Edit *pEVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632b0a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Label).Window.Base.vftptr_0x0 = (Base__vftable_66e41c *)&Edit__vftable_670cac_00670cac;
  *(undefined ***)&(this->Label).Window.Base.field_0x18 = &PTR_virt_meth_0x4c13c0_00670ca4;
  local_4 = 2;
  if ((void *)this->mbr_0xf20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xf20);
  }
  if ((void *)this->mbr_0xf2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xf2c);
  }
  pvVar1 = (void *)this->mbr_0xed4;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x28,*(int *)((int)pvVar1 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((undefined4 *)this->mbr_0xed8 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xed8)(1);
    this->mbr_0xed8 = 0;
  }
  if ((void *)this->mbr_0xff4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xff4);
  }
  if ((void *)this->mbr_0x1000 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x1000);
  }
  pvVar1 = (void *)this->mbr_0xfa8;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x28,*(int *)((int)pvVar1 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((undefined4 *)this->mbr_0xfac != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xfac)(1);
    this->mbr_0xfac = 0;
  }
  local_4._0_1_ = 3;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)&this->mbr_0xf3c);
  local_4._0_1_ = 1;
  cls_0x4abc60::meth_0x41fbd0((cls_0x4abc60 *)&this->field_0xf64);
  local_4._0_1_ = 4;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)&this->mbr_0xe68);
  local_4 = (uint)local_4._1_3_ << 8;
  cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  local_4 = 0xffffffff;
  pEVar2 = (Edit *)Label::~Label(&this->Label);
  ExceptionList = pvStack_c;
  return pEVar2;
}



void __thiscall GUI::Edit::meth_0x4c13d0(Edit *this)

{
  Base__vftable_66e41c *pBVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined4 *unaff_ESI;
  uint unaff_retaddr;
  uint in_stack_00000004;
  char in_stack_00000008;
  undefined4 local_2c;
  undefined local_28;
  void *pvStack_24;
  undefined4 local_18;
  dword local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632b28;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  this->mbr_0x1030 = 0xfffffffe;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = 0;
  local_4 = 0;
  (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)((Base *)this,&local_2c,unaff_ESI);
  if (local_14 == 0) {
    pBVar1 = (this->Label).Window.Base.vftptr_0x0;
    this->mbr_0x1014 = 0;
    this->mbr_0x1010 = 0;
    (*pBVar1[9].virt_meth_0x4b2770_12)((Base *)this,0,0);
    pvVar2 = ExceptionList;
    puVar3 = puStack_8;
  }
  else {
    if ((int)this->mbr_0x1010 < 0) {
      this->mbr_0x1010 = 0;
    }
    else if ((int)local_14 < (int)this->mbr_0x1010) {
      this->mbr_0x1010 = local_14;
    }
    if ((int)this->mbr_0x1014 < 0) {
      this->mbr_0x1014 = 0;
    }
    else if ((int)local_14 < (int)this->mbr_0x1014) {
      this->mbr_0x1014 = local_14;
    }
    pvVar2 = ExceptionList;
    puVar3 = puStack_8;
    if (in_stack_00000008 != '\0') {
      meth_0x4c0ef0(this);
      pvVar2 = ExceptionList;
      puVar3 = puStack_8;
    }
  }
  ExceptionList = puVar3;
  puStack_8 = (undefined *)ExceptionList;
  if (local_10 < 0x10) {
    local_2c = 0x4c14c9;
    FUN_00616e15((uint)pvStack_c ^ in_stack_00000004);
    return;
  }
  ExceptionList = pvVar2;
                    /* WARNING: Subroutine does not return */
  _free(pvStack_24);
}



void __thiscall GUI::Edit::meth_0x4c14d0(Edit *this,int param_1)

{
  _String_base *p_Var1;
  cls_0x50db20 *pcVar2;
  _String_base *p_Var3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  uint unaff_retaddr;
  undefined4 local_bc;
  undefined uStack_b8;
  undefined auStack_b4 [4];
  undefined4 uStack_b0;
  undefined4 uStack_a0;
  uint local_9c;
  undefined local_98;
  void *pvStack_94;
  dword local_88;
  _String_base *local_84;
  dword dStack_80;
  _String_base a_Stack_7c [4];
  void *pvStack_78;
  dword dStack_68;
  uint uStack_64;
  undefined auStack_60 [28];
  cls_0x4d8d70 cStack_44;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632bac;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  cStack_44.mbr_0x34 = DAT_007062c0 ^ unaff_retaddr;
  local_bc = (_String_base *)CONCAT31(local_bc._1_3_,*(undefined *)(param_1 + 4));
  ExceptionList = &pVStack_c;
  meth_0x4c13d0(this);
  p_Var3 = (_String_base *)this->mbr_0x1014;
  if ((int)(_String_base *)this->mbr_0x1014 < (int)(_String_base *)this->mbr_0x1010) {
    p_Var3 = (_String_base *)this->mbr_0x1010;
  }
  local_84 = (_String_base *)0xf;
  local_88 = 0;
  local_98 = 0;
  local_4 = 0;
  (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)((Base *)this,&local_9c,unaff_EDI);
  p_Var1 = local_84;
  if (local_bc == p_Var3) {
    if ((this->mbr_0x1018 == 0) && ((int)local_bc < (int)local_84)) {
      cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)&local_98,a_Stack_7c,0,(uint)local_bc);
      if ((int)(local_bc + 1) < (int)p_Var1) {
        cls_0x4d8d70::meth_0x458ef0
                  ((cls_0x4d8d70 *)&local_98,auStack_60 + 0x1c,(uint)(local_bc + 1),
                   (uint)(p_Var1 + (-1 - (int)local_bc)));
        pcVar2 = FUN_00425d70((cls_0x50db20 *)auStack_60,a_Stack_7c,(int)(auStack_60 + 0x1c));
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_98,(_String_base *)pcVar2,0,0xffffffff)
        ;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_60);
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_60 + 0x1c));
      }
      else {
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_98,a_Stack_7c,0,0xffffffff);
      }
      if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_78);
      }
    }
    if (local_bc == p_Var1) {
      Label::virt_meth_0x4aa2b0(&this->Label,uStack_b8,unaff_ESI);
      (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
                ((Base *)this,(undefined4 *)&local_98,unaff_ESI);
      this->mbr_0x1014 = dStack_80;
      this->mbr_0x1010 = dStack_80;
      meth_0x4c05a0(this);
      this->mbr_0x1019 = 1;
      meth_0x4c13d0(this);
      goto LAB_004c191f;
    }
    uStack_b0 = (void *)CONCAT31((int3)((uint)uStack_b0 >> 8),uStack_b8);
    local_9c = 0xf;
    uStack_a0 = 1;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_b0._1_1_ = 0;
    cls_0x4d8d70::meth_0x4c0810((cls_0x4d8d70 *)&local_98,local_bc,(uint)auStack_b4,0,0xffffffff);
    auStack_60._4_4_ = uStack_b0;
    auStack_60._24_4_ = local_9c;
  }
  else {
    cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)&local_98,auStack_60,0,(uint)local_bc);
    if ((int)p_Var3 < (int)p_Var1) {
      cls_0x4d8d70::meth_0x458ef0
                ((cls_0x4d8d70 *)&local_98,auStack_60 + 0x1c,(uint)p_Var3,(int)p_Var1 - (int)p_Var3)
      ;
      uStack_b0 = (void *)CONCAT31((int3)((uint)uStack_b0 >> 8),uStack_b8);
      local_9c = 0xf;
      uStack_a0 = 1;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_b0._1_1_ = 0;
      pcVar2 = FUN_00425d70((cls_0x50db20 *)a_Stack_7c,(_String_base *)auStack_60,(int)auStack_b4);
      pcVar2 = FUN_00425d70((cls_0x50db20 *)&cStack_44.mbr_0x1c,(_String_base *)pcVar2,
                            (int)(auStack_60 + 0x1c));
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_98,(_String_base *)pcVar2,0,0xffffffff);
      if (0xf < cStack_44.mbr_0x34) {
                    /* WARNING: Subroutine does not return */
        _free((void *)cStack_44.mbr_0x20);
      }
      cStack_44.mbr_0x34 = 0xf;
      cStack_44.mbr_0x30 = 0;
      cStack_44.mbr_0x20 = cStack_44.mbr_0x20 & 0xffffff00;
      if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_78);
      }
      uStack_64 = 0xf;
      dStack_68 = 0;
      pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
      if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
        _free(uStack_b0);
      }
    }
    else {
      uStack_b0 = (void *)CONCAT31((int3)((uint)uStack_b0 >> 8),uStack_b8);
      local_9c = 0xf;
      uStack_a0 = 1;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_b0._1_1_ = 0;
      pcVar2 = FUN_00425d70((cls_0x50db20 *)a_Stack_7c,(_String_base *)auStack_60,(int)auStack_b4);
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_98,(_String_base *)pcVar2,0,0xffffffff);
      if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_78);
      }
      pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
      cStack_44.mbr_0x4 = (dword)uStack_b0;
      cStack_44.mbr_0x18 = local_9c;
    }
    if (0xf < cStack_44.mbr_0x18) {
      uStack_64 = 0xf;
      dStack_68 = 0;
                    /* WARNING: Subroutine does not return */
      _free((void *)cStack_44.mbr_0x4);
    }
    uStack_64 = 0xf;
    dStack_68 = 0;
  }
  if (0xf < (uint)auStack_60._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_60._4_4_);
  }
  (*(this->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)((Base *)this,(FILE *)&local_98);
  this->mbr_0x1014 = (dword)(local_bc + 1);
  this->mbr_0x1010 = (dword)(local_bc + 1);
  this->mbr_0x1019 = 1;
  meth_0x4c13d0(this);
  Label::meth_0x4a93a0(&this->Label);
  meth_0x4c05a0(this);
LAB_004c191f:
  if (0xf < dStack_80) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_94);
  }
  ExceptionList = puStack_8;
  FUN_00616e15((uint)pVStack_c ^ param_1);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall GUI::Edit::meth_0x4c1960(Edit *this)

{
  dword dVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *******pppppppuVar6;
  _String_base *p_Var7;
  cls_0x50db20 *pcVar8;
  undefined *puVar9;
  undefined4 *******pppppppuVar10;
  undefined4 *unaff_EBX;
  int iVar11;
  dword dVar12;
  _String_base *p_Var13;
  undefined4 *unaff_EBP;
  dword dVar14;
  undefined4 *unaff_ESI;
  FILE *unaff_EDI;
  uint unaff_retaddr;
  uint in_stack_0000000c;
  dword dStack_f0;
  undefined4 *******apppppppuStack_ec [2];
  void *pvStack_e4;
  void *pvStack_e0;
  dword dStack_dc;
  uint uStack_d8;
  VFX_Parameter__vftable_673a20 *pVStack_d4;
  dword dStack_d0;
  undefined auStack_cc [4];
  undefined auStack_c8 [16];
  undefined auStack_b8 [4];
  undefined *puStack_b4;
  VFX_Parameter__vftable_673a20 *pVStack_b0;
  undefined auStack_ac [4];
  undefined4 *puStack_a8;
  dword dStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  FILE FStack_94;
  undefined auStack_74 [4];
  void *pvStack_70;
  uint uStack_64;
  uint uStack_5c;
  undefined uStack_58;
  void *pvStack_54;
  dword dStack_48;
  dword dStack_44;
  uint uStack_40;
  _String_base a_Stack_3c [4];
  void *pvStack_38;
  dword dStack_2c;
  dword dStack_28;
  uint uStack_24;
  void *pvStack_1c;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  VFX_Parameter__vftable_673a20 *local_4;
  
  local_4 = (VFX_Parameter__vftable_673a20 *)0xffffffff;
  puStack_8 = &LAB_00632c24;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  FUN_004b41d0((cls_0x50db20 *)(auStack_c8 + 0xc));
  local_4 = (VFX_Parameter__vftable_673a20 *)0x0;
  uVar3 = (*(this->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2830_36)((Base *)this,unaff_EDI);
  if (((char)uVar3 == '\0') && (uVar4 = 0, 0 < (int)dStack_a4)) {
    do {
      puVar9 = puStack_b4;
      if (uStack_a0 < 0x10) {
        puVar9 = auStack_b8 + 4;
      }
      if (puVar9[uVar4] == '\n') {
LAB_004c19fb:
        p_Var7 = (_String_base *)
                 cls_0x4d8d70::meth_0x458ef0
                           ((cls_0x4d8d70 *)(auStack_c8 + 0x10),&FStack_94._bufsiz,0,uVar4);
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(auStack_c8 + 0x10),p_Var7,0,0xffffffff);
        unaff_retaddr = unaff_retaddr & 0xffffff00;
        if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(FStack_94._tmpfname);
        }
        break;
      }
      puVar9 = puStack_b4;
      if (uStack_a0 < 0x10) {
        puVar9 = auStack_b8 + 4;
      }
      if (puVar9[uVar4] == '\r') goto LAB_004c19fb;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)dStack_a4);
  }
  iVar11 = 0;
  uStack_d8 = 0xf;
  dStack_dc = 0;
  apppppppuStack_ec[0] = (undefined4 *******)((uint)apppppppuStack_ec[0] & 0xffffff00);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&dStack_f0,(_String_base *)(auStack_c8 + 0x10),0,0xffffffff);
  pcVar2 = "";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)(auStack_c8 + 0x10),"",(uint)(pcVar5 + -0x64d7d8));
  pppppppuVar6 = apppppppuStack_ec[0];
  uVar4 = uStack_d8;
  if (0 < (int)dStack_dc) {
    do {
      pppppppuVar10 = pppppppuVar6;
      if (uVar4 < 0x10) {
        pppppppuVar10 = apppppppuStack_ec;
      }
      if (*(char *)((int)pppppppuVar10 + iVar11) == '\t') {
LAB_004c1ae3:
        ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)(auStack_c8 + 0x10),1);
        pppppppuVar6 = apppppppuStack_ec[0];
        uVar4 = uStack_d8;
      }
      else {
        pppppppuVar10 = pppppppuVar6;
        if (uVar4 < 0x10) {
          pppppppuVar10 = apppppppuStack_ec;
        }
        if (*(char *)((int)pppppppuVar10 + iVar11) != '\r') goto LAB_004c1ae3;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)dStack_dc);
  }
  meth_0x4c13d0(this);
  dVar1 = this->mbr_0x1010;
  dVar14 = this->mbr_0x1014;
  if ((int)dVar1 < (int)this->mbr_0x1014) {
    dVar14 = dVar1;
  }
  dVar12 = this->mbr_0x1014;
  if ((int)this->mbr_0x1014 < (int)dVar1) {
    dVar12 = dVar1;
  }
  auStack_c8._12_4_ = 0xf;
  auStack_c8._8_4_ = (char *)0x0;
  dStack_d0 = dStack_d0 & 0xffffff00;
  FStack_94._file = 0xf;
  FStack_94._flag = 0;
  pcStack_98 = (char *)((uint)pcStack_98 & 0xffffff00);
  (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)((Base *)this,&uStack_9c,unaff_ESI)
  ;
  dStack_f0 = this->mbr_0x1010;
  FStack_94._bufsiz = this->mbr_0x1014;
  if (0 < (int)(dVar12 - dVar14)) {
    dStack_28 = 0xf;
    dStack_2c = 0;
    a_Stack_3c[0] = (_String_base)0x0;
    dStack_44 = 0xf;
    dStack_48 = 0;
    uStack_58 = 0;
    (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
              ((Base *)this,&dStack_d0,unaff_EBP);
    p_Var7 = (_String_base *)
             cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)auStack_cc,auStack_74,0,dVar14);
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)a_Stack_3c,p_Var7,0,0xffffffff);
    if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_70);
    }
    p_Var7 = (_String_base *)
             cls_0x4d8d70::meth_0x458ef0
                       ((cls_0x4d8d70 *)auStack_cc,auStack_74,dVar14,dVar12 - dVar14);
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&uStack_58,p_Var7,0,0xffffffff);
    if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_70);
    }
    if ((int)dVar12 < (int)auStack_b8) {
      cls_0x4d8d70::meth_0x458ef0
                ((cls_0x4d8d70 *)(cls_0x50db20 *)auStack_cc,auStack_74,dVar12,
                 (int)auStack_b8 - dVar12);
      pcVar8 = FUN_00425d70((cls_0x50db20 *)&stack0xffffffe0,a_Stack_3c,(int)auStack_74);
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)auStack_cc,(_String_base *)pcVar8,0,0xffffffff);
      if ((undefined *)0xf < puStack_8) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_1c);
      }
      if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_70);
      }
    }
    else {
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)auStack_cc,a_Stack_3c,0,0xffffffff);
    }
    (*(this->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
              ((Base *)this,(FILE *)auStack_cc);
    this->mbr_0x1014 = dVar14;
    this->mbr_0x1010 = dVar14;
    this->mbr_0x1019 = 1;
    meth_0x4c05a0(this);
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_54);
    }
    uStack_40 = 0xf;
    dStack_44 = 0;
    pvStack_54 = (void *)((uint)pvStack_54 & 0xffffff00);
    if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_38);
    }
  }
  meth_0x4c13d0(this);
  p_Var7 = (_String_base *)this->mbr_0x1010;
  p_Var13 = (_String_base *)this->mbr_0x1014;
  if ((int)p_Var7 < (int)(_String_base *)this->mbr_0x1014) {
    p_Var13 = p_Var7;
  }
  if ((int)p_Var7 <= (int)(_String_base *)this->mbr_0x1014) {
    p_Var7 = (_String_base *)this->mbr_0x1014;
  }
  if (p_Var13 == p_Var7) {
    (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
              ((Base *)this,(undefined4 *)auStack_cc,unaff_EBX);
    cls_0x4d8d70::meth_0x4c0810
              ((cls_0x4d8d70 *)auStack_c8,p_Var13,(uint)(auStack_b8 + 0xc),0,0xffffffff);
    (*(this->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
              ((Base *)this,(FILE *)auStack_c8);
    this->mbr_0x1014 = (dword)(p_Var13 + (int)pcStack_98);
    this->mbr_0x1010 = (dword)(p_Var13 + (int)pcStack_98);
    this->mbr_0x1019 = 1;
    meth_0x4c13d0(this);
    meth_0x4c05a0(this);
    if ((char *)0xf < FStack_94._tmpfname) {
                    /* WARNING: Subroutine does not return */
      _free(FStack_94._base);
    }
    FStack_94._tmpfname = (char *)0xf;
    FStack_94._bufsiz = 0;
    FStack_94._base = (char *)((uint)FStack_94._base & 0xffffff00);
    if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_b0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_c8._4_4_);
    }
    pVStack_b0 = (VFX_Parameter__vftable_673a20 *)0xf;
    puStack_b4 = (undefined *)0x0;
    auStack_c8._4_4_ = auStack_c8._4_4_ & 0xffffff00;
    if ((char *)0xf < (uint)auStack_cc) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e0);
    }
    auStack_cc = (undefined  [4])0xf;
    dStack_d0 = 0;
    pvStack_e0 = (void *)((uint)pvStack_e0 & 0xffffff00);
  }
  else {
    (*(this->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)((Base *)this,&FStack_94);
    this->mbr_0x1010 = (dword)apppppppuStack_ec[0];
    this->mbr_0x1014 = (dword)FStack_94._tmpfname;
    this->mbr_0x1019 = 1;
    meth_0x4c13d0(this);
    meth_0x4c05a0(this);
    if (0xf < (uint)FStack_94._bufsiz) {
                    /* WARNING: Subroutine does not return */
      _free((void *)FStack_94._cnt);
    }
    FStack_94._bufsiz = 0xf;
    FStack_94._charbuf = 0;
    FStack_94._cnt = FStack_94._cnt & 0xffffff00;
    if ((undefined *)0xf < puStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_c8._0_4_);
    }
    puStack_b4 = (undefined *)0xf;
    auStack_b8 = (undefined  [4])0x0;
    auStack_c8._0_4_ = auStack_c8._0_4_ & 0xffffff00;
    if (0xf < dStack_d0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e4);
    }
    dStack_d0 = 0xf;
    pVStack_d4 = (VFX_Parameter__vftable_673a20 *)0x0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    puStack_a8 = unaff_EBX;
    FStack_94._ptr = pcStack_98;
  }
  if (FStack_94._ptr < (char *)0x10) {
    ExceptionList = (void *)CONCAT31((int3)(unaff_retaddr >> 8),4);
    FUN_00616e15((uint)local_4 ^ in_stack_0000000c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_a8);
}



void __thiscall GUI::Edit::meth_0x4c1fa0(Edit *this,char param_1)

{
  dword dVar1;
  _String_base *p_Var2;
  cls_0x50db20 *pcVar3;
  undefined4 *unaff_EDI;
  dword dVar4;
  uint unaff_retaddr;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  dword local_a0;
  uint local_9c;
  undefined local_98;
  void *pvStack_94;
  dword local_88;
  dword local_84;
  uint uStack_80;
  _String_base local_7c [4];
  void *pvStack_78;
  dword local_6c;
  dword local_68;
  uint uStack_64;
  undefined auStack_60 [4];
  void *pvStack_5c;
  uint uStack_48;
  undefined local_44 [4];
  void *pvStack_40;
  dword local_34;
  dword local_30;
  uint uStack_2c;
  void *pvStack_24;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632c6b;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  meth_0x4c13d0(this);
  local_a0 = this->mbr_0x1010;
  dVar1 = this->mbr_0x1014;
  dVar4 = local_a0;
  if (((int)local_a0 < (int)dVar1) || (dVar4 = dVar1, (int)local_a0 <= (int)dVar1)) {
    local_a0 = dVar1;
  }
  if (0 < (int)(local_a0 - dVar4)) {
    local_84 = 0xf;
    local_88 = 0;
    local_98 = 0;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = (_String_base)0x0;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = 0;
    local_4 = 2;
    (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
              ((Base *)this,&local_9c,unaff_EDI);
    p_Var2 = (_String_base *)
             cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)&local_98,auStack_60,0,dVar4);
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_7c,p_Var2,0,0xffffffff);
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_5c);
    }
    p_Var2 = (_String_base *)
             cls_0x4d8d70::meth_0x458ef0
                       ((cls_0x4d8d70 *)&local_98,auStack_60,dVar4,local_a0 - dVar4);
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_44,p_Var2,0,0xffffffff);
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_5c);
    }
    if ((int)local_9c < (int)local_84) {
      cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)&local_98,auStack_60,local_9c,local_84 - local_9c)
      ;
      pcVar3 = FUN_00425d70((cls_0x50db20 *)&stack0xffffffd8,local_7c,(int)auStack_60);
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_98,(_String_base *)pcVar3,0,0xffffffff);
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_24);
      }
      if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_5c);
      }
    }
    else {
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_98,local_7c,0,0xffffffff);
    }
    if (in_stack_00000008 != '\0') {
      (*(this->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
                ((Base *)this,(FILE *)&local_98);
      this->mbr_0x1014 = dVar4;
      this->mbr_0x1010 = dVar4;
      this->mbr_0x1019 = 1;
      meth_0x4c13d0(this);
      meth_0x4c05a0(this);
    }
    FUN_004b2cb0((int)local_44);
    if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_40);
    }
    uStack_2c = 0xf;
    local_30 = 0;
    pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
    if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_78);
    }
    uStack_64 = 0xf;
    local_68 = 0;
    pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
    if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_94);
    }
  }
  ExceptionList = puStack_8;
  FUN_00616e15((uint)local_c ^ _param_1);
  return;
}



int * __thiscall GUI::Edit::virt_meth_0x4c2250(Edit *this,byte param_1)

{
  ~Edit(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



void __thiscall GUI::Edit::meth_0x4c2360(Edit *this,int param_1,int param_2)

{
  this->mbr_0x1014 = param_2;
  this->mbr_0x1010 = param_1;
  meth_0x4c13d0(this);
  this->mbr_0x1019 = 1;
  return;
}



void __thiscall GUI::Edit::meth_0x4c2390(Edit *this)

{
  cls_0x4abc60 *this_00;
  float fVar1;
  dword *pdVar2;
  short sVar3;
  int **ppiVar4;
  int *piVar5;
  dword dVar6;
  void *pvVar7;
  dword dVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  int iVar11;
  VFX_Parameter__vftable_673a20 *pVVar12;
  int iVar13;
  float fVar14;
  uint unaff_retaddr;
  dword dStack_368;
  dword local_364;
  int **local_360;
  dword local_35c;
  float local_358;
  undefined local_354 [20];
  float local_340;
  float local_33c;
  int *local_338;
  int local_334;
  dword local_330;
  dword local_32c;
  void *local_328;
  float local_324;
  undefined local_320 [4];
  undefined *local_31c;
  dword local_30c;
  dword local_308;
  VFX_Parameter__vftable_673a20 *local_304;
  dword local_300;
  float local_2fc;
  int *local_2f8;
  float local_2f4;
  dword local_2f0;
  dword local_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  uint uStack_2dc;
  float local_2d8;
  int iStack_2d4;
  uint local_2d0;
  dword local_2cc;
  undefined auStack_2c8 [4];
  void *pvStack_2c4;
  undefined4 uStack_2b4;
  uint uStack_2b0;
  int local_2ac;
  undefined auStack_2a8 [4];
  void *pvStack_2a4;
  undefined4 uStack_294;
  uint uStack_290;
  int aiStack_28c [7];
  int aiStack_270 [7];
  undefined auStack_254 [580];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632cc2;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  dVar8 = (this->Label).mbr_0xe5c;
  ExceptionList = &pvStack_c;
  this->mbr_0xf38 = 0;
  ppiVar4 = (int **)meth_0x4a8800(this,dVar8);
  if (ppiVar4 == (int **)(this->mbr_0x1030 + 1)) {
    ppiVar4 = (int **)((int)ppiVar4 + -1);
  }
  local_360 = ppiVar4;
  local_354._4_4_ = FUN_0056e0b0();
  local_354._8_4_ = 0;
  fVar1 = (float)this->mbr_0x1014;
  local_4 = 0;
  local_35c = 0;
  local_354._16_4_ = fVar1;
  if (0 < (int)(this->Label).mbr_0xe60) {
    do {
      dVar8 = local_35c;
      local_334 = meth_0x4a87b0(this,local_35c + (int)ppiVar4);
      if (local_334 != 0) {
        iVar13 = *(int *)(local_334 + 4);
        iVar11 = *(int *)(local_334 + 8);
        if ((-1 < (int)this->mbr_0x1030) && (*(char *)(local_334 + 0x25) != '\0')) {
          iVar11 = iVar11 + 1;
        }
        if (((((int)fVar1 <= iVar13) && (iVar13 <= (int)fVar1)) ||
            (((int)fVar1 <= iVar11 && (iVar11 <= (int)fVar1)))) ||
           ((iVar13 <= (int)fVar1 &&
            (((int)fVar1 <= iVar11 || ((iVar13 <= (int)fVar1 && ((int)fVar1 <= iVar11)))))))) {
          ppiVar4 = (int **)(local_354._4_4_ + 4);
          piVar5 = (int *)FUN_00433760(local_354._4_4_,*(int **)(local_354._4_4_ + 4),&local_334);
          Interface::meth_0x4c0df0((Interface *)local_354,1);
          *ppiVar4 = piVar5;
          *(int **)piVar5[1] = piVar5;
          ppiVar4 = local_360;
          dVar8 = local_35c;
        }
      }
      local_35c = dVar8 + 1;
    } while ((int)local_35c < (int)(this->Label).mbr_0xe60);
  }
  local_338 = (int *)0x0;
  local_32c = 0;
  if ((int)local_354._8_4_ < 1) {
    this->mbr_0xf24 = 0;
    if ((int **)local_354._4_4_ == (int **)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)local_354._4_4_;
    }
    Interface::meth_0x4b9d60((Interface *)local_354,&local_2f8,piVar5,(int *)local_354._4_4_);
  }
  else {
    dVar8 = local_354._8_4_ * 4;
    if (dVar8 - this->mbr_0xf28 != 0 && (int)this->mbr_0xf28 <= (int)dVar8) {
      if ((void *)this->mbr_0xf20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0xf20);
      }
      dVar6 = this->mbr_0xf28 + 0x14;
      if (dVar8 - dVar6 != 0 && (int)dVar6 <= (int)dVar8) {
        dVar6 = dVar8;
      }
      this->mbr_0xf28 = dVar6;
      if (0 < (int)dVar6) {
        pvVar7 = operator_new(dVar6 * 0x14);
        this->mbr_0xf20 = (dword)pvVar7;
      }
    }
    dVar6 = local_354._8_4_ * 6;
    this->mbr_0xf24 = dVar8;
    if (dVar6 - this->mbr_0xf34 != 0 && (int)this->mbr_0xf34 <= (int)dVar6) {
      if ((void *)this->mbr_0xf2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0xf2c);
      }
      dVar8 = this->mbr_0xf34 + 0x1e;
      if (dVar6 - dVar8 != 0 && (int)dVar8 <= (int)dVar6) {
        dVar8 = dVar6;
      }
      this->mbr_0xf34 = dVar8;
      if (0 < (int)dVar8) {
        pvVar7 = operator_new(dVar8 * 2);
        this->mbr_0xf2c = (dword)pvVar7;
      }
    }
    this->mbr_0xf30 = dVar6;
    cls_0x4b28a0::meth_0x4b28c0
              ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(undefined4 *)(local_320 + 0x24),&local_2f4)
    ;
    local_2cc = (this->Label).Window.Base.mbr_0x10 - (this->Label).mbr_0xe20;
    local_35c = (this->Label).mbr_0xe1c + (this->Label).Window.Base.mbr_0x8;
    local_304 = (VFX_Parameter__vftable_673a20 *)(local_2cc - local_35c);
    local_328 = (void *)cls_0x4b28a0::meth_0x4b58d0
                                  ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&(this->Label).mbr_0xd3c
                                   ,(this->Label).mbr_0xd58,(this->Label).mbr_0xd5c,
                                   (this->Label).mbr_0xd60);
    if ((int **)local_354._4_4_ == (int **)0x0) {
      local_360 = (int **)0x0;
    }
    else {
      local_360 = *(int ***)local_354._4_4_;
    }
    if (local_360 != (int **)local_354._4_4_) {
      local_334 = 0;
      local_300 = 6;
      do {
        pdVar2 = (dword *)local_360[2];
        meth_0x4a7db0(this,(int)pdVar2,(int *)&local_2ec,(int *)&local_2d8,&local_2ac,&local_2d0);
        local_308 = 0xf;
        local_30c = 0;
        local_31c = (undefined *)((uint)local_31c & 0xffffff00);
        local_4 = CONCAT31(local_4._1_3_,1);
        meth_0x4a8b90(this,*pdVar2,local_320);
        local_364 = local_2ec;
        local_354._12_4_ = local_2ec;
        dVar8 = (this->Label).mbr_0xd6c;
        local_340 = local_2d8;
        local_324 = (float)((int)local_2d8 + local_2d0);
        if (dVar8 == 1) {
          iVar13 = pdVar2[3] - pdVar2[5];
          pVVar12 = local_304;
LAB_004c26d2:
          local_330 = (int)&pVVar12->virt_meth_0x4ff950_0 + iVar13;
        }
        else {
          if (dVar8 == 2) {
            iVar13 = (int)((int)local_304 - pdVar2[5]) / 2;
            pVVar12 = (VFX_Parameter__vftable_673a20 *)pdVar2[3];
            goto LAB_004c26d2;
          }
          local_330 = pdVar2[3];
        }
        local_33c = (float)pdVar2[2];
        fVar1 = (float)pdVar2[1];
        if (*(char *)((int)pdVar2 + 0x25) != '\0') {
          ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_320,1);
          local_33c = (float)((int)local_33c + 1);
        }
        fVar14 = (float)local_354._16_4_;
        if ((int)local_354._16_4_ <= (int)fVar1) {
          fVar14 = fVar1;
        }
        local_358 = (float)local_354._16_4_;
        if ((int)local_33c <= (int)local_354._16_4_) {
          local_358 = local_33c;
        }
        (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2790_16)
                  ((Base *)this,(int)&local_2f0,(int)&local_2f8);
        dVar8 = *pdVar2;
        if ((int)((uint)(dVar8 == this->mbr_0x1030 + 1) + (int)fVar1) <= (int)fVar14) {
          if (dVar8 == this->mbr_0x1030) {
LAB_004c2794:
            iVar13 = 0;
          }
          else {
            dVar6 = (this->Label).mbr_0xe50;
            if (dVar6 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = (int)((this->Label).mbr_0xe54 - dVar6) / 0x28;
            }
            if ((dVar8 == iVar13 - 1U) || (*(char *)((int)pdVar2 + 0x25) != '\0'))
            goto LAB_004c2794;
            iVar13 = 1;
          }
          if ((int)fVar14 <= (int)local_33c - iVar13) {
            dStack_368 = pdVar2[3];
            puVar9 = local_31c;
            if (local_308 < 0x10) {
              puVar9 = local_320 + 4;
            }
            uStack_2e8 = CONCAT31(uStack_2e8._1_3_,puVar9[(int)fVar14 - (int)fVar1]);
            local_364 = local_330 - local_35c;
            Label::meth_0x4a7d60
                      (&this->Label,local_328,puVar9[(int)fVar14 - (int)fVar1],aiStack_270,local_364
                      );
            if ((int)fVar1 < (int)fVar14) {
              cls_0x4d8d70::meth_0x458ef0
                        ((cls_0x4d8d70 *)local_320,auStack_2c8,0,(int)fVar14 - (int)fVar1);
              local_4._0_1_ = 2;
              iVar13 = meth_0x4a8200(this,(int)auStack_2c8,local_328,local_364);
              dStack_368 = dStack_368 + iVar13;
              local_4 = CONCAT31(local_4._1_3_,1);
              if (0xf < uStack_2b0) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_2c4);
              }
              uStack_2b0 = 0xf;
              uStack_2b4 = 0;
              pvStack_2c4 = (void *)((uint)pvStack_2c4 & 0xffffff00);
            }
            Label::meth_0x4a7ec0
                      (&this->Label,aiStack_270,pdVar2[3],pdVar2[4],pdVar2[7],pdVar2[8],
                       (int *)&dStack_368,&iStack_2e0,&iStack_2d4,&uStack_2dc,(float *)0x0);
            local_364 = dStack_368 - local_2f0;
          }
        }
        dVar8 = *pdVar2;
        if ((int)((uint)(dVar8 == this->mbr_0x1030 + 1) + (int)fVar1) <= (int)local_358) {
          if (dVar8 == this->mbr_0x1030) {
LAB_004c292f:
            iVar13 = 0;
          }
          else {
            dVar6 = (this->Label).mbr_0xe50;
            if (dVar6 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = (int)((this->Label).mbr_0xe54 - dVar6) / 0x28;
            }
            if ((dVar8 == iVar13 - 1U) || (*(char *)((int)pdVar2 + 0x25) != '\0'))
            goto LAB_004c292f;
            iVar13 = 1;
          }
          if ((int)local_358 <= (int)local_33c - iVar13) {
            dStack_368 = pdVar2[3];
            puVar9 = local_31c;
            if (local_308 < 0x10) {
              puVar9 = local_320 + 4;
            }
            iVar13 = local_330 - local_35c;
            uStack_2e4 = CONCAT31(uStack_2e4._1_3_,puVar9[(int)local_358 - (int)fVar1]);
            Label::meth_0x4a7d60
                      (&this->Label,local_328,puVar9[(int)local_358 - (int)fVar1],aiStack_28c,iVar13
                      );
            if ((int)fVar1 < (int)local_358) {
              cls_0x4d8d70::meth_0x458ef0
                        ((cls_0x4d8d70 *)local_320,auStack_2a8,0,(int)local_358 - (int)fVar1);
              local_4._0_1_ = 3;
              iVar13 = meth_0x4a8200(this,(int)auStack_2a8,local_328,iVar13);
              dStack_368 = dStack_368 + iVar13;
              local_4 = CONCAT31(local_4._1_3_,1);
              if (0xf < uStack_290) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_2a4);
              }
              uStack_290 = 0xf;
              uStack_294 = 0;
              pvStack_2a4 = (void *)((uint)pvStack_2a4 & 0xffffff00);
            }
            Label::meth_0x4a7ec0
                      (&this->Label,aiStack_28c,pdVar2[3],pdVar2[4],pdVar2[7],pdVar2[8],
                       (int *)&dStack_368,&iStack_2e0,&iStack_2d4,&uStack_2dc,(float *)0x0);
            if ((this->mbr_0x1010 != this->mbr_0x1014) ||
               (iVar13 = aiStack_28c[0], this->mbr_0x1018 != 0)) {
              iVar13 = 2;
            }
            local_354._12_4_ = (iVar13 - local_2f0) + dStack_368;
          }
        }
        if ((int)local_364 < (int)local_35c) {
          local_364 = local_35c;
        }
        if ((int)local_2cc < (int)local_364) {
          local_364 = local_2cc;
        }
        if ((int)local_354._12_4_ < (int)local_35c) {
          local_354._12_4_ = local_35c;
        }
        if ((int)local_2cc < (int)local_354._12_4_) {
          local_354._12_4_ = local_2cc;
        }
        if (local_364 != local_354._12_4_) {
          local_340 = (float)(int)local_340 * local_2f4;
          local_358 = (float)local_354._12_4_ * local_2fc;
          local_324 = (float)(int)local_324 * local_2f4;
          if ((int)local_338 <= (int)(this->mbr_0xf28 - 4)) {
            *(float *)(local_334 + this->mbr_0xf20) = (float)local_364 * local_2fc;
            *(float *)(local_334 + 4 + this->mbr_0xf20) = local_340;
            *(float *)(local_334 + 0x14 + this->mbr_0xf20) = local_358;
            *(float *)(local_334 + 0x18 + this->mbr_0xf20) = local_340;
            *(float *)(this->mbr_0xf20 + 0x28 + local_334) = (float)local_364 * local_2fc;
            *(float *)(local_334 + 0x2c + this->mbr_0xf20) = local_324;
            *(float *)(local_334 + 0x3c + this->mbr_0xf20) = local_358;
            *(float *)(local_334 + 0x40 + this->mbr_0xf20) = local_324;
            *(dword *)(local_334 + 0x10 + this->mbr_0xf20) = this->mbr_0x1024;
            *(dword *)(local_334 + 0x24 + this->mbr_0xf20) = this->mbr_0x1024;
            *(dword *)(local_334 + 0x38 + this->mbr_0xf20) = this->mbr_0x1024;
            *(dword *)(local_334 + 0x4c + this->mbr_0xf20) = this->mbr_0x1024;
            *(undefined4 *)(local_334 + 0xc + this->mbr_0xf20) = 0x3f800000;
            *(undefined4 *)(local_334 + 0x20 + this->mbr_0xf20) = 0x3f800000;
            *(undefined4 *)(local_334 + 0x34 + this->mbr_0xf20) = 0x3f800000;
            *(undefined4 *)(local_334 + 0x48 + this->mbr_0xf20) = 0x3f800000;
            if ((int)local_32c <= (int)(this->mbr_0xf34 - 6)) {
              sVar3 = (short)local_338;
              *(short *)((local_300 - 6) + this->mbr_0xf2c) = sVar3 + 3;
              *(short *)((local_300 - 4) + this->mbr_0xf2c) = sVar3 + 2;
              *(short *)((local_300 - 2) + this->mbr_0xf2c) = sVar3;
              *(short *)(local_300 + this->mbr_0xf2c) = sVar3 + 3;
              *(short *)(local_300 + 2 + this->mbr_0xf2c) = sVar3;
              *(short *)(local_300 + 4 + this->mbr_0xf2c) = sVar3 + 1;
              local_32c = local_32c + 6;
              local_300 = local_300 + 0xc;
            }
            local_338 = local_338 + 1;
            local_334 = local_334 + 0x50;
            local_340 = local_358;
          }
        }
        local_4 = local_4 & 0xffffff00;
        if (0xf < local_308) {
                    /* WARNING: Subroutine does not return */
          _free(local_31c);
        }
        local_360 = (int **)*local_360;
        local_308 = 0xf;
        local_30c = 0;
        local_31c = (undefined *)((uint)local_31c & 0xffffff00);
      } while (local_360 != (int **)local_354._4_4_);
    }
    this->mbr_0xe74 = this->mbr_0xf20;
    pdVar2 = &this->mbr_0xe68;
    this->mbr_0xf24 = (dword)local_338;
    this->mbr_0xf30 = local_32c;
    *pdVar2 = 0;
    this->mbr_0xe6c = 0xffffffff;
    this->mbr_0xe78 = this->mbr_0xf2c;
    piVar5 = local_338;
    iVar13 = FUN_0047460d(0x44);
    Gregorian::meth_0x4ab680((Gregorian *)pdVar2,0x44,iVar13,piVar5);
    Gregorian::meth_0x4ab6c0((Gregorian *)pdVar2,2,this->mbr_0xf30);
    this_00 = &this->cls_0x4abc60;
    this_00->mbr_0x0 = 0;
    cls_0x4abc60::meth_0x4abc10(this_00);
    pvVar7 = (void *)(this->cls_0x4abc60).mbr_0xc;
    if (pvVar7 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar7,0x244,*(int *)((int)pvVar7 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar7 + -4));
    }
    puVar10 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)pdVar2,1);
    *puVar10 = 0;
    puVar10[8] = 4;
    puVar10[9] = 1;
    cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)auStack_254);
    local_4._0_1_ = 4;
    auStack_254._28_4_ = 0xf;
    auStack_254._32_4_ = 0xf;
    auStack_254._40_4_ = 1;
    auStack_254[188] = 0;
    ::cls_0x50db20::cls_0x50db20
              ((cls_0x50db20 *)(this->cls_0x4abc60).mbr_0xc,(_String_base *)auStack_254);
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = (int)local_338 / 2;
    dVar8 = this->mbr_0xed8;
    *(dword **)(dVar8 + 0x14) = &this->mbr_0xedc;
    *(undefined4 *)(dVar8 + 0x10) = 1;
    cls_0x4abc60::meth_0x4abdd0(this_00);
    this->mbr_0xe6c = 0xffffffff;
    cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this->mbr_0xed4,(int)pdVar2);
    *(dword *)(this->mbr_0xed4 + 0xc) = this->mbr_0xed8;
    this->mbr_0xf38 = 1;
    this->mbr_0x101a = 1;
    local_4 = CONCAT31(local_4._1_3_,5);
    _eh_vector_destructor_iterator_(auStack_254 + 0xc0,0x1c,4,cls_0x4d8d70::meth_0x4b2dd0);
    if (0xf < (uint)auStack_254._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_254._4_4_);
    }
    piVar5 = (int *)0x0;
    auStack_254._24_4_ = 0xf;
    auStack_254._20_4_ = 0;
    auStack_254._4_4_ = auStack_254._4_4_ & 0xffffff00;
    if ((int **)local_354._4_4_ != (int **)0x0) {
      piVar5 = *(int **)local_354._4_4_;
    }
    Interface::meth_0x4b9d60((Interface *)local_354,&local_2f8,piVar5,(int *)local_354._4_4_);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)local_354._4_4_);
}



void __thiscall GUI::Edit::meth_0x4c2f20(Edit *this)

{
  int **ppiVar1;
  int iVar2;
  dword *pdVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  dword dVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  dword dVar16;
  uint unaff_retaddr;
  dword dStack_370;
  float local_36c;
  float local_368;
  int **local_364;
  undefined local_360 [20];
  float local_34c;
  float local_348;
  dword local_344;
  float local_340;
  dword local_33c;
  float local_338;
  dword local_334;
  void *local_330;
  int *local_32c;
  dword local_328;
  float local_324;
  undefined local_320 [4];
  undefined *local_31c;
  dword local_30c;
  dword local_308;
  VFX_Parameter__vftable_673a20 *local_304;
  dword local_300;
  float local_2fc;
  int *local_2f8;
  int local_2f4;
  dword local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  dword local_2e4;
  int iStack_2e0;
  uint uStack_2dc;
  float local_2d8;
  int iStack_2d4;
  uint local_2d0;
  dword local_2cc;
  undefined auStack_2c8 [4];
  void *pvStack_2c4;
  undefined4 uStack_2b4;
  uint uStack_2b0;
  int local_2ac;
  undefined auStack_2a8 [4];
  void *pvStack_2a4;
  undefined4 uStack_294;
  uint uStack_290;
  int aiStack_28c [7];
  int aiStack_270 [7];
  cls_0x4b60b0 cStack_254;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  pvVar8 = ExceptionList;
  uVar5 = DAT_007062c0;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632d07;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  this->mbr_0x100c = 0;
  if (this->mbr_0x1010 == this->mbr_0x1014) {
    ExceptionList = pvVar8;
    FUN_00616e15(uVar5);
    return;
  }
  local_364 = (int **)meth_0x4a8800(this,(this->Label).mbr_0xe5c);
  if (local_364 == (int **)(this->mbr_0x1030 + 1)) {
    local_364 = (int **)((int)local_364 + -1);
  }
  local_360._4_4_ = FUN_0056e0b0();
  local_360._8_4_ = 0;
  fVar15 = (float)this->mbr_0x1010;
  fVar12 = (float)this->mbr_0x1014;
  local_4 = 0;
  fVar13 = fVar15;
  if ((int)fVar12 <= (int)fVar15) {
    fVar13 = fVar12;
  }
  if ((int)fVar15 <= (int)fVar12) {
    fVar15 = fVar12;
  }
  iVar14 = 0;
  local_368 = fVar15;
  local_34c = fVar13;
  if (0 < (int)(this->Label).mbr_0xe60) {
    do {
      local_344 = meth_0x4a87b0(this,(int)local_364 + iVar14);
      iVar2 = *(int *)(local_344 + 4);
      iVar11 = *(int *)(local_344 + 8);
      if ((-1 < (int)this->mbr_0x1030) && (*(char *)(local_344 + 0x25) != '\0')) {
        iVar11 = iVar11 + 1;
      }
      if ((((((int)fVar13 <= iVar2) && (iVar2 <= (int)fVar15)) ||
           (((int)fVar13 <= iVar11 && (iVar11 <= (int)fVar15)))) ||
          ((iVar2 <= (int)fVar13 && ((int)fVar13 <= iVar11)))) ||
         ((iVar2 <= (int)fVar15 && ((int)fVar15 <= iVar11)))) {
        ppiVar1 = (int **)(local_360._4_4_ + 4);
        piVar6 = (int *)FUN_00433760(local_360._4_4_,*(int **)(local_360._4_4_ + 4),&local_344);
        Interface::meth_0x4c0df0((Interface *)local_360,1);
        *ppiVar1 = piVar6;
        *(int **)piVar6[1] = piVar6;
        fVar13 = local_34c;
        fVar15 = local_368;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)(this->Label).mbr_0xe60);
  }
  local_32c = (int *)0x0;
  local_33c = 0;
  if ((int)local_360._8_4_ < 1) {
    this->mbr_0xff8 = 0;
    if ((int **)local_360._4_4_ == (int **)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = *(int **)local_360._4_4_;
    }
    Interface::meth_0x4b9d60((Interface *)local_360,&local_2f8,piVar6,(int *)local_360._4_4_);
  }
  else {
    dVar16 = local_360._8_4_ * 4;
    if (dVar16 - this->mbr_0xffc != 0 && (int)this->mbr_0xffc <= (int)dVar16) {
      if ((void *)this->mbr_0xff4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0xff4);
      }
      dVar7 = this->mbr_0xffc + 0x14;
      if (dVar16 - dVar7 != 0 && (int)dVar7 <= (int)dVar16) {
        dVar7 = dVar16;
      }
      this->mbr_0xffc = dVar7;
      if (0 < (int)dVar7) {
        pvVar8 = operator_new(dVar7 * 0x14);
        this->mbr_0xff4 = (dword)pvVar8;
      }
    }
    this->mbr_0xff8 = dVar16;
    dVar16 = local_360._8_4_ * 6;
    if (dVar16 - this->mbr_0x1008 != 0 && (int)this->mbr_0x1008 <= (int)dVar16) {
      if ((void *)this->mbr_0x1000 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0x1000);
      }
      dVar7 = this->mbr_0x1008 + 0x1e;
      if (dVar16 - dVar7 != 0 && (int)dVar7 <= (int)dVar16) {
        dVar7 = dVar16;
      }
      this->mbr_0x1008 = dVar7;
      if (0 < (int)dVar7) {
        pvVar8 = operator_new(dVar7 * 2);
        this->mbr_0x1000 = (dword)pvVar8;
      }
    }
    this->mbr_0x1004 = dVar16;
    cls_0x4b28a0::meth_0x4b28c0
              ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(undefined4 *)(local_320 + 0x24),
               (undefined4 *)(local_320 + 0x1c));
    local_2cc = (this->Label).Window.Base.mbr_0x10 - (this->Label).mbr_0xe20;
    local_328 = (this->Label).mbr_0xe1c + (this->Label).Window.Base.mbr_0x8;
    local_2f4 = local_2cc - local_328;
    local_330 = (void *)cls_0x4b28a0::meth_0x4b58d0
                                  ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&(this->Label).mbr_0xd3c
                                   ,(this->Label).mbr_0xd58,(this->Label).mbr_0xd5c,
                                   (this->Label).mbr_0xd60);
    if ((int **)local_360._4_4_ == (int **)0x0) {
      local_364 = (int **)0x0;
    }
    else {
      local_364 = *(int ***)local_360._4_4_;
    }
    if (local_364 != (int **)local_360._4_4_) {
      local_344 = 0;
      local_300 = 6;
      do {
        pdVar3 = (dword *)local_364[2];
        meth_0x4a7db0(this,(int)pdVar3,(int *)&local_2e4,(int *)&local_2d8,&local_2ac,&local_2d0);
        local_308 = 0xf;
        local_30c = 0;
        local_31c = (undefined *)((uint)local_31c & 0xffffff00);
        local_4 = CONCAT31(local_4._1_3_,1);
        meth_0x4a8b90(this,*pdVar3,local_320);
        local_360._12_4_ = local_2e4;
        local_360._16_4_ = local_2e4;
        local_348 = local_2d8;
        local_324 = (float)((int)local_2d8 + local_2d0);
        dVar16 = (this->Label).mbr_0xd6c;
        if (dVar16 == 1) {
          iVar14 = local_2f4 - pdVar3[5];
LAB_004c3292:
          local_334 = iVar14 + pdVar3[3];
        }
        else {
          if (dVar16 == 2) {
            iVar14 = (int)(local_2f4 - pdVar3[5]) / 2;
            goto LAB_004c3292;
          }
          local_334 = pdVar3[3];
        }
        fVar15 = (float)pdVar3[1];
        fVar12 = (float)pdVar3[2];
        local_36c = fVar15;
        if (*(char *)((int)pdVar3 + 0x25) != '\0') {
          local_338 = fVar12;
          ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_320,1);
          fVar12 = (float)((int)fVar12 + 1);
        }
        if ((int)fVar15 < (int)local_34c) {
          fVar15 = local_34c;
        }
        fVar13 = local_368;
        if ((int)fVar12 <= (int)local_368) {
          fVar13 = fVar12;
        }
        local_340 = fVar13;
        local_338 = fVar12;
        (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2790_16)
                  ((Base *)this,(int)&local_2f0,(int)&local_2f8);
        dVar16 = *pdVar3;
        if ((int)((uint)(dVar16 == this->mbr_0x1030 + 1) + (int)local_36c) <= (int)fVar15) {
          if ((dVar16 == this->mbr_0x1030) || (local_34c != local_368)) {
LAB_004c3360:
            iVar14 = 0;
          }
          else {
            dVar7 = (this->Label).mbr_0xe50;
            if (dVar7 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = (int)((this->Label).mbr_0xe54 - dVar7) / 0x28;
            }
            if ((dVar16 == iVar14 - 1U) || (*(char *)((int)pdVar3 + 0x25) != '\0'))
            goto LAB_004c3360;
            iVar14 = 1;
          }
          if ((int)fVar15 <= (int)local_338 - iVar14) {
            dStack_370 = pdVar3[3];
            puVar9 = local_31c;
            if (local_308 < 0x10) {
              puVar9 = local_320 + 4;
            }
            iVar14 = local_334 - local_328;
            uStack_2e8 = CONCAT31(uStack_2e8._1_3_,puVar9[(int)fVar15 - (int)local_36c]);
            Label::meth_0x4a7d60
                      (&this->Label,local_330,puVar9[(int)fVar15 - (int)local_36c],aiStack_28c,
                       iVar14);
            if ((int)local_36c < (int)fVar15) {
              cls_0x4d8d70::meth_0x458ef0
                        ((cls_0x4d8d70 *)local_320,auStack_2c8,0,(int)fVar15 - (int)local_36c);
              local_4._0_1_ = 2;
              iVar14 = meth_0x4a8200(this,(int)auStack_2c8,local_330,iVar14);
              dStack_370 = dStack_370 + iVar14;
              local_4 = CONCAT31(local_4._1_3_,1);
              if (0xf < uStack_2b0) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_2c4);
              }
              uStack_2b0 = 0xf;
              uStack_2b4 = 0;
              pvStack_2c4 = (void *)((uint)pvStack_2c4 & 0xffffff00);
            }
            Label::meth_0x4a7ec0
                      (&this->Label,aiStack_28c,pdVar3[3],pdVar3[4],pdVar3[7],pdVar3[8],
                       (int *)&dStack_370,&iStack_2e0,&iStack_2d4,&uStack_2dc,(float *)0x0);
            local_360._12_4_ = dStack_370 - local_2f0;
            fVar13 = local_340;
          }
        }
        dVar16 = *pdVar3;
        if ((int)((uint)(dVar16 == this->mbr_0x1030 + 1) + (int)local_36c) <= (int)fVar13) {
          if ((dVar16 == this->mbr_0x1030) || (local_34c != local_368)) {
LAB_004c34ff:
            iVar14 = 0;
          }
          else {
            dVar7 = (this->Label).mbr_0xe50;
            if (dVar7 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = (int)((this->Label).mbr_0xe54 - dVar7) / 0x28;
            }
            if ((dVar16 == iVar14 - 1U) || (*(char *)((int)pdVar3 + 0x25) != '\0'))
            goto LAB_004c34ff;
            iVar14 = 1;
          }
          if ((int)fVar13 <= (int)local_338 - iVar14) {
            dStack_370 = pdVar3[3];
            puVar9 = local_31c;
            if (local_308 < 0x10) {
              puVar9 = local_320 + 4;
            }
            iVar14 = local_334 - local_328;
            uStack_2ec = CONCAT31(uStack_2ec._1_3_,puVar9[(int)fVar13 - (int)local_36c]);
            Label::meth_0x4a7d60
                      (&this->Label,local_330,puVar9[(int)fVar13 - (int)local_36c],aiStack_270,
                       iVar14);
            if ((int)local_36c < (int)fVar13) {
              cls_0x4d8d70::meth_0x458ef0
                        ((cls_0x4d8d70 *)local_320,auStack_2a8,0,(int)fVar13 - (int)local_36c);
              local_4._0_1_ = 3;
              iVar14 = meth_0x4a8200(this,(int)auStack_2a8,local_330,iVar14);
              dStack_370 = dStack_370 + iVar14;
              local_4 = CONCAT31(local_4._1_3_,1);
              if (0xf < uStack_290) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_2a4);
              }
              uStack_290 = 0xf;
              uStack_294 = 0;
              pvStack_2a4 = (void *)((uint)pvStack_2a4 & 0xffffff00);
            }
            Label::meth_0x4a7ec0
                      (&this->Label,aiStack_270,pdVar3[3],pdVar3[4],pdVar3[7],pdVar3[8],
                       (int *)&dStack_370,&iStack_2e0,&iStack_2d4,&uStack_2dc,(float *)0x0);
            local_360._16_4_ = dStack_370 - local_2f0;
          }
        }
        if ((int)local_360._12_4_ < (int)local_328) {
          local_360._12_4_ = local_328;
        }
        if ((int)local_2cc < (int)local_360._12_4_) {
          local_360._12_4_ = local_2cc;
        }
        if ((int)local_360._16_4_ < (int)local_328) {
          local_360._16_4_ = local_328;
        }
        if ((int)local_2cc < (int)local_360._16_4_) {
          local_360._16_4_ = local_2cc;
        }
        if (local_360._12_4_ != local_360._16_4_) {
          local_348 = (float)(int)local_348 * (float)local_304;
          local_340 = (float)local_360._16_4_ * local_2fc;
          local_324 = (float)(int)local_324 * (float)local_304;
          if ((int)local_32c <= (int)(this->mbr_0xffc - 4)) {
            *(float *)(local_344 + this->mbr_0xff4) = (float)local_360._12_4_ * local_2fc;
            *(float *)(local_344 + 4 + this->mbr_0xff4) = local_348;
            *(float *)(local_344 + 0x14 + this->mbr_0xff4) = local_340;
            *(float *)(local_344 + 0x18 + this->mbr_0xff4) = local_348;
            *(float *)(this->mbr_0xff4 + 0x28 + local_344) = (float)local_360._12_4_ * local_2fc;
            *(float *)(local_344 + 0x2c + this->mbr_0xff4) = local_324;
            *(float *)(local_344 + 0x3c + this->mbr_0xff4) = local_340;
            *(float *)(local_344 + 0x40 + this->mbr_0xff4) = local_324;
            *(dword *)(local_344 + 0x10 + this->mbr_0xff4) = this->mbr_0x1028;
            *(dword *)(local_344 + 0x24 + this->mbr_0xff4) = this->mbr_0x1028;
            *(dword *)(local_344 + 0x38 + this->mbr_0xff4) = this->mbr_0x1028;
            *(dword *)(local_344 + 0x4c + this->mbr_0xff4) = this->mbr_0x1028;
            *(undefined4 *)(local_344 + 0xc + this->mbr_0xff4) = 0x3f800000;
            *(undefined4 *)(local_344 + 0x20 + this->mbr_0xff4) = 0x3f800000;
            *(undefined4 *)(local_344 + 0x34 + this->mbr_0xff4) = 0x3f800000;
            *(undefined4 *)(local_344 + 0x48 + this->mbr_0xff4) = 0x3f800000;
            if ((int)local_33c <= (int)(this->mbr_0x1008 - 6)) {
              sVar4 = (short)local_32c;
              *(short *)((local_300 - 6) + this->mbr_0x1000) = sVar4 + 3;
              *(short *)((local_300 - 4) + this->mbr_0x1000) = sVar4 + 2;
              *(short *)((local_300 - 2) + this->mbr_0x1000) = sVar4;
              *(short *)(local_300 + this->mbr_0x1000) = sVar4 + 3;
              *(short *)(local_300 + 2 + this->mbr_0x1000) = sVar4;
              *(short *)(local_300 + 4 + this->mbr_0x1000) = sVar4 + 1;
              local_33c = local_33c + 6;
              local_300 = local_300 + 0xc;
            }
            local_32c = local_32c + 1;
            local_344 = local_344 + 0x50;
            local_348 = local_340;
          }
        }
        local_4 = local_4 & 0xffffff00;
        if (0xf < local_308) {
                    /* WARNING: Subroutine does not return */
          _free(local_31c);
        }
        local_364 = (int **)*local_364;
        local_308 = 0xf;
        local_30c = 0;
        local_31c = (undefined *)((uint)local_31c & 0xffffff00);
      } while (local_364 != (int **)local_360._4_4_);
    }
    this->mbr_0xf48 = this->mbr_0xff4;
    pdVar3 = &this->mbr_0xf3c;
    this->mbr_0xff8 = (dword)local_32c;
    this->mbr_0x1004 = local_33c;
    *pdVar3 = 0;
    this->mbr_0xf40 = 0xffffffff;
    this->mbr_0xf4c = this->mbr_0x1000;
    piVar6 = local_32c;
    iVar14 = FUN_0047460d(0x44);
    Gregorian::meth_0x4ab680((Gregorian *)pdVar3,0x44,iVar14,piVar6);
    Gregorian::meth_0x4ab6c0((Gregorian *)pdVar3,2,this->mbr_0x1004);
    puVar9 = &this->field_0xf64;
    *(undefined4 *)puVar9 = 0;
    cls_0x4abc60::meth_0x4abc10((cls_0x4abc60 *)puVar9);
    pvVar8 = *(void **)&this->field_0xf70;
    if (pvVar8 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar8,0x244,*(int *)((int)pvVar8 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar8 + -4));
    }
    puVar10 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)pdVar3,1);
    *puVar10 = 0;
    puVar10[8] = 4;
    puVar10[9] = 1;
    cls_0x4b60b0::cls_0x4b60b0(&cStack_254);
    local_4._0_1_ = 4;
    cStack_254.mbr_0x1c = 0xf;
    cStack_254.mbr_0x20 = 0xf;
    cStack_254.mbr_0x28 = 1;
    cStack_254.mbr_0xbc = 0;
    ::cls_0x50db20::cls_0x50db20(*(cls_0x50db20 **)&this->field_0xf70,(_String_base *)&cStack_254);
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = (int)local_32c / 2;
    dVar16 = this->mbr_0xfac;
    *(dword **)(dVar16 + 0x14) = &this->mbr_0xfb0;
    *(undefined4 *)(dVar16 + 0x10) = 1;
    cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)puVar9);
    this->mbr_0xf40 = 0xffffffff;
    cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this->mbr_0xfa8,(int)pdVar3);
    *(dword *)(this->mbr_0xfa8 + 0xc) = this->mbr_0xfac;
    this->mbr_0x100c = 1;
    this->mbr_0x101a = 1;
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4b60b0::meth_0x401720(&cStack_254);
    if ((int **)local_360._4_4_ == (int **)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = *(int **)local_360._4_4_;
    }
    Interface::meth_0x4b9d60((Interface *)local_360,&local_2f8,piVar6,(int *)local_360._4_4_);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)local_360._4_4_);
}



void __thiscall GUI::Edit::virt_meth_0x4c3ac0(Edit *this)

{
  Window::virt_meth_0x4afa90((Window *)this);
  if (this->mbr_0x1019 != 0) {
    meth_0x4c2390(this);
    meth_0x4c2f20(this);
    this->mbr_0x1019 = 0;
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall GUI::Edit::meth_0x4c3af0(Edit *this,int param_1)

{
  undefined *this_00;
  dword dVar1;
  cls_0x50db20 *pcVar2;
  dword dVar3;
  void *pvVar4;
  dword dVar5;
  dword *pdVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  dword dVar10;
  _String_base *p_Var11;
  byte *pbVar12;
  Base *pBVar13;
  uint uVar14;
  int extraout_ECX;
  int iVar15;
  cls_0x4d8d70 *this_01;
  char *pcVar16;
  int iVar17;
  undefined4 *unaff_EBP;
  int iVar18;
  FILE *unaff_ESI;
  FILE *unaff_EDI;
  void *unaff_retaddr;
  int in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  undefined4 local_1b4;
  int iStack_1b0;
  void *pvStack_1ac;
  char *local_1a8;
  char *local_1a4;
  undefined local_1a0 [16];
  dword local_190;
  dword local_18c;
  dword dStack_188;
  VFX_Parameter__vftable_673a20 *pVStack_184;
  dword dStack_180;
  undefined auStack_17c [4];
  undefined auStack_178 [16];
  dword dStack_168;
  dword local_164;
  undefined4 local_160;
  undefined auStack_15c [12];
  dword local_150;
  dword local_14c;
  uint uStack_148;
  undefined auStack_144 [8];
  undefined auStack_13c [28];
  VFX_Parameter__vftable_673a20 *pVStack_120;
  undefined uStack_11c;
  dword dStack_10c;
  dword dStack_108;
  dword adStack_104 [6];
  undefined auStack_ec [32];
  undefined auStack_cc [56];
  undefined auStack_94 [60];
  undefined auStack_58 [24];
  cls_0x4d8d70 cStack_40;
  undefined *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632e2a;
  cStack_40.mbr_0x34 = (dword)ExceptionList;
  cStack_40.mbr_0x30 = DAT_007062c0 ^ (uint)unaff_retaddr;
  local_1b4 = *(dword *)(param_1 + 4);
  unaff_retaddr = unaff_retaddr;
  switch(local_1b4) {
  case 0xcf:
  case 0x14f:
    local_14c = 0xf;
    local_150 = 0;
    local_160 = (uint)local_160._1_3_ << 8;
    local_4 = 0x11;
    ExceptionList = &cStack_40.mbr_0x34;
    (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
              ((Base *)this,(undefined4 *)(auStack_178 + 0x14),&unaff_EDI->_ptr);
    if (((int)this->mbr_0x1014 < (int)local_14c) || (this->mbr_0x1010 != this->mbr_0x1014)) {
      dVar3 = 0xffffffff;
      if (((*(byte *)(param_1 + 0x14) & 1) == 0) &&
         (uVar7 = (*(this->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2830_36)
                            ((Base *)this,unaff_ESI), (char)uVar7 != '\0')) {
        iVar8 = meth_0x4a8800(this,this->mbr_0x1014);
        if (iVar8 == this->mbr_0x1030 + 1) {
          iVar8 = iVar8 + -1;
        }
        pdVar6 = (dword *)meth_0x4a87b0(this,iVar8);
        if (pdVar6 == (dword *)0x0) goto LAB_004c4a57;
        this->mbr_0x1014 = (uint)(*(char *)((int)pdVar6 + 0x25) != '\0') + pdVar6[2];
        dVar3 = *pdVar6;
      }
      else {
        this->mbr_0x1014 = auStack_144._0_4_;
      }
      if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
        this->mbr_0x1010 = this->mbr_0x1014;
      }
      meth_0x4c13d0(this);
      this->mbr_0x1019 = 1;
      local_1b4 = 0x1000000;
      if (-1 < (int)dVar3) {
        this->mbr_0x1030 = dVar3;
      }
    }
    goto LAB_004c4ce3;
  case 0xd0:
  case 0x150:
    ExceptionList = &cStack_40.mbr_0x34;
    uVar7 = (*(this->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2830_36)((Base *)this,unaff_EDI)
    ;
    unaff_retaddr = unaff_retaddr;
    if ((char)uVar7 == '\0') goto switchD_004c3b5e_caseD_2;
    if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
      meth_0x4c05c0(this,-1);
      unaff_retaddr = unaff_retaddr;
      goto switchD_004c3b5e_caseD_2;
    }
    dStack_188 = 0xf;
    local_18c = 0;
    local_1a0._4_4_ = local_1a0._4_4_ & 0xffffff00;
    unaff_retaddr = (void *)0xe;
    (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
              ((Base *)this,(undefined4 *)local_1a0,&unaff_ESI->_ptr);
    dVar3 = this->mbr_0x1014;
    if (((int)dVar3 < (int)dStack_188) || (this->mbr_0x1010 != dVar3)) {
      iVar8 = meth_0x4a8800(this,dVar3);
      if (iVar8 == this->mbr_0x1030 + 1) {
        iVar8 = iVar8 + -1;
      }
      iVar9 = meth_0x434220(this);
      if (iVar8 < iVar9 + -1) {
        iVar9 = meth_0x4a87b0(this,iVar8);
        local_1a8 = (char *)(iVar8 + 1);
        iVar8 = meth_0x4a87b0(this,(int)local_1a8);
        if ((iVar9 != 0) && (iVar8 != 0)) {
          local_1b4 = *(dword *)(iVar8 + 8);
          if (*(char *)(iVar8 + 0x25) != '\0') {
            local_1b4 = local_1b4 + 1;
          }
          pvVar4 = (void *)cls_0x4b28a0::meth_0x4b58d0
                                     ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,
                                      &(this->Label).mbr_0xd3c,(this->Label).mbr_0xd58,
                                      (this->Label).mbr_0xd5c,(this->Label).mbr_0xd60);
          local_160 = 0xf;
          local_164 = 0;
          auStack_178[4] = 0;
          p_Var11 = (_String_base *)
                    cls_0x4d8d70::meth_0x458ef0
                              ((cls_0x4d8d70 *)(local_1a0 + 4),auStack_cc,*(uint *)(iVar9 + 4),
                               this->mbr_0x1014 - *(uint *)(iVar9 + 4));
          ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(auStack_17c + 4),p_Var11,0,0xffffffff);
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_cc);
          dVar3 = (this->Label).mbr_0xd6c;
          iVar15 = (this->Label).mbr_0xe1c + (this->Label).Window.Base.mbr_0x8;
          iVar17 = ((this->Label).Window.Base.mbr_0x10 - (this->Label).mbr_0xe20) - iVar15;
          if (dVar3 == 1) {
            iVar18 = *(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 0x14);
LAB_004c43e2:
            iVar18 = iVar18 + iVar17;
          }
          else {
            if (dVar3 == 2) {
              iVar18 = iVar17 - *(int *)(iVar9 + 0x14);
              iVar17 = *(int *)(iVar9 + 0xc);
              iVar18 = iVar18 / 2;
              goto LAB_004c43e2;
            }
            iVar18 = *(int *)(iVar9 + 0xc);
          }
          iVar18 = iVar18 - iVar15;
          local_1a4 = (char *)meth_0x4a8200(this,(int)(auStack_17c + 4),pvVar4,iVar18);
          iVar9 = 0;
          for (dVar3 = *(dword *)(iVar8 + 4); (int)dVar3 < (int)local_1b4; dVar3 = dVar3 + 1) {
            pbVar12 = (byte *)cls_0x4d8d70::meth_0x4a8140((cls_0x4d8d70 *)(local_1a0 + 4),dVar3);
            Label::meth_0x4a7d60(&this->Label,pvVar4,*pbVar12,(int *)(&uStack_11c + 0x18),iVar18);
            if ((int)local_1a4 < (int)adStack_104[0] / 2 + iVar9) break;
            iVar9 = iVar9 + adStack_104[0];
          }
          this->mbr_0x1014 = dVar3;
          if ((*(byte *)(in_stack_0000000c + 0x14) & 2) == 0) {
            this->mbr_0x1010 = dVar3;
          }
          meth_0x4c13d0(this);
          this->mbr_0x1019 = 1;
          if (dVar3 == local_1b4) {
            this->mbr_0x1030 = (dword)local_1a8;
          }
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_17c + 4));
          goto LAB_004c449e;
        }
      }
      else if (((*(byte *)(in_stack_0000000c + 0x14) & 2) == 0) &&
              (this->mbr_0x1010 != this->mbr_0x1014)) {
        this->mbr_0x1010 = this->mbr_0x1014;
        this->mbr_0x1019 = 1;
        meth_0x4c13d0(this);
      }
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_1a0 + 4));
      goto switchD_004c3b5e_caseD_2;
    }
LAB_004c449e:
    this_01 = (cls_0x4d8d70 *)(local_1a0 + 4);
    break;
  case 0xd1:
  case 0x151:
    ExceptionList = &cStack_40.mbr_0x34;
    uVar7 = (*(this->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2830_36)((Base *)this,unaff_EDI)
    ;
    unaff_retaddr = unaff_retaddr;
    if ((char)uVar7 == '\0') goto switchD_004c3b5e_caseD_2;
    uStack_148 = 0xf;
    local_14c = 0;
    auStack_15c._0_4_ = auStack_15c._0_4_ & 0xffffff00;
    unaff_retaddr = (void *)0x15;
    (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
              ((Base *)this,(undefined4 *)(auStack_178 + 0x18),&unaff_ESI->_ptr);
    dVar3 = this->mbr_0x1014;
    if (((int)dVar3 < (int)uStack_148) || (this->mbr_0x1010 != dVar3)) {
      iVar8 = meth_0x4a8800(this,dVar3);
      if (iVar8 == this->mbr_0x1030 + 1) {
        iVar8 = iVar8 + -1;
      }
      local_1a0._0_4_ = meth_0x4a87b0(this,iVar8);
      if ((char *)local_1a0._0_4_ != (char *)0x0) {
        dVar3 = (this->Label).mbr_0xe20;
        dVar5 = (this->Label).Window.Base.mbr_0x10;
        iVar17 = (this->Label).mbr_0xe1c + (this->Label).Window.Base.mbr_0x8;
        auStack_17c = (undefined  [4])
                      (((this->Label).Window.Base.mbr_0x14 - (this->Label).mbr_0xe28) -
                      ((this->Label).mbr_0xe24 + (this->Label).Window.Base.mbr_0xc));
        local_1a0._0_4_ = (int)auStack_17c / *(int *)(local_1a0._0_4_ + 0x18);
        iVar9 = meth_0x434220(this);
        if (iVar8 < iVar9 + -1) {
          local_1a8 = (char *)(local_1a0._0_4_ + iVar8);
          iVar9 = meth_0x434220(this);
          if (iVar9 + -1 < (int)local_1a8) {
            iVar9 = meth_0x434220(this);
            local_1a8 = (char *)(iVar9 - 1);
          }
          dVar10 = meth_0x4a87b0(this,iVar8);
          local_1a0._0_4_ = meth_0x4a87b0(this,(int)local_1a8);
          if ((dVar10 != 0) && ((char *)local_1a0._0_4_ != (char *)0x0)) {
            iVar9 = cls_0x4b28a0::meth_0x4b58d0
                              ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&(this->Label).mbr_0xd3c,
                               (this->Label).mbr_0xd58,(this->Label).mbr_0xd5c,
                               (this->Label).mbr_0xd60);
            dStack_108 = 0xf;
            dStack_10c = 0;
            uStack_11c = 0;
            auStack_13c._20_4_ = 0xf;
            auStack_13c._16_4_ = 0;
            auStack_13c[0] = 0;
            (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
                      ((Base *)this,(undefined4 *)(auStack_13c + 0x1c),unaff_EBP);
            p_Var11 = (_String_base *)
                      cls_0x4d8d70::meth_0x458ef0
                                ((cls_0x4d8d70 *)(auStack_13c + 0x20),auStack_58,
                                 *(uint *)(dVar10 + 4),this->mbr_0x1014 - *(uint *)(dVar10 + 4));
            ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)auStack_13c,p_Var11,0,0xffffffff);
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_58);
            dVar1 = (this->Label).mbr_0xd6c;
            iVar8 = (dVar5 - dVar3) - iVar17;
            if (dVar1 == 1) {
              iVar8 = (*(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 0x14)) + iVar8;
            }
            else if (dVar1 == 2) {
              iVar8 = (iVar8 - *(int *)(iVar9 + 0x14)) / 2 + *(int *)(iVar9 + 0xc);
            }
            else {
              iVar8 = *(int *)(iVar9 + 0xc);
            }
            iVar8 = iVar8 - iVar17;
            auStack_17c = (undefined  [4])meth_0x4a8200(this,(int)auStack_13c,local_1a8,iVar8);
            iVar9 = 0;
            for (dVar3 = *(dword *)(local_1a0._4_4_ + 4); (int)dVar3 < (int)dVar10;
                dVar3 = dVar3 + 1) {
              pbVar12 = (byte *)cls_0x4d8d70::meth_0x4a8140
                                          ((cls_0x4d8d70 *)(auStack_13c + 0x20),dVar3);
              Label::meth_0x4a7d60(&this->Label,local_1a8,*pbVar12,(int *)&cStack_40.mbr_0x20,iVar8)
              ;
              if ((int)auStack_17c < (int)cStack_40.mbr_0x20 / 2 + iVar9) break;
              iVar9 = iVar9 + cStack_40.mbr_0x20;
            }
            this->mbr_0x1014 = dVar3;
            if ((*(byte *)(in_stack_00000010 + 0x14) & 2) == 0) {
              this->mbr_0x1010 = dVar3;
            }
            (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2790_16)
                      ((Base *)this,(int)(auStack_13c + 0x1c),(int)local_1a0);
            uVar14 = auStack_178._0_4_;
            local_1a0._0_4_ = local_1a0._0_4_ + auStack_178._0_4_;
            pBVar13 = (*(this->Label).Window.Base.vftptr_0x0[8].virt_deldtor_0x4af000_0)(this);
            if ((int)(char *)((int)pBVar13 - uVar14) < (int)local_1a0._0_4_) {
              local_1a0._0_4_ = (char *)((int)pBVar13 - uVar14);
            }
            (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2770_12)
                      ((Base *)this,(int)pVStack_120,local_1a0._0_4_);
            meth_0x4c13d0(this);
            this->mbr_0x1019 = 1;
            local_1b4 = 0x1000000;
            if (dVar3 == dVar10) {
              this->mbr_0x1030 = (dword)local_1a4;
            }
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_13c);
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_13c + 0x20));
            goto LAB_004c4ce3;
          }
        }
        else if (((*(byte *)(in_stack_0000000c + 0x14) & 2) == 0) &&
                (this->mbr_0x1010 != this->mbr_0x1014)) {
          this->mbr_0x1010 = this->mbr_0x1014;
          this->mbr_0x1019 = 1;
          meth_0x4c13d0(this);
        }
      }
LAB_004c4a57:
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_15c);
      unaff_retaddr = unaff_retaddr;
      goto switchD_004c3b5e_caseD_2;
    }
LAB_004c4ce3:
    this_01 = (cls_0x4d8d70 *)(auStack_15c + 4);
    break;
  case 0xd2:
  case 0x152:
    uVar14 = *(uint *)(param_1 + 0x14);
    if (((uVar14 & 2) == 0) || (ExceptionList = &cStack_40.mbr_0x34, (uVar14 & 1) == 0)) {
      if ((uVar14 & 2) != 0) {
LAB_004c3bec:
        ExceptionList = &cStack_40.mbr_0x34;
        meth_0x4c1960(this);
        goto LAB_004c4cf4;
      }
      if ((uVar14 & 1) != 0) goto LAB_004c3bc0;
      ExceptionList = &cStack_40.mbr_0x34;
      this->mbr_0x1018 = this->mbr_0x1018 == 0;
      goto LAB_004c4543;
    }
    goto LAB_004c4cf4;
  case 0xd3:
  case 0x153:
switchD_004c3b5e_caseD_e:
    if (((local_1b4 == 0xd3) || (local_1b4 == 0x153)) && ((*(byte *)(param_1 + 0x14) & 2) != 0)) {
LAB_004c3bd6:
      ExceptionList = &cStack_40.mbr_0x34;
      FUN_004c3aa0(this);
      goto LAB_004c4cf4;
    }
    ExceptionList = &cStack_40.mbr_0x34;
    meth_0x4c13d0(this);
    dVar3 = this->mbr_0x1010;
    dVar5 = this->mbr_0x1014;
    if ((int)dVar3 < (int)this->mbr_0x1014) {
      dVar5 = dVar3;
    }
    dVar10 = this->mbr_0x1014;
    if ((int)this->mbr_0x1014 < (int)dVar3) {
      dVar10 = dVar3;
    }
    local_18c = 0xf;
    local_190 = 0;
    local_1a0._0_4_ = local_1a0._0_4_ & 0xffffff00;
    local_4 = 0;
    (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
              ((Base *)this,&local_1a4,&unaff_EDI->_ptr);
    dVar3 = local_18c;
    if (dVar5 == dVar10) {
      if (iStack_1b0 == 0xe) {
        if (0 < (int)dVar5) {
          cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)local_1a0,auStack_144,dVar5,local_18c - dVar5)
          ;
          if ((int)dVar5 < 2) {
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)local_1a0,(_String_base *)auStack_144,0,0xffffffff);
            dVar5 = dVar5 - 1;
          }
          else {
            cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)local_1a0,auStack_17c,0,dVar5 - 1);
            pcVar2 = FUN_00425d70((cls_0x50db20 *)(auStack_cc + 0x18),(_String_base *)auStack_17c,
                                  (int)auStack_144);
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)local_1a0,(_String_base *)pcVar2,0,0xffffffff);
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_cc + 0x18));
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_17c);
            dVar5 = dVar5 - 1;
          }
          goto LAB_004c3e87;
        }
      }
      else if ((int)dVar5 < (int)local_18c) {
        cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)local_1a0,auStack_144,0,dVar5);
        if ((int)(dVar5 + 1) < (int)dVar3) {
          cls_0x4d8d70::meth_0x458ef0
                    ((cls_0x4d8d70 *)local_1a0,auStack_17c,dVar5 + 1,(dVar3 - dVar5) - 1);
          pcVar2 = FUN_00425d70((cls_0x50db20 *)(auStack_94 + 0x18),(_String_base *)auStack_144,
                                (int)auStack_17c);
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)local_1a0,(_String_base *)pcVar2,0,0xffffffff);
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_94 + 0x18));
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_17c);
        }
        else {
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)local_1a0,(_String_base *)auStack_144,0,0xffffffff);
        }
        goto LAB_004c3e93;
      }
    }
    else {
      cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)local_1a0,auStack_144,0,dVar5);
      if ((int)dVar10 < (int)dVar3) {
        cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)local_1a0,auStack_17c,dVar10,dVar3 - dVar10);
        pcVar2 = FUN_00425d70((cls_0x50db20 *)(&uStack_11c + 0x30),(_String_base *)auStack_144,
                              (int)auStack_17c);
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_1a0,(_String_base *)pcVar2,0,0xffffffff)
        ;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(&uStack_11c + 0x30));
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_17c);
      }
      else {
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)local_1a0,(_String_base *)auStack_144,0,0xffffffff);
      }
LAB_004c3e87:
      this->mbr_0x1010 = dVar5;
      this->mbr_0x1014 = dVar5;
LAB_004c3e93:
      unaff_retaddr = (void *)((uint)unaff_retaddr & 0xffffff00);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_144);
      (*(this->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
                ((Base *)this,(FILE *)local_1a0);
      this->mbr_0x1019 = 1;
      meth_0x4c13d0(this);
    }
    this_01 = (cls_0x4d8d70 *)local_1a0;
    break;
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x113:
  case 0x114:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x141:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x145:
  case 0x146:
  case 0x14a:
  case 0x14c:
  case 0x14e:
    goto switchD_004c3b5e_caseD_2;
  case 0x147:
switchD_004c3b5e_caseD_c7:
    dVar3 = this->mbr_0x1014;
    if (((int)dVar3 < 1) && (unaff_retaddr = unaff_retaddr, this->mbr_0x1010 == dVar3))
    goto switchD_004c3b5e_caseD_2;
    if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
      ExceptionList = &cStack_40.mbr_0x34;
      iVar8 = meth_0x4a8800(this,dVar3);
      if (iVar8 == this->mbr_0x1030 + 1) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = meth_0x4a87b0(this,iVar8);
      unaff_retaddr = unaff_retaddr;
      if (iVar8 == 0) goto switchD_004c3b5e_caseD_2;
      this->mbr_0x1014 = *(dword *)(iVar8 + 4);
    }
    else {
      ExceptionList = &cStack_40.mbr_0x34;
      this->mbr_0x1014 = 0;
    }
    if ((*(byte *)(param_1 + 0x14) & 2) != 0) goto LAB_004c4543;
    dVar3 = this->mbr_0x1014;
    goto LAB_004c453d;
  case 0x148:
switchD_004c3b5e_caseD_c8:
    ExceptionList = &cStack_40.mbr_0x34;
    uVar7 = (*(this->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2830_36)((Base *)this,unaff_EDI)
    ;
    unaff_retaddr = unaff_retaddr;
    if ((char)uVar7 == '\0') goto switchD_004c3b5e_caseD_2;
    if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
      meth_0x4c05c0(this,1);
      unaff_retaddr = unaff_retaddr;
      goto switchD_004c3b5e_caseD_2;
    }
    dVar3 = this->mbr_0x1014;
    if (((int)dVar3 < 1) && (unaff_retaddr = unaff_retaddr, this->mbr_0x1010 == dVar3))
    goto switchD_004c3b5e_caseD_2;
    iVar8 = meth_0x4a8800(this,dVar3);
    if (iVar8 == this->mbr_0x1030 + 1) {
      iVar8 = iVar8 + -1;
    }
    if (iVar8 < 1) {
      unaff_retaddr = unaff_retaddr;
      if (((*(byte *)(in_stack_00000008 + 0x14) & 2) == 0) &&
         (unaff_retaddr = unaff_retaddr, this->mbr_0x1010 != this->mbr_0x1014)) {
        this->mbr_0x1010 = this->mbr_0x1014;
        this->mbr_0x1019 = 1;
        meth_0x4c13d0(this);
        unaff_retaddr = unaff_retaddr;
      }
      goto switchD_004c3b5e_caseD_2;
    }
    iVar9 = meth_0x4a87b0(this,iVar8);
    pvVar4 = (void *)meth_0x4a87b0(this,iVar8 + -1);
    unaff_retaddr = unaff_retaddr;
    if ((iVar9 == 0) || (unaff_retaddr = unaff_retaddr, pvVar4 == (void *)0x0))
    goto switchD_004c3b5e_caseD_2;
    dVar5 = cls_0x4b28a0::meth_0x4b58d0
                      ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&(this->Label).mbr_0xd3c,
                       (this->Label).mbr_0xd58,(this->Label).mbr_0xd5c,(this->Label).mbr_0xd60);
    dStack_188 = 0xf;
    local_18c = 0;
    local_1a0._4_4_ = local_1a0._4_4_ & 0xffffff00;
    local_164 = 0xf;
    dStack_168 = 0;
    auStack_178._0_4_ = auStack_178._0_4_ & 0xffffff00;
    unaff_retaddr = (void *)0xc;
    (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
              ((Base *)this,(undefined4 *)local_1a0,&unaff_ESI->_ptr);
    p_Var11 = (_String_base *)
              cls_0x4d8d70::meth_0x458ef0
                        ((cls_0x4d8d70 *)(local_1a0 + 4),auStack_58 + 0x18,*(uint *)(iVar9 + 4),
                         this->mbr_0x1014 - *(uint *)(iVar9 + 4));
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(auStack_17c + 4),p_Var11,0,0xffffffff);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_58 + 0x18));
    dVar3 = (this->Label).mbr_0xd6c;
    iVar15 = (this->Label).mbr_0xe1c + (this->Label).Window.Base.mbr_0x8;
    iVar17 = ((this->Label).Window.Base.mbr_0x10 - (this->Label).mbr_0xe20) - iVar15;
    if (dVar3 == 1) {
      iVar18 = *(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 0x14);
LAB_004c415c:
      iVar18 = iVar18 + iVar17;
    }
    else {
      if (dVar3 == 2) {
        iVar18 = iVar17 - *(int *)(iVar9 + 0x14);
        iVar17 = *(int *)(iVar9 + 0xc);
        iVar18 = iVar18 / 2;
        goto LAB_004c415c;
      }
      iVar18 = *(int *)(iVar9 + 0xc);
    }
    iVar18 = iVar18 - iVar15;
    local_1a4 = (char *)meth_0x4a8200(this,(int)(auStack_17c + 4),pvVar4,iVar18);
    iVar9 = 0;
    for (dVar3 = *(dword *)(iVar8 + 3); (int)dVar3 < (int)dVar5; dVar3 = dVar3 + 1) {
      pbVar12 = (byte *)cls_0x4d8d70::meth_0x4a8140((cls_0x4d8d70 *)(local_1a0 + 4),dVar3);
      Label::meth_0x4a7d60(&this->Label,pvVar4,*pbVar12,(int *)(&uStack_11c + 0x18),iVar18);
      if ((int)local_1a4 < (int)adStack_104[0] / 2 + iVar9) break;
      iVar9 = iVar9 + adStack_104[0];
    }
    this->mbr_0x1014 = dVar3;
    if ((*(byte *)(in_stack_0000000c + 0x14) & 2) == 0) {
      this->mbr_0x1010 = dVar3;
    }
    meth_0x4c13d0(this);
    this->mbr_0x1019 = 1;
    pcVar16 = local_1a8;
    if (dVar3 == dVar5) {
LAB_004c4939:
      this->mbr_0x1030 = (dword)pcVar16;
    }
    goto LAB_004c493f;
  case 0x149:
switchD_004c3b5e_caseD_c9:
    ExceptionList = &cStack_40.mbr_0x34;
    uVar7 = (*(this->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2830_36)((Base *)this,unaff_EDI)
    ;
    unaff_retaddr = unaff_retaddr;
    if (((char)uVar7 == '\0') ||
       ((dVar3 = this->mbr_0x1014, (int)dVar3 < 1 &&
        (unaff_retaddr = unaff_retaddr, this->mbr_0x1010 == dVar3)))) goto switchD_004c3b5e_caseD_2;
    iVar8 = meth_0x4a8800(this,dVar3);
    if (iVar8 == this->mbr_0x1030 + 1) {
      iVar8 = iVar8 + -1;
    }
    iVar9 = meth_0x4a87b0(this,iVar8);
    unaff_retaddr = unaff_retaddr;
    if (iVar9 == 0) goto switchD_004c3b5e_caseD_2;
    dVar3 = (this->Label).mbr_0xe20;
    dVar5 = (this->Label).Window.Base.mbr_0x10;
    iVar17 = (this->Label).mbr_0xe1c + (this->Label).Window.Base.mbr_0x8;
    pVStack_184 = (VFX_Parameter__vftable_673a20 *)
                  (((this->Label).Window.Base.mbr_0x14 - (this->Label).mbr_0xe28) -
                  ((this->Label).mbr_0xe24 + (this->Label).Window.Base.mbr_0xc));
    if (iVar8 < 1) {
      unaff_retaddr = unaff_retaddr;
      if (((*(byte *)(in_stack_00000008 + 0x14) & 2) == 0) &&
         (unaff_retaddr = unaff_retaddr, this->mbr_0x1010 != this->mbr_0x1014)) {
        this->mbr_0x1010 = this->mbr_0x1014;
        this->mbr_0x1019 = 1;
        meth_0x4c13d0(this);
        unaff_retaddr = unaff_retaddr;
      }
      goto switchD_004c3b5e_caseD_2;
    }
    local_1a8 = (char *)(iVar8 - (int)pVStack_184 / *(int *)(iVar9 + 0x18));
    if ((int)local_1a8 < 0) {
      local_1a8 = (char *)0x0;
    }
    dVar10 = meth_0x4a87b0(this,iVar8);
    dStack_180 = meth_0x4a87b0(this,(int)local_1a8);
    unaff_retaddr = unaff_retaddr;
    if ((dVar10 == 0) || (unaff_retaddr = unaff_retaddr, dStack_180 == 0))
    goto switchD_004c3b5e_caseD_2;
    iVar9 = cls_0x4b28a0::meth_0x4b58d0
                      ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&(this->Label).mbr_0xd3c,
                       (this->Label).mbr_0xd58,(this->Label).mbr_0xd5c,(this->Label).mbr_0xd60);
    dStack_188 = 0xf;
    local_18c = 0;
    local_1a0._4_4_ = local_1a0._4_4_ & 0xffffff00;
    local_164 = 0xf;
    dStack_168 = 0;
    auStack_178._0_4_ = auStack_178._0_4_ & 0xffffff00;
    unaff_retaddr = (void *)0x13;
    (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
              ((Base *)this,(undefined4 *)local_1a0,&unaff_ESI->_ptr);
    p_Var11 = (_String_base *)
              cls_0x4d8d70::meth_0x458ef0
                        ((cls_0x4d8d70 *)(local_1a0 + 4),auStack_94,*(uint *)(dVar10 + 4),
                         this->mbr_0x1014 - *(uint *)(dVar10 + 4));
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(auStack_17c + 4),p_Var11,0,0xffffffff);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_94);
    dVar1 = (this->Label).mbr_0xd6c;
    iVar8 = (dVar5 - dVar3) - iVar17;
    if (dVar1 == 1) {
      iVar8 = (*(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 0x14)) + iVar8;
    }
    else if (dVar1 == 2) {
      iVar8 = (iVar8 - *(int *)(iVar9 + 0x14)) / 2 + *(int *)(iVar9 + 0xc);
    }
    else {
      iVar8 = *(int *)(iVar9 + 0xc);
    }
    iVar8 = iVar8 - iVar17;
    iVar17 = meth_0x4a8200(this,(int)(auStack_17c + 4),pvStack_1ac,iVar8);
    iVar9 = 0;
    for (dVar3 = *(dword *)((int)auStack_17c + 4); (int)dVar3 < (int)dVar10; dVar3 = dVar3 + 1) {
      pbVar12 = (byte *)cls_0x4d8d70::meth_0x4a8140((cls_0x4d8d70 *)(local_1a0 + 4),dVar3);
      Label::meth_0x4a7d60(&this->Label,pvStack_1ac,*pbVar12,(int *)(&uStack_11c + 0x18),iVar8);
      if (iVar17 < (int)adStack_104[0] / 2 + iVar9) break;
      iVar9 = iVar9 + adStack_104[0];
    }
    this->mbr_0x1014 = dVar3;
    if ((*(byte *)(in_stack_0000000c + 0x14) & 2) == 0) {
      this->mbr_0x1010 = dVar3;
    }
    (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2790_16)
              ((Base *)this,(int)local_1a0,(int)&local_1a8);
    local_1a8 = local_1a8 + -dStack_180;
    if ((int)local_1a8 < 0) {
      local_1a8 = (char *)0x0;
    }
    (*(this->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2770_12)
              ((Base *)this,local_1a0._0_4_,(int)local_1a8);
    meth_0x4c13d0(this);
    this->mbr_0x1019 = 1;
    pcVar16 = local_1a4;
    if (dVar3 == dVar10) goto LAB_004c4939;
LAB_004c493f:
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_17c + 4));
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_1a0 + 4));
    goto LAB_004c4cf4;
  case 0x14b:
switchD_004c3b5e_caseD_cb:
    dVar3 = this->mbr_0x1014;
    if (((int)dVar3 < 1) && (unaff_retaddr = unaff_retaddr, this->mbr_0x1010 == dVar3))
    goto switchD_004c3b5e_caseD_2;
    dVar3 = dVar3 - 1;
    ExceptionList = &cStack_40.mbr_0x34;
    this->mbr_0x1014 = dVar3;
    if ((*(byte *)(param_1 + 0x14) & 2) != 0) goto LAB_004c4543;
LAB_004c453d:
    this->mbr_0x1010 = dVar3;
LAB_004c4543:
    meth_0x4c13d0(this);
    this->mbr_0x1019 = 1;
    goto LAB_004c4cf4;
  case 0x14d:
    goto switchD_004c3c11_caseD_14d;
  default:
    if (local_1b4 != 0xcd) {
      uVar14 = (uint)*(byte *)((int)&PTR_caseD_2_004c4d50 + local_1b4 + 3);
      unaff_retaddr = unaff_retaddr;
      switch(local_1b4) {
      case 1:
        local_1a8 = &stack0xfffffe2c;
        this_00 = &(this->Label).Window.Base.field_0xd20;
        ExceptionList = &cStack_40.mbr_0x34;
        cls_0x4d8d70::meth_0x496820((cls_0x4d8d70 *)this_00,(int *)&stack0xfffffe2c);
        local_1a8 = &stack0xfffffe28;
        iVar8 = extraout_ECX;
        cls_0x4d8d70::meth_0x496800((cls_0x4d8d70 *)this_00,(int *)&stack0xfffffe28);
        cls_0x4d8d70::meth_0x49c7a0((cls_0x4d8d70 *)this_00,(int *)&local_1a8,iVar8,uVar14);
        Label::meth_0x4a93a0(&this->Label);
        this->mbr_0x1014 = 0;
        this->mbr_0x1010 = 0;
        this->mbr_0x1019 = 1;
        break;
      default:
        goto switchD_004c3b5e_caseD_2;
      case 0xe:
        goto switchD_004c3b5e_caseD_e;
      case 0x2d:
      case 0x58:
      case 0x78:
        unaff_retaddr = unaff_retaddr;
        if ((*(byte *)(param_1 + 0x14) & 1) == 0) goto switchD_004c3b5e_caseD_2;
        goto LAB_004c3bd6;
      case 0x2e:
      case 0x43:
      case 99:
        unaff_retaddr = unaff_retaddr;
        if ((*(byte *)(param_1 + 0x14) & 1) == 0) goto switchD_004c3b5e_caseD_2;
LAB_004c3bc0:
        ExceptionList = &cStack_40.mbr_0x34;
        FUN_004c3ab0(this);
        break;
      case 0x2f:
      case 0x56:
      case 0x76:
        unaff_retaddr = unaff_retaddr;
        if ((*(byte *)(param_1 + 0x14) & 1) == 0) goto switchD_004c3b5e_caseD_2;
        goto LAB_004c3bec;
      case 199:
        goto switchD_004c3b5e_caseD_c7;
      case 200:
        goto switchD_004c3b5e_caseD_c8;
      case 0xc9:
        goto switchD_004c3b5e_caseD_c9;
      case 0xcb:
        goto switchD_004c3b5e_caseD_cb;
      }
      goto LAB_004c4cf4;
    }
    goto switchD_004c3c11_caseD_14d;
  }
  cls_0x4d8d70::meth_0x4b2dd0(this_01);
LAB_004c4cec:
  if (local_1b4._3_1_ != '\0') {
LAB_004c4cf4:
    meth_0x4c05a0(this);
  }
switchD_004c3b5e_caseD_2:
  ExceptionList = unaff_retaddr;
  FUN_00616e15(local_4 ^ in_stack_0000000c);
  return;
switchD_004c3c11_caseD_14d:
  local_14c = 0xf;
  local_150 = 0;
  local_160 = (uint)local_160._1_3_ << 8;
  local_4 = 10;
  ExceptionList = &cStack_40.mbr_0x34;
  (*(this->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
            ((Base *)this,(undefined4 *)(auStack_178 + 0x14),&unaff_EDI->_ptr);
  dVar3 = this->mbr_0x1014;
  if (((int)dVar3 < (int)local_14c) || (this->mbr_0x1010 != dVar3)) {
    this->mbr_0x1014 = dVar3 + 1;
    if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
      this->mbr_0x1010 = dVar3 + 1;
    }
    meth_0x4c13d0(this);
    this->mbr_0x1019 = 1;
  }
  if (0xf < uStack_148) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_15c._0_4_);
  }
  goto LAB_004c4cec;
}



Edit * __thiscall GUI::Edit::Edit(Edit *this,uint param_1)

{
  undefined4 *puVar1;
  Gfx_BasePacketData *pGVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632e90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Label::Label(&this->Label,param_1);
  local_4 = 0;
  (this->Label).Window.Base.vftptr_0x0 = (Base__vftable_66e41c *)&Edit__vftable_670cac_00670cac;
  *(undefined ***)&(this->Label).Window.Base.field_0x18 = &PTR_virt_meth_0x4c13c0_00670ca4;
  this->mbr_0xe64 = 0;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  this->mbr_0xe68 = 0;
  this->mbr_0xe6c = 0;
  this->mbr_0xe70 = 0;
  this->mbr_0xe74 = 0;
  this->mbr_0xe78 = 0;
  this->mbr_0xe7c = 0;
  this->mbr_0xe80 = 0;
  this->mbr_0xe84 = 0;
  this->mbr_0xe88 = 0;
  this->mbr_0xe8c = 0;
  this->mbr_0xea0 = 0;
  this->mbr_0xea4 = 0;
  this->mbr_0xea8 = 0;
  this->mbr_0xeac = 0;
  this->mbr_0xeb0 = 0;
  this->mbr_0xeb4 = 0;
  this->mbr_0xeb8 = 0;
  local_4._0_1_ = 1;
  cls_0x4abc60::cls_0x4abc60((cls_0x4abc60 *)&this->field_0xf64);
  this->mbr_0xf3c = 0;
  this->mbr_0xf40 = 0;
  this->mbr_0xf44 = 0;
  this->mbr_0xf48 = 0;
  this->mbr_0xf4c = 0;
  this->mbr_0xf50 = 0;
  this->mbr_0xf54 = 0;
  this->mbr_0xf58 = 0;
  this->mbr_0xf5c = 0;
  this->mbr_0xf60 = 0;
  this->mbr_0xf74 = 0;
  this->mbr_0xf78 = 0;
  this->mbr_0xf7c = 0;
  this->mbr_0xf80 = 0;
  this->mbr_0xf84 = 0;
  this->mbr_0xf88 = 0;
  this->mbr_0xf8c = 0;
  this->mbr_0x1010 = 0;
  this->mbr_0x1014 = 0;
  this->mbr_0x1018 = 1;
  this->mbr_0x1019 = 1;
  this->mbr_0x101a = 1;
  this->mbr_0x101c = 0;
  this->mbr_0x1020 = 0;
  this->mbr_0x102c = 0;
  this->mbr_0x1038 = 0;
  this->mbr_0x1030 = 0xfffffffe;
  this->mbr_0x1034 = 0xfffffffe;
  local_4._0_1_ = 2;
  this->mbr_0xf14 = 0;
  this->mbr_0xf10 = 0;
  this->mbr_0xf0c = 0;
  this->mbr_0xf08 = 0;
  this->mbr_0xf00 = 0;
  this->mbr_0xefc = 0;
  this->mbr_0xef8 = 0;
  this->mbr_0xef4 = 0;
  this->mbr_0xeec = 0;
  this->mbr_0xee8 = 0;
  this->mbr_0xee4 = 0;
  this->mbr_0xee0 = 0;
  this->mbr_0xf18 = 0x3f800000;
  this->mbr_0xf04 = 0x3f800000;
  this->mbr_0xef0 = 0x3f800000;
  this->mbr_0xedc = 0x3f800000;
  this->mbr_0xf1c = 1;
  puVar1 = (undefined4 *)operator_new(0x2c);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = 1;
    _eh_vector_constructor_iterator_
              (puVar3,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
  }
  local_4._0_1_ = 2;
  this->mbr_0xed4 = (dword)puVar3;
  this->mbr_0xf20 = 0;
  this->mbr_0xf24 = 0;
  this->mbr_0xf28 = 0;
  this->mbr_0xf2c = 0;
  this->mbr_0xf30 = 0;
  this->mbr_0xf34 = 0;
  this->mbr_0xed8 = 0;
  this->mbr_0xf38 = 0;
  pGVar2 = (Gfx_BasePacketData *)operator_new(0x50);
  local_4._0_1_ = 4;
  if (pGVar2 == (Gfx_BasePacketData *)0x0) {
    pGVar2 = (Gfx_BasePacketData *)0x0;
  }
  else {
    Gfx_BasePacketData::Gfx_BasePacketData(pGVar2,0);
    pGVar2->vftptr_0x0 =
         (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
  }
  this->mbr_0xed8 = (dword)pGVar2;
  this->mbr_0xfe8 = 0;
  this->mbr_0xfe4 = 0;
  this->mbr_0xfe0 = 0;
  this->mbr_0xfdc = 0;
  this->mbr_0xfd4 = 0;
  this->mbr_0xfd0 = 0;
  this->mbr_0xfcc = 0;
  this->mbr_0xfc8 = 0;
  this->mbr_0xfc0 = 0;
  this->mbr_0xfbc = 0;
  this->mbr_0xfb8 = 0;
  this->mbr_0xfb4 = 0;
  this->mbr_0xfec = 0x3f800000;
  this->mbr_0xfd8 = 0x3f800000;
  this->mbr_0xfc4 = 0x3f800000;
  this->mbr_0xfb0 = 0x3f800000;
  local_4._0_1_ = 2;
  this->mbr_0xff0 = 1;
  puVar1 = (undefined4 *)operator_new(0x2c);
  local_4._0_1_ = 5;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = 1;
    _eh_vector_constructor_iterator_
              (puVar3,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
  }
  local_4._0_1_ = 2;
  this->mbr_0xfa8 = (dword)puVar3;
  this->mbr_0xff4 = 0;
  this->mbr_0xff8 = 0;
  this->mbr_0xffc = 0;
  this->mbr_0x1000 = 0;
  this->mbr_0x1004 = 0;
  this->mbr_0x1008 = 0;
  this->mbr_0xfac = 0;
  this->mbr_0x100c = 0;
  pGVar2 = (Gfx_BasePacketData *)operator_new(0x50);
  local_4._0_1_ = 6;
  if (pGVar2 == (Gfx_BasePacketData *)0x0) {
    pGVar2 = (Gfx_BasePacketData *)0x0;
  }
  else {
    Gfx_BasePacketData::Gfx_BasePacketData(pGVar2,0);
    pGVar2->vftptr_0x0 =
         (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  this->mbr_0xfac = (dword)pGVar2;
  this->mbr_0x1024 = 0x80ffffff;
  this->mbr_0x1028 = 0x800000ff;
  Window::virt_meth_0x4af4d0((Window *)this,0);
  ExceptionList = local_c;
  return this;
}


#include "../include/Edit.h"
