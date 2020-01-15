#include <iostream>
using namespace std;

int main ()
{
    int n;
    n=100000;
do
{    
	int a=0;
	n++;
	for (int m = n; m > 0; m = m / 10) 
        a = a*10 + m%10; //
    if	(n == a)
    cout << n << "    " ;
}
while (n!=999999);
    system ("pause");
    return 0;
}

