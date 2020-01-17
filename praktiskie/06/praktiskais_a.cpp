#include <iostream>
using namespace std;

int main ()
{
    int n, sum = 0;
    cout << "Input n: ";
    cin >> n;

    while(n>0)
    {
        sum += n%10; // sum = sum + n%10;
        n /= 10; // n = n/10;
    }

    cout << sum << endl;
    system ("pause");
    return 0;
}
