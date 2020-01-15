#include <iostream>
#include <cmath>
using namespace std;


double vms(double Vkmh) //kmh uz sm
{	
		Vkmh=Vkmh*1000/3600;
	return Vkmh;
}

double meet_time(double kmh1, double kmh2, double &km)
{	
	double a;
		a=vms(kmh1) + vms(kmh2);
		km*=1000/a;
	return km;
}

int main()
{  
    double att, ckmh1, ckmh2 ;
		cout << "Ievadi km attalumu starp objektiem " << endl;
		cin >> att; // att - attalums  strap abam automasinam	
		cout << "Ievadiet pirmas automasinas atrumu km/h " << endl;
		cin >> ckmh1; // att - 	pirmas automasinas atrums
		cout << "Ievadiet otras automasinas atrumu km/h "<< endl;
		cin >> ckmh2; // att - 	otras automasinas atrums		
		meet_time(ckmh1,ckmh2,att);	
		cout << "Automasinas tiksies pec " << att << " sekundem!" <<  endl;
    	system("pause");
    return 0;
}
