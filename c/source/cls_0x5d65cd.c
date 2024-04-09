#include "../include/cls_0x5d65cd.h"

cls_0x5d65cd * __thiscall cls_0x5d65cd::cls_0x5d65cd(cls_0x5d65cd *this)

{
  this->mbr_0x0 = 0;
  return this;
}



undefined4 __thiscall cls_0x5d65cd::meth_0x5d65d3(cls_0x5d65cd *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1);
  }
  this->mbr_0x0 = 0;
  return 0;
}



undefined4 __thiscall cls_0x5d65cd::meth_0x5d65d3(cls_0x5d65cd *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1);
  }
  this->mbr_0x0 = 0;
  return 0;
}



int __thiscall
cls_0x5d65cd::meth_0x5d6a06
          (cls_0x5d65cd *this,undefined4 *param_1,int *param_2,undefined4 param_3,uint *param_4,
          undefined4 param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int local_6c [2];
  uint local_64;
  int local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c [4];
  uint local_3c;
  uint local_38;
  uint local_34 [4];
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  cls_0x5d65cd *local_10;
  uint local_c;
  int *local_8;
  
  local_10 = this;
  if (this->mbr_0x0 != 0) {
    meth_0x5d65d3(this);
  }
  (**(code **)(*param_2 + 0x20))(param_2,local_6c);
  if (param_4 == (uint *)0x0) {
    bVar1 = false;
    local_34[2] = local_58;
    local_34[3] = local_54;
    uVar3 = ~param_6 & 1;
    local_34[0] = 0;
    local_34[1] = 0;
    local_24 = 0;
    local_20 = local_50;
  }
  else {
    puVar6 = local_34;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *param_4;
      param_4 = param_4 + 1;
      puVar6 = puVar6 + 1;
    }
    if (local_58 < local_34[2]) {
      return -0x7789f794;
    }
    if (local_34[2] < local_34[0]) {
      return -0x7789f794;
    }
    if (local_54 < local_34[3]) {
      return -0x7789f794;
    }
    if (local_34[3] < local_34[1]) {
      return -0x7789f794;
    }
    if (local_50 < local_20) {
      return -0x7789f794;
    }
    if (local_20 < local_24) {
      return -0x7789f794;
    }
    if ((((local_34[0] != 0) || (local_34[2] != local_58)) || (local_34[1] != 0)) ||
       (((local_34[3] != local_54 || (local_24 != 0)) || (bVar1 = false, local_20 != local_50)))) {
      bVar1 = true;
    }
    if (((param_6 & 1) != 0) || (bVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  uVar2 = local_20;
  if ((local_60 == 0) && ((local_64 & 0x200) == 0)) {
    return -0x7789f794;
  }
  uVar5 = (param_6 & 1 | 0x80) << 4;
  local_c = uVar5;
  if ((uVar3 == 0) || ((local_64 & 0x200) == 0)) {
LAB_005d6b6e:
    if (bVar1) {
      if ((local_6c[0] != 0x31545844) && (local_6c[0] != 0x32545844)) {
        if (local_6c[0] != 0x32595559) {
          if (((local_6c[0] == 0x33545844) || (local_6c[0] == 0x34545844)) ||
             (local_6c[0] == 0x35545844)) goto LAB_005d6c39;
          if (local_6c[0] == 0x59565955) goto LAB_005d6bcf;
          puVar6 = local_34;
          puVar7 = local_4c;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_005d6ca3;
        }
LAB_005d6bcf:
        uVar3 = local_34[0] & 0xfffffffe;
        local_4c[2] = local_34[2] + 1 & 0xfffffffe;
        local_4c[3] = local_34[3];
        local_4c[1] = local_34[1];
        local_3c = local_24;
        if (local_58 < local_4c[2]) {
          local_4c[2] = local_58;
        }
        local_38 = uVar2;
        if ((((uVar3 == 0) && (local_4c[2] == local_58)) &&
            ((local_34[1] == 0 && ((local_34[3] == local_54 && (local_24 == 0)))))) &&
           (local_4c[0] = 0, uVar2 == local_50)) goto LAB_005d6cac;
LAB_005d6cc8:
        local_4c[0] = uVar3;
        iVar4 = (**(code **)(*param_2 + 0x24))(param_2,&local_1c,local_4c,uVar5);
        if (iVar4 < 0) {
          return iVar4;
        }
        local_34[0] = local_34[0] - local_4c[0];
        local_34[2] = local_34[2] - local_4c[0];
        local_34[1] = local_34[1] - local_4c[1];
        local_34[3] = local_34[3] - local_4c[1];
        local_24 = local_24 - local_3c;
        local_20 = uVar2 - local_3c;
        goto LAB_005d6cfb;
      }
LAB_005d6c39:
      local_4c[0] = local_34[0] & 0xfffffffc;
      local_4c[2] = local_34[2] + 3 & 0xfffffffc;
      local_4c[1] = local_34[1] & 0xfffffffc;
      local_4c[3] = local_34[3] + 3 & 0xfffffffc;
      local_3c = local_24;
      if (local_58 < local_4c[2]) {
        local_4c[2] = local_58;
      }
      if (local_54 < local_4c[3]) {
        local_4c[3] = local_54;
      }
      if (((((local_4c[0] != 0) || (local_4c[2] != local_58)) || (local_4c[1] != 0)) ||
          ((local_4c[3] != local_54 || (local_24 != 0)))) ||
         (uVar5 = local_c, local_38 = uVar2, uVar2 != local_50)) {
        bVar1 = true;
        local_38 = uVar2;
LAB_005d6ca3:
        uVar5 = local_c;
        uVar3 = local_4c[0];
        if (bVar1) goto LAB_005d6cc8;
      }
    }
  }
  else {
    if ((param_6 & 0x20000) == 0) {
      FUN_00482400(1);
      iVar4 = (**(code **)(*param_2 + 0x1c))(param_2,&DAT_00668f8c,&local_8);
      if (-1 < iVar4) {
        iVar4 = (**(code **)(*local_8 + 0x34))(local_8);
        if (iVar4 == 1) {
          uVar5 = uVar5 | 0x2000;
          bVar1 = false;
          local_c = uVar5;
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
      }
      FUN_00482400(0);
      goto LAB_005d6b6e;
    }
    uVar5 = uVar5 | 0x2000;
  }
LAB_005d6cac:
  iVar4 = (**(code **)(*param_2 + 0x24))(param_2,&local_1c,0,uVar5);
  if (iVar4 < 0) {
    return iVar4;
  }
LAB_005d6cfb:
  *param_1 = local_14;
  param_1[1] = local_6c[0];
  param_1[2] = local_1c;
  param_1[3] = local_18;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = local_50;
  puVar6 = local_34;
  puVar7 = param_1 + 10;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x11] = param_5;
  param_1[6] = local_58;
  param_1[0x12] = param_3;
  param_1[7] = local_54;
  param_1[0x10] = 1;
  local_10->mbr_0x0 = (dword)param_2;
  return 0;
}


