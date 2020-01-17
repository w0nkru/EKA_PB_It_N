#include <iostream >
using namespace std;

int main()
{
    int a=3, b=5;

    a=a+b;
    b=a-b;
    a=a-b;
    

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    
    system ("pause");
    return 0; 
}
