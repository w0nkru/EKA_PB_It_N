#include <iostream>
#include <ctime>
using namespace std;

int main() 
{  
    time_t t;
    srand((unsigned) time(&t));
    int avg = 0, x;
    
    for(long i=0; i<20; i++) 
    {
        x = rand() % 101;
        cout << x << " ";
        avg += x;
    }
    
    cout << endl << avg/20 << endl;
    
    system("pause");
    return 0;
}
