#ifndef F3_H
#define F3_H

#include <time.h>

// Ghidra Types
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;

// F3 Globals
namespace f3 {
	static HINSTANCE global_hinstance;
	static HWND global_window;
	static DWORD global_system_time_ms;
    static char* some_directory_path_2;
    static uint UINT_0070bfa8;
}

#include "display.h"

namespace f3 {
	int Main();
	void Quit();
	void Startup();
	void RegisterCommand ( char* command, void (*func)(), undefined4 param_3 );
	void GameStateLoop();
	bool ProcessMessagesAndUpdateTime();
	void Shutdown();
	char* FindSubstringInString ( char * string, char * sub_string );
	void FailWithError( char * param_1 );
	void SetupSaveDirectory();
	void SetupConfigFile( unsigned int nCmdShow );
	void SetupLogFile();
	void SetStartupTime( time_t time );
    undefined4 FUN_0061b067 (uint * param_1, size_t param_2);
    void FUN_0061adfa (char * some_string, char * drive_letter, char * directory_path, char * folder_path, char * file_extension);
    undefined FUN_004c58a0 (char * param_1, undefined4 * param_2);
    char* get_some_directory_path_2(void);
}

#endif // F3_H