#include <iostream>
#include "konvertori.h"

using namespace std;

int main()
{
    cout << "MeeterToFeet(100): " << MeeterToFeet(100) << endl;
    cout << "FeetToMeeter: " << FeetToMeeter(MeeterToFeet(100)) << endl;
    cout << "KmhToMS(100): " << KmhToMS(100) << endl;
    cout << "MSToKmh: " << MSToKmh(KmhToMS(100)) << endl;
    cout << "CelsiusToFarenheit(100): " << CelsiusToFarenheit(100) << endl;
    cout << "FarenheitToCelsius: " << FarenheitToCelsius(CelsiusToFarenheit(100)) << endl;
    cout << endl;
    
    system("pause");
    return 0;
}
