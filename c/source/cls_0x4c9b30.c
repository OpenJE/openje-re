#include "../include/cls_0x4c9b30.h"

cls_0x4c9b30 * __thiscall cls_0x4c9b30::cls_0x4c9b30(cls_0x4c9b30 *this)

{
  dword *pdVar1;
  cls_0x4c8ba0 *pcVar2;
  int iVar3;
  dword *extraout_EDX;
  cls_0x4c9b30 *extraout_EDX_00;
  undefined local_20 [8];
  dword local_18;
  dword local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  iVar3 = 2;
  pdVar1 = &this->mbr_0x40;
  do {
    pdVar1[2] = 0;
    pdVar1[3] = 0;
    *pdVar1 = 0;
    pdVar1[1] = 0;
    pdVar1 = pdVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pcVar2 = (cls_0x4c8ba0 *)&this->mbr_0x68;
  iVar3 = 2;
  do {
    cls_0x4c8ba0::cls_0x4c8ba0(pcVar2);
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar2 = (cls_0x4c8ba0 *)local_20;
  pdVar1 = extraout_EDX;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar1 = pcVar2->mbr_0x0;
    pcVar2 = (cls_0x4c8ba0 *)&pcVar2->field_0x4;
    pdVar1 = pdVar1 + 1;
  }
  extraout_EDX[0xc] = 0;
  extraout_EDX[0xd] = 0;
  extraout_EDX[0xe] = 0;
  extraout_EDX[0xf] = 0x3f800000;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  local_20._0_4_ = 0;
  extraout_EDX[0x14] = 0;
  local_20._4_4_ = 0;
  extraout_EDX[0x15] = 0;
  local_18 = 0;
  extraout_EDX[0x16] = 0;
  local_14 = 0;
  extraout_EDX[0x17] = 0;
  extraout_EDX[0x18] = 0;
  iVar3 = 2;
  pdVar1 = extraout_EDX + 0x1a;
  do {
    pcVar2 = cls_0x4c8ba0::cls_0x4c8ba0((cls_0x4c8ba0 *)local_20);
    *pdVar1 = pcVar2->mbr_0x0;
    pdVar1[1] = *(dword *)&pcVar2->field_0x4;
    pdVar1[2] = pcVar2->mbr_0x8;
    iVar3 = iVar3 + -1;
    pdVar1[3] = pcVar2->mbr_0xc;
    pdVar1 = pdVar1 + 4;
  } while (iVar3 != 0);
  extraout_EDX_00->mbr_0x88 = 0;
  return extraout_EDX_00;
}



void __thiscall cls_0x4c9b30::meth_0x4c9e00(cls_0x4c9b30 *this,FILE *param_1)

{
  dword *pdVar1;
  int iVar2;
  undefined8 *puVar3;
  cls_0x4c9b30 *pcVar4;
  dword local_40;
  cls_0x4c9b30 *local_3c;
  undefined8 local_38;
  dword local_30;
  dword local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_2c = 0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_3c = this;
  FUN_004c9400(param_1,(double *)&local_38);
  puVar3 = &local_38;
  pcVar4 = this;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar4->mbr_0x0 = *(dword *)puVar3;
    puVar3 = (undefined8 *)((int)puVar3 + 4);
    pcVar4 = (cls_0x4c9b30 *)&pcVar4->mbr_0x4;
  }
  FUN_004c9400(param_1,(double *)&local_20);
  puVar3 = &local_20;
  pdVar1 = &this->mbr_0x18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar1 = *(dword *)puVar3;
    puVar3 = (undefined8 *)((int)puVar3 + 4);
    pdVar1 = pdVar1 + 1;
  }
  pdVar1 = (dword *)FUN_004c89e0();
  pcVar4 = local_3c;
  local_3c->mbr_0x30 = *pdVar1;
  local_3c->mbr_0x34 = pdVar1[1];
  local_3c->mbr_0x38 = pdVar1[2];
  local_3c->mbr_0x3c = pdVar1[3];
  _fread(&local_40,4,1,param_1);
  iVar2 = 0;
  pcVar4->mbr_0x60 = local_40;
  if (0 < (int)local_40) {
    local_3c = (cls_0x4c9b30 *)&pcVar4->mbr_0x40;
    do {
      local_30 = 0;
      local_2c = 0;
      local_38._0_4_ = 0;
      local_38._4_4_ = 0;
      FUN_004c9380(param_1,(double *)&local_38);
      local_3c->mbr_0x0 = (dword)local_38;
      *(dword *)((int)local_3c + 4) = local_38._4_4_;
      pdVar1 = (dword *)((int)local_3c + 0x10);
      *(dword *)((int)local_3c + 8) = local_30;
      iVar2 = iVar2 + 1;
      *(dword *)((int)local_3c + 0xc) = local_2c;
      local_3c = (cls_0x4c9b30 *)pdVar1;
    } while (iVar2 < (int)local_40);
  }
  _fread(&local_40,4,1,param_1);
  iVar2 = 0;
  pcVar4->mbr_0x88 = local_40;
  if (0 < (int)local_40) {
    pdVar1 = &pcVar4->mbr_0x68;
    do {
      FUN_004c8c20(pdVar1,param_1);
      iVar2 = iVar2 + 1;
      pdVar1 = pdVar1 + 4;
    } while (iVar2 < (int)local_40);
  }
  return;
}



