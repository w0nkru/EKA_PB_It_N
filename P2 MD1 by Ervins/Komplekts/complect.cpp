#include <iostream>
#include "computer.h"
#include "monitor.h"
#include "complect.h"
using namespace std;


Complect::Complect(string name, string cpu, string gpu, double cprice, string manufacturer, string resolution, double mprice)
	: PC(cpu, gpu, cprice), Screen(manufacturer, resolution, mprice){
	Complect::SetComplect(name);
}


void Complect::SetComplect(string n){
	Name = n;
}


string Complect::GetName(){
	return Name;
}


double Complect::GetPrice(){
	double cprice = PC.GetPrice();
	double mprice = Screen.GetPrice();
	
	return cprice + mprice;
}


void Complect::PrintComplect(){
	cout << "Komplekta nosaukums = " << Name << endl << endl;
	cout << "Datora specifikacija" << endl;
	PC.PrintComputer();
	cout << endl << "Monitora specifikacija" << endl;
	Screen.PrintMonitor();
	cout << endl << "Komplekta cena = " << Complect::GetPrice() << " EUR" << endl;
}
