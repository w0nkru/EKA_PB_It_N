#include<iostream>
using namespace std;

double price(double h){
	double sum = 2.00;
	double hour = 0.50;
	
	for(double i = 3; i < h; i++)
		sum += hour;
	
	return sum;}

int main(){
	double h;
	cout << "Ievadiet stundu skaitu : "; cin >> h;
	
	if(h == 0.00)
		cout << "Par " << h << " h, autostavvietas maksa ir 0 eiro!\n";
	else if ((h > 0.00) && (h < 4.00))
		cout << "Par " << h << " h, autostavvietas maksa ir 2 eiro!\n";
	else if (h >= 19.00)
		cout << "Par " << h << " h, autostavvietas maksa 10 eiro!\n";
	else
		cout << "Par " << h << " h, autostavvietas maksa ir " << price(h) << " eiro!\n\n";
	
	system("Pause");
	return 0;}
