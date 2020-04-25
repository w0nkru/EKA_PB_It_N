#include <iostream>
#include "etalons.h"
#include "diennaktset.h"
#include "braucienusket.h"
#include "personiskaiset.h"
using namespace std;


int main(){
	DiennaktsET d;
	DiennaktsET dd(23);
	BraucienuskET b(1);
	BraucienuskET bb(10);
	PersoniskaisET p(1, "Janis", "Legzdins");
	PersoniskaisET pp(7, "Peteris", "Ozols");
	ETalons *ET[6] = {&d, &dd, &b, &bb, &p, &pp};
	
	
	// Visu E-Talonu izvade //
	for(int i = 0; i < 6; i++){
		if(i == 0 || i == 1){
			if(i == 0){
				cout << "1. ";}
			
			else{
				cout << "2. ";}
			
			cout << "DiennaktsET" << endl;
		}
		
		if(i == 2 || i == 3){
			if(i == 2){
				cout << "1. ";}
			
			else{
				cout << "2. ";}
				
			cout << "BraucienuskET" << endl;
		}
		
		if(i == 4 || i == 5){
			if(i == 4){
				cout << "1. ";}
			
			else{
				cout << "2. ";}
			
			cout << "PersoniskaisET" << endl;
		}
		
		ET[i]->Print();
		
		if(i == 1 || i == 3){
			cout << endl;}
	}
	cout << endl << endl;
	system("pause");
	system("cls");
	
	
	// E-Talonu funkciju "Use()", "Add()" parbaude //
	cout << "1. DiennaktsET" << endl;
	d.Print();
	cout << "//Izmantojam//" << endl;
	d.Use();
	d.Print();
	cout << "//Izmantojam//" << endl;
	d.Use();
	cout << "2. DiennaktsET" << endl;
	dd.Print();
	cout << "//Izmantojam//" << endl;
	dd.Use();
	cout << endl << endl;
	
	cout << "1. BraucienuskET" << endl;
	b.Print();
	cout << "//Izmantojam//" << endl;
	b.Use();
	b.Print();
	cout << "//Izmantojam//" << endl;
	b.Use();
	cout << endl << endl;
	
	cout << "1. PersoniskaisET" << endl;
	p.Print();
	cout << "//Izmantojam//" << endl;
	p.Use();
	p.Print();
	cout << "//Izmantojam//" << endl;
	p.Use();
	cout << "//Pievienojam 2 braucienus//" << endl;
	p.Add(2);
	p.Print();
	cout << "//Izmantojam//" << endl;
	p.Use();
	p.Print();
	cout << endl << endl;
	
	
	system("pause");
	return 0;
}
