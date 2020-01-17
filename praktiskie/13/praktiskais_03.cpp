#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    gets(str);
    int x=0;
    
    for(int i=0; i<strlen(str); i++)
        if (str[i] == ' ') x++;
    
    cout << x+1 << endl;
    
    system("pause");
    return 0;
}
