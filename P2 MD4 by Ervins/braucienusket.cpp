#include <iostream>
#include "braucienusket.h"
using namespace std;


BraucienuskET::BraucienuskET(int t){
	trips = t;
}


void BraucienuskET::Print() const{
	cout << "Braucienu skaits: " << trips << endl;
}


void BraucienuskET::Use(){
	cout << "E-Talona deriguma statuss: ";
	
	if(trips > 0){
		trips--;
		cout << "zals" << endl;}
	
	else{
		cout << "sarkans" << endl;}
}
