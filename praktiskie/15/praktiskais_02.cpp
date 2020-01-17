#include <iostream>
#include <string>
using namespace std;

const int N=3;

union izglitiba
{  
    char D_nos[30]; 
    int gadi;
};

struct Employee
{
    char sur[25];
    char position[25];
    float salary;
    izglitiba izgl;
    char id;
};

int main()
{
    Employee darbinieki[N];
    
    for (int i=0; i<N; i++)
    {
        cout << "Ievadiet darbinieka uzvardu, amatu, algu un izglitibu: " << endl;
        cin >> darbinieki[i].sur 
            >> darbinieki[i].position
            >> darbinieki[i].salary;
        cout << "Ja macas ievadiet - m, ja beidzis - d: " << endl;
        cin >> darbinieki[i].id;
        cout << "Ievadiet datus: " << endl;
        if (darbinieki[i].id == 'm')
            cin >> darbinieki[i].izgl.gadi;
        else
        { 
            cin.ignore();
            cin >> darbinieki[i].izgl.D_nos;
        }
    }
    
    for (int i=0; i<N; i++)
    {
        cout << darbinieki[i].sur << " " 
             << darbinieki[i].position << " "
             << darbinieki[i].salary << " ";
        if (darbinieki[i].id == 'm')
            cout << darbinieki[i].izgl.gadi << endl;
        else 
            cout << darbinieki[i].izgl.D_nos << endl;
    }
            
    system("pause");
    return 0;
}
