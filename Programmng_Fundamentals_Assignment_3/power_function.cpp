#include<iostream>
using namespace std;

int calculatePower(int base, int exponent)
{
    int result = 1;
    for(int i=1 ; i<=exponent; i++)
    {
        result = result * base;

    }
    return result;
    }
int main()
{
    int base, exponent;
    cout<<"Enter base : ";
    cin>>base;
    cout<<"enter exponent : ";
    cin>>exponent;
    int result = calculatePower( base, exponent);
    cout<<base<<" raised to the power of "<<exponent<<" is : "<<result;

    return 0;
}