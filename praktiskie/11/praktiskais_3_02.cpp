#include <iostream>
#include <ctime>
using namespace std;

void Init_Array (int a[], int N)
{
    for(int i=0; i<N; i++)
        a[i] = rand()%10;
}

void Print_Array(int a[], int N)
{
    for(int i=0; i<N; i++)
        cout << a[i] << " ";
    cout << endl;
}

int Search(int A[], int N, int x)
{
    for(int i=0; i<N; i++)
        if (A[i]==x) return i;
    return -1;
}

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int N=10;
    int a[N];
    Init_Array(a,N);
    Print_Array(a,N);
    cout << 7 << "->" << Search(a,N,7) << endl;
    system("pause");
    return 0;
}
