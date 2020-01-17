#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int N = 10;
    int a[N];
    int temp;
    time_t t;
    srand((unsigned) time(&t));
    
    for(int i=0;i<N;++i)
    {
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    cout << endl;
  
    
    temp = a[N-1];
    for(int i=N-1;i>0;--i)
    {
         a[i] = a[i-1];
    }
    a[0] = temp;
    
        
    for(int i=0;i<N;++i)
        cout << a[i] << " ";
    cout << endl;
        
    system("pause");
    return 0;
}
