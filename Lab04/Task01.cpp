#include <iostream>
using namespace std;

void display(int,string,float,char);

main(){

int marks;
string name;
float aggregate;
char section;
cout << " Enter your name:  ";
cin >> name;
cout << " Enter your marks: ";
cin >> marks;
cout << "Enter your aggregate: ";
cin >>aggregate;
cout << "Enter your section: ";
cin >>section;

display(marks,name,aggregate,section);

}
void display(int marks,string name,float aggregate,char section){

  cout << " Your name is      " << name << endl;
  cout << " Your marks are  " << marks << endl;
  cout << " Your aggregate is " << aggregate << endl;
  cout << " Your section is " << section << endl;
}
