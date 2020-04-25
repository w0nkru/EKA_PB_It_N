#include <iostream>
#include "text.h"
#include "box.h"
#include "textbox.h"
using namespace std;


int main(){
	Text t("Times New Roman", "Red", "Kaut kads teikums.", 12);
	Box b(15, 10, "Blue");
	TextBox tb("Helvetica", "Green", "Kaut kads savadaks teikums.", 16, 25, 25, "Orange");
	
	
	cout << "Text" << endl;
	t.PrintText();
	cout << endl << "Box" << endl;
	b.PrintBox();
	cout << endl << "Text Box" << endl;
	tb.PrintTextBox();
	cout << endl << endl;
	
	
	cout << "GetKatrsParametrs" << endl;
	cout << "Fonts = " << tb.GetFont() << endl;
	cout << "Krasa = " << tb.GetColor() << endl;
	cout << "Teksts = " << tb.GetData() << endl;
	cout << "Fonta lielums = " << tb.GetSize() << "px" << endl;
	cout << "Platums = " << tb.GetWidth() << "px" << endl;
	cout << "Augstums = " << tb.GetHeight() << "px" << endl;
	cout << "Apmales krasa = " << tb.GetBorderColor() << endl;
	
	
	system("pause");
	return 0;
}
