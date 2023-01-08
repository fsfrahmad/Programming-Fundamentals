#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    float hoursRequired;
    float days;
    float workers;
    
    cout << "Enter the hours required to complete the firm : ";
    cin >> hoursRequired;
    cout << "Enter the number of days: ";
    cin >> days;    
    cout << "Enter the number of workers : ";
    cin >> workers;

    float hours = (workers * 10) * (days -(days * (10.0/100.0)));
    if(hours > hoursRequired){
        cout << "Yes! "<< hours - hoursRequired << " hours left." << endl;
    }
    if(hours < hoursRequired){
        cout << "Not enough time "<< hoursRequired - hours << " hours needed." << endl;
    }
    }