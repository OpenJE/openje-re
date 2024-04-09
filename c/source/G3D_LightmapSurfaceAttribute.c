#include "../include/G3D_LightmapSurfaceAttribute.h"

void __thiscall G3D_LightmapSurfaceAttribute::meth_0x442230(G3D_LightmapSurfaceAttribute *this)

{
  if ((void *)this->mbr_0x48 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x48);
  }
  if (0xf < this->mbr_0x34) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x20);
  }
  this->mbr_0x34 = 0xf;
  this->mbr_0x30 = 0;
  *(undefined *)&this->mbr_0x20 = 0;
  if (0xf < (this->G3D_BaseAttribute).mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->G3D_BaseAttribute).field_0x4);
  }
  *(undefined4 *)&(this->G3D_BaseAttribute).field_0x14 = 0;
  (this->G3D_BaseAttribute).mbr_0x18 = 0xf;
  (this->G3D_BaseAttribute).field_0x4 = 0;
  return;
}



void __thiscall
G3D_LightmapSurfaceAttribute::meth_0x4c8cd0
          (G3D_LightmapSurfaceAttribute *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632f9b;
  local_c = ExceptionList;
  if (this->mbr_0x48 == 0) {
    iVar1 = this->mbr_0x44 * this->mbr_0x40;
    ExceptionList = &local_c;
    pvVar2 = operator_new(iVar1 * 4);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      FUN_004010a0(pvVar2,4,iVar1,cls_0x502110::cls_0x502110);
    }
    this->mbr_0x48 = (dword)pvVar2;
  }
  *(undefined4 *)(this->mbr_0x48 + (this->mbr_0x40 * param_2 + param_1) * 4) = *param_3;
  ExceptionList = local_c;
  return;
}



void __thiscall G3D_LightmapSurfaceAttribute::meth_0x4ca250(G3D_LightmapSurfaceAttribute *this)

{
  if ((void *)this->mbr_0x48 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x48);
  }
  return;
}



void __thiscall
G3D_LightmapSurfaceAttribute::meth_0x4ca270(G3D_LightmapSurfaceAttribute *this,dword param_1)

{
  meth_0x4ca250(this);
  this->mbr_0x40 = param_1;
  return;
}



void __thiscall
G3D_LightmapSurfaceAttribute::meth_0x4ca290(G3D_LightmapSurfaceAttribute *this,dword param_1)

{
  meth_0x4ca250(this);
  this->mbr_0x44 = param_1;
  return;
}



uint __thiscall
G3D_LightmapSurfaceAttribute::meth_0x4ca2b0
          (G3D_LightmapSurfaceAttribute *this,uint *param_1,char param_2)

