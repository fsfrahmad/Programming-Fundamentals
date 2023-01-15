#include <iostream>
#include <windows.h>

using namespace std;

main(){
	system("cls");
	int hours,minutes;
	
	cout << "Enter time in hh mm format: ";
	cin >> hours >> minutes;

	minutes = minutes + 15;
	
	if (minutes >= 60){
		minutes = minutes - 60;
		hours = hours + 1;
	}
	if (hours >= 24){
		hours = hours - 24;
	}
	cout << "The output time is: " << hours << ":" << minutes;
}
	
	