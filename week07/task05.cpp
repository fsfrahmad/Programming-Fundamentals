#include <iostream>

using namespace std;

int digitSum(int number);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    int sum = digitSum(number);

    cout << "The digit sum = " << sum;
}
int digitSum(int number)
{
    int sum = 0;
    while(number != 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }
    return sum;
}