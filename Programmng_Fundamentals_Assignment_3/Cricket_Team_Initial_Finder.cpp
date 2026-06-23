#include<iostream>
using namespace std;

    bool searchPlayer(char arr[], int size,char target)
    {
        for (int i=0;i<size; i++)
        
            {
                if ( arr [i] == target)
                {
                    return true;
                }
            }
            return false;

                }
    int main()
    {
        char team[11]={'b','r','s','f','h','a','m','n','k','z','u'};
        char target;
        cout<<"Enter player initial: ";
        cin>>target;
        bool found = searchPlayer(team, 11, target);
    if (found == true)
{
    cout<<"Player is in the team";

}
else
{
    cout<<"Player not found";
}
return 0;
    }
        