#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() 
{  
    time_t t;
    srand((unsigned) time(&t));
    
    for(long i=0; i<10; i++) 
        cout << (rand() % 10) / 10.0 - 0.5<< endl; 
        //cout << (rand() % RAND_MAX) / (double)RAND_MAX - 0.5<< endl;

   return 0;
}
