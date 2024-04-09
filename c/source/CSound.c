#include "../include/CSound.h"

undefined4 __thiscall CSound::meth_0x4c6910(CSound *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x3c;
  if ((*(byte *)&this->mbr_0x34 & 1) != 0) {
    return 8;
  }
  if (*(char *)(DAT_0070b250 + 0x48) == '\0') {
    return 1;
  }
  if (piVar1 == (int *)0x0) {
    return 4;
  }
  (**(code **)(*piVar1 + 0x34))(piVar1,0);
  this->mbr_0x64 = 0;
  this->mbr_0x60 = 0;
  return 0;
}



undefined4 __thiscall
CSound::meth_0x4c6960(CSound *this,dword param_1,int param_2,int param_3,dword param_4)

{
  this->mbr_0x34 = this->mbr_0x34 & 0xfffffeff | 0x80;
  this->mbr_0x94 = *(int *)(DAT_0070b250 + 0x4c) + param_2;
  this->mbr_0x98 = param_1;
  if (param_3 == -1) {
    this->mbr_0x9c = this->mbr_0x8c;
    this->mbr_0xa0 = param_4;
    return 0;
  }
  this->mbr_0x9c = param_3;
  this->mbr_0xa0 = param_4;
  return 0;
}



undefined4 __thiscall
CSound::meth_0x4c69d0(CSound *this,dword param_1,int param_2,int param_3,dword param_4)

{
  this->mbr_0x34 = this->mbr_0x34 & 0xffffff7f | 0x100;
  this->mbr_0x94 = *(int *)(DAT_0070b250 + 0x4c) + param_2;
  this->mbr_0x98 = param_1;
  if (param_3 == -1) {
    this->mbr_0x9c = this->mbr_0x8c;
    this->mbr_0xa0 = param_4;
    return 0;
  }
  this->mbr_0x9c = param_3;
  this->mbr_0xa0 = param_4;
  return 0;
}



undefined4 __thiscall
CSound::meth_0x4c6a40(CSound *this,dword param_1,int param_2,int param_3,dword param_4)

{
  this->mbr_0x34 = this->mbr_0x34 & 0xfffff7ff | 0x400;
  this->mbr_0xb8 = *(int *)(DAT_0070b250 + 0x4c) + param_2;
  this->mbr_0xbc = param_1;
  if (param_3 == -1) {
    this->mbr_0xc0 = this->mbr_0x90;
    this->mbr_0xc4 = param_4;
    return 0;
  }
  this->mbr_0xc0 = param_3;
  this->mbr_0xc4 = param_4;
  return 0;
}



undefined4 __thiscall
CSound::meth_0x4c6ab0(CSound *this,dword param_1,int param_2,int param_3,dword param_4)

{
  this->mbr_0x34 = this->mbr_0x34 & 0xfffffbff | 0x800;
  this->mbr_0xb8 = *(int *)(DAT_0070b250 + 0x4c) + param_2;
  this->mbr_0xbc = param_1;
  if (param_3 == -1) {
    this->mbr_0xc0 = this->mbr_0x90;
    this->mbr_0xc4 = param_4;
    return 0;
  }
  this->mbr_0xc0 = param_3;
  this->mbr_0xc4 = param_4;
  return 0;
}



undefined4 __thiscall CSound::meth_0x4c6b20(CSound *this,dword param_1)

{
  this->mbr_0xb0 = param_1;
  return 0;
}



undefined4 __thiscall CSound::meth_0x4c6b30(CSound *this,dword param_1)

{
  this->mbr_0xb0 = param_1;
  this->mbr_0x90 = param_1;
  this->mbr_0xb4 = param_1;
  this->mbr_0x34 = this->mbr_0x34 & 0xfffff3ff;
  return 0;
}



int __thiscall CSound::meth_0x4c6b70(CSound *this)

{
  return (int)(this->mbr_0xe4 * this->mbr_0xc8) / 100 + this->mbr_0xec;
}



dword __thiscall CSound::Get_mbr_0xd4(CSound *this)

{
  return this->mbr_0xd4;
}



int __thiscall CSound::meth_0x4c6d20(CSound *this,undefined4 *param_1,byte param_2)

{
  dword *pdVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  dword *pdStack_34;
  undefined auStack_4 [4];
  
  if ((param_2 & 0x40) != 0) {
    pdStack_34 = &this->mbr_0x40;
    iVar3 = (**(code **)*param_1)(param_1,&DAT_006b7a24);
    if (iVar3 < 0) {
      return iVar3;
    }
    puVar4 = (undefined4 *)this->mbr_0x40;
    iVar3 = (**(code **)*puVar4)(puVar4,&DAT_006b7a04,&this->mbr_0x44);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  if ((param_2 & 8) != 0) {
    pdVar1 = &this->mbr_0x40;
    pdStack_34 = pdVar1;
    iVar3 = (**(code **)*param_1)(param_1,&DAT_006b7a24);
    if (iVar3 < 0) {
      return iVar3;
    }
    puVar4 = (undefined4 *)&stack0xffffffd4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = (**(code **)(*(int *)*pdVar1 + 0x54))((int *)*pdVar1,1,&stack0xffffffd4,auStack_4);
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar3 = (**(code **)(*(int *)*pdVar1 + 0x5c))
                      ((int *)*pdVar1,&pdStack_34,0,&DAT_006b79e4,&this->mbr_0x48);
    if (iVar3 < 0) {
      return iVar3;
    }
    piVar2 = (int *)this->mbr_0x48;
    (**(code **)(*piVar2 + 0xc))(piVar2,&this->mbr_0x4c);
  }
  return 0;
}



uint __thiscall CSound::meth_0x4c6e20(CSound *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this->mbr_0x38 + 8);
  if ((this->mbr_0x2c & 4) != 0) {
    this->mbr_0x34 = this->mbr_0x34 | 1;
    return 0x40000;
  }
  if (((this->mbr_0x2c & 2) != 0) && (0x40000 < uVar1)) {
    this->mbr_0x34 = this->mbr_0x34 | 1;
    uVar1 = 0x40000;
  }
  return uVar1;
}



