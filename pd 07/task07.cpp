#include <iostream>

using namespace std;

int main()
{
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float range;
    cout << "Enter limit of numbers to be entered: ";
    cin >> range;

    float p1;
    float p2;
    float p3;
    int count = 1;
    int number;
    while (count <= range)
    {   
        cout << "Enter number : ";
        cin >> number; 
        if(number % 2 == 0)
        {
            n1++;
        }
        if(number % 3 == 0)
        {
            n2++;
        }
        if(number % 4 == 0)
        {
            n3++;
        }
        count++;
    }
    p1 = (n1 / range) * 100;
    p2 = (n2 / range) * 100;
    p3 = (n3 / range) * 100;

    cout << "Percentage1 == " << p1 << endl ;
    cout << "Percentage2 == " << p2 << endl ;
    cout << "Percentage3 == " << p3 << endl ;
}