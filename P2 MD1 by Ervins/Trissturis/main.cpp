#include <iostream>
#include "triangle.h"
using namespace std;


int main(){
	double a, b, c;
	
	cout << "Ievadiet trisstura malas: " << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	
	Triangle t(a, b, c);
	
	if(t.Set(a, b, c)){
		cout << "\nTrisstura perimetrs: " << t.Perim() << endl;
		cout << "Trisstura laukums: " << t.Area() << endl;
		if(t.IsRect()){
			cout << "Trissturis ir taisnlenka trissturis!" << endl;}
		else{
			cout << "Trissturis nav taisnlenka trissturis!" << endl;}
		cout << endl;}
	
	else{
		cout << "\nTrissturi ar sadam malam nav iespejams!" << endl;
		cout << endl;}
	
	system("pause");
	return 0;
}
