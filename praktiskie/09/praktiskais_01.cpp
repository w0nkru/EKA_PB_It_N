#include <iostream>
using namespace std;

int LKD(int a, int b)
{
    int min = a;
    if (b<a) min = b;
    while ( (a%min!=0) || (b%min!=0) )
          min--;
    return min;
}


int main()
{
    int x,y;
    cout << "Ievadiet 1. vertibu: " << endl;
    cin >> x;
    cout << "Ievadiet 2. vertibu: " << endl;
    cin >> y;

    cout << LKD(x,y) << endl;
    
    system("pause");
    return 0;
}
