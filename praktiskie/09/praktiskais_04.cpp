#include <iostream>
using namespace std;

int Kap(int a, int b)
{
    int rez=1;
    for (int i = b; i>0; i--)
        rez*=a;
    return rez;
}


int main()
{
    int x,y;
    cout << "Ievadiet skaitli: " << endl;
    cin >> x;
    cout << "Ievadiet pakapi: " << endl;
    cin >> y;

    cout << Kap(x,y) << endl;
    
    system("pause");
    return 0;
}
