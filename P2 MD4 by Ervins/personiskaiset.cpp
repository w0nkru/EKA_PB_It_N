#include <iostream>
#include <string>
#include "personiskaiset.h"
using namespace std;


PersoniskaisET::PersoniskaisET(int t, string n, string s){
	trips = t;
	name = n;
	surname = s;
}


void PersoniskaisET::Print() const{
	cout << "Braucienu skaits: " << trips << ", Vards: " << name << ", Uzvards: " << surname << endl;
}


void PersoniskaisET::Use(){
	cout << "E-Talona deriguma statuss: ";
	
	if(trips > 0){
		trips--;
		cout << "zals" << endl;}
	
	else{
		cout << "sarkans" << endl;}
}


void PersoniskaisET::Add(int x){
	trips += x;
}
