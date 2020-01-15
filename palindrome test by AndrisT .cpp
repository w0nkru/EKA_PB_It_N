#include <iostream>
using namespace std;

int main ()
{
    int a = 0, n;
    cout << "Ievadiet skaitli: ";
    cin >> n ;
    for (int m = n; m > 0; m /= 10) 
        a = a*10 + m%10;
    if	(n == a)
    cout << "Skaitlis ir palindorms" << endl;
    else 
    cout << "Skaitlis nav palindorms" << endl;

    system ("pause");
    return 0;
}
