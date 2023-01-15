#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
main(){     
	float root1;
	float root2;
	float a;
	float b;
	float c;
	float disc;
	system("cls");
	cout << "Enter the coefficient of x^2: ";
	cin >> a;
	cout << "Enter the coefficient of x: ";
	cin >> b;
	cout << "Enter the constant term: ";
	cin >> c;
	disc = ( b * b ) - 4 * a * c;
	if(disc >= 0 ){
		root1 = ( - b + sqrt(disc)  )/ ( 2 * a );
		root2 = ( - b - sqrt(disc)  ) / ( 2 * a );
		cout << "The roots of the quadratic equation \" " << a << "x^2 + " << b << "x + " << c << " \" are " << root1 << " and " << root2 << endl;
		}
	if(disc < 0 ){
		cout << "The roots of the quadratic equation \" " << a << "x^2 + " << b << "x + " << c << " \" are ( -" << b << " + ("<< disc << ")^1/2 ) / "<< 2 * a <<  " and ( -" << b << " - ("<< disc << ")^1/2 ) / "<< 2 * a << endl;
		}

}
	

