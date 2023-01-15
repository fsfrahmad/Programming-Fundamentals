#include <iostream>

using namespace std;

main()
{
     int startingHour;
     int startingMinute;
     int arrivingHour;
     int arrivingMinute;

     cout << "Exam starting time(hour): ";
     cin >> startingHour;
     cout << "Exam starting time(minute): ";
     cin >> startingMinute;
     cout << "Student Arriving time(hour): ";
     cin >> arrivingHour;
     cout << "Student Arriving time(minute): ";
     cin >> arrivingMinute;

     int paperTime;
     int arrivalTime;

     paperTime = (startingHour * 60) + startingMinute;
     arrivalTime = (arrivingHour * 60) + arrivingMinute;

     if (paperTime == arrivalTime)
     {
          cout << "On Time";
     }
     if (paperTime > arrivalTime)
     {
          if (paperTime - arrivalTime <= 30)
          {
               cout << "On Time" << endl
                    << paperTime - arrivalTime << " minutes early before start.";
          }
          else if (paperTime - arrivalTime > 30 && paperTime - arrivalTime < 60)
          {
               cout << "Early" << endl
                    << paperTime - arrivalTime << " minutes early before start.";
          }
          else if (paperTime - arrivalTime > 60)
          {
               cout << "Late" << endl << (paperTime - arrivalTime) / 60 << "Hours and " << (paperTime - arrivalTime) % 60 << "minutes early before start.";
          }
     }
     else if (paperTime < arrivalTime)
     {
          if (arrivalTime - paperTime < 60)
          {
               cout << "Late" << endl << (arrivalTime - paperTime) << " minutes Late after start.";
          }
          else if (arrivalTime - paperTime > 60)
          {
               cout << "Late" << endl << (arrivalTime - paperTime) / 60 << "Hours and " << (arrivalTime - paperTime)  % 60 << "minutes Late start.";
          }
     }
}