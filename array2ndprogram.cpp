#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 3;
    string names[SIZE]; 

    cout << "Please Enter " << SIZE << " full names:" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "Name " << i + 1 << ": "; 
        getline(cin, names[i]);
    }

    cout << "\n--- Output List ---" << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << "Full name: " << names[i];
        cout << " (Length: " << names[i].length() << ")" << endl; 
    }
    return 0;
}