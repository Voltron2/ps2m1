// ---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>

// ---------------------------------------------------------------------------
class TForm1 : public TForm {
__published: // IDE-managed Components
	TImageList *ImageList1;
	TListBox *ListBox1;
	TImageList *ImageList2;

	void __fastcall FormPaint(TObject *Sender);
	void __fastcall ListBox1Click(TObject *Sender);

private: // User declarations
public: // User declarations
	__fastcall TForm1(TComponent* Owner);

	// my
	class Theroes {
	private:

	public:
		AnsiString name;
		int face;
		int job;
		int level;

		Theroes() {
		};

		Theroes(AnsiString arg1, int arg2) {
			name = arg1;
			face = arg2;
			level = 1;

		};

		Theroes_status() {
		};
	} hero1[8];

	class Tjob {
	private:

	public:
		AnsiString name;
		unsigned int exp[50];
		unsigned int hp[50];
		unsigned int tp[50];
		unsigned int STRNGTH[50];
		unsigned int MENTAL[50];
		unsigned int AGILITY[50];
		unsigned int LUCK[50];
		unsigned int DEXTRTY[50];
		unsigned int ATTACK[50];
		unsigned int DEFENSE[50];

		Tjob() {
		};

		Tjob(AnsiString arg0, int arg1, int arg2, int arg3, int arg4, int arg5,
			int arg6, int arg7, int arg8, int arg9, int arg10) {
			name = arg0;
			exp[0] = 0;
			int i = 1;
			while (i < 50) {
				exp[i] = arg1 * i;
				hp[i] = arg2 * i;
				tp[i] = arg3 * i;
				STRNGTH[i] = arg4 * i;
				MENTAL[i] = arg5 * i;
				AGILITY[i] = arg6 * i;
				LUCK[i] = arg7 * i;
				DEXTRTY[i] = arg8 * i;
				ATTACK[i] = arg9 * i;
				DEFENSE[i] = arg10 * i;
				i++;
			};
			hp[0] = hp[1];
			tp[0] = tp[1];
		};
	} class_h[8];

	void show_m1(int x1, int y1, int w1, int h1) {
		int x0, y0;
		for (x0 = 0; x0 < w1; x0++) {
			for (y0 = 0; y0 < h1; y0++) {
				ImageList2->Draw(Canvas, x1*8 + x0*8, y1*8 + y0*8, 8, 1);
				if ((y0 + 1) == h1) {
					ImageList2->Draw(Canvas, x1*8 + x0*8, y1*8 + y0*8, 7, 1);
				};
				if ((x0 + 1) == w1) {
					ImageList2->Draw(Canvas, x1*8 + x0*8, y1*8 + y0*8, 5, 1);
				};
				if (x0 > 0 && y0 == 0) {
					ImageList2->Draw(Canvas, x1*8 + x0*8, y1*8, 6, 1);
				};
				if (x0 == 0) {
					ImageList2->Draw(Canvas, x1*8 + x0*8, y1*8 + y0*8, 4, 1);
				};
				if (y0 == 0 && x0 == 0) {
					ImageList2->Draw(Canvas, x1*8 + x0*8, y1*8 + y0*8, 0, 1);
				};
				if ((y0 + 1) == h1 && x0 == 0) {
					ImageList2->Draw(Canvas, x1*8 + x0*8, y1*8 + y0*8, 2, 1);
				};
				if ((x0 + 1) == w1 && y0 == 0) {
					ImageList2->Draw(Canvas, x1*8 + x0*8, y1*8, 1, 1);
				};
				if ((x0 + 1) == w1 && (y0 + 1) == h1) {
					ImageList2->Draw(Canvas, x1*8 + x0*8, y1*8 + y0*8, 3, 1);
				};
			};
		};
	};

};

// ---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
// ---------------------------------------------------------------------------
#endif
