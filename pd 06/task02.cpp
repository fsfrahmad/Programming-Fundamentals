#include <iostream>

using namespace std;

int main()
{
    float subject1, subject2, subject3, subject4, subject5;
    string name;
    cout << "Enter the Name of student: ";
    cin >> name;
    cout << "Enter the marks of first subject: ";
    cin >> subject1;
    cout << "Enter the marks of second subject: ";
    cin >> subject2;
    cout << "Enter the marks of third subject: ";
    cin >> subject3;
    cout << "Enter the marks of fourth subject: ";
    cin >> subject4;
    cout << "Enter the marks of fifth subject: ";
    cin >> subject5;

    float totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    float percentage = (totalMarks / 500) * 100;
    string grade;

    if(percentage > 90 && percentage <= 100)
        grade = "A+";
    else if(percentage > 80  && percentage <= 90 )
        grade = "A";
    else if(percentage > 70  && percentage <= 80 )
        grade = "B+";
    else if(percentage > 60  && percentage <= 70)
        grade = "B";
    else if(percentage > 50  && percentage <= 60)
        grade = "C";
    else if(percentage > 40 && percentage <= 50 )
        grade = "D";
    else if(percentage < 40)
        grade = "F";
    
    cout << "The name of student is: " << name << endl;
    cout << "The total marks of student are: " << totalMarks << endl;
    cout << "The percentage of student is: " << percentage << endl;
    cout << "The grade of student is: " << grade << endl;
}