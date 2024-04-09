#include "../include/cls_0x5ed42e.h"

int __thiscall cls_0x5ed42e::meth_0x5ed42e(cls_0x5ed42e *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (((int *)this->mbr_0x10)[2] == 0) {
    uVar1 = this->mbr_0x8;
    uVar3 = uVar1 >> 0x18;
    if (uVar3 == 1) {
      (**(code **)(*(int *)this->mbr_0x0 + 200))((int *)this->mbr_0x0,uVar1 & 0xffffff,param_1);
    }
    else if (uVar3 == 2) {
      (**(code **)(*(int *)this->mbr_0x0 + 0xfc))
                ((int *)this->mbr_0x0,this->mbr_0xc,uVar1 & 0xffffff,param_1);
    }
    else if (uVar3 == 3) {
      if (uVar1 == 0x3000000) {
        *(int *)this->mbr_0x1c = param_1;
        (**(code **)(*(int *)this->mbr_0x0 + 0xb0))
                  ((int *)this->mbr_0x0,this->mbr_0xc,this->mbr_0x1c);
      }
      else if (uVar1 == 0x300000d) {
        (**(code **)(*(int *)this->mbr_0x0 + 0xb8))((int *)this->mbr_0x0,this->mbr_0xc,param_1);
      }
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)this->mbr_0x10 + 0xc))(param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = meth_0x5eda6f(this,(int *)this->mbr_0x10);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  return 0;
}



int __thiscall cls_0x5ed42e::meth_0x5ed4dc(cls_0x5ed42e *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (((int *)this->mbr_0x10)[2] == 1) {
    uVar1 = this->mbr_0x8;
    uVar3 = uVar1 >> 0x18;
    if (uVar3 == 1) {
      (**(code **)(*(int *)this->mbr_0x0 + 200))((int *)this->mbr_0x0,uVar1 & 0xffffff,param_1);
    }
    else if (uVar3 == 2) {
      (**(code **)(*(int *)this->mbr_0x0 + 0xfc))
                ((int *)this->mbr_0x0,this->mbr_0xc,uVar1 & 0xffffff,param_1);
    }
    else if (uVar3 == 3) {
      if (uVar1 == 0x3000006) {
        *(int *)(this->mbr_0x1c + 0x4c) = param_1;
      }
      else if (uVar1 == 0x3000007) {
        *(int *)(this->mbr_0x1c + 0x50) = param_1;
      }
      else if (uVar1 == 0x3000008) {
        *(int *)(this->mbr_0x1c + 0x54) = param_1;
      }
      else if (uVar1 == 0x3000009) {
        *(int *)(this->mbr_0x1c + 0x58) = param_1;
      }
      else if (uVar1 == 0x300000a) {
        *(int *)(this->mbr_0x1c + 0x5c) = param_1;
      }
      else if (uVar1 == 0x300000b) {
        *(int *)(this->mbr_0x1c + 0x60) = param_1;
      }
      else {
        if (uVar1 != 0x300000c) {
          return 0;
        }
        *(int *)(this->mbr_0x1c + 100) = param_1;
      }
      (**(code **)(*(int *)this->mbr_0x0 + 0xb0))((int *)this->mbr_0x0,this->mbr_0xc,this->mbr_0x1c)
      ;
    }
    else if ((uVar3 == 4) && (uVar1 == 0x4000004)) {
      *(int *)(this->mbr_0x1c + 0x40) = param_1;
      (**(code **)(*(int *)this->mbr_0x0 + 0xa8))((int *)this->mbr_0x0,this->mbr_0x1c);
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)this->mbr_0x10 + 0x10))(param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = meth_0x5eda6f(this,(int *)this->mbr_0x10);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  return 0;
}



