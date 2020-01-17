#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int N=7,M=5;
    int a[N][M];
    int sum[M];
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
            a[i][j] = rand()%2;   
    }
    
    for(int j=0; j<M; j++)
        sum[j] = 0;           
                
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    
    cout << endl;
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
             sum[i] += a[j][i];
        cout << sum[i] << " ";
    }
    
       
    cout << endl;
    system("pause");
    return 0;
}
