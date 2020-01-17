#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int N = 10;
    int a[N];
    int max = 0;
    time_t t;
    srand((unsigned) time(&t));
    
    for(int i=0;i<N;++i)
    {
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    cout << endl;
        
    for(int i=N-1;i>=0;--i)
        cout << a[i] << " ";
    cout << endl;
        
    system("pause");
    return 0;
}
