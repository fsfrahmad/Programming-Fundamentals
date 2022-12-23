#include <iostream>
using namespace std;
main(){
double MB,KB,Bytes,bits;
cout << "1 MB = 1024 KB" << endl;
cout << "1 KB = 1024 Bytes" << endl;
cout << "1 Byte = 8 bits" << endl;
cout << "Enter the megabytes: ";
cin >> MB;
KB = 1024 * MB;
Bytes = 1024 * KB;
bits = 8 * Bytes;
cout << "No of bits are: " << bits;
}