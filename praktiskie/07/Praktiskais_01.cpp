#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() 
{  
    time_t t;
    srand((unsigned) time(&t));
    
    for(long i=0; i<10; i++) 
        cout << rand() % 8 + 12<< endl; 

   return 0;
}
