#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

string isEvenish(int number);

main(){     
	system("cls");
	int number;
	
	cout << "Enter a five digit number: ";
	cin >> number;
	
	string a = isEvenish(number);

	if(a == "Evenish"){
		cout << number << " is Evenish" << endl;
	}

	if(a == "Oddish"){
		cout << number << " is Oddish" << endl;
	}
}
string isEvenish(int number){
	
	int p5 = number % 10;
	number = number / 10;
	int p4 = number % 10;
	number = number / 10;
	int p3 = number % 10;
	number = number / 10;
	int p2 = number % 10;
	
	int p1 = number / 10;

	int sum = p1 + p2 + p3 + p4 + p5;

	if(sum % 2 == 0){
		return "Evenish";
	}

	if(sum % 2 != 0){
		return "Oddish";
	}
}