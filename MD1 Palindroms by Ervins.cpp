#include <iostream>
using namespace std;

int main(){
	int n, reverse = 0;
	cout << "Ievadiet skaitli, lai parbauditu, vai tas ir palindroms: ";
	cin >> n;
	
	for(int i = n; i > 0; i /= 10)
        reverse = (reverse * 10) + (i % 10);
		
	if(n == reverse)
       	cout << "'" << n << "' ir palindroms!\n\n";
   	else
       	cout << "'" << n << "' nav palindroms!\n\n";
	
	system("Pause");
	return 0;}
