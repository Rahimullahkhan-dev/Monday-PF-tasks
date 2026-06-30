#include <iostream>
using namespace std;

double calculateStrikeRate(int runs, int balls)
{
    double strikerate;

    strikerate = ((double)runs / balls) * 100;

    return strikerate;
}

int main()
{
    int runs;
    int balls;

    cout<<"Enter Runs: ";
    cin>>runs;

    cout<<"Enter Balls: ";
    cin>>balls;

    double result = calculateStrikeRate(runs, balls);

    cout<<"Strike Rate: "<<result;

    return 0;
}