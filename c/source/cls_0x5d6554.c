#include "../include/cls_0x5d6554.h"

void __thiscall cls_0x5d6554::meth_0x482e43(cls_0x5d6554 *this)

{
  if ((void *)this->mbr_0x0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x0);
  }
  return;
}



undefined4 __thiscall cls_0x5d6554::meth_0x482e51(cls_0x5d6554 *this,undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (this->mbr_0x4 == this->mbr_0x8) {
    puVar1 = (undefined4 *)operator_new(this->mbr_0x8 * 4 + 0x40);
    if (puVar1 == (undefined4 *)0x0) {
      this->mbr_0xc = 0x8007000e;
      return 0x8007000e;
    }
    if ((undefined4 *)this->mbr_0x0 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)this->mbr_0x0;
      for (uVar2 = this->mbr_0x4 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar1 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined *)puVar1 = *(undefined *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x0);
    }
    this->mbr_0x8 = this->mbr_0x8 + 0x10;
    this->mbr_0x0 = (dword)puVar1;
  }
  *(undefined4 *)(this->mbr_0x0 + this->mbr_0x4 * 4) = param_1;
  this->mbr_0x4 = this->mbr_0x4 + 1;
  return 0;
}



undefined4 __thiscall cls_0x5d6554::meth_0x482f03(cls_0x5d6554 *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if (this->mbr_0x4 == this->mbr_0x8) {
    puVar2 = (undefined4 *)operator_new(this->mbr_0x8 * 4 + 0x40);
    if (puVar2 != (undefined4 *)0x0) {
      if ((undefined4 *)this->mbr_0x0 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)this->mbr_0x0;
        for (uVar4 = this->mbr_0x4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar2 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar2 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined *)puVar2 = *(undefined *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0x0);
      }
      this->mbr_0x8 = this->mbr_0x8 + 0x10;
      this->mbr_0x0 = (dword)puVar2;
      goto LAB_00482f4f;
    }
LAB_00482f74:
    uVar3 = 0x8007000e;
    this->mbr_0xc = 0x8007000e;
  }
  else {
LAB_00482f4f:
    if (param_1 == (undefined4 *)0x0) {
      *(undefined4 *)(this->mbr_0x0 + this->mbr_0x4 * 4) = 0;
    }
    else {
      puVar2 = param_1;
      do {
        cVar1 = *(char *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      } while (cVar1 != '\0');
      uVar4 = (int)puVar2 - ((int)param_1 + 1);
      puVar2 = (undefined4 *)operator_new(uVar4 + 1);
      if (puVar2 == (undefined4 *)0x0) goto LAB_00482f74;
      puVar7 = puVar2;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar7 = *param_1;
        param_1 = param_1 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)puVar7 = *(undefined *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined *)((int)puVar2 + uVar4) = 0;
      this->mbr_0x10 = this->mbr_0x10 + uVar4;
      *(undefined4 **)(this->mbr_0x0 + this->mbr_0x4 * 4) = puVar2;
    }
    this->mbr_0x4 = this->mbr_0x4 + 1;
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 __thiscall cls_0x5d6554::meth_0x482fb6(cls_0x5d6554 *this,undefined4 *param_1)

{
  undefined4 uVar1;
  dword dVar2;
  
  if (this->mbr_0x4 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    uVar1 = 0x80004005;
    this->mbr_0xc = 0x80004005;
  }
  else {
    dVar2 = this->mbr_0x4 - 1;
    this->mbr_0x4 = dVar2;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(this->mbr_0x0 + dVar2 * 4);
    }
    uVar1 = 0;
  }
  return uVar1;
}



dword __thiscall cls_0x5d6554::Get_mbr_0xc_set_to_0(cls_0x5d6554 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0xc;
  this->mbr_0xc = 0;
  return dVar1;
}



undefined4 __thiscall cls_0x5d6554::meth_0x482ff2(cls_0x5d6554 *this)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  undefined4 uVar4;
  cls_0x668f10 *pcVar5;
  int3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar6;
  int *extraout_ECX;
  void *this_00;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int unaff_EBP;
  undefined4 *puVar10;
  
  FUN_0061781c();
  **(undefined4 **)(unaff_EBP + 8) = 0;
  if (extraout_ECX[4] == 0) {
    uVar4 = 0;
  }
  else {
    pcVar5 = (cls_0x668f10 *)operator_new(0x10);
    *(cls_0x668f10 **)(unaff_EBP + -0x18) = pcVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pcVar5 == (cls_0x668f10 *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      pcVar5 = (cls_0x668f10 *)0x0;
    }
    else {
      pcVar5 = cls_0x668f10::cls_0x668f10(pcVar5);
      *(cls_0x668f10 **)(unaff_EBP + -0x14) = pcVar5;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (pcVar5 == (cls_0x668f10 *)0x0) {
      uVar4 = 0x8007000e;
    }
    else {
      uVar3 = (*pcVar5->vftptr_0x0->virt_meth_0x482328_24)(pcVar5);
      *(uint *)(unaff_EBP + -0x10) = CONCAT31(extraout_var,uVar3);
      if (extraout_var < 0) {
        (*pcVar5->vftptr_0x0->virt_meth_0x482385_20)(pcVar5,1);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x10);
      }
      else {
        uVar3 = (*pcVar5->vftptr_0x0->virt_meth_0x48237b_12)(this_00);
        puVar6 = (undefined4 *)CONCAT31(extraout_var_00,uVar3);
        iVar2 = extraout_ECX[1];
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar2 != 0) {
          do {
            puVar10 = *(undefined4 **)(*extraout_ECX + *(int *)(unaff_EBP + -0x10) * 4);
            if (puVar10 != (undefined4 *)0x0) {
              puVar7 = puVar10;
              do {
                cVar1 = *(char *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
              } while (cVar1 != '\0');
              uVar8 = (int)puVar7 - (int)((int)puVar10 + 1);
              *(uint *)(unaff_EBP + -0x18) = uVar8;
              puVar7 = puVar6;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar7 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar7 = puVar7 + 1;
              }
              for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined *)puVar7 = *(undefined *)puVar10;
                puVar10 = (undefined4 *)((int)puVar10 + 1);
                puVar7 = (undefined4 *)((int)puVar7 + 1);
              }
              pcVar5 = *(cls_0x668f10 **)(unaff_EBP + -0x14);
              *(undefined *)((int)puVar6 + uVar8) = 10;
              puVar6 = (undefined4 *)((undefined *)((int)puVar6 + uVar8) + 1);
            }
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          } while (*(uint *)(unaff_EBP + -0x10) < (uint)extraout_ECX[1]);
        }
        *(undefined *)puVar6 = 0;
        **(cls_0x668f10 ***)(unaff_EBP + 8) = pcVar5;
        uVar4 = 0;
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}



cls_0x5d6554 * __thiscall cls_0x5d6554::cls_0x5d6554(cls_0x5d6554 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  return this;
}



undefined4 __thiscall cls_0x5d6554::meth_0x5d6564(cls_0x5d6554 *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x8;
  if ((piVar1 != (int *)0x0) || (piVar1 = (int *)this->mbr_0x4, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x28))(piVar1);
  }
  if ((((this->mbr_0x4 != 0) && (this->mbr_0x8 != 0)) &&
      (piVar1 = (int *)this->mbr_0xc, piVar1 != (int *)0x0)) && ((*(byte *)&this->mbr_0x0 & 1) == 0)
     ) {
    (**(code **)(*piVar1 + 0x70))(piVar1,this->mbr_0x8,0,0,this->mbr_0x4,0);
  }
  piVar1 = (int *)this->mbr_0x8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x8 = 0;
  }
  piVar1 = (int *)this->mbr_0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xc = 0;
  }
  this->mbr_0x4 = 0;
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

int __thiscall
cls_0x5d6554::meth_0x5d65ee
          (cls_0x5d6554 *this,undefined4 *param_1,int *param_2,undefined4 param_3,uint *param_4,
          undefined4 param_5,uint param_6)

{
  dword *pdVar1;
  bool bVar2;
  cls_0x5d6554 *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  dword *pdVar8;
  int local_64 [2];
  uint local_5c;
  int local_58;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  cls_0x5d6554 *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_1c = this;
  meth_0x5d6564(this);
  (**(code **)(*param_2 + 0x20))(param_2,local_64);
  if (param_4 == (uint *)0x0) {
    local_2c = local_4c;
    local_28 = local_48;
    local_c = ~param_6 & 1;
    local_34 = 0;
    local_30 = 0;
    bVar2 = false;
  }
  else {
    local_34 = *param_4;
    local_30 = param_4[1];
    local_2c = param_4[2];
    local_28 = param_4[3];
    if (((((int)local_34 < 0) || (local_4c < local_2c)) || ((int)local_2c < (int)local_34)) ||
       ((((int)local_30 < 0 || (local_48 < local_28)) || ((int)local_28 < (int)local_30)))) {
      return -0x7789f794;
    }
    if (((local_34 != 0) || (local_2c != local_4c)) ||
       ((local_30 != 0 || (bVar2 = false, local_28 != local_48)))) {
      bVar2 = true;
    }
    if (((param_6 & 1) != 0) || (bVar2)) {
      local_c = 0;
    }
    else {
      local_c = 1;
    }
  }
  local_8 = param_6 & 0x10000;
  if (local_8 == 0) {
    if ((local_58 == 0) && ((local_5c & 0x200) == 0)) {
      FUN_00482400(1);
      iVar6 = (**(code **)(*param_2 + 0x1c))(param_2,&DAT_00668fac,&local_18);
      if (iVar6 < 0) {
        local_5c = param_2[4];
        local_8 = ~(local_5c >> 0x1a) & 1;
      }
      else {
        local_8 = 1;
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))(local_18);
          local_18 = (int *)0x0;
        }
      }
      FUN_00482400(0);
      if (local_8 != 0) goto LAB_005d6716;
    }
    local_14 = param_2;
  }
  else {
LAB_005d6716:
    pcVar3 = local_1c;
    if ((((local_64[0] == 0x31545844) || (local_64[0] == 0x32545844)) || (local_64[0] == 0x33545844)
        ) || ((local_64[0] == 0x34545844 ||
              (local_14 = (int *)local_48, uVar7 = local_4c, local_64[0] == 0x35545844)))) {
      local_14 = (int *)(local_48 + 3 & 0xfffffffc);
      uVar7 = local_4c + 3 & 0xfffffffc;
    }
    pdVar1 = &local_1c->mbr_0xc;
    (**(code **)(*param_2 + 0xc))(param_2,pdVar1);
    pdVar8 = &pcVar3->mbr_0x8;
    iVar6 = (**(code **)(*(int *)*pdVar1 + 0x6c))((int *)*pdVar1,uVar7,local_14,local_64[0],pdVar8);
    if (iVar6 < 0) {
      return iVar6;
    }
    if ((local_c == 0) &&
       (iVar6 = (**(code **)(*(int *)*pdVar1 + 0x70))((int *)*pdVar1,param_2,0,0,*pdVar8,0),
       iVar6 < 0)) {
      return iVar6;
    }
    local_14 = (int *)*pdVar8;
  }
  uVar7 = (param_6 & 1 | 0x80) << 4;
  if (((local_c == 0) || (local_8 != 0)) || ((local_5c & 0x200) == 0)) {
LAB_005d6833:
    uVar4 = local_44;
    uVar5 = local_40;
    if (bVar2) {
      if ((local_64[0] == 0x31545844) || (local_64[0] == 0x32545844)) {
LAB_005d68bb:
        local_44 = local_34 & 0xfffffffc;
        local_3c = local_2c + 3 & 0xfffffffc;
        local_40 = local_30 & 0xfffffffc;
        local_38 = local_28 + 3 & 0xfffffffc;
        if (local_8 != 0) {
          if ((((local_44 != 0) || (local_3c != (local_4c + 3 & 0xfffffffc))) || (local_40 != 0)) ||
             (uVar4 = local_44, uVar5 = local_40, local_38 != (local_48 + 3 & 0xfffffffc))) {
            bVar2 = true;
            goto LAB_005d69d9;
          }
          goto LAB_005d69e6;
        }
        if (local_4c < local_3c) {
          local_3c = local_4c;
        }
        if (local_48 < local_38) {
          local_38 = local_48;
        }
joined_r0x005d6906:
        if (((local_44 == 0) && (local_3c == local_4c)) && (local_40 == 0)) {
          uVar4 = 0;
          uVar5 = 0;
          if (local_38 == local_48) goto LAB_005d69e6;
        }
      }
      else {
        if (local_64[0] == 0x32595559) {
LAB_005d687f:
          local_44 = local_34 & 0xfffffffe;
          local_3c = local_2c + 1 & 0xfffffffe;
          local_40 = local_30;
          local_38 = local_28;
          if (local_4c < local_3c) {
            local_3c = local_4c;
          }
          goto joined_r0x005d6906;
        }
        if (((local_64[0] == 0x33545844) || (local_64[0] == 0x34545844)) ||
           (local_64[0] == 0x35545844)) goto LAB_005d68bb;
        if (local_64[0] == 0x59565955) goto LAB_005d687f;
        local_44 = local_34;
        local_40 = local_30;
        local_3c = local_2c;
        local_38 = local_28;
LAB_005d69d9:
        uVar4 = local_44;
        uVar5 = local_40;
        if (!bVar2) goto LAB_005d69e6;
      }
      iVar6 = (**(code **)(*local_14 + 0x24))(local_14,&local_24,&local_44,uVar7);
      if (iVar6 < 0) {
        return iVar6;
      }
      local_34 = local_34 - local_44;
      local_2c = local_2c - local_44;
      local_30 = local_30 - local_40;
      local_28 = local_28 - local_40;
      goto LAB_005d6944;
    }
  }
  else {
    if ((param_6 & 0x20000) == 0) {
      FUN_00482400(1);
      iVar6 = (**(code **)(*param_2 + 0x1c))(param_2,&DAT_00668f9c,&local_10);
      if (-1 < iVar6) {
        iVar6 = (**(code **)(*local_10 + 0x34))(local_10);
        if (iVar6 == 1) {
          uVar7 = uVar7 | 0x2000;
          bVar2 = false;
        }
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 8))(local_10);
          local_10 = (int *)0x0;
        }
      }
      FUN_00482400(0);
      goto LAB_005d6833;
    }
    uVar7 = uVar7 | 0x2000;
    uVar4 = local_44;
    uVar5 = local_40;
  }
