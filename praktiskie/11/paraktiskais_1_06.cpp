#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int N = 10;
    double a[N];
    int p_sk = 0, n_sk = 0;
    time_t t;
    srand((unsigned) time(&t));
        
    for(int i=0;i<N;++i)
    {
        a[i] = rand()%10 - 5;
        if (a[i] > 0) p_sk++;
        if (a[i] < 0) n_sk++;
        cout << i << ": " << a[i] << endl;
    }
    
    if (p_sk > n_sk) cout << "Pozitivo vairak." << endl;
    else if (p_sk < n_sk) cout << "Negativo vairak." << endl;
    else cout << "Vienads" << endl;
        
    system("pause");
    return 0;
}
