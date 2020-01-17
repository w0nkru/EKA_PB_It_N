#include <iostream>
using namespace std;

typedef int Fun_t(int x);

void Print(Fun_t f, int n)
{cout << f(n) << endl;}

int k_Laukums(int i)
{return i*i*6;}

int k_Tilpums(int i)
{return i*i*i;}

int main()
{
    Print(k_Laukums, 5);
    Print(k_Tilpums, 5);
    system("pause");
    return 0;
}
