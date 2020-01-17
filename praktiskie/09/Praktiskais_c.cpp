#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
    //cout << "No funkcijas: " << &a << endl << &b << endl << endl;
}

int main()
{
    int x=3, y=5;
    Swap(x,y);
    cout << x << endl << y << endl;
    system("pause");
    return 0;
}
