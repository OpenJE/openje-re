#include "../include/G3D_Node.h"

void __thiscall G3D_Node::meth_0x4caaa0(G3D_Node *this)

{
  dword *pdVar1;
  int iVar2;
  undefined4 *puVar3;
  cls_0x48fb60 *pcVar4;
  double *pdVar5;
  cls_0x48fce0 *pcVar6;
  cls_0x48fb60 local_188;
  undefined4 local_128 [24];
  double local_c8 [12];
  undefined4 local_68 [25];
  
  cls_0x48fb60::cls_0x48fb60(&local_188,0,0x3ff00000);
  if (this->mbr_0x100 != 0) {
    pdVar1 = (dword *)(this->mbr_0x100 + 0xa0);
    pcVar4 = &local_188;
    for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar4->mbr_0x0 = *pdVar1;
      pdVar1 = pdVar1 + 1;
      pcVar4 = (cls_0x48fb60 *)&pcVar4->mbr_0x4;
    }
  }
  G3D_Transform::meth_0x4ca930(&this->G3D_Transform,local_128);
  puVar3 = local_128;
  pdVar5 = local_c8;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  pdVar1 = (dword *)cls_0x48fb60::meth_0x48fee0(&local_188,local_68,local_c8);
  pcVar6 = &this->cls_0x48fce0;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pcVar6->cls_0x48fb60).mbr_0x0 = *pdVar1;
    pdVar1 = pdVar1 + 1;
    pcVar6 = (cls_0x48fce0 *)&(pcVar6->cls_0x48fb60).mbr_0x4;
  }
  return;
}



G3D_Node * __thiscall G3D_Node::~G3D_Node(G3D_Node *this)

{
  G3D_Node *_Memory;
  int *piVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006335c2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &G3D_Node__vftable_671e70_00671e70;
  piVar1 = (int *)this->mbr_0x10c;
  local_4 = 3;
  if (piVar1 != (int *)this->mbr_0x110) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)this->mbr_0x110);
  }
  piVar1 = (int *)this->mbr_0x11c;
  if (piVar1 != (int *)this->mbr_0x120) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)this->mbr_0x120);
  }
  if ((void *)this->mbr_0x11c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x11c);
  }
  this->mbr_0x11c = 0;
  this->mbr_0x120 = 0;
  this->mbr_0x124 = 0;
  _Memory = (G3D_Node *)this->mbr_0x10c;
  if (_Memory != (G3D_Node *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this->mbr_0x10c = 0;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  (this->G3D_Transform).vftptr_0x0 = &G3D_Transform__vftable_671cfc_00671cfc;
  if (0xf < (this->G3D_Transform).mbr_0x20) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->G3D_Transform).mbr_0xc);
  }
  (this->G3D_Transform).mbr_0x20 = 0xf;
  (this->G3D_Transform).mbr_0x1c = 0;
  *(undefined *)&(this->G3D_Transform).mbr_0xc = 0;
  if (0xf < this->mbr_0x20) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc);
  }
  this->mbr_0x20 = 0xf;
  this->mbr_0x1c = 0;
  *(undefined *)&this->mbr_0xc = 0;
  ExceptionList = local_c;
  return _Memory;
}



undefined4 * __thiscall G3D_Node::virt_meth_0x4cea90(G3D_Node *this,byte param_1)

