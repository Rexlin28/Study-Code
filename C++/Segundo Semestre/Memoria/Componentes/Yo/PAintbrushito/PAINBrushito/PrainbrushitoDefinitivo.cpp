//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PrainbrushitoDefinitivo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int herra=0;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  herra=1;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
herra=2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
herra=3;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
herra=4;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PDibujoMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	switch(herra){
	case 1: TCuadrado recta= new TRectangulo(this);
	recta->X=X;
	recta->Y=Y;
	recta->Parent=PDibujo;

	case 2: TCirculo recta= new TCirculo(this);
	recta->X=X;
	recta->Y=Y;
	recta->Parent=PDibujo;

	case 3: TElipse recta= new TElipse(this);
	recta->X=X;
	recta->Y=Y;
	recta->Parent=PDibujo;

	case4: TTriangulo recta= new TTriangulo(this);
	recta->X=X;
	recta->Y=Y;
	recta->Parent=PDibujo;


	}
}
//---------------------------------------------------------------------------
