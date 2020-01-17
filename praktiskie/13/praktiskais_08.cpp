#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char s1[20], num1[4]="", num2[3]="";
	int first, second;
    
    cout << "Ievadiet virkni:" << endl;
    gets(s1);

	first = atoi(s1);
	if (first<100)
	{
		strncpy(num2,s1+3,2);
		second = atoi(num2);
		cout << first+second << endl;
	}
	else
	{
		strncpy(num2,s1+4,2);
		second = atoi(num2);
		cout << first-second << endl;
	}
    
    system("pause");
    return 0;
}
