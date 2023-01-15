#include <iostream>

using namespace std;

int main()
{
    float budget;
    float remainingbudget;
    int passengers;
    string catogory;
    float expense;

    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the no of passengers: ";
    cin >> passengers;
    cout << "Enter the category of ticket you want to purchase: ";
    cin >> catogory;

 
if(passengers > 0 && passengers <= 4)
{
    remainingbudget = budget - (budget * 75) / 100;
}
else if(passengers > 4 && passengers <= 9) 
{
    remainingbudget = budget - (budget * 60) / 100;
}
else if(passengers > 9 && passengers <= 24)
{
    remainingbudget = budget - (budget * 50) / 100;
}
else if(passengers > 24 && passengers <= 49)
{
    remainingbudget = budget - (budget * 40) / 100;
}
else if(passengers > 50)
{
    remainingbudget = budget - (budget * 25) / 100;
}

if(catogory == "VIP" || catogory == "vip")
{
    expense = 499.99 * passengers;
}
else if(catogory == "Normal" || catogory == "normal")
{
    expense = 249.99 * passengers;
}

if(expense > remainingbudget)
{
    cout << "Not Enough Money! You need " << expense - remainingbudget << " QR.";
}
else if(expense < remainingbudget)
{
    cout << "Yes! you have " <<remainingbudget - expense << " QR left.";
}
}
