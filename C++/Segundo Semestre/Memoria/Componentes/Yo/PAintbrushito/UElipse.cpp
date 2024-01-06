//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "UElipse.h"
#pragma link "UFigura"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TElipse *)
{
	new TElipse(NULL);
}
//---------------------------------------------------------------------------
__fastcall TElipse::TElipse(TComponent* Owner)
	: TFigura(Owner)
{
}
//---------------------------------------------------------------------------
namespace Uelipse
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TElipse)};
		RegisterComponents(L"Samples", classes, 0);
	}
}
//---------------------------------------------------------------------------
