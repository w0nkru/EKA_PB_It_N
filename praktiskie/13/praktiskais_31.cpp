#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int x=0;
    
    for(int i=0; i<str.length(); i++)
        if (str[i] == ' ') x++;
    
    cout << x+1 << endl;
    
    system("pause");
    return 0;
}