{
  ~G3D_Node(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



G3D_Node * __thiscall G3D_Node::G3D_Node(G3D_Node *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006335c2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &G3D_Node__vftable_671e70_00671e70;
  this->mbr_0x20 = 0xf;
  this->mbr_0x1c = 0;
  *(undefined *)&this->mbr_0xc = 0;
  local_4 = 0;
  G3D_Transform::G3D_Transform(&this->G3D_Transform);
  local_4._0_1_ = 1;
  cls_0x48fce0::cls_0x48fce0(&this->cls_0x48fce0);
  this->mbr_0x10c = 0;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  this->mbr_0x11c = 0;
  this->mbr_0x120 = 0;
  this->mbr_0x124 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  this->mbr_0x100 = 0;
  this->mbr_0x104 = 0;
  cls_0x48fb60::meth_0x48ff20(&(this->cls_0x48fce0).cls_0x48fb60);
  this->mbr_0x128 = 0;
  ExceptionList = local_c;
  return this;
}



void __thiscall G3D_Node::meth_0x4d80f0(G3D_Node *this,int param_1)

{
  *(G3D_Node **)(param_1 + 0x100) = this;
  *(dword *)(param_1 + 0x104) = this->mbr_0x104;
  cls_0x4d3d90::meth_0x4d7df0((cls_0x4d3d90 *)&this->field_0x118,&param_1);
  return;
}



void __thiscall G3D_Node::meth_0x4d9400(G3D_Node *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  FUN_004d9080((void *)this->mbr_0x104,(G3D_Water *)param_1);
  *(G3D_Node **)((int)pvVar1 + 0x20) = this;
  cls_0x4d3d90::meth_0x4d7df0((cls_0x4d3d90 *)&this->mbr_0x108,&param_1);
  return;
}



void __thiscall G3D_Node::virt_meth_0x4da230(G3D_Node *this)

{
  dword *pdVar1;
  char *pcVar2;
  G3D_Node *pGVar3;
  uint uVar4;
  G3D_Mesh *this_00;
  G3D_SpotLight *pGVar5;
  G3D_PointLight *this_01;
  G3D_DirectionalLight *this_02;
  G3D_Camera *this_03;
  G3D_ParticleEmitter *this_04;
  G3D_Water *this_05;
  G3D_LineSystem *this_06;
  G3D_LightmapSurfaceAttribute *this_07;
  G3D_OcclusionZones *this_08;
  G3D_WaterTile *this_09;
  char *pcVar6;
  int iVar7;
  undefined4 ******ppppppuVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  uint unaff_retaddr;
  undefined local_4c [8];
  dword local_44;
  dword local_40;
  int local_3c [5];
  undefined4 ******local_28 [4];
  char *local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633870;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  FUN_0052ba00('{');
  pdVar1 = (dword *)FUN_0052b940(local_3c);
  local_4c._4_4_ = pdVar1[1];
  local_4c._0_4_ = *pdVar1;
  local_44 = pdVar1[2];
  local_40 = pdVar1[3];
  if (local_4c._0_4_ != 0x7d) {
    do {
      if (local_4c._0_4_ == 0x100) {
        FUN_0052afe0((cls_0x50db20 *)(local_3c + 4));
        local_4 = 0;
        pcVar6 = "Node";
        do {
          pcVar2 = pcVar6;
          pcVar6 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        pcVar2 = pcVar2 + -0x671abc;
        if (local_18 == (char *)0x0) {
LAB_004da308:
          if ((local_18 < pcVar2) || (local_18 != pcVar2)) goto LAB_004da362;
          pGVar3 = (G3D_Node *)operator_new(0x130);
          local_4._0_1_ = 1;
          if (pGVar3 == (G3D_Node *)0x0) {
            pGVar3 = (G3D_Node *)0x0;
          }
          else {
            pGVar3 = G3D_Node(pGVar3);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          meth_0x4d80f0(this,(int)pGVar3);
          (*pGVar3->vftptr_0x0->virt_meth_0x4da230_4)(pGVar3);
          FUN_004d8ff0((void *)this->mbr_0x104,pGVar3);
        }
        else {
          pcVar6 = local_18;
          if (pcVar2 <= local_18) {
            pcVar6 = pcVar2;
          }
          ppppppuVar8 = local_28[0];
          if (local_14 < 0x10) {
            ppppppuVar8 = local_28;
          }
          bVar10 = false;
          iVar7 = 0;
          bVar11 = true;
          pbVar9 = &DAT_00671abc;
          do {
            if (pcVar6 == (char *)0x0) break;
            pcVar6 = pcVar6 + -1;
            bVar10 = *(byte *)ppppppuVar8 < *pbVar9;
            bVar11 = *(byte *)ppppppuVar8 == *pbVar9;
            ppppppuVar8 = (undefined4 ******)((int)ppppppuVar8 + 1);
            pbVar9 = pbVar9 + 1;
          } while (bVar11);
          if (!bVar11) {
            iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          }
          if (iVar7 == 0) goto LAB_004da308;
LAB_004da362:
          pcVar6 = "Name";
          do {
            pcVar2 = pcVar6;
            pcVar6 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          uVar4 = ::cls_0x50db20::meth_0x41e4b0
                            ((cls_0x50db20 *)(local_3c + 4),0,(uint)local_18,
                             (_String_base *)&DAT_0065cbe0,(uint)(pcVar2 + -0x65cbe0));
          if (uVar4 == 0) {
            ::cls_0x50db20::meth_0x4d05e0((cls_0x50db20 *)&this->mbr_0x8);
          }
          else {
            pcVar6 = "Transform";
            do {
              pcVar2 = pcVar6;
              pcVar6 = pcVar2 + 1;
            } while (*pcVar2 != '\0');
            uVar4 = ::cls_0x50db20::meth_0x41e4b0
                              ((cls_0x50db20 *)(local_3c + 4),0,(uint)local_18,
                               (_String_base *)"Transform",(uint)(pcVar2 + -0x671a4c));
            if (uVar4 == 0) {
              (*((this->G3D_Transform).vftptr_0x0)->virt_meth_0x4d4700_4)(&this->G3D_Transform);
              meth_0x4caaa0(this);
            }
            else {
              pcVar6 = "Mesh";
              do {
                pcVar2 = pcVar6;
                pcVar6 = pcVar2 + 1;
              } while (*pcVar2 != '\0');
              uVar4 = ::cls_0x50db20::meth_0x41e4b0
                                ((cls_0x50db20 *)(local_3c + 4),0,(uint)local_18,
                                 (_String_base *)&DAT_00671ab4,(uint)(pcVar2 + -0x671ab4));
              if (uVar4 == 0) {
                this_00 = (G3D_Mesh *)operator_new(0x9c);
                local_4 = CONCAT31(local_4._1_3_,2);
                if (this_00 == (G3D_Mesh *)0x0) goto LAB_004da425;
                pGVar5 = (G3D_SpotLight *)G3D_Mesh::G3D_Mesh(this_00);
                goto LAB_004da427;
              }
              pcVar6 = "PointLight";
              do {
                pcVar2 = pcVar6;
                pcVar6 = pcVar2 + 1;
              } while (*pcVar2 != '\0');
              uVar4 = ::cls_0x50db20::meth_0x41e4b0
                                ((cls_0x50db20 *)(local_3c + 4),0,(uint)local_18,
                                 (_String_base *)"PointLight",(uint)(pcVar2 + -0x6717a4));
              if (uVar4 == 0) {
                this_01 = (G3D_PointLight *)operator_new(0x88);
                if (this_01 == (G3D_PointLight *)0x0) goto LAB_004da4bf;
                pGVar5 = (G3D_SpotLight *)G3D_PointLight::G3D_PointLight(this_01);
                goto LAB_004da42b;
              }
              pcVar6 = "SpotLight";
              do {
                pcVar2 = pcVar6;
                pcVar6 = pcVar2 + 1;
              } while (*pcVar2 != '\0');
              uVar4 = ::cls_0x50db20::meth_0x41e4b0
                                ((cls_0x50db20 *)(local_3c + 4),0,(uint)local_18,
                                 (_String_base *)"SpotLight",(uint)(pcVar2 + -0x671798));
              if (uVar4 == 0) {
                pGVar5 = (G3D_SpotLight *)operator_new(0xc0);
                local_4 = CONCAT31(local_4._1_3_,3);
                if (pGVar5 == (G3D_SpotLight *)0x0) {
LAB_004da425:
                  pGVar5 = (G3D_SpotLight *)0x0;
                }
                else {
                  pGVar5 = G3D_SpotLight::G3D_SpotLight(pGVar5);
                }
LAB_004da427:
                local_4 = local_4 & 0xffffff00;
              }
              else {
                bVar10 = FUN_0043ffd0((cls_0x50db20 *)(local_3c + 4),
                                      (_String_base *)"DirectionalLight");
                if (bVar10) {
                  this_02 = (G3D_DirectionalLight *)operator_new(0x78);
                  local_4 = CONCAT31(local_4._1_3_,4);
                  if (this_02 == (G3D_DirectionalLight *)0x0) goto LAB_004da425;
                  pGVar5 = (G3D_SpotLight *)G3D_DirectionalLight::G3D_DirectionalLight(this_02);
                  goto LAB_004da427;
                }
                bVar10 = FUN_0043ffd0((cls_0x50db20 *)(local_3c + 4),(_String_base *)"Camera");
                if (bVar10) {
                  this_03 = (G3D_Camera *)operator_new(0x40);
                  if (this_03 == (G3D_Camera *)0x0) {
LAB_004da4bf:
                    pGVar5 = (G3D_SpotLight *)0x0;
                  }
                  else {
                    pGVar5 = (G3D_SpotLight *)G3D_Camera::G3D_Camera(this_03);
                  }
                }
                else {
                  bVar10 = FUN_0043ffd0((cls_0x50db20 *)(local_3c + 4),
                                        (_String_base *)"ParticleEmitter");
                  if (!bVar10) {
                    bVar10 = FUN_0043ffd0((cls_0x50db20 *)(local_3c + 4),(_String_base *)"Water");
                    if (bVar10) {
                      this_05 = (G3D_Water *)operator_new(0x88);
                      local_4 = CONCAT31(local_4._1_3_,5);
                      if (this_05 == (G3D_Water *)0x0) goto LAB_004da425;
                      pGVar5 = (G3D_SpotLight *)G3D_Water::G3D_Water(this_05);
                    }
                    else {
                      bVar10 = FUN_0043ffd0((cls_0x50db20 *)(local_3c + 4),
                                            (_String_base *)"LineSystem");
                      if (bVar10) {
                        this_06 = (G3D_LineSystem *)operator_new(0x34);
                        local_4 = CONCAT31(local_4._1_3_,6);
                        if (this_06 == (G3D_LineSystem *)0x0) goto LAB_004da425;
                        pGVar5 = (G3D_SpotLight *)G3D_LineSystem::G3D_LineSystem(this_06);
                      }
                      else {
                        bVar10 = FUN_0043ffd0((cls_0x50db20 *)(local_3c + 4),
                                              (_String_base *)"LightmapSurface");
                        if (bVar10) {
                          this_07 = (G3D_LightmapSurfaceAttribute *)operator_new(0x5c);
                          if (this_07 == (G3D_LightmapSurfaceAttribute *)0x0) goto LAB_004da4bf;
                          pGVar5 = (G3D_SpotLight *)
                                   G3D_LightmapSurfaceAttribute::G3D_LightmapSurfaceAttribute
                                             (this_07);
                          goto LAB_004da42b;
                        }
                        bVar10 = FUN_0043ffd0((cls_0x50db20 *)(local_3c + 4),
                                              (_String_base *)"OcclusionZones");
                        if (bVar10) {
                          this_08 = (G3D_OcclusionZones *)operator_new(0x34);
                          local_4 = CONCAT31(local_4._1_3_,7);
                          if (this_08 == (G3D_OcclusionZones *)0x0) goto LAB_004da425;
                          pGVar5 = (G3D_SpotLight *)G3D_OcclusionZones::G3D_OcclusionZones(this_08);
                        }
                        else {
                          bVar10 = FUN_0043ffd0((cls_0x50db20 *)(local_3c + 4),
                                                (_String_base *)"WaterTile");
                          if (!bVar10) {
                            cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_4c);
                            goto LAB_004da440;
                          }
                          this_09 = (G3D_WaterTile *)operator_new(0xb0);
                          local_4 = CONCAT31(local_4._1_3_,8);
                          if (this_09 == (G3D_WaterTile *)0x0) goto LAB_004da425;
                          pGVar5 = (G3D_SpotLight *)G3D_WaterTile::G3D_WaterTile(this_09);
                        }
                      }
                    }
                    goto LAB_004da427;
                  }
                  this_04 = (G3D_ParticleEmitter *)operator_new(0x48);
                  if (this_04 == (G3D_ParticleEmitter *)0x0) goto LAB_004da4bf;
                  pGVar5 = (G3D_SpotLight *)G3D_ParticleEmitter::G3D_ParticleEmitter(this_04);
                }
              }
LAB_004da42b:
              if (pGVar5 != (G3D_SpotLight *)0x0) {
                (*((pGVar5->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.vftptr_0x0)->
                  virt_meth_0x6162e5_4)();
                meth_0x4d9400(this,pGVar5);
              }
            }
          }
        }
LAB_004da440:
        local_4 = 0xffffffff;
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28[0]);
        }
        local_14 = 0xf;
        local_18 = (char *)0x0;
        local_28[0] = (undefined4 ******)((uint)local_28[0] & 0xffffff00);
      }
      else {
        cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_4c);
      }
      pdVar1 = (dword *)FUN_0052b940(local_3c);
      local_4c._4_4_ = pdVar1[1];
      local_4c._0_4_ = *pdVar1;
      local_44 = pdVar1[2];
      local_40 = pdVar1[3];
    } while (local_4c._0_4_ != 0x7d);
    local_4c._0_4_ = 0x7d;
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall G3D_Node::virt_meth_0x4da760(G3D_Node *this,FILE *param_1,uint param_2)

{
  bool bVar1;
  void **ppvVar2;
  G3D_Node *this_00;
  G3D_PointLight *this_01;
  G3D_Camera *this_02;
  G3D_ParticleEmitter *this_03;
  G3D_SpotLight *pGVar3;
  cls_0x4cc1e0 *pcVar4;
  uint uVar5;
  G3D_Node *unaff_EDI;
  uint unaff_retaddr;
  byte local_d5;
  G3D_Node *local_d4;
  Exception__vftable_64787c *local_d0;
  char *local_cc;
  Exception__vftable_64787c *local_c8;
  char *local_c4;
  void *local_bc;
  undefined4 local_ac;
  uint local_a8;
  undefined local_a4 [44];
  undefined4 *puStack_78;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00633906;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = (void *)((uint)local_bc & 0xffffff00);
  local_4 = 0;
  bVar1 = false;
  ExceptionList = &pvStack_c;
  ppvVar2 = &pvStack_c;
  if ((*(byte *)&param_1->_flag & 0x10) == 0) {
    do {
      if (bVar1) goto LAB_004dab23;
      _fread(&local_d5,1,1,param_1);
      switch(local_d5) {
      case 1:
        local_c8 = &Exception__vftable_64787c_0064787c;
        local_c4 = "eof reached before end of node";
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_c8,&DAT_006d8834);
      default:
        cls_0x4cb0a0::cls_0x4cb0a0((cls_0x4cb0a0 *)local_a4,1);
        uVar5 = (uint)local_d5;
        local_4 = CONCAT31(local_4._1_3_,9);
        pcVar4 = (cls_0x4cc1e0 *)FUN_00496e00((int *)(local_a4 + 8),"invalid token: ");
        pcVar4 = cls_0x4cc1e0::cls_0x4cc1e0(pcVar4,uVar5);
        cls_0x4cc1e0::meth_0x4cc350(pcVar4,10);
        cls_0x4cc1e0::meth_0x496990(pcVar4);
        cls_0x607988::meth_0x607988((cls_0x607988 *)(local_a4 + 0xc),'\x01');
        local_cc = (char *)*puStack_78;
        local_d0 = &Exception__vftable_64787c_0064787c;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_d0,&DAT_006d8834);
      case 10:
        local_d4 = (G3D_Node *)operator_new(0x130);
        local_4._0_1_ = 1;
        if (local_d4 == (G3D_Node *)0x0) {
          this_00 = (G3D_Node *)0x0;
        }
        else {
          this_00 = G3D_Node(local_d4);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        meth_0x4d80f0(this,(int)this_00);
        (*this_00->vftptr_0x0->virt_meth_0x4da760_16)(this_00,param_1,(uint)unaff_EDI);
        FUN_004d8ff0((void *)this->mbr_0x104,this_00);
        goto LAB_004daa61;
      case 0xb:
        bVar1 = true;
        this_00 = unaff_EDI;
        goto LAB_004daa61;
      case 0xc:
        G3D_LightmapSurfaceAttribute::meth_0x4d0670
                  ((G3D_LightmapSurfaceAttribute *)&this->mbr_0x8,param_1);
        this_00 = unaff_EDI;
        goto LAB_004daa61;
      case 0xd:
        (*((this->G3D_Transform).vftptr_0x0)->virt_meth_0x4d0a00_16)(&this->G3D_Transform,param_1);
        meth_0x4caaa0(this);
        this_00 = unaff_EDI;
        goto LAB_004daa61;
      case 0xf:
        local_d4 = (G3D_Node *)operator_new(0x9c);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (local_d4 == (G3D_Node *)0x0) {
LAB_004daa42:
          pGVar3 = (G3D_SpotLight *)0x0;
        }
        else {
          pGVar3 = (G3D_SpotLight *)G3D_Mesh::G3D_Mesh((G3D_Mesh *)local_d4);
        }
        break;
      case 0x10:
        this_01 = (G3D_PointLight *)operator_new(0x88);
        if (this_01 == (G3D_PointLight *)0x0) {
LAB_004daa1b:
          pGVar3 = (G3D_SpotLight *)0x0;
        }
        else {
          pGVar3 = (G3D_SpotLight *)G3D_PointLight::G3D_PointLight(this_01);
        }
        goto LAB_004daa4b;
      case 0x11:
        local_d4 = (G3D_Node *)operator_new(0xc0);
        local_4 = CONCAT31(local_4._1_3_,3);
        if (local_d4 == (G3D_Node *)0x0) goto LAB_004daa42;
        pGVar3 = G3D_SpotLight::G3D_SpotLight((G3D_SpotLight *)local_d4);
        break;
      case 0x12:
        local_d4 = (G3D_Node *)operator_new(0x78);
        local_4 = CONCAT31(local_4._1_3_,4);
        if (local_d4 == (G3D_Node *)0x0) goto LAB_004daa42;
        pGVar3 = (G3D_SpotLight *)
                 G3D_DirectionalLight::G3D_DirectionalLight((G3D_DirectionalLight *)local_d4);
        break;
      case 0x13:
        this_02 = (G3D_Camera *)operator_new(0x40);
        if (this_02 == (G3D_Camera *)0x0) goto LAB_004daa1b;
        pGVar3 = (G3D_SpotLight *)G3D_Camera::G3D_Camera(this_02);
        goto LAB_004daa4b;
      case 0x14:
        this_03 = (G3D_ParticleEmitter *)operator_new(0x48);
        if (this_03 == (G3D_ParticleEmitter *)0x0) goto LAB_004daa1b;
        pGVar3 = (G3D_SpotLight *)G3D_ParticleEmitter::G3D_ParticleEmitter(this_03);
        goto LAB_004daa4b;
      case 0x15:
        pGVar3 = (G3D_SpotLight *)operator_new(0x5c);
        if (pGVar3 == (G3D_SpotLight *)0x0) goto LAB_004daa1b;
        (pGVar3->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.mbr_0x1c = 0xf;
        (pGVar3->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.mbr_0x18 = 0;
        *(undefined *)&(pGVar3->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.mbr_0x8 = 0;
        (pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x20 = 0;
        (pGVar3->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.vftptr_0x0 =
             (G3D_BaseAttribute__vftable_671ce0 *)
             &G3D_LightmapSurfaceAttribute__vftable_671d18_00671d18;
        (pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x3c = 0xf;
        (pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x38 = 0;
        *(undefined *)&(pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x28 = 0;
        (pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x58 = 0xf;
        *(undefined4 *)&(pGVar3->G3D_PointLight).G3D_BaseLight.field_0x54 = 0;
        *(undefined *)&(pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x44 = 0;
        goto LAB_004daa4b;
      case 0x17:
        local_d4 = (G3D_Node *)operator_new(0x88);
        local_4 = CONCAT31(local_4._1_3_,5);
        if (local_d4 == (G3D_Node *)0x0) goto LAB_004daa42;
        pGVar3 = (G3D_SpotLight *)G3D_Water::G3D_Water((G3D_Water *)local_d4);
        break;
      case 0x18:
        local_d4 = (G3D_Node *)operator_new(0x34);
        local_4 = CONCAT31(local_4._1_3_,7);
        if (local_d4 == (G3D_Node *)0x0) goto LAB_004daa42;
        pGVar3 = (G3D_SpotLight *)G3D_LineSystem::G3D_LineSystem((G3D_LineSystem *)local_d4);
        break;
      case 0x1a:
        local_d4 = (G3D_Node *)operator_new(0xb0);
        local_4 = CONCAT31(local_4._1_3_,6);
        if (local_d4 == (G3D_Node *)0x0) goto LAB_004daa42;
        pGVar3 = (G3D_SpotLight *)G3D_WaterTile::G3D_WaterTile((G3D_WaterTile *)local_d4);
        break;
      case 0x1b:
        local_d4 = (G3D_Node *)operator_new(0x34);
        local_4 = CONCAT31(local_4._1_3_,8);
        if (local_d4 == (G3D_Node *)0x0) goto LAB_004daa42;
        pGVar3 = (G3D_SpotLight *)
                 G3D_OcclusionZones::G3D_OcclusionZones((G3D_OcclusionZones *)local_d4);
      }
      local_4 = local_4 & 0xffffff00;
LAB_004daa4b:
      this_00 = unaff_EDI;
      if (pGVar3 != (G3D_SpotLight *)0x0) {
        meth_0x4d9400(this,pGVar3);
        (*((pGVar3->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.vftptr_0x0)->
          virt_meth_0x6162e5_16)(param_1);
        this_00 = unaff_EDI;
      }
LAB_004daa61:
      unaff_EDI = this_00;
    } while ((*(byte *)&param_1->_flag & 0x10) == 0);
    ppvVar2 = (void **)ExceptionList;
    if (bVar1) {
LAB_004dab23:
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_bc);
      }
      ExceptionList = pvStack_c;
      FUN_00616e15(local_10 ^ unaff_retaddr);
      return;
    }
  }
  ExceptionList = ppvVar2;
  local_d0 = &Exception__vftable_64787c_0064787c;
  local_cc = "end-of-node token not found";
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_d0,&DAT_006d8834);
}



void __thiscall G3D_Node::virt_meth_0x4dabd0(G3D_Node *this,int param_1,int *param_2)

{
  byte bVar1;
  G3D_Node *pGVar2;
  G3D_Mesh *this_00;
  G3D_PointLight *this_01;
  G3D_DirectionalLight *this_02;
  G3D_Camera *this_03;
  G3D_ParticleEmitter *this_04;
  G3D_Water *this_05;
  G3D_WaterTile *this_06;
  G3D_LineSystem *this_07;
  G3D_OcclusionZones *this_08;
  G3D_SpotLight *pGVar3;
  cls_0x4cc1e0 *pcVar4;
  uint uVar5;
  uint unaff_retaddr;
  Exception__vftable_64787c *local_d0;
  char *local_cc;
  Exception__vftable_64787c *pEStack_c8;
  undefined4 uStack_c4;
  void *local_bc;
  undefined4 local_ac;
  uint local_a8;
  undefined local_a4 [44];
  undefined4 *puStack_78;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00633996;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = (void *)((uint)local_bc & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
LAB_004dac30:
  do {
    bVar1 = *(byte *)(*param_2 + param_1);
    *param_2 = *param_2 + 1;
    switch(bVar1) {
    case 1:
      local_d0 = &Exception__vftable_64787c_0064787c;
      local_cc = "eof reached before end of node";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_d0,&DAT_006d8834);
    default:
      cls_0x4cb0a0::cls_0x4cb0a0((cls_0x4cb0a0 *)local_a4,1);
      uVar5 = (uint)bVar1;
      local_4 = CONCAT31(local_4._1_3_,9);
      pcVar4 = (cls_0x4cc1e0 *)FUN_00496e00((int *)(local_a4 + 8),"invalid token: ");
      pcVar4 = cls_0x4cc1e0::cls_0x4cc1e0(pcVar4,uVar5);
      cls_0x4cc1e0::meth_0x4cc350(pcVar4,10);
      cls_0x4cc1e0::meth_0x496990(pcVar4);
      cls_0x607988::meth_0x607988((cls_0x607988 *)(local_a4 + 0xc),'\x01');
      uStack_c4 = *puStack_78;
      pEStack_c8 = &Exception__vftable_64787c_0064787c;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&pEStack_c8,&DAT_006d8834);
    case 10:
      pGVar2 = (G3D_Node *)operator_new(0x130);
      local_4._0_1_ = 1;
      if (pGVar2 == (G3D_Node *)0x0) {
        pGVar2 = (G3D_Node *)0x0;
      }
      else {
        pGVar2 = G3D_Node(pGVar2);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      meth_0x4d80f0(this,(int)pGVar2);
      (*pGVar2->vftptr_0x0->virt_meth_0x4dabd0_12)(pGVar2,param_1,param_2);
      FUN_004d8ff0((void *)this->mbr_0x104,pGVar2);
      goto LAB_004dac30;
    case 0xb:
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_bc);
      }
      ExceptionList = local_c;
      FUN_00616e15(local_10 ^ unaff_retaddr);
      return;
    case 0xc:
      G3D_LightmapSurfaceAttribute::meth_0x4d0690
                ((G3D_LightmapSurfaceAttribute *)&this->mbr_0x8,param_1,param_2);
      goto LAB_004dac30;
    case 0xd:
      (*((this->G3D_Transform).vftptr_0x0)->virt_meth_0x4d0b40_12)
                (&this->G3D_Transform,param_1,param_2);
      meth_0x4caaa0(this);
      goto LAB_004dac30;
    case 0xf:
      this_00 = (G3D_Mesh *)operator_new(0x9c);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (this_00 == (G3D_Mesh *)0x0) {
LAB_004daeaa:
        pGVar3 = (G3D_SpotLight *)0x0;
      }
      else {
        pGVar3 = (G3D_SpotLight *)G3D_Mesh::G3D_Mesh(this_00);
      }
      break;
    case 0x10:
      this_01 = (G3D_PointLight *)operator_new(0x88);
      if (this_01 == (G3D_PointLight *)0x0) {
LAB_004dae83:
        pGVar3 = (G3D_SpotLight *)0x0;
      }
      else {
        pGVar3 = (G3D_SpotLight *)G3D_PointLight::G3D_PointLight(this_01);
      }
      goto LAB_004daeb4;
    case 0x11:
      pGVar3 = (G3D_SpotLight *)operator_new(0xc0);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (pGVar3 == (G3D_SpotLight *)0x0) goto LAB_004daeaa;
      pGVar3 = G3D_SpotLight::G3D_SpotLight(pGVar3);
      break;
    case 0x12:
      this_02 = (G3D_DirectionalLight *)operator_new(0x78);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (this_02 == (G3D_DirectionalLight *)0x0) goto LAB_004daeaa;
      pGVar3 = (G3D_SpotLight *)G3D_DirectionalLight::G3D_DirectionalLight(this_02);
      break;
    case 0x13:
      this_03 = (G3D_Camera *)operator_new(0x40);
      if (this_03 == (G3D_Camera *)0x0) goto LAB_004dae83;
      pGVar3 = (G3D_SpotLight *)G3D_Camera::G3D_Camera(this_03);
      goto LAB_004daeb4;
    case 0x14:
      this_04 = (G3D_ParticleEmitter *)operator_new(0x48);
      if (this_04 == (G3D_ParticleEmitter *)0x0) goto LAB_004dae83;
      pGVar3 = (G3D_SpotLight *)G3D_ParticleEmitter::G3D_ParticleEmitter(this_04);
      goto LAB_004daeb4;
    case 0x15:
      pGVar3 = (G3D_SpotLight *)operator_new(0x5c);
      if (pGVar3 == (G3D_SpotLight *)0x0) goto LAB_004dae83;
      (pGVar3->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.mbr_0x18 = 0;
      (pGVar3->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.mbr_0x1c = 0xf;
      *(undefined *)&(pGVar3->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.mbr_0x8 = 0;
      (pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x20 = 0;
      (pGVar3->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.vftptr_0x0 =
           (G3D_BaseAttribute__vftable_671ce0 *)
           &G3D_LightmapSurfaceAttribute__vftable_671d18_00671d18;
      (pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x3c = 0xf;
      (pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x38 = 0;
      *(undefined *)&(pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x28 = 0;
      (pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x58 = 0xf;
      *(undefined4 *)&(pGVar3->G3D_PointLight).G3D_BaseLight.field_0x54 = 0;
      *(undefined *)&(pGVar3->G3D_PointLight).G3D_BaseLight.mbr_0x44 = 0;
      goto LAB_004daeb4;
    case 0x17:
      this_05 = (G3D_Water *)operator_new(0x88);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (this_05 == (G3D_Water *)0x0) goto LAB_004daeaa;
      pGVar3 = (G3D_SpotLight *)G3D_Water::G3D_Water(this_05);
      break;
    case 0x18:
      this_07 = (G3D_LineSystem *)operator_new(0x34);
      local_4 = CONCAT31(local_4._1_3_,7);
      if (this_07 == (G3D_LineSystem *)0x0) goto LAB_004daeaa;
      pGVar3 = (G3D_SpotLight *)G3D_LineSystem::G3D_LineSystem(this_07);
      break;
    case 0x1a:
      this_06 = (G3D_WaterTile *)operator_new(0xb0);
      local_4 = CONCAT31(local_4._1_3_,6);
      if (this_06 == (G3D_WaterTile *)0x0) goto LAB_004daeaa;
      pGVar3 = (G3D_SpotLight *)G3D_WaterTile::G3D_WaterTile(this_06);
      break;
    case 0x1b:
      this_08 = (G3D_OcclusionZones *)operator_new(0x34);
      local_4 = CONCAT31(local_4._1_3_,8);
      if (this_08 == (G3D_OcclusionZones *)0x0) goto LAB_004daeaa;
      pGVar3 = (G3D_SpotLight *)G3D_OcclusionZones::G3D_OcclusionZones(this_08);
    }
    local_4 = local_4 & 0xffffff00;
LAB_004daeb4:
    if (pGVar3 != (G3D_SpotLight *)0x0) {
      meth_0x4d9400(this,pGVar3);
      (*((pGVar3->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.vftptr_0x0)->virt_meth_0x6162e5_12
      )(param_1,param_2);
    }
  } while( true );
}


#include "../include/G3D_Node.h"
