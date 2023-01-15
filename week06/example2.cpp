#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int Rollno;
    string name;
    cout << "Enter roll no: ";
    cin >> Rollno;
    cout << "Enter name: ";
    cin >> name;

    if (name == "Ali")
    {
        if(Rollno == 501){
            cout << "Congratulations";
        }
    }
}