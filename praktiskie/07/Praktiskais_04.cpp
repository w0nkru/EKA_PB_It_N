#include <iostream>
#include <ctime>
using namespace std;

int main() 
{  
    time_t t;
    srand((unsigned) time(&t));
    int max, min, x;
    
    max = min = rand() % 101;
    cout << max << " ";
    for(long i=0; i<19; i++) 
    {
        x = rand() % 101;
        cout << x << " ";
        if (x > max) max = x;
        if (x < min) min = x;
    }
    
    cout << endl << "MAX: " << max << endl << "MIN: " << min << endl;
    
    system("pause");
    return 0;
}
