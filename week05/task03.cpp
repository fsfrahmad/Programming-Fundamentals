#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

bool IsSymmetrical(int number);

main(){     
	system("cls");
	int number;
	
	cout << "Enter a five digit number: ";
	cin >> number;
	
	bool a = IsSymmetrical(number);

	if(a = true){
		cout << number << " is symmetrical" << endl;
	}

	if(a = false){
		cout << number << " is not symmetrical" << endl;
	}
}

bool IsSymmetrical(int number){

	bool symmetry;
	
	int p5 = number % 10;
	number = number / 10;
	int p4 = number % 10;
	number = number / 10;
	int p3 = number % 10;
	number = number / 10;
	int p2 = number % 10;
	
	int p1 = number / 10;
if(p1 == p5){
	if(p2 == p4){
		 return true;
	}
	if(p2 != p4){
		 return false;
	}
}
if(p1 != p5){
	 return false;
}
}
