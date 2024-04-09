#include "../include/cls_0x4b8f70.h"

/* WARNING: Removing unreachable block (ram,0x004b8fb4) */
/* WARNING: Removing unreachable block (ram,0x004b8f8f) */
/* WARNING: Removing unreachable block (ram,0x004b8fd5) */

void __thiscall cls_0x4b8f70::meth_0x4b8f70(cls_0x4b8f70 *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  this->mbr_0x8 = (dword)((float)(param_1 >> 0x10 & 0xff) * 0.003921569);
  this->mbr_0xc = (dword)((float)(param_1 >> 8 & 0xff) * 0.003921569);
  this->mbr_0x14 = 0x3f800000;
  uVar2 = 0;
  this->mbr_0x10 = (dword)((float)(param_1 & 0xff) * 0.003921569);
  if (this->mbr_0x58 != 0) {
    do {
      iVar1 = *(int *)(this->mbr_0x74 + uVar2 * 4);
      *(dword *)(iVar1 + 0x24) = this->mbr_0x8;
      *(dword *)(iVar1 + 0x28) = this->mbr_0xc;
      *(dword *)(iVar1 + 0x2c) = this->mbr_0x10;
      *(dword *)(iVar1 + 0x30) = this->mbr_0x14;
      uVar2 = uVar2 + 1;
    } while (uVar2 < this->mbr_0x58);
  }
  return;
}



void __thiscall cls_0x4b8f70::meth_0x4b90c0(cls_0x4b8f70 *this)

{
  if ((int *)this->mbr_0x18 != (int *)0x0) {
    (**(code **)(*(int *)this->mbr_0x18 + 0x3c))(this->mbr_0x1c);
  }
  return;
}



void __thiscall cls_0x4b8f70::meth_0x4b9110(cls_0x4b8f70 *this,undefined param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (this->mbr_0x58 != 0) {
    iVar2 = 0;
    do {
      *(undefined *)(iVar2 + 0x1e + this->mbr_0x70) = param_1;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x28;
    } while (uVar1 < this->mbr_0x58);
  }
  return;
}



void __thiscall cls_0x4b8f70::meth_0x4b93d0(cls_0x4b8f70 *this,undefined4 *param_1)

{
  cls_0x4960d0 *this_00;
  float fVar1;
  float fVar2;
  int iVar3;
  int unaff_EBP;
  cls_0x4960d0 *pcVar4;
  dword *pdVar5;
  undefined4 *puVar6;
  int iStack_9c;
  undefined4 local_98 [2];
  undefined auStack_90 [16];
  undefined4 local_80 [9];
  undefined auStack_5c [28];
  dword local_40 [16];
  
  if (this->mbr_0x18 != 0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)(**(code **)(*DAT_00707ce4 + 0x90))();
    }
    this_00 = (cls_0x4960d0 *)param_1[0x57];
    pdVar5 = local_40;
    pcVar4 = this_00;
    for (iVar3 = 0x10; pcVar4 = (cls_0x4960d0 *)&pcVar4->mbr_0x4, iVar3 != 0; iVar3 = iVar3 + -1) {
      *pdVar5 = *(dword *)pcVar4;
      pdVar5 = pdVar5 + 1;
    }
    puVar6 = local_98;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    cls_0x4960d0::meth_0x4962c0(this_00,local_80);
    (**(code **)(*(int *)this->mbr_0x1c + 4))
              ((float)this_00->mbr_0x110 * 57.29578,this_00->mbr_0x10c,this_00->mbr_0x114,
               this_00->mbr_0x118);
    fVar1 = (float)iStack_9c;
    if (iStack_9c < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    fVar2 = (float)unaff_EBP;
    if (unaff_EBP < 0) {
      fVar2 = fVar2 + 4.294967e+09;
    }
    (**(code **)(*(int *)this->mbr_0x1c + 8))(fVar2,fVar1,auStack_90);
    (**(code **)(*(int *)this->mbr_0x1c + 0x14))(auStack_5c);
    (**(code **)(*(int *)this->mbr_0x18 + 0x38))(this->mbr_0x1c,0);
  }
  return;
}



void __thiscall cls_0x4b8f70::meth_0x4b9db0(cls_0x4b8f70 *this)

{
  GUI::Interface::meth_0x44ab00((Interface *)&this->mbr_0xc0);
  *(dword *)(this->mbr_0xc4 + 4) = this->mbr_0xc4;
  this->mbr_0xc8 = 0;
  *(dword *)this->mbr_0xc4 = this->mbr_0xc4;
  *(dword *)(this->mbr_0xc4 + 8) = this->mbr_0xc4;
  return;
}



void __thiscall cls_0x4b8f70::meth_0x4bb5b0(cls_0x4b8f70 *this,int *param_1)

{
  dword *this_00;
  int *piVar1;
  
  piVar1 = param_1;
  this_00 = &this->mbr_0xc0;
  if (this_00 != (dword *)param_1) {
    GUI::Interface::meth_0x44e3e0
              ((Interface *)this_00,&param_1,*(int ***)(int **)this->mbr_0xc4,(int **)this->mbr_0xc4
              );
    *(undefined *)this_00 = *(undefined *)piVar1;
    GUI::Interface::meth_0x4b9e30((Interface *)this_00,(int)piVar1);
  }
  return;
}



