#include<iostream>
using namespace std;
double celsiusToFahrenheit(double celsius)
{
    double fahrenheit;
    fahrenheit = (celsius * 9 /5) + 32;
    return fahrenheit;
}
int main()
{
    double celsius;
    cout<<"Enter Temperature in celsius :";
    cin >> celsius;
   double fahrenheit = celsiusToFahrenheit(celsius);
   cout<<"Temperature in Fahrenheit: " << fahrenheit;
   return 0; 
}
