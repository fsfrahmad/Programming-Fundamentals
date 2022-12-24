#include <iostream>
using namespace std;
main(){
float vegatablePricePerKg;
float fruitPricePerKg;
int noOfVegetables;
int noOfFruits;
float vegatablePrice;
float fruitPrice;
float total;
cout << "Enter price of vegetables per kilogram: ";
cin >> vegatablePricePerKg;
cout << "Enter price of Friuts per kilogram: ";
cin >> fruitPricePerKg;
cout << "Enter total kilogram of vegetables: ";
cin >> noOfVegetables;
cout << "Enter total kilogram of fruits: ";
cin >> noOfFruits;

 vegatablePrice = vegatablePricePerKg * noOfVegetables;
fruitPrice = fruitPricePerKg * noOfFruits;
cout << "Vegetable cost: " << vegatablePrice << endl;
cout << "Fruit cost: " << fruitPrice << endl;
total = vegatablePrice + fruitPrice;
cout << "Total: " << total;
}





