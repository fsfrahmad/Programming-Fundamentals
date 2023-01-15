#include <iostream>
using namespace std;
void calculateBill(string day,int amount);
main(){
	int totalPurchaseAmount;
	string day;
	cout << "Enter the day: " ;
	cin >> day;
	cout << "Enter total purchase amount: ";
	cin >> totalPurchaseAmount;
	calculateBill(day,totalPurchaseAmount);
}
void calculateBill(string day,int amount){
		if( day == "sunday" ){
		int payableAmount;
		payableAmount = amount - (amount * 10 / 100 );
		cout << "Payable amount: " << payableAmount << endl;
		}
		if( day != "sunday" ){
		cout << "Payable amount: " << amount << endl;
		}
}