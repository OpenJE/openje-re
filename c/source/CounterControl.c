#include "../include/CounterControl.h"

dword __thiscall CounterControl::meth_0x4307a0(CounterControl *this)

{
  if (this->mbr_0x78 == 0) {
    return this->mbr_0x6c;
  }
  return this->mbr_0x80;
}



int __thiscall CounterControl::meth_0x430830(CounterControl *this)

{
  if (this->mbr_0x10 == 0) {
    return 0;
  }
  return (int)(this->mbr_0x14 - this->mbr_0x10) >> 2;
}



void __thiscall CounterControl::meth_0x430850(CounterControl *this,int param_1)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  
  iVar1 = meth_0x430830(this);
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      iVar2 = iVar2 * *(int *)(extraout_ECX + 200);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(int *)(extraout_ECX + 0x70) = param_1;
  if (param_1 < 0) {
    *(undefined4 *)(extraout_ECX + 0x70) = 0;
  }
  if (iVar2 + -1 < *(int *)(extraout_ECX + 0x70)) {
    *(int *)(extraout_ECX + 0x70) = iVar2 + -1;
  }
  return;
}



void __thiscall CounterControl::meth_0x430890(CounterControl *this,int param_1)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  
  iVar1 = meth_0x430830(this);
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      iVar2 = iVar2 * *(int *)(extraout_ECX + 200);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(int *)(extraout_ECX + 0x74) = param_1;
  if (param_1 < 0) {
    *(undefined4 *)(extraout_ECX + 0x74) = 0;
  }
  if (iVar2 + -1 < *(int *)(extraout_ECX + 0x74)) {
    *(int *)(extraout_ECX + 0x74) = iVar2 + -1;
  }
  return;
}



void __thiscall CounterControl::meth_0x4309b0(CounterControl *this,int param_1,int param_2)

{
  int *piVar1;
  
  *(char *)(param_1 + this->mbr_0x20) = (char)param_2;
  piVar1 = *(int **)(this->mbr_0x50 + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(this->mbr_0xbc,this->mbr_0xc0);
    (**(code **)(**(int **)(this->mbr_0x50 + param_1 * 4) + 0x130))
              (param_2 * 0x1c + this->mbr_0x9c,0,0,0,0xbf800000,0xbf800000,1);
    (**(code **)(**(int **)(this->mbr_0x60 + param_1 * 4) + 0x54))(0);
  }
  piVar1 = *(int **)(this->mbr_0x60 + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x54))(1);
  }
  return;
}



void __thiscall
CounterControl::meth_0x430a30
          (CounterControl *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(this->mbr_0x30 + param_1 * 4) = param_2;
  *(undefined4 *)(this->mbr_0x40 + param_1 * 4) = param_3;
  return;
}



uint __thiscall CounterControl::meth_0x430a50(CounterControl *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int local_30;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (param_2 != 0) {
    local_24 = 0;
    iVar3 = meth_0x430830(this);
    local_30 = 0;
    local_28 = 0;
    if (0 < iVar3) {
      iVar11 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
      iVar1 = *(int *)(extraout_ECX + 200);
      piVar9 = *(int **)(extraout_ECX + 0x40);
      iVar4 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
      iVar7 = *(int *)(extraout_ECX + 0x30) - (int)piVar9;
      do {
        iVar2 = *(int *)(iVar7 + (int)piVar9);
        iVar8 = (*piVar9 - iVar2) + 1;
        if ((int)param_1 < 1) {
          local_18 = (-1 < (int)param_1) - 1;
        }
        else {
          local_18 = 1;
        }
        if ((int)param_2 < 1) {
          local_1c = (-1 < (int)param_2) - 1;
        }
        else {
          local_1c = 1;
        }
        iVar10 = 1;
        iVar5 = iVar11;
        iVar6 = iVar4;
        if (0 < local_28) {
          local_20 = local_28;
          do {
            iVar5 = iVar5 / iVar1;
            iVar6 = iVar6 / iVar1;
            iVar10 = iVar10 * iVar1;
            local_20 = local_20 + -1;
          } while (local_20 != 0);
        }
        iVar5 = ((iVar5 % iVar1) % iVar8) * local_18 +
                local_30 + ((iVar6 % iVar1) % iVar8) * local_1c;
        local_30 = 0;
        if (*piVar9 < iVar5) {
          local_30 = iVar5 / iVar8;
          iVar5 = iVar5 % iVar8;
        }
        else if (iVar5 < iVar2) {
          local_30 = iVar5 / iVar8 + -1;
          iVar5 = iVar5 % iVar8 + iVar8;
        }
        local_24 = local_24 + iVar5 * iVar10;
        local_28 = local_28 + 1;
        piVar9 = piVar9 + 1;
      } while (local_28 < iVar3);
    }
    return local_24;
  }
  return param_1;
}