{
  undefined uVar1;
  uint uVar2;
  undefined4 *_Memory;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_20;
  G3D_LightmapSurfaceAttribute *local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  local_18 = 0;
  local_20 = 0;
  local_1c = this;
  uVar2 = meth_0x4ca250(this);
  if (param_1 == (uint *)0x0) {
    return uVar2 & 0xffffff00;
  }
  local_14 = *param_1;
  local_10 = param_1[1];
  local_c = param_1[2];
  local_8 = param_1[3];
  local_4 = *(undefined2 *)(param_1 + 4);
  uVar2 = (uint)(byte)((byte)local_4 >> 3);
  if ((param_2 != '\0') && ((byte)local_4 == 0x18)) {
    uVar2 = uVar2 + 1;
  }
  uVar6 = local_8 & 0xffff;
  uVar2 = uVar6 * (local_8 >> 0x10) * uVar2;
  if ((int)uVar2 < 1) {
    return 1;
  }
  _Memory = (undefined4 *)operator_new(uVar2);
  if (_Memory == (undefined4 *)0x0) {
    return 0;
  }
  if (local_14._1_1_ == '\x01') {
    local_18 = (local_10 >> 0x18) * (local_10 >> 8 & 0xffff);
  }
  meth_0x4ca270(local_1c,uVar6);
  meth_0x4ca290(local_1c,local_8 >> 0x10);
  puVar4 = (undefined4 *)((local_14 & 0xff) + local_18 + 0x12 + (int)param_1);
  if ((local_14._2_1_ == '\x02') && ((char)local_4 == '\x18')) {
    if (param_2 == '\0') {
      puVar3 = _Memory;
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined *)puVar3 = *(undefined *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    else if (0 < (int)uVar2) {
      iVar7 = (uVar2 - 1 >> 2) + 1;
      puVar3 = _Memory;
      do {
        *(undefined2 *)puVar3 = *(undefined2 *)puVar4;
        uVar1 = *(undefined *)((int)puVar4 + 2);
        *(undefined *)((int)puVar3 + 3) = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 3);
        iVar7 = iVar7 + -1;
        *(undefined *)((int)puVar3 + 2) = uVar1;
        puVar3 = puVar3 + 1;
      } while (iVar7 != 0);
    }
    iVar7 = 0;
    puVar4 = _Memory;
    if (local_8._2_2_ != 0) {
      do {
        iVar8 = 0;
        if (uVar6 != 0) {
          do {
            local_20._0_3_ =
                 CONCAT12(*(undefined *)puVar4,
                          CONCAT11(*(undefined *)((int)puVar4 + 1),*(undefined *)((int)puVar4 + 2)))
            ;
            if (param_2 == '\0') {
              local_20 = CONCAT13(*(undefined *)((int)puVar4 + 3),(uint3)local_20);
              puVar4 = (undefined4 *)((int)puVar4 + 3);
            }
            else {
              local_20 = (uint)(uint3)local_20;
              puVar4 = puVar4 + 1;
            }
            meth_0x4c8cd0(local_1c,iVar8,iVar7,&local_20);
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)uVar6);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(local_8 >> 0x10));
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



G3D_LightmapSurfaceAttribute * __thiscall
G3D_LightmapSurfaceAttribute::G3D_LightmapSurfaceAttribute(G3D_LightmapSurfaceAttribute *this)

{
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  this->mbr_0x20 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_LightmapSurfaceAttribute__vftable_671d18_00671d18;
  this->mbr_0x3c = 0xf;
  this->mbr_0x38 = 0;
  *(undefined *)&this->mbr_0x28 = 0;
  this->mbr_0x58 = 0xf;
  this->mbr_0x54 = 0;
  *(undefined *)&this->mbr_0x44 = 0;
  return this;
}



undefined4 * __thiscall
G3D_LightmapSurfaceAttribute::virt_meth_0x4cb380(G3D_LightmapSurfaceAttribute *this,byte param_1)

{
  ~G3D_LightmapSurfaceAttribute(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



G3D_LightmapSurfaceAttribute * __thiscall
G3D_LightmapSurfaceAttribute::~G3D_LightmapSurfaceAttribute(G3D_LightmapSurfaceAttribute *this)

{
  G3D_LightmapSurfaceAttribute *in_EAX;
  
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_LightmapSurfaceAttribute__vftable_671d18_00671d18;
  if (0xf < this->mbr_0x58) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x44);
  }
  this->mbr_0x58 = 0xf;
  this->mbr_0x54 = 0;
  *(undefined *)&this->mbr_0x44 = 0;
  if (0xf < this->mbr_0x3c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x28);
  }
  this->mbr_0x3c = 0xf;
  this->mbr_0x38 = 0;
  *(undefined *)&this->mbr_0x28 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 = &G3D_BaseAttribute__vftable_671ce0_00671ce0;
  if (0xf < (this->G3D_BaseAttribute).mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->G3D_BaseAttribute).mbr_0x8);
  }
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  return in_EAX;
}



void * __thiscall
G3D_LightmapSurfaceAttribute::meth_0x4ce860(G3D_LightmapSurfaceAttribute *this,void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined *)((int)param_1 + 4) = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)param_1,(_String_base *)&(this->G3D_BaseAttribute).mbr_0x1c,0,
             0xffffffff);
  return param_1;
}



