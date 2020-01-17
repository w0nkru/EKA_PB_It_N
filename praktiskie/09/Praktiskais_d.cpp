#include <iostream>
using namespace std;

void inc(int &a, int b)
{
    a += b;
}

int main()
{
    int x=3, y=5;
    inc(x,y);
    cout << x << endl << y << endl;
    system("pause");
    return 0;
}
