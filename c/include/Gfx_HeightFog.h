#include "Gfx_BaseObject.h"
typedef struct {
    Gfx_BaseObject Gfx_BaseObject;
    dword mbr_0x40;
    dword mbr_0x44;
    undefined None;
    undefined None;
    undefined None;
    undefined None;
    dword mbr_0x4c;
    dword mbr_0x50;
    dword mbr_0x54;
    dword mbr_0x58;
    dword mbr_0x5c;
    dword mbr_0x60;
} Gfx_HeightFog;
Gfx_HeightFog * __thiscall Gfx_HeightFog(void);
Gfx_HeightFog * __thiscall ~Gfx_HeightFog(void);
undefined4 * __thiscall virt_meth_0x505eb0(byte param_1);
undefined __thiscall CreateFog(undefined4 param_1, float param_2, float param_3, undefined4 param_4, undefined4 param_5, float param_6, undefined4 param_7, undefined4 param_8, float param_9);
typedef struct {
    virt_meth_0x505eb0 * virt_meth_0x505eb0_0;
    virt_meth_0x49cb90 * virt_meth_0x49cb90_4;
    virt_meth_0x424590 * virt_meth_0x424590_8;
    virt_meth_0x424570 * virt_meth_0x424570_12;
    virt_meth_0x424620 * virt_meth_0x424620_16;
    virt_meth_0x4245c0 * virt_meth_0x4245c0_20;
    virt_meth_0x404b70 * virt_meth_0x404b70_24;
} Gfx_HeightFog::vftable_6744dc;
