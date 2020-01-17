#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Ievadiet menesa numuru" << endl;
    cin >> x;
    
    switch (x)
    {
        case 1:
        case 2:
        case 12:
                cout << "ziema" << endl;
                break;
        case 3:
        case 4:
        case 5:
                cout<<"pavasaris"<<endl;  
                break;           
        case 6: 
        case 7: 
        case 8:
                cout << "vasara" << endl;
                break;
        case 9: 
        case 10:
        case 11:
                cout << "rudens" << endl;
                break;
        default:
                cout << "Nepareizs numurs" << endl;
                break;
    }
    system ("pause");
    return 0;
}
