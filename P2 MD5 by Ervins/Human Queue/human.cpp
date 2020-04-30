#include<iostream>
#include<string>
#include "human.h"
using namespace std;


Human::Human(string n, float h, int w){
	name = n;
	height = h;
	weight = w;
}


void Human::PrintHuman() const{
	cout << "Vards = " << name << ", Garums = " << height << "m, Svars = " << weight << "kg." << endl;
}
