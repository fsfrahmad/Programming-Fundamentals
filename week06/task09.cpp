#include <iostream>

using namespace std;

float lowest(float, string);

main()
{
    float kilometers;
    string time;
    cout << "Enter the number of kilometres that the student has to travel: ";
    cin >> kilometers;
    cout << "Enter the time of day: ";
    cin >> time;
    
    cout << "The lowest price for given number of kilometers and the time of day is: " << lowest(kilometers, time) << " EUR" ;
}
float lowest(float kilometers , string time)
{
    float fare;

    if(kilometers >= 20 && kilometers <= 100)
    {
        if(time == "day")
        {
            fare = 0.09 * kilometers;
        }  
        else if(time == "night")
        {
            fare = 0.09 * kilometers;
        }
    }
    else if(kilometers >= 100)
    {
        if(time == "day")
        {
            fare = 0.06 * kilometers;
        }  
        else if(time == "night")
        {
            fare = 0.06 * kilometers;
        }
    }
    else if(kilometers < 20)
    {
        if(time == "day")
        {
            fare = (0.79 * kilometers) + 0.70;
        }  
        else if(time == "night")
        {
            fare = (0.90 * kilometers) + 0.70;
        }
    }
    return fare;
}