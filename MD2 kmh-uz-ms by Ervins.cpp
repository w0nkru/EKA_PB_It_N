#include <iostream>
using namespace std;

double vms(double kmh){
	double vms = (kmh * 1000) / 3600;
	return vms;}

double meet_time(double kmh1, double kmh2, double km){
	double vms1 = vms(kmh1);
	double vms2 = vms(kmh2);
	
	double m = km * 1000;
	double relative = vms1 + vms2;
	double time = m / relative;
	
	return time;}

int main(){
	double kmh;
	cout << "Ievadiet atrumu km/h, lai parveidotu to m/s : "; cin >> kmh;
	cout << kmh << " km/h = " << vms(kmh) << " m/s\n\n";
	
	double kmh1, kmh2, km;
	cout << "Ievadiet 2 objektus kustibas atrumus km/h un attalumu starp objektiem km,\nlai aprekinatu to tiksanas laiku sekundes.\n";
	cout << "1. objekta kustibas atrums km/h : "; cin >> kmh1;
	cout << "2. objekta kustibas atrums km/h : "; cin >> kmh2;
	cout << "Attalums starp objektiem km : "; cin >> km;
	cout << "\nObjekti satiksies pec " << meet_time(kmh1, kmh2, km) << " sekundem.\n";
	
	system("Pause");
	return 0;}
