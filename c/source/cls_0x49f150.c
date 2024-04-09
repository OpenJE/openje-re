#include "../include/cls_0x49f150.h"

cls_0x49f150 * __thiscall cls_0x49f150::cls_0x49f150(cls_0x49f150 *this)

{
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0x3f800000;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0xd4 = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xe4 = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xf0 = 0;
  this->mbr_0xf4 = 0;
  this->mbr_0xf8 = 0;
  this->mbr_0x0 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x4 = (dword)this;
  this->mbr_0x64 = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x68 = 0x3f800000;
  this->mbr_0x54 = 0x3f800000;
  this->mbr_0x40 = 0x3f800000;
  this->mbr_0x2c = 0x3f800000;
  this->mbr_0xa4 = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x8c = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x7c = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x70 = 0;
  this->mbr_0xa8 = 0x3f800000;
  this->mbr_0x94 = 0x3f800000;
  this->mbr_0x80 = 0x3f800000;
  this->mbr_0x6c = 0x3f800000;
  return this;
}



undefined4 * __thiscall cls_0x49f150::meth_0x49fae0(cls_0x49f150 *this,int param_1)

{
  cls_0x616328 *pcVar1;
  int *piVar2;
  dword dVar3;
  dword dVar4;
  dword dVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  cls_0x49d260 *this_00;
  int *piVar10;
  Gfx_ParticleSystem *pGVar11;
  Gfx_NodeAttribute__vftable_66b488 *in_stack_ffffff64;
  uint uVar12;
  Gfx_ParticleSystem *local_70;
  uint local_6c;
  uint local_68;
  Gfx_ParticleSystem *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  dword local_4c;
  undefined4 local_48;
  dword local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  Gfx_NodeAttribute__vftable_66b488 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  cls_0x49f150 *local_14;
  int local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631a0d;
  local_c = ExceptionList;
  local_70 = (Gfx_ParticleSystem *)0x0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    local_68 = 0;
  }
  else {
    local_68 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0) >> 2;
  }
  ExceptionList = &local_c;
  cls_0x49d1b0::meth_0x49d1b0((cls_0x49d1b0 *)this,(undefined4 *)(param_1 + 0x10));
  this->mbr_0x20 = *(dword *)(param_1 + 0x20);
  this->mbr_0x24 = *(dword *)(param_1 + 0x24);
  this->mbr_0x28 = *(dword *)(param_1 + 0x28);
  this->mbr_0x5c = this->mbr_0x20;
  this->mbr_0x60 = this->mbr_0x24;
  this->mbr_0x64 = this->mbr_0x28;
  this->mbr_0xc = 1;
  local_6c = 0;
  if (local_68 != 0) {
    do {
      pcVar1 = *(cls_0x616328 **)(*(int *)(param_1 + 0xb0) + local_6c * 4);
      iVar7 = FUN_006165e0(pcVar1,0,&Gfx_NodeAttribute::RTTI_Type_Descriptor,
                           &Gfx_ModelMesh::RTTI_Type_Descriptor,0);
      if (iVar7 == 0) {
        iVar7 = FUN_006165e0(pcVar1,0,&Gfx_NodeAttribute::RTTI_Type_Descriptor,
                             &Gfx_SkinMesh::RTTI_Type_Descriptor,0);
        if (iVar7 == 0) {
          iVar7 = FUN_006165e0(pcVar1,0,&Gfx_NodeAttribute::RTTI_Type_Descriptor,
                               &Gfx_ParticleSystem::RTTI_Type_Descriptor,0);
          if (iVar7 == 0) {
            uVar12 = 0x49fd71;
            iVar7 = FUN_006165e0(pcVar1,0,&Gfx_NodeAttribute::RTTI_Type_Descriptor,
                                 &Gfx_Water::RTTI_Type_Descriptor,0);
            if (iVar7 == 0) {
              pvVar8 = (void *)FUN_006165e0(pcVar1,0,&Gfx_NodeAttribute::RTTI_Type_Descriptor,
                                            &Gfx_WaterTile::RTTI_Type_Descriptor,0);
              if (pvVar8 == (void *)0x0) {
                this_00 = (cls_0x49d260 *)
                          FUN_006165e0(pcVar1,0,&Gfx_NodeAttribute::RTTI_Type_Descriptor,
                                       &Gfx_LineSystem::RTTI_Type_Descriptor,0);
                if (this_00 != (cls_0x49d260 *)0x0) {
                  local_64 = (Gfx_ParticleSystem *)operator_new(0x11c);
                  local_4 = 5;
                  if (local_64 == (Gfx_ParticleSystem *)0x0) {
                    pGVar11 = (Gfx_ParticleSystem *)0x0;
                  }
                  else {
                    pGVar11 = (Gfx_ParticleSystem *)
                              Gfx_LineSystem::Gfx_LineSystem((Gfx_LineSystem *)local_64);
                  }
                  local_4 = 0xffffffff;
                  local_64 = (Gfx_ParticleSystem *)cls_0x49d260::meth_0x49d260(this_00);
                  iVar7 = 0;
                  if (0 < (int)local_64) {
                    do {
                      cls_0x50e8c0::meth_0x50e8c0
                                ((cls_0x50e8c0 *)this_00,iVar7,&local_10,&local_14,&local_18,
                                 &local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30,
                                 &local_34,&local_38,&local_3c,&local_40,&local_44);
                      in_stack_ffffff64 = local_2c;
                      FUN_0050f870(pGVar11,local_10,local_14,local_18,local_1c,local_20,local_24,
                                   local_28,local_2c,local_30,local_34,local_38,local_3c,local_40,
                                   local_44);
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < (int)local_64);
                  }
                  local_64 = pGVar11;
                  cls_0x49eeb0::meth_0x49f4f0((cls_0x49eeb0 *)&this->field_0xac,&local_64);
                  *(cls_0x49f150 **)&(local_64->Gfx_NodeAttribute).field_0x4 = this;
                  *(cls_0x49f150 **)&(pGVar11->Gfx_NodeAttribute).field_0x4 = this;
                  this->mbr_0x20 = *(dword *)(param_1 + 0x20);
                  this->mbr_0x24 = *(dword *)(param_1 + 0x24);
                  this->mbr_0x28 = *(dword *)(param_1 + 0x28);
                  this->mbr_0x5c = this->mbr_0x20;
                  this->mbr_0x60 = this->mbr_0x24;
                  this->mbr_0x64 = this->mbr_0x28;
                  this->mbr_0xc = 1;
                }
              }
              else {
                local_64 = (Gfx_ParticleSystem *)operator_new(600);
                local_4 = 4;
                if (local_64 == (Gfx_ParticleSystem *)0x0) {
                  pGVar11 = (Gfx_ParticleSystem *)0x0;
                }
                else {
                  pGVar11 = (Gfx_ParticleSystem *)
                            Gfx_WaterTile::Gfx_WaterTile((Gfx_WaterTile *)local_64);
                }
                local_4 = 0xffffffff;
                local_64 = pGVar11;
                cls_0x49eeb0::meth_0x49f4f0((cls_0x49eeb0 *)&this->field_0xac,&local_64);
                *(cls_0x49f150 **)&(local_64->Gfx_NodeAttribute).field_0x4 = this;
                *(cls_0x49f150 **)&(pGVar11->Gfx_NodeAttribute).field_0x4 = this;
                ::cls_0x50db20::meth_0x401b20
                          ((cls_0x50db20 *)&pGVar11->mbr_0xd8,(_String_base *)((int)pvVar8 + 0xd8),0
                           ,0xffffffff);
                dVar5 = *(dword *)((int)pvVar8 + 0x120);
                dVar3 = *(dword *)((int)pvVar8 + 0x118);
                dVar4 = *(dword *)((int)pvVar8 + 0x11c);
                (pGVar11->cls_0x514000).mbr_0x18 = *(dword *)((int)pvVar8 + 0x124);
                (pGVar11->cls_0x514000).mbr_0x14 = dVar5;
                (pGVar11->cls_0x514000).mbr_0xc = dVar3;
                (pGVar11->cls_0x514000).mbr_0x10 = dVar4;
                Gfx_WaterTile::meth_0x511430
                          ((Gfx_WaterTile *)pGVar11,*(undefined4 *)((int)pvVar8 + 0xf4),0);
                Gfx_WaterTile::meth_0x5114a0
                          ((Gfx_WaterTile *)pGVar11,*(int *)((int)pvVar8 + 0x128),0);
                this->mbr_0x20 = *(dword *)(param_1 + 0x20);
                this->mbr_0x24 = *(dword *)(param_1 + 0x24);
                this->mbr_0x28 = *(dword *)(param_1 + 0x28);
                this->mbr_0x5c = this->mbr_0x20;
                this->mbr_0x60 = this->mbr_0x24;
                this->mbr_0x64 = this->mbr_0x28;
                this->mbr_0xc = 1;
                uVar12 = 0;
                do {
                  uVar9 = FUN_0050fd70(pvVar8,uVar12,&local_58,&local_5c,&local_60);
                  if ((char)uVar9 != '\0') {
                    Gfx_WaterTile::meth_0x50fd30((Gfx_WaterTile *)pGVar11,uVar12);
                  }
                  uVar12 = uVar12 + 1;
                } while ((int)uVar12 < 4);
                Gfx_WaterTile::meth_0x512330((Gfx_WaterTile *)pGVar11);
                Gfx_WaterTile::meth_0x50fde0
                          ((Gfx_WaterTile *)pGVar11,*(undefined4 *)((int)pvVar8 + 0x1c0),
                           *(undefined4 *)((int)pvVar8 + 0x1c4),*(undefined4 *)((int)pvVar8 + 0x1c8)
                           ,*(undefined4 *)((int)pvVar8 + 0x1cc));
                local_48 = *(undefined4 *)((int)pvVar8 + 0x1d0);
                local_4c = *(dword *)((int)pvVar8 + 0x1d4);
                local_50 = *(float *)((int)pvVar8 + 0x1d8);
                local_54 = *(float *)((int)pvVar8 + 0x1dc);
                Gfx_WaterTile::meth_0x511ef0
                          ((Gfx_WaterTile *)pGVar11,local_48,local_4c,local_50,local_54);
              }
            }
            else {
              local_64 = (Gfx_ParticleSystem *)operator_new(0x178);
              local_4 = 3;
              if (local_64 == (Gfx_ParticleSystem *)0x0) {
                pGVar11 = (Gfx_ParticleSystem *)0x0;
              }
              else {
                pGVar11 = (Gfx_ParticleSystem *)Gfx_Water::Gfx_Water((Gfx_Water *)local_64);
              }
              local_64 = (Gfx_ParticleSystem *)&stack0xffffff64;
              local_4 = 0xffffffff;
              pvVar8 = (void *)(uVar12 & 0xffffff00);
              ::cls_0x50db20::meth_0x401b20
                        ((cls_0x50db20 *)&stack0xffffff64,(_String_base *)(iVar7 + 0x7c),0,
                         0xffffffff);
              Gfx_Water::meth_0x49eac0((Gfx_Water *)pGVar11,in_stack_ffffff64,pvVar8);
              local_64 = (Gfx_ParticleSystem *)&stack0xffffff64;
              pvVar8 = (void *)((uint)pvVar8 & 0xffffff00);
              ::cls_0x50db20::meth_0x401b20
                        ((cls_0x50db20 *)&stack0xffffff64,(_String_base *)(iVar7 + 0x40),0,
                         0xffffffff);
              Gfx_Water::meth_0x49eb20((Gfx_Water *)pGVar11,in_stack_ffffff64,pvVar8);
              local_64 = (Gfx_ParticleSystem *)&stack0xffffff64;
              pvVar8 = (void *)((uint)pvVar8 & 0xffffff00);
              ::cls_0x50db20::meth_0x401b20
                        ((cls_0x50db20 *)&stack0xffffff64,(_String_base *)(iVar7 + 0x60),0,
                         0xffffffff);
              Gfx_Water::meth_0x49eb80((Gfx_Water *)pGVar11,in_stack_ffffff64,pvVar8);
              dVar5 = *(dword *)(iVar7 + 200);
              pGVar11->mbr_0xc4 = *(dword *)(iVar7 + 0xc4);
              pGVar11->mbr_0xc8 = dVar5;
              piVar2 = *(int **)(iVar7 + 0xd0);
              if ((piVar2 != (int *)0x0) && (piVar10 = (int *)*piVar2, piVar10 != piVar2)) {
                do {
                  FUN_0049f5b0(pGVar11,piVar10[2],piVar10[3],(_String_base *)(piVar10 + 4),
                               (_String_base *)(piVar10 + 0xb));
                  piVar10 = (int *)*piVar10;
                } while (piVar10 != (int *)*(int *)(iVar7 + 0xd0));
              }
              dVar5 = *(dword *)(iVar7 + 0x38);
              pGVar11->mbr_0x3c = *(dword *)(iVar7 + 0x3c);
              pGVar11->mbr_0x38 = dVar5;
              *(undefined4 *)&pGVar11->field_0x5c = *(undefined4 *)(iVar7 + 0x5c);
              local_64 = pGVar11;
              cls_0x49eeb0::meth_0x49f4f0((cls_0x49eeb0 *)&this->field_0xac,&local_64);
              *(cls_0x49f150 **)&(local_64->Gfx_NodeAttribute).field_0x4 = this;
              *(cls_0x49f150 **)&(pGVar11->Gfx_NodeAttribute).field_0x4 = this;
              this->mbr_0x20 = *(dword *)(param_1 + 0x20);
              this->mbr_0x24 = *(dword *)(param_1 + 0x24);
              this->mbr_0x28 = *(dword *)(param_1 + 0x28);
              this->mbr_0x5c = this->mbr_0x20;
              this->mbr_0x60 = this->mbr_0x24;
              this->mbr_0x64 = this->mbr_0x28;
              this->mbr_0xc = 1;
              Gfx_Water::meth_0x51d840((Gfx_Water *)pGVar11);
            }
          }
          else {
            local_64 = (Gfx_ParticleSystem *)operator_new(0x724);
            local_4 = 2;
            if (local_64 == (Gfx_ParticleSystem *)0x0) {
              pGVar11 = (Gfx_ParticleSystem *)0x0;
            }
            else {
              pGVar11 = Gfx_ParticleSystem::Gfx_ParticleSystem(local_64);
            }
            local_4 = 0xffffffff;
            pGVar11->mbr_0x6fc = *(dword *)(iVar7 + 0x6fc);
            Gfx_ParticleSystem::meth_0x513070(pGVar11,(undefined4 *)(iVar7 + 0x10c));
            Gfx_ParticleSystem::meth_0x5144e0(pGVar11,*(undefined4 *)(iVar7 + 0xec),0,'\x01');
            local_64 = pGVar11;
            cls_0x49eeb0::meth_0x49f4f0((cls_0x49eeb0 *)&this->field_0xac,&local_64);
            *(cls_0x49f150 **)&(local_64->Gfx_NodeAttribute).field_0x4 = this;
            *(cls_0x49f150 **)&(pGVar11->Gfx_NodeAttribute).field_0x4 = this;
            this->mbr_0x20 = *(dword *)(param_1 + 0x20);
            this->mbr_0x24 = *(dword *)(param_1 + 0x24);
            this->mbr_0x28 = *(dword *)(param_1 + 0x28);
            this->mbr_0x5c = this->mbr_0x20;
            this->mbr_0x60 = this->mbr_0x24;
            this->mbr_0x64 = this->mbr_0x28;
            this->mbr_0xc = 1;
          }
        }
        else {
          local_64 = (Gfx_ParticleSystem *)operator_new(200);
          local_4 = 1;
          if (local_64 == (Gfx_ParticleSystem *)0x0) {
            pGVar11 = (Gfx_ParticleSystem *)0x0;
          }
          else {
            pGVar11 = (Gfx_ParticleSystem *)
                      Gfx_SkinMeshPkt::Gfx_SkinMeshPkt((Gfx_SkinMeshPkt *)local_64,iVar7);
          }
          local_4 = 0xffffffff;
          local_64 = pGVar11;
          cls_0x49eeb0::meth_0x49f4f0((cls_0x49eeb0 *)&this->field_0xac,&local_64);
          *(cls_0x49f150 **)&(local_64->Gfx_NodeAttribute).field_0x4 = this;
          if (local_70 == (Gfx_ParticleSystem *)0x0) {
            local_70 = pGVar11;
          }
        }
      }
      else {
        local_64 = (Gfx_ParticleSystem *)operator_new(0x58);
        pGVar11 = (Gfx_ParticleSystem *)0x0;
        local_4 = 0;
        if (local_64 != (Gfx_ParticleSystem *)0x0) {
          pGVar11 = (Gfx_ParticleSystem *)
                    Gfx_ModelMeshPkt::Gfx_ModelMeshPkt((Gfx_ModelMeshPkt *)local_64,iVar7);
        }
        local_4 = 0xffffffff;
        local_64 = pGVar11;
        cls_0x49eeb0::meth_0x49f4f0((cls_0x49eeb0 *)&this->field_0xac,&local_64);
        *(cls_0x49f150 **)&(local_64->Gfx_NodeAttribute).field_0x4 = this;
        if ((local_70 == (Gfx_ParticleSystem *)0x0) &&
           ((*(uint *)(pGVar11->mbr_0x24 + 0x24) & 6) == 0)) {
          local_70 = pGVar11;
        }
      }
      local_6c = local_6c + 1;
    } while (local_6c < local_68);
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    local_6c = 0;
  }
  else {
    local_6c = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2;
  }
  local_68 = 0;
  if (local_6c != 0) {
    do {
      local_10 = *(int *)(*(int *)(param_1 + 0xc0) + local_68 * 4);
      local_14 = (cls_0x49f150 *)operator_new(0xfc);
      local_4 = 6;
      if (local_14 == (cls_0x49f150 *)0x0) {
        pGVar11 = (Gfx_ParticleSystem *)0x0;
      }
      else {
        pGVar11 = (Gfx_ParticleSystem *)cls_0x49f150(local_14);
      }
      (pGVar11->Gfx_NodeAttribute).vftptr_0x0 = (Gfx_NodeAttribute__vftable_66b488 *)this->mbr_0x0;
      dVar5 = this->mbr_0xc0;
      local_4 = 0xffffffff;
      local_64 = pGVar11;
      if ((dVar5 == 0) ||
         ((uint)((int)(this->mbr_0xc8 - dVar5) >> 2) <= (uint)((int)(this->mbr_0xc4 - dVar5) >> 2)))
      {
        cls_0x49eeb0::meth_0x49eeb0
                  ((cls_0x49eeb0 *)&this->field_0xbc,(undefined4 *)this->mbr_0xc4,(undefined4 *)0x1,
                   &local_64);
      }
      else {
        puVar6 = (undefined4 *)this->mbr_0xc4;
        FUN_005457b0(puVar6,1,&local_64);
        this->mbr_0xc4 = (dword)(puVar6 + 1);
      }
      *(cls_0x49f150 **)&(pGVar11->Gfx_NodeAttribute).field_0x8 = this;
      *(dword *)&(pGVar11->Gfx_NodeAttribute).field_0x4 = this->mbr_0x4;
      (pGVar11->Gfx_NodeAttribute).vftptr_0x0 = (Gfx_NodeAttribute__vftable_66b488 *)this->mbr_0x0;
      pGVar11 = (Gfx_ParticleSystem *)meth_0x49fae0((cls_0x49f150 *)pGVar11,local_10);
      if (local_70 == (Gfx_ParticleSystem *)0x0) {
        local_70 = pGVar11;
      }
      local_68 = local_68 + 1;
    } while (local_68 < local_6c);
  }
  ExceptionList = local_c;
  return (undefined4 *)local_70;
}


