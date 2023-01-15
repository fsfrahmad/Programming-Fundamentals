#include <iostream>
#include <cmath>

using namespace std;

main()
{
    string year;
    int holidays;
    int weekends;

    cout << "Enter whether the year is leap or normal: ";
    cin >> year;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    cout << "Enter the number of weekends: ";
    cin >> weekends;
    float total = (holidays * 2.0/3) + weekends + ((48-weekends) * 3.0/4);
    if(year == "leap")
    {
        total = total + (total * 15.0) / 100;
    }
    cout << "Vladamir has played soccer " << floor(total) << " times a year."; 

}