#include <iostream>

using namespace std;

void amplify(int range);

int main()
{
    int range;
    cout << "Enter the range: ";
    cin >> range;
    
    amplify(range);
}
void amplify(int range)
{
    int number = 1;
    while(number <= range)
    {
        if(number % 4 == 0)
        {
            cout << number * 10 << ", ";
        }
        else
        {
            cout << number << ", ";
        }
        number++;
    }
}
