//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "TUpdaterThread.h"
#include <windows.h>
#include <tlhelp32.h>
#include <string>
#include <algorithm>
#include <cctype>
#include <Registry.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;

int CountProcessesByName(const System::UnicodeString &processName) {
    int count = 0;
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE) return count;

    PROCESSENTRY32 pe;
    pe.dwSize = sizeof(PROCESSENTRY32);

    if (Process32First(hSnapshot, &pe)) {
        do {
            String exeFileName = pe.szExeFile;
			if (exeFileName.CompareIC(processName) == 0) {
				count++;
            }
		} while (Process32Next(hSnapshot, &pe));
    }

    CloseHandle(hSnapshot);
    return count;
}

//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner) : TForm(Owner) {
	int processCount = CountProcessesByName("VolumeKey.exe");
	if (processCount == 2) {
		ShellExecuteW(NULL, L"open", L"VolumeKeyUpdater.exe", NULL, NULL, SW_SHOWDEFAULT);
	}
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::HideAndRunProgram(TObject *Sender) {
	MainForm->Hide();
	TUpdaterThread *UpdaterThread = new TUpdaterThread(true);
	UpdaterThread->Start();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::RunProgram(TObject *Sender) {
	TUpdaterThread *UpdaterThread = new TUpdaterThread(true);
	UpdaterThread->Start();
}
//---------------------------------------------------------------------------

