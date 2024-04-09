#include "../include/cls_0x6bb908.h"

int __thiscall cls_0x6bb908::meth_0x5e8ac6(cls_0x6bb908 *this)

{
  cls_0x5e89f7 *this_00;
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int *extraout_EDX;
  int *piVar5;
  int unaff_EBP;
  
  FUN_0061781c();
  piVar5 = *(int **)(unaff_EBP + 8);
  *(int **)(extraout_ECX + 8) = piVar5;
  (**(code **)(*piVar5 + 4))(piVar5);
  piVar5 = *(int **)(unaff_EBP + 0xc);
  *(int **)(extraout_ECX + 0xc) = piVar5;
  (**(code **)(*piVar5 + 4))(piVar5);
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    *(int *)(unaff_EBP + 0x10) = extraout_ECX;
  }
  piVar1 = (int *)(**(code **)(**(int **)(extraout_ECX + 0xc) + 0xc))(*(int **)(extraout_ECX + 0xc))
  ;
  piVar5 = *(int **)(extraout_ECX + 0xc);
  iVar3 = *piVar5;
  *(int **)(unaff_EBP + 0xc) = piVar1;
  uVar2 = (**(code **)(iVar3 + 0x10))(piVar5);
  if (((uVar2 >> 2 < 3) || (*piVar1 != 0x31385846)) ||
     (iVar3 = (**(code **)(**(int **)(extraout_ECX + 0xc) + 0x10))(*(int **)(extraout_ECX + 0xc)),
     iVar3 != (piVar1[2] + piVar1[1]) * 4 + 0xc)) {
    iVar3 = -0x7789f4a7;
  }
  else {
    this_00 = *(cls_0x5e89f7 **)(unaff_EBP + 0xc);
    piVar5 = (int *)(extraout_ECX + 0x10);
    *piVar5 = 0;
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
    for (piVar1 = (int *)cls_0x5e89f7::meth_0x5e89f7(this_00); piVar1 != (int *)0x0;
        piVar1 = (int *)cls_0x5e89f7::meth_0x5e8a08(*(cls_0x5e89f7 **)(unaff_EBP + 0xc),(int)piVar1)
        ) {
      if (*piVar1 == 0x48434554) {
        *(int *)(extraout_ECX + 0x14) = *(int *)(extraout_ECX + 0x14) + 1;
      }
      else if (*piVar1 == 0x4d524150) {
        *piVar5 = *piVar5 + 1;
      }
    }
    iVar3 = *piVar5;
    piVar1 = (int *)operator_new(iVar3 * 0x10 + 4);
    *(int **)(unaff_EBP + 8) = piVar1;
    piVar5 = (int *)0x0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (piVar1 != (int *)0x0) {
      piVar5 = piVar1 + 1;
      *piVar1 = iVar3;
      _eh_vector_constructor_iterator_(piVar5,0x10,iVar3,ctor_0x5ec80a,cls_0x5e8a30::meth_0x5ec81a);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(extraout_ECX + 0x18) = piVar5;
    if (piVar5 != (int *)0x0) {
      iVar3 = *(int *)(extraout_ECX + 0x14);
      piVar5 = (int *)operator_new(iVar3 * 0x1c + 4);
      *(int **)(unaff_EBP + 8) = piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (piVar5 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = piVar5 + 1;
        *piVar5 = iVar3;
        _eh_vector_constructor_iterator_(piVar1,0x1c,iVar3,ctor_0x5ec91e,FUN_005ecc65);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int **)(extraout_ECX + 0x1c) = piVar1;
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        piVar1 = (int *)cls_0x5e89f7::meth_0x5e89f7(*(cls_0x5e89f7 **)(unaff_EBP + 0xc));
        piVar5 = extraout_EDX;
        if (piVar1 != extraout_EDX) {
          *(int **)(unaff_EBP + 8) = extraout_EDX;
          do {
            if (*piVar1 == 0x48434554) {
              iVar3 = FUN_005ec97e();
              if (iVar3 < 0) goto LAB_005e8caa;
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
            }
            else if (*piVar1 == 0x4d524150) {
              iVar3 = cls_0x5ec82f::meth_0x5ec82f
                                ((cls_0x5ec82f *)
                                 (*(int *)(extraout_ECX + 0x18) + *(int *)(unaff_EBP + 8)),
                                 extraout_ECX,piVar1,*(int **)(unaff_EBP + -0x10),
                                 (int **)(*(int *)(*(int *)(unaff_EBP + 0x10) + 0x18) +
                                         *(int *)(unaff_EBP + 8)));
              if (iVar3 < 0) goto LAB_005e8caa;
              *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
              *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x10;
            }
            piVar1 = (int *)cls_0x5e89f7::meth_0x5e8a08
                                      (*(cls_0x5e89f7 **)(unaff_EBP + 0xc),(int)piVar1);
          } while (piVar1 != (int *)0x0);
          piVar5 = (int *)0x0;
        }
        if (*(int **)(extraout_ECX + 0x14) == piVar5) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(extraout_ECX + 0x1c);
        }
        *(undefined4 *)(extraout_ECX + 0x20) = uVar4;
        *(int **)(extraout_ECX + 0x24) = piVar5;
        *(int **)(extraout_ECX + 0x28) = piVar5;
        iVar3 = 0;
        goto LAB_005e8caa;
      }
    }
    iVar3 = -0x7ff8fff2;
  }
