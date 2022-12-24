#include <iostream>
using namespace std;
main(){
int x;
int a;
int b;
int c;
int sum;
cout << "Enter your digit number: ";
cin >> x;
a = x % 10 ;
x = x / 10;
b = x % 10;
x = x / 10;
c = x % 10;
x = x / 10;
sum = a + b + c + x;
cout << "Sum: " << sum;
}