void __thiscall CSound::meth_0x4c7000(CSound *this)

{
  void *_Memory;
  
  if (this->mbr_0x68 != 0) {
    FUN_005ff2a0(this->mbr_0x68);
    this->mbr_0x68 = 0;
  }
  if ((void *)this->mbr_0x6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x6c);
  }
  _Memory = (void *)this->mbr_0x38;
  if (_Memory != (void *)0x0) {
    FUN_004c68d0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}



undefined4 __thiscall CSound::meth_0x4c7060(CSound *this)

{
  if ((((this->mbr_0x30 & 2) != 0) && ((this->mbr_0x30 & 1) == 0)) &&
     (((this->mbr_0x34 & 0x40) != 0 || ((this->mbr_0x34 & 8) != 0)))) {
    return 1;
  }
  return 0;
}



uint __thiscall
CSound::virt_meth_0x4c70b0(CSound *this,undefined2 *param_1,uint param_2,int param_3)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX & 0xffffff00;
  if (this->mbr_0x28 != 2) {
    if (this->mbr_0x28 == 3) {
      uVar1 = FUN_005feb80((undefined **)this->mbr_0x68,param_1,param_2);
      uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
    }
    return uVar1;
  }
  uVar1 = ResourceSystem::FileStreamRead((void *)this->mbr_0x4,param_1,param_2,param_3);
  return uVar1;
}



void __thiscall CSound::meth_0x4c70e0(CSound *this,int param_1)

{
  if (param_1 < 0) {
    this->mbr_0xe0 = 0;
    return;
  }
  if (100 < param_1) {
    param_1 = 100;
  }
  this->mbr_0xe0 = param_1;
  return;
}



void __thiscall CSound::meth_0x4c7110(CSound *this,dword param_1)

{
  this->mbr_0xe8 = param_1;
  return;
}



void __thiscall CSound::meth_0x4c7120(CSound *this,int param_1)

{
  if (param_1 < 0x32) {
    this->mbr_0xe4 = 0x32;
    return;
  }
  if (200 < param_1) {
    param_1 = 200;
  }
  this->mbr_0xe4 = param_1;
  return;
}



void __thiscall CSound::meth_0x4c7150(CSound *this,dword param_1)

{
  this->mbr_0xec = param_1;
  return;
}



void __thiscall CSound::meth_0x4c7160(CSound *this,dword param_1)

{
  this->mbr_0xf0 = param_1;
  return;
}



void __thiscall CSound::meth_0x4c7170(CSound *this,dword param_1)

{
  this->mbr_0xf4 = param_1;
  return;
}



undefined4 __thiscall CSound::meth_0x4c72a0(CSound *this,undefined4 param_1)

{
  if ((this->mbr_0x34 & 0x200) == 0) {
    this->mbr_0x34 = this->mbr_0x34 | 0x200;
    meth_0x4c69d0(this,param_1,0,-1,0);
  }
  return 0;
}



undefined4 __thiscall CSound::meth_0x4c72d0(CSound *this,dword param_1,char param_2)

{
  int *piVar1;
  dword dVar2;
  
  piVar1 = (int *)this->mbr_0x3c;
  if (*(char *)(DAT_0070b250 + 0x48) == '\0') {
    return 1;
  }
  if (piVar1 == (int *)0x0) {
    return 4;
  }
  this->mbr_0xc8 = param_1;
  dVar2 = meth_0x4c6b70(this);
  this->mbr_0xcc = dVar2;
  if ((dVar2 != this->mbr_0xd0) || (param_2 == '\x01')) {
    if (dVar2 == 100) {
      (**(code **)(*piVar1 + 0x44))(piVar1,0);
      this->mbr_0xd0 = this->mbr_0xcc;
      return 0;
    }
    (**(code **)(*piVar1 + 0x44))(piVar1,(this->mbr_0x78 * dVar2) / 100);
    this->mbr_0xd0 = this->mbr_0xcc;
  }
  return 0;
}



void __thiscall CSound::meth_0x4c7370(CSound *this,char param_1)

{
  meth_0x4c72d0(this,this->mbr_0xc8,param_1);
  return;
}



undefined4 __thiscall CSound::meth_0x4c7390(CSound *this,dword param_1,char param_2)

{
  dword dVar1;
  int iVar2;
  int *extraout_EDX;
  
  if (*(char *)(DAT_0070b250 + 0x48) == '\0') {
    return 1;
  }
  if (this->mbr_0x3c == 0) {
    return 4;
  }
  this->mbr_0xd4 = param_1;
  dVar1 = Get_mbr_0xd4(this);
  this->mbr_0xd8 = dVar1;
  if ((dVar1 != this->mbr_0xdc) || (param_2 == '\x01')) {
    if ((int)dVar1 < 0) {
      iVar2 = dVar1 * 100;
      if (iVar2 < -10000) {
        iVar2 = -10000;
      }
    }
    else if ((int)dVar1 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = dVar1 * 100;
      if (10000 < iVar2) {
        iVar2 = 10000;
      }
    }
    (**(code **)(*extraout_EDX + 0x40))(extraout_EDX,iVar2);
    this->mbr_0xdc = this->mbr_0xd8;
  }
  return 0;
}



