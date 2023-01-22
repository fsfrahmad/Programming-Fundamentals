#include <iostream>

using namespace std;

int main()
{
    float count;
    float number;

    cout << "Enter the count of numbers: ";
    cin >> count;

    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float n4 = 0;
    float n5 = 0;

    for(int x = 1; x <= count; x++)
    {
        cout << "Enter the number "<< x << " : ";
        cin >> number;
        if(number >= 1 && number < 200)
        {
            n1++;
        }
        else if(number >= 200 && number < 400)
        {
            n2++;
        }
        else if(number >= 400 && number < 600)
        {
            n3++;
        }
        else if(number >= 600 && number < 800)
        {
            n4++;
        }
        else if(number >= 800 && number <= 1000)
        {
            n5++;
        }
    }
    float p1 = (n1 / count) * 100;
    float p2 = (n2 / count) * 100;
    float p3 = (n3 / count) * 100;
    float p4 = (n4 / count) * 100;
    float p5 = (n5 / count) * 100;

    cout << "Percentage 1 = " << p1 << endl;
    cout << "Percentage 2 = " << p2 << endl;
    cout << "Percentage 3 = " << p3 << endl;
    cout << "Percentage 4 = " << p4 << endl;
    cout << "Percentage 5 = " << p5 << endl;
    

}