LAB_005d69e6:
  local_40 = uVar5;
  local_44 = uVar4;
  iVar6 = (**(code **)(*local_14 + 0x24))(local_14,&local_24,0,uVar7);
  if (iVar6 < 0) {
    return iVar6;
  }
LAB_005d6944:
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[0xe] = 0;
  *param_1 = local_20;
  param_1[1] = local_64[0];
  param_1[10] = local_34;
  param_1[0xf] = 1;
  param_1[0x10] = 1;
  param_1[2] = local_24;
  param_1[0xb] = local_30;
  param_1[0x11] = param_5;
  param_1[6] = local_4c;
  param_1[0xc] = local_2c;
  param_1[0x12] = param_3;
  param_1[7] = local_48;
  param_1[9] = 1;
  param_1[0xd] = local_28;
  local_1c->mbr_0x4 = (dword)param_2;
  local_1c->mbr_0x0 = param_6;
  return 0;
}



undefined4 __thiscall cls_0x5d6554::meth_0x5dc422(cls_0x5d6554 *this)

{
  dword *pdVar1;
  undefined4 uVar2;
  uint uVar3;
  dword dVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  dword *pdVar8;
  char *pcVar9;
  undefined **ppuVar10;
  bool bVar11;
  undefined auStack_f8 [184];
  dword dStack_40;
  dword local_30 [4];
  uint local_20;
  dword *local_1c;
  dword *local_18;
  dword *local_14;
  dword *local_10;
  cls_0x5d6554 *local_c;
  dword local_8;
  
  local_c = this;
  local_8 = 0;
  local_10 = (dword *)0x0;
  local_18 = (dword *)0x0;
  local_14 = (dword *)0x0;
  local_1c = (dword *)0x0;
  pdVar8 = &this->mbr_0xc8;
  for (pdVar1 = pdVar8; (*(char *)pdVar1 != '\0' && (*(char *)pdVar1 != '_'));
      pdVar1 = (dword *)((int)pdVar1 + 1)) {
  }
  if (*(char *)pdVar1 != '\0') {
    local_18 = (dword *)((int)pdVar1 + 1);
    local_10 = local_18;
    for (; (*(char *)local_18 != '\0' && (*(char *)local_18 != '_'));
        local_18 = (dword *)((int)local_18 + 1)) {
    }
    if (*(char *)local_18 != '\0') {
      local_1c = (dword *)((int)local_18 + 1);
      local_14 = local_1c;
      for (; *(char *)local_1c != '\0'; local_1c = (dword *)((int)local_1c + 1)) {
      }
    }
  }
  uVar7 = (int)pdVar1 - (int)pdVar8;
  if (0xf < uVar7) {
    return 0x109;
  }
  pdVar1 = local_30;
  for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pdVar1 = *pdVar8;
    pdVar8 = pdVar8 + 1;
    pdVar1 = pdVar1 + 1;
  }
  for (uVar3 = uVar7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)pdVar1 = *(undefined *)pdVar8;
    pdVar8 = (dword *)((int)pdVar8 + 1);
    pdVar1 = (dword *)((int)pdVar1 + 1);
  }
  *(undefined *)((int)local_30 + uVar7) = 0;
  dStack_40 = 4;
  bVar11 = true;
  dVar4 = dStack_40;
  pdVar1 = local_30;
  ppuVar10 = &PTR_DAT_006b8980;
  do {
    if (dVar4 == 0) break;
    dVar4 = dVar4 - 1;
    bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
    pdVar1 = (dword *)((int)pdVar1 + 1);
    ppuVar10 = (undefined **)((int)ppuVar10 + 1);
  } while (bVar11);
  if (bVar11) {
    dStack_40 = 0;
LAB_005dc817:
    uVar2 = 0x104;
  }
  else {
    bVar11 = true;
    dVar4 = dStack_40;
    pdVar1 = local_30;
    pcVar9 = "mov";
    do {
      if (dVar4 == 0) break;
      dVar4 = dVar4 - 1;
      bVar11 = *(char *)pdVar1 == *pcVar9;
      pdVar1 = (dword *)((int)pdVar1 + 1);
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      dStack_40 = 1;
      goto LAB_005dca09;
    }
    bVar11 = true;
    dVar4 = dStack_40;
    pdVar1 = local_30;
    ppuVar10 = &PTR_PTR_DAT_006b8978;
    do {
      if (dVar4 == 0) break;
      dVar4 = dVar4 - 1;
      bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
      pdVar1 = (dword *)((int)pdVar1 + 1);
      ppuVar10 = (undefined **)((int)ppuVar10 + 1);
    } while (bVar11);
    if (bVar11) {
      dStack_40 = 2;
      dVar4 = dStack_40;
    }
    else {
      bVar11 = true;
      dVar4 = dStack_40;
      pdVar1 = local_30;
      pcVar9 = "sub";
      do {
        if (dVar4 == 0) break;
        dVar4 = dVar4 - 1;
        bVar11 = *(char *)pdVar1 == *pcVar9;
        pdVar1 = (dword *)((int)pdVar1 + 1);
        pcVar9 = pcVar9 + 1;
      } while (bVar11);
      dVar4 = 3;
      if (!bVar11) {
        bVar11 = true;
        dVar4 = dStack_40;
        pdVar1 = local_30;
        ppuVar10 = &PTR_LAB_006b8970;
        do {
          if (dVar4 == 0) break;
          dVar4 = dVar4 - 1;
          bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
          pdVar1 = (dword *)((int)pdVar1 + 1);
          ppuVar10 = (undefined **)((int)ppuVar10 + 1);
        } while (bVar11);
        if (bVar11) goto LAB_005dc5bb;
        bVar11 = true;
        dVar4 = dStack_40;
        pdVar1 = local_30;
        ppuVar10 = &PTR_s_t_make_any_assumptions_about_thi_006b896c;
        do {
          if (dVar4 == 0) break;
          dVar4 = dVar4 - 1;
          bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
          pdVar1 = (dword *)((int)pdVar1 + 1);
          ppuVar10 = (undefined **)((int)ppuVar10 + 1);
        } while (bVar11);
        if (bVar11) {
          dStack_40 = 5;
          dVar4 = dStack_40;
        }
        else {
          bVar11 = true;
          dVar4 = dStack_40;
          pdVar1 = local_30;
          pcVar9 = "dp3";
          do {
            if (dVar4 == 0) break;
            dVar4 = dVar4 - 1;
            bVar11 = *(char *)pdVar1 == *pcVar9;
            pdVar1 = (dword *)((int)pdVar1 + 1);
            pcVar9 = pcVar9 + 1;
          } while (bVar11);
          if (bVar11) {
            dStack_40 = 8;
            dVar4 = dStack_40;
          }
          else {
            bVar11 = true;
            dVar4 = dStack_40;
            pdVar1 = local_30;
            pcVar9 = "dp4";
            do {
              if (dVar4 == 0) break;
              dVar4 = dVar4 - 1;
              bVar11 = *(char *)pdVar1 == *pcVar9;
              pdVar1 = (dword *)((int)pdVar1 + 1);
              pcVar9 = pcVar9 + 1;
            } while (bVar11);
            if (!bVar11) {
              bVar11 = true;
              dVar4 = dStack_40;
              pdVar1 = local_30;
              pcVar9 = "frc";
              do {
                if (dVar4 == 0) break;
                dVar4 = dVar4 - 1;
                bVar11 = *(char *)pdVar1 == *pcVar9;
                pdVar1 = (dword *)((int)pdVar1 + 1);
                pcVar9 = pcVar9 + 1;
              } while (bVar11);
              if (bVar11) {
                dStack_40 = 0x13;
              }
              else {
                if (local_c->mbr_0xac != 0) {
                  bVar11 = true;
                  dVar4 = dStack_40;
                  pdVar1 = local_30;
                  ppuVar10 = &PTR_DAT_006b895c;
                  do {
                    if (dVar4 == 0) break;
                    dVar4 = dVar4 - 1;
                    bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
                    pdVar1 = (dword *)((int)pdVar1 + 1);
                    ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                  } while (bVar11);
                  if (bVar11) {
                    dStack_40 = 0x12;
                  }
                  else {
                    bVar11 = true;
                    dVar4 = dStack_40;
                    pdVar1 = local_30;
                    ppuVar10 = &PTR_LAB_00646e62_1_006b8958;
                    do {
                      if (dVar4 == 0) break;
                      dVar4 = dVar4 - 1;
                      bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
                      pdVar1 = (dword *)((int)pdVar1 + 1);
                      ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                    } while (bVar11);
                    if (bVar11) {
                      dStack_40 = 0x50;
                    }
                    else {
                      bVar11 = true;
                      dVar4 = dStack_40;
                      pdVar1 = local_30;
                      ppuVar10 = &PTR_DAT_006b8950;
                      do {
                        if (dVar4 == 0) break;
                        dVar4 = dVar4 - 1;
                        bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
                        pdVar1 = (dword *)((int)pdVar1 + 1);
                        ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                      } while (bVar11);
                      if (!bVar11) {
                        if (local_c->mbr_0xb4 < 0xffff0104) {
                          iVar5 = 9;
                          bVar11 = true;
                          pdVar1 = local_30;
                          pcVar9 = "texcoord";
                          do {
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            bVar11 = *(char *)pdVar1 == *pcVar9;
                            pdVar1 = (dword *)((int)pdVar1 + 1);
                            pcVar9 = pcVar9 + 1;
                          } while (bVar11);
                          if (bVar11) {
                            dStack_40 = 0x40;
                          }
                          else {
                            iVar5 = 8;
                            bVar11 = true;
                            pdVar1 = local_30;
                            pcVar9 = "texkill";
                            do {
                              if (iVar5 == 0) break;
                              iVar5 = iVar5 + -1;
                              bVar11 = *(char *)pdVar1 == *pcVar9;
                              pdVar1 = (dword *)((int)pdVar1 + 1);
                              pcVar9 = pcVar9 + 1;
                            } while (bVar11);
                            if (bVar11) {
LAB_005dc67a:
                              dStack_40 = 0x41;
                            }
                            else {
                              bVar11 = true;
                              dVar4 = dStack_40;
                              pdVar1 = local_30;
                              pcVar9 = "tex";
                              do {
                                if (dVar4 == 0) break;
                                dVar4 = dVar4 - 1;
                                bVar11 = *(char *)pdVar1 == *pcVar9;
                                pdVar1 = (dword *)((int)pdVar1 + 1);
                                pcVar9 = pcVar9 + 1;
                              } while (bVar11);
                              if (!bVar11) {
                                iVar5 = 7;
                                bVar11 = true;
                                pdVar1 = local_30;
                                pcVar9 = "texbem";
                                do {
                                  if (iVar5 == 0) break;
                                  iVar5 = iVar5 + -1;
                                  bVar11 = *(char *)pdVar1 == *pcVar9;
                                  pdVar1 = (dword *)((int)pdVar1 + 1);
                                  pcVar9 = pcVar9 + 1;
                                } while (bVar11);
                                if (bVar11) {
                                  dStack_40 = 0x43;
                                }
                                else {
                                  iVar5 = 8;
                                  bVar11 = true;
                                  pdVar1 = local_30;
                                  pcVar9 = "texbeml";
                                  do {
                                    if (iVar5 == 0) break;
                                    iVar5 = iVar5 + -1;
                                    bVar11 = *(char *)pdVar1 == *pcVar9;
                                    pdVar1 = (dword *)((int)pdVar1 + 1);
                                    pcVar9 = pcVar9 + 1;
                                  } while (bVar11);
                                  if (bVar11) {
                                    dStack_40 = 0x44;
                                  }
                                  else {
                                    iVar5 = 10;
                                    bVar11 = true;
                                    pdVar1 = local_30;
                                    pcVar9 = "texreg2ar";
                                    do {
                                      if (iVar5 == 0) break;
                                      iVar5 = iVar5 + -1;
                                      bVar11 = *(char *)pdVar1 == *pcVar9;
                                      pdVar1 = (dword *)((int)pdVar1 + 1);
                                      pcVar9 = pcVar9 + 1;
                                    } while (bVar11);
                                    if (bVar11) {
                                      dStack_40 = 0x45;
                                    }
                                    else {
                                      iVar5 = 10;
                                      bVar11 = true;
                                      pdVar1 = local_30;
                                      pcVar9 = "texreg2gb";
                                      do {
                                        if (iVar5 == 0) break;
                                        iVar5 = iVar5 + -1;
                                        bVar11 = *(char *)pdVar1 == *pcVar9;
                                        pdVar1 = (dword *)((int)pdVar1 + 1);
                                        pcVar9 = pcVar9 + 1;
                                      } while (bVar11);
                                      if (bVar11) {
                                        dStack_40 = 0x46;
                                      }
                                      else {
                                        iVar5 = 0xb;
                                        bVar11 = true;
                                        pdVar1 = local_30;
                                        pcVar9 = "texm3x2pad";
                                        do {
                                          if (iVar5 == 0) break;
                                          iVar5 = iVar5 + -1;
                                          bVar11 = *(char *)pdVar1 == *pcVar9;
                                          pdVar1 = (dword *)((int)pdVar1 + 1);
                                          pcVar9 = pcVar9 + 1;
                                        } while (bVar11);
                                        if (bVar11) {
                                          dStack_40 = 0x47;
                                        }
                                        else {
                                          iVar5 = 0xb;
                                          bVar11 = true;
                                          pdVar1 = local_30;
                                          pcVar9 = "texm3x2tex";
                                          do {
                                            if (iVar5 == 0) break;
                                            iVar5 = iVar5 + -1;
                                            bVar11 = *(char *)pdVar1 == *pcVar9;
                                            pdVar1 = (dword *)((int)pdVar1 + 1);
                                            pcVar9 = pcVar9 + 1;
                                          } while (bVar11);
                                          if (bVar11) {
                                            dStack_40 = 0x48;
                                          }
                                          else {
                                            iVar5 = 0xb;
                                            bVar11 = true;
                                            pdVar1 = local_30;
                                            pcVar9 = "texm3x3pad";
                                            do {
                                              if (iVar5 == 0) break;
                                              iVar5 = iVar5 + -1;
                                              bVar11 = *(char *)pdVar1 == *pcVar9;
                                              pdVar1 = (dword *)((int)pdVar1 + 1);
                                              pcVar9 = pcVar9 + 1;
                                            } while (bVar11);
                                            if (bVar11) {
                                              dStack_40 = 0x49;
                                            }
                                            else {
                                              iVar5 = 0xb;
                                              bVar11 = true;
                                              pdVar1 = local_30;
                                              pcVar9 = "texm3x3tex";
                                              do {
                                                if (iVar5 == 0) break;
                                                iVar5 = iVar5 + -1;
                                                bVar11 = *(char *)pdVar1 == *pcVar9;
                                                pdVar1 = (dword *)((int)pdVar1 + 1);
                                                pcVar9 = pcVar9 + 1;
                                              } while (bVar11);
                                              if (bVar11) {
                                                dStack_40 = 0x4a;
                                              }
                                              else {
                                                iVar5 = 0xc;
                                                bVar11 = true;
                                                pdVar1 = local_30;
                                                pcVar9 = "texm3x3spec";
                                                do {
                                                  if (iVar5 == 0) break;
                                                  iVar5 = iVar5 + -1;
                                                  bVar11 = *(char *)pdVar1 == *pcVar9;
                                                  pdVar1 = (dword *)((int)pdVar1 + 1);
                                                  pcVar9 = pcVar9 + 1;
                                                } while (bVar11);
                                                if (bVar11) {
                                                  dStack_40 = 0x4c;
                                                  dVar4 = dStack_40;
                                                  goto LAB_005dc9ec;
                                                }
                                                iVar5 = 0xd;
                                                bVar11 = true;
                                                pdVar1 = local_30;
                                                pcVar9 = "texm3x3vspec";
                                                do {
                                                  if (iVar5 == 0) break;
                                                  iVar5 = iVar5 + -1;
                                                  bVar11 = *(char *)pdVar1 == *pcVar9;
                                                  pdVar1 = (dword *)((int)pdVar1 + 1);
                                                  pcVar9 = pcVar9 + 1;
                                                } while (bVar11);
                                                if (bVar11) {
                                                  dStack_40 = 0x4d;
                                                }
                                                else {
                                                  iVar5 = 0xd;
                                                  bVar11 = true;
                                                  pdVar1 = local_30;
                                                  pcVar9 = "texm3x2depth";
                                                  do {
                                                    if (iVar5 == 0) break;
                                                    iVar5 = iVar5 + -1;
                                                    bVar11 = *(char *)pdVar1 == *pcVar9;
                                                    pdVar1 = (dword *)((int)pdVar1 + 1);
                                                    pcVar9 = pcVar9 + 1;
                                                  } while (bVar11);
                                                  if (bVar11) {
                                                    dStack_40 = 0x54;
                                                  }
                                                  else {
                                                    iVar5 = 7;
                                                    bVar11 = true;
                                                    pdVar1 = local_30;
                                                    pcVar9 = "texdp3";
                                                    do {
                                                      if (iVar5 == 0) break;
                                                      iVar5 = iVar5 + -1;
                                                      bVar11 = *(char *)pdVar1 == *pcVar9;
                                                      pdVar1 = (dword *)((int)pdVar1 + 1);
                                                      pcVar9 = pcVar9 + 1;
                                                    } while (bVar11);
                                                    if (bVar11) {
                                                      dStack_40 = 0x55;
                                                    }
                                                    else {
                                                      iVar5 = 0xb;
                                                      bVar11 = true;
                                                      pdVar1 = local_30;
                                                      pcVar9 = "texreg2rgb";
                                                      do {
                                                        if (iVar5 == 0) break;
                                                        iVar5 = iVar5 + -1;
                                                        bVar11 = *(char *)pdVar1 == *pcVar9;
                                                        pdVar1 = (dword *)((int)pdVar1 + 1);
                                                        pcVar9 = pcVar9 + 1;
                                                      } while (bVar11);
                                                      if (bVar11) {
                                                        dStack_40 = 0x52;
                                                      }
                                                      else {
                                                        iVar5 = 8;
                                                        bVar11 = true;
                                                        pdVar1 = local_30;
                                                        pcVar9 = "texm3x3";
                                                        do {
                                                          if (iVar5 == 0) break;
                                                          iVar5 = iVar5 + -1;
                                                          bVar11 = *(char *)pdVar1 == *pcVar9;
                                                          pdVar1 = (dword *)((int)pdVar1 + 1);
                                                          pcVar9 = pcVar9 + 1;
                                                        } while (bVar11);
                                                        if (bVar11) {
                                                          dStack_40 = 0x56;
                                                        }
                                                        else {
                                                          iVar5 = 10;
                                                          bVar11 = true;
                                                          pdVar1 = local_30;
                                                          pcVar9 = "texdp3tex";
                                                          do {
                                                            if (iVar5 == 0) break;
                                                            iVar5 = iVar5 + -1;
                                                            bVar11 = *(char *)pdVar1 == *pcVar9;
                                                            pdVar1 = (dword *)((int)pdVar1 + 1);
                                                            pcVar9 = pcVar9 + 1;
                                                          } while (bVar11);
                                                          if (!bVar11) goto LAB_005dc89b;
                                                          dStack_40 = 0x53;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_005dca09;
                              }
                              dStack_40 = 0x42;
                            }
                          }
LAB_005dc861:
                          uVar2 = 0x105;
                          goto LAB_005dc5c0;
                        }
                        iVar5 = 6;
                        bVar11 = true;
                        pdVar1 = local_30;
                        pcVar9 = "phase";
                        do {
                          if (iVar5 == 0) break;
                          iVar5 = iVar5 + -1;
                          bVar11 = *(char *)pdVar1 == *pcVar9;
                          pdVar1 = (dword *)((int)pdVar1 + 1);
                          pcVar9 = pcVar9 + 1;
                        } while (bVar11);
                        if (bVar11) {
                          dStack_40 = 0xfffd;
                          goto LAB_005dc817;
                        }
                        iVar5 = 7;
                        bVar11 = true;
                        pdVar1 = local_30;
                        pcVar9 = "texcrd";
                        do {
                          if (iVar5 == 0) break;
                          iVar5 = iVar5 + -1;
                          bVar11 = *(char *)pdVar1 == *pcVar9;
                          pdVar1 = (dword *)((int)pdVar1 + 1);
                          pcVar9 = pcVar9 + 1;
                        } while (bVar11);
                        if (bVar11) {
                          dStack_40 = 0x40;
                        }
                        else {
                          iVar5 = 8;
                          bVar11 = true;
                          pdVar1 = local_30;
                          pcVar9 = "texkill";
                          do {
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            bVar11 = *(char *)pdVar1 == *pcVar9;
                            pdVar1 = (dword *)((int)pdVar1 + 1);
                            pcVar9 = pcVar9 + 1;
                          } while (bVar11);
                          if (bVar11) goto LAB_005dc67a;
                          iVar5 = 9;
                          bVar11 = true;
                          pdVar1 = local_30;
                          pcVar9 = "texdepth";
                          do {
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            bVar11 = *(char *)pdVar1 == *pcVar9;
                            pdVar1 = (dword *)((int)pdVar1 + 1);
                            pcVar9 = pcVar9 + 1;
                          } while (bVar11);
                          if (bVar11) {
                            dStack_40 = 0x57;
                            goto LAB_005dc861;
                          }
                          iVar5 = 6;
                          bVar11 = true;
                          pdVar1 = local_30;
                          pcVar9 = "texld";
                          do {
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            bVar11 = *(char *)pdVar1 == *pcVar9;
                            pdVar1 = (dword *)((int)pdVar1 + 1);
                            pcVar9 = pcVar9 + 1;
                          } while (bVar11);
                          if (!bVar11) {
                            bVar11 = true;
                            dVar4 = dStack_40;
                            pdVar1 = local_30;
                            ppuVar10 = &PTR_DAT_006b8864;
                            do {
                              if (dVar4 == 0) break;
                              dVar4 = dVar4 - 1;
                              bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
                              pdVar1 = (dword *)((int)pdVar1 + 1);
                              ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                            } while (bVar11);
                            if (bVar11) {
                              dStack_40 = 0x59;
                              dVar4 = dStack_40;
                              goto LAB_005dc9ec;
                            }
LAB_005dc89b:
                            if (local_c->mbr_0xac != 0) {
                              return 0x109;
                            }
                            goto LAB_005dc8a3;
                          }
                          dStack_40 = 0x42;
                        }
                        goto LAB_005dca09;
                      }
                      dStack_40 = 0x58;
                    }
                  }
LAB_005dc5bb:
                  uVar2 = 0x108;
                  goto LAB_005dc5c0;
                }
LAB_005dc8a3:
                bVar11 = true;
                dVar4 = dStack_40;
                pdVar1 = local_30;
                ppuVar10 = &PTR_DAT_006b8860;
                do {
                  if (dVar4 == 0) break;
                  dVar4 = dVar4 - 1;
                  bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
                  pdVar1 = (dword *)((int)pdVar1 + 1);
                  ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                } while (bVar11);
                if (bVar11) {
                  dStack_40 = 6;
                }
                else {
                  bVar11 = true;
                  dVar4 = dStack_40;
                  pdVar1 = local_30;
                  pcVar9 = "rsq";
                  do {
                    if (dVar4 == 0) break;
                    dVar4 = dVar4 - 1;
                    bVar11 = *(char *)pdVar1 == *pcVar9;
                    pdVar1 = (dword *)((int)pdVar1 + 1);
                    pcVar9 = pcVar9 + 1;
                  } while (bVar11);
                  if (!bVar11) {
                    bVar11 = true;
                    dVar4 = dStack_40;
                    pdVar1 = local_30;
                    pcVar9 = "min";
                    do {
                      if (dVar4 == 0) break;
                      dVar4 = dVar4 - 1;
                      bVar11 = *(char *)pdVar1 == *pcVar9;
                      pdVar1 = (dword *)((int)pdVar1 + 1);
                      pcVar9 = pcVar9 + 1;
                    } while (bVar11);
                    if (bVar11) {
                      dStack_40 = 10;
                      dVar4 = dStack_40;
                    }
                    else {
                      bVar11 = true;
                      dVar4 = dStack_40;
                      pdVar1 = local_30;
                      pcVar9 = "max";
                      do {
                        if (dVar4 == 0) break;
                        dVar4 = dVar4 - 1;
                        bVar11 = *(char *)pdVar1 == *pcVar9;
                        pdVar1 = (dword *)((int)pdVar1 + 1);
                        pcVar9 = pcVar9 + 1;
                      } while (bVar11);
                      if (bVar11) {
                        dStack_40 = 0xb;
                        dVar4 = dStack_40;
                      }
                      else {
                        bVar11 = true;
                        dVar4 = dStack_40;
                        pdVar1 = local_30;
                        pcVar9 = "slt";
                        do {
                          if (dVar4 == 0) break;
                          dVar4 = dVar4 - 1;
                          bVar11 = *(char *)pdVar1 == *pcVar9;
                          pdVar1 = (dword *)((int)pdVar1 + 1);
                          pcVar9 = pcVar9 + 1;
                        } while (bVar11);
                        if (bVar11) {
                          dStack_40 = 0xc;
                          dVar4 = dStack_40;
                        }
                        else {
                          bVar11 = true;
                          dVar4 = dStack_40;
                          pdVar1 = local_30;
                          ppuVar10 = &PTR_s_Hand1SlotHighlight_006b884c;
                          do {
                            if (dVar4 == 0) break;
                            dVar4 = dVar4 - 1;
                            bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
                            pdVar1 = (dword *)((int)pdVar1 + 1);
                            ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                          } while (bVar11);
                          if (!bVar11) {
                            bVar11 = true;
                            dVar4 = dStack_40;
                            pdVar1 = local_30;
                            ppuVar10 = &PTR_null_006b8848;
                            do {
                              if (dVar4 == 0) break;
                              dVar4 = dVar4 - 1;
                              bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
                              pdVar1 = (dword *)((int)pdVar1 + 1);
                              ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                            } while (bVar11);
                            if (bVar11) {
                              dStack_40 = 0xe;
                            }
                            else {
                              bVar11 = true;
                              dVar4 = dStack_40;
                              pdVar1 = local_30;
                              ppuVar10 = &PTR_s_le_006b8844;
                              do {
                                if (dVar4 == 0) break;
                                dVar4 = dVar4 - 1;
                                bVar11 = *(char *)pdVar1 == *(char *)ppuVar10;
                                pdVar1 = (dword *)((int)pdVar1 + 1);
                                ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                              } while (bVar11);
                              if (bVar11) {
                                dStack_40 = 0xf;
                              }
                              else {
                                bVar11 = true;
                                dVar4 = dStack_40;
                                pdVar1 = local_30;
                                pcVar9 = "lit";
                                do {
                                  if (dVar4 == 0) break;
                                  dVar4 = dVar4 - 1;
                                  bVar11 = *(char *)pdVar1 == *pcVar9;
                                  pdVar1 = (dword *)((int)pdVar1 + 1);
                                  pcVar9 = pcVar9 + 1;
                                } while (bVar11);
                                if (!bVar11) {
                                  bVar11 = true;
                                  pdVar1 = local_30;
                                  pcVar9 = "dst";
                                  do {
                                    if (dStack_40 == 0) break;
                                    dStack_40 = dStack_40 - 1;
                                    bVar11 = *(char *)pdVar1 == *pcVar9;
                                    pdVar1 = (dword *)((int)pdVar1 + 1);
                                    pcVar9 = pcVar9 + 1;
                                  } while (bVar11);
                                  if (bVar11) {
                                    dStack_40 = 0x11;
                                    dVar4 = dStack_40;
                                  }
                                  else {
                                    iVar5 = 5;
                                    bVar11 = true;
                                    iVar6 = iVar5;
                                    pdVar1 = local_30;
                                    pcVar9 = "m4x4";
                                    do {
                                      if (iVar6 == 0) break;
                                      iVar6 = iVar6 + -1;
                                      bVar11 = *(char *)pdVar1 == *pcVar9;
                                      pdVar1 = (dword *)((int)pdVar1 + 1);
                                      pcVar9 = pcVar9 + 1;
                                    } while (bVar11);
                                    if (bVar11) {
                                      dStack_40 = 0x14;
                                      dVar4 = dStack_40;
                                    }
                                    else {
                                      bVar11 = true;
                                      iVar6 = iVar5;
                                      pdVar1 = local_30;
                                      pcVar9 = "m4x3";
                                      do {
                                        if (iVar6 == 0) break;
                                        iVar6 = iVar6 + -1;
                                        bVar11 = *(char *)pdVar1 == *pcVar9;
                                        pdVar1 = (dword *)((int)pdVar1 + 1);
                                        pcVar9 = pcVar9 + 1;
                                      } while (bVar11);
                                      if (bVar11) {
                                        dStack_40 = 0x15;
                                        dVar4 = dStack_40;
                                      }
                                      else {
                                        bVar11 = true;
                                        iVar6 = iVar5;
                                        pdVar1 = local_30;
                                        pcVar9 = "m3x4";
                                        do {
                                          if (iVar6 == 0) break;
                                          iVar6 = iVar6 + -1;
                                          bVar11 = *(char *)pdVar1 == *pcVar9;
                                          pdVar1 = (dword *)((int)pdVar1 + 1);
                                          pcVar9 = pcVar9 + 1;
                                        } while (bVar11);
                                        if (bVar11) {
                                          dStack_40 = 0x16;
                                          dVar4 = dStack_40;
                                        }
                                        else {
                                          bVar11 = true;
                                          iVar6 = iVar5;
                                          pdVar1 = local_30;
                                          pcVar9 = "m3x3";
                                          do {
                                            if (iVar6 == 0) break;
                                            iVar6 = iVar6 + -1;
                                            bVar11 = *(char *)pdVar1 == *pcVar9;
                                            pdVar1 = (dword *)((int)pdVar1 + 1);
                                            pcVar9 = pcVar9 + 1;
                                          } while (bVar11);
                                          if (bVar11) {
                                            dStack_40 = 0x17;
                                            dVar4 = dStack_40;
                                          }
                                          else {
                                            bVar11 = true;
                                            iVar6 = iVar5;
                                            pdVar1 = local_30;
                                            pcVar9 = "m3x2";
                                            do {
                                              if (iVar6 == 0) break;
                                              iVar6 = iVar6 + -1;
                                              bVar11 = *(char *)pdVar1 == *pcVar9;
                                              pdVar1 = (dword *)((int)pdVar1 + 1);
                                              pcVar9 = pcVar9 + 1;
                                            } while (bVar11);
                                            if (!bVar11) {
                                              bVar11 = true;
                                              iVar6 = iVar5;
                                              pdVar1 = local_30;
                                              pcVar9 = "expp";
                                              do {
                                                if (iVar6 == 0) break;
                                                iVar6 = iVar6 + -1;
                                                bVar11 = *(char *)pdVar1 == *pcVar9;
                                                pdVar1 = (dword *)((int)pdVar1 + 1);
                                                pcVar9 = pcVar9 + 1;
                                              } while (bVar11);
                                              if (bVar11) {
                                                dStack_40 = 0x4e;
                                              }
                                              else {
                                                bVar11 = true;
                                                pdVar1 = local_30;
                                                pcVar9 = "logp";
                                                do {
                                                  if (iVar5 == 0) break;
                                                  iVar5 = iVar5 + -1;
                                                  bVar11 = *(char *)pdVar1 == *pcVar9;
                                                  pdVar1 = (dword *)((int)pdVar1 + 1);
                                                  pcVar9 = pcVar9 + 1;
                                                } while (bVar11);
                                                if (!bVar11) {
                                                  return 0x109;
                                                }
                                                dStack_40 = 0x4f;
                                              }
                                              goto LAB_005dca09;
                                            }
                                            dStack_40 = 0x18;
                                            dVar4 = dStack_40;
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_005dc9ec;
                                }
                                dStack_40 = 0x10;
                              }
                            }
                            goto LAB_005dca09;
                          }
                          dStack_40 = 0xd;
                          dVar4 = dStack_40;
                        }
                      }
                    }
                    goto LAB_005dc9ec;
                  }
                  dStack_40 = 7;
                }
              }
LAB_005dca09:
              uVar2 = 0x106;
              goto LAB_005dc5c0;
            }
            dStack_40 = 9;
            dVar4 = dStack_40;
          }
        }
      }
    }
LAB_005dc9ec:
    dStack_40 = dVar4;
    uVar2 = 0x107;
  }
LAB_005dc5c0:
  if (local_10 != (dword *)0x0) {
    if (local_c->mbr_0xac == 0) {
      return 0x109;
    }
    uVar7 = (int)local_18 - (int)local_10;
    local_20 = uVar7;
    if (0xf < uVar7) {
      return 0x109;
    }
    pdVar1 = local_10;
    pdVar8 = local_30;
    for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pdVar8 = *pdVar1;
      pdVar1 = pdVar1 + 1;
      pdVar8 = pdVar8 + 1;
    }
    for (uVar3 = uVar7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)pdVar8 = *(undefined *)pdVar1;
      pdVar1 = (dword *)((int)pdVar1 + 1);
      pdVar8 = (dword *)((int)pdVar8 + 1);
    }
    *(undefined *)((int)local_30 + uVar7) = 0;
    iVar5 = 3;
    bVar11 = true;
    pdVar1 = local_30;
    pcVar9 = "x8";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar11 = *(char *)pdVar1 == *pcVar9;
      pdVar1 = (dword *)((int)pdVar1 + 1);
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      local_8 = 0x3000000;
    }
    else {
      iVar5 = 3;
      bVar11 = true;
      pdVar1 = local_30;
      pcVar9 = "x4";
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar11 = *(char *)pdVar1 == *pcVar9;
        pdVar1 = (dword *)((int)pdVar1 + 1);
        pcVar9 = pcVar9 + 1;
      } while (bVar11);
      if (bVar11) {
        local_8 = 0x2000000;
      }
      else {
        iVar5 = 3;
        bVar11 = true;
        pdVar1 = local_30;
        pcVar9 = "x2";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar11 = *(char *)pdVar1 == *pcVar9;
          pdVar1 = (dword *)((int)pdVar1 + 1);
          pcVar9 = pcVar9 + 1;
        } while (bVar11);
        if (bVar11) {
          local_8 = 0x1000000;
        }
        else {
          iVar5 = 3;
          bVar11 = true;
          pdVar1 = local_30;
          pcVar9 = "d2";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar11 = *(char *)pdVar1 == *pcVar9;
            pdVar1 = (dword *)((int)pdVar1 + 1);
            pcVar9 = pcVar9 + 1;
          } while (bVar11);
          if (bVar11) {
            local_8 = 0xf000000;
          }
          else {
            iVar5 = 3;
            bVar11 = true;
            pdVar1 = local_30;
            pcVar9 = "d4";
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar11 = *(char *)pdVar1 == *pcVar9;
              pdVar1 = (dword *)((int)pdVar1 + 1);
              pcVar9 = pcVar9 + 1;
            } while (bVar11);
            if (bVar11) {
              local_8 = 0xe000000;
            }
            else {
              iVar5 = 3;
              bVar11 = true;
              pdVar1 = local_30;
              pcVar9 = "d8";
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar11 = *(char *)pdVar1 == *pcVar9;
                pdVar1 = (dword *)((int)pdVar1 + 1);
                pcVar9 = pcVar9 + 1;
              } while (bVar11);
              if (bVar11) {
                local_8 = 0xd000000;
              }
              else {
                if (local_14 != (dword *)0x0) {
                  return 0x109;
                }
                local_14 = local_10;
                local_1c = local_18;
              }
            }
          }
        }
      }
    }
  }
  if (local_14 == (dword *)0x0) {
LAB_005dcb22:
    local_c->mbr_0x1c8 = dStack_40;
    local_c->mbr_0x1cc = local_8;
    return uVar2;
  }
  if (local_c->mbr_0xac != 0) {
    uVar7 = (int)local_1c - (int)local_14;
    local_20 = uVar7;
    if (uVar7 < 0x10) {
      pdVar1 = local_14;
      pdVar8 = local_30;
      for (uVar3 = uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pdVar8 = *pdVar1;
        pdVar1 = pdVar1 + 1;
        pdVar8 = pdVar8 + 1;
      }
      for (uVar3 = uVar7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined *)pdVar8 = *(undefined *)pdVar1;
        pdVar1 = (dword *)((int)pdVar1 + 1);
        pdVar8 = (dword *)((int)pdVar8 + 1);
      }
      *(undefined *)((int)local_30 + uVar7) = 0;
      iVar5 = 4;
      bVar11 = true;
      pdVar1 = local_30;
      pcVar9 = "sat";
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar11 = *(char *)pdVar1 == *pcVar9;
        pdVar1 = (dword *)((int)pdVar1 + 1);
        pcVar9 = pcVar9 + 1;
      } while (bVar11);
      if (bVar11) {
        local_8 = local_8 | 0x100000;
        goto LAB_005dcb22;
      }
    }
  }
  return 0x109;
}



uint __thiscall cls_0x5d6554::meth_0x5dcb39(cls_0x5d6554 *this,char *param_1)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  char *pcStack_10;
  
  pcVar1 = param_1;
  uVar2 = 0;
  if ((param_1 == (char *)0x0) || (cVar3 = *param_1, pcVar4 = param_1, cVar3 == '\0')) {
    uVar2 = 0xf0000;
  }
  else {
    do {
      if (cVar3 < 'x') {
        if ((cVar3 == 'w') || (cVar3 == 'a')) {
          pcStack_10 = (char *)0x3;
          uVar2 = uVar2 | 0x80000;
        }
        else {
          if (cVar3 != 'b') {
            if (cVar3 == 'g') goto LAB_005dcbb0;
            if (cVar3 != 'r') goto LAB_005dcbba;
            goto LAB_005dcb75;
          }
LAB_005dcba6:
          pcStack_10 = (char *)0x2;
          uVar2 = uVar2 | 0x40000;
        }
      }
      else if (cVar3 == 'x') {
LAB_005dcb75:
        pcStack_10 = (char *)0x0;
        uVar2 = uVar2 | 0x10000;
      }
      else {
        if (cVar3 != 'y') {
          if (cVar3 != 'z') goto LAB_005dcbba;
          goto LAB_005dcba6;
        }
LAB_005dcbb0:
        pcStack_10 = (char *)0x1;
        uVar2 = uVar2 | 0x20000;
      }
      if ((pcVar4 != pcVar1) && (pcStack_10 <= param_1)) {
LAB_005dcbba:
        FUN_005dc2ec((int)this,(byte *)"invalid mask \'%s\'");
        this->mbr_0x98 = 1;
        return 0;
      }
      cVar3 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
      param_1 = pcStack_10;
    } while (cVar3 != '\0');
  }
  return uVar2;
}



uint __thiscall cls_0x5d6554::meth_0x5dcbe2(cls_0x5d6554 *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  int iStack_18;
  uint local_8;
  
  iStack_18 = 0;
  local_8 = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    local_8 = 0xe40000;
  }
  else {
    uVar2 = 0x10;
    do {
      cVar1 = *param_1;
      if (cVar1 != '\0') {
        if (cVar1 < 'x') {
          if ((cVar1 == 'w') || (cVar1 == 'a')) {
            iStack_18 = 3;
          }
          else {
            if (cVar1 != 'b') {
              if (cVar1 == 'g') goto LAB_005dcc6e;
              if (cVar1 == 'r') goto LAB_005dcc24;
              goto LAB_005dcc3a;
            }
LAB_005dcc6a:
            iStack_18 = 2;
          }
        }
        else if (cVar1 == 'x') {
LAB_005dcc24:
          iStack_18 = 0;
        }
        else {
          if (cVar1 != 'y') {
            if (cVar1 == 'z') goto LAB_005dcc6a;
            goto LAB_005dcc3a;
          }
LAB_005dcc6e:
          iStack_18 = 1;
        }
        param_1 = param_1 + 1;
      }
      local_8 = local_8 | iStack_18 << ((byte)uVar2 & 0x1f);
      uVar2 = uVar2 + 2;
    } while (uVar2 < 0x18);
    if (*param_1 != '\0') {
LAB_005dcc3a:
      FUN_005dc2ec((int)this,(byte *)"invalid swizzle \'%s\'");
      this->mbr_0x98 = 1;
      local_8 = 0;
    }
  }
  return local_8;
}



uint __thiscall
cls_0x5d6554::meth_0x5dcc83(cls_0x5d6554 *this,char *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char *pcVar10;
  uint local_c;
  uint local_8;
  
  pcVar10 = param_1;
  while ((*pcVar10 != '\0' && (iVar2 = _isalpha((int)*pcVar10), iVar2 != 0))) {
    pcVar10 = pcVar10 + 1;
  }
  cVar1 = *pcVar10;
  pcVar4 = pcVar10;
  while ((cVar1 != '\0' && (iVar2 = _isdigit((int)*pcVar4), iVar2 != 0))) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  bVar7 = *pcVar10 != '\0';
  bVar9 = true;
  local_8 = 0;
  local_c = 0;
  if ((this->mbr_0xac != 0) && (*pcVar4 == '_')) {
    iVar2 = 6;
    bVar8 = true;
    pcVar5 = pcVar4;
    pcVar6 = "_bias";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar8);
    if (bVar8) {
      local_c = 0x2000000;
      pcVar4 = pcVar4 + 5;
    }
    else {
      iVar2 = 5;
      bVar8 = true;
      pcVar5 = pcVar4;
      pcVar6 = "_bx2";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *pcVar5 == *pcVar6;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        local_c = 0x4000000;
        pcVar4 = pcVar4 + 4;
      }
      else {
        iVar2 = 4;
        bVar8 = true;
        iVar3 = iVar2;
        pcVar5 = pcVar4;
        pcVar6 = "_x2";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar8);
        if (bVar8) {
          local_c = 0x7000000;
        }
        else {
          bVar8 = true;
          iVar3 = iVar2;
          pcVar5 = pcVar4;
          pcVar6 = "_dz";
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar8 = *pcVar5 == *pcVar6;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar8);
          if (!bVar8) {
            bVar8 = true;
            iVar3 = iVar2;
            pcVar5 = pcVar4;
            pcVar6 = "_db";
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar8 = *pcVar5 == *pcVar6;
              pcVar5 = pcVar5 + 1;
              pcVar6 = pcVar6 + 1;
            } while (bVar8);
            if (!bVar8) {
              bVar8 = true;
              iVar3 = iVar2;
              pcVar5 = pcVar4;
              pcVar6 = "_dw";
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar8 = *pcVar5 == *pcVar6;
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar6 + 1;
              } while (bVar8);
              if (!bVar8) {
                bVar8 = true;
                pcVar5 = pcVar4;
                pcVar6 = "_da";
                do {
                  if (iVar2 == 0) break;
                  iVar2 = iVar2 + -1;
                  bVar8 = *pcVar5 == *pcVar6;
                  pcVar5 = pcVar5 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (bVar8);
                if (!bVar8) goto LAB_005dcd9b;
              }
              local_c = 0xa000000;
              goto LAB_005dcd98;
            }
          }
          local_c = 0x9000000;
        }
LAB_005dcd98:
        pcVar4 = pcVar4 + 3;
      }
    }
  }
LAB_005dcd9b:
  if ((bVar7) && (local_8 = _atol(pcVar10), (local_8 & 0xffffe000) != 0)) {
    bVar9 = false;
  }
  if ((*pcVar4 == '\0') && (bVar9)) {
    if (param_3 != 0) {
      iVar2 = 2;
      bVar9 = true;
      pcVar10 = "c";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *param_1 == *pcVar10;
        param_1 = param_1 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar9);
      if ((bVar9) && (!bVar7)) {
        local_8 = local_c | param_2;
LAB_005dcfbb:
        return local_8 | 0x20000000;
      }
      goto LAB_005dcfc2;
    }
    cVar1 = *pcVar10;
    *pcVar10 = '\0';
    if (this->mbr_0xac == 0) {
      iVar2 = 5;
      bVar9 = true;
      pcVar4 = param_1;
      pcVar5 = "oPos";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (!bVar7)) {
        return 0x40000000;
      }
      iVar2 = 5;
      bVar9 = true;
      pcVar4 = param_1;
      pcVar5 = "oPts";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (!bVar7)) {
        return 0x40000002;
      }
      iVar2 = 5;
      bVar9 = true;
      pcVar4 = param_1;
      pcVar5 = "oFog";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (!bVar7)) {
        return 0x40000001;
      }
      iVar2 = 2;
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = "v";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) goto LAB_005dceee;
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = "r";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        return local_8;
      }
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = "c";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) goto LAB_005dcfbb;
      bVar9 = true;
      pcVar4 = param_1;
      pcVar5 = "a";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) goto LAB_005dcf47;
      iVar2 = 3;
      bVar9 = true;
      pcVar4 = param_1;
      pcVar5 = "oD";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        return local_8 | 0x50000000;
      }
      iVar2 = 3;
      bVar9 = true;
      pcVar4 = "oT";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *param_1 == *pcVar4;
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        return local_8 | 0x60000000;
      }
    }
    else {
      iVar2 = 2;
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = "v";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        local_8 = local_c | local_8;
LAB_005dceee:
        return local_8 | 0x10000000;
      }
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = "r";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        return local_c | local_8;
      }
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = "c";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        local_8 = local_c | local_8;
        goto LAB_005dcfbb;
      }
      bVar9 = true;
      pcVar4 = "t";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *param_1 == *pcVar4;
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        local_8 = local_c | local_8;
LAB_005dcf47:
        return local_8 | 0x30000000;
      }
    }
    *pcVar10 = cVar1;
  }
  else {
LAB_005dcfc2:
    if (param_3 != 0) {
      if ((param_2 & 0x2000) == 0) {
        pcVar10 = "invalid register \'%s[%d]\'";
      }
      else {
        pcVar10 = "invalid register \'%s[a0.x + %d]\'";
      }
      FUN_005dc2ec((int)this,(byte *)pcVar10);
      goto LAB_005dd00e;
    }
  }
  FUN_005dc2ec((int)this,(byte *)"invalid register \'%s\'");
