#include <iostream>
using namespace std;

float checkCost(string product, string city, int quantity);

main()
{
    int quantity;
    string product, city;
    cout << "Enter city: ";
    cin >> city;
    cout << "Enter product: ";
    cin >> product;
    cout << "Enter quantity: ";
    cin >> quantity;
    float cost = checkCost(product, city, quantity);

    cout << "The cost is: " << cost << endl;
}
float checkCost(string product, string city, int quantity)
{
    if( city == "Sofia" || city == "sofia")
    {
        if(product == "coffee")
        {
            return 0.50 * quantity;
        }
        else if(product == "water")
        {
            return 0.80 * quantity;
        }
        else if(product == "beer"){
            return 1.20 * quantity;
        }
        else if(product == "sweets"){
            return 1.45 * quantity;
        }
        else if(product == "peanuts"){
            return 1.60 * quantity;
        }
    }
    if( city == "Plovdiv" || city == "plovdiv")
    {
        if(product == "coffee")
        {
            return 0.40 * quantity;
        }
        else if(product == "water")
        {
            return 0.70 * quantity;
        }
        else if(product == "beer"){
            return 1.15 * quantity;
        }
        else if(product == "sweets"){
            return 1.30 * quantity;
        }
        else if(product == "peanuts"){
            return 1.50 * quantity;
        }
    }
    if( city == "Varna" || city == "varna")
    {
        if(product == "coffee")
        {
            return 0.45 * quantity;
        }
        else if(product == "water")
        {
            return 0.70 * quantity;
        }
        else if(product == "beer"){
            return 1.10 * quantity;
        }
        else if(product == "sweets"){
            return 1.35 * quantity;
        }
        else if(product == "peanuts"){
            return 1.55 * quantity;
        }
    }
}