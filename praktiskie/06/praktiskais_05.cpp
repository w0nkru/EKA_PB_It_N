#include <iostream>
using namespace std;

int main ()
{
    int n, x, p=0, np=0;

    cout << "Input n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Ievadiet " << i << " skaitli: " << endl;
        cin >> x;
        if (x%2==0) p+=x;
        else np+=x;
    }
       
    cout << "P: " << p << endl;
    cout << "NP: " << np << endl;

    system ("pause");
    return 0;
}