void __thiscall
G3D_LightmapSurfaceAttribute::meth_0x4d0450(G3D_LightmapSurfaceAttribute *this,FILE *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  FILE *in_stack_00000008;
  G3D_LightmapSurfaceAttribute *local_4;
  
  pcVar4 = "";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  local_4 = this;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)param_1,"",(uint)(pcVar3 + -0x64d7d8));
  _fread(&local_4,2,1,in_stack_00000008);
  if ((short)local_4 != 0) {
    uVar2 = ((uint)local_4 & 0xffff) + 1;
    if ((uint)param_1->_charbuf < uVar2) {
      ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)param_1,uVar2 - param_1->_charbuf);
    }
    else {
      ::cls_0x50db20::meth_0x401a40((cls_0x50db20 *)param_1,uVar2,0xffffffff);
    }
    pcVar3 = (char *)operator_new(((uint)local_4 & 0xffff) + 1);
    _fread(pcVar3,1,(uint)local_4 & 0xffff,in_stack_00000008);
    pcVar3[(uint)local_4 & 0xffff] = '\0';
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)param_1,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
                    /* WARNING: Subroutine does not return */
    _free(pcVar3);
  }
  return;
}



void __thiscall
G3D_LightmapSurfaceAttribute::meth_0x4d0670(G3D_LightmapSurfaceAttribute *this,FILE *param_1)

{
  meth_0x4d0450(this,(FILE *)this);
  return;
}



void __thiscall
G3D_LightmapSurfaceAttribute::meth_0x4d0690
          (G3D_LightmapSurfaceAttribute *this,int param_1,int *param_2)

{
  FUN_004d0510((cls_0x50db20 *)this,param_1,param_2);
  return;
}



void __thiscall G3D_LightmapSurfaceAttribute::virt_meth_0x4d0c80(G3D_LightmapSurfaceAttribute *this)

{
  dword *pdVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *****pppppuVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  uint unaff_retaddr;
  cls_0x50db20 *pcVar10;
  undefined local_84 [8];
  dword local_7c;
  dword local_78;
  int local_74 [5];
  undefined4 *****local_60 [4];
  char *local_50;
  uint local_4c;
  undefined local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  undefined local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633318;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  FUN_0052ba00('{');
  pdVar1 = (dword *)FUN_0052b940(local_74);
  local_84._4_4_ = pdVar1[1];
  local_84._0_4_ = *pdVar1;
  local_7c = pdVar1[2];
  local_78 = pdVar1[3];
  if (local_84._0_4_ != 0x7d) {
    do {
      if (local_84._0_4_ == 0x100) {
        FUN_0052afe0((cls_0x50db20 *)(local_74 + 4));
        local_4 = 0;
        pcVar4 = "Material";
        do {
          pcVar2 = pcVar4;
          pcVar4 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        pcVar2 = pcVar2 + -0x67195c;
        if (local_50 == (char *)0x0) {
LAB_004d0d67:
          if ((local_50 < pcVar2) || (local_50 != pcVar2)) goto LAB_004d0dd7;
          pcVar10 = (cls_0x50db20 *)0x28;
          FUN_0052ba00('(');
          pcVar10 = FUN_0052ba50(local_48,pcVar10);
          local_4._0_1_ = 1;
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)&this->mbr_0x24,(_String_base *)pcVar10,0,0xffffffff);
          local_4 = (uint)local_4._1_3_ << 8;
          if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
            _free(local_44);
          }
          local_30 = 0xf;
          local_34 = 0;
          local_44 = (void *)((uint)local_44 & 0xffffff00);
          FUN_0052ba00(')');
        }
        else {
          pcVar4 = local_50;
          if (pcVar2 <= local_50) {
            pcVar4 = pcVar2;
          }
          pppppuVar6 = local_60[0];
          if (local_4c < 0x10) {
            pppppuVar6 = local_60;
          }
          bVar8 = false;
          iVar5 = 0;
          bVar9 = true;
          pbVar7 = (byte *)"Material";
          do {
            if (pcVar4 == (char *)0x0) break;
            pcVar4 = pcVar4 + -1;
            bVar8 = *(byte *)pppppuVar6 < *pbVar7;
            bVar9 = *(byte *)pppppuVar6 == *pbVar7;
            pppppuVar6 = (undefined4 *****)((int)pppppuVar6 + 1);
            pbVar7 = pbVar7 + 1;
          } while (bVar9);
          if (!bVar9) {
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          }
          if (iVar5 == 0) goto LAB_004d0d67;
LAB_004d0dd7:
          pcVar4 = "Lightmap";
          do {
            pcVar2 = pcVar4;
            pcVar4 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          uVar3 = ::cls_0x50db20::meth_0x41e4b0
                            ((cls_0x50db20 *)(local_74 + 4),0,(uint)local_50,
                             (_String_base *)"Lightmap",(uint)(pcVar2 + -0x6719e0));
          if (uVar3 == 0) {
            pcVar10 = (cls_0x50db20 *)0x28;
            FUN_0052ba00('(');
            pcVar10 = FUN_0052ba50(local_2c,pcVar10);
            local_4._0_1_ = 2;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&this->mbr_0x40,(_String_base *)pcVar10,0,0xffffffff);
            local_4 = (uint)local_4._1_3_ << 8;
            if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
              _free(local_28);
            }
            local_14 = 0xf;
            local_18 = 0;
            local_28 = (void *)((uint)local_28 & 0xffffff00);
            FUN_0052ba00(')');
          }
          else {
            cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_84);
          }
        }
        local_4 = 0xffffffff;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          _free(local_60[0]);
        }
        local_4c = 0xf;
        local_50 = (char *)0x0;
        local_60[0] = (undefined4 *****)((uint)local_60[0] & 0xffffff00);
      }
      else {
        cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_84);
      }
      pdVar1 = (dword *)FUN_0052b940(local_74);
      local_84._4_4_ = pdVar1[1];
      local_84._0_4_ = *pdVar1;
      local_7c = pdVar1[2];
      local_78 = pdVar1[3];
    } while (local_84._0_4_ != 0x7d);
    local_84._0_4_ = 0x7d;
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
G3D_LightmapSurfaceAttribute::virt_meth_0x4d0f30
          (G3D_LightmapSurfaceAttribute *this,int param_1,int *param_2)

