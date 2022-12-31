#include <iostream>
using namespace std;
void IsEqual(int , int);
main(){
	int number1;
	int number2;
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;
	IsEqual(number1,number2);
}
void IsEqual(int n1, int n2){
	if(n1 == n2){
		cout << "True";
	}
	if(n1 != n2){
		cout << "False";
	}
}
