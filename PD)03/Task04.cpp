#include <iostream>
using namespace std;
main(){
string name;
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float sum;
float percentage;
cout << "Enter your name: " ;
cin >> name;
cout << "Enter subject 1 marks: " ;
cin >> subject1;
cout << "Enter subject 2 marks: " ;
cin >> subject2;
cout << "Enter subject 3 marks: " ;
cin >> subject3;
cout << "Enter subject 4 marks: " ;
cin >> subject4;
cout << "Enter subject 5 marks: " ;
cin >> subject5;
sum = subject1 + subject2 + subject3 + subject4 + subject5;
percentage = (sum / 500) * 100;
cout << "Your Percentage: " << percentage;
}