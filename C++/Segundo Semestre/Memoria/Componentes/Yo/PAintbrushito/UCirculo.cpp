//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "UCirculo.h"
#pragma link "UFigura"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TCirculo *)
{
	new TCirculo(NULL);
}
//---------------------------------------------------------------------------
__fastcall TCirculo::TCirculo(TComponent* Owner)
	: TFigura(Owner)
{
}
//---------------------------------------------------------------------------
namespace Ucirculo
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TCirculo)};
		RegisterComponents(L"Samples", classes, 0);
	}
}
//---------------------------------------------------------------------------
