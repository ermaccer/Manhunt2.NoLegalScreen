// dllmain.cpp : Defines the entry point for the DLL application.
#include "..\shared\stdafx.h"
#include "..\shared\MemoryMgr.h"

using namespace Memory::VP;
void Init()
{
	Patch(0x53FC68, 0);
	Patch(0x53FC50, 0);
	Patch(0x53FC6F, 0);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		Init();
	}
}

