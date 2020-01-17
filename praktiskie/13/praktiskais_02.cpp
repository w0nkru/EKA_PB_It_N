#include <iostream>
#include <cstring>
using namespace std;

int main()
{   
    int v;
    cout << "Ievadiet vecumu:" << endl;
    cin >> v;
    
    if ( (v%10!=1) || (v==11) || (v==111) )
        cout << "Man ir " << v << " gadi." << endl;
    else
        cout << "Man ir " << v << " gads." << endl;
    
    system("pause");
    return 0;
}
