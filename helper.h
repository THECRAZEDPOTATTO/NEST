#pragma once
#include <Windows.h>
#include <stdio.h>
#include <VersionHelpers.h>
#include <cstdio>
#include <tlhelp32.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
void runchcker() {
LPCSTR app_name = "Roblox";
if (FindWindowA(0, app_name)) {
	printf("ok\n");
}else {
	MessageBox(NULL, L"Not Found", L"Roblox Not Found", MB_OK);

}
}
void oschecker() {
	printf("checking for OS\n");
	if (!IsWindows10OrGreater())
	{
		printf("Meets Requirements\n");
		IsWindowsXPSP1OrGreater();

	}else{
		printf("Error");
		exit(1);
	}

}
