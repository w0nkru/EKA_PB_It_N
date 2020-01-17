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
    
    if  ( (a==b) || (b==c) || (a==c) )
    {
        if ( (a==b) && (b==c) )
            cout << "Visi vienadi" << endl;
        else
            cout << "Divi vienadi" << endl;
    }
    else
        cout << "Vienadu nav" << endl;

    system("pause");
}
