#include <iostream>

using namespace std;

int main()
{
    int days;

    cout << "Enter the number of days: ";
    cin >> days;

    int number = 1;
    int patients;
    int treated = 0;
    int untreated = 0;
    int doctors = 7;
    while (number <= days)
    {
        cout << "Enter the number of Patients: ";
        cin >> patients;
        if (number % 3 == 0)
        {
            if (untreated > treated)
            {
                doctors++;
            }
        }
        if (patients <= doctors)
        {
            treated = treated + patients;
        }
        if (patients > doctors)
        {
            treated = treated + doctors;
            untreated = untreated + (patients - doctors);
        }

        cout << "On Day " << number << " Treated patients: " << treated << endl;
        cout << "On Day " << number << " Untreated Patients: " << untreated << endl;
        number++;
    }
    cout << endl;

    cout << "Total Treated patients: " << treated << endl;
    cout << "Total Untreated Patients: " << untreated << endl;
}
