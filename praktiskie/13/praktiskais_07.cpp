#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[100];
    int count[256]={0};
    
    cout << "Ievadiet 1. virkni:" << endl;
    gets(s1);
    
    for(int i=0; i<strlen(s1); i++)
    	count[(int)s1[i]]++;
    	
    for (int i=0; i<256; i++)
    	if (count[i]!=0) 
		   cout << (char)i << ":=" << count[i] << endl;

    
    system("pause");
    return 0;
}
