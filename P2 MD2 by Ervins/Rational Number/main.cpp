#include <iostream>
#include "rationalNumber.h"
using namespace std;


int main(){
	rationalNumber m(1, 8);
	rationalNumber n(1, 4);
	rationalNumber o;
	
	cin >> o;
	system("cls");
	
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;
	cout << "o = " << o << endl << endl;
	
	cout << "Saskaitisana" << endl;
	o = n + m;
	cout  << n << " + " << m << " = " << o << endl;
	
	cout << "Atnemsana" << endl;
	o = n - m;
	cout  << n << " - " << m << " = " << o << endl;
	
	cout << "Reizinasana" << endl;
	o = n * m;
	cout  << n << " * " << m << " = " << o << endl;
	
	cout << "Dalisana" << endl;
	o = n / m;
	cout  << n << " / " << m << " = " << o << endl << endl;
	
	system("pause");
	system("cls");
	o = m;
	cout << "o = m" << endl << endl;
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;
	cout << "o = " << m << endl << endl;
	
	cout << "m == o? \t";
	if(m == o){
		cout << "True" << endl;}
	else{
		cout << "False" << endl;}
	
	cout << "m != o? \t";
	if(m != o){
		cout << "True" << endl;}
	else{
		cout << "False" << endl;}
	
	cout << "m >  n? \t";
	if(m > n){
		cout << "True" << endl;}
	else{
		cout << "False" << endl;}
	
	cout << "m <  n? \t";
	if(m < n){
		cout << "True" << endl;}
	else{
		cout << "False" << endl;}
	
	cout << "m >= o? \t";
	if(m >= o){
		cout << "True" << endl;}
	else{
		cout << "False" << endl;}
	
	cout << "m <= o? \t";
	if(m <= o){
		cout << "True" << endl;}
	else{
		cout << "False" << endl;}
	
	
	system("pause");
	return 0;
}
