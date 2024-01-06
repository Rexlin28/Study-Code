//---------------------------------------------------------------------------

#ifndef URectanguloH
#define URectanguloH
//---------------------------------------------------------------------------
#include <SysUtils.hpp>
#include <Classes.hpp>
#include "UFigura.h"
#include <Vcl.Controls.hpp>
//---------------------------------------------------------------------------
class PACKAGE TRectangulo : public TFigura
{
private:
protected:
	void __fastcall Paint();
public:
	__fastcall TRectangulo(TComponent* Owner);
__published:
};
//---------------------------------------------------------------------------
#endif