dword __thiscall cls_0x4b8f70::meth_0x4bb7a0(cls_0x4b8f70 *this)

{
  dword dVar1;
  undefined4 *puVar2;
  void *pvVar3;
  cls_0x515040 *this_00;
  cls_0x4abc60 *this_01;
  cls_0x4ac210 *this_02;
  int iVar4;
  uint uVar5;
  
  dVar1 = this->mbr_0x18;
  uVar5 = 0;
  if (this->mbr_0x58 != 0) {
    iVar4 = 0;
    do {
      (**(code **)(*DAT_00707ce4 + 0xe4))(this->mbr_0x6c + iVar4);
      if ((this->mbr_0x74 != 0) &&
         (puVar2 = *(undefined4 **)(this->mbr_0x74 + uVar5 * 4), puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
        *(undefined4 *)(this->mbr_0x74 + uVar5 * 4) = 0;
      }
      if ((this->mbr_0x60 != 0) &&
         (pvVar3 = *(void **)(this->mbr_0x60 + uVar5 * 4), pvVar3 != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
      if ((this->mbr_0x64 != 0) &&
         (pvVar3 = *(void **)(this->mbr_0x64 + uVar5 * 4), pvVar3 != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
      if ((this->mbr_0x78 != 0) &&
         (pvVar3 = *(void **)(this->mbr_0x78 + uVar5 * 4), pvVar3 != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
      if ((this->mbr_0x7c != 0) &&
         (pvVar3 = *(void **)(this->mbr_0x7c + uVar5 * 4), pvVar3 != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x6c;
    } while (uVar5 < this->mbr_0x58);
  }
  this->mbr_0x58 = 0;
  this->mbr_0x38 = 0;
  if ((void *)this->mbr_0x3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x3c);
  }
  if ((this->mbr_0x48 != 0) && (uVar5 = 0, this->mbr_0x44 != 0)) {
    do {
      iVar4 = *(int *)(this->mbr_0x48 + uVar5 * 4);
      if (iVar4 != 0) {
        (**(code **)(*DAT_00707ce4 + 0xd0))(iVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < this->mbr_0x44);
  }
  if ((void *)this->mbr_0x48 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x48);
  }
  puVar2 = (undefined4 *)this->mbr_0x54;
  this->mbr_0x50 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar2 + -1);
    }
    (**(code **)*puVar2)(3);
    this->mbr_0x54 = 0;
  }
  if ((void *)this->mbr_0x60 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x60);
  }
  if ((void *)this->mbr_0x64 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x64);
  }
  pvVar3 = (void *)this->mbr_0x68;
  if (pvVar3 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar3,0xc,*(int *)((int)pvVar3 + -4),FUN_004b9390);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar3 + -4));
  }
  pvVar3 = (void *)this->mbr_0x6c;
  if (pvVar3 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar3,0x6c,*(int *)((int)pvVar3 + -4),cls_0x515040::meth_0x41fdf0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar3 + -4));
  }
  pvVar3 = (void *)this->mbr_0x70;
  if (pvVar3 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar3,0x28,*(int *)((int)pvVar3 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar3 + -4));
  }
  if ((void *)this->mbr_0x74 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x74);
  }
  if ((void *)this->mbr_0x78 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x78);
  }
  if ((void *)this->mbr_0x7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x7c);
  }
  if ((void *)this->mbr_0x84 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x84);
  }
  if ((void *)this->mbr_0x8c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8c);
  }
  this_00 = (cls_0x515040 *)this->mbr_0x90;
  if (this_00 != (cls_0x515040 *)0x0) {
    cls_0x515040::meth_0x41fdf0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  pvVar3 = (void *)this->mbr_0x98;
  if (pvVar3 == (void *)0x0) {
    if ((undefined4 *)this->mbr_0x1c != (undefined4 *)0x0) {
      (***(code ***)(undefined4 *)this->mbr_0x1c)();
      this->mbr_0x1c = 0;
    }
    this->mbr_0x18 = 0;
    return dVar1;
  }
  this_01 = *(cls_0x4abc60 **)((int)pvVar3 + 8);
  if (this_01 != (cls_0x4abc60 *)0x0) {
    cls_0x4abc60::meth_0x41fbd0(this_01);
                    /* WARNING: Subroutine does not return */
    _free(this_01);
  }
  if (*(void **)((int)pvVar3 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)pvVar3 + 0x10));
  }
  if ((*(char *)((int)pvVar3 + 0x14) != '\0') &&
     (this_02 = *(cls_0x4ac210 **)((int)pvVar3 + 0x18), this_02 != (cls_0x4ac210 *)0x0)) {
    cls_0x4ac210::meth_0x4ac210(this_02);
                    /* WARNING: Subroutine does not return */
    _free(this_02);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar3);
}



void __thiscall cls_0x4b8f70::meth_0x4bbaa0(cls_0x4b8f70 *this,int *param_1,char param_2)

