#include <iostream>
using namespace std;

void add(int number1,int number2);
void subtract(int number1,int number2);
void multiply(int number1,int number2);
void divide(int number1,int number2);

main(){
	while(true){
	int number1;
	int number2;
	char operation;
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;
	cout << "Enter operation symbol (+ , -, / , *): ";
	cin >> operation;
	if(operation == '+'){
		add(number1,number2);
	}
	if(operation == '-'){
		subtract(number1,number2);
	}
	if(operation == '*'){
		multiply(number1,number2);

	}
	if(operation == '/'){
		divide(number1,number2);
	}
	}
}
void add(int number1,int number2){
	int sum = number1 + number2;
	cout << "Sum is " << sum << endl;
}
void subtract(int number1,int number2){
	int sub = number1 - number2;
	cout << "Difference is " << sub << endl;
}
void multiply(int number1,int number2){
	int mul = number1 * number2;
                cout << "Product is " << mul << endl;
}
void divide(int number1,int number2){
	int division = number1 / number2;
	cout << "Division is " << division << endl;
}
