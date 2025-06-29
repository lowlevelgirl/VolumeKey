#include <iostream>
#include <string.h>
#include <windows.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>

using namespace std;

// settings
float speed = 0.05;
char key_plus = 'P';
char key_minus = 'M';
char key_mute = 'B';

#include "GetMasterVolume.hpp"
#include "SetMasterVolume.hpp"

int main(int argc, char** argv) {
	while (true) {
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
	return 0;
}