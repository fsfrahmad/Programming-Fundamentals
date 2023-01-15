#include <iostream>

using namespace std;

float discount(string day, string month, float amount);

main()
{
    float amount, payable;
    string day, month;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    
    payable = discount(day, month, amount);

    cout << "Total payable amount is : " << payable;

}
float discount(string day, string month, float amount){
    if(day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {        
            return amount - (amount * 10) / 100;
    }
    else 
    {
        return amount;
    }
}