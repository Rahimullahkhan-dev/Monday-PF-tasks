#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main()
{
    ifstream inFile("students.txt");
    ofstream tempFile("temp.txt");

    if (!inFile.is_open())
    {
        cout << "File not found.";
        return 0;
    }

    int searchRoll;
    cout << "Enter Roll No to Update: ";
    cin >> searchRoll;

    int rollNo;
    string name;
    float marks;
    float newMarks;

    bool found = false;

    while (inFile >> rollNo >> name >> marks)
    {
        if (rollNo == searchRoll)
        {
            cout << "Enter New Marks: ";
            cin >> newMarks;

            tempFile << rollNo << " " << name << " " << newMarks << endl;

            found = true;
        }
        else
        {
            tempFile << rollNo << " " << name << " " << marks << endl;
        }
    }

    inFile.close();
    tempFile.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found)
        cout << "Record Updated Successfully.";
    else
        cout << "Roll No not Found.";

    return 0;
}