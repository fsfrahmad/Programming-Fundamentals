#include <iostream>

using namespace std;

int triangle(int row);

int main()
{
    int row;
    cout << "Enter the number of rows of triangle: ";
    cin >> row;
    int result = triangle(row);
    cout << "The number of dots required to display the triangle are: " << result;
}
int triangle(int row)
{
    int sum = 0;
    while (row >= 1)
    {
        sum = sum + row;
        row--;
    }
    return sum;
}