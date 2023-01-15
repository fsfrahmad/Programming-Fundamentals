#include <iostream>

using namespace std;

char calculateGrade(int marks);

main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    char result = calculateGrade(marks);

    cout << "Your grade is: " << result;
}
char calculateGrade(int marks)
{
    if(marks > 85)
        return 'A';
    else if(marks >= 81 && marks <= 85)
        return 'B';
    else if(marks >= 71 && marks <= 80)
        return 'C';
    else if(marks >= 61 && marks <= 70)
        return 'D';
    else if(marks >= 51 && marks <= 60)
        return 'E';
    else if(marks < 51)
        return 'F';
}