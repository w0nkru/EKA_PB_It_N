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
        a[i] = rand() % 20 - 20;
        cout << i << ": " << a[i] << endl;
    }
        
    for(int i=0;i<N;++i)
        if (a[i] > max) max = a[i];
    
    cout << max << endl;
        
    system("pause");
    return 0;
}
