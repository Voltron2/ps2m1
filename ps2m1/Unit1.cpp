// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
	class_h[0] = Tjob("Agent", 15, 0xffffffff, 15, 15, 15, 15, 15, 15,
		15, 15); //
	class_h[1] = Tjob("None", 10, 0xffffffff, 10, 10, 10, 10, 10, 10, 10, 10);
	class_h[2] = Tjob("hunter", 20, 0xffffffff, 20, 20, 20, 20, 20, 20, 20, 20);
	class_h[3] = Tjob("Doctor", 25, 0xffffffff, 25, 25, 25, 25, 25, 25, 25, 25);
	class_h[4] = Tjob("Biologist", 30, 0xffffffff, 30, 30, 30, 30, 30, 30,
		30, 30);
	class_h[5] = Tjob("Guardian", 35, 0xffffffff, 35, 35, 35, 35, 35, 35,
		35, 35);
	class_h[6] = Tjob("Wrecker", 40, 0xffffffff, 40, 40, 40, 40, 40, 40,
		40, 40);
	class_h[7] = Tjob("Thief", 45, 0xffffffff, 45, 45, 45, 45, 45, 45, 45, 45);

	hero1[0] = Theroes("Rolf Landale", 1);
	hero1[1] = Theroes("Nei", 2);
	hero1[2] = Theroes("Rudolph Steiner", 3);
	hero1[3] = Theroes("Amy Sage", 4);
	hero1[4] = Theroes("Hugh Tompson", 5);
	hero1[5] = Theroes("Anna Zirski", 6);
	hero1[6] = Theroes("Josh Kain", 7);
	hero1[7] = Theroes("Shir Gold", 8);

	ListBox1->AddItem("Rolf Landale", 0);
	ListBox1->AddItem("Nei", 0);
	ListBox1->AddItem("Rudolph Steiner", 0);
	ListBox1->AddItem("Amy Sage", 0);
	ListBox1->AddItem("Hugh Tompson", 0);
	ListBox1->AddItem("Anna Zirski", 0);
	ListBox1->AddItem("Josh Kain", 0);
	ListBox1->AddItem("Shir Gold", 0);
	ListBox1->ItemIndex=0;

}

// ---------------------------------------------------------------------------
void __fastcall TForm1::FormPaint(TObject *Sender) {

	ImageList1->Draw(Canvas, 8*9, 8*1, hero1[ListBox1->ItemIndex ].face, 1);
	Canvas->TextOutW(8*9, 8*13, hero1[ListBox1->ItemIndex].name);
	Canvas->TextOutW(8*9, 8*15, class_h[ListBox1->ItemIndex].name);
	Canvas->TextOutW(8*1, 8*17, "LV      " + IntToStr(hero1[ListBox1->ItemIndex].level));
	Canvas->TextOutW(8*1, 8*19, "EXP     " + UIntToStr(class_h[ListBox1->ItemIndex].exp[0]) +
		"/" + UIntToStr(class_h[ListBox1->ItemIndex].exp[hero1[ListBox1->ItemIndex].level]));
	Canvas->TextOutW(8*1, 8*21, "HP      " + UIntToStr(class_h[ListBox1->ItemIndex].hp[0]) + "/" +
		UIntToStr(class_h[ListBox1->ItemIndex].hp[hero1[ListBox1->ItemIndex].level]));
	Canvas->TextOutW(8*1, 8*23, "TP      " + UIntToStr(class_h[ListBox1->ItemIndex].tp[0]) + "/" +
		UIntToStr(class_h[ListBox1->ItemIndex].tp[hero1[ListBox1->ItemIndex].level]));
	Canvas->TextOutW(8*1, 8*25,
		"STRNGTH " + UIntToStr(class_h[ListBox1->ItemIndex].STRNGTH[hero1[ListBox1->ItemIndex].level]));
	Canvas->TextOutW(8*1, 8*27,
		"MENTAL  " + UIntToStr(class_h[ListBox1->ItemIndex].MENTAL[hero1[ListBox1->ItemIndex].level]));
	Canvas->TextOutW(8*1, 8*29,
		"AGILITY " + UIntToStr(class_h[ListBox1->ItemIndex].AGILITY[hero1[ListBox1->ItemIndex].level]));
	Canvas->TextOutW(8*1, 8*31,
		"LUCK    " + UIntToStr(class_h[ListBox1->ItemIndex].LUCK[hero1[ListBox1->ItemIndex].level]));
	Canvas->TextOutW(8*1, 8*33,
		"DEXTRTY " + UIntToStr(class_h[ListBox1->ItemIndex].DEXTRTY[hero1[ListBox1->ItemIndex].level]));
	Canvas->TextOutW(8*1, 8*35,
		"ATTACK  " + UIntToStr(class_h[ListBox1->ItemIndex].ATTACK[hero1[ListBox1->ItemIndex].level]));
	Canvas->TextOutW(8*1, 8*37,
		"DEFENSE " + UIntToStr(class_h[ListBox1->ItemIndex].DEFENSE[hero1[ListBox1->ItemIndex].level]));

	ListBox1->Left = 8 * 23;
	ListBox1->Top = 8 * 1;

}
// ---------------------------------------------------------------------------
void __fastcall TForm1::ListBox1Click(TObject *Sender)
{
Repaint();
}
//---------------------------------------------------------------------------

