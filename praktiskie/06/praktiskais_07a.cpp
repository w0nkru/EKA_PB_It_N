#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout << "Input n: ";
    cin >> n;
    
    for (int i = n; i >= 1; i--)
    {
        if (n%i==0) 
            cout << i << endl;
    }

    system ("pause");
    return 0;
}