LAB_005dd00e:
  this->mbr_0x98 = 1;
  return 0;
}



void __thiscall cls_0x5d6554::meth_0x5dd024(cls_0x5d6554 *this,uint param_1,undefined4 *param_2)

{
  undefined *this_00;
  uint uVar1;
  
  if (((param_1 & 0x70000000) == 0x20000000) && ((param_1 & 0x2000) == 0)) {
    if (this->mbr_0xac == 0) {
      this->mbr_0x9c = this->mbr_0x9c + 0x14;
      uVar1 = param_1 & 0x1fff | 0x82000000;
    }
    else {
      this->mbr_0x9c = this->mbr_0x9c + 0x18;
      meth_0x482e51((cls_0x5d6554 *)&this->field_0x64,0x51);
      uVar1 = param_1 | 0xf0000;
    }
    this_00 = &this->field_0x64;
    meth_0x482e51((cls_0x5d6554 *)this_00,uVar1);
    meth_0x482e51((cls_0x5d6554 *)this_00,*param_2);
    meth_0x482e51((cls_0x5d6554 *)this_00,param_2[1]);
    meth_0x482e51((cls_0x5d6554 *)this_00,param_2[2]);
    meth_0x482e51((cls_0x5d6554 *)this_00,param_2[3]);
  }
  else {
    FUN_005dc2ec((int)this,(byte *)"invalid constant");
    this->mbr_0x98 = 1;
  }
  return;
}



