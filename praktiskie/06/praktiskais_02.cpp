#include <iostream>
using namespace std;

int main()
{
    int PASSWORD = 12345, n, tries = 0;

    do
    {
        cout << "Ievadiet paroli: ";
        cin >> n;
        tries++;
    }
    while( (n!=PASSWORD) && (tries < 3) );

    if (tries <3) 
        cout << "Success!" << endl;
    else
        cout << "Failure" << endl;
    system ("pause");
    return 0 ;
}
