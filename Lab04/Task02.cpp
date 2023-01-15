#include <iostream>
using namespace std;

void add(int number1,int number2);

main(){
int number1;
int number2;
int sum;

cout << " Enter first number: ";
cin >> number1;
cout << " Enter second number: ";
cin >> number2;

add(number1,number2);

cout << " Enter first number: ";
cin >> number1;
cout << " Enter second number: ";
cin >> number2;

add(number1,number2);

}

void add(int number1,int number2){
  int sum = number1 + number2;
  cout << " Sum is " << sum << endl;
} 
