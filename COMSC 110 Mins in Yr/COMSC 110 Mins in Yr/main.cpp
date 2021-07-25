#include <iostream>

// Write a funct that returns # of mins in a yr
// given # of yrs as a parameter
using namespace std;

double (mins_years) (int mins, int years) {

    mins_years = years * 525600
    return (mins);
}

int main()
{
    int years;
    double mins_years;
    cout << "Enter number of years: ";
    cin >> years;
    mins_years = years * 525600;
    cout << "The number of minutes per year is: " << mins_years << endl;


    return 0;
}