void __thiscall cls_0x4c9b30::meth_0x4c9fb0(cls_0x4c9b30 *this,int param_1,int *param_2)

{
  dword *pdVar1;
  int iVar2;
  int extraout_ECX;
  dword dVar3;
  undefined8 *puVar4;
  cls_0x4c9b30 *pcVar5;
  dword *local_40;
  dword local_3c;
  undefined8 local_38;
  dword local_30;
  dword local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_2c = 0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_004c9460(param_1,(double *)&local_38,param_2);
  puVar4 = &local_38;
  pcVar5 = this;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar5->mbr_0x0 = *(dword *)puVar4;
    puVar4 = (undefined8 *)((int)puVar4 + 4);
    pcVar5 = (cls_0x4c9b30 *)&pcVar5->mbr_0x4;
  }
  FUN_004c9460(param_1,(double *)&local_20,param_2);
  puVar4 = &local_20;
  pdVar1 = &this->mbr_0x18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar1 = *(dword *)puVar4;
    puVar4 = (undefined8 *)((int)puVar4 + 4);
    pdVar1 = pdVar1 + 1;
  }
  pdVar1 = (dword *)FUN_004c8a30();
  this->mbr_0x30 = *pdVar1;
  this->mbr_0x34 = pdVar1[1];
  this->mbr_0x38 = pdVar1[2];
  this->mbr_0x3c = pdVar1[3];
  local_3c = *(dword *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  this->mbr_0x60 = local_3c;
  if (0 < (int)local_3c) {
    local_40 = &this->mbr_0x40;
    do {
      local_30 = 0;
      local_2c = 0;
      local_38._0_4_ = 0;
      local_38._4_4_ = 0;
      FUN_004c93c0(param_1,(double *)&local_38,param_2);
      *local_40 = (dword)local_38;
      local_40[1] = local_38._4_4_;
      local_40[2] = local_30;
      local_3c = local_3c - 1;
      local_40[3] = local_2c;
      local_40 = local_40 + 4;
    } while (local_3c != 0);
  }
  dVar3 = *(dword *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  this->mbr_0x88 = dVar3;
  if (0 < (int)dVar3) {
    pdVar1 = &this->mbr_0x68;
    do {
      cls_0x4c8c60::meth_0x4c8c60((cls_0x4c8c60 *)pdVar1,param_1,param_2);
      pdVar1 = (dword *)(extraout_ECX + 0x10);
      dVar3 = dVar3 - 1;
    } while (dVar3 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall cls_0x4c9b30::meth_0x4cc620(cls_0x4c9b30 *this)

{
  dword *pdVar1;
  char *pcVar2;
  uint uVar3;
  double *pdVar4;
  cls_0x4cc1e0 *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *****pppppuVar8;
  byte *pbVar9;
  cls_0x4c9b30 *pcVar10;
  bool bVar11;
  bool bVar12;
  uint unaff_retaddr;
  undefined4 uVar13;
  cls_0x4c9b30 *local_188;
  undefined4 uStack_184;
  undefined local_180 [8];
  dword local_178;
  dword local_174;
  undefined4 *****local_168 [4];
  char *local_158;
  uint local_154;
  double local_150;
  double local_148;
  double local_140;
  dword local_138;
  dword local_134;
  dword local_130;
  dword local_12c;
  undefined8 local_128;
  dword local_120;
  undefined4 local_11c;
  undefined8 local_118;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  cls_0x4c8ba0 local_100;
  int local_f0 [4];
  undefined local_e0 [44];
  undefined4 *puStack_b4;
  double adStack_38 [3];
  uint local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063310c;
  local_14 = ExceptionList;
  local_1c = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_14;
  local_188 = this;
  FUN_0052ba00('{');
  this->mbr_0x60 = 0;
  this->mbr_0x88 = 0;
  pdVar1 = (dword *)FUN_0052b940(local_f0);
  local_180._4_4_ = pdVar1[1];
  local_180._0_4_ = *pdVar1;
  local_178 = pdVar1[2];
  local_174 = pdVar1[3];
  do {
    if (local_180._0_4_ == 0x7d) {
      ExceptionList = local_14;
      FUN_00616e15(local_1c ^ unaff_retaddr);
      return;
    }
    if (local_180._0_4_ == 0x100) {
      FUN_0052afe0((cls_0x50db20 *)&stack0xfffffe94);
      local_c = 0;
      pcVar6 = "Coordinate";
      do {
        pcVar2 = pcVar6;
        pcVar6 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2 = pcVar2 + -0x671a18;
      if (local_158 == (char *)0x0) {
LAB_004cc71c:
        if ((local_158 < pcVar2) || (bVar11 = local_158 != pcVar2, bVar11)) goto LAB_004cc78e;
        local_140 = (double)((ulonglong)bVar11 << 0x20);
        local_148 = (double)((ulonglong)bVar11 << 0x20);
        local_150 = (double)((ulonglong)bVar11 << 0x20);
        FUN_004c92b0(&local_150);
        local_150 = local_150 * _DAT_006fb350;
        local_148 = local_148 * _DAT_006fb350;
        local_140 = local_140 * _DAT_006fb350;
        pdVar4 = &local_150;
        pcVar10 = this;
        for (iVar7 = 6; this = local_188, iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar10->mbr_0x0 = *(dword *)pdVar4;
          pdVar4 = (double *)((int)pdVar4 + 4);
          pcVar10 = (cls_0x4c9b30 *)&pcVar10->mbr_0x4;
        }
      }
      else {
        pcVar6 = local_158;
        if (pcVar2 <= local_158) {
          pcVar6 = pcVar2;
        }
        pppppuVar8 = local_168[0];
        if (local_154 < 0x10) {
          pppppuVar8 = local_168;
        }
        bVar11 = false;
        iVar7 = 0;
        bVar12 = true;
        pbVar9 = (byte *)"Coordinate";
        do {
          if (pcVar6 == (char *)0x0) break;
          pcVar6 = pcVar6 + -1;
          bVar11 = *(byte *)pppppuVar8 < *pbVar9;
          bVar12 = *(byte *)pppppuVar8 == *pbVar9;
          pppppuVar8 = (undefined4 *****)((int)pppppuVar8 + 1);
          pbVar9 = pbVar9 + 1;
        } while (bVar12);
        if (!bVar12) {
          iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        }
        this = local_188;
        if (iVar7 == 0) goto LAB_004cc71c;
LAB_004cc78e:
        pcVar6 = "Normal";
        do {
          pcVar2 = pcVar6;
          pcVar6 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        uVar3 = ::cls_0x50db20::meth_0x41e4b0
                          ((cls_0x50db20 *)&stack0xfffffe94,0,(uint)local_158,
                           (_String_base *)"Normal",(uint)(pcVar2 + -0x671a10));
        if (uVar3 == 0) {
          local_118._0_4_ = uVar3;
          local_118._4_4_ = uVar3;
          local_110 = uVar3;
          local_10c = uVar3;
          local_108 = uVar3;
          local_104 = uVar3;
          FUN_004c92b0((double *)&local_118);
          pdVar4 = cls_0x48fda0::meth_0x48fda0((cls_0x48fda0 *)&local_118,adStack_38);
          pdVar1 = &this->mbr_0x18;
          for (iVar7 = 6; this = local_188, iVar7 != 0; iVar7 = iVar7 + -1) {
            *pdVar1 = *(dword *)pdVar4;
            pdVar4 = (double *)((int)pdVar4 + 4);
            pdVar1 = pdVar1 + 1;
          }
        }
        else {
          pcVar6 = "Color";
          do {
            pcVar2 = pcVar6;
            pcVar6 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          uVar3 = ::cls_0x50db20::meth_0x41e4b0
                            ((cls_0x50db20 *)&stack0xfffffe94,0,(uint)local_158,
                             (_String_base *)"Color",(uint)(pcVar2 + -0x671a08));
          if (uVar3 == 0) {
            pdVar1 = (dword *)FUN_004c87b0();
            this->mbr_0x30 = *pdVar1;
            this->mbr_0x34 = pdVar1[1];
            this->mbr_0x38 = pdVar1[2];
            this->mbr_0x3c = pdVar1[3];
          }
          else {
            pcVar6 = "TexCoord";
            do {
              pcVar2 = pcVar6;
              pcVar6 = pcVar2 + 1;
            } while (*pcVar2 != '\0');
            uVar3 = ::cls_0x50db20::meth_0x41e4b0
                              ((cls_0x50db20 *)&stack0xfffffe94,0,(uint)local_158,
                               (_String_base *)"TexCoord",(uint)(pcVar2 + -0x6719fc));
            if (uVar3 == 0) {
              if (1 < (int)this->mbr_0x60) {
                cls_0x4cb0a0::cls_0x4cb0a0((cls_0x4cb0a0 *)local_e0,1);
                uVar13 = 2;
                local_c._0_1_ = 1;
                pcVar5 = (cls_0x4cc1e0 *)
                         FUN_00496e00((int *)(local_e0 + 8),"Exceeded TexCoord count limit ");
                pcVar5 = cls_0x4cc1e0::cls_0x4cc1e0(pcVar5,uVar13);
                cls_0x4cc1e0::meth_0x4cc350(pcVar5,10);
                cls_0x4cc1e0::meth_0x496990(pcVar5);
                cls_0x607988::meth_0x607988((cls_0x607988 *)(local_e0 + 0xc),'\x01');
                uStack_184 = *puStack_b4;
                local_188 = (cls_0x4c9b30 *)&Exception__vftable_64787c_0064787c;
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&local_188,&DAT_006d8834);
              }
              local_130 = 0;
              local_12c = 0;
              local_138 = 0;
              local_134 = 0;
              FUN_004c9280((double *)&local_138);
              pdVar1 = &this->mbr_0x40 + this->mbr_0x60 * 4;
              *pdVar1 = local_138;
              pdVar1[1] = local_134;
              pdVar1[2] = local_130;
              pdVar1[3] = local_12c;
              this->mbr_0x60 = this->mbr_0x60 + 1;
            }
            else {
              pcVar6 = "LMCoord";
              do {
                pcVar2 = pcVar6;
                pcVar6 = pcVar2 + 1;
              } while (*pcVar2 != '\0');
              uVar3 = ::cls_0x50db20::meth_0x41e4b0
                                ((cls_0x50db20 *)&stack0xfffffe94,0,(uint)local_158,
                                 (_String_base *)&DAT_006719f4,(uint)(pcVar2 + -0x6719f4));
              if (uVar3 == 0) {
                if (1 < (int)this->mbr_0x60) {
                  cls_0x4cb0a0::cls_0x4cb0a0((cls_0x4cb0a0 *)local_e0,1);
                  uVar13 = 2;
                  local_c._0_1_ = 2;
                  pcVar5 = (cls_0x4cc1e0 *)
                           FUN_00496e00((int *)(local_e0 + 8),"Exceeded TexCoord count limit ");
                  pcVar5 = cls_0x4cc1e0::cls_0x4cc1e0(pcVar5,uVar13);
                  cls_0x4cc1e0::meth_0x4cc350(pcVar5,10);
                  cls_0x4cc1e0::meth_0x496990(pcVar5);
                  cls_0x607988::meth_0x607988((cls_0x607988 *)(local_e0 + 0xc),'\x01');
                  uStack_184 = *puStack_b4;
                  local_188 = (cls_0x4c9b30 *)&Exception__vftable_64787c_0064787c;
                    /* WARNING: Subroutine does not return */
                  __CxxThrowException_8(&local_188,&DAT_006d8834);
                }
                local_120 = 0;
                local_11c = 0;
                local_128._0_4_ = 0;
                local_128._4_4_ = 0;
                FUN_004c9280((double *)&local_128);
                FUN_004c85b0(this,this->mbr_0x60,(undefined4 *)&local_128);
                this->mbr_0x60 = this->mbr_0x60 + 1;
              }
              else {
                pcVar6 = "Bone";
                do {
                  pcVar2 = pcVar6;
                  pcVar6 = pcVar2 + 1;
                } while (*pcVar2 != '\0');
                uVar3 = ::cls_0x50db20::meth_0x41e4b0
                                  ((cls_0x50db20 *)&stack0xfffffe94,0,(uint)local_158,
                                   (_String_base *)&DAT_00671af4,(uint)(pcVar2 + -0x671af4));
                if (uVar3 == 0) {
                  if (1 < (int)this->mbr_0x88) {
                    cls_0x4cb0a0::cls_0x4cb0a0((cls_0x4cb0a0 *)local_e0,1);
                    uVar13 = 2;
                    local_c._0_1_ = 3;
                    pcVar5 = (cls_0x4cc1e0 *)
                             FUN_00496e00((int *)(local_e0 + 8),
                                          "Exceeded Bone Influence count limit ");
                    pcVar5 = cls_0x4cc1e0::cls_0x4cc1e0(pcVar5,uVar13);
                    cls_0x4cc1e0::meth_0x4cc350(pcVar5,10);
                    cls_0x4cc1e0::meth_0x496990(pcVar5);
                    cls_0x607988::meth_0x607988((cls_0x607988 *)(local_e0 + 0xc),'\x01');
                    local_180._4_4_ = *puStack_b4;
                    local_180._0_4_ = &Exception__vftable_64787c_0064787c;
                    /* WARNING: Subroutine does not return */
                    __CxxThrowException_8(local_180,&DAT_006d8834);
                  }
                  cls_0x4c8ba0::cls_0x4c8ba0(&local_100);
                  cls_0x4c8ba0::meth_0x4c8bc0(&local_100);
                  FUN_004c85e0(this,this->mbr_0x88,&local_100.mbr_0x0);
                  this->mbr_0x88 = this->mbr_0x88 + 1;
                }
                else {
                  cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_180);
                }
              }
            }
          }
        }
      }
      local_c = 0xffffffff;
      if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
        _free(local_168[0]);
      }
      local_154 = 0xf;
      local_158 = (char *)0x0;
      local_168[0] = (undefined4 *****)((uint)local_168[0] & 0xffffff00);
    }
    else {
      cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_180);
    }
    pdVar1 = (dword *)FUN_0052b940(local_f0);
    local_180._4_4_ = pdVar1[1];
    local_180._0_4_ = *pdVar1;
    local_178 = pdVar1[2];
    local_174 = pdVar1[3];
  } while( true );
}



void __thiscall cls_0x4c9b30::meth_0x4d6c70(cls_0x4c9b30 *this)

{
  if (this->mbr_0x60 != 0) {
    FUN_004310a0(this->mbr_0x60,this->mbr_0x64);
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x60);
  }
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  if (0xf < this->mbr_0x58) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x44);
  }
  this->mbr_0x58 = 0xf;
  this->mbr_0x54 = 0;
  *(undefined *)&this->mbr_0x44 = 0;
  _eh_vector_destructor_iterator_(&this->mbr_0x8,0x1c,2,cls_0x4d8d70::meth_0x4b2dd0);
  return;
}



