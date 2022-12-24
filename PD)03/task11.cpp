 #include <iostream>
using namespace std;
main(){
int num1;
int position1;
int position2;
int position3;
int position4;
cout << "Enter Number: " ;
cin >> num1;
position4 = num1 % 10;
num1 =num1/10;

position3 = num1 % 10;
num1 =num1/10;
position2 = num1 % 10;
position1 = num1 / 10;
int num2;
int position1a;
int position2a;
int position3a;
int position4a;
int result1 ;
int result2 ;
cout << "Enter Number: " ;
cin >> num2;
position4a = num2 % 10;
num2 =num2/10;

position3a = num2 % 10;
num2 =num2/10;
position2a = num2 % 10;
position1a = num2 / 10;
result1 = position1 + position3 + position1a + position3a;
result2 = position2 * position4 * position2a * position4a; 
cout << "Result 1 is " << result1;
cout << "Result 2 is " << result2;
}
