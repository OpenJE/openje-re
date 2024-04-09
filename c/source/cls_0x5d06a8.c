#include "../include/cls_0x5d06a8.h"

cls_0x5d06a8 * __thiscall cls_0x5d06a8::cls_0x5d06a8(cls_0x5d06a8 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  return this;
}



void __thiscall cls_0x5d06a8::meth_0x5d06c1(cls_0x5d06a8 *this)

{
  cls_0x5d06a8 *pcVar1;
  
  if (((void *)this->mbr_0x4 != (void *)0x0) && (this->mbr_0x38 != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  if (((void *)this->mbr_0x8 != (void *)0x0) && (this->mbr_0x3c != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  pcVar1 = (cls_0x5d06a8 *)this->mbr_0x4c;
  if (pcVar1 != (cls_0x5d06a8 *)0x0) {
    meth_0x5d06c1(pcVar1);
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
  pcVar1 = (cls_0x5d06a8 *)this->mbr_0x50;
  if (pcVar1 != (cls_0x5d06a8 *)0x0) {
    meth_0x5d06c1(pcVar1);
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
  return;
}



cls_0x5d06a8 * __thiscall cls_0x5d06a8::cls_0x5d06a8(cls_0x5d06a8 *this,byte param_1)

{
  meth_0x5d06c1(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



undefined4 __thiscall cls_0x5d06a8::meth_0x5d0736(cls_0x5d06a8 *this,int *param_1)

{
  dword *pdVar1;
  dword dVar2;
  int iVar3;
  dword *pdVar4;
  dword *pdVar5;
  
  if (((void *)this->mbr_0x4 != (void *)0x0) && (this->mbr_0x38 != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  if (((void *)this->mbr_0x8 != (void *)0x0) && (this->mbr_0x3c != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x0 = param_1[1];
  this->mbr_0x4 = *param_1;
  this->mbr_0x8 = param_1[0x12];
  pdVar1 = &this->mbr_0x18;
  pdVar4 = (dword *)(param_1 + 10);
  pdVar5 = pdVar1;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar5 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar5 = pdVar5 + 1;
  }
  this->mbr_0x30 = param_1[2];
  this->mbr_0x34 = param_1[3];
  dVar2 = this->mbr_0x0;
  if ((dVar2 == 0x31545844) || (dVar2 == 0x32545844)) {
LAB_005d07ca:
    *pdVar1 = *pdVar1 & 0xfffffffc;
    this->mbr_0x1c = this->mbr_0x1c & 0xfffffffc;
  }
  else {
    if (dVar2 != 0x32595559) {
      if (((dVar2 == 0x33545844) || (dVar2 == 0x34545844)) || (dVar2 == 0x35545844))
      goto LAB_005d07ca;
      if (dVar2 != 0x59565955) goto LAB_005d07d1;
    }
    *pdVar1 = *pdVar1 & 0xfffffffe;
  }
LAB_005d07d1:
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0xc = this->mbr_0x20 - *pdVar1;
  this->mbr_0x10 = this->mbr_0x24 - this->mbr_0x1c;
  this->mbr_0x14 = this->mbr_0x2c - this->mbr_0x28;
  return 0;
}



undefined4 __thiscall cls_0x5d06a8::meth_0x5d07f9(cls_0x5d06a8 *this,uint *param_1,uint param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined uVar3;
  ushort uVar4;
  uint *puVar5;
  dword dVar6;
  byte bVar7;
  dword dVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  undefined *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  dword local_1c;
  undefined4 *local_14;
  
  puVar19 = param_1;
  if (param_2 < 0x28) {
    return 0x80004005;
  }
  uVar14 = *param_1;
  if (uVar14 < 0x28) {
    return 0x80004005;
  }
  puVar5 = (uint *)param_1[1];
  dVar8 = param_1[2];
  if ((int)dVar8 < 1) {
    dVar8 = -dVar8;
  }
  uVar4 = *(ushort *)((int)param_1 + 0xe);
  uVar9 = param_1[8];
  if ((uVar4 < 9) && (uVar9 == 0)) {
    uVar9 = 1 << ((byte)uVar4 & 0x1f);
  }
  uVar9 = uVar14 + uVar9 * 4;
  if (param_2 < uVar9) {
    return 0x80004005;
  }
  if (*(short *)(param_1 + 3) != 1) {
    return 0x80004005;
  }
  if ((((int)param_1[2] < 0) && (param_1[4] != 0)) && (param_1[4] != 3)) {
    return 0x80004005;
  }
  if (param_1[4] < 3) {
    param_1 = (uint *)(uint)uVar4;
    if (((param_1 == (uint *)0x1) || (param_1 == (uint *)0x4)) || (param_1 == (uint *)0x8)) {
      param_2 = 0x29;
      goto LAB_005d0b0f;
    }
    if (param_1 == (uint *)0x10) goto LAB_005d0aff;
    if (param_1 == (uint *)0x18) goto LAB_005d09af;
    if (param_1 != (uint *)0x20) {
      return 0x80004005;
    }
  }
  else {
    if (param_1[4] != 3) {
      return 0x80004001;
    }
    if (uVar14 < 0x6c) {
      param_2 = 0;
      puVar22 = (uint *)(uVar14 + (int)param_1);
      uVar14 = puVar22[2];
      uVar18 = puVar22[1];
      uVar10 = *puVar22;
    }
    else {
      param_2 = param_1[0xd];
      uVar14 = param_1[0xc];
      uVar18 = param_1[0xb];
      uVar10 = param_1[10];
    }
    param_1 = (uint *)(uint)*(ushort *)((int)param_1 + 0xe);
    if (param_1 == (uint *)0x10) {
      if (uVar14 == 0xff) {
        if (uVar18 != 0xff) {
          return 0x80004005;
        }
        if (uVar10 != 0xff) {
          return 0x80004005;
        }
        if (param_2 != 0xff00) {
          return 0x80004005;
        }
        param_2 = 0x33;
        goto LAB_005d0b0f;
      }
      if (uVar14 != 0x1f) {
        if (uVar14 == 0xf) {
          if (uVar18 != 0xf0) {
            return 0x80004005;
          }
          if (uVar10 != 0xf00) {
            return 0x80004005;
          }
          if (param_2 == 0xf000) {
            param_2 = 0x1a;
          }
          else {
            if (param_2 != 0) {
              return 0x80004005;
            }
            param_2 = 0x1e;
          }
        }
        else {
          if (uVar14 != 3) {
            return 0x80004005;
          }
          if (uVar18 != 0x1c) {
            return 0x80004005;
          }
          if (uVar10 != 0xe0) {
            return 0x80004005;
          }
          if (param_2 != 0xff00) {
            return 0x80004005;
          }
          param_2 = 0x1d;
        }
        goto LAB_005d0b0f;
      }
      if (uVar18 == 0x7e0) {
        if (uVar10 != 0xf800) {
          return 0x80004005;
        }
        if (param_2 != 0) {
          return 0x80004005;
        }
        param_2 = 0x17;
        goto LAB_005d0b0f;
      }
      if (uVar18 != 0x3e0) {
        return 0x80004005;
      }
      if (uVar10 != 0x7c00) {
        return 0x80004005;
      }
      if (param_2 != 0) {
        if (param_2 != 0x8000) {
          return 0x80004005;
        }
        param_2 = 0x19;
        goto LAB_005d0b0f;
      }
LAB_005d0aff:
      param_2 = 0x18;
      goto LAB_005d0b0f;
    }
    if (param_1 == (uint *)0x18) {
      if (uVar14 != 0xff) {
        return 0x80004005;
      }
      if (uVar18 != 0xff00) {
        return 0x80004005;
      }
      if (uVar10 != 0xff0000) {
        return 0x80004005;
      }
      if (param_2 != 0) {
        return 0x80004005;
      }
LAB_005d09af:
      param_2 = 0x14;
      goto LAB_005d0b0f;
    }
    if (param_1 != (uint *)0x20) {
      return 0x80004005;
    }
    if (uVar14 != 0xff) {
      if (uVar14 == 0x3ff00000) {
        if (uVar18 != 0xffc00) {
          return 0x80004005;
        }
        if (uVar10 != 0x3ff) {
          return 0x80004005;
        }
        if (param_2 != 0xc0000000) {
          return 0x80004005;
        }
        param_2 = 0x1f;
      }
      else {
        if (uVar14 != 0) {
          return 0x80004005;
        }
        if (uVar18 != 0xffff0000) {
          return 0x80004005;
        }
        if (uVar10 != 0xffff) {
          return 0x80004005;
        }
        if (param_2 != 0) {
          return 0x80004005;
        }
        param_2 = 0x22;
      }
      goto LAB_005d0b0f;
    }
    if (uVar18 != 0xff00) {
      return 0x80004005;
    }
    if (uVar10 != 0xff0000) {
      return 0x80004005;
    }
    if (param_2 != 0) {
      if (param_2 != 0xff000000) {
        return 0x80004005;
      }
      param_2 = 0x15;
      goto LAB_005d0b0f;
    }
  }
  param_2 = 0x16;
LAB_005d0b0f:
  if ((this->mbr_0x40 != 0) && (param_2 == 0x29)) {
    puVar22 = (uint *)puVar19[8];
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)(1 << ((byte)param_1 & 0x1f));
    }
    this->mbr_0x3c = 1;
    pvVar11 = operator_new(0x400);
    this->mbr_0x8 = (dword)pvVar11;
    if (pvVar11 == (void *)0x0) {
      return 0x8007000e;
    }
    param_1 = (uint *)0x0;
    puVar12 = (undefined *)(*puVar19 + (int)puVar19);
    if (puVar22 != (uint *)0x0) {
      do {
        iVar17 = (int)param_1 * 4;
        *(undefined *)(iVar17 + this->mbr_0x8) = puVar12[2];
        *(undefined *)(iVar17 + 1 + this->mbr_0x8) = puVar12[1];
        *(undefined *)(iVar17 + 2 + this->mbr_0x8) = *puVar12;
        *(undefined *)(iVar17 + 3 + this->mbr_0x8) = 0xff;
        param_1 = (uint *)((int)param_1 + 1);
        puVar12 = puVar12 + 4;
      } while (param_1 < puVar22);
    }
    for (; puVar22 < (uint *)0x100; puVar22 = (uint *)((int)puVar22 + 1)) {
      iVar17 = (int)puVar22 * 4;
      *(undefined *)(iVar17 + this->mbr_0x8) = 0xff;
      *(undefined *)(iVar17 + 1 + this->mbr_0x8) = 0xff;
      *(undefined *)(iVar17 + 2 + this->mbr_0x8) = 0xff;
      *(undefined *)(iVar17 + 3 + this->mbr_0x8) = 0xff;
    }
  }
  uVar4 = *(ushort *)((int)puVar19 + 0xe);
  puVar22 = puVar5;
  if (uVar4 == 1) {
    puVar13 = (uint *)((int)puVar5 + 7U >> 3);
  }
  else if (uVar4 == 4) {
    puVar13 = (uint *)((int)puVar5 + 1U >> 1);
  }
  else {
    puVar13 = (uint *)((uint)(uVar4 >> 3) * (int)puVar5);
    puVar22 = puVar13;
  }
  uVar18 = (int)puVar13 + 3U & 0xfffffffc;
  this->mbr_0x0 = param_2;
  uVar14 = (int)puVar22 + 3U & 0xfffffffc;
  this->mbr_0xc = (dword)puVar5;
  this->mbr_0x30 = uVar14;
  this->mbr_0x34 = 0;
  this->mbr_0x10 = dVar8;
  this->mbr_0x14 = 1;
  if (this->mbr_0x40 != 0) {
    if (((int)puVar19[2] < 0) && (7 < *(ushort *)((int)puVar19 + 0xe))) {
      this->mbr_0x38 = 0;
      this->mbr_0x4 = uVar9 + (int)puVar19;
    }
    else {
      this->mbr_0x38 = 1;
      puVar15 = (undefined4 *)operator_new(uVar14 * dVar8);
      this->mbr_0x4 = (dword)puVar15;
      if (puVar15 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      puVar20 = (undefined4 *)(uVar9 + (int)puVar19);
      dVar6 = this->mbr_0x30;
      puVar23 = puVar15;
      local_1c = dVar6;
      if (-1 < (int)puVar19[2]) {
        puVar23 = (undefined4 *)((dVar8 - 1) * dVar6 + (int)puVar15);
        local_1c = -dVar6;
      }
      puVar16 = (undefined4 *)(dVar6 * dVar8 + (int)puVar15);
      local_14 = puVar23;
      if (puVar19[4] == 2) {
        while (puVar15 <= puVar23) {
          if (*(char *)puVar20 == '\0') {
            cVar2 = *(char *)((int)puVar20 + 1);
            if (cVar2 == '\0') {
              puVar23 = (undefined4 *)((int)local_14 - this->mbr_0x30);
              local_14 = puVar23;
            }
            else if (cVar2 == '\x01') {
              puVar23 = (undefined4 *)((int)puVar15 - this->mbr_0x30);
            }
            else if (cVar2 == '\x02') {
              pbVar1 = (byte *)((int)puVar20 + 3);
              puVar20 = (undefined4 *)((int)puVar20 + 2);
              puVar23 = (undefined4 *)
                        ((int)puVar23 + ((uint)*(byte *)puVar20 - (uint)*pbVar1 * this->mbr_0x30));
            }
            else {
              uVar14 = 0;
              if (cVar2 != '\0') {
                do {
                  bVar7 = *(byte *)(((int)uVar14 >> 1) + 2 + (int)puVar20);
                  if ((uVar14 & 1) == 0) {
                    bVar7 = bVar7 >> 4;
                  }
                  else {
                    bVar7 = bVar7 & 0xf;
                  }
                  *(byte *)(uVar14 + (int)puVar23) = bVar7;
                  uVar14 = uVar14 + 1;
                } while ((int)uVar14 < (int)(uint)*(byte *)((int)puVar20 + 1));
              }
              puVar23 = (undefined4 *)((int)puVar23 + (uint)*(byte *)((int)puVar20 + 1));
              puVar20 = (undefined4 *)
                        ((int)puVar20 + ((*(byte *)((int)puVar20 + 1) >> 1) + 1 & 0xfffffffe));
            }
          }
          else {
            uVar14 = 0;
            if (*(char *)puVar20 != '\0') {
              do {
                if ((uVar14 & 1) == 0) {
                  bVar7 = *(byte *)((int)puVar20 + 1) >> 4;
                }
                else {
                  bVar7 = *(byte *)((int)puVar20 + 1) & 0xf;
                }
                *(byte *)(uVar14 + (int)puVar23) = bVar7;
                uVar14 = uVar14 + 1;
              } while ((int)uVar14 < (int)(uint)*(byte *)puVar20);
            }
            puVar23 = (undefined4 *)((int)puVar23 + (uint)*(byte *)puVar20);
          }
          puVar20 = (undefined4 *)((int)puVar20 + 2);
        }
      }
      else if (puVar19[4] == 1) {
        while (puVar15 <= puVar23) {
          bVar7 = *(byte *)puVar20;
          if (bVar7 == 0) {
            uVar14 = (uint)*(byte *)((int)puVar20 + 1);
            if (uVar14 == 0) {
              puVar23 = (undefined4 *)((int)local_14 - this->mbr_0x30);
              local_14 = puVar23;
            }
            else if (uVar14 == 1) {
              puVar23 = (undefined4 *)((int)puVar15 - this->mbr_0x30);
            }
            else {
              if (uVar14 != 2) {
                puVar16 = (undefined4 *)((int)puVar20 + 2);
                puVar21 = puVar23;
                for (uVar9 = (uint)(*(byte *)((int)puVar20 + 1) >> 2); uVar9 != 0; uVar9 = uVar9 - 1
                    ) {
                  *puVar21 = *puVar16;
                  puVar16 = puVar16 + 1;
                  puVar21 = puVar21 + 1;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *(undefined *)puVar21 = *(undefined *)puVar16;
                  puVar16 = (undefined4 *)((int)puVar16 + 1);
                  puVar21 = (undefined4 *)((int)puVar21 + 1);
                }
                uVar14 = (uint)*(byte *)((int)puVar20 + 1);
                puVar20 = (undefined4 *)((int)puVar20 + (uVar14 + 1 & 0xfffffffe));
                goto LAB_005d0e0f;
              }
              pbVar1 = (byte *)((int)puVar20 + 3);
              puVar20 = (undefined4 *)((int)puVar20 + 2);
              puVar23 = (undefined4 *)
                        ((int)puVar23 + ((uint)*(byte *)puVar20 - (uint)*pbVar1 * this->mbr_0x30));
            }
          }
          else {
            uVar3 = *(undefined *)((int)puVar20 + 1);
            puVar16 = puVar23;
            for (uVar14 = (uint)(bVar7 >> 2); uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar16 = CONCAT22(CONCAT11(uVar3,uVar3),CONCAT11(uVar3,uVar3));
              puVar16 = puVar16 + 1;
            }
            for (uVar14 = bVar7 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined *)puVar16 = uVar3;
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            uVar14 = (uint)*(byte *)puVar20;
LAB_005d0e0f:
            puVar23 = (undefined4 *)((int)puVar23 + uVar14);
          }
          puVar20 = (undefined4 *)((int)puVar20 + 2);
        }
      }
      else if (*(short *)((int)puVar19 + 0xe) == 1) {
        for (; (puVar15 <= puVar23 && (puVar23 < puVar16));
            puVar23 = (undefined4 *)((int)puVar23 + local_1c)) {
          param_1 = (uint *)0x0;
          if (puVar5 != (uint *)0x0) {
            do {
              *(byte *)((int)param_1 + (int)puVar23) =
                   *(byte *)(((uint)param_1 >> 3) + (int)puVar20) >>
                   (7 - ((byte)param_1 & 7) & 0x1f) & 1;
              param_1 = (uint *)((int)param_1 + 1);
            } while (param_1 < puVar5);
          }
          puVar20 = (undefined4 *)((int)puVar20 + uVar18);
        }
      }
      else if (*(short *)((int)puVar19 + 0xe) == 4) {
        for (; (puVar15 <= puVar23 && (puVar23 < puVar16));
            puVar23 = (undefined4 *)((int)puVar23 + local_1c)) {
          puVar19 = (uint *)0x0;
          if (puVar5 != (uint *)0x0) {
            do {
              bVar7 = *(byte *)(((uint)puVar19 >> 1) + (int)puVar20);
              if (((uint)puVar19 & 1) == 0) {
                bVar7 = bVar7 >> 4;
              }
              else {
                bVar7 = bVar7 & 0xf;
              }
              *(byte *)((int)puVar19 + (int)puVar23) = bVar7;
              puVar19 = (uint *)((int)puVar19 + 1);
            } while (puVar19 < puVar5);
          }
          puVar20 = (undefined4 *)((int)puVar20 + uVar18);
        }
      }
      else {
        while ((puVar15 <= puVar23 && (puVar23 < puVar16))) {
          puVar21 = (undefined4 *)((int)puVar20 + uVar18);
          puVar24 = (undefined4 *)((int)puVar23 + local_1c);
          for (uVar14 = (uint)puVar22 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar23 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar23 = puVar23 + 1;
          }
          puVar25 = puVar20;
          puVar26 = puVar23;
          for (uVar14 = (uint)puVar22 & 3; puVar20 = puVar21, puVar23 = puVar24, uVar14 != 0;
              uVar14 = uVar14 - 1) {
            *(undefined *)puVar26 = *(undefined *)puVar25;
            puVar25 = (undefined4 *)((int)puVar25 + 1);
            puVar26 = (undefined4 *)((int)puVar26 + 1);
          }
        }
      }
    }
  }
  return 0;
}



undefined4 __thiscall cls_0x5d06a8::meth_0x5d0f0f(cls_0x5d06a8 *this,HANDLE param_1,DWORD param_2)

{
  dword dVar1;
  undefined4 uVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  DWORD nNumberOfBytesToWrite;
  dword *pdVar8;
  LPCVOID lpBuffer;
  undefined local_498 [1024];
  dword local_98 [3];
  undefined2 local_8c;
  ushort local_8a;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_2c;
  undefined4 local_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined4 local_22;
  LPCVOID local_1c;
  undefined local_18 [4];
  undefined4 local_14;
  undefined local_10;
  undefined local_f;
  undefined local_e;
  undefined local_d;
  DWORD local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_f = 0;
  local_e = 0;
  local_d = 0;
  local_8 = 0xff000000;
  local_18[0] = 0;
  local_14 = 0xff000000;
  pdVar8 = local_98;
  for (iVar4 = 0x1b; uVar2 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
    *pdVar8 = 0;
    pdVar8 = pdVar8 + 1;
  }
  dVar1 = this->mbr_0x0;
  local_18[1] = 0x24;
  local_18[2] = 0x49;
  local_18[3] = 0x6d;
  local_14 = CONCAT13(local_14._3_1_,0xdbb692);
  local_c = 0;
  if (dVar1 == 0x14) {
    local_98[0] = 0x28;
    local_8a = 0x18;
  }
  else if (dVar1 == 0x1b) {
    local_98[0] = 0x28;
    local_8a = 8;
    local_c = 0x400;
    uVar5 = 0;
    do {
      uVar3 = local_18[uVar5 >> 5];
      iVar4 = uVar5 * 4;
      local_498[iVar4 + 3] = 0;
      local_498[iVar4 + 2] = uVar3;
      local_498[iVar4 + 1] = local_18[uVar5 >> 2 & 7];
      uVar6 = uVar5 & 3;
      uVar5 = uVar5 + 1;
      local_498[iVar4] = *(undefined *)((int)&local_8 + uVar6);
    } while (uVar5 < 0x100);
  }
  else if (dVar1 == 0x29) {
    dVar1 = this->mbr_0x8;
    puVar7 = (undefined *)(dVar1 + 2);
    uVar5 = 0;
    local_98[0] = 0x28;
    local_8a = 8;
    local_c = 0x400;
    do {
      iVar4 = uVar5 * 4;
      local_498[iVar4 + 2] = *(undefined *)(dVar1 + iVar4);
      local_498[iVar4 + 1] = puVar7[-1];
      uVar3 = *puVar7;
      local_498[iVar4 + 3] = 0;
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 4;
      local_498[iVar4] = uVar3;
    } while (uVar5 < 0x100);
  }
  else {
    if (dVar1 != 0x32) {
      return 0x80004005;
    }
    local_98[0] = 0x28;
    local_8a = 8;
    local_c = 0x400;
    uVar5 = 0;
    do {
      iVar4 = uVar5 * 4;
      local_498[iVar4 + 3] = 0;
      uVar3 = (undefined)uVar5;
      local_498[iVar4 + 2] = uVar3;
      local_498[iVar4 + 1] = uVar3;
      local_498[iVar4] = uVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x100);
  }
  local_88 = 0;
  local_98[1] = this->mbr_0xc;
  local_98[2] = this->mbr_0x10;
  local_80 = 0xb12;
  local_7c = 0xb12;
  local_1c = (LPCVOID)(uint)(local_8a >> 3);
  local_8 = local_98[1] * (int)local_1c;
  local_14 = local_8 + 3 & 0xfffffffc;
  local_2a = local_98[2] * local_14 + 0x36 + local_c;
  uStack_26 = 0;
  uStack_24 = 0;
  nNumberOfBytesToWrite = (local_2a + 3U & 0xfffffffc) - local_2a;
  local_2a = nNumberOfBytesToWrite + local_2a;
  local_22 = local_c + 0x36;
  local_8c = 1;
  local_2c = 0x4d42;
  if (param_2 != 0) {
    WriteFile(param_1,&local_2c,0xe,&param_2,(LPOVERLAPPED)0x0);
  }
  WriteFile(param_1,local_98,0x28,&param_2,(LPOVERLAPPED)0x0);
  if (local_c != 0) {
    WriteFile(param_1,local_498,local_c,&param_2,(LPOVERLAPPED)0x0);
  }
  local_1c = (LPCVOID)(this->mbr_0x1c * this->mbr_0x30 + this->mbr_0x18 * (int)local_1c +
                      this->mbr_0x4);
  lpBuffer = (LPCVOID)((this->mbr_0x10 - 1) * this->mbr_0x30 + (int)local_1c);
  if (local_1c <= lpBuffer) {
    do {
      WriteFile(param_1,lpBuffer,local_8,&param_2,(LPOVERLAPPED)0x0);
      if (local_8 < local_14) {
        WriteFile(param_1,&local_10,local_14 - local_8,&param_2,(LPOVERLAPPED)0x0);
      }
      lpBuffer = (LPCVOID)((int)lpBuffer - this->mbr_0x30);
    } while (local_1c <= lpBuffer);
  }
  if (nNumberOfBytesToWrite != 0) {
    WriteFile(param_1,&local_10,nNumberOfBytesToWrite,&param_2,(LPOVERLAPPED)0x0);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d06a8::meth_0x5d1252(cls_0x5d06a8 *this,undefined4 param_1)

{
  uint *puVar1;
  cls_0x5d06a8 *pcVar2;
  int iVar3;
  void *pvVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 unaff_EDI;
  undefined4 *puVar11;
  undefined4 in_stack_00000008;
  code **ppcVar12;
  code *local_278 [2];
  code *local_270;
  undefined4 local_1f4 [16];
  int local_1b4;
  code **local_1b0;
  undefined4 *local_1a0;
  undefined4 local_170;
  dword local_158;
  dword local_154;
  int local_14c;
  uint local_13c;
  cls_0x5d06a8 *local_c;
  undefined4 *local_8;
  
  ppcVar12 = local_278;
  local_c = this;
  local_1b4 = FUN_005e34f0(ppcVar12);
  local_278[0] = FUN_005d11f3;
  local_270 = cls_0x6b84f0::virt_meth_0x5d1c3e;
  iVar3 = __setjmp3(local_1f4,0,ppcVar12,unaff_EDI);
  if (iVar3 == 0) {
    FUN_005e174b(&local_1b4,0x3d,0x1a8);
    local_1a0 = (undefined4 *)(**local_1b0)(&local_1b4,0,0x24);
    local_1a0[8] = in_stack_00000008;
    local_1a0[2] = cls_0x6b84f0::virt_meth_0x5d1c3e;
    local_1a0[3] = &LAB_005d122c;
    local_1a0[4] = &LAB_005d1241;
    local_1a0[5] = &LAB_005e3266;
    local_1a0[6] = cls_0x6b84f0::virt_meth_0x5d1c3e;
    local_1a0[1] = 0;
    *local_1a0 = 0;
    local_1a0[7] = param_1;
    FUN_005e1ac4(&local_1b4,'\x01');
    iVar3 = FUN_0048200c();
    if (iVar3 == 0) {
      local_170 = 1;
    }
    local_270 = (code *)&LAB_005d120f;
    FUN_005e1c54(&local_1b4);
    pcVar2 = local_c;
    if (local_14c == 1) {
      local_c->mbr_0x0 = 0x32;
      local_c->mbr_0x30 = local_158;
    }
    else {
      if (local_14c != 3) goto LAB_005d129d;
      local_c->mbr_0x0 = 0x16;
      local_c->mbr_0x30 = local_158 << 2;
    }
    local_c->mbr_0x34 = 0;
    local_c->mbr_0xc = local_158;
    local_c->mbr_0x10 = local_154;
    local_c->mbr_0x14 = 1;
    if (local_c->mbr_0x40 != 0) {
      local_c->mbr_0x38 = 1;
      pvVar4 = operator_new(local_c->mbr_0x30 * local_154);
      pcVar2->mbr_0x4 = (dword)pvVar4;
      if ((pvVar4 == (void *)0x0) ||
         (local_8 = (undefined4 *)(*local_1b0[2])(&local_1b4,1,local_158 * local_14c,1),
         local_8 == (undefined4 *)0x0)) {
        uVar8 = 0x8007000e;
        goto LAB_005d14ac;
      }
      if (pcVar2->mbr_0x0 == 0x32) {
        puVar7 = (undefined4 *)pcVar2->mbr_0x4;
        if (local_13c < local_154) {
          do {
            FUN_005e1bd0(&local_1b4,local_8,1);
            puVar9 = (undefined4 *)*local_8;
            puVar11 = puVar7;
            for (uVar6 = local_158 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar6 = local_158 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined *)puVar11 = *(undefined *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            puVar7 = (undefined4 *)((int)puVar7 + local_158);
          } while (local_13c < local_154);
        }
      }
      else if (pcVar2->mbr_0x0 == 0x16) {
        puVar10 = (uint *)pcVar2->mbr_0x4;
        while (local_13c < local_154) {
          FUN_005e1bd0(&local_1b4,local_8,1);
          puVar5 = (undefined *)*local_8;
          puVar1 = puVar10 + local_158;
          for (; puVar10 < puVar1; puVar10 = puVar10 + 1) {
            *puVar10 = (uint)CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]);
            puVar5 = puVar5 + 3;
          }
        }
      }
      FUN_005e1a1d(&local_1b4);
    }
    uVar8 = 0;
  }
  else {
LAB_005d129d:
    uVar8 = 0x80004005;
  }
LAB_005d14ac:
  thunk_FUN_005ea7da((int)&local_1b4);
  return uVar8;
}



undefined4 __thiscall cls_0x5d06a8::meth_0x5d14c2(cls_0x5d06a8 *this,uint *param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  dword dVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  bool bVar20;
  bool bVar21;
  uint local_20;
  uint local_1c;
  uint local_18;
  dword local_10;
  uint *local_8;
  
  puVar8 = param_1;
  if (param_2 < 0x12) {
    return 0x80004005;
  }
  if (((((*(byte *)((int)param_1 + 1) & 0xfe) != 0) ||
       (bVar4 = *(byte *)((int)param_1 + 2), (bVar4 & 0xf4) != 0)) || (*(short *)(param_1 + 3) == 0)
      ) || (*(short *)((int)param_1 + 0xe) == 0)) {
    return 0x80004005;
  }
  uVar10 = (uint)*(byte *)((int)param_1 + 7);
  local_18 = 0;
  if (*(byte *)((int)param_1 + 1) != 0) {
    if (uVar10 == 0xf) {
      local_18 = 0x18;
    }
    else if (uVar10 == 0x10) {
      local_18 = 0x19;
    }
    else if (uVar10 == 0x18) {
      local_18 = 0x14;
    }
    else {
      if (uVar10 != 0x20) {
        return 0x80004005;
      }
      local_18 = 0x15;
    }
  }
  uVar15 = (uint)*(byte *)(param_1 + 4);
  uVar11 = uVar15 + 7 >> 3;
  bVar9 = bVar4 & 3;
  if (bVar9 == 1) {
    if (*(char *)((int)param_1 + 1) == '\0') {
      return 0x80004005;
    }
    if (*(char *)(param_1 + 4) != '\b') {
      return 0x80004005;
    }
    local_10 = 0x29;
  }
  else if (bVar9 == 2) {
    if (uVar15 == 0xf) {
      local_10 = 0x18;
    }
    else if (uVar15 == 0x10) {
      local_10 = 0x19;
    }
    else if (uVar15 == 0x18) {
      local_10 = 0x14;
    }
    else {
      if (uVar15 != 0x20) {
        return 0x80004005;
      }
      local_10 = 0x15;
    }
  }
  else {
    if (bVar9 != 3) {
      return 0x80004005;
    }
    if (*(char *)(param_1 + 4) != '\b') {
      return 0x80004005;
    }
    local_10 = 0x32;
  }
  bVar20 = (*(byte *)((int)param_1 + 0x11) & 0x20) != 0x20;
  bVar21 = (*(byte *)((int)param_1 + 0x11) & 0x10) == 0x10;
  uVar12 = (uint)*(byte *)param_1;
  if (param_2 - 0x12 < uVar12) {
    return 0x80004005;
  }
  uVar3 = (param_2 - 0x12) - uVar12;
  local_8 = (uint *)(uVar12 + 0x12 + (int)param_1);
  uVar10 = (uint)*(ushort *)((int)param_1 + 5) * (uVar10 + 7 >> 3);
  if (uVar3 < uVar10) {
    return 0x80004005;
  }
  if ((this->mbr_0x40 != 0) && (local_10 == 0x29)) {
    if (0x100 < (uint)*(ushort *)((int)param_1 + 3) + (uint)*(ushort *)((int)param_1 + 5)) {
      return 0x80004005;
    }
    puVar13 = (undefined4 *)operator_new(0x400);
    this->mbr_0x8 = (dword)puVar13;
    if (puVar13 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    this->mbr_0x3c = 1;
    for (iVar16 = 0x100; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    puVar1 = (undefined *)(this->mbr_0x8 + (uint)*(ushort *)((int)param_1 + 3) * 4);
    puVar2 = puVar1 + (uint)*(ushort *)((int)param_1 + 5) * 4;
    uVar12 = uVar3;
    uVar17 = uVar3;
    param_1 = local_8;
    for (; puVar1 < puVar2; puVar1 = puVar1 + 4) {
      if (local_18 == 0x14) {
        uVar12 = (uint)*(byte *)((int)param_1 + 2);
        uVar17 = (uint)*(byte *)((int)param_1 + 1);
        local_1c = (uint)*(byte *)param_1;
        param_1 = (uint *)((int)param_1 + 3);
LAB_005d179f:
        local_20 = 0xff;
      }
      else if (local_18 == 0x15) {
        uVar6 = *param_1;
        local_20 = uVar6 >> 0x18;
        uVar17 = uVar6 >> 8 & 0xff;
        uVar12 = uVar6 >> 0x10 & 0xff;
        local_1c = uVar6 & 0xff;
        param_1 = param_1 + 1;
      }
      else {
        if (local_18 == 0x18) {
          uVar5 = *(ushort *)param_1;
          uVar12 = uVar5 >> 10 & 0x1f;
          uVar17 = uVar5 >> 5 & 0x1f;
          uVar12 = uVar12 >> 2 | uVar12 << 3;
          uVar17 = uVar17 >> 2 | uVar17 << 3;
          local_1c = (uVar5 & 0x1f) >> 2 | (uVar5 & 0x1f) << 3;
          param_1 = (uint *)((int)param_1 + 2);
          goto LAB_005d179f;
        }
        if (local_18 == 0x19) {
          uVar5 = *(ushort *)param_1;
          local_20 = (uint)(uVar5 >> 0xf) * 0xff;
          uVar12 = uVar5 >> 10 & 0x1f;
          uVar17 = uVar5 >> 5 & 0x1f;
          uVar12 = uVar12 >> 2 | uVar12 << 3;
          uVar17 = uVar17 >> 2 | uVar17 << 3;
          local_1c = (uVar5 & 0x1f) >> 2 | (uVar5 & 0x1f) << 3;
          param_1 = (uint *)((int)param_1 + 2);
        }
      }
      puVar1[2] = (char)local_1c;
      puVar1[3] = (undefined)local_20;
      *puVar1 = (char)uVar12;
      puVar1[1] = (char)uVar17;
    }
  }
  param_2 = uVar3 - uVar10;
  local_8 = (uint *)((int)local_8 + uVar10);
  uVar10 = (uint)*(ushort *)((int)puVar8 + 0xe) * (uint)*(ushort *)(puVar8 + 3) * uVar11;
  this->mbr_0x0 = local_10;
  this->mbr_0x4 = (dword)local_8;
  this->mbr_0x30 = *(ushort *)(puVar8 + 3) * uVar11;
  this->mbr_0x34 = 0;
  this->mbr_0xc = (uint)*(ushort *)(puVar8 + 3);
  this->mbr_0x10 = (uint)*(ushort *)((int)puVar8 + 0xe);
  this->mbr_0x14 = 1;
  if (this->mbr_0x40 != 0) {
    if ((((bVar4 & 8) != 0) || (bVar20)) || (bVar21)) {
      puVar14 = (uint *)operator_new(uVar10);
      this->mbr_0x4 = (dword)puVar14;
      if (puVar14 == (uint *)0x0) {
        return 0x8007000e;
      }
      this->mbr_0x38 = 1;
      if (bVar20) {
        puVar14 = (uint *)((*(ushort *)((int)puVar8 + 0xe) - 1) * this->mbr_0x30 + (int)puVar14);
      }
      local_18 = 0;
      if (*(short *)((int)puVar8 + 0xe) != 0) {
        do {
          param_1 = puVar14;
          if (bVar21) {
            param_1 = (uint *)((this->mbr_0x30 - uVar11) + (int)puVar14);
          }
          uVar10 = (uint)*(ushort *)(puVar8 + 3);
          local_1c = 0;
          if (uVar10 != 0) {
            do {
              if ((bVar4 & 8) == 0) {
                local_20 = 0;
              }
              else {
                if (param_2 == 0) {
                  return 0x80004005;
                }
                local_20 = *(byte *)local_8 & 0x80;
                uVar10 = (*(byte *)local_8 & 0x7f) + 1;
                local_8 = (uint *)((int)local_8 + 1);
                param_2 = param_2 - 1;
              }
              local_1c = local_1c + uVar10;
              while (uVar10 != 0) {
                uVar10 = uVar10 - 1;
                if (param_2 < uVar11) {
                  return 0x80004005;
                }
                puVar18 = local_8;
                puVar19 = param_1;
                for (uVar12 = uVar15 + 7 >> 5; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *puVar19 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar19 = puVar19 + 1;
                }
                for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined *)puVar19 = *(undefined *)puVar18;
                  puVar18 = (uint *)((int)puVar18 + 1);
                  puVar19 = (uint *)((int)puVar19 + 1);
                }
                if (local_20 == 0) {
                  local_8 = (uint *)((int)local_8 + uVar11);
                  param_2 = param_2 - uVar11;
                }
                uVar12 = uVar11;
                if (bVar21) {
                  uVar12 = -uVar11;
                }
                param_1 = (uint *)((int)param_1 + uVar12);
              }
              if (local_20 != 0) {
                local_8 = (uint *)((int)local_8 + uVar11);
                param_2 = param_2 - uVar11;
              }
              uVar10 = (uint)*(ushort *)(puVar8 + 3);
            } while (local_1c < uVar10);
          }
          if (bVar20) {
            dVar7 = -this->mbr_0x30;
          }
          else {
            dVar7 = this->mbr_0x30;
          }
          puVar14 = (uint *)((int)puVar14 + dVar7);
          local_18 = local_18 + 1;
        } while (local_18 < *(ushort *)((int)puVar8 + 0xe));
      }
    }
    else {
      if (param_2 < uVar10) {
        return 0x80004005;
      }
      this->mbr_0x4 = (dword)local_8;
      this->mbr_0x38 = 0;
    }
  }
  return 0;
}



uint __thiscall cls_0x5d06a8::meth_0x5d1969(cls_0x5d06a8 *this,uint *param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint local_18;
  uint *local_14;
  uint local_c;
  int local_8;
  
  if (param_2 < 2) {
    return 0x80004005;
  }
  if (*(char *)param_1 == 'P') {
    if (*(char *)((int)param_1 + 1) == '3') {
      bVar2 = true;
    }
    else {
      if (*(char *)((int)param_1 + 1) != '6') {
        return 0x80004005;
      }
      bVar2 = false;
    }
    pbVar8 = (byte *)((int)param_1 + 2);
    param_2 = param_2 - 2;
    local_8 = 0;
    local_18 = 0;
    local_c = 0xff;
    pbVar3 = pbVar8;
    while (param_2 != 0) {
      uVar7 = 0;
      if ((!bVar2) && (local_8 == 3)) {
        if (0xff < local_c) {
          return 0x80004005;
        }
        if ((1 < param_2) && (*pbVar8 == 0xd)) {
          pbVar8 = pbVar8 + 1;
          param_2 = param_2 - 1;
        }
        iVar6 = param_2 - 1;
        pbVar8 = pbVar8 + 1;
        for (; (iVar6 != 0 && (param_1 < local_14)); param_1 = param_1 + 1) {
          *param_1 = ((((uint)*pbVar8 * 0xff) / local_c | 0xffffff00) << 8 |
                     ((uint)pbVar8[1] * 0xff) / local_c) << 8 | ((uint)pbVar8[2] * 0xff) / local_c;
          iVar6 = iVar6 + -3;
          pbVar8 = pbVar8 + 3;
        }
        return -(uint)(param_1 != local_14) & 0x80004005;
      }
      iVar6 = _isspace((uint)*pbVar8);
      if (iVar6 == 0) {
        if (*pbVar8 == 0x23) {
          for (; (param_2 != 0 && (*pbVar8 != 10)); pbVar8 = pbVar8 + 1) {
            param_2 = param_2 - 1;
          }
          goto LAB_005d19f3;
        }
        while ((param_2 != 0 && (iVar6 = _isspace((uint)*pbVar8), iVar6 == 0))) {
          iVar6 = _isdigit((uint)*pbVar8);
          if (iVar6 == 0) {
            return 0x80004005;
          }
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          param_2 = param_2 - 1;
          uVar7 = (bVar1 - 0x30) + uVar7 * 10;
          pbVar3 = pbVar8;
        }
        uVar4 = uVar7;
        uVar5 = local_c;
        if (local_8 == 0) {
LAB_005d1b38:
          local_c = uVar5;
          local_18 = uVar4;
          if (uVar7 == 0) {
            return 0x80004005;
          }
        }
        else if (local_8 == 1) {
          if (uVar7 == 0) {
            return 0x80004005;
          }
          param_1 = (uint *)operator_new(uVar7 * local_18 * 4);
          this->mbr_0x4 = (dword)param_1;
          if (param_1 == (uint *)0x0) {
            return 0x8007000e;
          }
          local_14 = param_1 + uVar7 * local_18;
          this->mbr_0x34 = 0;
          this->mbr_0x38 = 1;
          this->mbr_0x0 = 0x16;
          this->mbr_0x30 = local_18 << 2;
          this->mbr_0xc = local_18;
          this->mbr_0x10 = uVar7;
          this->mbr_0x14 = 1;
          pbVar8 = pbVar3;
        }
        else {
          uVar4 = local_18;
          uVar5 = uVar7;
          if (local_8 == 2) goto LAB_005d1b38;
          if (local_8 == 3) {
            if (local_14 <= param_1) {
              return 0x80004005;
            }
            *param_1 = ((uVar7 * 0xff) / local_c | 0xffffff00) << 0x10;
          }
          else if (local_8 == 4) {
            *param_1 = *param_1 | (uVar7 * 0xff) / local_c << 8;
          }
          else if (local_8 == 5) {
            *param_1 = *param_1 | (uVar7 * 0xff) / local_c;
            param_1 = param_1 + 1;
            if (param_1 == local_14) {
              return 0;
            }
            local_8 = 2;
          }
        }
        local_8 = local_8 + 1;
      }
      else {
LAB_005d19f3:
        pbVar8 = pbVar8 + 1;
        param_2 = param_2 - 1;
        pbVar3 = pbVar8;
      }
    }
  }
  return 0x80004005;
}



undefined4 __thiscall cls_0x5d06a8::meth_0x5d1c3f(cls_0x5d06a8 *this,uint param_1)

{
  undefined *puVar1;
  cls_0x5d06a8 *pcVar2;
  int iVar3;
  uint uVar4;
  dword dVar5;
  void *pvVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 uVar8;
  void *unaff_EDI;
  int iVar9;
  longlong lVar10;
  uint in_stack_00000008;
  undefined auStack_158 [256];
  double local_58;
  double local_50;
  uint local_48 [2];
  int local_40;
  undefined local_3c;
  cls_0x5d06a8 *local_38;
  dword local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 *local_20;
  dword local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (uint *)0x0;
  local_20 = (undefined4 *)0x0;
  local_38 = this;
  iVar3 = FUN_005e59ac(param_1,0,in_stack_00000008);
  if (iVar3 != 0) {
    return 0x80004005;
  }
  local_8 = FUN_005e365a("1.0.5",0,&LAB_005d1c32,cls_0x6b84f0::virt_meth_0x5d1c3e);
  if ((local_8 == (int *)0x0) || (local_c = FUN_005e5ab1((int)local_8), local_c == (uint *)0x0))
  goto LAB_005d20a2;
  iVar3 = __setjmp3(local_8,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    local_48[0] = param_1;
    FUN_005e596d((int)local_8,local_48,&LAB_005d1bef);
    FUN_005e375d(local_8,local_c);
    FUN_005e3f22((int)local_8,local_c,&local_34,&local_1c,&local_28,&local_30,(uint *)0x0,
                 (uint *)0x0,(uint *)0x0);
    pcVar2 = local_38;
    if (local_30 == 0) {
      local_38->mbr_0x0 = 0x32;
    }
    else if (local_30 == 2) {
      local_38->mbr_0x0 = 0x14;
    }
    else if (local_30 == 3) {
      local_38->mbr_0x0 = 0x29;
    }
    else if (local_30 == 4) {
      local_38->mbr_0x0 = 0x33;
    }
    else if (local_30 == 6) {
      local_38->mbr_0x0 = 0x15;
    }
    if (local_28 == 0x10) {
      FUN_005e4096((int)local_8);
      dVar5 = pcVar2->mbr_0x0;
      if (dVar5 == 0x14) {
        pcVar2->mbr_0x0 = 0x36315220;
      }
      else if (dVar5 == 0x15) {
        pcVar2->mbr_0x0 = 0x36315241;
      }
      else if (dVar5 == 0x32) {
        pcVar2->mbr_0x0 = 0x36314c20;
      }
      else {
        if (dVar5 != 0x33) {
          return 0x80004005;
        }
        pcVar2->mbr_0x0 = 0x36314c41;
      }
    }
    if ((int)local_28 < 8) {
      FUN_005e40a8((int)local_8);
    }
    if ((local_30 == 0) && ((int)local_28 < 8)) {
      FUN_005e4249((int)local_8);
    }
    iVar3 = FUN_005e3ef7((int)local_8,(int)local_c,(uint *)&local_3c);
    if (iVar3 == 0) {
      iVar3 = FUN_005e3ece((int)local_8,(int)local_c,&local_58);
      if (iVar3 != 0) {
        FUN_005e4213((int)local_8,2.2,local_58);
      }
    }
    else {
      FUN_005e58aa((int)local_8,(int)local_c,local_3c);
    }
    if ((pcVar2->mbr_0x0 != 0x29) &&
       (uVar4 = FUN_005e3e88((int)local_8,(int)local_c,0x10), uVar4 != 0)) {
      FUN_005e4249((int)local_8);
      dVar5 = pcVar2->mbr_0x0;
      if (dVar5 == 0x14) {
        pcVar2->mbr_0x0 = 0x15;
      }
      else if (dVar5 == 0x32) {
        pcVar2->mbr_0x0 = 0x33;
      }
      else if (dVar5 == 0x36314c20) {
        pcVar2->mbr_0x0 = 0x36314c41;
      }
      else if (dVar5 == 0x36315220) {
        pcVar2->mbr_0x0 = 0x36315241;
      }
    }
    dVar5 = pcVar2->mbr_0x0;
    if ((((dVar5 == 0x14) || (dVar5 == 0x36315220)) || (dVar5 == 0x15)) || (dVar5 == 0x36315241)) {
      FUN_005e408d((int)local_8);
    }
    if (pcVar2->mbr_0x0 == 0x14) {
      FUN_005e40da((int)local_8,0xff,1);
      pcVar2->mbr_0x0 = 0x16;
    }
    FUN_005e38d0(local_8,(int *)local_c);
    dVar5 = pcVar2->mbr_0x0;
    uVar4 = 3;
    if ((int)dVar5 < 0x34) {
      if (dVar5 == 0x33) {
LAB_005d1f12:
        local_10 = 2;
        uVar4 = local_10;
      }
      else if (dVar5 != 0x14) {
        if ((dVar5 == 0x15) || (dVar5 == 0x16)) {
LAB_005d1f08:
          uVar4 = 4;
        }
        else if ((dVar5 == 0x29) || (uVar4 = local_10, dVar5 == 0x32)) goto LAB_005d1ece;
      }
    }
    else if (dVar5 == 0x36314c20) {
LAB_005d1ece:
      local_10 = 1;
      uVar4 = local_10;
    }
    else {
      if (dVar5 == 0x36314c41) goto LAB_005d1f12;
      if ((dVar5 != 0x36315220) && (uVar4 = local_10, dVar5 == 0x36315241)) goto LAB_005d1f08;
    }
    local_10 = uVar4;
    uVar4 = FUN_005e3eb8((int)local_8,(int)local_c);
    if (local_10 == (uVar4 & 0xff)) {
      pcVar2->mbr_0xc = local_34;
      pcVar2->mbr_0x10 = local_1c;
      pcVar2->mbr_0x14 = 1;
      dVar5 = FUN_005e3ea2((int)local_8,(int)local_c);
      pcVar2->mbr_0x30 = dVar5;
      pcVar2->mbr_0x34 = 0;
      if (pcVar2->mbr_0x40 == 0) goto LAB_005d21a4;
      pvVar6 = operator_new(dVar5 * local_1c);
      pcVar2->mbr_0x4 = (dword)pvVar6;
      if (pvVar6 != (void *)0x0) {
        pcVar2->mbr_0x38 = 1;
        local_20 = (undefined4 *)operator_new(local_1c << 2);
        if (local_20 != (undefined4 *)0x0) {
          uVar4 = 0;
          if (local_1c != 0) {
            do {
              local_20[uVar4] = pcVar2->mbr_0x30 * uVar4 + pcVar2->mbr_0x4;
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_1c);
          }
          FUN_005e3c97(local_8,local_20);
          if (pcVar2->mbr_0x0 == 0x29) {
            local_2c = 0;
            local_24 = 0;
            uVar4 = FUN_005e3e88((int)local_8,(int)local_c,8);
            if (uVar4 != 0) {
              FUN_005e3ff3((int)local_8,(int)local_c,&local_14,&local_24);
            }
            uVar4 = FUN_005e3e88((int)local_8,(int)local_c,0x10);
            if (uVar4 != 0) {
              FUN_005e4026((int)local_8,(int)local_c,&local_40,&local_2c,(int *)0x0);
            }
            if (((float)local_8[0x4c] <= 1e-06) || ((float)local_8[0x4d] <= 1e-06)) {
              iVar3 = 0;
              do {
                auStack_158[iVar3] = (char)iVar3;
                iVar3 = iVar3 + 1;
              } while (iVar3 < 0x100);
            }
            else {
              local_18 = 0;
              local_50 = (double)(1.0 / ((float)local_8[0x4d] * (float)local_8[0x4c]));
              do {
                FUN_0061a460();
                lVar10 = __ftol();
                iVar3 = local_18 + 1;
                puVar1 = auStack_158 + local_18;
                local_18 = iVar3;
                *puVar1 = (char)lVar10;
              } while (iVar3 < 0x100);
            }
            pvVar6 = operator_new(0x400);
            pcVar2->mbr_0x8 = (dword)pvVar6;
            if (pvVar6 == (void *)0x0) goto LAB_005d20a2;
            iVar3 = 0;
            pcVar2->mbr_0x3c = 1;
            if (0 < (int)local_2c) {
              iVar9 = 0;
              do {
                iVar7 = iVar3 * 4;
                *(undefined *)(iVar7 + pcVar2->mbr_0x8) = auStack_158[*(byte *)(iVar9 + local_14)];
                *(undefined *)(pcVar2->mbr_0x8 + 1 + iVar7) =
                     auStack_158[*(byte *)(iVar9 + 1 + local_14)];
                *(undefined *)(pcVar2->mbr_0x8 + 2 + iVar7) =
                     auStack_158[*(byte *)(iVar9 + 2 + local_14)];
                puVar1 = (undefined *)(iVar3 + local_40);
                iVar3 = iVar3 + 1;
                *(undefined *)(pcVar2->mbr_0x8 + 3 + iVar7) = *puVar1;
                iVar9 = iVar9 + 3;
              } while (iVar3 < (int)local_2c);
            }
            if (iVar3 < (int)local_24) {
              iVar9 = iVar3 * 3;
              do {
                iVar7 = iVar3 * 4;
                *(undefined *)(iVar7 + pcVar2->mbr_0x8) = auStack_158[*(byte *)(iVar9 + local_14)];
                *(undefined *)(pcVar2->mbr_0x8 + 1 + iVar7) =
                     auStack_158[*(byte *)(iVar9 + 1 + local_14)];
                *(undefined *)(pcVar2->mbr_0x8 + 2 + iVar7) =
                     auStack_158[*(byte *)(iVar9 + 2 + local_14)];
                *(undefined *)(pcVar2->mbr_0x8 + 3 + iVar7) = 0xff;
                iVar3 = iVar3 + 1;
                iVar9 = iVar9 + 3;
              } while (iVar3 < (int)local_24);
            }
            if (iVar3 < 0x100) {
              iVar3 = iVar3 << 2;
              do {
                *(undefined *)(iVar3 + pcVar2->mbr_0x8) = 0xff;
                *(undefined *)(iVar3 + 1 + pcVar2->mbr_0x8) = 0xff;
                *(undefined *)(iVar3 + 2 + pcVar2->mbr_0x8) = 0xff;
                *(undefined *)(iVar3 + 3 + pcVar2->mbr_0x8) = 0xff;
                iVar3 = iVar3 + 4;
              } while (iVar3 < 0x400);
            }
          }
LAB_005d21a4:
          uVar8 = 0;
          goto LAB_005d21a6;
        }
      }
LAB_005d20a2:
      uVar8 = 0x8007000e;
      goto LAB_005d21a6;
    }
  }
  uVar8 = 0x80004005;
LAB_005d21a6:
  if (local_8 != (int *)0x0) {
    FUN_005e3e07(&local_8,&local_c,(undefined4 *)0x0);
  }
  if (local_20 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return uVar8;
}



undefined4 __thiscall cls_0x5d06a8::meth_0x5d21d5(cls_0x5d06a8 *this,int *param_1,int *param_2)

{
  dword dVar1;
  int *piVar2;
  cls_0x5d06a8 *pcVar3;
  cls_0x5d06a8 *pcVar4;
  dword dVar5;
  uint uVar6;
  dword dVar7;
  int *piVar8;
  dword dVar9;
  cls_0x5d06a8 *pcVar10;
  dword *pdVar11;
  dword dVar12;
  uint uVar13;
  int *local_2c;
  uint local_24;
  cls_0x5d06a8 *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int *local_8;
  
  if (((param_2 < (int *)0x4) || (*param_1 != 0x20534444)) || (param_2 + -1 < (int *)0x7c)) {
    return 0x80004005;
  }
  local_8 = param_1 + 0x20;
  this->mbr_0xc = param_1[4];
  this->mbr_0x10 = param_1[3];
  if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
    dVar1 = 1;
  }
  else {
    dVar1 = param_1[6];
  }
  this->mbr_0x14 = dVar1;
  if (dVar1 == 0) {
    this->mbr_0x14 = 1;
  }
  if ((param_1[0x1c] & 0xfc00U) == 0xfc00) {
    local_18 = 6;
  }
  else {
    if ((param_1[0x1c] & 0xfc00U) != 0) {
      return 0x80004005;
    }
    local_18 = 1;
  }
  local_24 = param_1[7];
  if (local_24 == 0) {
    local_24 = 1;
  }
  pdVar11 = &DAT_007005b8;
  dVar1 = DAT_007005b8;
  while (dVar1 != 0) {
    if ((param_1[0x13] == 0x20) && (uVar13 = pdVar11[2], param_1[0x14] == uVar13)) {
      if ((((((uVar13 & 4) == 0) || (param_1[0x15] == pdVar11[3])) &&
           (((uVar13 & 0xc4462) == 0 || (param_1[0x16] == pdVar11[4])))) &&
          (((uVar13 & 0xe4040) == 0 || (param_1[0x17] == pdVar11[5])))) &&
         (((((uVar13 & 0xc4440) == 0 || (param_1[0x18] == pdVar11[6])) &&
           (((uVar13 & 0xc4040) == 0 || (param_1[0x19] == pdVar11[7])))) &&
          (((uVar13 & 0x80003) == 0 || (param_1[0x1a] == pdVar11[8])))))) break;
    }
    pdVar11 = pdVar11 + 9;
    dVar1 = *pdVar11;
  }
  dVar1 = *pdVar11;
  if (dVar1 == 0) {
    return 0x80004005;
  }
  piVar2 = FUN_005ce816(dVar1);
  if ((*(byte *)((int)param_1 + 10) & 0x80) == 0) {
    this->mbr_0x44 = (uint)(local_18 == 6) * 2 + 3;
  }
  else {
    this->mbr_0x44 = 4;
  }
  if (piVar2[1] == 1) {
    if (param_2 + -0x20 < (int *)0x400) {
      return 0x80004005;
    }
    param_2 = param_2 + -0x120;
    local_2c = local_8;
    local_8 = param_1 + 0x120;
  }
  else {
    local_2c = (int *)0x0;
    param_2 = param_2 + -0x20;
  }
  local_14 = 0;
  pcVar4 = (cls_0x5d06a8 *)param_2;
  if (local_18 != 0) {
    do {
      dVar12 = this->mbr_0xc;
      dVar9 = this->mbr_0x10;
      param_1 = (int *)this->mbr_0x14;
      pcVar3 = this;
      if (local_14 != 0) {
        pcVar3 = (cls_0x5d06a8 *)operator_new(0x54);
        if (pcVar3 == (cls_0x5d06a8 *)0x0) {
          pcVar3 = (cls_0x5d06a8 *)0x0;
        }
        else {
          pcVar3 = cls_0x5d06a8(pcVar3);
        }
        if (pcVar3 == (cls_0x5d06a8 *)0x0) {
          return 0x8007000e;
        }
        local_1c->mbr_0x50 = (dword)pcVar3;
      }
      local_10 = 0;
      pcVar10 = pcVar4;
      if (local_24 != 0) {
        do {
          pcVar4 = pcVar3;
          if (local_10 != 0) {
            pcVar4 = (cls_0x5d06a8 *)operator_new(0x54);
            if (pcVar4 == (cls_0x5d06a8 *)0x0) {
              pcVar4 = (cls_0x5d06a8 *)0x0;
            }
            else {
              pcVar4 = cls_0x5d06a8(pcVar4);
            }
            if (pcVar4 == (cls_0x5d06a8 *)0x0) {
              return 0x8007000e;
            }
            pcVar10->mbr_0x4c = (dword)pcVar4;
          }
          if (dVar1 == 0x31545844) {
            dVar5 = (dVar12 + 3 >> 2) << 3;
LAB_005d2472:
            dVar7 = (dVar9 + 3 >> 2) * dVar5;
          }
          else {
            if (dVar1 == 0x32545844) {
LAB_005d245e:
              dVar5 = (dVar12 + 3 >> 2) << 4;
              goto LAB_005d2472;
            }
            if (dVar1 == 0x32595559) {
LAB_005d244f:
              dVar5 = (dVar12 + 1 >> 1) << 2;
            }
            else {
              if (((dVar1 == 0x33545844) || (dVar1 == 0x34545844)) || (dVar1 == 0x35545844))
              goto LAB_005d245e;
              if (dVar1 == 0x59565955) goto LAB_005d244f;
              dVar5 = ((uint)piVar2[2] >> 3) * dVar12;
            }
            dVar7 = dVar5 * dVar9;
          }
          pcVar4->mbr_0x38 = 0;
          pcVar4->mbr_0x3c = 0;
          piVar8 = (int *)(dVar7 * (int)param_1);
          pcVar4->mbr_0x0 = dVar1;
          pcVar4->mbr_0x30 = dVar5;
          pcVar4->mbr_0x4 = (dword)local_8;
          pcVar4->mbr_0x14 = (dword)param_1;
          pcVar4->mbr_0x34 = dVar7;
          pcVar4->mbr_0xc = dVar12;
          pcVar4->mbr_0x10 = dVar9;
          pcVar4->mbr_0x8 = (dword)local_2c;
          if (param_2 < piVar8) {
            return 0x80004005;
          }
          local_8 = (int *)((int)local_8 + (int)piVar8);
          param_2 = (int *)((int)param_2 - (int)piVar8);
          uVar6 = 1;
          uVar13 = uVar6;
          if (dVar12 != 1) {
            uVar13 = dVar12 >> 1;
          }
          if (dVar9 != 1) {
            uVar6 = dVar9 >> 1;
          }
          if (param_1 == (int *)0x1) {
            param_1 = (int *)0x1;
          }
          else {
            param_1 = (int *)((uint)param_1 >> 1);
          }
          local_10 = local_10 + 1;
          dVar9 = uVar6;
          pcVar10 = pcVar4;
          dVar12 = uVar13;
        } while (local_10 < local_24);
      }
      local_14 = local_14 + 1;
      local_1c = pcVar3;
    } while (local_14 < local_18);
  }
  return 0;
}



undefined4 __thiscall cls_0x5d06a8::meth_0x5d2516(cls_0x5d06a8 *this,HANDLE param_1)

{
  cls_0x5d06a8 *pcVar1;
  dword dVar2;
  undefined4 uVar3;
  LPCVOID lpBuffer;
  uint uVar4;
  int iVar5;
  DWORD nNumberOfBytesToWrite;
  dword *pdVar6;
  uint *puVar7;
  dword *pdVar8;
  uint uVar9;
  uint local_98 [2];
  dword local_90;
  dword local_8c;
  uint local_84;
  int local_80;
  dword local_50 [8];
  uint local_30;
  byte local_2b;
  byte local_2a;
  undefined4 local_1c;
  cls_0x5d06a8 *local_18;
  uint local_14;
  DWORD local_10;
  cls_0x5d06a8 *local_c;
  uint local_8;
  
  local_8 = 0;
  pcVar1 = this;
  if (this != (cls_0x5d06a8 *)0x0) {
    do {
      pcVar1 = (cls_0x5d06a8 *)pcVar1->mbr_0x4c;
      local_8 = local_8 + 1;
    } while (pcVar1 != (cls_0x5d06a8 *)0x0);
  }
  pdVar6 = &DAT_007005b8;
  if (DAT_007005b8 != 0) {
    dVar2 = DAT_007005b8;
    do {
      if (dVar2 == this->mbr_0x0) break;
      pdVar6 = pdVar6 + 9;
      dVar2 = *pdVar6;
    } while (dVar2 != 0);
  }
  if (*pdVar6 == 0) {
    uVar3 = 0x80004005;
  }
  else {
    local_18 = this;
    local_c = (cls_0x5d06a8 *)FUN_005ce816(this->mbr_0x0);
    local_14 = *(uint *)((int)local_c + 8) >> 3;
    local_1c = 0x20534444;
    WriteFile(param_1,&local_1c,4,&local_10,(LPOVERLAPPED)0x0);
    puVar7 = local_98;
    for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_90 = this->mbr_0x10;
    local_8c = this->mbr_0xc;
    uVar4 = pdVar6[2];
    local_98[0] = 0x7c;
    local_98[1] = 0x1007;
    pdVar8 = local_50;
    for (iVar5 = 8; pcVar1 = local_18, pdVar6 = pdVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *pdVar8 = *pdVar6;
      pdVar8 = pdVar8 + 1;
    }
    local_30 = 0x1000;
    if ((uVar4 & 3) != 0) {
      local_30 = 0x1002;
    }
    if ((uVar4 & 0x20) != 0) {
      local_30 = local_30 | 0x100;
    }
    if (local_18->mbr_0x4c != 0) {
      local_30 = local_30 | 0x400008;
      local_98[1] = 0x21007;
      local_80 = local_8;
    }
    if (local_18->mbr_0x50 != 0) {
      local_30 = local_30 | 8;
      local_2b = local_2b | 0xfe;
    }
    if (1 < local_18->mbr_0x14) {
      local_98[1] = local_98[1] | 0x800000;
      local_2a = local_2a | 0x20;
      local_84 = local_18->mbr_0x14;
    }
    WriteFile(param_1,local_98,0x7c,&local_10,(LPOVERLAPPED)0x0);
    if (*(int *)((int)local_c + 4) == 1) {
      WriteFile(param_1,(LPCVOID)pcVar1->mbr_0x8,0x400,&local_10,(LPOVERLAPPED)0x0);
    }
    local_c = pcVar1;
    do {
      for (; pcVar1 != (cls_0x5d06a8 *)0x0; pcVar1 = (cls_0x5d06a8 *)pcVar1->mbr_0x4c) {
        local_8 = 0;
        if (pcVar1->mbr_0x14 != 0) {
          uVar4 = pcVar1->mbr_0x10;
          do {
            uVar9 = 0;
            if (uVar4 != 0) {
              do {
                dVar2 = local_18->mbr_0x0;
                if (dVar2 == 0x31545844) {
                  iVar5 = (pcVar1->mbr_0x1c + uVar9 >> 2) * pcVar1->mbr_0x30 +
                          (pcVar1->mbr_0x28 + local_8) * pcVar1->mbr_0x34 +
                          (pcVar1->mbr_0x18 >> 2) * 8;
                  nNumberOfBytesToWrite = (pcVar1->mbr_0xc + 3 >> 2) << 3;
LAB_005d2766:
                  lpBuffer = (LPCVOID)(iVar5 + pcVar1->mbr_0x4);
                  uVar9 = uVar9 + 3;
                }
                else {
                  if (dVar2 == 0x32545844) {
LAB_005d2708:
                    iVar5 = (pcVar1->mbr_0x1c + uVar9 >> 2) * pcVar1->mbr_0x30 +
                            (pcVar1->mbr_0x28 + local_8) * pcVar1->mbr_0x34 +
                            (pcVar1->mbr_0x18 >> 2) * 0x10;
                    nNumberOfBytesToWrite = (pcVar1->mbr_0xc + 3 >> 2) << 4;
                    goto LAB_005d2766;
                  }
                  if (dVar2 == 0x32595559) {
LAB_005d26dc:
                    lpBuffer = (LPCVOID)((pcVar1->mbr_0x1c + uVar9) * pcVar1->mbr_0x30 +
                                         (pcVar1->mbr_0x28 + local_8) * pcVar1->mbr_0x34 +
                                         pcVar1->mbr_0x18 * local_14 + pcVar1->mbr_0x4);
                    nNumberOfBytesToWrite = (pcVar1->mbr_0xc + 1 >> 1) << 2;
                  }
                  else {
                    if (((dVar2 == 0x33545844) || (dVar2 == 0x34545844)) || (dVar2 == 0x35545844))
                    goto LAB_005d2708;
                    if (dVar2 == 0x59565955) goto LAB_005d26dc;
                    lpBuffer = (LPCVOID)((pcVar1->mbr_0x1c + uVar9) * pcVar1->mbr_0x30 +
                                         (pcVar1->mbr_0x28 + local_8) * pcVar1->mbr_0x34 +
                                         pcVar1->mbr_0x18 * local_14 + pcVar1->mbr_0x4);
                    nNumberOfBytesToWrite = pcVar1->mbr_0xc * local_14;
                  }
                }
                WriteFile(param_1,lpBuffer,nNumberOfBytesToWrite,&local_10,(LPOVERLAPPED)0x0);
                uVar4 = pcVar1->mbr_0x10;
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar4);
            }
            local_8 = local_8 + 1;
          } while (local_8 < pcVar1->mbr_0x14);
        }
      }
      pcVar1 = (cls_0x5d06a8 *)local_c->mbr_0x50;
      local_c = pcVar1;
    } while (pcVar1 != (cls_0x5d06a8 *)0x0);
    uVar3 = 0;
  }
  return uVar3;
}



int __thiscall cls_0x5d06a8::meth_0x5d27be(cls_0x5d06a8 *this)

{
  int *piVar1;
  dword dVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  cls_0x5d06a8 *extraout_ECX;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int unaff_EBP;
  undefined4 *puVar9;
  cls_0x5d06a8 *this_00;
  undefined4 *puVar10;
  DWORD DVar11;
  
  FUN_0061781c();
  *(cls_0x5d06a8 **)(unaff_EBP + -0x20) = extraout_ECX;
  cls_0x5dbf7c::cls_0x5dbf7c((cls_0x5dbf7c *)(unaff_EBP + -0x3c));
  iVar6 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar6 == 0) {
LAB_005d2813:
    piVar7 = (int *)&DAT_00700518;
LAB_005d2818:
    piVar1 = FUN_005ce816(extraout_ECX->mbr_0x0);
    dVar2 = FUN_005ce8af(piVar7,extraout_ECX->mbr_0x8,piVar1);
    *(dword *)(unaff_EBP + -0x1c) = dVar2;
    if (dVar2 != 0) {
      this_00 = extraout_ECX;
      if (dVar2 != extraout_ECX->mbr_0x0) {
        cls_0x5d2c8c::cls_0x5d2c8c((cls_0x5d2c8c *)(unaff_EBP + -0x2c));
        *(undefined *)(unaff_EBP + -4) = 1;
        piVar7 = FUN_005ce816(dVar2);
        uVar3 = (uint)piVar7[2] >> 3;
        *(uint *)(unaff_EBP + -0x10) = uVar3;
        *(cls_0x5d06a8 **)(unaff_EBP + -0x14) = extraout_ECX;
        do {
          puVar8 = *(undefined4 **)(unaff_EBP + -0x14);
          if (puVar8 != (undefined4 *)0x0) {
            do {
              pvVar4 = operator_new(puVar8[5] * puVar8[3] * uVar3 * puVar8[4]);
              *(void **)(unaff_EBP + -0x18) = pvVar4;
              if (pvVar4 == (void *)0x0) {
                *(undefined *)(unaff_EBP + -4) = 0;
                cls_0x5d2c8c::meth_0x5d2c96((cls_0x5d2c8c *)(unaff_EBP + -0x2c));
                iVar5 = -0x7ff8fff2;
                goto LAB_005d2a68;
              }
              *(undefined4 *)(unaff_EBP + -0xd4) = puVar8[1];
              *(undefined4 *)(unaff_EBP + -0xd0) = *puVar8;
              *(undefined4 *)(unaff_EBP + -0xcc) = puVar8[0xc];
              *(undefined4 *)(unaff_EBP + -200) = puVar8[0xd];
              puVar9 = puVar8 + 6;
              puVar10 = (undefined4 *)(unaff_EBP + -0xc4);
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
              puVar9 = puVar8 + 6;
              puVar10 = (undefined4 *)(unaff_EBP + -0xac);
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
              *(undefined4 *)(unaff_EBP + -0x90) = 0;
              *(undefined4 *)(unaff_EBP + -0x94) = 1;
              *(undefined4 *)(unaff_EBP + -0x8c) = puVar8[2];
              *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(unaff_EBP + -0x18);
              *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(unaff_EBP + -0x1c);
              *(int *)(unaff_EBP + -0x80) = puVar8[3] * *(int *)(unaff_EBP + -0x10);
              *(int *)(unaff_EBP + -0x7c) = puVar8[3] * *(int *)(unaff_EBP + -0x10) * puVar8[4];
              *(undefined4 *)(unaff_EBP + -0x78) = 0;
              *(undefined4 *)(unaff_EBP + -0x74) = 0;
              *(undefined4 *)(unaff_EBP + -0x70) = puVar8[3];
              *(undefined4 *)(unaff_EBP + -0x6c) = puVar8[4];
              *(undefined4 *)(unaff_EBP + -0x68) = 0;
              *(undefined4 *)(unaff_EBP + -100) = puVar8[5];
              puVar9 = (undefined4 *)(unaff_EBP + -0x78);
              puVar10 = (undefined4 *)(unaff_EBP + -0x60);
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
              *(undefined4 *)(unaff_EBP + -0x44) = 0;
              *(undefined4 *)(unaff_EBP + -0x48) = 1;
              *(undefined4 *)(unaff_EBP + -0x40) = puVar8[2];
              iVar6 = cls_0x5d2c8c::meth_0x5d643a
                                ((cls_0x5d2c8c *)(unaff_EBP + -0x2c),unaff_EBP + -0x88,
                                 unaff_EBP + -0xd4,(int *)0x80001);
              if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
                _free(*(void **)(unaff_EBP + -0x18));
              }
              if (((void *)puVar8[1] != (void *)0x0) && (puVar8[0xe] != 0)) {
                    /* WARNING: Subroutine does not return */
                _free((void *)puVar8[1]);
              }
              *puVar8 = *(undefined4 *)(unaff_EBP + -0x1c);
              puVar8[1] = *(undefined4 *)(unaff_EBP + -0x18);
              puVar9 = (undefined4 *)(unaff_EBP + -0x60);
              puVar10 = puVar8 + 6;
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
              puVar8[0xc] = *(undefined4 *)(unaff_EBP + -0x80);
              puVar8[0xd] = *(undefined4 *)(unaff_EBP + -0x7c);
              uVar3 = *(uint *)(unaff_EBP + -0x10);
              puVar8[0xe] = 1;
              puVar8 = (undefined4 *)puVar8[0x13];
            } while (puVar8 != (undefined4 *)0x0);
            iVar6 = *(int *)(unaff_EBP + 0xc);
            this_00 = *(cls_0x5d06a8 **)(unaff_EBP + -0x20);
          }
          iVar5 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x50);
          *(int *)(unaff_EBP + -0x14) = iVar5;
        } while (iVar5 != 0);
        *(undefined *)(unaff_EBP + -4) = 0;
        cls_0x5d2c8c::meth_0x5d2c96((cls_0x5d2c8c *)(unaff_EBP + -0x2c));
      }
      iVar5 = cls_0x5dbf7c::meth_0x5dc09e
                        ((cls_0x5dbf7c *)(unaff_EBP + -0x3c),*(LPCWSTR *)(unaff_EBP + 8),
                         *(int *)(unaff_EBP + 0x10));
      if (iVar5 < 0) goto LAB_005d2a68;
      if (iVar6 == 0) {
        DVar11 = 1;
LAB_005d2a58:
        iVar5 = meth_0x5d0f0f(this_00,*(HANDLE *)(unaff_EBP + -0x3c),DVar11);
      }
      else {
        if (iVar6 != 4) {
          if (iVar6 != 6) {
            iVar5 = -0x7fffbfff;
            goto LAB_005d2a68;
          }
          DVar11 = 0;
          goto LAB_005d2a58;
        }
        iVar5 = meth_0x5d2516(this_00,*(HANDLE *)(unaff_EBP + -0x3c));
      }
      if (-1 < iVar5) {
        iVar5 = 0;
      }
      goto LAB_005d2a68;
    }
  }
  else {
    if (iVar6 < 1) {
LAB_005d29fe:
      iVar5 = -0x7789f794;
      goto LAB_005d2a68;
    }
    if (3 < iVar6) {
      if (iVar6 == 4) {
        piVar7 = (int *)&DAT_00700530;
        goto LAB_005d2818;
      }
      if (iVar6 != 5) {
        if (iVar6 == 6) goto LAB_005d2813;
        goto LAB_005d29fe;
      }
    }
  }
  iVar5 = -0x7789f4a7;
LAB_005d2a68:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cls_0x5dbf7c::meth_0x5dc1a9((cls_0x5dbf7c *)(unaff_EBP + -0x3c));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}



undefined4 __thiscall
cls_0x5d06a8::meth_0x5d2ab7(cls_0x5d06a8 *this,uint *param_1,int *param_2,int *param_3,int param_4)

{
  dword dVar1;
  int *piVar2;
  undefined4 uVar3;
  dword *pdVar4;
  int iVar5;
  cls_0x5d06a8 *pcVar6;
  dword local_24 [7];
  uint local_8;
  
  local_24[0] = 0;
  local_24[1] = 5;
  local_24[2] = 4;
  local_24[3] = 1;
  local_24[4] = 3;
  local_24[5] = 2;
  local_24[6] = 6;
  local_8 = 0;
  piVar2 = param_2;
  do {
    this->mbr_0x40 = param_4;
    dVar1 = local_24[local_8];
    this->mbr_0x48 = dVar1;
    this->mbr_0x44 = 3;
    if (dVar1 == 0) {
      piVar2 = (int *)FUN_005d2a87(this,(short *)param_1,(uint)param_2);
    }
    else if (dVar1 == 1) {
      piVar2 = (int *)meth_0x5d1252(this,param_1);
    }
    else if (dVar1 == 2) {
      piVar2 = (int *)meth_0x5d14c2(this,param_1,(uint)param_2);
    }
    else if (dVar1 == 3) {
      piVar2 = (int *)meth_0x5d1c3f(this,(uint)param_1);
    }
    else if (dVar1 == 4) {
      piVar2 = (int *)meth_0x5d21d5(this,(int *)param_1,param_2);
    }
    else if (dVar1 == 5) {
      piVar2 = (int *)meth_0x5d1969(this,param_1,(uint)param_2);
    }
    else if (dVar1 == 6) {
      piVar2 = (int *)meth_0x5d07f9(this,param_1,(uint)param_2);
    }
    if (-1 < (int)piVar2) break;
    if (((void *)this->mbr_0x4 != (void *)0x0) && (this->mbr_0x38 != 0)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x4);
    }
    if (((void *)this->mbr_0x8 != (void *)0x0) && (this->mbr_0x3c != 0)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x8);
    }
    if ((cls_0x5d06a8 *)this->mbr_0x4c != (cls_0x5d06a8 *)0x0) {
      cls_0x5d06a8((cls_0x5d06a8 *)this->mbr_0x4c,1);
    }
    if ((cls_0x5d06a8 *)this->mbr_0x50 != (cls_0x5d06a8 *)0x0) {
      cls_0x5d06a8((cls_0x5d06a8 *)this->mbr_0x50,1);
    }
    local_8 = local_8 + 1;
    this->mbr_0x4 = 0;
    this->mbr_0x8 = 0;
    this->mbr_0x38 = 0;
    this->mbr_0x3c = 0;
    this->mbr_0x4c = 0;
    this->mbr_0x50 = 0;
  } while (local_8 < 7);
  iVar5 = 7;
  if (local_8 == 7) {
    uVar3 = 0x88760b59;
  }
  else {
    piVar2 = param_3;
    pcVar6 = this;
    if (param_3 != (int *)0x0) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar2 = 0;
        piVar2 = piVar2 + 1;
      }
      *param_3 = this->mbr_0xc;
      param_3[1] = this->mbr_0x10;
      param_3[2] = this->mbr_0x14;
      param_3[3] = 1;
      iVar5 = FUN_005ce9ff(this->mbr_0x0);
      param_3[4] = iVar5;
      param_3[5] = this->mbr_0x44;
      param_3[6] = this->mbr_0x48;
      for (pdVar4 = &this->mbr_0x4c; *pdVar4 != 0; pdVar4 = (dword *)(*pdVar4 + 0x4c)) {
        param_3[3] = param_3[3] + 1;
      }
    }
    do {
      for (; this != (cls_0x5d06a8 *)0x0; this = (cls_0x5d06a8 *)this->mbr_0x4c) {
        this->mbr_0x20 = this->mbr_0xc;
        this->mbr_0x24 = this->mbr_0x10;
        this->mbr_0x18 = 0;
        this->mbr_0x1c = 0;
        this->mbr_0x28 = 0;
        this->mbr_0x2c = this->mbr_0x14;
      }
      this = (cls_0x5d06a8 *)pcVar6->mbr_0x50;
      pcVar6 = this;
    } while (this != (cls_0x5d06a8 *)0x0);
    uVar3 = 0;
  }
  return uVar3;
}


