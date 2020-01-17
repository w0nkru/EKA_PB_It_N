#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s1,s2;
    
    cout << "Ievadiet 1. virkni:" << endl;
    getline(cin, s1);
    cout << "Ievadiet 2. virkni:" << endl;
    getline(cin, s2);
    
    if (s1.find(s2)!=string::npos)
        cout << "Ir" << endl;
    else
        cout << "Nav" << endl;
    
    system("pause");
    return 0;
}
