#include <iostream>
using namespace std;
void discountTicket(string,int);
main(){
	string country;
	int ticketPrice;
	while(true){
	cout << "Enter name of country: ";
	cin >> country;
	cout << "Enter ticket price in dollars";
	cin >> ticketPrice;
	discountTicket(country,ticketPrice);
	}
}
void discountTicket(string country,int ticketPrice){
	if(country == "pakistan"){
		cout << "Ticket price after discount is " << ticketPrice - ( ticketPrice * 5 / 100 ) << endl;
	}
	if(country == "ireland"){
		cout << "Ticket price after discount is " << ticketPrice - ( ticketPrice * 10 / 100 ) << endl;
	}
	if(country == "india"){
		cout << "Ticket price after discount is " << ticketPrice - ( ticketPrice * 20 / 100 ) << endl;
	}
	if(country == "england"){
		cout << "Ticket price after discount is " << ticketPrice - ( ticketPrice * 30 / 100 ) << endl;
	}
	if(country == "canada"){
		cout << "Ticket price after discount is " << ticketPrice - ( ticketPrice * 45 / 100 ) << endl;
	}

 }