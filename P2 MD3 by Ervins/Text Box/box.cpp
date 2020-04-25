#include <iostream>
#include <string>
#include "box.h"
using namespace std;


Box::Box(int w, int h, string b_c){
	SetBox(w, h, b_c);
}


void Box::SetBox(int w, int h, string b_c){
	width = w;
	height = h;
	border_color = b_c;
}


int Box::GetWidth() const{
	return width;
}


int Box::GetHeight() const{
	return height;
}


string Box::GetBorderColor() const{
	return border_color;
}


void Box::PrintBox() const{
	cout << "Platums = " << width << "px, Augstums = " << height << "px, Apmales krasa = " << border_color << endl;
}