{
  dword *this_00;
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  int *piVar6;
  undefined1 unaff_BP;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  cVar2 = cls_0x4b9df0::meth_0x4b9df0((cls_0x4b9df0 *)this,(char)param_1,unaff_BP);
  if ((param_2 != '\0') == (cVar2 != '\0')) {
    return;
  }
  this_00 = &this->mbr_0xe4;
  if (param_2 == '\0') {
    cls_0x4b9c40::meth_0x4b9c40((cls_0x4b9c40 *)this_00,(int *)&local_10,(int *)&param_1);
    if (local_10 != (int *)this->mbr_0xe8) {
      if (*(char *)(local_10 + 5) == '\0') {
        DVar3 = timeGetTime();
        iVar1 = local_10[4];
        DVar4 = timeGetTime();
        local_10[4] = (DVar4 - 300) + (DVar3 - iVar1);
        *(undefined *)(local_10 + 5) = 1;
      }
      goto LAB_004bbb98;
    }
    local_c = CONCAT31(local_c._1_3_,1);
    DVar3 = timeGetTime();
  }
  else {
    cls_0x4b9c40::meth_0x4b9c40((cls_0x4b9c40 *)this_00,(int *)&local_10,(int *)&param_1);
    if (local_10 != (int *)this->mbr_0xe8) {
      if (*(char *)(local_10 + 5) != '\0') {
        DVar3 = timeGetTime();
        iVar1 = local_10[4];
        DVar4 = timeGetTime();
        local_10[4] = (DVar4 - 300) + (DVar3 - iVar1);
        *(undefined *)(local_10 + 5) = 0;
      }
      goto LAB_004bbb98;
    }
    local_c = local_c & 0xffffff00;
    DVar3 = timeGetTime();
  }
  pDVar5 = (DWORD *)FUN_004bb5f0(this_00,&param_1);
  *pDVar5 = DVar3;
  pDVar5[1] = local_c;
LAB_004bbb98:
  local_10 = param_1;
  local_c = local_c & 0xffffff00;
  piVar6 = (int *)cls_0x50dbb0::meth_0x4bb090((cls_0x50dbb0 *)&this->mbr_0xd8,local_8,&local_10);
  *(char *)(*piVar6 + 0x10) = param_2;
  return;
}



void __thiscall cls_0x4b8f70::meth_0x4bc050(cls_0x4b8f70 *this)

