#include <iostream>
#include <string>
#include "text.h"
using namespace std;


Text::Text(string f, string c, string d, int s){
	SetText(f, c, d, s);
}


void Text::SetText(string f, string c, string d, int s){
	font = f;
	color = c;
	data = d;
	size = s;
}


string Text::GetFont() const{
	return font;
}


string Text::GetColor() const{
	return color;
}


string Text::GetData() const{
	return data;
}


int Text::GetSize() const{
	return size;
}


void Text::PrintText() const{
	cout << "Fonts = " << font << ", Fonta lielums = " << size << "px, Krasa = " << color << ", Teksts = " << data << endl;
}
