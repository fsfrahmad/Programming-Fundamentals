#include <iostream>
using namespace std;
main(){
string movie;
float AdultTicketPrice;
float ChildTicketPrice;
float noOfAdult;
float noOfChild;
float money;
float donation;
float percentageOfDonation;
float moneyAfterDonation;
cout << " Enter Movie Name: ";
cin >> movie;
cout << " Enter Adult Ticket Price: ";
cin >> AdultTicketPrice;
cout << " Enter Child Ticket Price: ";
cin >> ChildTicketPrice;
cout << " Enter No of Adult Ticket Sold: ";
cin >> noOfAdult;
cout << " Enter No of Child Ticket sold: ";
cin >> noOfChild;
cout << " Enter percentage to donate: ";
cin >> percentageOfDonation;
cout << "_________________________________________________" << endl;
money = (AdultTicketPrice * noOfAdult) + (ChildTicketPrice * noOfChild);
donation = money * percentageOfDonation/100;
moneyAfterDonation = money - donation;
cout << "Total amount generated: " << money << endl;
cout << "Amount after donotion: " << moneyAfterDonation;
}



