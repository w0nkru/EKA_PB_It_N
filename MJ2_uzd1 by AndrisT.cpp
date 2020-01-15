#include <iostream>
using namespace std;

double circle_area(double &R) //formula (R*R) * 3.14(pi)
{	
   	R*=R*3.14;
   	return R;
}

int main()
{  
    double R1,R2,scir,mcir,lcir; //R1,R2 = dotie radiusi. scir = mazo rinku laukums, mcir = videjo rinka laukums, lcir = lielo rinku laukums
		cout << "Ievadiet R1 radiusa vertibu" << endl;
		cin >> R1;
		cout << "Ievadiet R2 radiusa vertibu" << endl;
		cin >> R2;
//mazo rinku laukums		
		scir=R1/2;
		circle_area(scir);
		scir*=2;
//videja rinka laukmums		
		mcir=R2;
		circle_area(mcir);
//liela linka laukums	
		lcir=R1+R2;
		circle_area(lcir);
				
		cout << "Abu mazo rinka laukums ir " << scir << endl;
    	cout << "Apkarteja rinka laukums ir " << lcir-mcir << endl;
    	cout << "Kopejais laukums ir " << lcir+scir-mcir << endl;
    system("pause");
    return 0;
}

