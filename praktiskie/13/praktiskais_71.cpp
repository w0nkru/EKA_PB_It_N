#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1;
    int count[256]={0};
    
    cout << "Ievadiet 1. virkni:" << endl;
    getline(cin, s1);
    
    for(int i=0; i<s1.length(); i++)
    	count[(int)s1[i]]++;
    	
    for (int i=0; i<256; i++)
    	if (count[i]!=0) 
		   cout << (char)i << ":=" << count[i] << endl;

    
    system("pause");
    return 0;
}
