#include <iostream>
#include <cmath>
using namespace std;

double circle_area(double R1, double R2){
	double const pi = 3.14;
	double S;
	double SR1 = pi * pow(R1, 2);
	double SR2 = pi * pow(R2, 2);
	double r2 = pi * pow((R2 / 2), 2);
	
	S = (SR1 - SR2) + r2 * 2;
	return S;}

int main(){
	double R1, R2;
	cout << "Ievadiet rinka 1 un rinka 2 radiusu!\n";
	cout << "R1 : "; cin >> R1;
	cout << "R2 : "; cin >> R2;
	
	cout << "Laukums ir : " << circle_area(R1, R2) << endl;
	
	system("Pause");
	return 0;}
