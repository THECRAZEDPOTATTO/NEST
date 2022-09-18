#pragma once
#include <Windows.h>
#include <stdio.h>
#include <VersionHelpers.h>
#include <cstdio>
#include <tlhelp32.h>
#include <iostream>
#include <fstream>
#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <string>
void runchcker() {
	printf("checking for Roblox:\n");
LPCSTR app_name = "Roblox";
if (FindWindowA(0, app_name)) {
	printf("Roblox Found\n");
}else {
	std::this_thread::sleep_for(std::chrono::milliseconds(3000));    // sleep for 3 second
	system("taskkill /F /T /IM Nest.exe");
	MessageBox(NULL, L"Not Found", L"Roblox Not Found", MB_OKCANCEL);
	printf("Roblox Not Found\n");
	exit(1);
}
}
void oschecker() {
	printf("checking for OS:\n");
	if (!IsWindows10OrGreater())
	{
		printf("Meets Requirements\n");
		IsWindowsXPSP1OrGreater();

	}else{
		printf("Error");
		exit(1);
	}

}
void hide()
{
	HWND Stealth;
	AllocConsole();
	Stealth = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(Stealth, 0);
}
