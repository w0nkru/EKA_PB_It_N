#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int N=7,M=5;
    int a[N][M];
    int sum[N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
            a[i][j] = rand()%2;
        sum[i] = 0;    
    }
                
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cout << a[i][j] << " ";
            sum[i] += a[i][j];
        }
        
        cout << "   " << sum[i] << endl;
    }
       
    cout << endl;
    system("pause");
    return 0;
}
