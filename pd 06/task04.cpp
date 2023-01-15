#include <iostream>
using namespace std;
int main()
{
    char customer, time;
    float minutes;
    float charges;

    cout << "Enter which type of customer you are(Residential or Premium) select (r/p): ";
    cin >> customer;
    cout << "(Press 'D' for day time or 'N' for night time) call: ";
    cin >> time;
    cout << "Enter the number of minutes you used the service: ";
    cin >> minutes;

    if(customer == 'p' || customer == 'P')
    {
        if(time == 'd' || time == 'D')
        {
            if(minutes > 0 && minutes <= 75)
            {
                charges = 25.00;
            }
            else if(minutes > 75)
            {
                charges = 25.00 + ((minutes - 75) * 0.10);
            }
        }
        else if(time == 'n' || time == 'N')
        {
            if(minutes > 0 && minutes <= 100)
            {
                charges = 25.00;
            }
            else if(minutes > 100)
            {
                charges = 25.00 + ((minutes - 100) * 0.05);
            }
        }
    }
    else if(customer == 'r' || customer == 'R')
    {
        if(minutes > 0 && minutes <= 50)
        {
            charges = 10.00;
        }
        else if(minutes > 50)
        {
            charges = 10.00 + ((minutes - 50) * 0.20);
        }
    }

    cout << "The charges are: " << charges << "$";
}