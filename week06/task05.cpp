#include <iostream>
#include <windows.h>

using namespace std;

string checkTitle(int age,char gender);

main(){
    int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender: ";
    cin >> gender;

    string title = checkTitle(age, gender);
    cout << "Your personal title is : " << title;

}
string checkTitle(int age,char gender){
    if(age >= 16 && gender == 'm')
    {
        return "Mr.";
    }
    if(age < 16 && gender == 'm')
    {
        return "Master";
    }
    if(age >= 16 && gender == 'f')
    {
        return "Ms.";
    }
    if(age < 16 && gender == 'f')
    {
        return "Miss";
    }
}