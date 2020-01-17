#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    gets(str);
    int index=0, max=0, vg=0, i;
    
    for(i=0; i<strlen(str); i++)
    {
        if (str[i] != ' ') vg++;
        else
        {
            if (vg > max)
            {
                max = vg;
                index = i - vg;       
            }
            vg = 0;
        }
    }
    
    if (vg > max)
    {
       max = vg;
       index = i - vg;       
    }
    
    for(i=index; i<index+max; i++)
       cout << str[i];
    
    cout << endl << max << endl;
    
    system("pause");
    return 0;
}
