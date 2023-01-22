#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "Enter the no of rows: ";
    cin >> row;
    int number = 1;
    int number1 = 1;
    int x = row;
    while (x >= number1)
    {
        for(int space = x - 1; space >= 1; space--)
        {
            cout << " ";
        }
        for(int star = 1; star <= number; star++)
        {
            cout << "*";
        }
        cout << endl;
        x--;
        number++;
       
    }
    x = 1;
    while(x <= number)
    {
        for(int space = 1; space < number1; space++)
        {
            cout << " ";
        }
        for(int star = row; star >= number1; star--)
        {
            cout << "*";
        }
        cout << endl;
        x++;
        number1++;
    }   
}

    