void __thiscall cls_0x5d6554::meth_0x5dd1a3(cls_0x5d6554 *this)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  dword *pdVar6;
  cls_0x5d6554 *pcVar7;
  dword *pdVar8;
  char *pcVar9;
  cls_0x5d6554 **ppcVar10;
  bool bVar11;
  cls_0x5d6554 *local_c [2];
  
  this->mbr_0x3dc = this->mbr_0x1d0;
  if (this->mbr_0xb0 == 0) {
    this->mbr_0x2d4 = this->mbr_0x1d0;
  }
  else {
    pdVar8 = &this->mbr_0x1d4;
    pdVar6 = &this->mbr_0x2d8;
    do {
      bVar2 = *(byte *)pdVar6;
      bVar11 = bVar2 < *(byte *)pdVar8;
      if (bVar2 != *(byte *)pdVar8) {
LAB_005dd1fb:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_005dd200;
      }
      if (bVar2 == 0) break;
      bVar2 = *(byte *)((int)pdVar6 + 1);
      bVar11 = bVar2 < *(byte *)((int)pdVar8 + 1);
      if (bVar2 != *(byte *)((int)pdVar8 + 1)) goto LAB_005dd1fb;
      pdVar6 = (dword *)((int)pdVar6 + 2);
      pdVar8 = (dword *)((int)pdVar8 + 2);
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_005dd200:
    local_c[0] = this;
    local_c[1] = this;
    if (iVar4 != 0) {
      local_c[1] = (cls_0x5d6554 *)&this->mbr_0x1d4;
      puVar1 = (undefined *)((int)&this->mbr_0x1d4 + 1);
      pdVar8 = (dword *)local_c[1];
      do {
        cVar3 = *(char *)pdVar8;
        pdVar8 = (dword *)((int)pdVar8 + 1);
      } while (cVar3 != '\0');
      pcVar9 = (char *)((int)pdVar8 + (1 - (int)puVar1));
      pdVar6 = &this->mbr_0x74;
      meth_0x482e51((cls_0x5d6554 *)pdVar6,
                    ((uint)((int)pdVar8 + (4 - (int)puVar1)) & 0x3fffc) * 0x4000 + 0x10000 &
                    0x7fff0000 | 0xfffe);
      meth_0x482e51((cls_0x5d6554 *)pdVar6,0x454c4946);
      this->mbr_0xa0 = this->mbr_0xa0 + 8;
      if ((char *)0x3 < pcVar9) {
        local_c[0] = (cls_0x5d6554 *)((uint)pcVar9 >> 2);
        do {
          meth_0x482e51((cls_0x5d6554 *)pdVar6,local_c[1]->mbr_0x0);
          this->mbr_0xa0 = this->mbr_0xa0 + 4;
          local_c[1] = (cls_0x5d6554 *)&local_c[1]->mbr_0x4;
          pcVar9 = pcVar9 + -4;
          local_c[0] = (cls_0x5d6554 *)((int)&local_c[0][-1].mbr_0x3e4 + 3);
        } while (local_c[0] != (cls_0x5d6554 *)0x0);
      }
      if (pcVar9 != (char *)0x0) {
        local_c[0] = (cls_0x5d6554 *)0x0;
        pcVar7 = local_c[1];
        ppcVar10 = local_c;
        for (uVar5 = (uint)pcVar9 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *ppcVar10 = (cls_0x5d6554 *)pcVar7->mbr_0x0;
          pcVar7 = (cls_0x5d6554 *)&pcVar7->mbr_0x4;
          ppcVar10 = ppcVar10 + 1;
        }
        for (uVar5 = (uint)pcVar9 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined *)ppcVar10 = *(undefined *)&pcVar7->mbr_0x0;
          pcVar7 = (cls_0x5d6554 *)((int)&pcVar7->mbr_0x0 + 1);
          ppcVar10 = (cls_0x5d6554 **)((int)ppcVar10 + 1);
        }
        meth_0x482e51((cls_0x5d6554 *)&this->mbr_0x74,local_c[0]);
        this->mbr_0xa0 = this->mbr_0xa0 + 4;
      }
      pdVar8 = &this->mbr_0x1d4;
      iVar4 = 0x2d8 - (int)pdVar8;
      do {
        cVar3 = *(char *)pdVar8;
        *(char *)((int)this + iVar4 + (int)pdVar8) = cVar3;
        pdVar8 = (dword *)((int)pdVar8 + 1);
      } while (cVar3 != '\0');
    }
    if (this->mbr_0x2d4 != this->mbr_0x1d0) {
      pdVar8 = &this->mbr_0x74;
      meth_0x482e51((cls_0x5d6554 *)pdVar8,0x2fffe);
      meth_0x482e51((cls_0x5d6554 *)pdVar8,0x454e494c);
      meth_0x482e51((cls_0x5d6554 *)pdVar8,this->mbr_0x1d0);
      this->mbr_0xa0 = this->mbr_0xa0 + 0xc;
      this->mbr_0x2d4 = this->mbr_0x1d0;
    }
  }
  return;
}



