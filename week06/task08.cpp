#include <iostream>

using namespace std;

float totalIncome(string screening,int rows, int columns);

main(){
    int rows;
    int columns;
    string screening;
    cout << "Enter type of screening: ";
    cin >> screening;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    cout << "The total revenue of the hall is: " << totalIncome(screening, rows, columns) << " EUR. " << endl;

}
float totalIncome(string screening,int rows, int columns)
{
    if(screening == "Premiere")
    {
        return rows * columns * 12.00;
    }
    else if(screening == "Normal")
    {
        return rows * columns * 7.50;
    }
    else if(screening == "Discounted")
    {
        return rows * columns * 5.00;
    }
}