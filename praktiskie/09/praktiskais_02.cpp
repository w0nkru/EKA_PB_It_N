#include <iostream>
using namespace std;

void zv(int a)
{
     for (int i = a; i>0; i--)
         cout << "*";
}

void zv_kv(int kv)
{
    for (int i=kv; i>0; i--)
    {
        zv(kv);
        cout << endl;
    } 
} 

int main()
{
    int x,y;
    cout << "Ievadiet zv. skaitu: " << endl;
    cin >> x;

    zv_kv(x);
    
    cout << endl;
    system("pause");
    return 0;
}
