#include <iostream>
#include <string>
using namespace std;

const int N=3;

struct Employee
{
    char sur[25];
    char position[25];
    float salary;
};

int main()
{
    Employee darbinieki[N];
    
    for (int i=0; i<N; i++)
    {
        cout << "Ievadiet darbinieka uzvardu, amatu, un algu: " << endl;
        cin >> darbinieki[i].sur 
            >> darbinieki[i].position
            >> darbinieki[i].salary;
    }
    
    for (int i=0; i<N; i++)
        cout << darbinieki[i].sur 
             << darbinieki[i].position
             << darbinieki[i].salary
             << endl;
            
    system("pause");
    return 0;
}
