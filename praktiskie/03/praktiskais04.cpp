#include <iostream >
using namespace std;

int main()
{
    int x, y, z;
    
    cout << "Ievadiet skaitli:" << endl;
    cin >> x;
    y = x*x;  
    z = y*y*y;
    cout << "Atbilde: " << z*z*x << endl;
    
    system ("pause");
    return 0; 
}
