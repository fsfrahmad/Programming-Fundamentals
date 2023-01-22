#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "Enter the no of rows: ";
    cin >> row;
    int number = 1;

    while(number <= row)
    {
        for (int star = 1; star <= number; star++)
        {
            cout << "*";
        }
        cout << endl;
        number++;
    }
}