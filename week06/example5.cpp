#include <iostream>
#include <windows.h>

using namespace std;

string isEven(int number);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    string any = isEven(number);

    if(any == "even")
    {
        cout << "The number is even.";
    }
    if(any == "odd")
    {
        cout << "The number is odd.";

    }
}
string isEven(int number)
{
    if(number % 2 == 0)
    {
        return "even";
    }
    if(number % 2 != 0)
    {
        return "odd";
    }
}