#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout << "Input n: ";
    cin >> n;

    int sum = 0;

    int i = 1;
    for ( ; i <= n; )
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "By for sum: " << sum << endl;
    cout << "By formula n*(n+1)/2 sum: " << n*(n+1)/2 << endl;
    
    system ("pause");
    return 0;
}
