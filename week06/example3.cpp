#include <iostream>

using namespace std;

int Maximum(int, int, int);

main(){
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
    if(number1 > number2)
    {
        if(number1 > number3)
        {
            return number1;
        }
        else
        {
            return number3;
        }
    }
    else
    {
        if(number2 > number3)
        {
            return number2;
        }
        else
        {
            return number3;
        }
    }
}