undefined4 * __thiscall cls_0x4c9b30::meth_0x4d79b0(cls_0x4c9b30 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00633631;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (&this->mbr_0x8,0x1c,2,::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
  this->mbr_0x58 = 0xf;
  this->mbr_0x54 = 0;
  *(undefined *)&this->mbr_0x44 = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x0 = 0xffffffff;
  ExceptionList = local_c;
  return &this->mbr_0x0;
}



void __thiscall cls_0x4c9b30::meth_0x4d9930(cls_0x4c9b30 *this,FILE *param_1)

{
  FILE *_File;
  G3D_LightmapSurfaceAttribute *extraout_ECX;
  G3D_LightmapSurfaceAttribute *extraout_ECX_00;
  G3D_LightmapSurfaceAttribute *extraout_ECX_01;
  G3D_LightmapSurfaceAttribute *pGVar1;
  G3D_LightmapSurfaceAttribute *extraout_ECX_02;
  cls_0x50db20 *this_00;
  int iVar2;
  uint unaff_retaddr;
  FILE local_2c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  _File = param_1;
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_2c._tmpfname = (char *)(DAT_007062c0 ^ unaff_retaddr);
  iVar2 = 0;
  local_2c._bufsiz = 0xf;
  local_2c._charbuf = 0;
  local_2c._cnt = local_2c._cnt & 0xffffff00;
  local_4 = 0;
  ExceptionList = &local_c;
  _fread(&param_1,4,1,param_1);
  this->mbr_0x0 = (dword)param_1;
  G3D_LightmapSurfaceAttribute::meth_0x4d0450((G3D_LightmapSurfaceAttribute *)param_1,&local_2c);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x40,(_String_base *)&local_2c,0,0xffffffff);
  _fread(&param_1,4,1,_File);
  this->mbr_0x4 = (dword)param_1;
  if (0 < (int)param_1) {
    this_00 = (cls_0x50db20 *)&this->mbr_0x8;
    pGVar1 = extraout_ECX;
    do {
      G3D_LightmapSurfaceAttribute::meth_0x4d0450(pGVar1,&local_2c);
      ::cls_0x50db20::meth_0x401b20(this_00,(_String_base *)&local_2c,0,0xffffffff);
      iVar2 = iVar2 + 1;
      this_00 = (cls_0x50db20 *)&this_00->VFX_Parameter;
      pGVar1 = extraout_ECX_00;
    } while (iVar2 < (int)param_1);
  }
  _fread(&param_1,4,1,_File);
  if ((0 < (int)param_1) && (0 < (int)param_1)) {
    iVar2 = 0;
    pGVar1 = extraout_ECX_01;
    do {
      G3D_LightmapSurfaceAttribute::meth_0x4d0450(pGVar1,&local_2c);
      ::cls_0x50db20::meth_0x4c60a0((cls_0x50db20 *)&this->mbr_0x5c,(_String_base *)&local_2c);
      iVar2 = iVar2 + 1;
      pGVar1 = extraout_ECX_02;
    } while (iVar2 < (int)param_1);
  }
  if ((uint)local_2c._bufsiz < 0x10) {
    ExceptionList = local_c;
    FUN_00616e15((uint)local_2c._tmpfname ^ unaff_retaddr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)local_2c._cnt);
}