void __thiscall CounterControl::meth_0x430c40(CounterControl *this,int param_1)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_2c;
  dword local_28;
  int local_24;
  int local_1c;
  uint local_18;
  dword local_10;
  
  if ((int)this->mbr_0x74 < param_1) {
    param_1 = this->mbr_0x74;
  }
  if (param_1 < (int)this->mbr_0x70) {
    param_1 = this->mbr_0x70;
  }
  if (this->mbr_0x78 == 0) {
    this->mbr_0x78 = 1;
    this->mbr_0x7c = 0;
    this->mbr_0x80 = param_1;
    iVar3 = meth_0x430830(this);
    if (0 < iVar3) {
      iVar11 = 0;
      do {
        dVar1 = this->mbr_0x8c;
        DVar4 = timeGetTime();
        *(DWORD *)(dVar1 + iVar11 * 4) = DVar4;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar3);
      return;
    }
  }
  else {
    iVar3 = meth_0x430830(this);
    local_28 = 0;
    local_10 = 0;
    local_1c = 0;
    if (0 < iVar3) {
      do {
        local_18 = this->mbr_0x6c;
        if (this->mbr_0x7c == 1) {
          if ((int)local_18 < (int)this->mbr_0x80) {
            local_2c = meth_0x430a50(this,local_18,1);
          }
          else {
            local_2c = meth_0x430a50(this,local_18,((int)local_18 <= (int)this->mbr_0x80) - 1);
          }
        }
        else {
          local_2c = this->mbr_0x80;
        }
        iVar11 = *(int *)(this->mbr_0x40 + local_1c * 4);
        iVar2 = *(int *)(this->mbr_0x30 + local_1c * 4);
        iVar7 = (iVar11 - iVar2) + 1;
        local_24 = 1;
        iVar5 = param_1;
        if (0 < local_1c) {
          dVar1 = this->mbr_0xc8;
          iVar10 = local_1c;
          do {
            local_18 = (int)local_18 / (int)dVar1;
            local_2c = (int)local_2c / (int)dVar1;
            iVar5 = iVar5 / (int)dVar1;
            local_24 = dVar1 * local_24;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        dVar1 = this->mbr_0xc8;
        iVar10 = ((int)local_18 % (int)dVar1) % iVar7;
        iVar8 = ((int)local_2c % (int)dVar1) % iVar7;
        iVar7 = (iVar5 % (int)dVar1) % iVar7;
        if (this->mbr_0x7c == 1) {
          if (local_1c == 0) {
            if ((int)this->mbr_0x80 < (int)this->mbr_0x6c) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar9 = (uint)((int)this->mbr_0x6c < (int)this->mbr_0x80);
            }
          }
          else {
            uVar9 = FUN_004307c0(iVar10,iVar8,iVar2,iVar11);
          }
        }
        else {
          uVar9 = FUN_004307c0(iVar10,iVar8,iVar2,iVar11);
        }
        uVar6 = FUN_004307c0(iVar10,iVar7,iVar2,iVar11);
        if (uVar9 == uVar6) {
          local_28 = local_28 + local_24 * iVar10;
          if (this->mbr_0x7c == 1) {
            timeGetTime();
            dVar1 = this->mbr_0x8c;
            DVar4 = timeGetTime();
            FUN_0061702a(extraout_ECX_00);
            uVar12 = FUN_00616e24();
            *(DWORD *)(dVar1 + local_1c * 4) = DVar4 - (int)uVar12;
          }
        }
        else if (iVar10 == iVar8) {
          dVar1 = this->mbr_0x8c;
          local_28 = local_28 + local_24 * iVar10;
          DVar4 = timeGetTime();
          *(DWORD *)(dVar1 + local_1c * 4) = DVar4;
        }
        else {
          timeGetTime();
          FUN_0061702a(extraout_ECX);
          uVar12 = FUN_00616e24();
          dVar1 = this->mbr_0x8c;
          DVar4 = timeGetTime();
          uVar13 = FUN_00616e24();
          *(DWORD *)(dVar1 + local_1c * 4) = DVar4 + (int)uVar13;
          if ((int)uVar12 != 0) {
            iVar10 = iVar10 + uVar9;
            if (iVar11 < iVar10) {
              local_28 = local_28 + iVar2 * local_24;
              goto LAB_00430fb7;
            }
            if (iVar10 < iVar2) {
              iVar10 = iVar11;
            }
          }
          local_28 = local_28 + iVar10 * local_24;
        }
LAB_00430fb7:
        local_10 = local_10 + local_24 * iVar7;
        local_1c = local_1c + 1;
      } while (local_1c < iVar3);
    }
    this->mbr_0x6c = local_28;
    this->mbr_0x80 = local_10;
    this->mbr_0x7c = 0;
  }
  return;
}



