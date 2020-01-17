#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[100], s2[100]="", stemp[100]="";
    
    cout << "Ievadiet virkni:" << endl;
    gets(s1);
//	strcpy(s1, s1+4);
//	cout << s1 << endl;
	
//	while (strstr(s1,"  "))
//	{
//			
//	}
	
    while (strstr(s1,"  "))
    {
    	strncat(s2,s1,strlen(s1)-strlen(strstr(s1,"  ")));
    	//strcat(s2, " ");
    	//cout << ":" << strlen(strstr(s1,"  "))-2 << endl;
    	strcpy(s1, s1+(strlen(s1)-strlen(strstr(s1,"  ")+2)));
    	s1[10]='\0';
    	//strcpy(s1, s1+4);
		cout << "strlen: " << strlen(s1)-strlen(strstr(s1,"  ")) << endl;
    	cout << "s1: " << s1 << endl;
    	cout << "s2: " << s2 << endl;
    	cout << "stemp:" << stemp << endl;
    	system("pause");
    }
    
 //   cout << s2 << endl;
    

    
    system("pause");
    return 0;
}
