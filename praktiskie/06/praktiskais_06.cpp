#include <iostream>
using namespace std;

int main ()
{

    for (int i = 100; i <= 999; i++)
    {
        if ( (i%10)*(i%10)*(i%10) + (i/10%10)*(i/10%10)*(i/10%10) + (i/100)*(i/100)*(i/100) == i )
            cout << i << endl;
    }

    system ("pause");
    return 0;
}
