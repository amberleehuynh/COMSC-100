#include <iostream>

using namespace std;

// Array of months names
string months[] = { "January", "February", "March", "April", "May",
                   "June", "July", "August", "September", "October",
                   "November", "December" };

// Array for # of days in each month
int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Array for # of holidays in each month
int holidays[] = { 2, 1, 0, 0, 1, 0, 1, 0, 1, 1, 2, 1 };

int main()
{
    while (true) {
        string month_request;
        cout << "Input the name of a month: ";
        cin >> month_request;
        if (month_request == "end")
            break;
        int i;
        for (i = 0; i < 12; i++) {
            if (months[i] == month_request)
                break;
        }
        // Invalid month name
        if (i == 12) {
            cout << month_request << " is not the name of a month."
                 << endl;
            break;
        }

        // We know the month name is in the array
        int answer_days;
        int answer_holidays;
        answer_days = days[i];
        answer_holidays = holidays[i];

        cout << "There are " << answer_days << " days and " << answer_holidays
             << " holiday(s) in " << month_request << "." << endl;
        cout << "\n";
    }
    return 0;
}



