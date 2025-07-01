//---------------------------------------------------------------------------

#ifndef TUpdaterThreadH
#define TUpdaterThreadH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class TUpdaterThread : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall TUpdaterThread(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
