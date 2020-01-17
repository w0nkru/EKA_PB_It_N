#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int N=10,M=10;
    double a[N][M];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
                a[i][j] = rand()%90 + 10;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
                cout << a[i][j] << " ";
        cout << endl;
    }
    
    cout << endl;
/*    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
            if (i==j) cout << a[i][j] << " ";
    }
*/ 

    for(int z=0; z<M; z++)
        cout << a[z][z] << " ";    
           
    cout << endl;
    system("pause");
    return 0;
}