void __thiscall CounterControl::meth_0x4310e0(CounterControl *this,uint param_1)

{
  dword dVar1;
  dword dVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  if (param_1 != 0) {
    iVar3 = meth_0x4307a0(this);
    if (((int)this->mbr_0x70 <= (int)(iVar3 + param_1)) &&
       ((int)(iVar3 + param_1) <= (int)this->mbr_0x74)) {
      if (this->mbr_0x78 == 0) {
        this->mbr_0x78 = 1;
        this->mbr_0x7c = 1;
        uVar4 = meth_0x430a50(this,this->mbr_0x6c,param_1);
        this->mbr_0x80 = uVar4;
        DVar5 = timeGetTime();
        this->mbr_0x84 = DVar5;
        return;
      }
      if (this->mbr_0x7c == 1) {
        dVar1 = this->mbr_0x80;
        dVar2 = this->mbr_0x6c;
        uVar4 = dVar1 - dVar2;
        if (((int)uVar4 < 0) || (0 < (int)uVar4)) {
          if (param_1 == 1) {
            if (-1 < (int)uVar4) {
LAB_00431170:
              this->mbr_0x80 = dVar1 + param_1;
              return;
            }
          }
          else if ((param_1 != 0xffffffff) || ((int)uVar4 < 1)) goto LAB_00431170;
          if ((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f) == 1) {
            this->mbr_0x6c = dVar1;
            this->mbr_0x80 = dVar2;
            timeGetTime();
            DVar5 = timeGetTime();
            uVar6 = FUN_00616e24();
            this->mbr_0x84 = DVar5 + (int)uVar6;
            return;
          }
          this->mbr_0x80 = dVar1 + param_1;
          if (dVar1 + param_1 != dVar2) {
            return;
          }
        }
        this->mbr_0x78 = 0;
        return;
      }
      if (this->mbr_0x7c == 0) {
        meth_0x430c40(this,this->mbr_0x80 + param_1);
      }
    }
  }
  return;
}



undefined4 __thiscall CounterControl::meth_0x431280(CounterControl *this,int *param_1,int *param_2)

