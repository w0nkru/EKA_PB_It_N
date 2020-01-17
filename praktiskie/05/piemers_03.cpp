#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, x, y;
    cout << "Ievadiet a skaitli: " << endl;
    cin >> a;
    cout << "Ievadiet b skaitli: " << endl;
    cin >> b;
    cout << "Ievadiet x skaitli: " << endl;
    cin >> x;
    cout << "Ievadiet y skaitli: " << endl;
    cin >> y;
    
    if ( ((a>=x) && (b>=y)) || ((a>=y) && (b>=x)) )
        cout << "Var" << endl;
    else
        cout << "Nevar" << endl;

    system("pause");
}
