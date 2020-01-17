#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Ievadiet 1. skaitli: " << endl;
    cin >> a;
    cout << "Ievadiet 2. skaitli: " << endl;
    cin >> b;
    cout << "Ievadiet 3. skaitli: " << endl;
    cin >> c;
    
    cout << "Maksimlais ir: ";
    if (a>b)
        if (a>c)
            cout << a << endl;
    if (b>a)
        if (b>c)
            cout << b << endl;
    if (c>a)
        if (c>b)
            cout << c << endl;

    system("pause");
}
