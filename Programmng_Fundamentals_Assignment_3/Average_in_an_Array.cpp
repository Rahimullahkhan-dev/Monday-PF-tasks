#include<iostream>
using namespace std;
double calculateAverage(int arr[], int size)
{
    int sum =0;
    for(int i =0; i<size ;i++)
    {
        sum =sum +arr[i];
    }
    return sum/size;
}
int main()
{
    int N;
    cout << "Enter a number of  students: ";
    cin>>N;
    int scores[N];
    cout << "Enter scores of Students: ";
    for(int i=0 ; i<N; i++)
    {
        cin>>scores[i];

    } 
    double average = calculateAverage(scores, N);
    cout <<"Average score of Students is: "<<average<<endl;
return 0;
}
