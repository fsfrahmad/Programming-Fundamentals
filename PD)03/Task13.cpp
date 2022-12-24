#include <iostream>
using namespace std;
main(){
float average;
float subject1;
float subject2;
float subject3;
float total;
cout << "Enter your marks in first subject: " ;
cin >> subject1;
cout << "Enter your marks in second subject: " ;
cin >> subject2;
cout << "Enter your marks in third subject: " ;
cin >> subject3;
cout << "Enter total marks: ";
cin >> total;
average = total / 3;
cout << "Your average is " << average;
}