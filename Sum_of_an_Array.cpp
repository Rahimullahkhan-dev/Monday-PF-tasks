#include<iostream>
using namespace std;
int calculateSum(int arr[], int size)
{
    int sum = 0;
    for (int i=0; i<size;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int N;
    cout<<"Enter number of array how many array : ";
    cin>>N;
    int scores[N];
    cout<<"Enter scores : ";
    for (int i =0; i<N ; i++)
    {
        cin>>scores[i];
    }
    int sum = calculateSum(scores ,N );
    cout<<"Sum of all scores : "<<sum;
    return 0;
}