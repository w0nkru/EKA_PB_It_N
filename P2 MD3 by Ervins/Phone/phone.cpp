#include <iostream>
#include "phone.h"
using namespace std;


Phone::Phone(int w){
	SetWeight(w);
}


void Phone::SetWeight(int w){
	weight = w;
}


int Phone::GetWeight(){
	return weight;
}


void Phone::PrintPhone() const{
	cout << "Svars = " << weight << "g" << endl;
}