void __thiscall CSound::meth_0x4c7430(CSound *this,char param_1)

{
  meth_0x4c7390(this,this->mbr_0xd4,param_1);
  return;
}



int __thiscall CSound::meth_0x4c7450(CSound *this,uint *param_1)

{
  uint *puVar1;
  cls_0x4c6fb0 *pcVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  cls_0x4c68b0 *pcVar6;
  undefined4 *puVar7;
  int local_8;
  int local_4;
  
  puVar1 = param_1;
  if (param_1 != (uint *)0x0) {
    meth_0x4c7000(this);
    pcVar2 = (cls_0x4c6fb0 *)operator_new(0x10);
    if (pcVar2 == (cls_0x4c6fb0 *)0x0) {
      pcVar2 = (cls_0x4c6fb0 *)0x0;
    }
    else {
      pcVar2 = cls_0x4c6fb0::cls_0x4c6fb0(pcVar2);
    }
    this->mbr_0x6c = (dword)pcVar2;
    pcVar2->mbr_0x0 = this->mbr_0x4;
    *(uint **)(this->mbr_0x6c + 4) = puVar1;
    *(undefined4 *)(this->mbr_0x6c + 8) = 0;
    iVar3 = FUN_004989c0((int *)puVar1);
    ResourceSystem::FileStreamSeek((void *)this->mbr_0x4,puVar1,0,2);
    iVar4 = FUN_004989c0((int *)puVar1);
    *(int *)(this->mbr_0x6c + 0xc) = iVar4;
    ResourceSystem::FileStreamSeek((void *)this->mbr_0x4,puVar1,iVar3,0);
    ppuVar5 = FUN_005ff310(FUN_004c6fc0,this->mbr_0x6c,&param_1,&local_8,&local_4);
    this->mbr_0x68 = (dword)ppuVar5;
    if (ppuVar5 != (undefined **)0x0) {
      pcVar6 = (cls_0x4c68b0 *)operator_new(0x1c);
      if (pcVar6 != (cls_0x4c68b0 *)0x0) {
        pcVar6 = cls_0x4c68b0::cls_0x4c68b0(pcVar6);
        if (pcVar6 != (cls_0x4c68b0 *)0x0) {
          puVar7 = (undefined4 *)operator_new(0x12);
          pcVar6->mbr_0xc = (dword)puVar7;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          *(undefined2 *)(puVar7 + 4) = 0;
          *(undefined2 *)pcVar6->mbr_0xc = 1;
          *(undefined2 *)(pcVar6->mbr_0xc + 2) = param_1._0_2_;
          *(int *)(pcVar6->mbr_0xc + 4) = local_8;
          *(short *)(pcVar6->mbr_0xc + 0xc) = (short)((uint)((int)param_1 << 4) >> 3);
          *(uint *)(pcVar6->mbr_0xc + 8) = (uint)*(ushort *)(pcVar6->mbr_0xc + 0xc) * local_8;
          *(undefined2 *)(pcVar6->mbr_0xc + 0xe) = 0x10;
          *(undefined2 *)(pcVar6->mbr_0xc + 0x10) = 0;
          pcVar6->mbr_0x14 = 0;
          pcVar6->mbr_0x8 = local_4 * 2;
          return (int)pcVar6;
        }
      }
    }
  }
  return 0;
}



void __thiscall CSound::meth_0x4c75b0(CSound *this)

{
  dword dVar1;
  uint uVar2;
  
  if (this->mbr_0x28 == 3) {
    meth_0x4c7000(this);
    if ((uint *)this->mbr_0x24 != (uint *)0x0) {
      ResourceSystem::FileStreamSeek((void *)this->mbr_0x4,(uint *)this->mbr_0x24,0,0);
      dVar1 = meth_0x4c7450(this,(uint *)this->mbr_0x24);
      this->mbr_0x38 = dVar1;
      uVar2 = meth_0x4c6e20(this);
      *(uint *)(this->mbr_0x38 + 4) = uVar2;
      return;
    }
    this->mbr_0x38 = 0;
  }
  return;
}



