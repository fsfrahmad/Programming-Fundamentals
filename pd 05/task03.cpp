#include <iostream>
#include <windows.h>

using namespace std;

float calculateTax(char,int);

int main(){
    int itemPrice;
    char vehicleCode;
    cout << "Enter the item price: ";
    cin >> itemPrice ;
    cout << "Enter the vehicle code: ";
    cin >> vehicleCode;
    float taxAmount = calculateTax(vehicleCode,itemPrice);
    itemPrice = itemPrice + taxAmount;
    cout << "The final amount of the vehicle is: " << itemPrice ;
}
float calculateTax(char vehicleCode,int itemPrice){
    if(vehicleCode == 'M'){
        return (itemPrice * 6)/100;
    }
    if(vehicleCode == 'E'){
        return (itemPrice * 8)/100;
    }
    if(vehicleCode == 'S'){
        return (itemPrice * 10)/100;
    }
    if(vehicleCode == 'V'){
        return (itemPrice * 12)/100;
    }
    if(vehicleCode == 'T'){
        return (itemPrice * 15)/100;
    }
}