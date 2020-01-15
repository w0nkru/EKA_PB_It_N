#include <iostream> 
using namespace std; 

int Palindrome(int n){
    int reverse = 0; 
    for (int i = n; i > 0; i /= 10) 
        reverse = (reverse * 10) + (i % 10);
    return(n == reverse);}
  
void count(int x, int y){ 
    for(int i = x; i <= y; i++) 
        if(Palindrome(i))
          cout << i << " ";}

int main(){ 
    count(100000, 999999);
    
    system("Pause");
    return 0;}
