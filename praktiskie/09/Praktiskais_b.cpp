#include <iostream>
#include <cmath>
using namespace std;

double Square(double a)
{
    return a*a;
}

double Dist(double x1, double y1, double x2, double y2)
{
    return sqrt( Square(x1-x2) + Square(y1-y2) );
}

int main()
{

    cout << Dist(3,0,0,4) << endl;
    
    system("pause");
    return 0;
}
