#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Ievadiet 1. skaitli: " << endl;
    cin >> a;
    cout << "Ievadiet 2. skaitli: " << endl;
    cin >> b;

    if (a>b)
        cout << "1. ir lielaks" << endl;
    else if (b>a)
        cout << "2. ir lielaks" << endl;
    else
        cout << "Vienadi" << endl;


    system("pause");
}
