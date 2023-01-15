#include <iostream>
#include <windows.h>

using namespace std;

int Maximum(int, int, int);

main()
{
    int number1;
    int number2;
    int number3;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Enter third number: ";
    cin >> number3;

    int largest = Maximum(number1, number2, number3);
    cout << "Largest number is: " << largest;    
}
int Maximum(int number1, int number2, int number3)
{
    if(number1 > number2 && number1 > number3)
    {
            return number1;
    }
    if(number2 > number1 && number2 > number3)
    {
        return number2;
    }
    if(number3 > number1 && number3 > number2)
    {
        return number2;
    }
}