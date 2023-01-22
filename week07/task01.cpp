#include <iostream>
using namespace std;
void series(int);
int main()
{
    int n1 = 0, n2 = 1;
    int count;
    cout << "Enter the length of fabonacci series: ";
    cin >> count;
    cout << count << " Number of terms of fabonnaci series are: " << n1 << ", " << n2 << ", ";
    series(count);
}
void series(int count)
{
    int n1 = 0, n2 = 1;
    int sum = 0;
    for (int number = 1; number <= count - 2; number++)
    {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        cout << sum << ", ";
    }
}