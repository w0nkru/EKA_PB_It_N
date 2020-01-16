#include <iostream>
using namespace std;

int main(){
	int a = 99999 , b , a2 ;
	cout << "Visi 6 ciparu palindromi" << endl;
	system("Pause");
	
	do{
		a++;
		a2=0;
		
		for(b = a; b > 0; b /= 10)
			a2 = a2 * 10 + b % 10;
		
		if(a == a2)
     	  	cout << a << endl;
	}while (a < 1000000);
	
	system("Pause");
	return 0;
}
