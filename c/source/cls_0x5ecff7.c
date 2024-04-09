#include "../include/cls_0x5ecff7.h"

/* WARNING: Type propagation algorithm not settling */

int __thiscall cls_0x5ecff7::meth_0x5ecff7(cls_0x5ecff7 *this,int param_1)

{
  dword dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  cls_0x5ecff7 *local_8;
  
  local_8 = this;
  if ((this->mbr_0x14 != 0) &&
     (iVar3 = cls_0x5f429a::meth_0x5f429a
                        ((cls_0x5f429a *)this->mbr_0x10,*(int **)(this->mbr_0x14 + 0xc)), iVar3 < 0)
     ) {
    return iVar3;
  }
  uVar4 = this->mbr_0x8;
  uVar5 = uVar4 >> 0x18;
  if (uVar5 == 1) {
    if (*(int *)(this->mbr_0x10 + 8) != 0) {
      return 0;
    }
    iVar3 = *(int *)(this->mbr_0x10 + 0xc);
    uVar4 = uVar4 & 0xffffff;
    cVar2 = (char)iVar3;
    if (uVar4 == 0x13) {
      if (iVar3 == 0) {
        return -0x7fffbffb;
      }
      bVar6 = (*(uint *)(param_1 + 0x2c) & 1 << (cVar2 - 1U & 0x1f)) == 0;
    }
    else if (uVar4 == 0x14) {
      if (iVar3 == 0) {
        return -0x7fffbffb;
      }
      bVar6 = (*(uint *)(param_1 + 0x30) & 1 << (cVar2 - 1U & 0x1f)) == 0;
    }
    else if (uVar4 == 0x17) {
      if (iVar3 == 0) {
        return -0x7fffbffb;
      }
      bVar6 = (*(uint *)(param_1 + 0x28) & 1 << (cVar2 - 1U & 0x1f)) == 0;
    }
    else if (uVar4 == 0x19) {
      if (iVar3 == 0) {
        return -0x7fffbffb;
      }
      bVar6 = (*(uint *)(param_1 + 0x34) & 1 << (cVar2 - 1U & 0x1f)) == 0;
    }
    else {
      if (uVar4 < 0x35) {
        return 0;
      }
      if (uVar4 < 0x38) {
        if (iVar3 == 0) {
          return -0x7fffbffb;
        }
        bVar6 = (*(uint *)(param_1 + 0x88) & 1 << (cVar2 - 1U & 0x1f)) == 0;
      }
      else {
        if (uVar4 != 0xab) {
          return 0;
        }
        if (iVar3 == 1) {
          return 0;
        }
        if (iVar3 == 0) {
          return -0x7fffbffb;
        }
        bVar6 = (*(byte *)(param_1 + 0x21) & 8) == 0;
      }
    }
    goto LAB_005ed41f;
  }
  if (uVar5 == 2) {
    if (7 < this->mbr_0xc) {
      return -0x7fffbffb;
    }
    if (*(int *)(this->mbr_0x10 + 8) != 0) {
      return 0;
    }
    uVar5 = *(uint *)(this->mbr_0x10 + 0xc);
    uVar4 = uVar4 & 0xffffff;
    cVar2 = (char)uVar5;
    if (uVar4 < 0x12) {
      if (uVar4 == 0x11) {
        if (uVar5 == 0) {
          return -0x7fffbffb;
        }
        iVar3 = 0x100;
      }
      else {
        if ((uVar4 == 1) || (uVar4 == 4)) {
          if ((uVar5 != 1) && (*(uint *)(param_1 + 0x94) <= this->mbr_0xc)) {
            return -0x7fffbffb;
          }
          if (uVar5 == 0) {
            return -0x7fffbffb;
          }
          bVar6 = (*(uint *)(param_1 + 0x90) & 1 << (cVar2 - 1U & 0x1f)) == 0;
          goto LAB_005ed41f;
        }
        if (uVar4 == 0xb) {
          if (uVar5 == 0) {
            return 0;
          }
          bVar6 = (*(byte *)(param_1 + 0x9c) & 1) == 0;
          goto LAB_005ed41f;
        }
        if (uVar4 < 0xd) {
          return 0;
        }
        if (uVar4 < 0xf) {
          if (uVar5 == 0) {
            return -0x7fffbffb;
          }
          bVar6 = (*(uint *)(param_1 + 0x4c) & 1 << (cVar2 - 1U & 0x1f)) == 0;
          goto LAB_005ed41f;
        }
        if (uVar4 != 0x10) {
          return 0;
        }
        if (uVar5 == 0) {
          return -0x7fffbffb;
        }
        iVar3 = 0x1000000;
      }
    }
    else {
      if (uVar4 != 0x12) {
        if (uVar4 == 0x18) {
          if (((uVar5 & 0x100) != 0) && ((*(byte *)(param_1 + 0x3d) & 4) == 0)) {
            return -0x7fffbffb;
          }
          uVar4 = (uVar5 & 0xff) - (uVar5 >> 8 & 1);
          if (uVar4 < 3) {
            return 0;
          }
          if (uVar4 != 3) {
            return -0x7fffbffb;
          }
          bVar6 = (*(byte *)(param_1 + 0x3d) & 0x28) == 0;
        }
        else if (uVar4 == 0x19) {
          if (uVar5 == 0) {
            return -0x7fffbffb;
          }
          bVar6 = (*(uint *)(param_1 + 0x50) & 1 << (cVar2 - 1U & 0x1f)) == 0;
        }
        else {
          if (uVar4 != 0x1c) {
            return 0;
          }
          if (uVar5 == 1) {
            return 0;
          }
          if (uVar5 != 5) {
            return -0x7fffbffb;
          }
          bVar6 = (*(byte *)(param_1 + 0x21) & 4) == 0;
        }
        goto LAB_005ed41f;
      }
      if (uVar5 == 0) {
        return 0;
      }
      iVar3 = 0x10000;
    }
    bVar6 = (*(uint *)(param_1 + 0x40) & iVar3 << (cVar2 - 1U & 0x1f)) == 0;
    goto LAB_005ed41f;
  }
  if (uVar5 == 5) {
LAB_005ed04d:
    if (this->mbr_0xc < 8) {
      return 0;
    }
    return -0x7fffbffb;
  }
  if (uVar5 != 6) {
    if (uVar5 != 7) {
      return 0;
    }
    if (uVar4 != 0x7000002) {
      if (uVar4 != 0x7000003) {
        return 0;
      }
      goto LAB_005ed04d;
    }
    bVar6 = this->mbr_0xc < *(uint *)(param_1 + 0xac);
    bVar7 = this->mbr_0xc == *(uint *)(param_1 + 0xac);
    goto LAB_005ed1ca;
  }
  if (0x6000202 < uVar4) {
    if (uVar4 != 0x6000203) {
      if (uVar4 == 0x6000302) goto LAB_005ed126;
      if (uVar4 != 0x6000303) {
        iVar3 = uVar4 + 0xf9fffbfe;
LAB_005ed0e0:
        if (iVar3 == 0) goto LAB_005ed126;
        if (iVar3 != 1) {
          return 0;
        }
      }
    }
LAB_005ed0e9:
    dVar1 = this->mbr_0x10;
    if (*(int *)(dVar1 + 0x14) == 0) {
      return -0x7fffbffb;
    }
    if (uVar4 == 0x6000103) {
      local_8 = (cls_0x5ecff7 *)0x1;
    }
    else if (uVar4 == 0x6000203) {
      local_8 = (cls_0x5ecff7 *)0x2;
    }
    else if (uVar4 == 0x6000303) {
      local_8 = (cls_0x5ecff7 *)0x3;
    }
    else if (uVar4 == 0x6000403) {
      local_8 = (cls_0x5ecff7 *)0x4;
    }
    else {
      local_8 = *(cls_0x5ecff7 **)(dVar1 + 0xc);
    }
    if (*(cls_0x5ecff7 **)(dVar1 + 0xc) < local_8) {
      return -0x7fffbffb;
    }
    bVar6 = &local_8->field_0x0 + this->mbr_0xc < (undefined *)0x10;
    bVar7 = &local_8->field_0x0 + this->mbr_0xc == (undefined *)0x10;
    goto LAB_005ed1ca;
  }
  if (uVar4 == 0x6000202) {
LAB_005ed126:
    dVar1 = this->mbr_0x10;
    if (*(int *)(dVar1 + 0x14) == 0) {
      return -0x7fffbffb;
    }
    if (uVar4 == 0x6000102) {
      local_8 = (cls_0x5ecff7 *)0x1;
    }
    else if (uVar4 == 0x6000202) {
      local_8 = (cls_0x5ecff7 *)0x2;
    }
    else if (uVar4 == 0x6000302) {
      local_8 = (cls_0x5ecff7 *)0x3;
    }
    else if (uVar4 == 0x6000402) {
      local_8 = (cls_0x5ecff7 *)0x4;
    }
    else {
      local_8 = *(cls_0x5ecff7 **)(dVar1 + 0xc);
    }
    if (*(cls_0x5ecff7 **)(dVar1 + 0xc) < local_8) {
      return -0x7fffbffb;
    }
    bVar6 = &local_8->field_0x0 + this->mbr_0xc < *(undefined **)(param_1 + 200);
    bVar7 = &local_8->field_0x0 + this->mbr_0xc == *(undefined **)(param_1 + 200);
LAB_005ed1ca:
    if (bVar6 || bVar7) {
      return 0;
    }
    return -0x7fffbffb;
  }
  if (uVar4 == 0x6000000) {
    iVar3 = (**(code **)(*(int *)this->mbr_0x10 + 0x48))(&local_8);
  }
  else {
    if (uVar4 != 0x6000001) {
      if (uVar4 != 0x6000002) {
        if (uVar4 != 0x6000003) {
          iVar3 = uVar4 + 0xf9fffefe;
          goto LAB_005ed0e0;
        }
        goto LAB_005ed0e9;
      }
      goto LAB_005ed126;
    }
    iVar3 = (**(code **)(*(int *)this->mbr_0x10 + 0x4c))(&local_8);
  }
  if (iVar3 < 0) {
    return -0x7fffbffb;
  }
  bVar6 = local_8 == (cls_0x5ecff7 *)0xffffffff;
LAB_005ed41f:
  if (!bVar6) {
    return 0;
  }
  return -0x7fffbffb;
}


