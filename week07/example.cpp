#include <iostream>
using namespace std;
int sum(int);
int main()
{
    int count;
    cout << "Enter a number: ";
    cin >> count;
    cout << "Sum is: " << sum(count);
}
int sum(int count)
{
    int add = 0;
    for (int number = 1; number <= count; number++)
    {
        add = add + number;
    }
    return add;
}
