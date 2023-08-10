// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include <iostream>

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
	)
{
	system("calc.exe");
	return TRUE;
}

