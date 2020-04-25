#include <iostream>
#include "cellphone.h"
using namespace std;


CellPhone::CellPhone(int b, int w) : Phone(w){
	SetBattery(b);
}


void CellPhone::SetBattery(int b){
	battery = b;
}


int CellPhone::GetBattery(){
	return battery;
}


void CellPhone::PrintPhone() const{
	Phone::PrintPhone();
	cout << "Baterija = " << battery << "mAh" << endl;
}
