#include <iostream>
#include <string>
#include "smartphone.h"
using namespace std;


SmartPhone::SmartPhone(string o, int b, int w) : CellPhone(b, w){
	SetOS(o);
}


void SmartPhone::SetOS(string o){
	OS = o;
}


string SmartPhone::GetOS(){
	return OS;
}


void SmartPhone::PrintPhone() const{
	CellPhone::PrintPhone();
	cout << "OS = " << OS << endl;
}
