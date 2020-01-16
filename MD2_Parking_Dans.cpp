#include <iostream>
using namespace std;

double cena(double a){
	if(a >= 19)
		return 10;
	
	else if(a > 3 && a < 19){
		a -= 3;
		a *= 0.5;
		a += 2;
		return a;
	}
	
	else
		return 2;
}

int main(){
	double h, sum;

	cout << "Ievadiet stundu skaitu : " ; cin >> h;
	sum = cena(h);
	cout << "Cena par stavvietu ir : " << sum << endl;
	
	system("Pause");
	return 0;
}
