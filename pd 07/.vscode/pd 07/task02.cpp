#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "Enter the no of rows: ";
    cin >> row;
    int number = 1;

    while(row >= number)
    {
        for (int star = row; star >= number; star--)
        {
            cout << "*";
        }
        cout << endl;
        row--;
    }
}