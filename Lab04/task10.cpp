#include <iostream>
using namespace std;
void greater1(int ,int );
void smaller(int ,int );
void isEqual(int ,int );
main(){
int number1, number2,choice;
while(true){
cout << " Enter first number: ";
cin >> number1;
cout << " Enter second number: ";
cin >> number2;
cout << " Enter choice( 1 - 3 ): ";
cin >> choice;
if(choice == 1){
	greater1(number1,number2);
}
if(choice == 2){
	smaller(number1,number2);
}
if(choice == 3){
isEqual(number1,number2);
}
}
}
void greater1(int number1,int number2){
	if(number1 > number2){
		cout << " " << number1 << " is greater than " << number2 << endl;
	} 
	if(number2 > number1){
		cout << " " << number2 << " is greater than " << number1 << endl;
	} 
}
void smaller(int number1,int number2){
	if(number1 < number2){
		cout << " " << number1 << " is smaller than " << number2 << endl;
	} 
	if(number2 < number1){
		cout << " " << number2 << " is smaller than " << number1 << endl;
	} 

}
void isEqual(int number1,int number2){
	if(number1 == number2){
		cout << " " << number1 << " is Equal than " << number2 << endl;
	} 
}
