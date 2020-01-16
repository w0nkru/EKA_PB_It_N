#include <iostream>
using namespace std;

double vms(double a){
	a /= 3.6;
	return a;
}
double meet_time(double kmh1, double kmh2, double &km){
	kmh1 = vms(kmh1) + vms(kmh2);
	km *= 1000;
	km /= kmh1;
	return km;
}
int main(){
	double obj1, obj2, kme;
	cout << "Ievadiet pirma objekta atrumu (km/h) : " ; cin >> obj1;
	cout << "Ievadiet otra objekta atrumu (km/h) : " ; cin >> obj2;
	cout << "Ievadiet attalumu starp objektiem (km) : " ; cin >> kme;
	
	meet_time(obj1, obj2, kme);
	
	cout << "Objekti stiksies " << kme << " sekunzu laika." << endl;
	
	system("Pause");
	return 0;
}
