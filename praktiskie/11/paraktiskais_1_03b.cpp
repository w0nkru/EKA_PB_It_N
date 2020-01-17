#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int N = 10;
    int a[N];
    int max;
    time_t t;
    srand((unsigned) time(&t));
    
    a[0] = max = rand() % 20 - 20;
    for(int i=1;i<N;++i)
        a[i] = rand() % 20 - 20;
        
    for(int i=0;i<N;++i)
    {
        cout << i << ": " << a[i] << endl;
        if (a[i] > max) max = a[i];
    }
    
    cout << max << endl;
        
    system("pause");
    return 0;
}