{
  undefined4 in_EAX;
  int *piVar1;
  undefined4 uVar2;
  DWORD DVar3;
  
  piVar1 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),this->mbr_0xb8);
  if (this->mbr_0xb8 == 0) {
    piVar1 = (int *)*param_2;
    if ((piVar1 == (int *)0x4) || (piVar1 == (int *)0x7)) {
      piVar1 = param_1;
      if (param_1[0x346] == 1) {
        if (param_1 == (int *)this->mbr_0x4) {
          DVar3 = timeGetTime();
          this->mbr_0xa8 = DVar3;
          this->mbr_0xac = DVar3;
          uVar2 = meth_0x4310e0(this,1);
          return CONCAT31((int3)((uint)uVar2 >> 8),1);
        }
        if (param_1 == (int *)this->mbr_0x8) {
          piVar1 = (int *)timeGetTime();
          this->mbr_0xa8 = (dword)piVar1;
LAB_0043134e:
          this->mbr_0xac = (dword)piVar1;
          uVar2 = meth_0x4310e0(this,0xffffffff);
          return CONCAT31((int3)((uint)uVar2 >> 8),1);
        }
      }
    }
    else if (piVar1 == (int *)0x0) {
      if (param_1 == (int *)this->mbr_0x4) {
        piVar1 = (int *)(**(code **)(*param_1 + 300))();
        if (piVar1 == (int *)0x2) {
          piVar1 = (int *)timeGetTime();
          if (((int *)(this->mbr_0xb0 + this->mbr_0xa8) < piVar1) &&
             ((int *)(this->mbr_0xb4 + this->mbr_0xac) < piVar1)) {
            this->mbr_0xac = (dword)piVar1;
            uVar2 = meth_0x4310e0(this,1);
            return CONCAT31((int3)((uint)uVar2 >> 8),1);
          }
        }
      }
      else if (param_1 == (int *)this->mbr_0x8) {
        piVar1 = (int *)(**(code **)(*param_1 + 300))();
        if (piVar1 == (int *)0x2) {
          piVar1 = (int *)timeGetTime();
          if (((int *)(this->mbr_0xb0 + this->mbr_0xa8) < piVar1) &&
             ((int *)(this->mbr_0xb4 + this->mbr_0xac) < piVar1)) goto LAB_0043134e;
        }
      }
    }
  }
  return (uint)piVar1 & 0xffffff00;
}



void __thiscall CounterControl::meth_0x4313b0(CounterControl *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  if (param_1 < (int)this->mbr_0x70) {
    param_1 = this->mbr_0x70;
  }
  if ((int)this->mbr_0x74 < param_1) {
    param_1 = this->mbr_0x74;
  }
  iVar1 = meth_0x4307a0(this);
  if ((param_1 != iVar1) || (param_2 == 2)) {
    if (param_2 == 1) {
      meth_0x4310e0(this,param_1 - iVar1);
      return;
    }
    iVar1 = 0;
    if (param_2 == 0) {
      meth_0x430c40(this,param_1);
      return;
    }
    this->mbr_0x6c = 0;
    iVar2 = meth_0x430830(this);
    param_2 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = 1;
        iVar3 = param_1;
        if (0 < iVar1) {
          local_8 = param_2;
          do {
            iVar3 = iVar3 / (int)this->mbr_0xc8;
            iVar4 = iVar4 * this->mbr_0xc8;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
        }
        iVar3 = (iVar3 % (int)this->mbr_0xc8) %
                ((*(int *)(iVar1 + this->mbr_0x40) - *(int *)(this->mbr_0x30 + iVar1)) + 1);
        meth_0x4309b0(this,param_2,iVar3);
        param_2 = param_2 + 1;
        iVar1 = iVar1 + 4;
        this->mbr_0x6c = this->mbr_0x6c + iVar4 * iVar3;
      } while (param_2 < iVar2);
    }
  }
  return;
}



