#include<iostream>
using namespace std;
int countVowels(char word[])
{
    int count = 0;
    for(int i = 0; word[i] != '\0';i++)
    {
        if (word[i]=='a' || word [i]=='e' ||word[i]=='i' || word [i]=='o' ||word[i]=='u')
 {
    count++;
 }
    }
    return count;

}
int main()
{
    char word[100];
    cout<<"Enter a word: ";
    cin>>word;
    int vowels =countVowels(word);
    cout<<"Total vowels: "<<vowels;
    return 0;
}