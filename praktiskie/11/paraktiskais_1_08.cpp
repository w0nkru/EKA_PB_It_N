#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int N = 20;
    int a[N];
    
    a[0] = 1;
    a[1] = 1;
    for(int i=2;i<N;++i)
        a[i] = a[i-1] + a[i-2];
    
    for(int i=0;i<N;++i)
        cout << a[i] << " ";
    cout << endl;
        
    system("pause");
    return 0;
}