undefined4 * __thiscall cls_0x5d6554::meth_0x5dd31a(cls_0x5d6554 *this)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  dword *pdVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  dword *pdVar12;
  undefined **ppuVar13;
  bool bVar14;
  undefined4 local_114 [64];
  undefined4 *local_14;
  char local_d;
  undefined4 *local_c;
  undefined4 *local_8;
  
  this->mbr_0x3d8 = 0;
LAB_005dd5e8:
  while( true ) {
    while( true ) {
      uVar8 = this->mbr_0xc0;
      if (this->mbr_0xc4 <= uVar8) {
        if (uVar8 == this->mbr_0xc4) {
          this->mbr_0xc0 = uVar8 + 1;
          this->mbr_0x3d8 = 1;
          return (undefined4 *)0x10c;
        }
        return (undefined4 *)0xffffffff;
      }
      local_d = *(char *)this->mbr_0xc0;
      if (local_d != '\n') break;
      pcVar3 = (char *)this->mbr_0xc0 + 1;
      this->mbr_0x1d0 = this->mbr_0x1d0 + 1;
      this->mbr_0xc0 = (dword)pcVar3;
      this->mbr_0xbc = (dword)pcVar3;
    }
    iVar4 = _isspace((int)local_d);
    if (iVar4 == 0) break;
    this->mbr_0xc0 = this->mbr_0xc0 + 1;
  }
  if (local_d != '#') {
    if (local_d == ';') {
LAB_005dd5be:
      this->mbr_0xc0 = this->mbr_0xc0 + 1;
      pcVar3 = (char *)this->mbr_0xc0;
      if (pcVar3 < (char *)this->mbr_0xc4) {
        do {
          if (*pcVar3 == '\n') break;
          pcVar3 = pcVar3 + 1;
          this->mbr_0xc0 = (dword)pcVar3;
        } while (pcVar3 < (char *)this->mbr_0xc4);
      }
    }
    else {
      if (local_d != '/') {
LAB_005dd621:
        puVar11 = (undefined4 *)(int)local_d;
        iVar4 = _isalpha((int)puVar11);
        if (iVar4 != 0) {
          pdVar7 = (dword *)this->mbr_0xc0;
          pcVar3 = (char *)((int)pdVar7 + 1);
          this->mbr_0xc0 = (dword)pcVar3;
          if (pcVar3 < (char *)this->mbr_0xc4) goto LAB_005dd64a;
          goto LAB_005dd679;
        }
        iVar4 = _isdigit((int)puVar11);
        pdVar7 = (dword *)this->mbr_0xc0;
        if (iVar4 == 0) {
          if (*(char *)pdVar7 == '+') {
            this->mbr_0x3d8 = 1;
          }
          this->mbr_0xc0 = (dword)((int)pdVar7 + 1);
          return puVar11;
        }
        pcVar3 = (char *)((int)pdVar7 + 1);
        local_c = (undefined4 *)0x10a;
        this->mbr_0xc0 = (dword)pcVar3;
        if (pcVar3 < (char *)this->mbr_0xc4) goto LAB_005dd754;
        goto LAB_005dd7af;
      }
      pcVar2 = (char *)this->mbr_0xc4;
      pcVar3 = (char *)(this->mbr_0xc0 + 1);
      if (pcVar2 <= pcVar3) goto LAB_005dd621;
      if (*pcVar3 == '/') goto LAB_005dd5be;
      if ((pcVar2 <= pcVar3) || (*pcVar3 != '*')) goto LAB_005dd621;
      pcVar3 = (char *)(this->mbr_0xc0 + 2);
      this->mbr_0xc0 = (dword)pcVar3;
      if (pcVar3 < pcVar2) {
        do {
          pcVar3 = (char *)this->mbr_0xc0;
          if (((*pcVar3 == '*') && (pcVar3 + 1 < pcVar2)) && (pcVar3[1] == '/')) {
            this->mbr_0xc0 = this->mbr_0xc0 + 2;
            goto LAB_005dd5e8;
          }
          if (*pcVar3 == '\n') {
            this->mbr_0x1d0 = this->mbr_0x1d0 + 1;
            this->mbr_0xbc = (dword)(pcVar3 + 1);
          }
          this->mbr_0xc0 = (dword)(pcVar3 + 1);
        } while (pcVar3 + 1 < (char *)this->mbr_0xc4);
      }
      pcVar3 = "comment extends past end-of-file";
LAB_005dd5ab:
      FUN_005dc2ec((int)this,(byte *)pcVar3);
    }
    goto LAB_005dd5e8;
  }
  puVar11 = (undefined4 *)this->mbr_0xc0;
  if (puVar11 != (undefined4 *)this->mbr_0xbc) goto LAB_005dd621;
  puVar5 = (undefined4 *)((int)puVar11 + 1);
  this->mbr_0xc0 = (dword)puVar5;
  if (puVar5 < (undefined4 *)this->mbr_0xc4) {
    do {
      if (*(char *)puVar5 == '\n') break;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      this->mbr_0xc0 = (dword)puVar5;
    } while (puVar5 < (undefined4 *)this->mbr_0xc4);
  }
  local_8 = puVar11;
  if (5 < (int)puVar5 - (int)puVar11) {
    iVar4 = 5;
    bVar14 = true;
    puVar10 = puVar11;
    pcVar3 = "#line";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar14 = *(char *)puVar10 == *pcVar3;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      pcVar3 = pcVar3 + 1;
    } while (bVar14);
    if (bVar14) {
      if (puVar11 < puVar5) {
        do {
          iVar4 = _isspace((int)*(char *)local_8);
          if (iVar4 != 0) break;
          local_8 = (undefined4 *)((int)local_8 + 1);
        } while (local_8 < (undefined4 *)this->mbr_0xc0);
      }
      while ((puVar11 = local_8, local_8 < (undefined4 *)this->mbr_0xc0 &&
             (iVar4 = _isspace((int)*(char *)local_8), puVar11 = local_8, iVar4 != 0))) {
        local_8 = (undefined4 *)((int)local_8 + 1);
      }
      while ((local_8 < (undefined4 *)this->mbr_0xc0 &&
             (iVar4 = _isspace((int)*(char *)local_8), iVar4 == 0))) {
        local_8 = (undefined4 *)((int)local_8 + 1);
      }
      puVar5 = (undefined4 *)this->mbr_0xc0;
      local_14 = local_8;
      if (local_8 < puVar5) {
        do {
          if (*(char *)local_14 == '\"') break;
          local_14 = (undefined4 *)((int)local_14 + 1);
        } while (local_14 < (undefined4 *)this->mbr_0xc0);
      }
      local_c = local_14;
      if ((local_14 < puVar5) && (local_c = (undefined4 *)((int)local_14 + 1), local_c < puVar5)) {
        do {
          if (*(char *)local_c == '\"') break;
          local_c = (undefined4 *)((int)local_c + 1);
        } while (local_c < (undefined4 *)this->mbr_0xc0);
      }
      uVar8 = (int)local_8 - (int)puVar11;
      if (0xff < uVar8) {
        uVar8 = 0xff;
      }
      local_8 = (undefined4 *)((int)local_c - (int)local_14);
      if ((undefined4 *)0xff < (undefined4 *)((int)local_c - (int)local_14)) {
        local_8 = (undefined4 *)0xff;
      }
      if (uVar8 != 0) {
        puVar5 = local_114;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar5 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(char *)puVar5 = *(char *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        *(undefined *)((int)local_114 + uVar8) = 0;
        lVar6 = _atol((char *)local_114);
        this->mbr_0x1d0 = lVar6 - 1;
      }
      if ((undefined4 *)0x1 < local_8) {
        pdVar7 = &this->mbr_0x1d4;
        puVar11 = (undefined4 *)((int)local_14 + 1);
        while (puVar11 < local_c) {
          cVar1 = *(char *)puVar11;
          puVar5 = (undefined4 *)((int)puVar11 + 1);
          *(char *)pdVar7 = cVar1;
          if (((cVar1 == '\\') && (puVar5 < local_c)) && (*(char *)puVar5 == '\\')) {
            puVar5 = (undefined4 *)((int)puVar11 + 2);
          }
          pdVar7 = (dword *)((int)pdVar7 + 1);
          puVar11 = puVar5;
        }
        *(char *)pdVar7 = '\0';
      }
      goto LAB_005dd5e8;
    }
  }
  pcVar3 = "preprocessor directives are not supported";
  goto LAB_005dd5ab;
  while( true ) {
    this->mbr_0xc0 = this->mbr_0xc0 + 1;
    pcVar3 = (char *)this->mbr_0xc0;
    if ((char *)this->mbr_0xc4 <= pcVar3) break;
LAB_005dd64a:
    iVar4 = _isalnum((int)*pcVar3);
    if ((iVar4 == 0) && (*(char *)this->mbr_0xc0 != '_')) break;
  }
