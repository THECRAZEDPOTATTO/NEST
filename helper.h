#pragma once
#include <Windows.h>
#include <stdio.h>
#include <string>
#include <VersionHelpers.h>
void runchcker() {
printf("checking for EXE\n");
	
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
void luachecker() {
printf("checking for Lua\n");

}

