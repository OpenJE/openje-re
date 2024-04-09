#include "../include/OCTREE_.h"

void __thiscall OCTREE_::meth_0x5ad970(OCTREE_ *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b46b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  cls_0x5b92f0::meth_0x5b92f0((cls_0x5b92f0 *)&this->mbr_0xdc);
  if ((void *)this->mbr_0xb0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xb0);
  }
  if ((void *)this->mbr_0xb4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xb4);
  }
  ExceptionList = local_c;
  return;
}



undefined4 __thiscall OCTREE_::virt_meth_0x5ad9e0(OCTREE_ *this)

{
  if ((void *)this->mbr_0x1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x1c);
  }
  this->mbr_0x1c = 0;
  this->mbr_0x18 = 0;
  return 0;
}



undefined4 __thiscall OCTREE_::virt_meth_0x5ada10(OCTREE_ *this)

{
  if ((void *)this->mbr_0x28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x28);
  }
  this->mbr_0x28 = 0;
  return 0;
}



undefined4 __thiscall OCTREE_::virt_meth_0x5ada30(OCTREE_ *this)

{
  if (this->mbr_0x38 == 0) {
    return 0;
  }
  if (this->mbr_0x34 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((this->mbr_0x38 - 4) + this->mbr_0x34 * 4));
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x38);
}



undefined4 __thiscall OCTREE_::virt_meth_0x5ada70(OCTREE_ *this)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (this->mbr_0x54 != 0) {
    iVar3 = 0;
    do {
      pvVar1 = *(void **)(iVar3 + 8 + this->mbr_0x5c);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      *(undefined4 *)(iVar3 + 8 + this->mbr_0x5c) = 0;
      pvVar1 = *(void **)(iVar3 + 0xc + this->mbr_0x5c);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      *(undefined4 *)(iVar3 + 0xc + this->mbr_0x5c) = 0;
      pvVar1 = *(void **)(iVar3 + 0x10 + this->mbr_0x5c);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      *(undefined4 *)(iVar3 + 0x10 + this->mbr_0x5c) = 0;
      pvVar1 = *(void **)(iVar3 + 0x14 + this->mbr_0x5c);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      *(undefined4 *)(iVar3 + 0x14 + this->mbr_0x5c) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (uVar2 < this->mbr_0x54);
  }
  return 0;
}



int __thiscall OCTREE_::virt_meth_0x5adb40(OCTREE_ *this,undefined4 *param_1)

{
  int iVar1;
  OCTREE_Tri2D **in_stack_00000008;
  OCTREE_Tri2D *local_4;
  
  local_4 = (OCTREE_Tri2D *)0x0;
  switch(param_1[2]) {
  case 0:
    iVar1 = FUN_005bbc00((float)*param_1,param_1[1],&local_4);
    if (iVar1 != 0) {
      return iVar1;
    }
    break;
  case 1:
    iVar1 = FUN_0052f700((float)param_1[1],&local_4);
    if (iVar1 != 0) {
      return iVar1;
    }
    break;
  case 2:
    iVar1 = FUN_005bb090((float)*param_1,(float)param_1[1],(OCTREE_Pie2D **)&local_4);
    if (iVar1 != 0) {
      return iVar1;
    }
    break;
  case 3:
    iVar1 = FUN_005ba4c0((float)param_1[1],(float)*param_1,&local_4);
    if (iVar1 != 0) {
      return iVar1;
    }
    break;
  case 4:
    iVar1 = FUN_005ba030((float)*param_1,(float)param_1[1],&local_4);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  *in_stack_00000008 = local_4;
  return 0;
}



undefined4 __thiscall OCTREE_::virt_meth_0x5ae720(OCTREE_ *this,int param_1)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  int local_10;
  int local_c;
  
  piVar10 = (int *)this->mbr_0xd0;
  iVar5 = *piVar10;
  local_c = 0;
  if (iVar5 != 0) {
    local_10 = 0;
    do {
      uVar7 = *(uint *)(local_10 + 4 + (int)piVar10);
      if ((uVar7 < *(uint *)(iVar5 + 0x4c)) &&
         (puVar1 = (ushort *)(*(int *)(iVar5 + 0x50) + uVar7 * 2), (uint)*puVar1 == this->mbr_0x40))
      {
        uVar2 = puVar1[1];
        uVar7 = (uint)uVar2;
        puVar11 = (uint *)(puVar1 + 2);
        puVar12 = (uint *)(param_1 + local_c * 2);
        if (((uint)puVar12 & 2) == 0) {
          uVar6 = uVar7 & 0xfffffffe;
          do {
            uVar8 = *puVar11;
            puVar11 = puVar11 + 1;
            *puVar12 = uVar8;
            puVar12 = puVar12 + 1;
            uVar8 = uVar6 - 2;
            bVar4 = 1 < (int)uVar6;
            uVar6 = uVar8;
          } while (uVar8 != 0 && bVar4);
          if ((uVar2 & 1) != 0) {
            *(ushort *)puVar12 = *(ushort *)puVar11;
          }
        }
        else {
          uVar6 = *puVar11;
          *(ushort *)puVar12 = (ushort)uVar6;
          puVar12 = (uint *)((int)puVar12 + 2);
          uVar8 = uVar7 - 1 & 0xfffffffe;
          do {
            puVar11 = puVar11 + 1;
            uVar3 = *puVar11;
            *puVar12 = uVar6 >> 0x10 | uVar3 << 0x10;
            puVar12 = puVar12 + 1;
            uVar9 = uVar8 - 2;
            bVar4 = 1 < (int)uVar8;
            uVar6 = uVar3;
            uVar8 = uVar9;
          } while (uVar9 != 0 && bVar4);
          if ((uVar7 - 1 & 1) != 0) {
            *(ushort *)puVar12 = (ushort)(uVar3 >> 0x10);
          }
        }
        piVar10 = (int *)(this->mbr_0xd0 + 4 + local_10);
        local_c = local_c + uVar7;
        *piVar10 = *piVar10 + (uVar7 & 1) + 2 + uVar7;
      }
      piVar10 = (int *)this->mbr_0xd0;
      iVar5 = *(int *)(local_10 + 8 + (int)piVar10);
      local_10 = local_10 + 8;
    } while (iVar5 != 0);
  }
  this->mbr_0x40 = this->mbr_0x40 + 1;
  return 0;
}



