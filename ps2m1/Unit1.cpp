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
	class_h[3] = Tjob("Doctor", 25, 0xffffffff, 25, 25, 25, 25, 25, 25,
		25, 25);
	class_h[4] = Tjob("Biologist", 30, 0xffffffff, 30, 30, 30, 30, 30, 30,
		30, 30);
	class_h[5] = Tjob("Guardian", 35, 0xffffffff, 35, 35, 35, 35, 35, 35,
		35, 35);
	class_h[6] = Tjob("Wrecker", 40, 0xffffffff, 40, 40, 40, 40, 40, 40,
		40, 40);
	class_h[7] = Tjob("Thief", 45, 0xffffffff, 45, 45, 45, 45, 45, 45,
		45, 45);

		hero1[0]=Theroes("Rolf Landale",1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormPaint(TObject *Sender)
{

ImageList1->Draw(Canvas, 8*9, 8*1,hero1[0].face , 1);
Canvas->TextOutW(8*9,8*13,hero1[0].name);
Canvas->TextOutW(8*9,8*15,class_h[0].name);
Canvas->TextOutW(8*1,8*17,"LV      "+IntToStr(hero1[0].level));
Canvas->TextOutW(8*1,8*19,"EXP     "+UIntToStr(class_h[0].exp[0])+"/"+UIntToStr(class_h[0].exp[hero1[0].level]));
Canvas->TextOutW(8*1,8*21,"HP      "+UIntToStr(class_h[0].hp[0])+"/"+UIntToStr(class_h[0].hp[hero1[0].level]));
Canvas->TextOutW(8*1,8*23,"TP      "+UIntToStr(class_h[0].tp[0])+"/"+UIntToStr(class_h[0].tp[hero1[0].level]));
Canvas->TextOutW(8*1,8*25,"STRNGTH "+UIntToStr(class_h[0].STRNGTH[hero1[0].level]));
Canvas->TextOutW(8*1,8*27,"MENTAL  "+UIntToStr(class_h[0].MENTAL[hero1[0].level]));
Canvas->TextOutW(8*1,8*29,"AGILITY "+UIntToStr(class_h[0].AGILITY[hero1[0].level]));
Canvas->TextOutW(8*1,8*31,"LUCK    "+UIntToStr(class_h[0].LUCK[hero1[0].level]));
Canvas->TextOutW(8*1,8*33,"DEXTRTY "+UIntToStr(class_h[0].DEXTRTY[hero1[0].level]));
Canvas->TextOutW(8*1,8*35,"ATTACK  "+UIntToStr(class_h[0].ATTACK[hero1[0].level]));
Canvas->TextOutW(8*1,8*37,"DEFENSE "+UIntToStr(class_h[0].DEFENSE[hero1[0].level]));
}
//---------------------------------------------------------------------------