uint __thiscall CSound::meth_0x4c7600(CSound *this,uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined2 *_Memory;
  
  if (this->mbr_0x28 == 2) {
    uVar1 = ResourceSystem::FileStreamSeek((void *)this->mbr_0x4,param_1,param_2,param_3);
    return uVar1;
  }
  uVar1 = this->mbr_0x28 - 3;
  if (((uVar1 == 0) && (uVar1 = param_3, param_3 == 0)) &&
     (uVar1 = meth_0x4c75b0(this), 0 < (int)param_2)) {
    _Memory = (undefined2 *)operator_new(param_2);
    FUN_005feb80((undefined **)this->mbr_0x68,_Memory,param_2);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return uVar1 & 0xffffff00;
}



void * __thiscall CSound::meth_0x4c7670(CSound *this,uint *param_1)

{
  void *pvVar1;
  cls_0x4c68b0 *pcVar2;
  
  if (param_1 != (uint *)0x0) {
    if (this->mbr_0x28 == 2) {
      pcVar2 = FUN_004c6e50(this,(int)param_1);
      return pcVar2;
    }
    if (this->mbr_0x28 == 3) {
      pvVar1 = (void *)meth_0x4c7450(this,param_1);
      return pvVar1;
    }
  }
  return (void *)0x0;
}



int __thiscall CSound::meth_0x4c76a0(CSound *this,int *param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  dword dVar4;
  int extraout_ECX;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    iVar3 = FUN_004c6bb0(param_1,(undefined4 *)0x0);
    if (-1 < iVar3) {
      puVar9 = &local_4;
      puVar8 = &local_8;
      iVar3 = (**(code **)(*param_1 + 0x2c))
                        (param_1,0,*(undefined4 *)(this->mbr_0x38 + 4),puVar8,puVar9,0,0,0);
      if (-1 < iVar3) {
        if ((uint *)this->mbr_0x24 == (uint *)0x0) {
          if (this->mbr_0x20 < 0x10) {
            cVar2 = (char)this + '\f';
          }
          else {
            cVar2 = (char)this->mbr_0xc;
          }
          dVar4 = ResourceSystem::FileStreamOpen((void *)this->mbr_0x4,cVar2,1);
          this->mbr_0x24 = dVar4;
          meth_0x4c75b0(this);
          if ((uint *)this->mbr_0x24 == (uint *)0x0) {
            iVar3 = cls_0x4c68f0::meth_0x4c68f0((cls_0x4c68f0 *)this->mbr_0x38);
            uVar6 = *(uint *)(extraout_ECX + 4);
            uVar1 = (undefined)iVar3;
            puVar7 = puVar8;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
              puVar7 = puVar7 + 1;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined *)puVar7 = uVar1;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
          }
          else {
            if (this->mbr_0x28 == 2) {
              meth_0x4c7600(this,(uint *)this->mbr_0x24,*(uint *)(this->mbr_0x38 + 0x14),0);
            }
            (*this->vftptr_0x0->virt_meth_0x4c70b0_8)
                      (this,(undefined2 *)puVar8,*(uint *)(this->mbr_0x38 + 4),this->mbr_0x24);
            cls_0x49c610::meth_0x49b1d0((cls_0x49c610 *)this->mbr_0x4,(void *)this->mbr_0x24,'\0');
            meth_0x4c7000(this);
            this->mbr_0x24 = 0;
            *(undefined4 *)(this->mbr_0x38 + 0x18) = *(undefined4 *)(this->mbr_0x38 + 4);
          }
        }
        else {
          if (*(int *)(this->mbr_0x38 + 0x18) != 0) {
            meth_0x4c7600(this,(uint *)this->mbr_0x24,*(uint *)(this->mbr_0x38 + 0x14),0);
          }
          (*this->vftptr_0x0->virt_meth_0x4c70b0_8)
                    (this,(undefined2 *)puVar8,*(uint *)(this->mbr_0x38 + 4),this->mbr_0x24);
          *(undefined4 *)(this->mbr_0x38 + 0x18) = *(undefined4 *)(this->mbr_0x38 + 4);
        }
        (**(code **)(*param_1 + 0x4c))(param_1,puVar8,puVar9,0,0);
        this->mbr_0x5c = 7;
        iVar3 = 0;
      }
    }
    return iVar3;
  }
  return -0x7ffbfe10;
}



void __thiscall CSound::UpdateStreamBuffers(CSound *this)

{
  undefined uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  dword dVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uStack_14;
  undefined local_8 [4];
  undefined local_4 [4];
  
  piVar6 = (int *)this->mbr_0x3c;
  if (piVar6 == (int *)0x0) {
    FUN_00497120((byte *)"UpdateStreamBuffers() - sound buffer is null.\n");
    return;
  }
  if ((*(byte *)&this->mbr_0x34 & 8) != 0) {
    return;
  }
  (**(code **)(*piVar6 + 0x10))(piVar6,local_8,local_4);
  if (uStack_14 < this->mbr_0x64) {
    this->mbr_0x60 = this->mbr_0x60 + 1;
  }
  this->mbr_0x64 = uStack_14;
  if (((*(byte *)&this->mbr_0x30 & 1) == 0) &&
     (*(uint *)(this->mbr_0x38 + 8) < this->mbr_0x60 * 0x40000 + uStack_14)) {
    this->mbr_0x34 = this->mbr_0x34 & 0xfffffdfb | 0x48;
    (**(code **)(*piVar6 + 0x48))(piVar6);
    if ((*(byte *)&this->mbr_0x30 & 2) == 0) {
      meth_0x4c76a0(this,piVar6);
    }
    (**(code **)(*piVar6 + 0x34))(piVar6,0);
    this->mbr_0x64 = 0;
    this->mbr_0x60 = 0;
    return;
  }
  uVar8 = this->mbr_0x5c + 1 & 0x80000007;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
  }
  bVar2 = FUN_004c7080(uStack_14 >> 0xf,uVar8);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return;
  }
  uVar11 = 0;
  piVar10 = (int *)0x0;
  puVar5 = (undefined4 *)&stack0xffffffe8;
  uVar7 = 0x8000;
  iVar3 = (**(code **)(*piVar6 + 0x2c))(piVar6,uVar8 << 0xf,0x8000,&stack0xffffffe0,puVar5,0,0,0);
  if (iVar3 < 0) {
    return;
  }
  dVar4 = this->mbr_0x24;
  puVar9 = puVar5;
  if (dVar4 == 0) goto LAB_004c79bb;
  iVar3 = *(int *)(this->mbr_0x38 + 0x18);
  uVar8 = *(uint *)(this->mbr_0x38 + 8);
  if (uVar8 < iVar3 + 0x8000U) {
    uVar8 = uVar8 - iVar3;
    piVar6 = piVar10;
    if (0 < (int)uVar8) {
      (*this->vftptr_0x0->virt_meth_0x4c70b0_8)(this,(undefined2 *)puVar5,uVar8,dVar4);
      puVar5 = (undefined4 *)((int)puVar5 + uVar8);
      uVar7 = 0x8000 - uVar8;
      piVar6 = piVar10;
    }
    if ((*(byte *)&this->mbr_0x30 & 1) == 0) {
      iVar3 = cls_0x4c68f0::meth_0x4c68f0((cls_0x4c68f0 *)this->mbr_0x38);
      uVar1 = (undefined)iVar3;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar5 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar5 = puVar5 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined *)puVar5 = uVar1;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      dVar4 = this->mbr_0x38;
      iVar3 = *(int *)(dVar4 + 8);
      goto LAB_004c79b5;
    }
    meth_0x4c7600(this,(uint *)this->mbr_0x24,
                  *(uint *)&((cls_0x4c68f0 *)this->mbr_0x38)[1].field_0x4,0);
    (*this->vftptr_0x0->virt_meth_0x4c70b0_8)(this,(undefined2 *)puVar5,uVar7,this->mbr_0x24);
    *(uint *)(this->mbr_0x38 + 0x18) = uVar7;
  }
  else {
    (*this->vftptr_0x0->virt_meth_0x4c70b0_8)(this,(undefined2 *)puVar5,0x8000,dVar4);
    dVar4 = this->mbr_0x38;
    iVar3 = *(int *)(dVar4 + 0x18) + 0x8000;
    puVar9 = puVar5;
LAB_004c79b5:
    *(int *)(dVar4 + 0x18) = iVar3;
  }
  this->mbr_0x5c = this->mbr_0x5c + 1;
