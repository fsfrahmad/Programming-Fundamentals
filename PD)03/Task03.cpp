#include <iostream>
using namespace std;
main(){
float initialVelocity;
float time;
float acceleration;
float finalVelocity;
cout << "Enter Initial velocity: ";
cin >> initialVelocity;
cout << "Enter acceleration: ";
cin >> acceleration;
cout << "Enter Time: ";
cin >> time;
finalVelocity = (acceleration * time) + initialVelocity;
cout << "Final velocity of car is " << finalVelocity;
}