int __thiscall cls_0x5ed42e::meth_0x5ed60c(cls_0x5ed42e *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((int *)this->mbr_0x10)[2] == 2) {
    uVar1 = this->mbr_0x8;
    if (uVar1 >> 0x18 == 3) {
      if (uVar1 == 0x3000001) {
        *(int *)(this->mbr_0x1c + 4) = *param_1;
        *(int *)(this->mbr_0x1c + 8) = param_1[1];
        *(int *)(this->mbr_0x1c + 0xc) = param_1[2];
        *(int *)(this->mbr_0x1c + 0x10) = param_1[3];
      }
      else if (uVar1 == 0x3000002) {
        *(int *)(this->mbr_0x1c + 0x14) = *param_1;
        *(int *)(this->mbr_0x1c + 0x18) = param_1[1];
        *(int *)(this->mbr_0x1c + 0x1c) = param_1[2];
        *(int *)(this->mbr_0x1c + 0x20) = param_1[3];
      }
      else if (uVar1 == 0x3000003) {
        *(int *)(this->mbr_0x1c + 0x24) = *param_1;
        *(int *)(this->mbr_0x1c + 0x28) = param_1[1];
        *(int *)(this->mbr_0x1c + 0x2c) = param_1[2];
        *(int *)(this->mbr_0x1c + 0x30) = param_1[3];
      }
      else if (uVar1 == 0x3000004) {
        *(int *)(this->mbr_0x1c + 0x34) = *param_1;
        *(int *)(this->mbr_0x1c + 0x38) = param_1[1];
        *(int *)(this->mbr_0x1c + 0x3c) = param_1[2];
      }
      else {
        if (uVar1 != 0x3000005) {
          return 0;
        }
        *(int *)(this->mbr_0x1c + 0x40) = *param_1;
        *(int *)(this->mbr_0x1c + 0x44) = param_1[1];
        *(int *)(this->mbr_0x1c + 0x48) = param_1[2];
      }
      (**(code **)(*(int *)this->mbr_0x0 + 0xb0))((int *)this->mbr_0x0,this->mbr_0xc,this->mbr_0x1c)
      ;
    }
    else if (uVar1 >> 0x18 == 4) {
      if (uVar1 == 0x4000000) {
        *(int *)this->mbr_0x1c = *param_1;
        *(int *)(this->mbr_0x1c + 4) = param_1[1];
        *(int *)(this->mbr_0x1c + 8) = param_1[2];
        *(int *)(this->mbr_0x1c + 0xc) = param_1[3];
      }
      else if (uVar1 == 0x4000001) {
        *(int *)(this->mbr_0x1c + 0x10) = *param_1;
        *(int *)(this->mbr_0x1c + 0x14) = param_1[1];
        *(int *)(this->mbr_0x1c + 0x18) = param_1[2];
        *(int *)(this->mbr_0x1c + 0x1c) = param_1[3];
      }
      else if (uVar1 == 0x4000002) {
        *(int *)(this->mbr_0x1c + 0x20) = *param_1;
        *(int *)(this->mbr_0x1c + 0x24) = param_1[1];
        *(int *)(this->mbr_0x1c + 0x28) = param_1[2];
        *(int *)(this->mbr_0x1c + 0x2c) = param_1[3];
      }
      else {
        if (uVar1 != 0x4000003) {
          return 0;
        }
        *(int *)(this->mbr_0x1c + 0x30) = *param_1;
        *(int *)(this->mbr_0x1c + 0x34) = param_1[1];
        *(int *)(this->mbr_0x1c + 0x38) = param_1[2];
        *(int *)(this->mbr_0x1c + 0x3c) = param_1[3];
      }
      (**(code **)(*(int *)this->mbr_0x0 + 0xa8))((int *)this->mbr_0x0,this->mbr_0x1c);
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)this->mbr_0x10 + 0x14))(param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = meth_0x5eda6f(this,(int *)this->mbr_0x10);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  return 0;
}



int __thiscall cls_0x5ed42e::meth_0x5ed80e(cls_0x5ed42e *this,undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((int *)this->mbr_0x10)[2] == 3) {
    uVar1 = this->mbr_0x8;
    if ((uVar1 & 0xff000000) == 0x7000000) {
      if (uVar1 == 0x7000000) {
        uVar3 = 3;
      }
      else {
        if (uVar1 != 0x7000001) {
          if (uVar1 == 0x7000002) {
            iVar2 = this->mbr_0xc + 0x100;
          }
          else {
            if (uVar1 != 0x7000003) {
              return 0;
            }
            iVar2 = this->mbr_0xc + 0x10;
          }
          (**(code **)(*(int *)this->mbr_0x0 + 0x94))((int *)this->mbr_0x0,iVar2,param_1);
          return 0;
        }
        uVar3 = 2;
      }
      (**(code **)(*(int *)this->mbr_0x0 + 0x94))((int *)this->mbr_0x0,uVar3,param_1);
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)this->mbr_0x10 + 0x18))(param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = meth_0x5eda6f(this,(int *)this->mbr_0x10);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  return 0;
}



