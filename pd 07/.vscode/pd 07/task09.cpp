#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int count2 = rows - 1;
    int count = 1;
    for(count <= rows)
    {
        for(int star = 1; star<= count; star++)
        {
            cout << "*";
        }
        for(int space = count2; space >= 1; space--)
        {
            cout << " ";
        }
        cout << endl;
        count++;
    }
}