{
  FUN_004d0510((cls_0x50db20 *)&this->mbr_0x24,param_1,param_2);
  FUN_004d0510((cls_0x50db20 *)&this->mbr_0x40,param_1,param_2);
  return;
}



void __thiscall
G3D_LightmapSurfaceAttribute::meth_0x4d1050(G3D_LightmapSurfaceAttribute *this,FILE *param_1)

{
  FILE *_File;
  G3D_LightmapSurfaceAttribute *this_00;
  uint unaff_retaddr;
  undefined4 local_30;
  FILE local_2c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  _File = param_1;
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_2c._tmpfname = (char *)(DAT_007062c0 ^ unaff_retaddr);
  local_2c._bufsiz = 0xf;
  local_2c._charbuf = 0;
  local_2c._cnt = local_2c._cnt & 0xffffff00;
  local_4 = 0;
  ExceptionList = &local_c;
  _fread(&param_1,1,1,param_1);
  *(byte *)&this->mbr_0x38 = (byte)param_1 & 1;
  *(byte *)((int)&this->mbr_0x38 + 1) = (byte)param_1 >> 1 & 1;
  *(byte *)((int)&this->mbr_0x38 + 2) = (byte)param_1 >> 2 & 1;
  *(byte *)((int)&this->mbr_0x38 + 3) = (byte)param_1 >> 3 & 1;
  *(byte *)&this->mbr_0x3c = (byte)param_1 >> 4 & 1;
  meth_0x4d0670(this,_File);
  meth_0x4d0450(this_00,&local_2c);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->G3D_BaseAttribute).mbr_0x1c,(_String_base *)&local_2c,0,
             0xffffffff);
  _fread(&local_30,4,1,_File);
  meth_0x4ca270(this,local_30);
  _fread(&local_30,4,1,_File);
  meth_0x4ca290(this,local_30);
  if (0xf < (uint)local_2c._bufsiz) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_2c._cnt);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_2c._tmpfname ^ unaff_retaddr);
  return;
}



