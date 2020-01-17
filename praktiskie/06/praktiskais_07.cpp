#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout << "Input n: ";
    cin >> n;
    cout << n << endl;
    
    for (int i = n/2; i >= 1; i--)
    {
        if (n%i==0) 
            cout << i << endl;
    }

    system ("pause");
    return 0;
}
