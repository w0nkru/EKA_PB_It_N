#include <iostream>
#include "computer.h"
using namespace std;


Computer::Computer(string CPU, string GPU, double Price){
	Computer::SetComputer(CPU, GPU, Price);
}


void Computer::SetComputer(string c, string g, double p){
	CPU = c;
	GPU = g;
	Price = p;
}


void Computer::PrintComputer() const{
	cout << "CPU = " << CPU << endl
		 << "GPU = " << GPU << endl
		 << "Cena = " << Price << " EUR" << endl;
}


string Computer::GetCPU(){
	return CPU;
}


string Computer::GetGPU(){
	return GPU;
}


double Computer::GetPrice(){
	return Price;
}
