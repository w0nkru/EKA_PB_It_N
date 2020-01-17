#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, d;
    cout << "Ievadiet a skaitli: " << endl;
    cin >> a;
    cout << "Ievadiet b skaitli: " << endl;
    cin >> b;
    cout << "Ievadiet c skaitli: " << endl;
    cin >> c;
    
    d = b*b - 4*a*c;
    if (d>0)
    {
        cout << "1. sakne: " << (-b + sqrt(d)) / 2*a << endl;
        cout << "2. sakne: " << (-b - sqrt(d)) / 2*a << endl;
}
    else if (d==0)
        cout << "1. sakne: " << -b / 2*a << endl;
    else
        cout << "Saknu nav" << endl;     

    system("pause");
}
