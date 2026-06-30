#include <iostream>
using namespace std;

int main()
{
    int R, C;

    cout<<"Enter Rows: ";
    cin>>R;

    cout<<"Enter Columns: ";
    cin>>C;

    int arr[R][C];

    cout<<"Enter Roll Numbers:"<<endl;

    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Seating Chart:"<<endl;

    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}