void __thiscall CounterControl::meth_0x431d70(CounterControl *this)

{
  if (this->mbr_0x78 != 0) {
    meth_0x4313b0(this,this->mbr_0x80,2);
    this->mbr_0x78 = 0;
  }
  return;
}



void __thiscall CounterControl::meth_0x431f80(CounterControl *this,int param_1)

{
  char cVar1;
  Base__vftable_66e41c *pBVar2;
  Base *this_00;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  LONG unaff_ESI;
  uint unaff_EDI;
  uint unaff_retaddr;
  dword dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puStack_7c;
  undefined *puStack_78;
  void **ppvStack_74;
  void *pvStack_5c;
  undefined auStack_58 [8];
  dword local_50;
  Picture *local_4c;
  uint uStack_48;
  undefined uStack_40;
  undefined uStack_3c;
  void *local_28;
  undefined uStack_1c;
  dword local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d483;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_50 = param_1 * 4;
  piVar5 = *(int **)(local_50 + this->mbr_0x10);
  if (piVar5 == (int *)0x0) {
    *(undefined4 *)(local_50 + this->mbr_0x50) = 0;
  }
  else {
    ppvStack_74 = (void **)0x431fd2;
    ExceptionList = &local_c;
    local_4c = (Picture *)FUN_004a7680(0xd2c);
    local_4 = 0;
    if (local_4c == (Picture *)0x0) {
      this_00 = (Base *)0x0;
    }
    else {
      ppvStack_74 = (void **)0x431fea;
      this_00 = (Base *)GUI::Picture::Picture(local_4c,2);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    pBVar2 = this_00->vftptr_0x0;
    local_4 = 1;
    iVar3 = (**(code **)(*piVar5 + 0x88))();
    ppvStack_74 = (void **)0x43201d;
    (*pBVar2[3].virt_deldtor_0x4af000_0)(this_00);
    ppvStack_74 = &pvStack_5c;
    puStack_78 = auStack_58;
    puStack_7c = (undefined *)0x43202e;
    (**(code **)(*piVar5 + 0x48))();
    puStack_7c = &stack0xffffff98;
    (**(code **)(*piVar5 + 0x14))();
    (*this_00->vftptr_0x0[1].virt_meth_0x4b27e0_24)(this_00,unaff_ESI,unaff_EDI);
    (*this_00->vftptr_0x0->virt_meth_0x4b2790_16)(this_00,local_10,iVar3);
    uVar12 = 0;
    (*this_00->vftptr_0x0[1].virt_meth_0x4b2880_40)(this_00);
    pcVar4 = (char *)(**(code **)(*piVar5 + 0x50))(uVar12);
    uStack_48 = 0xf;
    local_4c = (Picture *)0x0;
    pvStack_5c = (void *)((uint)pvStack_5c & 0xffffff00);
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffffa0,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
    uStack_1c = 2;
    (*this_00->vftptr_0x0[1].virt_meth_0x4b2800_32)(this_00,(FILE *)&stack0xffffffa0);
    uStack_1c = 1;
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_5c);
    }
    dVar7 = this->mbr_0x9c;
    uVar11 = 1;
    iVar3 = -0x40800000;
    uVar10 = 0xbf800000;
    uVar9 = 0;
    uVar8 = 0;
    uVar12 = 0;
    (*this_00->vftptr_0x0[6].virt_meth_0x4b2880_40)(this_00);
    (*this_00->vftptr_0x0[5].virt_meth_0x4b2850_28)(this_00,piVar5[0x335]);
    (*this_00->vftptr_0x0[5].virt_meth_0x4b2830_36)(this_00,(FILE *)piVar5[0x33d]);
    uVar12 = (**(code **)(*piVar5 + 0x114))
                       (&puStack_7c,dVar7,uVar12,uVar8,uVar9,uVar10,iVar3,uVar11);
    uStack_3c = 3;
    (*this_00->vftptr_0x0[6].virt_deldtor_0x4af000_0)(this_00);
    uStack_40 = 1;
    if (0xf < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
      _free(&puStack_8);
    }
    *(Base **)(iVar3 + this->mbr_0x50) = this_00;
    piVar5 = (int *)(**(code **)(**(int **)(iVar3 + this->mbr_0x10) + 0xa0))(uVar12);
    (**(code **)(*piVar5 + 0xa4))(this_00);
    this->mbr_0xbc = param_1;
    this->mbr_0xc0 = (dword)pvStack_5c;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall CounterControl::meth_0x4321c0(CounterControl *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x50;
  if (piVar1 != (int *)this->mbr_0x54) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)this->mbr_0x54);
  }
  if ((void *)this->mbr_0x50 == (void *)0x0) {
    this->mbr_0x50 = 0;
    this->mbr_0x54 = 0;
    this->mbr_0x58 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x50);
}