LAB_005dd679:
  uVar8 = this->mbr_0xc0 - (int)pdVar7;
  if (0xff < uVar8) {
    uVar8 = 0xff;
  }
  pdVar12 = &this->mbr_0xc8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pdVar12 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar12 = pdVar12 + 1;
  }
  for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined *)pdVar12 = *(undefined *)pdVar7;
    pdVar7 = (dword *)((int)pdVar7 + 1);
    pdVar12 = (dword *)((int)pdVar12 + 1);
  }
  *(undefined *)((int)&this->mbr_0xc8 + uVar8) = 0;
  pdVar7 = &this->mbr_0xc8;
  iVar4 = 3;
  bVar14 = true;
  this->mbr_0x3d8 = 1;
  pdVar12 = pdVar7;
  pcVar3 = "vs";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar14 = *(char *)pdVar12 == *pcVar3;
    pdVar12 = (dword *)((int)pdVar12 + 1);
    pcVar3 = pcVar3 + 1;
  } while (bVar14);
  if (bVar14) {
    return (undefined4 *)0x101;
  }
  iVar4 = 3;
  bVar14 = true;
  pdVar12 = pdVar7;
  pcVar3 = "ps";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar14 = *(char *)pdVar12 == *pcVar3;
    pdVar12 = (dword *)((int)pdVar12 + 1);
    pcVar3 = pcVar3 + 1;
  } while (bVar14);
  if (bVar14) {
    return (undefined4 *)0x102;
  }
  iVar4 = 4;
  bVar14 = true;
  ppuVar13 = &PTR_DAT_006b87a4;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar14 = *(char *)pdVar7 == *(char *)ppuVar13;
    pdVar7 = (dword *)((int)pdVar7 + 1);
    ppuVar13 = (undefined **)((int)ppuVar13 + 1);
  } while (bVar14);
  if (bVar14) {
    return (undefined4 *)0x103;
  }
  puVar11 = (undefined4 *)meth_0x5dc422(this);
  if (puVar11 != (undefined4 *)0x109) {
    return puVar11;
  }
  this->mbr_0x3d8 = 0;
  return (undefined4 *)0x109;
