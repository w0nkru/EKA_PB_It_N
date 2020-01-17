#include <iostream>
using namespace std;

int Min(int a)
{
    int m=10;
    while(a>0)
    {
        if (a%10 < m) m = a%10;
        a/=10;
    }
    return m;
}


int main()
{
    int x,y;
    cout << "Ievadiet skaitli: " << endl;
    cin >> x;
    cout << Min(x) << endl;
    
    system("pause");
    return 0;
}
