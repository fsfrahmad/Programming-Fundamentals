#include <iostream>
using namespace std;
int main()
{
    int cargo;
    int numberOfCargo;
    cout << "Enter the number of cargo: ";
    cin >> numberOfCargo;
    float count = 1;
    float amount1 = 0, amount2 = 0, amount3 = 0;
    float minibus = 0;
    float truck = 0;
    float train = 0;
    float total = 0;
    while (count <= numberOfCargo)
    {
        cout << "Enter the weight of cargo " << count << " : ";
        cin >> cargo;
        if (cargo > 0 && cargo <= 3)
        {
            amount1 = amount1 + (200 * cargo);
            minibus = minibus + cargo;
        }
        else if (cargo > 3 && cargo <= 11)
        {
            amount2 = amount2 + (175 * cargo);
            truck = truck + cargo;
        }
        else if (cargo > 11)
        {
            amount3 = amount3 + (120 * cargo);
            train = train + cargo;
        }
        total = total + cargo;
        count++;
    }
    float percentage1 = (minibus / total) * 100;
    float percentage2 = (truck / total) * 100;
    float percentage3 = (train / total) * 100;
    float average = (amount1 + amount2 + amount3) / total;
    cout << endl;
    cout << "The average price per ton of cargo: " << average << endl;
    cout << "Percentage of cargo carried by minibus: " << percentage1 << endl;
    cout << "Percentage of cargo carried by truck: " << percentage2 << endl;
    cout << "Percentage of cargo carried by train: " << percentage3 << endl;
}
