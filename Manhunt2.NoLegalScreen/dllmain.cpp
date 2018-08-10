// dllmain.cpp : Defines the entry point for the DLL application.
#include "..\shared\stdafx.h"
#include "..\shared\CPatch.h"

void Init()
{
	CPatch::SetInt(0x53FC68,0);
	CPatch::SetInt(0x53FC50,0);
	CPatch::SetInt(0x53FC6F,0);
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

