
#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	system("cls");
	float volume;
	float p1;
	float p2;
	float hours;

	cout << "Enter the volume of the pool in litres: ";
	cin >> volume;
	cout << "Enter the flow rate of first pipe per hour: ";
	cin >> p1;
	cout << "Enter the flow rate of second pipe per hour: ";
	cin >> p2;
	cout << "Enter the hours that the worker is absent: ";
	cin >> hours;

	if(volume >= (p1 * hours) + (p2 * hours)){
		cout << "The pool is " << ((p1 * hours) + (p2 * hours)) / volume * 100 << "% Full. Pipe 1: " << (p1 / (p1 + p2)) * 100 << "%";
		cout << " Pipe 2: " << (p2 / (p1 + p2)) * 100 << "%" << endl;
	}

	if(volume < (p1 * hours) + (p2 * hours)){
		cout << "For " << hours << " the pool overflowed with " << ((p1 * hours) + (p2 * hours)) - volume << " litres. " << endl;

	}

}
	
	
