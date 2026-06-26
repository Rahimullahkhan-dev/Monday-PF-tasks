#include<iostream>
using namespace std;
void sortletters(char arr[],int size)
{
    char temp;
    for(int i=0; i<size-1;i++)
    {
        for(int j=0; j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    char letters[5];
    cout<<"Enter 5 letters: ";
    for(int i=0; i<5; i++)
    {
        cin>>letters[i];
    }
    sortletters(letters,5);
    cout<<"sorted letters : ";
    for(int i=0;i<5;i++)
    {
        cout<<letters[i]<<" ";
    }
    return 0;
}