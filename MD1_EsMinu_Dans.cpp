#include <cmath>
#include <iostream> 
using namespace std;

int main()
{
	double a = 50, b = 50;
	int inp, tries = 0;
	cout << "Es minu jusu skaitli no 1 lidz 100 maksimums 10 meginajumos\n\n1 = lielaks\n2 = mazaks\n3 = pareizi\n" << endl;
	
	do
		{
			cout << "Vai skaitlis ir : " << a << " ?" << endl;
			cin >> inp;
			tries++;
			b = b / 2 ;
			b=round(b);
			if (inp == 1 && tries < 10)
				a = a + b ;
			else if (inp == 2 && tries < 10)
				a = a - b ;
			else if (inp == 3)
				cout << "Apsveicu sevi! Es uzmineju skaitli " << tries << " meginajumos!" << endl;
			else
				cout << "Jus izmantojat nepareizu ievadi." << endl;
				
		} while (tries < 10);
	
	system("pause");
	return 0;
}
