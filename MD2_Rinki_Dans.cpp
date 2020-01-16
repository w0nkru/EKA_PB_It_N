#include <iostream>
using namespace std;

double circle_area(double r){	
   	r *= r * 3.14;
   	return r;
}

int main(){  
    double r1, r2, apl_1, apl_2, apl_mazie; 
		cout << "Ievadiet mazo radiusu : " ; cin >> r2;
		cout << "Ievadiet lielo radiusu : " ; cin >> r1;

		apl_mazie = r2 / 2;
		apl_mazie = circle_area(apl_mazie) * 2;
		//cout << apl_mazie << endl;
		
		apl_2 = r2;
		apl_2 = circle_area(apl_2);
		//cout << apl_2 << endl;
		
		apl_1 = r1;
		apl_1 = circle_area(apl_1);
		//cout << apl_1 << endl;
		
		cout << "Iezimetais laikums ir : " << apl_1 - apl_2 + apl_mazie << endl;
		
    system("pause");
    return 0;
}