undefined4 __thiscall
OCTREE_::GetLightVisibility(OCTREE_ *this,float *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  *param_2 = 0;
  if (((*param_1 < (float)this->mbr_0x6c == (NAN(*param_1) || NAN((float)this->mbr_0x6c))) &&
      (param_1[2] < (float)this->mbr_0x74 == (NAN(param_1[2]) || NAN((float)this->mbr_0x74)))) &&
     (piVar1 = (int *)this->mbr_0x20, piVar1 != (int *)0x0)) {
    if (((*param_1 < (float)this->mbr_0x6c == (NAN(*param_1) || NAN((float)this->mbr_0x6c))) &&
        ((float)this->mbr_0x78 < *param_1 == ((float)this->mbr_0x78 == *param_1))) &&
       ((param_1[2] < (float)this->mbr_0x74 == (NAN(param_1[2]) || NAN((float)this->mbr_0x74)) &&
        ((float)this->mbr_0x80 < param_1[2] == ((float)this->mbr_0x80 == param_1[2]))))) {
      uVar11 = FUN_00616e24();
      iVar6 = *piVar1;
      uVar12 = FUN_00616e24();
      iVar2 = piVar1[4];
      uVar8 = (int)uVar11 * iVar6 + (int)uVar12;
      uVar5 = uVar8 & 0x1f;
      uVar9 = uVar8 >> 4 & 0xffffffe;
      uVar8 = *(uint *)(iVar2 + uVar9 * 4);
      uVar9 = *(uint *)(iVar2 + 4 + uVar9 * 4);
      uVar4 = uVar8 >> 1;
      if ((uVar9 & 0x80000000U >> (sbyte)uVar5) != 0) {
        param_1 = (float *)0x80000000;
        uVar7 = *(ushort *)(iVar2 + (uVar8 & 0xfffffffe)) & 0x8000;
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          if (((uint)param_1 & uVar9) != 0) {
            puVar10 = (ushort *)(iVar2 + uVar4 * 2);
            do {
              puVar10 = puVar10 + 1;
              uVar4 = uVar4 + 1;
            } while (uVar7 == (*puVar10 & 0x8000));
            uVar7 = uVar7 ^ 0x8000;
          }
          param_1 = (float *)((uint)param_1 >> 1);
        }
        iVar6 = uVar4 * 2;
        uVar3 = *(ushort *)(iVar6 + iVar2);
        do {
          *(ushort *)(param_3 + *param_2 * 2) = uVar3 & 0x7fff;
          *param_2 = *param_2 + 1;
          uVar3 = *(ushort *)(iVar6 + 2 + *(int *)(this->mbr_0x20 + 0x10));
          iVar6 = iVar6 + 2;
        } while (uVar7 == (uVar3 & 0x8000));
      }
      return 0;
    }
    FUN_00497120((byte *)
                 "OCTREE::GetLightVisibility - invalid position ( %f, %f, %f ) in this octree( %f, %f, %f ) - ( %f, %f, %f )\n"
                );
  }
  return 2;
}



