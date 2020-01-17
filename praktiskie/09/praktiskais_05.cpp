#include <iostream>
using namespace std;

void change(int &a)
{
     a=-a;
}


int main()
{
    int x;
    cout << "Ievadiet skaitli: " << endl;
    cin >> x;
    change(x);
    cout << x << endl;
    
    system("pause");
    return 0;
}
