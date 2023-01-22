#include <iostream>

using namespace std;

int main()
{
    int age = 18;
    int year;
    float money;
    float amount = 0;

    cout << "Enter the amount of inheritence that Ivay is left with: ";
    cin >> money;
    cout << "Enter the year upto which he wants to live in past: ";
    cin >> year;

    for (int x = 1800; x <= year; x++)
    {
        if (x % 2 == 0)
        {
            amount = amount + 12000;
        }
        else if (x % 2 != 0)
        {
            amount = amount + 12000 + (50 * (age + (x - 1800)));
        }
    }
    if (amount <= money)
    {
        cout << "Yes! You will live care free and have " << money - amount << " dollars left. " << endl;
    }
    else if (amount > money)
    {
        cout << "He will need " << amount - money << " dollars to survive. " << endl;
    }
}
