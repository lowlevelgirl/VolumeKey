#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include <string.h>
#include <algorithm>
#include <cctype>

void KillProcessByName(const std::string &processName) {
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE) return;

    PROCESSENTRY32 pe;
    pe.dwSize = sizeof(PROCESSENTRY32);

    if (Process32First(hSnapshot, &pe)) {
		do {
			if (pe.szExeFile == processName) {
				HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, pe.th32ProcessID);
                if (hProcess) {
                    TerminateProcess(hProcess, 0);
                    CloseHandle(hProcess);
                }
            }
        } while (Process32Next(hSnapshot, &pe));
    }

    CloseHandle(hSnapshot);
}

int main(int argc, char** argv) {
	KillProcessByName("VolumeKey.exe");
	ShellExecute(NULL, "open", "VolumeKey.exe", NULL, NULL, SW_SHOWDEFAULT);
	return 0;
}