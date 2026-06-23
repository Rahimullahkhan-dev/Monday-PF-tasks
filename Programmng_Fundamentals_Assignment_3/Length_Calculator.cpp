#include<iostream>
using namespace std;
 int calculatelength(char word[])
 {
    int count = 0;
    for (int i=0; word[i] !='\0'; i++)
    
      {
          count++;

    }
    return count;
 }
 int main()
 {
char word[100];
cout<<"Enter word: ";
 cin>>word;
int length = calculatelength(word);
cout<<"Length of the word is: "<<length;
return 0;
}