void __thiscall CounterControl::meth_0x432210(CounterControl *this,int param_1)

{
  char cVar1;
  Base__vftable_66e41c *pBVar2;
  Base *this_00;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  LONG unaff_ESI;
  uint unaff_EDI;
  uint unaff_retaddr;
  dword dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined **ppuStack_7c;
  undefined *puStack_78;
  void **ppvStack_74;
  void *pvStack_5c;
  undefined auStack_58 [8];
  dword local_50;
  Picture *local_4c;
  uint uStack_48;
  undefined uStack_40;
  undefined uStack_3c;
  void *local_28;
  undefined uStack_1c;
  dword local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d483;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_50 = param_1 * 4;
  piVar5 = *(int **)(local_50 + this->mbr_0x10);
  if (piVar5 == (int *)0x0) {
    *(undefined4 *)(local_50 + this->mbr_0x60) = 0;
  }
  else {
    ppvStack_74 = (void **)0x432262;
    ExceptionList = &local_c;
    local_4c = (Picture *)FUN_004a7680(0xd2c);
    local_4 = 0;
    if (local_4c == (Picture *)0x0) {
      this_00 = (Base *)0x0;
    }
    else {
      ppvStack_74 = (void **)0x43227a;
      this_00 = (Base *)GUI::Picture::Picture(local_4c,2);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    pBVar2 = this_00->vftptr_0x0;
    local_4 = 1;
    iVar3 = (**(code **)(*piVar5 + 0x88))();
    ppvStack_74 = (void **)0x4322ad;
    (*pBVar2[3].virt_deldtor_0x4af000_0)(this_00);
    ppvStack_74 = &pvStack_5c;
    puStack_78 = auStack_58;
    ppuStack_7c = (undefined **)0x4322be;
    (**(code **)(*piVar5 + 0x48))();
    ppuStack_7c = &puStack_8;
    (**(code **)(*piVar5 + 0x14))();
    (*this_00->vftptr_0x0[1].virt_meth_0x4b27e0_24)(this_00,unaff_ESI,local_10 + unaff_EDI);
    (*this_00->vftptr_0x0->virt_meth_0x4b2790_16)(this_00,iVar3,local_10);
    uVar12 = 1;
    (*this_00->vftptr_0x0[1].virt_meth_0x4b2880_40)(this_00);
    pcVar4 = (char *)(**(code **)(*piVar5 + 0x50))(uVar12);
    local_4c = (Picture *)0x0;
    pvStack_5c = (void *)((uint)pvStack_5c & 0xffffff00);
    uStack_48 = 0xf;
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffffa0,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
    uStack_1c = 2;
    (*this_00->vftptr_0x0[1].virt_meth_0x4b2800_32)(this_00,(FILE *)&stack0xffffffa0);
    uStack_1c = 1;
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_5c);
    }
    dVar7 = this->mbr_0x9c;
    uVar11 = 1;
    iVar3 = -0x40800000;
    uVar10 = 0xbf800000;
    uVar9 = 0;
    uVar8 = 0;
    uVar12 = 0;
    (*this_00->vftptr_0x0[6].virt_meth_0x4b2880_40)(this_00);
    (*this_00->vftptr_0x0[5].virt_meth_0x4b2850_28)(this_00,piVar5[0x335]);
    (*this_00->vftptr_0x0[5].virt_meth_0x4b2830_36)(this_00,(FILE *)piVar5[0x33d]);
    uVar12 = (**(code **)(*piVar5 + 0x114))
                       (&ppuStack_7c,dVar7,uVar12,uVar8,uVar9,uVar10,iVar3,uVar11);
    uStack_3c = 3;
    (*this_00->vftptr_0x0[6].virt_deldtor_0x4af000_0)(this_00);
    uStack_40 = 1;
    if (0xf < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
      _free(&stack0xffffff98);
    }
    *(Base **)(iVar3 + this->mbr_0x60) = this_00;
    piVar5 = (int *)(**(code **)(**(int **)(iVar3 + this->mbr_0x10) + 0xa0))(uVar12);
    (**(code **)(*piVar5 + 0xa4))(this_00);
    this->mbr_0xbc = (dword)pvStack_5c;
    this->mbr_0xc0 = param_1;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall CounterControl::meth_0x432460(CounterControl *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x60;
  if (piVar1 != (int *)this->mbr_0x64) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)this->mbr_0x64);
  }
  if ((void *)this->mbr_0x60 == (void *)0x0) {
    this->mbr_0x60 = 0;
    this->mbr_0x64 = 0;
    this->mbr_0x68 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x60);
}



