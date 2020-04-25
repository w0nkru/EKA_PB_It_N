#include <iostream>
#include <string>
#include "textbox.h"
using namespace std;


TextBox::TextBox(string f, string c, string d, int s, int w, int h, string b_c) : Text(f, c, d, s), Box(w, h, b_c){
	SetTextBox(f, c, d, s, w, h, b_c);
}


void TextBox::SetTextBox(string f, string c, string d, int s, int w, int h, string b_c){
	Text::SetText(f, c, d, s);
	Box::SetBox(w, h, b_c);
}


void TextBox::PrintTextBox() const{
	Text::PrintText();
	Box::PrintBox();
}
