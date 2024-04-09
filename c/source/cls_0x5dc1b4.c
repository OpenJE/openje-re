#include "../include/cls_0x5dc1b4.h"

void __thiscall cls_0x5dc1b4::meth_0x482ed2(cls_0x5dc1b4 *this)

{
  void *_Memory;
  uint uVar1;
  
  if ((this->cls_0x482ebf).mbr_0x0 == 0) {
    return;
  }
  uVar1 = 0;
  if ((this->cls_0x482ebf).mbr_0x4 != 0) {
    do {
      _Memory = *(void **)((this->cls_0x482ebf).mbr_0x0 + uVar1 * 4);
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (this->cls_0x482ebf).mbr_0x4);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x482ebf).mbr_0x0);
}



cls_0x5dc1b4 * __thiscall cls_0x5dc1b4::cls_0x5dc1b4(cls_0x5dc1b4 *this)

{
  cls_0x5dc1b4 *this_00;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x5dc1b4 **)(unaff_EBP + -0x10) = this_00;
  cls_0x482ebf::cls_0x482ebf(&this_00->cls_0x482ebf);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cls_0x5d6554::cls_0x5d6554(&this_00->cls_0x5d6554);
  *(undefined *)(unaff_EBP + -4) = 1;
  cls_0x5d6554::cls_0x5d6554((cls_0x5d6554 *)&(this_00->cls_0x5d6554).mbr_0x10);
  *(undefined *)(unaff_EBP + -4) = 2;
  cls_0x5d6554::cls_0x5d6554((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x20);
  *(undefined *)(unaff_EBP + -4) = 3;
  cls_0x5d6554::cls_0x5d6554((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x30);
  *(undefined *)(unaff_EBP + -4) = 4;
  cls_0x5d6554::cls_0x5d6554((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x40);
  *(undefined *)(unaff_EBP + -4) = 5;
  cls_0x5d6554::cls_0x5d6554((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x50);
  *(undefined *)(unaff_EBP + -4) = 6;
  cls_0x5d6554::cls_0x5d6554((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x60);
  *(undefined *)(unaff_EBP + -4) = 7;
  cls_0x482ebf::cls_0x482ebf((cls_0x482ebf *)&(this_00->cls_0x5d6554).field_0x70);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  DAT_0070dc80 = this_00;
  *(undefined4 *)&(this_00->cls_0x5d6554).field_0x84 = 0;
  *(undefined4 *)&(this_00->cls_0x5d6554).field_0x88 = 0;
  *(undefined4 *)&(this_00->cls_0x5d6554).field_0x8c = 0;
  *(undefined4 *)&(this_00->cls_0x5d6554).field_0x90 = 0;
  return this_00;
}



void __thiscall cls_0x5dc1b4::meth_0x5dc25d(cls_0x5dc1b4 *this)

{
  cls_0x5dc1b4 *this_00;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x5dc1b4 **)(unaff_EBP + -0x10) = this_00;
  *(undefined4 *)(unaff_EBP + -4) = 7;
  meth_0x482ed2((cls_0x5dc1b4 *)&(this_00->cls_0x5d6554).field_0x70);
  *(undefined *)(unaff_EBP + -4) = 6;
  cls_0x5d6554::meth_0x482e43((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x60);
  *(undefined *)(unaff_EBP + -4) = 5;
  cls_0x5d6554::meth_0x482e43((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x50);
  *(undefined *)(unaff_EBP + -4) = 4;
  cls_0x5d6554::meth_0x482e43((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x40);
  *(undefined *)(unaff_EBP + -4) = 3;
  cls_0x5d6554::meth_0x482e43((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x30);
  *(undefined *)(unaff_EBP + -4) = 2;
  cls_0x5d6554::meth_0x482e43((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x20);
  *(undefined *)(unaff_EBP + -4) = 1;
  cls_0x5d6554::meth_0x482e43((cls_0x5d6554 *)&(this_00->cls_0x5d6554).mbr_0x10);
  *(undefined *)(unaff_EBP + -4) = 0;
  cls_0x5d6554::meth_0x482e43(&this_00->cls_0x5d6554);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  meth_0x482ed2(this_00);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



void __thiscall cls_0x5dc1b4::meth_0x5dd0cd(cls_0x5dc1b4 *this)

{
  undefined *puVar1;
  uint uVar2;
  cls_0x5dc1b4 **ppcVar3;
  uint uVar4;
  cls_0x5dc1b4 **ppcVar5;
  cls_0x5dc1b4 *local_8;
  
  if ((this->cls_0x5d6554).mbr_0x9c != 0) {
    ppcVar3 = *(cls_0x5dc1b4 ***)&(this->cls_0x5d6554).field_0xa4;
    uVar4 = (this->cls_0x5d6554).mbr_0xb0 - (int)ppcVar3;
    local_8 = this;
    cls_0x5d6554::meth_0x482e51
              ((cls_0x5d6554 *)&(this->cls_0x5d6554).field_0x60,
               (uVar4 + 3 & 0x3fffc) * 0x4000 + 0x10000 & 0x7fff0000 | 0xfffe);
    cls_0x5d6554::meth_0x482e51((cls_0x5d6554 *)&(this->cls_0x5d6554).field_0x60,0x54584554);
    puVar1 = &(this->cls_0x5d6554).field_0x8c;
    *(int *)puVar1 = *(int *)puVar1 + 8;
    if (3 < uVar4) {
      local_8 = (cls_0x5dc1b4 *)(uVar4 >> 2);
      do {
        cls_0x5d6554::meth_0x482e51((cls_0x5d6554 *)&(this->cls_0x5d6554).field_0x60,*ppcVar3);
        puVar1 = &(this->cls_0x5d6554).field_0x8c;
        *(int *)puVar1 = *(int *)puVar1 + 4;
        ppcVar3 = ppcVar3 + 1;
        uVar4 = uVar4 - 4;
        local_8 = (cls_0x5dc1b4 *)&local_8[-1].field_0x45b;
      } while (local_8 != (cls_0x5dc1b4 *)0x0);
      local_8 = (cls_0x5dc1b4 *)0x0;
    }
    if (uVar4 != 0) {
      local_8 = (cls_0x5dc1b4 *)0x0;
      ppcVar5 = &local_8;
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *ppcVar5 = *ppcVar3;
        ppcVar3 = ppcVar3 + 1;
        ppcVar5 = ppcVar5 + 1;
      }
      for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined *)ppcVar5 = *(undefined *)ppcVar3;
        ppcVar3 = (cls_0x5dc1b4 **)((int)ppcVar3 + 1);
        ppcVar5 = (cls_0x5dc1b4 **)((int)ppcVar5 + 1);
      }
      cls_0x5d6554::meth_0x482e51((cls_0x5d6554 *)&(this->cls_0x5d6554).field_0x60,local_8);
      puVar1 = &(this->cls_0x5d6554).field_0x8c;
      *(int *)puVar1 = *(int *)puVar1 + 4;
    }
    if (uVar4 == 4) {
      cls_0x5d6554::meth_0x482e51((cls_0x5d6554 *)&(this->cls_0x5d6554).field_0x60,0);
      puVar1 = &(this->cls_0x5d6554).field_0x8c;
      *(int *)puVar1 = *(int *)puVar1 + 4;
    }
  }
  return;
}



uint __thiscall cls_0x5dc1b4::meth_0x5de622(cls_0x5dc1b4 *this)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  dword dVar4;
  undefined uVar5;
  int iVar6;
  char *pcVar7;
  cls_0x668f10 *pcVar8;
  int3 extraout_var;
  undefined3 extraout_var_00;
  int3 extraout_var_01;
  cls_0x668f10__vftable_668f10 *pcVar9;
  uint uVar10;
  dword *pdVar11;
  LSTATUS LVar12;
  HMODULE hModule;
  FARPROC pFVar13;
  undefined4 uVar14;
  HANDLE hHeap;
  cls_0x5dc1b4 *this_00;
  void *this_01;
  int iVar15;
  int iVar16;
  int unaff_EBP;
  undefined4 *puVar17;
  dword *pdVar18;
  char *pcVar19;
  undefined4 *puVar20;
  dword *pdVar21;
  bool bVar22;
  byte bVar23;
  DWORD dwFlags;
  LPVOID lpMem;
  
  FUN_0061781c();
  if (*(undefined4 **)(unaff_EBP + 0x1c) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x1c) = 0;
  }
  if (*(undefined4 **)(unaff_EBP + 0x20) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x20) = 0;
  }
  if (*(undefined4 **)(unaff_EBP + 0x24) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x24) = 0;
  }
  dVar4 = *(dword *)(unaff_EBP + 8);
  if ((dVar4 == 0) || (iVar6 = *(int *)(unaff_EBP + 0xc), iVar6 == 0)) {
    uVar10 = 0x8876086c;
    goto LAB_005dead4;
  }
  *(dword *)&(this_00->cls_0x5d6554).field_0xa4 = dVar4;
  *(dword *)&(this_00->cls_0x5d6554).field_0xa8 = dVar4;
  (this_00->cls_0x5d6554).mbr_0xac = dVar4;
  (this_00->cls_0x5d6554).mbr_0xb0 = dVar4 + iVar6;
  iVar6 = *(int *)(unaff_EBP + 0x14);
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  *(int *)&(this_00->cls_0x5d6554).field_0x1bc = iVar6;
  (this_00->cls_0x5d6554).mbr_0x9c = *(uint *)(unaff_EBP + 0x18) & 1;
  pcVar7 = *(char **)(unaff_EBP + 0x10);
  *(undefined4 *)&(this_00->cls_0x5d6554).field_0x3c4 = 0;
  *(undefined4 *)&(this_00->cls_0x5d6554).field_0x3c8 = 0;
  *(undefined4 *)&(this_00->cls_0x5d6554).field_0x3cc = 0;
  *(undefined4 *)&(this_00->cls_0x5d6554).field_0x3d0 = 0;
  (this_00->cls_0x5d6554).mbr_0x98 = 0;
  (this_00->cls_0x5d6554).mbr_0xa0 = 0;
  if (pcVar7 == (char *)0x0) {
    (this_00->cls_0x5d6554).field_0x1c0 = 0;
    meth_0x5dd0cd(this_00);
  }
  else {
    iVar6 = 0x1d4 - (int)pcVar7;
    do {
      cVar3 = *pcVar7;
      pcVar7[(int)this_00 + iVar6] = cVar3;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
  }
  (this_00->cls_0x5d6554).field_0x2c4 = 0;
  *(undefined4 *)&(this_00->cls_0x5d6554).field_0x2c0 = 0;
  pcVar7 = (char *)FUN_0061879b(4,(uint *)0x0);
  bVar23 = 5;
  pcVar7 = __strdup(pcVar7);
  *(char **)(unaff_EBP + 8) = pcVar7;
  if (pcVar7 == (char *)0x0) {
LAB_005de721:
    FUN_0061879b(4,(uint *)&DAT_0066632c);
  }
  else {
    iVar6 = 2;
    bVar22 = true;
    pcVar19 = "C";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar22 = *pcVar7 == *pcVar19;
      pcVar7 = pcVar7 + 1;
      pcVar19 = pcVar19 + 1;
    } while (bVar22);
    if (!bVar22) goto LAB_005de721;
  }
  iVar6 = FUN_005de169();
  if (iVar6 != 0) {
    *(undefined4 *)&(this_00->cls_0x5d6554).field_0x84 = 1;
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    iVar6 = 2;
    bVar22 = true;
    pcVar7 = *(char **)(unaff_EBP + 8);
    pcVar19 = "C";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar22 = *pcVar7 == *pcVar19;
      pcVar7 = pcVar7 + 1;
      pcVar19 = pcVar19 + 1;
    } while (bVar22);
    if (!bVar22) {
      FUN_0061879b(4,*(uint **)(unaff_EBP + 8));
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EBP + 8));
  }
  if (*(int *)&(this_00->cls_0x5d6554).field_0x84 != 0) goto LAB_005dea9f;
  if ((*(int *)(unaff_EBP + 0x1c) != 0) && ((this_00->cls_0x5d6554).mbr_0x98 == 0)) {
    pcVar8 = (cls_0x668f10 *)operator_new(0x10);
    *(cls_0x668f10 **)(unaff_EBP + 8) = pcVar8;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pcVar8 == (cls_0x668f10 *)0x0) {
      pcVar8 = (cls_0x668f10 *)0x0;
    }
    else {
      pcVar8 = cls_0x668f10::cls_0x668f10(pcVar8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (pcVar8 != (cls_0x668f10 *)0x0) {
      uVar5 = (*pcVar8->vftptr_0x0->virt_meth_0x482328_24)(pcVar8);
      *(uint *)(unaff_EBP + 8) = CONCAT31(extraout_var,uVar5);
      pcVar9 = pcVar8->vftptr_0x0;
      if (-1 < extraout_var) {
        uVar5 = (*pcVar9->virt_meth_0x48237b_12)(this_01);
        *(uint *)(unaff_EBP + 0xc) = CONCAT31(extraout_var_00,uVar5);
        while (*(int *)&(this_00->cls_0x5d6554).field_0x88 != 0) {
          puVar2 = &(this_00->cls_0x5d6554).field_0x88;
          *(int *)puVar2 = *(int *)puVar2 + -4;
          cls_0x5d6554::meth_0x482fb6
                    ((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x50,
                     (undefined4 *)
                     (*(int *)&(this_00->cls_0x5d6554).field_0x88 + *(int *)(unaff_EBP + 0xc)));
        }
        **(cls_0x668f10 ***)(unaff_EBP + 0x1c) = pcVar8;
        goto LAB_005de80b;
      }
LAB_005de894:
      (*pcVar9->virt_meth_0x482385_20)(pcVar8,bVar23);
    }
LAB_005de897:
    uVar10 = 0x8007000e;
    goto LAB_005dead4;
  }
LAB_005de80b:
  if (*(int *)&(this_00->cls_0x5d6554).field_0x84 == 0) {
    if (*(int *)(unaff_EBP + 0x20) != 0) {
      iVar6 = *(int *)&(this_00->cls_0x5d6554).field_0x8c;
      *(int *)(unaff_EBP + 0xc) = iVar6;
      iVar6 = iVar6 + 0x30;
      dVar4 = (this_00->cls_0x5d6554).mbr_0x98;
      puVar17 = (undefined4 *)"D3DX8 Shader Assembler Version 0.91";
      puVar20 = (undefined4 *)(unaff_EBP + -0x30);
      for (iVar15 = 9; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar20 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar20 = puVar20 + 1;
      }
      *(int *)(unaff_EBP + 0x1c) = iVar6;
      if (dVar4 != 0) {
        *(int *)(unaff_EBP + 0x1c) = iVar6 + *(int *)&(this_00->cls_0x5d6554).field_0x88;
      }
      pcVar8 = (cls_0x668f10 *)operator_new(0x10);
      *(cls_0x668f10 **)(unaff_EBP + 8) = pcVar8;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (pcVar8 == (cls_0x668f10 *)0x0) {
        pcVar8 = (cls_0x668f10 *)0x0;
      }
      else {
        pcVar8 = cls_0x668f10::cls_0x668f10(pcVar8);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(cls_0x668f10 **)(unaff_EBP + 0x14) = pcVar8;
      *(cls_0x668f10 **)(unaff_EBP + 0x10) = pcVar8;
      if (pcVar8 == (cls_0x668f10 *)0x0) goto LAB_005de897;
      uVar14 = *(undefined4 *)(unaff_EBP + 0x1c);
      uVar5 = (*pcVar8->vftptr_0x0->virt_meth_0x482328_24)(pcVar8);
      *(uint *)(unaff_EBP + 8) = CONCAT31(extraout_var_01,uVar5);
      if (extraout_var_01 < 0) {
        pcVar9 = pcVar8->vftptr_0x0;
        bVar23 = 1;
        goto LAB_005de894;
      }
      pdVar11 = (dword *)(**(code **)(**(int **)(unaff_EBP + 0x14) + 0xc))
                                   (*(int **)(unaff_EBP + 0x14),uVar14);
      *pdVar11 = (this_00->cls_0x5d6554).mbr_0xa0;
      pdVar11[1] = 0x9fffe;
      pdVar18 = pdVar11 + 2;
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pdVar18 = 0;
        pdVar18 = pdVar18 + 1;
      }
      iVar6 = *(int *)(unaff_EBP + 0x1c);
      iVar15 = *(int *)(unaff_EBP + 0xc);
      pdVar18 = (dword *)(unaff_EBP + -0x30);
      pdVar21 = pdVar11 + 2;
      for (iVar16 = 9; iVar16 != 0; iVar16 = iVar16 + -1) {
        *pdVar21 = *pdVar18;
        pdVar18 = pdVar18 + 1;
        pdVar21 = pdVar21 + 1;
      }
      *(undefined4 *)((int)pdVar11 + iVar6 + -4) = 0xffff;
      puVar17 = (undefined4 *)((int)pdVar11 + iVar6 + -8);
      if (iVar15 != 0) {
        do {
          cls_0x5d6554::meth_0x482fb6((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x60,puVar17);
          puVar17 = puVar17 + -1;
          piVar1 = (int *)(unaff_EBP + 0xc);
          *piVar1 = *piVar1 + -4;
        } while (*piVar1 != 0);
      }
      if ((this_00->cls_0x5d6554).mbr_0x98 != 0) {
        puVar2 = &(this_00->cls_0x5d6554).field_0x88;
        while (*(int *)puVar2 != 0) {
          cls_0x5d6554::meth_0x482fb6((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x50,puVar17);
          puVar17 = puVar17 + -1;
          *(int *)puVar2 = *(int *)puVar2 + -4;
        }
      }
      **(undefined4 **)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + 0x14);
    }
    if ((*(int *)&(this_00->cls_0x5d6554).field_0x84 == 0) &&
       ((*(byte *)(unaff_EBP + 0x18) & 2) == 0)) {
      if (*(int *)&(this_00->cls_0x5d6554).field_0x8c == 0) {
        FUN_005dc2ec((int)this_00,(byte *)"statement expected");
      }
      else {
        bVar22 = false;
        LVar12 = RegOpenKeyA((HKEY)0x80000002,"SOFTWARE\\Microsoft\\Direct3D",
                             (PHKEY)(unaff_EBP + 0x20));
        if (LVar12 == 0) {
          *(undefined4 *)(unaff_EBP + 0x1c) = 4;
          LVar12 = RegQueryValueExA(*(HKEY *)(unaff_EBP + 0x20),"LoadDebugRuntime",(LPDWORD)0x0,
                                    (LPDWORD)(unaff_EBP + 0x18),(LPBYTE)(unaff_EBP + 0xc),
                                    (LPDWORD)(unaff_EBP + 0x1c));
          if (((LVar12 == 0) && (*(int *)(unaff_EBP + 0x18) == 4)) &&
             (*(int *)(unaff_EBP + 0x1c) == 4)) {
            bVar22 = *(int *)(unaff_EBP + 0xc) != 0;
          }
          RegCloseKey(*(HKEY *)(unaff_EBP + 0x20));
          if ((!bVar22) ||
             ((hModule = GetModuleHandleA("d3d8d.dll"), hModule == (HMODULE)0x0 &&
              (hModule = LoadLibraryA("d3d8d.dll"), hModule == (HMODULE)0x0)))) goto LAB_005de9c6;
        }
        else {
LAB_005de9c6:
          hModule = GetModuleHandleA("d3d8.dll");
          if ((hModule == (HMODULE)0x0) &&
             (hModule = LoadLibraryA("d3d8.dll"), hModule == (HMODULE)0x0)) goto LAB_005dea9f;
        }
        uVar10 = -(uint)(*(int *)(unaff_EBP + 0x24) != 0) & unaff_EBP + 0x1cU;
        *(undefined4 *)(unaff_EBP + 0x1c) = 0;
        dVar4 = (this_00->cls_0x5d6554).mbr_0x98;
        *(uint *)(unaff_EBP + 0x18) = (uint)(*(int *)(unaff_EBP + 0x24) != 0);
        if (dVar4 == 0) {
          pFVar13 = GetProcAddress(hModule,"ValidateVertexShader");
          *(FARPROC *)(unaff_EBP + 0xc) = pFVar13;
          if (pFVar13 != (FARPROC)0x0) {
            uVar14 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0xc))
                               (*(int **)(unaff_EBP + 0x10),0,0,*(undefined4 *)(unaff_EBP + 0x18),
                                uVar10);
            uVar14 = (**(code **)(unaff_EBP + 0xc))(uVar14);
            goto LAB_005dea54;
          }
        }
        else {
          pFVar13 = GetProcAddress(hModule,"ValidatePixelShader");
          *(FARPROC *)(unaff_EBP + 0xc) = pFVar13;
          if (pFVar13 != (FARPROC)0x0) {
            uVar14 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0xc))
                               (*(int **)(unaff_EBP + 0x10),0,*(undefined4 *)(unaff_EBP + 0x18),
                                uVar10);
            uVar14 = (**(code **)(unaff_EBP + 0xc))(uVar14);
LAB_005dea54:
            *(undefined4 *)(unaff_EBP + 8) = uVar14;
          }
        }
        if (*(int *)(unaff_EBP + 8) < 0) {
          *(undefined4 *)&(this_00->cls_0x5d6554).field_0x84 = 1;
        }
        if (*(int *)(unaff_EBP + 0x1c) != 0) {
          cls_0x5d6554::meth_0x482f03
                    ((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x70,
                     *(undefined4 **)(unaff_EBP + 0x1c));
          lpMem = *(LPVOID *)(unaff_EBP + 0x1c);
          puVar2 = &(this_00->cls_0x5d6554).field_0x90;
          *(int *)puVar2 = *(int *)puVar2 + 1;
          dwFlags = 0;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,dwFlags,lpMem);
        }
      }
    }
  }
LAB_005dea9f:
  if (((*(int *)&(this_00->cls_0x5d6554).field_0x90 == 0) || (*(int *)(unaff_EBP + 0x24) == 0)) ||
     (uVar10 = cls_0x5d6554::meth_0x482ff2((cls_0x5d6554 *)&(this_00->cls_0x5d6554).field_0x70),
     -1 < (int)uVar10)) {
    uVar10 = -(uint)(*(int *)&(this_00->cls_0x5d6554).field_0x84 != 0) & 0x88760b59;
  }
LAB_005dead4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar10;
}


