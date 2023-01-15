#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

float calculateHieght(float,float);

main(){
	float angle;
	float base;
	system("cls");
	
	cout << "Enter angle in degrees: ";
	cin >> angle;

	cout << "Enter length of base: ";
	cin >> base;

	float hieght = calculateHieght(angle,base);

	cout << "Hieght is: " << hieght << endl;

}

float calculateHieght(float angle,float base){

	angle = angle * 0.01745329252;
	
	float hieght = tan(angle) * base;

	return hieght;
}