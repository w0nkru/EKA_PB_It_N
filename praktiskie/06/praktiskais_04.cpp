#include <iostream>
using namespace std;

int main ()
{
    int n, min = 9, max = 0;
    cout << "Input n: ";
    cin >> n;

    while(n>0)
    {
        if (n%10 > max) max = n%10;
        if (n%10 < min) min = n%10;
        n /= 10;
    }

    cout << "MAX: " << max << endl;
    cout << "MIN: " << min << endl;
    system ("pause");
    return 0;
}