LAB_005dd754:
  do {
    iVar4 = _isdigit((int)*pcVar3);
    if (iVar4 == 0) {
      if ((this->mbr_0xb4 == 0) ||
         ((*(char *)this->mbr_0xc0 != '.' && (*(char *)this->mbr_0xc0 != 'e')))) {
        cVar1 = *(char *)this->mbr_0xc0;
        if (((cVar1 != '+') && (cVar1 != '-')) || (((char *)this->mbr_0xc0)[-1] != 'e')) break;
      }
      local_c = (undefined4 *)0x10b;
    }
    this->mbr_0xc0 = this->mbr_0xc0 + 1;
    pcVar3 = (char *)this->mbr_0xc0;
  } while (pcVar3 < (char *)this->mbr_0xc4);
LAB_005dd7af:
  uVar8 = this->mbr_0xc0 - (int)pdVar7;
  if (0xff < uVar8) {
    uVar8 = 0xff;
  }
  pdVar12 = &this->mbr_0xc8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pdVar12 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar12 = pdVar12 + 1;
  }
  for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined *)pdVar12 = *(undefined *)pdVar7;
    pdVar7 = (dword *)((int)pdVar7 + 1);
    pdVar12 = (dword *)((int)pdVar12 + 1);
  }
  *(undefined *)((int)&this->mbr_0xc8 + uVar8) = 0;
  if (((this->mbr_0xb4 != 0) && (pcVar3 = (char *)this->mbr_0xc0, pcVar3 < (char *)this->mbr_0xc4))
     && (*pcVar3 == 'f')) {
    local_c = (undefined4 *)0x10b;
    this->mbr_0xc0 = (dword)(pcVar3 + 1);
  }
  return local_c;
}



void __thiscall cls_0x5d6554::meth_0x5dd832(cls_0x5d6554 *this,float param_1)

{
  dword *pdVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  cls_0x5d6554 *this_00;
  char *pcVar5;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  char *local_14;
  uint local_10;
  uint local_c;
  float local_8;
  
  switch(param_1) {
  case 5.605194e-45:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x24,&local_10);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x24,&param_1);
    if ((((uint)param_1 | local_10) & 0xffffff00) == 0) {
      this->mbr_0xac = 0;
      uVar3 = (uint)param_1 | 0xfffffe00;
LAB_005dd8a1:
      this->mbr_0xb4 = uVar3 << 8 | local_10;
      goto switchD_005dd853_caseD_1f;
    }
    goto LAB_005dd883;
  case 7.006492e-45:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x24,&local_10);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x24,&param_1);
    if ((((uint)param_1 | local_10) & 0xffffff00) == 0) {
      this->mbr_0xac = 1;
      uVar3 = (uint)param_1 | 0xffffff00;
      goto LAB_005dd8a1;
    }
LAB_005dd883:
    pcVar5 = "invalid version";
