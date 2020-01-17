#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Ievadiet x: " << endl;
    cin >> a;
    
    if ( (a%2==0) && (a%3==0) && (a%7!=0) )
        cout << "Izpildas" << endl;
    else 
        cout << "Neizpildas" << endl;

    


    system("pause");
}
