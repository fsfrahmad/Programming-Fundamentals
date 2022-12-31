#include <iostream>
using namespace std;
void calculateAggregate(string,int,int,int);
void printMenu();
void Choice(int);
main(){
string name;
float matric;
float inter;
float ecat;
char ch;

printMenu();


}



void calculateAggregate(string name,int matric ,int inter,int ecat){
	float aggregate;

	aggregate = (inter/550 * 30) + (matric/1100 * 30) +(ecat/400 * 40);
	cout << "Your aggregate is " << aggregate << endl;
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
	
cout << "Enter your name: ";
cin >> name;
cout << "Enter your matric marks: ";
cin >> matric;
cout << "Enter your inter marks: ";
cin >> inter;
cout << "Enter your ECAT marks: ";
cin >> ecat;cout << "Press any key to Continue: ";
cin >> ch;
printMenu();
calculateAggregate(name,matric,inter,ecat);
}}
calculateAggregate(name,matric,inter,ecat);