void __thiscall cls_0x4c9b30::meth_0x4d9a80(cls_0x4c9b30 *this,int param_1,int *param_2)

{
  dword dVar1;
  int *piVar2;
  int *piVar3;
  cls_0x50db20 *this_00;
  int iVar4;
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  piVar3 = param_2;
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  dVar1 = *(dword *)(*param_2 + param_1);
  ExceptionList = &local_c;
  *param_2 = *param_2 + 4;
  local_4 = 0;
  this->mbr_0x0 = dVar1;
  FUN_004d0510((cls_0x50db20 *)local_2c,param_1,param_2);
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x40,local_2c,0,0xffffffff);
  piVar2 = *(int **)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  this->mbr_0x4 = (dword)piVar2;
  if (0 < (int)piVar2) {
    this_00 = (cls_0x50db20 *)&this->mbr_0x8;
    param_2 = piVar2;
    do {
      FUN_004d0510((cls_0x50db20 *)local_2c,param_1,piVar3);
      ::cls_0x50db20::meth_0x401b20(this_00,local_2c,0,0xffffffff);
      this_00 = (cls_0x50db20 *)&this_00->VFX_Parameter;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
  }
  iVar4 = *(int *)(*piVar3 + param_1);
  *piVar3 = *piVar3 + 4;
  if (0 < iVar4) {
    do {
      FUN_004d0510((cls_0x50db20 *)local_2c,param_1,piVar3);
      ::cls_0x50db20::meth_0x4c60a0((cls_0x50db20 *)&this->mbr_0x5c,local_2c);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x4c9b30::meth_0x4d9bb0(cls_0x4c9b30 *this,FILE *param_1)

{
  FILE *_File;
  uint uVar1;
  int iVar2;
  char local_9;
  uint local_8;
  undefined4 local_4;
  
  _File = param_1;
  meth_0x4d9930(this,param_1);
  _fread(&param_1,1,1,_File);
  this->mbr_0x6c = ((uint)param_1 & 0xff) - 0xc9;
  _fread(&local_8,4,1,_File);
  uVar1 = local_8;
  cls_0x40cc80::meth_0x421370((cls_0x40cc80 *)&this->mbr_0x70,local_8);
  cls_0x431000::meth_0x4d6e20((cls_0x431000 *)&this->mbr_0x80,uVar1);
  if (0 < (int)local_8) {
    iVar2 = 0;
    do {
      _fread(&local_4,4,1,_File);
      *(undefined4 *)(this->mbr_0x74 + iVar2 * 4) = local_4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_8);
  }
  iVar2 = 0;
  if (0 < (int)local_8) {
    do {
      _fread(&local_9,1,1,_File);
      *(bool *)(iVar2 + this->mbr_0x84) = local_9 != '\0';
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_8);
  }
  return;
}



void __thiscall cls_0x4c9b30::meth_0x4d9c90(cls_0x4c9b30 *this,int param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  meth_0x4d9a80(this,param_1,param_2);
  bVar1 = *(byte *)(*param_2 + param_1);
  *param_2 = *param_2 + 1;
  this->mbr_0x6c = bVar1 - 0xc9;
  uVar3 = *(uint *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  cls_0x40cc80::meth_0x421370((cls_0x40cc80 *)&this->mbr_0x70,uVar3);
  cls_0x431000::meth_0x4d6e20((cls_0x431000 *)&this->mbr_0x80,uVar3);
  iVar5 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar4 = *(undefined4 *)(*param_2 + param_1);
      *param_2 = *param_2 + 4;
      *(undefined4 *)(this->mbr_0x74 + iVar5 * 4) = uVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar3);
  }
  iVar5 = 0;
  if (0 < (int)uVar3) {
    do {
      cVar2 = *(char *)(*param_2 + param_1);
      *param_2 = *param_2 + 1;
      *(bool *)(iVar5 + this->mbr_0x84) = cVar2 != '\0';
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar3);
  }
  return;
}


