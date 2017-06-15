//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
class_h[0] = Tjob("Agent", 15, 0xffffffff, 15, 15, 15, 15, 15, 15,
		15, 15); //
	class_h[1] = Tjob("None", 10, 0xffffffff, 10, 10, 10, 10, 10, 10,
		10, 10);
	class_h[2] = Tjob("hunter", 20, 0xffffffff, 20, 20, 20, 20, 20, 20,
		20, 20);
	class_h[3] = Tjob("Doctor", 30, 0xffffffff, 30, 30, 30, 30, 30, 30,
		30, 30);
	class_h[4] = Tjob("Biologist", 40, 0xffffffff, 40, 40, 40, 40, 40, 40,
		40, 40);
	class_h[5] = Tjob("Guardian", 50, 0xffffffff, 50, 50, 50, 50, 50, 50,
		50, 50);
	class_h[6] = Tjob("Wrecker", 60, 0xffffffff, 60, 60, 60, 60, 60, 60,
		60, 60);
	class_h[7] = Tjob("Thief", 70, 0xffffffff, 70, 70, 70, 70, 70, 70,
		70, 70);

		hero1[0]=Theroes("Rolf Landale",1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormPaint(TObject *Sender)
{
ImageList1->Draw(Canvas, 8*1, 8*1,hero1[0].face , 1);
Canvas->TextOutW(8*1,8*13,hero1[0].name);
Canvas->TextOutW(8*1,8*15,class_h[0].name);
}
//---------------------------------------------------------------------------
