#include <iostream>
#include "phone.h"
#include "cellphone.h"
#include "smartphone.h"
using namespace std;


int main(){
	SmartPhone s("iOS", 3500, 170);
	CellPhone c(4000, 147);
	Phone p(159);
	
	
	cout << "SmartPhone" << endl;
	s.PrintPhone();
	cout << endl << "CellPhone" << endl;
	c.PrintPhone();
	cout << endl << "Phone" << endl;
	p.PrintPhone();
	cout << endl;
	
	
	cout << endl << "Pieklusana bazes klases datiem" << endl;
	cout << "SmartPhone:" << endl;
	cout << "battery = " << s.GetBattery() << endl;
	cout << "weight = " << s.GetWeight() << endl;
	cout << endl << "CellPhone:" << endl;
	cout << "weight = " << c.GetWeight() << endl;
	
	
	system("pause");
	return 0;
}
