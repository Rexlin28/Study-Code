//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "UCuadrado.h"
#pragma link "UFigura"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TCuadrado *)
{
	new TCuadrado(NULL);
}
//---------------------------------------------------------------------------
__fastcall TCuadrado::TCuadrado(TComponent* Owner)
	: TFigura(Owner)
{
}

void __fastcall TCuadrado::Paint(){
	int ancho;
	if (Width<Height)
		ancho=width;

	else
	ancho=Height;

	Canvas->Rectangle(0,0, ancho-1, ancho-1);
}
//---------------------------------------------------------------------------
namespace Ucuadrado
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TCuadrado)};
		RegisterComponents(L"Samples", classes, 0);
	}
}
//---------------------------------------------------------------------------
