//---------------------------------------------------------------------------

#ifndef UCuadradoH
#define UCuadradoH
//---------------------------------------------------------------------------
#include <SysUtils.hpp>
#include <Classes.hpp>
#include "UFigura.h"
#include <Vcl.Controls.hpp>
//---------------------------------------------------------------------------
class PACKAGE TCuadrado : public TFigura
{
private:
protected:
	void __fastcall TCuadrado::Paint()
public:
	__fastcall TCuadrado(TComponent* Owner);
__published:
};
//---------------------------------------------------------------------------
#endif
