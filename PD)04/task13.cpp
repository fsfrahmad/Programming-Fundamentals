#include <iostream>
using namespace std;
main(){
int holidays;
int workingDays;
int time;

cout << "Enter the number of holidays that tom owner has: ";
cin >> holidays;

workingDays = 365 - holidays;

time = (workingDays * 63) + (holidays * 127);

if( time < 30000 ){
	cout << "Tom sleeps well" << endl; 
	cout << (30000 - time) / 60  << " hours and " << (30000 - time) % 60 << " minutes less for play" << endl ;
	}


if( time > 30000 ){
	cout << "Tom will run away" << endl; 
	cout << (time - 30000) / 60  << " hours and " << (time - 30000) % 60 << " more for play" << endl ;
	}
}	



