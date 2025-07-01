//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "TUpdaterThread.h"
#pragma package(smart_init)
#include <iostream>
#include <string.h>
#include <windows.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>
#include <thread>
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall TMyThread::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

using namespace std;

float speed = 0.05;
char key_plus = 'P';
char key_minus = 'M';
char key_mute = 'B';

#include "GetMasterVolume.hpp"
#include "SetMasterVolume.hpp"

void VolumeKeyMain() {
	if (GetKeyState(VK_MENU) & 0x8000 && GetKeyState(key_plus) & 0x8000) {
		SetMasterVolume("plus", GetMasterVolume());
		// cout << GetMasterVolumeLevel() << endl;
		Sleep(250);
	} else if (GetKeyState(VK_MENU) & 0x8000 && GetKeyState(key_minus) & 0x8000) {
		SetMasterVolume("minus", GetMasterVolume());
		// cout << GetMasterVolumeLevel() << endl;
		Sleep(250);
	}  else if (GetKeyState(VK_MENU) & 0x8000 && GetKeyState(key_mute) & 0x8000) {
		SetMasterVolume("mute", GetMasterVolume());
		// cout << GetMasterVolumeLevel() << endl;
		Sleep(250);
	}
}

__fastcall TUpdaterThread::TUpdaterThread(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall TUpdaterThread::Execute() {
	while (true) {
    	VolumeKeyMain();
	}
}
//---------------------------------------------------------------------------