{
  char cVar1;
  int **ppiVar2;
  dword dVar3;
  undefined4 *puVar4;
  cls_0x50db20 *pcVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  cls_0x405850 cVar9;
  int **ppiVar10;
  DWORD DVar11;
  dword *pdVar12;
  int **ppiVar13;
  uint uVar14;
  dword *this_00;
  undefined4 *puVar15;
  int iVar16;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  ulonglong uVar17;
  int **ppiStack_28;
  int iStack_24;
  int *piStack_20;
  cls_0x405850 local_1c;
  int **local_18;
  int **local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int *piStack_4;
  
  local_1c.mbr_0x0 = *(int *)this->mbr_0xc4;
  bVar8 = false;
  if ((int *)local_1c.mbr_0x0 != (int *)this->mbr_0xc4) {
    do {
      ppiVar13 = *(int ***)(local_1c.mbr_0x0 + 0xc);
      local_14 = ppiVar13;
      GUI::Interface::meth_0x48ddf0((Interface *)&this->mbr_0xcc,(int *)&local_18,(int *)&local_14);
      if (local_18 == (int **)this->mbr_0xd0) {
        meth_0x4bbaa0(this,(int *)ppiVar13,'\0');
      }
      else {
        GUI::Interface::meth_0x44b5e0((Interface *)&this->mbr_0xcc,&local_14,local_18);
      }
      cls_0x405850::meth_0x405850(&local_1c);
    } while (local_1c.mbr_0x0 != this->mbr_0xc4);
  }
  ppiVar13 = *(int ***)(int **)this->mbr_0xd0;
  if (ppiVar13 != (int **)this->mbr_0xd0) {
    do {
      meth_0x4bbaa0(this,ppiVar13[3],'\x01');
      if (*(char *)((int)ppiVar13 + 0x11) == '\0') {
        ppiVar2 = (int **)ppiVar13[2];
        if (*(char *)((int)ppiVar2 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x11);
          ppiVar13 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x11);
            ppiVar13 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar13[1] + 0x11);
          ppiVar10 = (int **)ppiVar13[1];
          ppiVar2 = ppiVar13;
          while ((ppiVar13 = ppiVar10, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar13[2]))) {
            cVar1 = *(char *)((int)ppiVar13[1] + 0x11);
            ppiVar10 = (int **)ppiVar13[1];
            ppiVar2 = ppiVar13;
          }
        }
      }
    } while (ppiVar13 != (int **)this->mbr_0xd0);
  }
  ppiStack_28 = *(int ***)(int **)this->mbr_0xe8;
  if (ppiStack_28 != (int **)this->mbr_0xe8) {
    do {
      piStack_20 = ppiStack_28[3];
      bVar7 = false;
      DVar11 = timeGetTime();
      local_14 = (int **)(DVar11 - (int)ppiStack_28[4]);
      if ((int **)0x12c < local_14) {
        local_14 = (int **)0x12c;
      }
      fVar6 = (float)(int)local_14;
      if ((int)local_14 < 0) {
        fVar6 = fVar6 + 4.294967e+09;
      }
      if (*(char *)(ppiStack_28 + 5) == '\0') {
        local_18 = local_14;
        uVar17 = FUN_00616e24();
        local_1c.mbr_0x0 = 0x66 - (int)uVar17;
        iStack_24 = 0;
        if ((NAN(extraout_ST0_00) || NAN((float10)1.0)) == (extraout_ST0_00 == (float10)1.0)) {
          iStack_24 = 0xff;
        }
      }
      else {
        local_18 = (int **)(1.0 - fVar6 * 0.003333333);
        uVar17 = FUN_00616e24();
        local_1c.mbr_0x0 = 0x66 - (int)uVar17;
        iStack_24 = 0;
        if ((NAN(extraout_ST0) || NAN((float10)(float)(LPCWSTR)0x0)) ==
            (extraout_ST0 == (float10)(float)(LPCWSTR)0x0)) {
          iStack_24 = 0xff;
        }
      }
      uVar17 = FUN_00616e24();
      iVar16 = (int)uVar17;
      pdVar12 = (dword *)cls_0x55dc80::meth_0x56ed80
                                   ((cls_0x55dc80 *)&this->mbr_0x9c,&iStack_10,(int *)&piStack_20);
      dVar3 = *pdVar12;
      if (dVar3 != this->mbr_0xa0) {
        puVar4 = *(undefined4 **)(dVar3 + 0x14);
        if (puVar4 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          puVar15 = (undefined4 *)*puVar4;
        }
        if (puVar15 != puVar4) {
          bVar7 = true;
          do {
            pcVar5 = (cls_0x50db20 *)puVar15[2];
            if (iVar16 == 0xff) {
              pcVar5->mbr_0x240 = 1;
              ::cls_0x50db20::meth_0x4b6010(pcVar5);
              *(dword *)&(pcVar5->VFX_Parameter).field_0xc = (pcVar5->VFX_Parameter).mbr_0x8;
            }
            else if (iVar16 == 0) {
              pcVar5->mbr_0x240 = 0;
            }
            else {
              pcVar5->mbr_0x240 = 1;
              ::cls_0x50db20::meth_0x4b5eb0(pcVar5,iVar16 << 0x18,'\0','\x01');
              *(undefined4 *)&(pcVar5->VFX_Parameter).field_0xc = 1;
            }
            puVar15 = (undefined4 *)*puVar15;
          } while (puVar15 != *(undefined4 **)(dVar3 + 0x14));
        }
      }
      pdVar12 = (dword *)cls_0x55dc80::meth_0x56ed80
                                   ((cls_0x55dc80 *)&this->mbr_0xa8,&iStack_c,(int *)&piStack_20);
      cVar9.mbr_0x0 = local_1c.mbr_0x0;
      dVar3 = *pdVar12;
      if (dVar3 != this->mbr_0xac) {
        puVar4 = *(undefined4 **)(dVar3 + 0x14);
        if (puVar4 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          puVar15 = (undefined4 *)*puVar4;
        }
        if (puVar15 != puVar4) {
          bVar7 = true;
          do {
            pcVar5 = (cls_0x50db20 *)puVar15[2];
            if (cVar9.mbr_0x0 == 0xff) {
              pcVar5->mbr_0x240 = 1;
              ::cls_0x50db20::meth_0x4b6010(pcVar5);
              *(dword *)&(pcVar5->VFX_Parameter).field_0xc = (pcVar5->VFX_Parameter).mbr_0x8;
            }
            else if (cVar9.mbr_0x0 == 0) {
              pcVar5->mbr_0x240 = 0;
            }
            else {
              pcVar5->mbr_0x240 = 1;
              ::cls_0x50db20::meth_0x4b5eb0(pcVar5,cVar9.mbr_0x0 << 0x18,'\0','\x01');
              *(undefined4 *)&(pcVar5->VFX_Parameter).field_0xc = 1;
            }
            puVar15 = (undefined4 *)*puVar15;
          } while (puVar15 != *(undefined4 **)(dVar3 + 0x14));
        }
      }
      pdVar12 = (dword *)cls_0x55dc80::meth_0x56ed80
                                   ((cls_0x55dc80 *)&this->mbr_0xb4,&iStack_8,(int *)&piStack_20);
      dVar3 = *pdVar12;
      if (dVar3 != this->mbr_0xb8) {
        puVar4 = *(undefined4 **)(dVar3 + 0x14);
        if (puVar4 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          puVar15 = (undefined4 *)*puVar4;
        }
        if (puVar15 != puVar4) {
          bVar7 = true;
          do {
            pcVar5 = (cls_0x50db20 *)puVar15[2];
            if (iStack_24 == 0xff) {
              pcVar5->mbr_0x240 = 1;
              ::cls_0x50db20::meth_0x4b6010(pcVar5);
              *(dword *)&(pcVar5->VFX_Parameter).field_0xc = (pcVar5->VFX_Parameter).mbr_0x8;
            }
            else if (local_1c.mbr_0x0 == 0) {
              pcVar5->mbr_0x240 = 0;
            }
            else {
              pcVar5->mbr_0x240 = 1;
              ::cls_0x50db20::meth_0x4b5eb0(pcVar5,iStack_24 << 0x18,'\0','\x01');
              *(undefined4 *)&(pcVar5->VFX_Parameter).field_0xc = 1;
            }
            puVar15 = (undefined4 *)*puVar15;
          } while (puVar15 != *(undefined4 **)(dVar3 + 0x14));
        }
      }
      if ((local_14 < (int **)0x12c) && (bVar7)) {
        if (*(char *)((int)ppiStack_28 + 0x19) == '\0') {
          ppiVar13 = (int **)ppiStack_28[2];
          if (*(char *)((int)ppiVar13 + 0x19) == '\0') {
            cVar1 = *(char *)((int)*ppiVar13 + 0x19);
            ppiStack_28 = ppiVar13;
            ppiVar13 = (int **)*ppiVar13;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*ppiVar13 + 0x19);
              ppiStack_28 = ppiVar13;
              ppiVar13 = (int **)*ppiVar13;
            }
          }
          else {
            cVar1 = *(char *)((int)ppiStack_28[1] + 0x19);
            ppiVar2 = (int **)ppiStack_28[1];
            ppiVar13 = ppiStack_28;
            while ((ppiStack_28 = ppiVar2, cVar1 == '\0' && (ppiVar13 == (int **)ppiStack_28[2]))) {
              cVar1 = *(char *)((int)ppiStack_28[1] + 0x19);
              ppiVar2 = (int **)ppiStack_28[1];
              ppiVar13 = ppiStack_28;
            }
          }
        }
      }
      else {
        ppiStack_28 = (int **)cls_0x4b91b0::meth_0x4b9fb0
                                        ((cls_0x4b91b0 *)&this->mbr_0xe4,&piStack_4,ppiStack_28);
        ppiStack_28 = (int **)*ppiStack_28;
      }
      bVar8 = (bool)(bVar8 | bVar7);
    } while (ppiStack_28 != (int **)this->mbr_0xe8);
    if ((bVar8) && (uVar14 = 0, this->mbr_0x58 != 0)) {
      iVar16 = 0;
      do {
        cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)(this->mbr_0x6c + 0x28 + iVar16));
        uVar14 = uVar14 + 1;
        iVar16 = iVar16 + 0x6c;
      } while (uVar14 < this->mbr_0x58);
    }
  }
  pdVar12 = &this->mbr_0xc0;
  this_00 = &this->mbr_0xcc;
  if (this_00 != pdVar12) {
    GUI::Interface::meth_0x44e3e0
              ((Interface *)this_00,&piStack_4,*(int ***)(int **)this->mbr_0xd0,
               (int **)this->mbr_0xd0);
    *(undefined *)this_00 = *(undefined *)pdVar12;
    GUI::Interface::meth_0x4b9e30((Interface *)this_00,(int)pdVar12);
  }
  return;
}



