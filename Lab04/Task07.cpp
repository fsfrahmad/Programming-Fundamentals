#include <iostream>
using namespace std;
void checkIsEven(int);
main(){
	while(true){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	checkIsEven(number);
	}
}
void checkIsEven(int number){
		if(number % 2 == 0){
		cout << "The number is Even " << endl;
	}
	if(number % 2 != 0){
		cout << "The number is odd  " << endl;
	}
}