void __thiscall CounterControl::meth_0x432b60(CounterControl *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  *(int **)(this->mbr_0x10 + param_1 * 4) = param_2;
  (**(code **)(*param_2 + 0x54))(1);
  puVar1 = *(undefined4 **)(this->mbr_0x50 + param_1 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)(this->mbr_0x50 + param_1 * 4) = 0;
  }
  puVar1 = *(undefined4 **)(this->mbr_0x60 + param_1 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)(this->mbr_0x60 + param_1 * 4) = 0;
  }
  meth_0x431f80(this,param_1);
  meth_0x432210(this,param_1);
  return;
}



CounterControl * __thiscall CounterControl::~CounterControl(CounterControl *this)

{
  CounterControl *_Memory;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062d52e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &CounterControl__vftable_653564_00653564;
  local_4 = 7;
  meth_0x4321c0(this);
  meth_0x432460(this);
  if (this->mbr_0x9c != 0) {
    FUN_004310a0(this->mbr_0x9c,this->mbr_0xa0);
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x9c);
  }
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0;
  if ((void *)this->mbr_0x8c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8c);
  }
  this->mbr_0x8c = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0;
  if ((void *)this->mbr_0x60 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x60);
  }
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  if ((void *)this->mbr_0x50 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x50);
  }
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  if ((void *)this->mbr_0x40 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x40);
  }
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  if ((void *)this->mbr_0x30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x30);
  }
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  if ((void *)this->mbr_0x20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x20);
  }
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  _Memory = (CounterControl *)this->mbr_0x10;
  if (_Memory != (CounterControl *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  ExceptionList = local_c;
  return _Memory;
}



undefined4 * __thiscall CounterControl::virt_meth_0x432ec0(CounterControl *this,byte param_1)

{
  ~CounterControl(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall CounterControl::meth_0x432ee0(CounterControl *this,uint param_1)

{
  int iVar1;
  
  cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x4c,param_1);
  iVar1 = 0;
  if (0 < (int)param_1) {
    do {
      meth_0x431f80(this,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1);
  }
  return;
}



void __thiscall CounterControl::meth_0x432f20(CounterControl *this,uint param_1)

{
  int iVar1;
  
  cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x5c,param_1);
  iVar1 = 0;
  if (0 < (int)param_1) {
    do {
      meth_0x432210(this,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1);
  }
  return;
}



void __thiscall CounterControl::meth_0x4332e0(CounterControl *this,uint param_1)

{
  int iVar1;
  CounterControl *this_00;
  int iVar2;
  int iVar3;
  
  meth_0x4321c0(this);
  meth_0x432460(this);
  if ((int)param_1 < 1) {
    cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0xc,0);
    cls_0x431000::meth_0x432c60((cls_0x431000 *)&this->mbr_0x1c,0);
    cls_0x40cc80::meth_0x421370((cls_0x40cc80 *)&this->mbr_0x2c,0);
    cls_0x40cc80::meth_0x421370((cls_0x40cc80 *)&this->mbr_0x3c,0);
    cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x4c,0);
    cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x5c,0);
    cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x88,0);
  }
  else {
    cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0xc,param_1);
    cls_0x431000::meth_0x432c60((cls_0x431000 *)&this->mbr_0x1c,param_1);
    cls_0x40cc80::meth_0x421370((cls_0x40cc80 *)&this->mbr_0x2c,param_1);
    cls_0x40cc80::meth_0x421370((cls_0x40cc80 *)&this->mbr_0x3c,param_1);
    cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x4c,param_1);
    meth_0x432ee0(this,param_1);
    cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x5c,param_1);
    meth_0x432f20(this,param_1);
    cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x88,param_1);
    iVar1 = 0;
    if (0 < (int)param_1) {
      do {
        *(undefined4 *)(this->mbr_0x8c + iVar1 * 4) = 0;
        *(undefined4 *)(this->mbr_0x30 + iVar1 * 4) = 0;
        *(undefined4 *)(this->mbr_0x40 + iVar1 * 4) = 9;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_1);
    }
  }
  meth_0x430850(this,0);
  iVar3 = 1;
  iVar2 = 0;
  iVar1 = meth_0x430830(this_00);
  if (0 < iVar1) {
    do {
      iVar3 = iVar3 * 10;
      iVar2 = iVar2 + 1;
      iVar1 = meth_0x430830(this);
    } while (iVar2 < iVar1);
  }
  meth_0x430890(this,iVar3 + -1);
  return;
}



