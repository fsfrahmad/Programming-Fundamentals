#include <iostream>

using namespace std;

main()
{
    string room, month;
    int stays;
    float studioCost, apartmentCost;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stays;

        if(month == "May" || month == "October" ||month == "may" || month == "october")
        {
            studioCost = 50.00 * stays;
            apartmentCost = 65.00 * stays;
            apartmentCost = apartmentCost - (apartmentCost * 10.0) / 100;
            if(stays > 7 && stays < 14)
            {
                studioCost = studioCost - (studioCost * 5.0) / 100;
            }
            else if(stays > 14)
            {
                studioCost = studioCost - (studioCost * 30.0) / 100;
            }
        }
        else if(month == "June" || month == "September" ||month == "june" || month == "september")
        {
            studioCost = 75.20 * stays;
            apartmentCost = 68.70 * stays;
            apartmentCost = apartmentCost - (apartmentCost * 10.0) / 100;
            if(stays > 14)
            {
                studioCost = studioCost - (studioCost * 20.0) / 100;
            }
        }
        else if(month == "July" || month == "August" ||month == "july" || month == "august")
        {
            studioCost = 76.00 * stays;
            apartmentCost = 77.00 * stays;
            apartmentCost = apartmentCost - (apartmentCost * 10.0) / 100;
        }    
    cout << "Studio Cost: " << studioCost << endl;
    cout << "Apartment Cost: " << apartmentCost << endl;
}