LAB_004c79bb:
  (**(code **)(*piVar6 + 0x4c))(piVar6,puVar9,uVar11,0,0);
  return;
}



undefined4 __thiscall CSound::meth_0x4c79e0(CSound *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)this->mbr_0x3c;
  if (*(char *)(DAT_0070b250 + 0x48) == '\0') {
    return 1;
  }
  if (piVar1 == (int *)0x0) {
    return 4;
  }
  uVar2 = this->mbr_0x34;
  if ((uVar2 & 8) == 0) {
    if ((0 < param_1) && ((uVar2 & 0x10) == 0)) {
      uVar3 = meth_0x4c72a0(this,param_1);
      return uVar3;
    }
    this->mbr_0x34 = uVar2 & 0xffffedeb | 8;
    (**(code **)(*piVar1 + 0x48))(piVar1);
    if (((*(byte *)&this->mbr_0x34 & 1) != 0) && ((*(byte *)&this->mbr_0x30 & 2) == 0)) {
      meth_0x4c75b0(this);
      meth_0x4c76a0(this,piVar1);
    }
    (**(code **)(*piVar1 + 0x34))(piVar1,0);
    this->mbr_0x64 = 0;
    this->mbr_0x60 = 0;
  }
  return 0;
}



int __thiscall CSound::meth_0x4c7a80(CSound *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  dword dVar4;
  
  uVar1 = *(uint *)(DAT_0070b250 + 0x4c);
  uVar2 = this->mbr_0x34;
  if ((char)uVar2 < '\0') {
    uVar3 = this->mbr_0x94;
    if (uVar3 <= uVar1) {
      if (uVar1 < this->mbr_0x98 + uVar3) {
        this->mbr_0x8c =
             ((this->mbr_0xa0 - this->mbr_0x9c) * (uVar1 - uVar3)) / this->mbr_0x98 + this->mbr_0x9c
        ;
      }
      else {
        this->mbr_0x8c = this->mbr_0xa0;
        this->mbr_0x34 = uVar2 & 0xffffff7f;
      }
    }
  }
  else if (((uVar2 & 0x100) != 0) && (uVar3 = this->mbr_0x94, uVar3 <= uVar1)) {
    if (uVar1 < this->mbr_0x98 + uVar3) {
      this->mbr_0x8c =
           this->mbr_0x9c - ((this->mbr_0x9c - this->mbr_0xa0) * (uVar1 - uVar3)) / this->mbr_0x98;
    }
    else {
      this->mbr_0x8c = this->mbr_0xa0;
      this->mbr_0x34 = uVar2 & 0xfffffeff;
      if ((uVar2 & 0x200) != 0) {
        this->mbr_0x34 = uVar2 & 0xfffffcff;
        meth_0x4c79e0(this,0);
      }
    }
  }
  if ((int)this->mbr_0x8c < 0) {
    this->mbr_0x8c = 0;
  }
  if (100 < (int)this->mbr_0x8c) {
    this->mbr_0x8c = 100;
  }
  dVar4 = this->mbr_0xb0;
  if (this->mbr_0xb4 != dVar4) {
    if ((int)dVar4 < (int)this->mbr_0x90) {
      meth_0x4c6ab0(this,this->mbr_0xf4,0,-1,dVar4);
    }
    else {
      meth_0x4c6a40(this,this->mbr_0xf0,0,-1,dVar4);
    }
    this->mbr_0xb4 = this->mbr_0xb0;
  }
  uVar2 = this->mbr_0x34;
  if ((uVar2 & 0x400) == 0) {
    if (((uVar2 & 0x800) != 0) && (uVar3 = this->mbr_0xb8, uVar3 <= uVar1)) {
      if (uVar1 < this->mbr_0xbc + uVar3) {
        this->mbr_0x90 =
             this->mbr_0xc0 - ((this->mbr_0xc0 - this->mbr_0xc4) * (uVar1 - uVar3)) / this->mbr_0xbc
        ;
      }
      else {
        this->mbr_0x90 = this->mbr_0xc4;
        this->mbr_0x34 = uVar2 & 0xfffff7ff;
      }
    }
  }
  else {
    uVar3 = this->mbr_0xb8;
    if (uVar3 <= uVar1) {
      if (uVar1 < this->mbr_0xbc + uVar3) {
        this->mbr_0x90 =
             ((this->mbr_0xc4 - this->mbr_0xc0) * (uVar1 - uVar3)) / this->mbr_0xbc + this->mbr_0xc0
        ;
      }
      else {
        this->mbr_0x90 = this->mbr_0xc4;
        this->mbr_0x34 = uVar2 & 0xfffffbff;
      }
    }
  }
  if ((int)this->mbr_0x90 < 0) {
    this->mbr_0x90 = 0;
  }
  if (100 < (int)this->mbr_0x90) {
    this->mbr_0x90 = 100;
  }
  return (int)(((int)(this->mbr_0xe0 * this->mbr_0x80) / 100 + this->mbr_0xe8) *
               *(int *)(DAT_0070b250 + 0x28) * this->mbr_0x90 * this->mbr_0x8c) / 1000000;
}



