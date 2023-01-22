#include <iostream>

using namespace std;

int main()
{
    int number;
    int x;
    int count = 0;
    cout << "Enter a number: ";
    cin >> number;
    while (number != 0)
    {
        number = number / 10;
        count = count + 1;
    }
    cout << "No of digits: " << count;
}