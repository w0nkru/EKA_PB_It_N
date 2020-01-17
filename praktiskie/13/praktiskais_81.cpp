#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    string s1, num2;
	int first, second;
    
    cout << "Ievadiet virkni:" << endl;
    getline(cin, s1);

	first = atoi(s1.c_str());
	if (first<100)
	{
		num2+=s1.substr(3,2);
		second = atoi(num2.c_str());
		cout << first+second << endl;
	}
	else
	{
		num2+=s1.substr(4,2);
		second = atoi(num2.c_str());
		cout << first-second << endl;
	}
    
    system("pause");
    return 0;
}