CSound * __thiscall CSound::~CSound(CSound *this)

{
  int *piVar1;
  void *_Memory;
  CSound *pCVar2;
  undefined in_DL;
  undefined extraout_DL;
  int unaff_EBX;
  uint unaff_ESI;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632f5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &CSound__vftable_67140c_0067140c;
  local_4 = 0;
  if ((void *)this->mbr_0x24 != (void *)0x0) {
    cls_0x49c610::meth_0x49b1d0((cls_0x49c610 *)this->mbr_0x4,(void *)this->mbr_0x24,'\0');
    meth_0x4c7000(this);
    this->mbr_0x24 = 0;
    in_DL = extraout_DL;
  }
  FUN_0052a930((int)DAT_0070b250,in_DL,(char)this);
  pCVar2 = DAT_0070b250;
  if ((DAT_0070b250 != (CSound *)0x0) && (*(char *)&DAT_0070b250->mbr_0x48 != '\0')) {
    piVar1 = (int *)this->mbr_0x44;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      this->mbr_0x44 = 0;
    }
    piVar1 = (int *)this->mbr_0x40;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      this->mbr_0x40 = 0;
    }
    pCVar2 = (CSound *)this->mbr_0x3c;
    if (pCVar2 != (CSound *)0x0) {
      pCVar2 = (CSound *)
               (*(code *)((CSound *)pCVar2->vftptr_0x0)->mbr_0x8)
                         ((CSound *)pCVar2->vftptr_0x0,(undefined2 *)pCVar2,unaff_ESI,unaff_EBX);
      this->mbr_0x3c = 0;
    }
  }
  _Memory = (void *)this->mbr_0x38;
  if (_Memory != (void *)0x0) {
    FUN_004c68d0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (0xf < this->mbr_0x20) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc);
  }
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0xf;
  *(undefined *)&this->mbr_0xc = 0;
  ExceptionList = pvStack_c;
  return pCVar2;
}



undefined4 __thiscall CSound::SetVolume(CSound *this,dword param_1,char param_2)

{
  int *piVar1;
  dword dVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)this->mbr_0x3c;
  if (DAT_0070b250->field_0x48 == '\0') {
    return 1;
  }
  this->mbr_0x80 = param_1;
  dVar2 = meth_0x4c7a80(this);
  this->mbr_0x84 = dVar2;
  if (piVar1 == (int *)0x0) {
    return 4;
  }
  if ((dVar2 != this->mbr_0x88) || (param_2 == '\x01')) {
    uVar3 = cls_0x52a1f0::meth_0x52a1f0(DAT_0070b250,dVar2);
    iVar4 = (**(code **)(*piVar1 + 0x3c))(piVar1,uVar3);
    if (iVar4 != 0) {
      FUN_00497120((byte *)"SetVolume() - error setting DirectSound volume.\n");
    }
    this->mbr_0x88 = this->mbr_0x84;
  }
  return 0;
}



void __thiscall CSound::meth_0x4c7e60(CSound *this,char param_1)

{
  SetVolume(this,this->mbr_0x80,param_1);
  return;
}



