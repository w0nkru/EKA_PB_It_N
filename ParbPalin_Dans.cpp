#include <iostream>
using namespace std;

int main(){
	int a , b , a2 = 0;
	cout << "Palindroma parbaude" << endl;
	cout << "Ievadi skaitli : "; cin >> a;
	
	for(b = a; b > 0; b = b / 10) //1 reizi izdara; pildit kamer; ko darit katru reizi pec bloka izpildes
		a2 = a2 * 10 + b % 10;

    if(a == a2)
       	cout << "Skaitlis " << a << " ir palindroms" << endl;
   	else
       	cout << "Skaitlis " << a << " nav palindroms" << endl;
	
	system("Pause");
	return 0;
	}
