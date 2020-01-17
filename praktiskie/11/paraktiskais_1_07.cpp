#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int N = 10;
    int a[N];
    bool IrNav = false;
    time_t t;
    srand((unsigned) time(&t));
    
    for(int i=0;i<N;++i)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }
    cout << endl;
        
    for(int i=0;(i<N-1) && (IrNav == false);++i)
        for(int j=i+1;(j<N) && (IrNav == false);++j)
            if (a[i] == a[j]) IrNav = true;
    
    if (IrNav) cout << "Ir" << endl;
    else cout << "Nav" << endl;
        
    system("pause");
    return 0;
}
