//  ===========================================================================
//  File    SplashClient.cpp
//  Desc    Test stub for the UbiSplash class
//  ===========================================================================
#include "stdafx.h"
#include "splash.h"
#include "Shellapi.h"


int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
    //  =======================================================================
    //  Display the splash screen using the overloaded construcutor
    //  =======================================================================
    //  Launch splash screen
    USplash splash1(TEXT(".\\ubi.bmp"), RGB(128, 128, 128), TEXT(".\\start.exe"));
    splash1.ShowSplash();

    // your start up code here
    Sleep(3000); //  simulate using a 5 second delay

    //  Close the splash screen
    splash1.CloseSplash();
	splash1.LaunchApplication();

	return 0;
}