LAB_005e8caa:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}



undefined4 __thiscall
cls_0x6bb908::virt_meth_0x5e8dd4(cls_0x6bb908 *this,int *param_1,int **param_2)

{
  int iVar1;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  int **in_stack_0000000c;
  
  iVar1 = 4;
  bVar4 = true;
  ppiVar2 = param_2;
  ppiVar3 = (int **)&DAT_00668f2c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *ppiVar2 == *ppiVar3;
    ppiVar2 = ppiVar2 + 1;
    ppiVar3 = ppiVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 4;
    bVar4 = true;
    ppiVar2 = (int **)&DAT_006692c0;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *param_2 == *ppiVar2;
      param_2 = param_2 + 1;
      ppiVar2 = ppiVar2 + 1;
    } while (bVar4);
    if (!bVar4) {
      return 0x80004002;
    }
  }
  *in_stack_0000000c = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}



undefined4 __thiscall cls_0x6bb908::virt_meth_0x5e8e18(cls_0x6bb908 *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000008;
  
  if (in_stack_00000008 == (undefined4 *)0x0) {
    uVar1 = 0x8876086c;
  }
  else {
    (**(code **)(*(int *)param_1[2] + 4))((int *)param_1[2]);
    *in_stack_00000008 = param_1[2];
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 __thiscall
cls_0x6bb908::virt_meth_0x5e8e65(cls_0x6bb908 *this,byte *param_1,byte **param_2)

{
  byte **ppbVar1;
  byte **in_stack_0000000c;
  
  if ((in_stack_0000000c != (byte **)0x0) &&
     (ppbVar1 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,(byte *)param_2),
     ppbVar1 != (byte **)0x0)) {
    *in_stack_0000000c = *ppbVar1;
    in_stack_0000000c[1] = ppbVar1[1];
    in_stack_0000000c[2] = ppbVar1[2];
    return 0;
  }
  return 0x8876086c;
}



undefined4 __thiscall
cls_0x6bb908::virt_meth_0x5e8e95(cls_0x6bb908 *this,byte *param_1,byte **param_2)

{
  byte **ppbVar1;
  byte **in_stack_0000000c;
  
  if ((in_stack_0000000c != (byte **)0x0) &&
     (ppbVar1 = cls_0x5e8cba::meth_0x5e8cba((cls_0x5e8cba *)param_1,(byte *)param_2),
     ppbVar1 != (byte **)0x0)) {
    *in_stack_0000000c = *ppbVar1;
    in_stack_0000000c[1] = ppbVar1[1];
    in_stack_0000000c[2] = ppbVar1[2];
    return 0;
  }
  return 0x8876086c;
}



undefined4 __thiscall
cls_0x6bb908::virt_meth_0x5e8ec5(cls_0x6bb908 *this,byte *param_1,byte *param_2,byte **param_3)

{
  cls_0x5ecad3 *this_00;
  byte **ppbVar1;
  byte **in_stack_00000010;
  
  if (((in_stack_00000010 != (byte **)0x0) &&
      (this_00 = (cls_0x5ecad3 *)cls_0x5e8cba::meth_0x5e8cba((cls_0x5e8cba *)param_1,param_2),
      this_00 != (cls_0x5ecad3 *)0x0)) &&
     (ppbVar1 = cls_0x5ecad3::meth_0x5ecad3(this_00,(byte *)param_3), ppbVar1 != (byte **)0x0)) {
    *in_stack_00000010 = *ppbVar1;
    in_stack_00000010[1] = ppbVar1[1];
    return 0;
  }
  return 0x8876086c;
}



undefined4 __thiscall cls_0x6bb908::virt_meth_0x5e8f9c(cls_0x6bb908 *this,byte *param_1)

{
  byte **ppbVar1;
  byte *in_stack_00000008;
  
  if ((*(int *)(param_1 + 0x28) == 0) &&
     (ppbVar1 = cls_0x5e8cba::meth_0x5e8cba((cls_0x5e8cba *)param_1,in_stack_00000008),
     ppbVar1 != (byte **)0x0)) {
    *(byte ***)(param_1 + 0x20) = ppbVar1;
    return 0;
  }
  return 0x8876086c;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e8ff2(cls_0x6bb908 *this,byte *param_1,int param_2)

{
  byte **ppbVar1;
  int iVar2;
  cls_0x5ed42e *this_00;
  int in_stack_0000000c;
  
  ppbVar1 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,(byte *)param_2);
  if (ppbVar1 == (byte **)0x0) {
    iVar2 = -0x7789f794;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar2 = (**(code **)(*(int *)ppbVar1[3] + 0xc))(in_stack_0000000c);
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    else {
      for (this_00 = *(cls_0x5ed42e **)
                      (*(int *)(*(int *)(param_1 + 0x24) + 0x18) + (int)ppbVar1[1] * 4);
          this_00 != (cls_0x5ed42e *)0x0; this_00 = *(cls_0x5ed42e **)&this_00->field_0x18) {
        iVar2 = cls_0x5ed42e::meth_0x5ed42e(this_00,in_stack_0000000c);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e907f(cls_0x6bb908 *this,byte *param_1,int param_2)

{
  byte **ppbVar1;
  int iVar2;
  cls_0x5ed42e *this_00;
  int in_stack_0000000c;
  
  ppbVar1 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,(byte *)param_2);
  if (ppbVar1 == (byte **)0x0) {
    iVar2 = -0x7789f794;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar2 = (**(code **)(*(int *)ppbVar1[3] + 0x10))(in_stack_0000000c);
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    else {
      for (this_00 = *(cls_0x5ed42e **)
                      (*(int *)(*(int *)(param_1 + 0x24) + 0x18) + (int)ppbVar1[1] * 4);
          this_00 != (cls_0x5ed42e *)0x0; this_00 = *(cls_0x5ed42e **)&this_00->field_0x18) {
        iVar2 = cls_0x5ed42e::meth_0x5ed4dc(this_00,in_stack_0000000c);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e9114(cls_0x6bb908 *this,byte *param_1,int *param_2)

{
  int iVar1;
  byte **ppbVar2;
  cls_0x5ed42e *this_00;
  int *in_stack_0000000c;
  
  if (in_stack_0000000c == (int *)0x0) {
    iVar1 = -0x7789f794;
  }
  else {
    ppbVar2 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,(byte *)param_2);
    if (ppbVar2 == (byte **)0x0) {
      iVar1 = -0x7789f794;
    }
    else {
      if (*(int *)(param_1 + 0x24) == 0) {
        iVar1 = (**(code **)(*(int *)ppbVar2[3] + 0x14))(in_stack_0000000c);
        if (iVar1 < 0) {
          return iVar1;
        }
      }
      else {
        for (this_00 = *(cls_0x5ed42e **)
                        (*(int *)(*(int *)(param_1 + 0x24) + 0x18) + (int)ppbVar2[1] * 4);
            this_00 != (cls_0x5ed42e *)0x0; this_00 = *(cls_0x5ed42e **)&this_00->field_0x18) {
          iVar1 = cls_0x5ed42e::meth_0x5ed60c(this_00,in_stack_0000000c);
          if (iVar1 < 0) {
            return iVar1;
          }
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e91ae(cls_0x6bb908 *this,byte *param_1,int param_2)

{
  int iVar1;
  byte **ppbVar2;
  cls_0x5ed42e *this_00;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 0) {
    iVar1 = -0x7789f794;
  }
  else {
    ppbVar2 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,(byte *)param_2);
    if (ppbVar2 == (byte **)0x0) {
      iVar1 = -0x7789f794;
    }
    else {
      if (*(int *)(param_1 + 0x24) == 0) {
        iVar1 = (**(code **)(*(int *)ppbVar2[3] + 0x18))(in_stack_0000000c);
        if (iVar1 < 0) {
          return iVar1;
        }
      }
      else {
        for (this_00 = *(cls_0x5ed42e **)
                        (*(int *)(*(int *)(param_1 + 0x24) + 0x18) + (int)ppbVar2[1] * 4);
            this_00 != (cls_0x5ed42e *)0x0; this_00 = *(cls_0x5ed42e **)&this_00->field_0x18) {
          iVar1 = cls_0x5ed42e::meth_0x5ed80e(this_00,in_stack_0000000c);
          if (iVar1 < 0) {
            return iVar1;
          }
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e9248(cls_0x6bb908 *this,byte *param_1,int param_2)

{
  int iVar1;
  byte **ppbVar2;
  cls_0x5ed42e *this_00;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 0) {
    iVar1 = -0x7789f794;
  }
  else {
    ppbVar2 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,(byte *)param_2);
    if (ppbVar2 == (byte **)0x0) {
      iVar1 = -0x7789f794;
    }
    else {
      if (*(int *)(param_1 + 0x24) == 0) {
        iVar1 = (**(code **)(*(int *)ppbVar2[3] + 0x1c))(in_stack_0000000c);
        if (iVar1 < 0) {
          return iVar1;
        }
      }
      else {
        for (this_00 = *(cls_0x5ed42e **)
                        (*(int *)(*(int *)(param_1 + 0x24) + 0x18) + (int)ppbVar2[1] * 4);
            this_00 != (cls_0x5ed42e *)0x0; this_00 = *(cls_0x5ed42e **)&this_00->field_0x18) {
          iVar1 = cls_0x5ed42e::meth_0x5edb38(this_00,in_stack_0000000c);
          if (iVar1 < 0) {
            return iVar1;
          }
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e92e2(cls_0x6bb908 *this,byte *param_1,byte *param_2)

{
  byte **ppbVar1;
  int iVar2;
  cls_0x5ed42e *this_00;
  undefined4 in_stack_0000000c;
  
  ppbVar1 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,param_2);
  if (ppbVar1 == (byte **)0x0) {
    iVar2 = -0x7789f794;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar2 = (**(code **)(*(int *)ppbVar1[3] + 0x20))(in_stack_0000000c);
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    else {
      for (this_00 = *(cls_0x5ed42e **)
                      (*(int *)(*(int *)(param_1 + 0x24) + 0x18) + (int)ppbVar1[1] * 4);
          this_00 != (cls_0x5ed42e *)0x0; this_00 = *(cls_0x5ed42e **)&this_00->field_0x18) {
        iVar2 = cls_0x5ed42e::meth_0x5ed89a(this_00,in_stack_0000000c);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e936f(cls_0x6bb908 *this,byte *param_1,byte *param_2)

{
  byte **ppbVar1;
  int iVar2;
  cls_0x5ed42e *this_00;
  undefined4 in_stack_0000000c;
  
  ppbVar1 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,param_2);
  if (ppbVar1 == (byte **)0x0) {
    iVar2 = -0x7789f794;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar2 = (**(code **)(*(int *)ppbVar1[3] + 0x24))(in_stack_0000000c);
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    else {
      for (this_00 = *(cls_0x5ed42e **)
                      (*(int *)(*(int *)(param_1 + 0x24) + 0x18) + (int)ppbVar1[1] * 4);
          this_00 != (cls_0x5ed42e *)0x0; this_00 = *(cls_0x5ed42e **)&this_00->field_0x18) {
        iVar2 = cls_0x5ed42e::meth_0x5ed8ea(this_00,in_stack_0000000c);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e93fc(cls_0x6bb908 *this,byte *param_1,byte *param_2)

{
  byte **ppbVar1;
  int iVar2;
  cls_0x5ed42e *this_00;
  undefined4 in_stack_0000000c;
  
  ppbVar1 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,param_2);
  if (ppbVar1 == (byte **)0x0) {
    iVar2 = -0x7789f794;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar2 = (**(code **)(*(int *)ppbVar1[3] + 0x28))(in_stack_0000000c);
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    else {
      for (this_00 = *(cls_0x5ed42e **)
                      (*(int *)(*(int *)(param_1 + 0x24) + 0x18) + (int)ppbVar1[1] * 4);
          this_00 != (cls_0x5ed42e *)0x0; this_00 = *(cls_0x5ed42e **)&this_00->field_0x18) {
        iVar2 = cls_0x5ed42e::meth_0x5ed940(this_00,in_stack_0000000c);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e9489(cls_0x6bb908 *this,byte *param_1,byte *param_2)

{
  byte **ppbVar1;
  int iVar2;
  cls_0x5ed42e *this_00;
  undefined4 in_stack_0000000c;
  
  ppbVar1 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,param_2);
  if (ppbVar1 == (byte **)0x0) {
    iVar2 = -0x7789f794;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar2 = (**(code **)(*(int *)ppbVar1[3] + 0x2c))(in_stack_0000000c);
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    else {
      for (this_00 = *(cls_0x5ed42e **)
                      (*(int *)(*(int *)(param_1 + 0x24) + 0x18) + (int)ppbVar1[1] * 4);
          this_00 != (cls_0x5ed42e *)0x0; this_00 = *(cls_0x5ed42e **)&this_00->field_0x18) {
        iVar2 = cls_0x5ed42e::meth_0x5edc35(this_00,in_stack_0000000c);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



uint __thiscall cls_0x6bb908::virt_meth_0x5e9516(cls_0x6bb908 *this,byte *param_1)

{
  bool bVar1;
  byte **ppbVar2;
  undefined3 extraout_var;
  uint uVar3;
  byte *in_stack_00000008;
  
  ppbVar2 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,in_stack_00000008);
  if (ppbVar2 != (byte **)0x0) {
    if (*(cls_0x5ede9c **)(param_1 + 0x24) != (cls_0x5ede9c *)0x0) {
      bVar1 = cls_0x5ede9c::meth_0x5ede9c(*(cls_0x5ede9c **)(param_1 + 0x24),(int)ppbVar2[1]);
      return CONCAT31(extraout_var,bVar1);
    }
    if (*(cls_0x5ecb60 **)(param_1 + 0x20) != (cls_0x5ecb60 *)0x0) {
      uVar3 = cls_0x5ecb60::meth_0x5ecb60(*(cls_0x5ecb60 **)(param_1 + 0x20),(int)ppbVar2[1]);
      return uVar3;
    }
  }
  return 0;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e9578(cls_0x6bb908 *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint in_stack_0000000c;
  
  if (param_1[10] == 0) {
    if (((cls_0x5ecb96 *)param_1[8] != (cls_0x5ecb96 *)0x0) &&
       (iVar1 = cls_0x5ecb96::meth_0x5ecb96
                          ((cls_0x5ecb96 *)param_1[8],(undefined4 *)param_2,in_stack_0000000c),
       iVar1 < 0)) {
      return iVar1;
    }
    param_1[9] = 0;
    param_1[10] = 1;
    iVar1 = 0;
  }
  else {
    iVar1 = -0x7789f794;
  }
  return iVar1;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e95b3(cls_0x6bb908 *this,uint param_1)

{
  cls_0x5ecb96 *this_00;
  int iVar1;
  uint in_stack_00000008;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = -0x7789f794;
  }
  else {
    this_00 = *(cls_0x5ecb96 **)(param_1 + 0x20);
    if ((this_00 == (cls_0x5ecb96 *)0x0) || (this_00->mbr_0x8 <= in_stack_00000008)) {
      iVar1 = -0x7789f794;
    }
    else {
      iVar1 = cls_0x5ecb96::meth_0x5ecbfd(this_00,in_stack_00000008);
      if (-1 < iVar1) {
        iVar1 = 0;
        *(uint *)(param_1 + 0x24) =
             in_stack_00000008 * 0x1c + *(int *)(*(int *)(param_1 + 0x20) + 0x10);
      }
    }
  }
  return iVar1;
}



int __thiscall cls_0x6bb908::virt_meth_0x5e95fa(cls_0x6bb908 *this)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x28) == 0) {
    iVar1 = -0x7789f794;
  }
  else {
    if ((*(cls_0x5ecb96 **)(in_stack_00000004 + 0x20) != (cls_0x5ecb96 *)0x0) &&
       (iVar1 = cls_0x5ecb96::meth_0x5ecc25(*(cls_0x5ecb96 **)(in_stack_00000004 + 0x20)), iVar1 < 0
       )) {
      return iVar1;
    }
    *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
    iVar1 = 0;
  }
  return iVar1;
}



cls_0x6bb908 * __thiscall cls_0x6bb908::~cls_0x6bb908(cls_0x6bb908 *this)

{
  int *piVar1;
  undefined uVar2;
  undefined3 extraout_var;
  cls_0x6bb908 *pcVar3;
  
  this->vftptr_0x0 = &cls_0x6bb908__vftable_6bb908_006bb908;
  if ((cls_0x5e8a30 *)this->mbr_0x18 != (cls_0x5e8a30 *)0x0) {
    cls_0x5e8a30::cls_0x5e8a30((cls_0x5e8a30 *)this->mbr_0x18,3);
  }
  if ((void *)this->mbr_0x1c != (void *)0x0) {
    FUN_005e8a7b((void *)this->mbr_0x1c,3);
  }
  piVar1 = (int *)this->mbr_0x8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x8 = 0;
  }
  pcVar3 = (cls_0x6bb908 *)this->mbr_0xc;
  if (pcVar3 != (cls_0x6bb908 *)0x0) {
    uVar2 = (*pcVar3->vftptr_0x0->virt_meth_0x5e970c_8)(pcVar3->vftptr_0x0);
    pcVar3 = (cls_0x6bb908 *)CONCAT31(extraout_var,uVar2);
    this->mbr_0xc = 0;
  }
  return pcVar3;
}



undefined4 * __thiscall cls_0x6bb908::meth_0x5e96c2(cls_0x6bb908 *this,byte param_1)

{
  ~cls_0x6bb908(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



cls_0x6bb908 * __thiscall cls_0x6bb908::cls_0x6bb908(cls_0x6bb908 *this)

{
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->vftptr_0x0 = &cls_0x6bb908__vftable_6bb908_006bb908;
  this->mbr_0x4 = 1;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  return this;
}


#include "../include/cls_0x6bb908.h"
