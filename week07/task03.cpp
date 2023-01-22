#include <iostream>

using namespace std;

int frequencyChecker(int number, int digit);

int main()
{
    int number;
    int digit;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digit;

    int result = frequencyChecker(number, digit);
    
    cout << "No. of digits = "<< result;
}
int frequencyChecker(int number, int digit)
{
    int count = 0;
    while(number != 0)
    {
        if(number % 10 == digit)
        {
            count = count + 1;
        }
        number = number / 10;
    }
    return count;
}