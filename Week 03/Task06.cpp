#include <iostream>
using namespace std;
main(){
string name;
float matric;
float inter;
float ecat;
float aggregate;
cout << "Enter your name: ";
cin >> name;
cout << "Enter your matric marks: ";
cin >> matric;
cout << "Enter your inter marks: ";
cin >> inter;
cout << "Enter your ECAT marks: ";
cin >> ecat;
aggregate = (inter/550 * 50) + (matric/1100 * 40) +(ecat/400 * 10);
cout << "Your aggregate is " << aggregate;
}
