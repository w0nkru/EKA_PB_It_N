#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1;
    
    cout << "Ievadiet virkni:" << endl;
    getline(cin, s1);

    while (s1.find("  ")!=string::npos)
    {
		s1.replace(s1.find("  "), 2, " ");
    }

	if (s1[0]==' ') s1.replace(0, 1, ""); 
	if (s1[s1.length()]==' ') s1.replace(s1.length(), 1, ""); 
    
    cout << s1 << endl;
    
    system("pause");
    return 0;
}
