#include <iostream>
using namespace std;

bool vienk(int a)
{
     for (int i = a/2; i>1 ; i--)
         if (a%i==0) return false;
     return true;
}


int main()
{
    int x,y;
    cout << "Ievadiet skaitli: " << endl;
    cin >> x;
    
    if (vienk(x))
        cout << "Vienkarss" << endl;
    else
        cout << "Nav vienkarss" << endl;
    
    system("pause");
    return 0;
}
