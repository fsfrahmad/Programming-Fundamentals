#include <iostream>

using namespace std;

int GCD(int  number1, int number2);
int LCM(int  number1, int number2);

int main()
{
    int number1;
    int number2;

    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    cout << "GCD is: " << GCD(number1, number2) << endl;
    cout << "LCM is: " << LCM(number1, number2) << endl;
}
int GCD(int  number1, int number2)
{
    int gcd = 1;
    for(int number = 2;number <= number1 && number <= number2; number++ )
    {
        if(number1 % number == 0 && number2 % number == 0)
        {
            gcd = number;
        }
    }
    return gcd;
}
int LCM(int  number1, int number2)
{
    int lcm = (number1 * number2)/ GCD(number1, number2);
    return lcm; 
}