undefined4 __thiscall
OCTREE_::virt_meth_0x5afed0(OCTREE_ *this,int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  
  piVar2 = param_3;
  *param_3 = 0;
  iVar1 = ((int *)this->mbr_0x20)[4];
  uVar4 = *(int *)this->mbr_0x20 * param_2 + param_1;
  uVar7 = uVar4 & 0x1f;
  uVar5 = uVar4 >> 4 & 0xffffffe;
  uVar4 = *(uint *)(iVar1 + uVar5 * 4);
  uVar5 = *(uint *)(iVar1 + 4 + uVar5 * 4);
  uVar9 = uVar4 >> 1;
  if ((uVar5 & 0x80000000U >> (sbyte)uVar7) != 0) {
    param_3 = (int *)0x80000000;
    uVar10 = *(ushort *)(iVar1 + (uVar4 & 0xfffffffe)) & 0x8000;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (((uint)param_3 & uVar5) != 0) {
        puVar6 = (ushort *)(iVar1 + uVar9 * 2);
        do {
          puVar6 = puVar6 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar10 == (*puVar6 & 0x8000));
        uVar10 = uVar10 ^ 0x8000;
      }
      param_3 = (int *)((uint)param_3 >> 1);
    }
    iVar8 = uVar9 * 2;
    uVar3 = *(ushort *)(iVar8 + iVar1);
    do {
      *(ushort *)(param_4 + *piVar2 * 2) = uVar3 & 0x7fff;
      *piVar2 = *piVar2 + 1;
      uVar3 = *(ushort *)(iVar8 + 2 + *(int *)(this->mbr_0x20 + 0x10));
      iVar8 = iVar8 + 2;
    } while (uVar10 == (uVar3 & 0x8000));
  }
  return 0;
}



void __thiscall OCTREE_::virt_meth_0x5b1330(OCTREE_ *this)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  dword *pdVar4;
  dword *_Memory;
  
  (*this->vftptr_0x0->virt_meth_0x5ad9e0_4)(this);
  if (this->mbr_0x20 != 0) {
    pvVar1 = *(void **)(this->mbr_0x20 + 0x10);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x20);
    }
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  if (this->mbr_0x28 != 0) {
    (*this->vftptr_0x0->virt_meth_0x5ada10_8)(this);
  }
  if ((void *)this->mbr_0x2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x2c);
  }
  if (this->mbr_0x38 != 0) {
    (*this->vftptr_0x0->virt_meth_0x5ada30_12)(this);
  }
  if ((void *)this->mbr_0x3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x3c);
  }
  if ((void *)this->mbr_0x4c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4c);
  }
  if (this->mbr_0x5c != 0) {
    (*this->vftptr_0x0->virt_meth_0x5ada70_16)(this);
  }
  pvVar1 = (void *)this->mbr_0x5c;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x18,*(int *)((int)pvVar1 + -4),FUN_005ad8d0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((void *)this->mbr_0x58 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x58);
  }
  if ((void *)this->mbr_0xf8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xf8);
  }
  uVar2 = 0;
  if (this->mbr_0xc != 0) {
    iVar3 = 0;
    do {
      *(undefined4 *)(iVar3 + this->mbr_0xfc) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar2 < this->mbr_0xc);
  }
  if (&this->mbr_0x60 != (dword *)0x0) {
    iVar3 = 0;
    _Memory = &this->mbr_0x60;
    do {
      if (*(int *)(iVar3 + this->mbr_0xfc) == 8) {
LAB_005b147d:
        *(undefined4 *)(iVar3 + this->mbr_0xfc) = 0;
        if (_Memory[1] != 0) {
          if ((void *)_Memory[0x14] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free((void *)_Memory[0x14]);
          }
          if ((void *)_Memory[0x15] == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
                    /* WARNING: Subroutine does not return */
          _free((void *)_Memory[0x15]);
        }
        iVar3 = iVar3 + -0x10;
        pdVar4 = (dword *)0x0;
      }
      else {
        pdVar4 = (dword *)0x0;
        do {
          uVar2 = *(uint *)(this->mbr_0xfc + iVar3);
          if (7 < uVar2) {
            if (pdVar4 == (dword *)0x0) goto LAB_005b147d;
            iVar3 = iVar3 + 0x10;
            goto LAB_005b14bf;
          }
          pdVar4 = (dword *)_Memory[uVar2 + 0xb];
          *(uint *)(this->mbr_0xfc + iVar3) = uVar2 + 1;
        } while (pdVar4 == (dword *)0x0);
        iVar3 = iVar3 + 0x10;
      }
LAB_005b14bf:
      _Memory = pdVar4;
    } while (pdVar4 != (dword *)0x0);
  }
  if ((void *)this->mbr_0xc4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc4);
  }
  if ((void *)this->mbr_0xfc == (void *)0x0) {
    meth_0x5ad970(this);
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xfc);
}


#include "../include/OCTREE_.h"