CounterControl * __thiscall CounterControl::CounterControl(CounterControl *this)

{
  int iVar1;
  undefined4 in_stack_ffffffc0;
  uint in_stack_ffffffc4;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062d5de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &CounterControl__vftable_653564_00653564;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x8c = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0;
  local_4 = 7;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0xc,0);
  cls_0x431000::meth_0x432c60((cls_0x431000 *)&this->mbr_0x1c,0);
  cls_0x40cc80::meth_0x421370((cls_0x40cc80 *)&this->mbr_0x2c,0);
  cls_0x40cc80::meth_0x421370((cls_0x40cc80 *)&this->mbr_0x3c,0);
  cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x4c,0);
  cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x5c,0);
  cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0x88,0);
  ::cls_0x50db20::meth_0x433430
            ((cls_0x50db20 *)&this->mbr_0x98,(_String_base *)&DAT_0000000a,in_stack_ffffffc0,
             (void *)(in_stack_ffffffc4 & 0xffffff00));
  iVar1 = 0;
  do {
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)(this->mbr_0x9c + iVar1),
               (_String_base *)(&UNK_006f2c04.field_0x4 + iVar1),0,0xffffffff);
    iVar1 = iVar1 + 0x1c;
  } while (iVar1 < 0x118);
  this->mbr_0x6c = 0x80000000;
  this->mbr_0x70 = 0x80000000;
  this->mbr_0x78 = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xac = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0x74 = 0x7fffffff;
  this->mbr_0x7c = 1;
  this->mbr_0xb0 = 400;
  this->mbr_0xb4 = 0x23;
  this->mbr_0xc4 = 0x3dcccccd;
  this->mbr_0xc8 = 10;
  ExceptionList = local_c;
  return this;
}


#include "../include/CounterControl.h"
