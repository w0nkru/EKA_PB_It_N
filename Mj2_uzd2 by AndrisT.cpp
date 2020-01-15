#include <iostream>
using namespace std;


double minmax_maksa(double &minh, double &minm) //min/max laiks/maksa
{	
   	if (minh<=3) return minm=2;
   		else if (minh>=19) return minm=10;
}

double maksa(double &time, double cash) 
{	
  	double a, m=2;
	  for (double a=3; time>a; a++)
		m+=0.5;
	return cash=m;
}

int main()
{  
    double T,M;
		cout << "Ievadiet masinas atrasanos laiku stundas " << endl;
		cin >> T; // T = stavesana laiks, M = samaksa par stavvietu		
		maksa(T,M);
//		minmax_maksa(T,M);	
		cout << "Maksa par stavvietu ir " << M <<"Ls" <<  endl;
    	system("pause");
    return 0;
}
