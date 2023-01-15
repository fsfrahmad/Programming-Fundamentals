#include <iostream>
#include <windows.h>

using namespace std;

int multiply5(int number);

int main(){
	system("cls");
	int number;
	int result;
	cout << "Enter the number:";
	cin >> number;

	result = multiply5(number);

	cout << "The product of number with 5 is: " << result << endl;
}
int multiply5(int number){
	return number * 5;
}