undefined4 __thiscall CSound::meth_0x4c7eb0(CSound *this,uint param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  dword dVar4;
  bool bVar5;
  int local_4;
  
  piVar1 = (int *)this->mbr_0x3c;
  if (*(char *)(DAT_0070b250 + 0x48) == '\0') {
    return 1;
  }
  if (piVar1 == (int *)0x0) {
    return 4;
  }
  if ((this->mbr_0x34 & 2) == 0) {
    return 2;
  }
  if ((this->mbr_0x34 & 4) == 0) {
    iVar3 = FUN_004c6bb0(piVar1,&local_4);
    if (iVar3 < 0) {
      return 4;
    }
    if (local_4 != 0) {
      iVar3 = meth_0x4c76a0(this,piVar1);
      if (iVar3 < 0) {
        return 4;
      }
      (**(code **)(*piVar1 + 0x34))(piVar1,0);
      this->mbr_0x64 = 0;
      this->mbr_0x60 = 0;
    }
    this->mbr_0x30 = param_1;
    this->mbr_0xa4 = param_2;
    if (0 < param_3) {
      iVar3 = *(int *)(DAT_0070b250 + 0x4c);
      this->mbr_0x34 = this->mbr_0x34 & 0xffffffa3 | 0x1020;
      this->mbr_0xac = iVar3 + param_3;
      return 0;
    }
    bVar5 = (param_1 & 1) != 0;
    if (((*(byte *)&this->mbr_0x34 & 1) != 0) && (bVar5 = true, this->mbr_0x24 == 0)) {
      if (this->mbr_0x20 < 0x10) {
        cVar2 = (char)this + '\f';
      }
      else {
        cVar2 = (char)this->mbr_0xc;
      }
      dVar4 = ResourceSystem::FileStreamOpen((void *)this->mbr_0x4,cVar2,1);
      this->mbr_0x24 = dVar4;
      meth_0x4c75b0(this);
    }
    this->mbr_0xa8 = *(dword *)(DAT_0070b250 + 0x4c);
    meth_0x4c6b30(this,this->mbr_0xb0);
    this->mbr_0x8c = 100;
    this->mbr_0x9c = 0;
    this->mbr_0xa0 = 0;
    this->mbr_0x94 = 0;
    this->mbr_0x98 = 0;
    this->mbr_0x34 = this->mbr_0x34 & 0xfffffe7f;
    if (0 < param_2) {
      meth_0x4c6960(this,param_2,0,0,100);
    }
    meth_0x4c7430(this,'\x01');
    meth_0x4c7370(this,'\x01');
    meth_0x4c7e60(this,'\x01');
    (**(code **)(*piVar1 + 0x30))(piVar1,0,0,bVar5);
    this->mbr_0x34 = this->mbr_0x34 & 0xffffefa7 | 0x24;
  }
  return 0;
}



CSound * __thiscall CSound::CSound(CSound *this)

{
  char *pcVar1;
  char *pcVar2;
  dword dVar3;
  CSound *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632f5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &CSound__vftable_67140c_0067140c;
  this->mbr_0x20 = 0xf;
  this->mbr_0x1c = 0;
  *(undefined *)&this->mbr_0xc = 0;
  local_4 = 0;
  this->mbr_0x4 = *(dword *)(DAT_0070b250 + 0x50);
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x8,"",(uint)(pcVar2 + -0x64d7d8));
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x74 = *(dword *)(DAT_0070b250 + 0x1c);
  this->mbr_0x78 = *(dword *)(DAT_0070b250 + 0x20);
  this->mbr_0x7c = *(dword *)(DAT_0070b250 + 0x24);
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x70 = DAT_006fb0a4;
  DAT_006fb0a4 = DAT_006fb0a4 + 1;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0x447a0000;
  this->mbr_0x58 = 0x3a83126f;
  this->mbr_0xe0 = 100;
  this->mbr_0xe4 = 100;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xf0 = 500;
  this->mbr_0xf4 = 500;
  this->mbr_0x94 = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xac = 0;
  this->mbr_0xb0 = 100;
  this->mbr_0xb4 = 100;
  this->mbr_0xb8 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0x80 = 100;
  dVar3 = meth_0x4c7a80(this);
  this->mbr_0x84 = dVar3;
  this->mbr_0x88 = 100;
  this->mbr_0x8c = 100;
  this->mbr_0x90 = 100;
  this->mbr_0xc8 = 100;
  dVar3 = meth_0x4c6b70(this);
  this->mbr_0xcc = dVar3;
  this->mbr_0xd0 = 100;
  this->mbr_0xd4 = 0;
  dVar3 = Get_mbr_0xd4(this_00);
  this->mbr_0xd8 = dVar3;
  this->mbr_0xdc = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  FUN_0052aec0(DAT_0070b250);
  ExceptionList = local_c;
  return this;
}



void __thiscall CSound::virt_meth_0x4c82e0(CSound *this,int *param_1,dword param_2)

