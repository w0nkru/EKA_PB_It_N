#include <iostream>
using namespace std;

int main ()
{
    int n, m, reiz = 0;

    cout << "Input a: ";
    cin >> n;
    cout << "Input b: ";
    cin >> m;

    for (int i = 1; i <= n; i++)
        reiz += m;
        
    cout << reiz << endl;

    system ("pause");
    return 0;
}
