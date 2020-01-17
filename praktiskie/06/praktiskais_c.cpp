#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout << "Input n: ";
    cin >> n;

    int sum = 0;

    for ( int i = 1; i <= n; i = i + 1)
        sum = sum + i*i;
        
    cout << sum << endl;

    system ("pause");
    return 0;
}
