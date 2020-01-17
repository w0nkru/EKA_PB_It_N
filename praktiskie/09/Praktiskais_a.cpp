#include <iostream>
using namespace std;

double Square(double a)
{
    return a*a;
}

int main()
{
    cout << "Input number: " << endl;
    double x;
    cin >> x;
    cout << Square(x) << endl;
    
    system("pause");
    return 0;
}
