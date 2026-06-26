#include<iostream>
using namespace std;
int calculate2Low(int arr[],int size)
{  int lowest, secondlowest;
    if(arr[0] < arr[1]) {
        lowest = arr[0];
        secondlowest = arr[1];
    } else {
        lowest = arr[1];
        secondlowest = arr[0];
    }
    
    for(int i = 2; i < size; i++)  
    { 
        if(arr[i] < lowest)
        {
            secondlowest = lowest;
            lowest = arr[i];
        }
        else if(arr[i]< secondlowest && arr[i] != lowest)
        {
            secondlowest = arr[i];

        }
    }
    return secondlowest;
}
int calculate2High(int arr[],int size)
{
    int Highest = arr[0];
    int secondhighest = arr[0];
    for(int i=1;i<size;i++)
    { if(arr[i]>Highest)
        {
            secondhighest = Highest;
            Highest = arr[i];
        }
        else if(arr[i]> secondhighest && arr[i] != Highest)
        {
            secondhighest = arr[i];

        }
    }
    return secondhighest;

}
int main()
{
    int N;
    cout<<"Enter number of Students :";
    cin>>N;
    int scores[N];
    cout<<"Enter scores :";
    for( int i=0; i<N; i++)
    {
        cin>>scores[i];
    }
    int secondlow = calculate2Low( scores , N);
    int secondhigh = calculate2High(scores , N);
        cout<<"2nd Lowest score"<<secondlow<<endl;
        cout<<"2nd Highest score"<<secondhigh<<endl;
        return 0;
        
}