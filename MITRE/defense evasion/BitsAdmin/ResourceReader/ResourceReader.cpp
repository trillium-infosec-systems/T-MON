// ResourceReader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE hFile = CreateFile(L"C:\\Users\\Root\\Desktop\\netcat\\addr.txt", GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	DWORD dwFileSize = GetFileSize(hFile, NULL);
	DWORD dwBytesRead;
	char* lpBuffer = new char[dwFileSize];
	ReadFile(hFile, lpBuffer, dwFileSize, &dwBytesRead, NULL);
	CloseHandle(hFile);
	HANDLE hResource = BeginUpdateResource(L"C:\\Users\\Root\\Desktop\\netcat\\ProcessFolk.exe", FALSE);
	UpdateResource(hResource, RT_RCDATA, MAKEINTRESOURCE("IDR_TEXT1"), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), lpBuffer, dwFileSize);
	EndUpdateResource(hResource, FALSE);
	delete[] lpBuffer;
	return 0;
}

