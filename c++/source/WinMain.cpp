// Copyright 2024 OpenJE

//: Windows Headers
#include <windows.h>

//: C Headers
#include <cstdint>

#include "openje-re/c++/include/Display.hpp"

int FUN_0056b8f5(unsigned int param_1, unsigned int param_2)
{
    return 0;
}

int main()
{
    Startup();
    RegisterCommand((undefined4 *)"quit",Quit,unaff_retaddr);
    uVar2 = FUN_0056af60();
    cVar1 = (char)uVar2;
    while (cVar1 != '\0')
    {
        GameStateLoop();
        uVar2 = FUN_0056af60();
        cVar1 = (char)uVar2;
    }
    Shutdown();
    return 1;
}

int APIENTRY WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )
{
    static DWORD system_time;
    static HINSTANCE hinstance = hInstance;
    CHAR file_name [268];

    find_substring_in_string( lpCmdLine, "-leakcheck" );
    DWORD file_name_length = GetModuleFileNameA( NULL, file_name, 260 );    // Get executable file path
    if ( file_name_length == 0 )
    {
        handle_fatal_error( "Unable to get module file name." );
    }
    SetupSaveDirectory();
    SetupConfigFile( nCmdShow );
    SetupLogFile()
    timeBeginPeriod( 1 );
    system_time = timeGetTime();                                            // Get system time in milliseconds
    F3::Display::CreateGameWindow( nCmdShow, nCmdShow );
    __time32_t current_time = FID_conflict:__time32(NULL);
    SetStartupTime( current_time );
    GetCommandLineA();
    main();
    *(undefined4 *)( unaff_EBP + -4 ) = 4294967295;
    F3::Display::DestroyGameWindow();
    timeEndPeriod(1);
    thunk_FUN_00497b70();
    FUN_0056b390( unaff_retaddr,param_1,param_2 );
    ExceptionList = *(void **)( unaff_EBP + -12 );
    iVar1 = FUN_00616e15( *(uint *)(unaff_EBP + -20) ^ *(uint *)( unaff_EBP + 4 ) );
    return iVar1;
}