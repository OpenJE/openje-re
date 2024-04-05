// Copyright 2024 OpenJE

//: Windows Headers
#include <windows.h>

//: C Headers
#include <cstdint>

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    DWORD DVar1;
    __time32_t _Var2;
    uint unaff_EBX;
    uint unaff_ESI;
    uint unaff_EDI;
    uint unaff_retaddr;
    CHAR local_124 [268];
    uint local_18;
    undefined *local_14;
    void *pvStack_10;
    undefined *puStack_c;
    undefined4 local_8;

    local_8 = 0xffffffff;
    puStack_c = &LAB_00638b28;
    pvStack_10 = ExceptionList;
    local_18 = DAT_007062c0 ^ unaff_retaddr;
    local_14 = &stack0xfffffed0;
    ExceptionList = &pvStack_10;
    FUN_0061ad4d( (uint *)lpCmdLine, "-leakcheck" );
    DAT_0070bfa0 = hInstance;
    DVar1 = GetModuleFileNameA( (HMODULE)0x0, local_124, 260 );
    if (DVar1 == 0) {
        FUN_0048cc40( (byte *)"Unable to get module file name." );
    }
    FUN_0056b000();
    FUN_0056b220(unaff_EDI);
    FUN_0056b100();
    timeBeginPeriod(1);
    DAT_0070c2bc = timeGetTime();
    FUN_0056b470( nCmdShow,unaff_EDI );
    _Var2 = FID_conflict:__time32( (__time32_t *)0x0 );
    FUN_0048cca0(_Var2);
    local_8 = 0;
    GetCommandLineA();
    FUN_005ace00();
    FUN_0056b8f5( unaff_ESI,unaff_EBX );
    return 0;
}