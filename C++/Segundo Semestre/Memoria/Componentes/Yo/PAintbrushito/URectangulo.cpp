//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "URectangulo.h"
#pragma link "UFigura"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TRectangulo *)
{
	new TRectangulo(NULL);
}
//---------------------------------------------------------------------------
__fastcall TRectangulo::TRectangulo(TComponent* Owner)
	: TFigura(Owner)
{
}
    void __fastcall TElipse ::Paint(){


 Canvas->Rectangle(0,0,Width-1, Height-1);   }
//---------------------------------------------------------------------------
namespace Urectangulo
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TRectangulo)};
		RegisterComponents(L"Samples", classes, 0);
	}
}
//---------------------------------------------------------------------------
