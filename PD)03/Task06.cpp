#include <iostream>
using namespace std;
main(){
float sizeOfBag;
float costOfBag;
float areaOfBag;
float costOfBagPerPound;
float areaPerSQfeet;
cout << "Enter bag size in pounds: ";
cin >> sizeOfBag;
cout << "Enter cost of the bag: ";
cin >> costOfBag;
cout << "Enter area covered by each bag in square feets: ";
cin >> areaOfBag;
costOfBagPerPound = costOfBag / sizeOfBag;
 areaPerSQfeet = costOfBag / areaOfBag;
cout << " Cost of fertilizer per pound: " << costOfBagPerPound << endl;
cout << " Cost of fertilizing the area per square feet: " << areaPerSQfeet;
}


