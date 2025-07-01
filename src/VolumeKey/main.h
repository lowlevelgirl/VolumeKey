//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TStaticText *Logo;
	TCheckBox *UpAlt;
	TCheckBox *UpCtrl;
	TCheckBox *UpShift;
	TCheckBox *UpWin;
	TEdit *UpKey;
	TStaticText *UpText;
	TStaticText *DownText;
	TCheckBox *DownAlt;
	TCheckBox *DownCtrl;
	TCheckBox *DownShift;
	TCheckBox *DownWin;
	TEdit *DownKey;
	TStaticText *MuteText;
	TCheckBox *MuteAlt;
	TCheckBox *MuteCtrl;
	TCheckBox *MuteShift;
	TCheckBox *MuteWin;
	TEdit *MuteKey;
	TButton *HRButton;
	TButton *RButton;
	void __fastcall HideAndRunProgram(TObject *Sender);
	void __fastcall RunProgram(TObject *Sender);
private:	// User declarations
    TThread *CounterThread;
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
