#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int N = 10;
    double a[N];
    time_t t;
    srand((unsigned) time(&t));
    
    for(int i=0;i<N;++i)
        a[i] = rand()/(double)RAND_MAX - 0.5;
        
    for(int i=0;i<N;++i)
        if (i%2==0) 
            cout << i << ": " << a[i] << endl;
        
    system("pause");
    return 0;
}
