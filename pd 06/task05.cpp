#include <iostream>

using namespace std;

int main()
{
    string fruit;
    string weekday;
    float quantity;
    float cost;

    cout << "Enter the Name of Fruit: ";
    cin >> fruit;
    cout << "Enter the weekday: ";
    cin >> weekday;
    cout << "Enter quantity: ";
    cin >> quantity;

    if(weekday == "Monday" || weekday == "Tuesday" || weekday == "Wednesday" || weekday == "Thursday" || weekday == "Friday" || weekday == "monday" || weekday == "tuesday" || weekday == "wednesday" || weekday == "thursday" || weekday == "friday")
    {
        if(fruit == "banana")
        {
            cost = 2.50 * quantity;
        }
        else if(fruit == "apple")
        {
            cost = 1.20 * quantity;
        }
        else if(fruit == "orange")
        {
            cost = 0.85 * quantity;
        }
        else if(fruit == "grapefruit")
        {
            cost = 1.45 * quantity;
        }
        else if(fruit == "kiwi")
        {
            cost = 2.70 * quantity;
        }
        else if(fruit == "pineapple")
        {
            cost = 5.50 * quantity;
        }
        else if(fruit == "grapes")
        {
            cost = 3.85 * quantity;
        }
        else
        {
           cout << "Invalid Fruit Name!"; 
        }

    }
    else if(weekday == "Sunday" || weekday == "sunday" || weekday == "Saturday" || weekday == "saturday")
    {
        if(fruit == "banana")
        {
            cost = 2.70 * quantity;
        }
        else if(fruit == "apple")
        {
            cost = 1.25 * quantity;
        }
        else if(fruit == "orange")
        {
            cost = 0.90 * quantity;
        }
        else if(fruit == "grapefruit")
        {
            cost = 1.60 * quantity;
        }
        else if(fruit == "kiwi")
        {
            cost = 3.00 * quantity;
        }
        else if(fruit == "pineapple")
        {
            cost = 5.60 * quantity;
        }
        else if(fruit == "grapes")
        {
            cost = 4.20 * quantity;
        }
        else
        {
           cout << "Invalid Fruit Name!"; 
        }

    }
    else 
    {
        cout << "Enter valid weekday!";
    }
    cout << "Cost is: " << cost;
}