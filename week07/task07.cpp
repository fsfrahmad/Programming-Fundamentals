#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter the age of Lilly: ";
    cin >> age;

    float priceWashingMachine;
    float priceToy;

    cout << "Enter the price of Washing Machine: ";
    cin >> priceWashingMachine;
    cout << "Enter the unit price of toys: ";
    cin >> priceToy;

    float amount = 0;
    int x;
    int gift = 10;
    int toy = 0;

    for(x = 1; x <= age; x++)
    {
        if(x % 2 == 0)
        {
            amount = amount + gift;
            gift = gift + 10;
            amount = amount - 1;
        }
        else if(x % 2 != 0)
        {
            toy = toy + 1;
        }
    }
    amount = amount + (priceToy * toy);
    if(amount > priceWashingMachine)
    {
        cout << "Yes!" << endl << amount - priceWashingMachine;
    }
    else
    {
        cout << "No!" << endl << priceWashingMachine - amount;
    }
}
