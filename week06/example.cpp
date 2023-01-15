#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int price;
    string brand;
    cout << "Enter the price of the suit: ";
    cin >> price;
    cout << "Enter the brand of the suit: ";
    cin >> brand;
    if (price <= 1500 && brand == "breakout")
    {
        cout << "buy the dress !" << endl;
    }
}