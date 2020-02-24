#include <iostream>
#include "monitor.h"
using namespace std;


Monitor::Monitor(string Manufacturer, string Resolution, double Price){
	Monitor::SetMonitor(Manufacturer, Resolution, Price);
}


void Monitor::SetMonitor(string m, string r, double p){
	Manufacturer = m;
	Resolution = r;
	Price = p;
}


void Monitor::PrintMonitor() const{
	cout << "Razotajs = " << Manufacturer << endl
		 << "Izskirtspeja = " << Resolution << endl
		 << "Cena = " << Price << " EUR" << endl;
}


string Monitor::GetManufacturer(){
	return Manufacturer;
}


string Monitor::GetResolution(){
	return Resolution;
}


double Monitor::GetPrice(){
	return Price;
}
