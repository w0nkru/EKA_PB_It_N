#include <iostream>
#include "time.h"
using namespace std;


int main(){
	Time a;
	Time b;
	Time c;
	
	cout << "Ievadiet laiku!" << endl; cin >> a;
	system("cls");
	cout << "Laiks a: " << a << endl;
	cout << "Laiks b: " << b << endl;
	cout << "Laiks c: " << c << endl;
	system("pause");
	system("cls");
	
	
	cout << "Laika pieskirsana c = b = a" << endl;
	c = b = a;
	cout << "Laiks a: " << a << endl;
	cout << "Laiks b: " << b << endl;
	cout << "Laiks c: " << c << endl << endl;
	
	++a;
	cout << "Laika palielinasna laikam a +1 sekunde: ";
	cout << a << endl;
	
	a++;
	cout << "Laika palielinasna laikam a +1 minute: ";
	cout << a << endl;
	
	--b;
	cout << "Laika samazinasana laikam b -1 sekunde: ";
	cout << b << endl;
	
	b--;
	cout << "Laika samazinasana laikam b -1 minute: ";
	cout << b << endl;
	system("pause");
	system("cls");
	
	
	cout << "Laika salidzinasana" << endl;
	cout << "Laiks a: " << a << endl;
	cout << "Laiks b: " << b << endl << endl;
	
	cout << "a > b: " << (a > b ? "true\n" : "false\n");
	cout << "a < b: " << (a < b ? "true\n" : "false\n");
	cout << "a >= b: " << (a >= b ? "true\n" : "false\n");
	cout << "a <= b: " << (a <= b ? "true\n" : "false\n");
	cout << "a == b: " << (a == b ? "true\n" : "false\n");
	cout << "a != b: " << (a != b ? "true\n" : "false\n");
	cout << endl;
	
	
	system("pause");
	return 0;
}
