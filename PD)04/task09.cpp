#include <iostream>
using namespace std;
void Reverse(string);
main(){
	string condition;
	cout << "Enter True or False: ";
	cin >> condition;
	Reverse(condition);
}
void Reverse(string condition){
	if(condition == "true"){
		cout << "False";
	}
	if(condition == "false"){
		cout << "True";
	}
}