#include <iostream>
using namespace std;
int main()
{
    string going, lecture;
    cout << "Do you have a class today(Press Y for yes): ";
    cin >> going;
    cout << "Are your friends going(Press Y for yes): ";
    cin >> lecture;

    if(going == "y" && lecture == "y")
    {
        cout << "You are also going.";
    }
}