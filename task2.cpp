#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile("students.txt");

    if (!inFile.is_open())
    {
        cout << "File not found.";
        return 0;
    }

    int rollNo;
    string name;
    float marks;
    int count = 0;

    cout << "------------------------------------" << endl;
    cout << "Roll No\tName\tMarks" << endl;
    cout << "------------------------------------" << endl;

    while (inFile >> rollNo >> name >> marks)
    {
        cout << rollNo << "\t" << name << "\t" << marks << endl;
        count++;
    }

    inFile.close();

    cout << "------------------------------------" << endl;
    cout << "Total Records = " << count;

    return 0;
}