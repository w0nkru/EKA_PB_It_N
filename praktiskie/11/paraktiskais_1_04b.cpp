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
        
    int x = 0, y = N-1;
    while(y>x)
    {
        int t = a[x];
        a[x] = a[y];
        a[y] = t;
        x++;
        y--; 
    }    
        
    for(int i=0;i<N;++i)
        cout << a[i] << " ";
    cout << endl;
        
    system("pause");
    return 0;
}
