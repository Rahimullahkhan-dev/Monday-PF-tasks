#include <iostream>
using namespace std;

int countEvenNumbers(int arr[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int countOddNumbers(int arr[], int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int N;
    
    cout<<"Enter Size of Array: ";
    cin>>N;

    int numbers[N];

    for(int i=0; i<N; i++)
    {
        cout<<"Enter value in index "<<i<<": ";
        cin>>numbers[i];
    }

    int even = countEvenNumbers(numbers, N);
    int odd = countOddNumbers(numbers, N);

    cout<<"Number of Even Numbers in Array: "<<even<<endl;
    cout<<"Number of Odd Numbers in Array: "<<odd<<endl;

    return 0;
}