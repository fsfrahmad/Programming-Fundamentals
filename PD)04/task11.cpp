#include <iostream>
using namespace std;
main(){
	int Speed;
	cout << "Enter the car speed: ";
	cin >> Speed;
	if( Speed > 100){
		cout << "Halt....YOU WILL BE CHALLENGED!!!";
	}
	if( Speed <= 100){
		cout << "Perfect! You're going good";
	}
}
