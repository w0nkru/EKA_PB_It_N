#include <iostream>
using namespace std;

int main()
{
    int PASSWORD = 12345, n;

    do
    {
        cout << "Ievadiet paroli: ";
        cin >> n;
    }
    while(n!=PASSWORD);
    
    cout << "Success!" << endl;

    system ("pause");
    return 0 ;
}
