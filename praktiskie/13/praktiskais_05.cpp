#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20];
    char s2[20];
    
    cout << "Ievadiet 1. virkni:" << endl;
    gets(s1);
    cout << "Ievadiet 2. virkni:" << endl;
    gets(s2);
    
    if (strstr(s1,s2))
        cout << "Ir" << endl;
    else
        cout << "Nav" << endl;
    
    system("pause");
    return 0;
}
