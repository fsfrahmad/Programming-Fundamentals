#include <iostream>
using namespace std;
int main(){
    int number1, number2, number3;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Enter third number: ";
    cin >> number3;
    if(number1 == number2 && number2 == number3 && number3 == number1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}