void __thiscall cls_0x4b8f70::meth_0x4bc6f0(cls_0x4b8f70 *this)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined *puVar8;
  short sVar9;
  int *piVar10;
  int unaff_ESI;
  int iVar11;
  uint uVar12;
  undefined4 unaff_retaddr;
  char *pcStack_30;
  uint local_1c;
  undefined *puStack_18;
  uint uStack_14;
  int iStack_10;
  char local_4 [4];
  
  piVar10 = (int *)0x0;
  if (this->mbr_0x18 != 0) {
    meth_0x4bc050(this);
    if ((this->mbr_0x0 != 0) && (local_1c = 0, this->mbr_0x58 != 0)) {
      do {
        *(undefined *)(this->mbr_0x68 + local_1c * 0xc) = 0;
        local_1c = local_1c + 1;
      } while (local_1c < this->mbr_0x58);
    }
    uVar12 = 0;
    pcStack_30 = local_4;
    iVar5 = (**(code **)(*(int *)this->mbr_0x18 + 0x40))(&local_1c);
    while (iVar5 != 0) {
      piVar1 = (int *)(this->mbr_0x70 + unaff_ESI * 0x28);
      iVar5 = *piVar1;
      piVar6 = *(int **)(iVar5 + 0x3c);
      for (iVar5 = *(int *)(iVar5 + 0x38); iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined *)(*piVar6 + piVar1[4]) = 0;
        piVar6 = piVar6 + 0xd;
      }
      if (this->mbr_0x0 != 0) {
        puStack_18 = (undefined *)(this->mbr_0x68 + unaff_ESI * 0xc);
        *puStack_18 = 1;
        uVar7 = 0;
        if (*(int *)(this->mbr_0x68 + 4 + unaff_ESI * 0xc) != 0) {
          iVar5 = 0;
          do {
            *(undefined *)(iVar5 + *(int *)(puStack_18 + 8)) = 0;
            uVar7 = uVar7 + 1;
            iVar5 = iVar5 + 0x14;
          } while (uVar7 < *(uint *)(this->mbr_0x68 + 4 + unaff_ESI * 0xc));
        }
      }
      do {
        puVar2 = (undefined *)this->mbr_0x38;
        iStack_10 = (**(code **)(*(int *)this->mbr_0x18 + 0x54))(&stack0xffffffe0,this->mbr_0x3c);
        puStack_18 = (undefined *)0x0;
        if (puVar2 != (undefined *)0x0) {
          iVar5 = (int)piVar10 << 4;
          do {
            local_1c = *(uint *)(this->mbr_0x3c + (int)puStack_18 * 4);
            *(undefined *)(local_1c + *(int *)(this->mbr_0x70 + 0x10 + unaff_ESI * 0x28)) = 1;
            if (this->mbr_0x0 != 0) {
              iVar11 = this->mbr_0x68 + unaff_ESI * 0xc;
              uStack_14 = *(uint *)(iVar11 + 4);
              uVar7 = 0;
              if (uStack_14 != 0) {
                puVar8 = *(undefined **)(iVar11 + 8);
                do {
                  if (local_1c == *(uint *)(puVar8 + 4)) {
                    *puVar8 = 1;
                    break;
                  }
                  uVar7 = uVar7 + 1;
                  puVar8 = puVar8 + 0x14;
                } while (uVar7 < uStack_14);
              }
            }
            if ((this->mbr_0x81 != 0) && (local_4[0] != '\0')) {
              sVar9 = (short)piVar10;
              *(short *)(this->mbr_0x8c + uVar12 * 2) = sVar9;
              sVar4 = sVar9 + 1;
              *(short *)((this->mbr_0x8c - 8) + (uVar12 + 5) * 2) = sVar4;
              *(short *)((this->mbr_0x8c - 6) + (uVar12 + 5) * 2) = sVar4;
              *(short *)((this->mbr_0x8c - 8) + (uVar12 + 7) * 2) = sVar9 + 2;
              *(short *)((this->mbr_0x8c - 6) + (uVar12 + 7) * 2) = sVar9 + 2;
              iVar11 = uVar12 + 8;
              *(short *)((this->mbr_0x8c - 6) + iVar11 * 2) = sVar9 + 3;
              *(short *)((this->mbr_0x8c - 4) + iVar11 * 2) = sVar9 + 3;
              *(short *)((this->mbr_0x8c - 2) + iVar11 * 2) = sVar9;
              iVar11 = uVar12 + 0xb;
              *(short *)((this->mbr_0x8c - 6) + iVar11 * 2) = sVar9 + 4;
              *(short *)((this->mbr_0x8c - 4) + iVar11 * 2) = sVar9 + 5;
              *(short *)((this->mbr_0x8c - 2) + iVar11 * 2) = sVar9 + 5;
              *(short *)((this->mbr_0x8c - 4) + (uVar12 + 0xd) * 2) = sVar9 + 6;
              *(short *)((this->mbr_0x8c - 2) + (uVar12 + 0xd) * 2) = sVar9 + 6;
              *(short *)((this->mbr_0x8c - 2) + (uVar12 + 0xe) * 2) = sVar9 + 7;
              *(short *)(this->mbr_0x8c + (uVar12 + 0xe) * 2) = sVar9 + 7;
              iVar11 = uVar12 + 0x10;
              *(short *)((this->mbr_0x8c - 2) + iVar11 * 2) = sVar9 + 4;
              *(short *)(this->mbr_0x8c + iVar11 * 2) = sVar9;
              *(short *)(this->mbr_0x8c + 2 + iVar11 * 2) = sVar9 + 4;
              *(short *)(this->mbr_0x8c + 2 + (uVar12 + 0x11) * 2) = sVar4;
              *(short *)(this->mbr_0x8c + (uVar12 + 0x13) * 2) = sVar9 + 5;
              *(short *)(this->mbr_0x8c + (uVar12 + 0x14) * 2) = sVar9 + 2;
              *(short *)(this->mbr_0x8c + (uVar12 + 0x15) * 2) = sVar9 + 6;
              *(short *)(this->mbr_0x8c + (uVar12 + 0x16) * 2) = sVar9 + 3;
              *(short *)(this->mbr_0x8c + (uVar12 + 0x17) * 2) = sVar9 + 7;
              iVar11 = local_1c * 0xc;
              *(undefined4 *)(iVar5 + this->mbr_0x84) =
                   *(undefined4 *)(iVar11 + *(int *)(this->mbr_0x78 + unaff_ESI * 4));
              *(undefined4 *)(iVar5 + 4 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x7c + unaff_ESI * 4) + 4 + iVar11);
              *(undefined4 *)(iVar5 + 8 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x7c + unaff_ESI * 4) + 8 + iVar11);
              *(undefined4 *)(iVar5 + 0xc + this->mbr_0x84) = 0x8080ffff;
              *(undefined4 *)(iVar5 + 0x10 + this->mbr_0x84) =
                   *(undefined4 *)(iVar11 + *(int *)(this->mbr_0x7c + unaff_ESI * 4));
              *(undefined4 *)(iVar5 + 0x14 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x7c + unaff_ESI * 4) + 4 + iVar11);
              *(undefined4 *)(iVar5 + 0x18 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x7c + unaff_ESI * 4) + 8 + iVar11);
              *(undefined4 *)(iVar5 + 0x1c + this->mbr_0x84) = 0x80ffffff;
              *(undefined4 *)(iVar5 + 0x20 + this->mbr_0x84) =
                   *(undefined4 *)(iVar11 + *(int *)(this->mbr_0x7c + unaff_ESI * 4));
              *(undefined4 *)(iVar5 + 0x24 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x7c + unaff_ESI * 4) + 4 + iVar11);
              *(undefined4 *)(iVar5 + 0x28 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x78 + unaff_ESI * 4) + 8 + iVar11);
              *(undefined4 *)(iVar5 + 0x2c + this->mbr_0x84) = 0x80ffff80;
              uVar12 = uVar12 + 0x18;
              *(undefined4 *)(iVar5 + 0x30 + this->mbr_0x84) =
                   *(undefined4 *)(iVar11 + *(int *)(this->mbr_0x78 + unaff_ESI * 4));
              *(undefined4 *)(iVar5 + 0x34 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x7c + unaff_ESI * 4) + 4 + iVar11);
              *(undefined4 *)(iVar5 + 0x38 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x78 + unaff_ESI * 4) + 8 + iVar11);
              *(undefined4 *)(iVar5 + 0x3c + this->mbr_0x84) = 0x8080ff80;
              *(undefined4 *)(iVar5 + 0x40 + this->mbr_0x84) =
                   *(undefined4 *)(iVar11 + *(int *)(this->mbr_0x78 + unaff_ESI * 4));
              *(undefined4 *)(iVar5 + 0x44 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x78 + unaff_ESI * 4) + 4 + iVar11);
              *(undefined4 *)(iVar5 + 0x48 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x7c + unaff_ESI * 4) + 8 + iVar11);
              *(undefined4 *)(iVar5 + 0x4c + this->mbr_0x84) = 0x808080ff;
              *(undefined4 *)(iVar5 + 0x50 + this->mbr_0x84) =
                   *(undefined4 *)(iVar11 + *(int *)(this->mbr_0x7c + unaff_ESI * 4));
              *(undefined4 *)(iVar5 + 0x54 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x78 + unaff_ESI * 4) + 4 + iVar11);
              *(undefined4 *)(iVar5 + 0x58 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x7c + unaff_ESI * 4) + 8 + iVar11);
              *(undefined4 *)(iVar5 + 0x5c + this->mbr_0x84) = 0x80ff80ff;
              *(undefined4 *)(iVar5 + 0x60 + this->mbr_0x84) =
                   *(undefined4 *)(iVar11 + *(int *)(this->mbr_0x7c + unaff_ESI * 4));
              *(undefined4 *)(iVar5 + 100 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x78 + unaff_ESI * 4) + 4 + iVar11);
              *(undefined4 *)(iVar5 + 0x68 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x78 + unaff_ESI * 4) + 8 + iVar11);
              *(undefined4 *)(iVar5 + 0x6c + this->mbr_0x84) = 0x80ff8080;
              *(undefined4 *)(iVar5 + 0x70 + this->mbr_0x84) =
                   *(undefined4 *)(iVar11 + *(int *)(this->mbr_0x78 + unaff_ESI * 4));
              *(undefined4 *)(iVar5 + 0x74 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x78 + unaff_ESI * 4) + 4 + iVar11);
              *(undefined4 *)(iVar5 + 0x78 + this->mbr_0x84) =
                   *(undefined4 *)(*(int *)(this->mbr_0x78 + unaff_ESI * 4) + 8 + iVar11);
              *(undefined4 *)(iVar5 + 0x7c + this->mbr_0x84) = 0x80808080;
              piVar10 = piVar10 + 2;
              iVar5 = iVar5 + 0x80;
            }
            puStack_18 = puStack_18 + 1;
          } while (puStack_18 < puVar2);
        }
      } while (iStack_10 != 0);
      (**(code **)(*DAT_00707ce4 + 0xe8))(this->mbr_0x70 + unaff_ESI * 0x28,unaff_retaddr,1);
      iVar5 = (**(code **)(*(int *)this->mbr_0x18 + 0x40))(&pcStack_30,&puStack_18);
    }
    if ((((this->mbr_0x81 != 0) && (local_4[0] != '\0')) && (piVar10 != (int *)0x0)) &&
       (uVar12 != 0)) {
      iVar5 = FUN_0047460d(0x42);
      Gregorian::meth_0x4ab680((Gregorian *)this->mbr_0x90,0x42,iVar5,piVar10);
      Gregorian::meth_0x4ab6c0((Gregorian *)this->mbr_0x90,2,uVar12);
      *(uint *)(this->mbr_0x94 + 0x30) = uVar12 >> 1;
      cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)(this->mbr_0x90 + 0x28));
      (**(code **)(*DAT_00707ce4 + 0xe8))(this->mbr_0x98,unaff_retaddr,1);
    }
    if (((this->mbr_0x80 != 0) && (cVar3 = (**(code **)(*DAT_00707ce4 + 0x1cc))(), cVar3 != '\0'))
       && (uVar12 = 0, this->mbr_0x50 != 0)) {
      iVar5 = 0;
      do {
        (**(code **)(*DAT_00707ce4 + 0x1d0))(this->mbr_0x54 + iVar5,0);
        uVar12 = uVar12 + 1;
        iVar5 = iVar5 + 0xb4;
      } while (uVar12 < this->mbr_0x50);
    }
  }
  return;
}



