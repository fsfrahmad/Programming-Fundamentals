#include <iostream>
#include <windows.h>

using namespace std;

double volume(float,float,float);

int main(){
    float length;
    float width;
    float hieght;

    cout << "Enter length in metres: ";
    cin >> length;
    cout << "Enter width in metres: ";
    cin >> width;
    cout << "Enter hieght in metres: ";
    cin >> hieght;
    string unit1;
    cout << "Enter unit in which you want to volume: ";
    cin >> unit1;

   double result = volume(length,width,hieght);
if (unit1 == "metre"){
    cout << "The volume of pyramid is: " << result << " cubic metre" << endl;
}
if(unit1 == "kilometre"){
    cout << "The volume of pyramid is: " << result / (1000 * 1000 * 1000) << " kilometre cube." << endl;
}
if(unit1 == "centimetre"){
    cout << "The volume of pyramid is: " << result * 100 * 100 * 100 << " centimetre cube." << endl;
}
if(unit1 == "millimeter"){
    cout << "The volume of pyramid is: " << result * 1000 * 1000 * 1000 << " millimetre cube." << endl;
}

}
double volume(float length,float width,float hieght){
    return (length * width * hieght) / 3;
}