int __thiscall cls_0x5ed42e::meth_0x5ed89a(cls_0x5ed42e *this,undefined4 param_1)

{
  int iVar1;
  
  if (((int *)this->mbr_0x10)[2] == 4) {
    if ((this->mbr_0x8 & 0xff000000) == 0x5000000) {
      (**(code **)(*(int *)this->mbr_0x0 + 0xf4))((int *)this->mbr_0x0,this->mbr_0xc,param_1);
    }
  }
  else {
    iVar1 = (**(code **)(*(int *)this->mbr_0x10 + 0x20))(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = meth_0x5eda6f(this,(int *)this->mbr_0x10);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return 0;
}



int __thiscall cls_0x5ed42e::meth_0x5ed8ea(cls_0x5ed42e *this,undefined4 param_1)

{
  int iVar1;
  
  if (((int *)this->mbr_0x10)[2] == 5) {
    if (((this->mbr_0x8 & 0xff000000) == 0x6000000) && (this->mbr_0x8 == 0x6000000)) {
      (**(code **)(*(int *)this->mbr_0x0 + 0x130))((int *)this->mbr_0x0,param_1);
    }
  }
  else {
    iVar1 = (**(code **)(*(int *)this->mbr_0x10 + 0x24))(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = meth_0x5eda6f(this,(int *)this->mbr_0x10);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return 0;
}



int __thiscall cls_0x5ed42e::meth_0x5ed940(cls_0x5ed42e *this,undefined4 param_1)

{
  int iVar1;
  
  if (((int *)this->mbr_0x10)[2] == 6) {
    if (((this->mbr_0x8 & 0xff000000) == 0x6000000) && (this->mbr_0x8 == 0x6000001)) {
      (**(code **)(*(int *)this->mbr_0x0 + 0x160))((int *)this->mbr_0x0,param_1);
    }
  }
  else {
    iVar1 = (**(code **)(*(int *)this->mbr_0x10 + 0x28))(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = meth_0x5eda6f(this,(int *)this->mbr_0x10);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return 0;
}



undefined4 __thiscall cls_0x5ed42e::meth_0x5ed998(cls_0x5ed42e *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = this->mbr_0x8;
  if ((uVar1 & 0xff000000) != 0x6000000) {
    return 0;
  }
  if (uVar1 < 0x6000204) {
    if (uVar1 == 0x6000203) {
      uVar2 = 2;
      goto LAB_005ed9e2;
    }
    if (uVar1 == 0x6000002) {
      (**(code **)(*(int *)this->mbr_0x0 + 0x13c))
                ((int *)this->mbr_0x0,this->mbr_0xc,*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0xc));
      return 0;
    }
    if (uVar1 == 0x6000003) {
      (**(code **)(*(int *)this->mbr_0x0 + 0x16c))
                ((int *)this->mbr_0x0,this->mbr_0xc,*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0xc));
      return 0;
    }
    if (uVar1 == 0x6000102) {
      uVar2 = 1;
    }
    else {
      if (uVar1 == 0x6000103) {
        uVar2 = 1;
        goto LAB_005ed9e2;
      }
      if (uVar1 != 0x6000202) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  else {
    if (uVar1 != 0x6000302) {
      if (uVar1 == 0x6000303) {
        uVar2 = 3;
      }
      else {
        if (uVar1 == 0x6000402) {
          uVar2 = 4;
          goto LAB_005eda54;
        }
        if (uVar1 != 0x6000403) {
          return 0;
        }
        uVar2 = 4;
      }
LAB_005ed9e2:
      (**(code **)(*(int *)this->mbr_0x0 + 0x16c))
                ((int *)this->mbr_0x0,this->mbr_0xc,*(undefined4 *)(param_1 + 0x14),uVar2);
      return 0;
    }
    uVar2 = 3;
  }
LAB_005eda54:
  (**(code **)(*(int *)this->mbr_0x0 + 0x13c))
            ((int *)this->mbr_0x0,this->mbr_0xc,*(undefined4 *)(param_1 + 0x14),uVar2);
  return 0;
}



int __thiscall cls_0x5ed42e::meth_0x5eda6f(cls_0x5ed42e *this,int *param_1)

{
  int iVar1;
  
  switch(param_1[2]) {
  case 0:
    iVar1 = meth_0x5ed42e(this,param_1[3]);
    break;
  case 1:
    iVar1 = meth_0x5ed4dc(this,param_1[3]);
    break;
  case 2:
    iVar1 = meth_0x5ed60c(this,param_1 + 3);
    break;
  case 3:
    iVar1 = meth_0x5ed80e(this,param_1 + 3);
    break;
  case 4:
    iVar1 = meth_0x5ed89a(this,param_1[3]);
    break;
  case 5:
    (**(code **)(*param_1 + 0x48))(&param_1);
    iVar1 = meth_0x5ed8ea(this,param_1);
    break;
  case 6:
    (**(code **)(*param_1 + 0x4c))(&param_1);
    iVar1 = meth_0x5ed940(this,param_1);
    break;
  case 7:
    iVar1 = meth_0x5ed998(this,(int)param_1);
    break;
  case 8:
    iVar1 = meth_0x5edc35(this,param_1[4]);
    break;
  default:
    iVar1 = 0;
  }
  return iVar1;
}



int __thiscall cls_0x5ed42e::meth_0x5edb38(cls_0x5ed42e *this,undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)this->mbr_0x10;
  if (piVar1[2] != 7) {
    iVar3 = (**(code **)(*piVar1 + 0x1c))(param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar3 = meth_0x5eda6f(this,(int *)this->mbr_0x10);
    if (-1 < iVar3) {
      return 0;
    }
    return iVar3;
  }
  uVar2 = this->mbr_0x8;
  if ((uVar2 & 0xff000000) != 0x6000000) {
    return 0;
  }
  if (uVar2 < 0x6000204) {
    if (uVar2 == 0x6000203) {
      uVar4 = 2;
      goto LAB_005edc00;
    }
    if (uVar2 == 0x6000002) {
      (**(code **)(*(int *)this->mbr_0x0 + 0x13c))
                ((int *)this->mbr_0x0,this->mbr_0xc,param_1,piVar1[3]);
      return 0;
    }
    if (uVar2 == 0x6000003) {
      (**(code **)(*(int *)this->mbr_0x0 + 0x16c))
                ((int *)this->mbr_0x0,this->mbr_0xc,param_1,piVar1[3]);
      return 0;
    }
    if (uVar2 == 0x6000102) {
      uVar4 = 1;
    }
    else {
      if (uVar2 == 0x6000103) {
        uVar4 = 1;
        goto LAB_005edc00;
      }
      if (uVar2 != 0x6000202) {
        return 0;
      }
      uVar4 = 2;
    }
  }
  else {
    if (uVar2 != 0x6000302) {
      if (uVar2 == 0x6000303) {
        uVar4 = 3;
      }
      else {
        if (uVar2 == 0x6000402) {
          uVar4 = 4;
          goto LAB_005edc1d;
        }
        if (uVar2 != 0x6000403) {
          return 0;
        }
        uVar4 = 4;
      }
LAB_005edc00:
      (**(code **)(*(int *)this->mbr_0x0 + 0x16c))((int *)this->mbr_0x0,this->mbr_0xc,param_1,uVar4)
      ;
      return 0;
    }
    uVar4 = 3;
  }
LAB_005edc1d:
  (**(code **)(*(int *)this->mbr_0x0 + 0x13c))((int *)this->mbr_0x0,this->mbr_0xc,param_1,uVar4);
  return 0;
}



int __thiscall cls_0x5ed42e::meth_0x5edc35(cls_0x5ed42e *this,undefined4 param_1)

{
  int iVar1;
  
  if (((int *)this->mbr_0x10)[2] != 8) {
    iVar1 = (**(code **)(*(int *)this->mbr_0x10 + 0x2c))(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = meth_0x5eda6f(this,(int *)this->mbr_0x10);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return 0;
}



void __thiscall cls_0x5ed42e::meth_0x5edc62(cls_0x5ed42e *this)

{
  int *piVar1;
  
  if (this->mbr_0x14 == 0) {
    piVar1 = (int *)this->mbr_0x10;
  }
  else {
    piVar1 = *(int **)(this->mbr_0x14 + 0xc);
  }
  meth_0x5eda6f(this,piVar1);
  return;
}


