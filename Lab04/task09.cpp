#include <iostream>
using namespace std;
void isEven(int);
main(){
int number;
while(true){
cout << "Enter your number: ";
cin >> number;
isEven(number);
}
}
void isEven(int number){
	if(number % 2 == 0){
		cout << "The number is Even" << endl;
	}
	if(number % 2 != 0){
		cout << "The number is Odd" << endl;
	}
}	
