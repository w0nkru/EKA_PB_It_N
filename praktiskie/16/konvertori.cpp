#include <iostream>
using namespace std;

float MeeterToFeet(float x)
{
      cout << x * 3.2808;
      return x * 3.2808;
}

float FeetToMeeter(float x)
{
      return x / 3.2808;
}

float KmhToMS(float x)
{
      return x / 3.6;
}

float MSToKmh(float x)
{
      return x * 3.6;
}

float CelsiusToFarenheit(float x)
{
      return x * 9 / 5 +32;
}

float FarenheitToCelsius(float x)
{
      return (x - 32) * 5 / 9;
}
