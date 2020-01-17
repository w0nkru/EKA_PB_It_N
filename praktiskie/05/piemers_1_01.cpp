#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Ievadiet 1. skaitli: " << endl;
    cin >> a;
    cout << "Ievadiet 2. skaitli: " << endl;
    cin >> b;
    
    cout << "Maksimlais ir: ";
    if (a>b) 
        cout << a << endl;
    else 
        cout << b << endl;
        
    system("pause");
}
