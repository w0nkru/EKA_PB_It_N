#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int N = 10;
    double a[N];
    int sk = 0;
    time_t t;
    srand((unsigned) time(&t));
    
    for(int i=0;i<N;++i)
        a[i] = rand()/(double)RAND_MAX - 0.5;
        
    for(int i=0;i<N;++i)
    {
        if (a[i] > 0) sk++;
        cout << i << ": " << a[i] << endl;
    }
    
    cout << sk << endl;
        
    system("pause");
    return 0;
}
