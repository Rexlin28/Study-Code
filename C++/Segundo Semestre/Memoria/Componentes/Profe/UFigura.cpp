//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "UFigura.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TFigura *)
{
	new TFigura(NULL);
}
//---------------------------------------------------------------------------
__fastcall TFigura::TFigura(TComponent* Owner)
	: TGraphicControl(Owner)
{
}
//---------------------------------------------------------------------------
namespace Ufigura
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TFigura)};
		RegisterComponents(L"Samples", classes, 0);
	}
}
//---------------------------------------------------------------------------
