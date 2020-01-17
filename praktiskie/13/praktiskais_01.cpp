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
    
    if (strcmp(s1,s2))
        cout << "Nav vienadas" << endl;
    else
        cout << "Ir vienadas" << endl;
    
    system("pause");
    return 0;
}
