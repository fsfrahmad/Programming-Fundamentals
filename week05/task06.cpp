#include <iostream>
#include <windows.h>

using namespace std;

string caseCheck(char);

int main(){
	system("cls");
	
	char character;
	cout << "Enter capital A or lowercase A: ";
	cin >> character;
	
	string check = caseCheck(character);
	
	if(check == "true"){
		cout << "You Entered uppercase A. " << endl;
	}

	if(check == "false"){
		cout << "You Entered Lowercase A. " << endl;
	}
}
string caseCheck(char character){
	if(character == 'A'){
		return "true";
	}
	if(character == 'a'){
		return "false";
	}
}
	
	

	