void __thiscall cls_0x4b8f70::meth_0x4bd470(cls_0x4b8f70 *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006328e2;
  pvStack_c = ExceptionList;
  local_4 = 6;
  ExceptionList = &pvStack_c;
  meth_0x4bb7a0(this);
  local_4 = CONCAT31(local_4._1_3_,5);
  cls_0x4b91b0::meth_0x4ba510
            ((cls_0x4b91b0 *)&this->mbr_0xe4,&local_10,*(int ***)(int **)this->mbr_0xe8,
             (int **)this->mbr_0xe8);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xe8);
}



undefined4 __thiscall
cls_0x4b8f70::meth_0x4bfb60
          (cls_0x4b8f70 *this,int *param_1,int param_2,undefined4 param_3,byte param_4,byte param_5)

{
  dword *pdVar1;
  cls_0x4960d0 *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  HWND hWnd;
  undefined4 uVar7;
  int unaff_EBX;
  int unaff_ESI;
  LPRECT lpRect;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  this->mbr_0x1 = param_5;
  cls_0x50dbb0::meth_0x4b9a50((cls_0x50dbb0 *)&this->mbr_0xd8);
  *(dword *)(this->mbr_0xdc + 4) = this->mbr_0xdc;
  this->mbr_0xe0 = 0;
  *(dword *)this->mbr_0xdc = this->mbr_0xdc;
  *(dword *)(this->mbr_0xdc + 8) = this->mbr_0xdc;
  cls_0x4b91b0::meth_0x4b9a90((cls_0x4b91b0 *)&this->mbr_0xe4);
  *(dword *)(this->mbr_0xe8 + 4) = this->mbr_0xe8;
  this->mbr_0xec = 0;
  *(dword *)this->mbr_0xe8 = this->mbr_0xe8;
  *(dword *)(this->mbr_0xe8 + 8) = this->mbr_0xe8;
  GUI::Interface::meth_0x44ab00((Interface *)&this->mbr_0xcc);
  *(dword *)(this->mbr_0xd0 + 4) = this->mbr_0xd0;
  pvVar5 = (void *)this->mbr_0xd0;
  this->mbr_0xd4 = 0;
  *(void **)pvVar5 = pvVar5;
  *(dword *)(this->mbr_0xd0 + 8) = this->mbr_0xd0;
  if ((param_2 != 0) && (this->mbr_0x38 != param_2)) {
    if ((void *)this->mbr_0x3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x3c);
    }
    this->mbr_0x38 = param_2;
    pvVar5 = operator_new(param_2 * 4);
    this->mbr_0x3c = (dword)pvVar5;
  }
  if (this->mbr_0x18 == 0) {
    this->mbr_0x81 = param_4;
    this->mbr_0x18 = (dword)param_1;
    (**(code **)(*param_1 + 0x14))(&local_d8);
    fVar2 = (fStack_d0 - fStack_dc) * 0.5;
    this->mbr_0x20 = (dword)fVar2;
    fVar3 = (fStack_cc - local_d8) * 0.5;
    this->mbr_0x24 = (dword)fVar3;
    fVar4 = (fStack_c8 - fStack_d4) * 0.5;
    this->mbr_0x28 = (dword)fVar4;
    this->mbr_0x2c = (dword)fVar2;
    this->mbr_0x30 = (dword)fVar3;
    this->mbr_0x34 = (dword)fVar4;
    Octree2Gfx::ConstructRenderData(this);
    meth_0x4b8f70(this,-param_2 - 1);
    iVar6 = (**(code **)(*DAT_00707ce4 + 0x90))();
    this_00 = *(cls_0x4960d0 **)(iVar6 + 0x15c);
    pdVar1 = &this->mbr_0x1c;
    (**(code **)(*(int *)this->mbr_0x18 + 0x18))
              ((float)this_00->mbr_0x110 * 57.29578,this_00->mbr_0x10c,this_00->mbr_0x114,
               this_00->mbr_0x118,pdVar1);
    cls_0x4960d0::meth_0x4962c0(this_00,&fStack_98);
    lpRect = (LPRECT)&stack0xffffff00;
    hWnd = (HWND)(**(code **)(*DAT_00707ce4 + 0x48))();
    GetClientRect(hWnd,lpRect);
    fStack_d0 = (float)uStack_90;
    uStack_c4 = uStack_84;
    uStack_b8 = uStack_78;
    uStack_ac = uStack_6c;
    local_d8 = fStack_98;
    uStack_a0 = uStack_60;
    fStack_cc = (float)uStack_8c;
    fStack_d4 = (float)uStack_94;
    uStack_c0 = uStack_80;
    fStack_c8 = (float)uStack_88;
    uStack_b4 = uStack_74;
    uStack_bc = uStack_7c;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_9c = uStack_5c;
    uStack_a4 = uStack_64;
    (**(code **)(*(int *)*pdVar1 + 8))
              ((float)((int)fVar2 - unaff_ESI),(float)((int)fVar3 - unaff_EBX),&local_d8);
    (**(code **)(*(int *)*pdVar1 + 0xc))(this->mbr_0x4);
    uStack_68 = 0x3f800000;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0x3f800000;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0x3f800000;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    uVar7 = (**(code **)(*(int *)*pdVar1 + 0x14))(&uStack_68);
    return CONCAT31((int3)((uint)uVar7 >> 8),1);
  }
  return (uint)pvVar5 & 0xffffff00;
}