void __thiscall
G3D_LightmapSurfaceAttribute::meth_0x4d1180
          (G3D_LightmapSurfaceAttribute *this,int param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  bVar1 = *(byte *)(*param_2 + param_1);
  ExceptionList = &local_c;
  *param_2 = *param_2 + 1;
  *(byte *)&this->mbr_0x38 = bVar1 & 1;
  *(byte *)((int)&this->mbr_0x38 + 1) = bVar1 >> 1 & 1;
  *(byte *)((int)&this->mbr_0x38 + 2) = bVar1 >> 2 & 1;
  local_4 = 0;
  *(byte *)((int)&this->mbr_0x38 + 3) = bVar1 >> 3 & 1;
  *(byte *)&this->mbr_0x3c = bVar1 >> 4 & 1;
  meth_0x4d0690(this,param_1,param_2);
  FUN_004d0510((cls_0x50db20 *)local_2c,param_1,param_2);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->G3D_BaseAttribute).mbr_0x1c,local_2c,0,0xffffffff);
  uVar2 = *(undefined4 *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  meth_0x4ca270(this,uVar2);
  uVar2 = *(undefined4 *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  meth_0x4ca290(this,uVar2);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall G3D_LightmapSurfaceAttribute::meth_0x4d4ba0(G3D_LightmapSurfaceAttribute *this)

{
  char cVar1;
  dword *pdVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  float10 *unaff_ESI;
  undefined4 ****ppppuVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint unaff_retaddr;
  cls_0x50db20 *pcVar12;
  undefined local_b0 [8];
  dword local_a8;
  dword local_a4;
  undefined local_a0 [8];
  dword local_98;
  dword local_94;
  undefined4 ****local_8c [4];
  char *local_7c;
  uint local_78;
  void *local_70;
  uint local_60;
  uint local_5c;
  int local_58;
  void *local_54;
  dword local_44;
  uint local_40;
  undefined local_3c [4];
  void *local_38;
  dword local_28;
  uint local_24;
  int local_20 [4];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633493;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  FUN_0052ba00('{');
  *(undefined *)&this->mbr_0x38 = 0;
  *(undefined *)((int)&this->mbr_0x38 + 1) = 0;
  *(undefined *)((int)&this->mbr_0x38 + 2) = 0;
  *(undefined *)((int)&this->mbr_0x38 + 3) = 0;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = (void *)((uint)local_54 & 0xffffff00);
  pcVar5 = "NULL_TEXTURE";
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_58,"NULL_TEXTURE",(uint)(pcVar3 + -0x671968))
  ;
  local_4 = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)this,(_String_base *)&local_58,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  pdVar2 = (dword *)FUN_0052b940(&local_58);
  local_a0._4_4_ = pdVar2[1];
  local_a0._0_4_ = *pdVar2;
  local_98 = pdVar2[2];
  local_94 = pdVar2[3];
  if (local_a0._0_4_ != 0x7d) {
    do {
      if (local_a0._0_4_ == 0x100) {
        FUN_0052afe0((cls_0x50db20 *)&stack0xffffff70);
        local_4 = 1;
        pcVar5 = "Name";
        do {
          pcVar3 = pcVar5;
          pcVar5 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        pcVar3 = pcVar3 + -0x65cbe0;
        if (local_7c == (char *)0x0) {
LAB_004d4d02:
          if ((local_7c < pcVar3) || (local_7c != pcVar3)) goto LAB_004d4d1d;
          ::cls_0x50db20::meth_0x4d05e0((cls_0x50db20 *)this);
        }
        else {
          pcVar5 = local_7c;
          if (pcVar3 <= local_7c) {
            pcVar5 = pcVar3;
          }
          ppppuVar7 = local_8c[0];
          if (local_78 < 0x10) {
            ppppuVar7 = local_8c;
          }
          bVar9 = false;
          iVar6 = 0;
          bVar10 = true;
          pbVar8 = &DAT_0065cbe0;
          do {
            if (pcVar5 == (char *)0x0) break;
            pcVar5 = pcVar5 + -1;
            bVar9 = *(byte *)ppppuVar7 < *pbVar8;
            bVar10 = *(byte *)ppppuVar7 == *pbVar8;
            ppppuVar7 = (undefined4 ****)((int)ppppuVar7 + 1);
            pbVar8 = pbVar8 + 1;
          } while (bVar10);
          if (!bVar10) {
            iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          }
          if (iVar6 == 0) goto LAB_004d4d02;
LAB_004d4d1d:
          pcVar5 = "File";
          do {
            pcVar3 = pcVar5;
            pcVar5 = pcVar3 + 1;
          } while (*pcVar3 != '\0');
          uVar4 = ::cls_0x50db20::meth_0x41e4b0
                            ((cls_0x50db20 *)&stack0xffffff70,0,(uint)local_7c,
                             (_String_base *)&DAT_006719d8,(uint)(pcVar3 + -0x6719d8));
          if (uVar4 == 0) {
            pcVar12 = (cls_0x50db20 *)0x28;
            FUN_0052ba00('(');
            pcVar12 = FUN_0052ba50(local_3c,pcVar12);
            local_4._0_1_ = 2;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&(this->G3D_BaseAttribute).mbr_0x1c,(_String_base *)pcVar12,0
                       ,0xffffffff);
            local_4._0_1_ = 1;
            if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_38);
            }
            local_24 = 0xf;
            local_28 = 0;
            local_38 = (void *)((uint)local_38 & 0xffffff00);
            FUN_0052ba00(')');
          }
          else {
            pcVar5 = "Width";
            do {
              pcVar3 = pcVar5;
              pcVar5 = pcVar3 + 1;
            } while (*pcVar3 != '\0');
            uVar4 = ::cls_0x50db20::meth_0x41e4b0
                              ((cls_0x50db20 *)&stack0xffffff70,0,(uint)local_7c,
                               (_String_base *)"Width",(uint)(pcVar3 + -0x6719c8));
            if (uVar4 == 0) {
              FUN_0052ba00('(');
              FUN_0052baf0(unaff_ESI);
              uVar11 = FUN_00616e24();
              meth_0x4ca270(this,(int)uVar11);
              FUN_0052ba00(')');
            }
            else {
              pcVar5 = "Height";
              do {
                pcVar3 = pcVar5;
                pcVar5 = pcVar3 + 1;
              } while (*pcVar3 != '\0');
              uVar4 = ::cls_0x50db20::meth_0x41e4b0
                                ((cls_0x50db20 *)&stack0xffffff70,0,(uint)local_7c,
                                 (_String_base *)"Height",(uint)(pcVar3 + -0x6719c0));
              if (uVar4 == 0) {
                FUN_0052ba00('(');
                FUN_0052baf0(unaff_ESI);
                uVar11 = FUN_00616e24();
                meth_0x4ca290(this,(int)uVar11);
                FUN_0052ba00(')');
              }
              else {
                pcVar5 = PTR_s_Flags_006fb394;
                do {
                  cVar1 = *pcVar5;
                  pcVar5 = pcVar5 + 1;
                } while (cVar1 != '\0');
                uVar4 = ::cls_0x50db20::meth_0x41e4b0
                                  ((cls_0x50db20 *)&stack0xffffff70,0,(uint)local_7c,
                                   (_String_base *)PTR_s_Flags_006fb394,
                                   (int)pcVar5 - (int)(PTR_s_Flags_006fb394 + 1));
                if (uVar4 == 0) {
                  FUN_0052ba00('(');
                  pdVar2 = (dword *)FUN_0052b940(local_20);
                  local_b0._4_4_ = pdVar2[1];
                  local_b0._0_4_ = *pdVar2;
                  local_a8 = pdVar2[2];
                  local_a4 = pdVar2[3];
                  if (local_b0._0_4_ != 0x29) {
                    do {
                      if (local_b0._0_4_ == 0x100) {
                        FUN_0052afe0((cls_0x50db20 *)&stack0xffffff8c);
                        local_4._0_1_ = 3;
                        pcVar5 = "WRAP_S";
                        do {
                          pcVar3 = pcVar5;
                          pcVar5 = pcVar3 + 1;
                        } while (*pcVar3 != '\0');
                        uVar4 = ::cls_0x50db20::meth_0x41e4b0
                                          ((cls_0x50db20 *)&stack0xffffff8c,0,local_60,
                                           (_String_base *)&DAT_006719b0,(uint)(pcVar3 + -0x6719b0))
                        ;
                        if (uVar4 == 0) {
                          *(undefined *)&this->mbr_0x38 = 1;
                        }
                        else {
                          pcVar5 = "WRAP_T";
                          do {
                            pcVar3 = pcVar5;
                            pcVar5 = pcVar3 + 1;
                          } while (*pcVar3 != '\0');
                          uVar4 = ::cls_0x50db20::meth_0x41e4b0
                                            ((cls_0x50db20 *)&stack0xffffff8c,0,local_60,
                                             (_String_base *)&DAT_006719a8,
                                             (uint)(pcVar3 + -0x6719a8));
                          if (uVar4 == 0) {
                            *(undefined *)((int)&this->mbr_0x38 + 1) = 1;
                          }
                          else {
                            pcVar5 = "CLAMP_S";
                            do {
                              pcVar3 = pcVar5;
                              pcVar5 = pcVar3 + 1;
                            } while (*pcVar3 != '\0');
                            uVar4 = ::cls_0x50db20::meth_0x41e4b0
                                              ((cls_0x50db20 *)&stack0xffffff8c,0,local_60,
                                               (_String_base *)"CLAMP_S",(uint)(pcVar3 + -0x6719a0))
                            ;
                            if (uVar4 == 0) {
                              *(undefined *)&this->mbr_0x38 = 0;
                            }
                            else {
                              bVar9 = FUN_0043ffd0((cls_0x50db20 *)&stack0xffffff8c,
                                                   (_String_base *)"CLAMP_T");
                              if (bVar9) {
                                *(undefined *)((int)&this->mbr_0x38 + 1) = 0;
                              }
                              else {
                                bVar9 = FUN_0043ffd0((cls_0x50db20 *)&stack0xffffff8c,
                                                     (_String_base *)"FILTERING");
                                if (bVar9) {
                                  *(undefined *)((int)&this->mbr_0x38 + 2) = 1;
                                }
                                else {
                                  bVar9 = FUN_0043ffd0((cls_0x50db20 *)&stack0xffffff8c,
                                                       (_String_base *)"ENVIRONMENT_MAPPING");
                                  if (bVar9) {
                                    *(undefined *)((int)&this->mbr_0x38 + 3) = 1;
                                  }
                                  else {
                                    cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_b0);
                                  }
                                }
                              }
                            }
                          }
                        }
                        local_4._0_1_ = 1;
                        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
                          _free(local_70);
                        }
                        local_5c = 0xf;
                        local_60 = 0;
                        local_70 = (void *)((uint)local_70 & 0xffffff00);
                      }
                      else {
                        cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_b0);
                      }
                      pdVar2 = (dword *)FUN_0052b940(local_20);
                      local_b0._4_4_ = pdVar2[1];
                      local_b0._0_4_ = *pdVar2;
                      local_a8 = pdVar2[2];
                      local_a4 = pdVar2[3];
                    } while (local_b0._0_4_ != 0x29);
                    local_b0._0_4_ = 0x29;
                  }
                }
                else {
                  cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_a0);
                }
              }
            }
          }
        }
        local_4 = 0xffffffff;
        if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c[0]);
        }
        local_78 = 0xf;
        local_7c = (char *)0x0;
        local_8c[0] = (undefined4 ****)((uint)local_8c[0] & 0xffffff00);
      }
      else {
        cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_a0);
      }
      pdVar2 = (dword *)FUN_0052b940(&local_58);
      local_a0._4_4_ = pdVar2[1];
      local_a0._0_4_ = *pdVar2;
      local_98 = pdVar2[2];
      local_94 = pdVar2[3];
    } while (local_a0._0_4_ != 0x7d);
    local_a0._0_4_ = 0x7d;
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/G3D_LightmapSurfaceAttribute.h"
