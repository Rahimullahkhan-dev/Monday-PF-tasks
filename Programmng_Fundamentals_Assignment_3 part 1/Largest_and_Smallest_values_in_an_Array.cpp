#include<iostream>
using namespace std;
int calculatelowest(int arr[], int size)
{
    int lowest = arr[0];
for(int i=1; i<size;i++)
  {  if(arr[i]<lowest)
    {
        lowest = arr[i];

    }
}
return lowest;
}
int calculatehighest(int arr[], int size)
{
    int highest = arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i]>highest)
        {
            highest = arr[i];

        }
    }
    return highest;

}

    int main()
    { int N;
    cout<<"Enter number of students :";
cin>>N;
int scores[N];
cout<<"Enter scores of students : ";
for(int i=0; i<N; i++)
{
    cin>>scores[i];

}
int lowest =calculatelowest (scores, N);
int highest = calculatehighest(scores, N);

cout<<"Lowest score is :"<<lowest <<endl;
cout<<"Highest score is :"<<highest <<endl;
return 0;
}