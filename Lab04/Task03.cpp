#include <iostream>
using namespace std;

void result(int);
main(){
	int marks;
	cout << " Enter your marks: ";
	cin >> marks;
	result(marks);	
}
void result(int marks){

	if(marks >= 50){
		cout << " PASS ";
	}
	if(marks < 50){
		cout << " FAIL";
	}
}