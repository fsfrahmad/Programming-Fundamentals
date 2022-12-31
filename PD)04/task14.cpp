#include <iostream>
using namespace std;
void printMenu();
void calculateAggregate();
void Choice(int);
main(){
	printMenu();
			}
void printMenu(){

	int choice;
	cout << "*******************************"<< endl;
	cout << "*         Uet LAhore          *"<< endl;
	cout << "*******************************"<< endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Welcome to University Admission Management System";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Enter 1 to Enter details of First Student. " << endl ;
	cout << "Enter 2 to Enter details of Second Student. " << endl  ;
	cout << "Enter 3 to Calculate aggregate of First Student. " << endl  ;
	cout << "Enter 4 to Calculate aggregate of  Second Student. " << endl ;
	cout << "Enter 5 to display student with roll no 01." << endl ;
	cout << "Enter choice: ";
	cin >> choice;
	Choice(choice);

}

void Choice(int choice){
	string name;
	float matric;
	float inter;
	float ecat;
	char ch;

if (choice == 1){
		
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your matric marks: ";
		cin >> matric;
		cout << "Enter your inter marks: ";
		cin >> inter;
		cout << "Enter your ECAT marks: ";
		cin >> ecat;
		cout << "Press any key to Continue: ";
		cin >> ch;
		printMenu();

}

if (choice == 2){
	
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your matric marks: ";
		cin >> matric;
		cout << "Enter your inter marks: ";
		cin >> inter;
		cout << "Enter your ECAT marks: ";
		cin >> ecat;
		cout << "Press any key to Continue: ";
		cin >> ch;	
		printMenu();
}

if (choice == 3){
		
		calculateAggregate();

}
if (choice == 4){
		
		calculateAggregate();

}
if (choice == 5){
		
		int ecat1;
		int ecat2;
		cout << "Enter ECAT marks of student 1: ";
		cin >> ecat1;
		cout << "Enter ECAT marks of student 2: ";
		cin >> ecat2;
		if(ecat1 > ecat2){
			cout << "Student 1 has roll number 1" << endl;
		}
		if(ecat1 < ecat2){
			cout << "Student 2 has roll number 1" << endl;
		}
		cout << "Press any key to Continue: ";
		cin >> ch;
		printMenu();

}}
void calculateAggregate(){
	string name;
	float matric;
	float inter;
	float ecat;
	char ch;

		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your matric marks: ";
		cin >> matric;
		cout << "Enter your inter marks: ";
		cin >> inter;
		cout << "Enter your ECAT marks: ";
		cin >> ecat;
		cout << "Press any key to Continue: ";
		cin >> ch;
		int aggregate = (inter/550 * 50) + (matric/1100 * 40) +(ecat/400 * 10);
                cout << "Your aggregate is " << aggregate << endl;
                printMenu();
}