LAB_005dd888:
    FUN_005dc2ec((int)this,(byte *)pcVar5);
    break;
  case 1.401298e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    pdVar1 = &this->mbr_0x34;
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&local_28);
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&local_2c);
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&local_30);
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&local_34);
    meth_0x5dd024(this,(uint)param_1,&local_34);
    break;
  case 1.821688e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x54,&local_1c);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x54,&local_c);
    meth_0x482e51((cls_0x5d6554 *)&this->mbr_0x74,local_c);
    this->mbr_0xa0 = this->mbr_0xa0 + 4;
    break;
  case 1.961818e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x54,&local_1c);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x54,&local_c);
    meth_0x482e51((cls_0x5d6554 *)&this->mbr_0x74,local_c);
    meth_0x482e51((cls_0x5d6554 *)&this->mbr_0x74,local_1c | (uint)param_1);
    this->mbr_0xa0 = this->mbr_0xa0 + 8;
    break;
  case 2.101948e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&local_10);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x54,&local_1c);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x54,&local_c);
    pdVar1 = &this->mbr_0x74;
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_c);
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_1c | (uint)param_1);
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_10);
    this->mbr_0xa0 = this->mbr_0xa0 + 0xc;
    break;
  case 2.242078e-44:
    pdVar1 = &this->mbr_0x44;
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&local_20);
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&local_10);
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&param_1);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x54,&local_1c);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x54,&local_c);
    if ((this->mbr_0xac == 0) && ((local_c & 0xffff) == 3)) {
      local_c = local_c & 0xffff0002 | 2;
      local_20 = local_20 ^ 0x1000000;
    }
    pdVar1 = &this->mbr_0x74;
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_c);
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_1c | (uint)param_1);
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_10);
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_20);
    this->mbr_0xa0 = this->mbr_0xa0 + 0x10;
    break;
  case 2.382207e-44:
    pdVar1 = &this->mbr_0x44;
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&local_24);
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&local_20);
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&local_10);
    meth_0x482fb6((cls_0x5d6554 *)pdVar1,&param_1);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x54,&local_1c);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x54,&local_c);
    pdVar1 = &this->mbr_0x74;
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_c);
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_1c | (uint)param_1);
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_10);
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_20);
    meth_0x482e51((cls_0x5d6554 *)pdVar1,local_24);
    this->mbr_0xa0 = this->mbr_0xa0 + 0x14;
    break;
  case 2.522337e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    param_1 = (float)((uint)param_1 | 0xf0000);
    local_8 = param_1;
    goto LAB_005dde89;
  case 2.662467e-44:
    meth_0x482fb6(this,&local_14);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x14,&this->mbr_0x3e4);
    this->mbr_0x3e0 = 1;
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    uVar3 = meth_0x5dcb39(this,local_14);
    fVar2 = (float)(uVar3 | (uint)param_1 & 0xfff0ffff);
    param_1 = fVar2;
    goto LAB_005ddbb7;
  case 2.802597e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    meth_0x482e51((cls_0x5d6554 *)&this->mbr_0x44,param_1);
    if (((this->mbr_0xb4 != 0xffff0104) || (((uint)param_1 & 0x70000000) != 0x20000000)) ||
       (((uint)param_1 & 0xf000000) == 0)) break;
    pcVar5 = "constant modifiers not supported in ps.1.4";
    goto LAB_005dd888;
  case 2.942727e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    if ((this->mbr_0xb4 == 0xffff0104) && (((uint)param_1 & 0x70000000) == 0x20000000)) {
      pcVar5 = "constant modifiers not supported in ps.1.4";
LAB_005ddc53:
      FUN_005dc2ec((int)this,(byte *)pcVar5);
      local_8 = param_1;
    }
    else {
      uVar3 = (uint)param_1 & 0xf000000;
      if (uVar3 == 0) {
        param_1 = (float)((uint)param_1 & 0xf1ffffff | 0x1000000);
        local_8 = param_1;
      }
      else if (uVar3 == 0x2000000) {
        param_1 = (float)((uint)param_1 & 0xf3ffffff | 0x3000000);
        local_8 = param_1;
      }
      else if (uVar3 == 0x4000000) {
        param_1 = (float)((uint)param_1 & 0xf5ffffff | 0x5000000);
        local_8 = param_1;
      }
      else if (uVar3 == 0x7000000) {
        param_1 = (float)((uint)param_1 & 0xf8ffffff | 0x8000000);
        local_8 = param_1;
      }
      else if ((uVar3 == 0x9000000) || (local_8 = param_1, uVar3 == 0xa000000)) {
        pcVar5 = "negate and divide modifiers cannot be combined";
        goto LAB_005ddc53;
      }
    }
    goto LAB_005dde89;
  case 3.082857e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x24,&local_8);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    if (this->mbr_0xac == 0) {
      pcVar5 = "complement not supported in vertex shaders";
LAB_005ddd2c:
      FUN_005dc2ec((int)this,(byte *)pcVar5);
    }
    else {
      if ((this->mbr_0xb4 == 0xffff0104) && (((uint)param_1 & 0x70000000) == 0x20000000)) {
        pcVar5 = "constant modifiers not supported in ps.1.4";
        goto LAB_005ddd2c;
      }
      if (((uint)param_1 & 0xf000000) != 0) {
        pcVar5 = "complement cannot be used with other modifiers";
        goto LAB_005ddd2c;
      }
    }
    param_1 = (float)((uint)param_1 & 0xf6ffffff | 0x6000000);
    local_8 = param_1;
    goto LAB_005dde89;
  case 3.222986e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    local_8 = (float)((uint)param_1 & 0xffe4ffff | 0xe40000);
    goto LAB_005dde89;
  case 3.363116e-44:
    meth_0x482fb6(this,&local_14);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x14,&this->mbr_0x3e4);
    this->mbr_0x3e0 = 1;
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    uVar3 = meth_0x5dcbe2(this,local_14);
    fVar2 = (float)(uVar3 | (uint)param_1 & 0xff00ffff);
    goto LAB_005ddbb7;
  case 3.503246e-44:
    meth_0x482fb6(this,&local_14);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x14,&this->mbr_0x3e4);
    this->mbr_0x3e0 = 1;
    uVar3 = meth_0x5dcc83(this,local_14,0,0);
    meth_0x482e51((cls_0x5d6554 *)&this->mbr_0x44,uVar3 | 0x80000000);
                    /* WARNING: Subroutine does not return */
    _free(local_14);
  case 3.643376e-44:
    meth_0x482fb6(this,&local_14);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x14,&this->mbr_0x3e4);
    this->mbr_0x3e0 = 1;
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&local_8);
    uVar3 = meth_0x5dcc83(this,local_14,(uint)local_8,1);
    fVar2 = (float)(uVar3 | 0x80000000);
LAB_005ddbb7:
    meth_0x482e51((cls_0x5d6554 *)&this->mbr_0x44,fVar2);
                    /* WARNING: Subroutine does not return */
    _free(local_14);
  case 3.783506e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&local_8);
    if (this->mbr_0xac == 0) {
      if (local_8 != -4.656613e-10) {
        pcVar5 = "illegal register in index expression";
        goto LAB_005dde7c;
      }
    }
    else {
      pcVar5 = "syntax error";
LAB_005dde7c:
      FUN_005dc2ec((int)this,(byte *)pcVar5);
    }
    local_8 = 1.147944e-41;
LAB_005dde89:
    this_00 = (cls_0x5d6554 *)&this->mbr_0x44;
    goto LAB_005de058;
  case 3.923636e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x24,&local_8);
    if (((uint)local_8 & 0xffffe000) != 0) {
      FUN_005dc2ec((int)this,(byte *)"illegal register number");
    }
    this_00 = (cls_0x5d6554 *)&this->mbr_0x44;
    goto LAB_005de058;
  case 4.063766e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&local_8);
    if (this->mbr_0xac == 0) {
      if (local_8 != -4.656613e-10) {
        pcVar5 = "illegal register in index expression";
        goto LAB_005ddf05;
      }
      if (((uint)param_1 & 0x2000) != 0) {
        pcVar5 = "a0.x can only appear once in an index expression";
        goto LAB_005ddf05;
      }
    }
    else {
      pcVar5 = "syntax error";
LAB_005ddf05:
      FUN_005dc2ec((int)this,(byte *)pcVar5);
    }
    local_8 = (float)((uint)param_1 | 0x2000);
    goto LAB_005ddf5f;
  case 4.203895e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x24,&local_8);
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x44,&param_1);
    if ((((uint)param_1 & 0x1fff) + (int)local_8 & 0xffffe000) != 0) {
      FUN_005dc2ec((int)this,(byte *)"illegal register number");
    }
    local_8 = (float)(((int)local_8 + (int)param_1 ^ (uint)param_1) & 0x1fff ^ (uint)param_1);
LAB_005ddf5f:
    this_00 = (cls_0x5d6554 *)&this->mbr_0x44;
    goto LAB_005de058;
  case 4.344025e-44:
switchD_005dd853_caseD_1f:
    this->mbr_0x3dc = this->mbr_0x1d0;
    break;
  case 4.484155e-44:
  case 4.764415e-44:
  case 5.044674e-44:
  case 5.324934e-44:
  case 5.605194e-44:
    uVar3 = this->mbr_0x1c8;
    goto LAB_005ddf6c;
  case 4.624285e-44:
  case 4.904545e-44:
  case 5.184804e-44:
  case 5.465064e-44:
  case 5.745324e-44:
    if (this->mbr_0xac == 0) {
      FUN_005dc2ec((int)this,(byte *)"coissue not supported in vertex shaders");
    }
    uVar3 = this->mbr_0x1c8 | 0x40000000;
LAB_005ddf6c:
    meth_0x482e51((cls_0x5d6554 *)&this->mbr_0x54,uVar3);
    meth_0x482e51((cls_0x5d6554 *)&this->mbr_0x54,this->mbr_0x1cc);
    meth_0x5dd1a3(this);
    break;
  case 5.885454e-44:
  case 6.025583e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x24,&local_8);
    local_18 = (float)(int)local_8;
    if ((int)local_8 < 0) {
      local_18 = local_18 + 4.294967e+09;
    }
    goto LAB_005de055;
  case 6.165713e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x24,&local_8);
    local_18 = (float)(int)local_8;
    if ((int)local_8 < 0) {
      local_18 = local_18 + 4.294967e+09;
    }
    local_18 = -local_18;
    goto LAB_005de055;
  case 6.586103e-44:
    meth_0x482fb6((cls_0x5d6554 *)&this->mbr_0x34,&local_18);
    local_18 = -local_18;
    goto LAB_005de055;
  case 6.726233e-44:
    meth_0x482f03(this,&this->mbr_0xc8);
    local_8 = (float)this->mbr_0x1d0;
    this_00 = (cls_0x5d6554 *)&this->mbr_0x14;
    goto LAB_005de058;
  case 6.866362e-44:
    local_8 = (float)_atol((char *)&this->mbr_0xc8);
    this_00 = (cls_0x5d6554 *)&this->mbr_0x24;
    goto LAB_005de058;
  case 7.006492e-44:
    _sscanf((char *)&this->mbr_0xc8,"%f",&local_18);
LAB_005de055:
    this_00 = (cls_0x5d6554 *)&this->mbr_0x34;
    local_8 = local_18;
LAB_005de058:
    meth_0x482e51(this_00,local_8);
  }
  iVar4 = Get_mbr_0xc_set_to_0(this);
  if (((iVar4 < 0) || (iVar4 = Get_mbr_0xc_set_to_0((cls_0x5d6554 *)&this->mbr_0x14), iVar4 < 0)) ||
     ((iVar4 = Get_mbr_0xc_set_to_0((cls_0x5d6554 *)&this->mbr_0x24), iVar4 < 0 ||
      (((iVar4 = Get_mbr_0xc_set_to_0((cls_0x5d6554 *)&this->mbr_0x44), iVar4 < 0 ||
        (iVar4 = Get_mbr_0xc_set_to_0((cls_0x5d6554 *)&this->mbr_0x74), iVar4 < 0)) ||
       (iVar4 = Get_mbr_0xc_set_to_0((cls_0x5d6554 *)&this->mbr_0x34), iVar4 < 0)))))) {
    FUN_005dc2ec((int)this,(byte *)"Internal assembler error! %d");
  }
  return;
}


