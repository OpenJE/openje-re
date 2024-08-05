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
}

#endif // F3_H