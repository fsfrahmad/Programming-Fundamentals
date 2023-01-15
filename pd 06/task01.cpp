#include <iostream>

using namespace std;

int main()
{
    string temprature, humidity;
    cout << "Enter Temprature: ";
    cin >> temprature;
    cout << "Enter Humidity: ";
    cin >> humidity;
    if(temprature == "warm")
    {
        if(humidity == "dry")
        {
            cout << "Play Tennis";
        }
        else if(humidity == "humid")
        {
            cout << "Swim";
        }
    }
    else if(temprature == "cold")
    {
        if(humidity == "dry")
        {
            cout << "Play Basket ball";
        }
        else if(humidity == "humid")
        {
            cout << "Watch TV";
        }
    }
}