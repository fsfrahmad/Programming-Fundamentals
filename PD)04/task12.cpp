#include <iostream>
using namespace std;
main(){
	float redRosePrice;
	float whiteRosePrice;
	float TulipPrice;
	float noOfWhiteRose;
	float noOfRedRose;
	float noOfTulips;
	float totalPrice;
	
	cout << "Enter the number of red rose: ";
	cin >> noOfRedRose;
	cout << "Enter the number of white rose: ";
	cin >> noOfWhiteRose;
	cout << "Enter the number of Tulips: ";
	cin >> noOfTulips;
	redRosePrice = 2 * noOfRedRose;
	whiteRosePrice = 4.10 * noOfWhiteRose;
	TulipPrice = 2.5 * noOfTulips;
	totalPrice = redRosePrice + whiteRosePrice + TulipPrice;
	
	cout << "Original Price: " << totalPrice << endl;

	if( totalPrice > 200){
		cout << "Price after discount: " << totalPrice - (totalPrice * 20 / 100) << endl;
	}
}

			