{
  dword dVar1;
  int *piVar2;
  uint *puVar3;
  dword dVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  uint unaff_retaddr;
  uint local_28 [4];
  undefined4 local_18;
  uint local_4;
  
  piVar2 = param_1;
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if ((*(byte *)&this->mbr_0x34 & 2) != 0) {
    FUN_00616e15(DAT_007062c0);
    return;
  }
  if (this->mbr_0x24 == 0) {
    puVar3 = (uint *)ResourceSystem::FileStreamOpen((void *)this->mbr_0x4,(char)param_1,1);
    this->mbr_0x24 = (dword)puVar3;
    if (puVar3 != (uint *)0x0) {
      dVar4 = FUN_004c6c30((char *)piVar2);
      this->mbr_0x28 = dVar4;
      pvVar5 = meth_0x4c7670(this,puVar3);
      dVar4 = param_2;
      this->mbr_0x38 = (dword)pvVar5;
      if (pvVar5 != (void *)0x0) {
        this->mbr_0x2c = param_2;
        FUN_00401c70(&this->mbr_0x8,piVar2);
        uVar6 = meth_0x4c6e20(this);
        *(uint *)(this->mbr_0x38 + 4) = uVar6;
        puVar3 = local_28;
        for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        param_1 = (int *)0x0;
        local_28[0] = 0x24;
        local_28[1] = FUN_004c6ce0((byte)dVar4);
        local_28[2] = *(undefined4 *)(this->mbr_0x38 + 4);
        local_18 = *(undefined4 *)(this->mbr_0x38 + 0xc);
        iVar7 = (**(code **)(**(int **)(DAT_0070b250 + 4) + 0xc))
                          (*(int **)(DAT_0070b250 + 4),local_28,&param_1,0);
        if (iVar7 < 0) {
          pvVar5 = (void *)this->mbr_0x38;
          if (pvVar5 != (void *)0x0) {
            FUN_004c68d0((int)pvVar5);
                    /* WARNING: Subroutine does not return */
            _free(pvVar5);
          }
          cls_0x49c610::meth_0x49b1d0((cls_0x49c610 *)this->mbr_0x4,(void *)this->mbr_0x24,'\0');
          meth_0x4c7000(this);
          this->mbr_0x24 = 0;
        }
        else {
          dVar1 = this->mbr_0x38;
          if (*(int *)(dVar1 + 0xc) != 0) {
            this->mbr_0x74 = (uint)*(ushort *)(*(int *)(dVar1 + 0xc) + 0xe);
            this->mbr_0x78 = *(dword *)(*(int *)(dVar1 + 0xc) + 4);
            this->mbr_0x7c = (uint)*(ushort *)(*(int *)(dVar1 + 0xc) + 2);
          }
          meth_0x4c6d20(this,param_1,(byte)dVar4);
          meth_0x4c76a0(this,param_1);
          uVar6 = this->mbr_0x34;
          this->mbr_0x34 = uVar6 | 2;
          if ((uVar6 & 1) == 0) {
            cls_0x49c610::meth_0x49b1d0((cls_0x49c610 *)this->mbr_0x4,(void *)this->mbr_0x24,'\0');
            meth_0x4c7000(this);
            this->mbr_0x24 = 0;
          }
          (**(code **)(*param_1 + 0x34))(param_1,0);
          this->mbr_0x64 = 0;
          this->mbr_0x60 = 0;
          this->mbr_0x3c = (dword)param_1;
        }
      }
    }
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  }
  FUN_00616e15(DAT_007062c0);
  return;
}



void __thiscall CSound::meth_0x539370(CSound *this,char *param_1)

{
  char cVar1;
  int *piVar2;
  cls_0x538f30 *pcVar3;
  uint *puVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint unaff_retaddr;
  undefined4 local_24;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if ((this->mbr_0x34 & 2) == 0) {
    pcVar3 = (cls_0x538f30 *)FUN_005390d0(*(void **)(DAT_0070b250 + 500),param_1);
    this->mbr_0xf8 = (dword)pcVar3;
    if (pcVar3 != (cls_0x538f30 *)0x0) {
      this->mbr_0x100 = 0;
      cls_0x538f30::meth_0x538f50(pcVar3,0,0);
      FUN_00539080((char *)&local_24);
      this->mbr_0xfc = 0;
      this->mbr_0x104 = 0;
      this->mbr_0x108 = 0;
      virt_meth_0x4c82e0(this,&local_24,0x34);
    }
    _strncpy((char *)&this->mbr_0x10c,param_1,9);
    meth_0x4c7eb0(this,0,0,0);
  }
  else if ((this->mbr_0x34 & 4) == 0) {
    piVar2 = (int *)this->mbr_0x3c;
    pcVar3 = (cls_0x538f30 *)FUN_005390d0(*(void **)(DAT_0070b250 + 500),param_1);
    this->mbr_0xf8 = (dword)pcVar3;
    if (pcVar3 != (cls_0x538f30 *)0x0) {
      this->mbr_0x100 = 0;
      cls_0x538f30::meth_0x538f50(pcVar3,0,0);
      FUN_00539080((char *)&local_24);
      if ((void *)this->mbr_0x24 != (void *)0x0) {
        cls_0x49c610::meth_0x49b1d0((cls_0x49c610 *)this->mbr_0x4,(void *)this->mbr_0x24,'\0');
        pvVar5 = (void *)this->mbr_0x38;
        if (pvVar5 != (void *)0x0) {
          FUN_004c68d0((int)pvVar5);
                    /* WARNING: Subroutine does not return */
          _free(pvVar5);
        }
        this->mbr_0x24 = 0;
      }
      puVar4 = (uint *)ResourceSystem::FileStreamOpen((void *)this->mbr_0x4,(char)&local_24,1);
      this->mbr_0x24 = (dword)puVar4;
      pvVar5 = meth_0x4c7670(this,puVar4);
      this->mbr_0x38 = (dword)pvVar5;
      uVar6 = meth_0x4c6e20(this);
      *(uint *)(this->mbr_0x38 + 4) = uVar6;
      puVar7 = &local_24;
      do {
        cVar1 = *(char *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&this->mbr_0x8,(char *)&local_24,(int)puVar7 - ((int)&local_24 + 1)
                );
      this->mbr_0x34 = this->mbr_0x34 & 0xfffffffd;
      this->mbr_0xfc = 0;
      this->mbr_0x104 = 0;
      this->mbr_0x108 = 0;
      meth_0x4c76a0(this,piVar2);
      this->mbr_0x34 = this->mbr_0x34 | 2;
      (**(code **)(*piVar2 + 0x34))(piVar2,0);
      this->mbr_0x64 = 0;
      this->mbr_0x60 = 0;
    }
    _strncpy((char *)&this->mbr_0x10c,param_1,9);
    meth_0x4c7eb0(this,0,0,0);
  }
  else {
    _strncpy((char *)&this->mbr_0x115,param_1,9);
    this->mbr_0xfc = this->mbr_0xfc | 4;
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}


#include "../include/CSound.h"
